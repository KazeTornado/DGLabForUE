// Copyright Epic Games, Inc. All Rights Reserved.

#include "Android/AndroidBluetoothManager.h"

#if DGLAB_BLUETOOTH_ENABLED && PLATFORM_ANDROID

#include "Async/Async.h"

// Java类路径（GameActivity的静态内部类）
#define JAVA_BLUETOOTH_MANAGER_CLASS "com/epicgames/unreal/GameActivity$DGLabBluetoothManager"

FAndroidBluetoothManager::FAndroidBluetoothManager()
	: JavaBluetoothManagerClass(nullptr)
	, JavaBluetoothManagerObject(nullptr)
	, Java_Initialize_Method(nullptr)
	, Java_StartScan_Method(nullptr)
	, Java_StopScan_Method(nullptr)
	, Java_ConnectToDevice_Method(nullptr)
	, Java_Disconnect_Method(nullptr)
	, Java_WriteData_Method(nullptr)
	, Java_ReadBattery_Method(nullptr)
	, Java_SubscribeNotifications_Method(nullptr)
	, ConnectedDevice(nullptr)
{
	bIsDestroying = false;
	bIsConnected = false;
	bIsScanning = false;
	bIsInitialized = false;
}

FAndroidBluetoothManager::~FAndroidBluetoothManager()
{
	// 设置销毁标志
	bIsDestroying = true;

	// 清空所有委托回调
	OnDeviceFound.Unbind();
	OnScanComplete.Unbind();
	OnError.Unbind();
	OnConnected.Unbind();
	OnDisconnected.Unbind();
	OnDataReceived.Unbind();
	OnBatteryUpdate.Unbind();

	// 停止扫描和断开连接
	StopScan();
	Disconnect();

	// 清理JNI资源
	CleanupJNI();
}

bool FAndroidBluetoothManager::Initialize()
{
	if (bIsInitialized)
	{
		return true;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 初始化蓝牙管理器..."));

	if (!InitializeJNI())
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] JNI初始化失败"));
		TriggerError(EDgLabBluetoothError::AdapterNotFound);
		return false;
	}

	// 调用Java层初始化
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (Env && JavaBluetoothManagerObject && Java_Initialize_Method)
	{
		FScopeLock Lock(&JNILock);
		jboolean Result = Env->CallBooleanMethod(JavaBluetoothManagerObject, Java_Initialize_Method);

		if (Result)
		{
			bIsInitialized = true;
			UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 蓝牙管理器初始化成功"));
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] Java层初始化失败"));
			TriggerError(EDgLabBluetoothError::AdapterNotFound);
			return false;
		}
	}

	UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 无法获取JNI环境"));
	TriggerError(EDgLabBluetoothError::AdapterNotFound);
	return false;
}

bool FAndroidBluetoothManager::InitializeJNI()
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (!Env)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 无法获取JNI环境"));
		return false;
	}

	FScopeLock Lock(&JNILock);

	// 使用正确的方式查找Java类（通过Activity的ClassLoader）
	// 先获取GameActivity类
	jclass GameActivityClass = FAndroidApplication::FindJavaClass("com/epicgames/unreal/GameActivity");
	if (!GameActivityClass)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 找不到GameActivity类"));
		return false;
	}

	// 获取GameActivity的ClassLoader
	jmethodID GetClassLoaderMethod = Env->GetMethodID(GameActivityClass, "getClassLoader", "()Ljava/lang/ClassLoader;");
	jobject GameActivityObject = FAndroidApplication::GetGameActivityThis();
	jobject ClassLoaderObject = Env->CallObjectMethod(GameActivityObject, GetClassLoaderMethod);
	
	if (!ClassLoaderObject)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 无法获取ClassLoader"));
		Env->DeleteLocalRef(GameActivityClass);
		return false;
	}

	// 通过ClassLoader加载DGLabBluetoothManager类
	jclass ClassLoaderClass = Env->FindClass("java/lang/ClassLoader");
	jmethodID LoadClassMethod = Env->GetMethodID(ClassLoaderClass, "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
	
	// 注意：loadClass使用点分隔的类名
	jstring ClassNameString = Env->NewStringUTF("com.epicgames.unreal.GameActivity$DGLabBluetoothManager");
	jclass LocalClass = (jclass)Env->CallObjectMethod(ClassLoaderObject, LoadClassMethod, ClassNameString);
	
	Env->DeleteLocalRef(ClassNameString);
	Env->DeleteLocalRef(ClassLoaderClass);
	Env->DeleteLocalRef(ClassLoaderObject);
	Env->DeleteLocalRef(GameActivityClass);
	
	if (!LocalClass)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 找不到Java类: %s"), TEXT(JAVA_BLUETOOTH_MANAGER_CLASS));
		Env->ExceptionDescribe();
		Env->ExceptionClear();
		return false;
	}

	// 创建全局引用
	JavaBluetoothManagerClass = (jclass)Env->NewGlobalRef(LocalClass);
	Env->DeleteLocalRef(LocalClass);

	// 获取构造函数
	jmethodID Constructor = Env->GetMethodID(JavaBluetoothManagerClass, "<init>", "(J)V");
	if (!Constructor)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 找不到构造函数"));
		return false;
	}

	// 创建Java对象实例（传入this指针以便Java层回调）
	jobject LocalObject = Env->NewObject(JavaBluetoothManagerClass, Constructor, (jlong)this);
	if (!LocalObject)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 无法创建Java对象实例"));
		return false;
	}

	// 创建全局引用
	JavaBluetoothManagerObject = Env->NewGlobalRef(LocalObject);
	Env->DeleteLocalRef(LocalObject);

	// 缓存Java方法ID
	Java_Initialize_Method = Env->GetMethodID(JavaBluetoothManagerClass, "initialize", "()Z");
	Java_StartScan_Method = Env->GetMethodID(JavaBluetoothManagerClass, "startScan", "(F)Z");
	Java_StopScan_Method = Env->GetMethodID(JavaBluetoothManagerClass, "stopScan", "()V");
	Java_ConnectToDevice_Method = Env->GetMethodID(JavaBluetoothManagerClass, "connectToDevice", "(Ljava/lang/String;)Z");
	Java_Disconnect_Method = Env->GetMethodID(JavaBluetoothManagerClass, "disconnect", "()V");
	Java_WriteData_Method = Env->GetMethodID(JavaBluetoothManagerClass, "writeData", "([B)Z");
	Java_ReadBattery_Method = Env->GetMethodID(JavaBluetoothManagerClass, "readBattery", "()Z");
	Java_SubscribeNotifications_Method = Env->GetMethodID(JavaBluetoothManagerClass, "subscribeNotifications", "()Z");

	// 检查是否所有方法都找到了
	if (!Java_Initialize_Method || !Java_StartScan_Method || !Java_StopScan_Method ||
		!Java_ConnectToDevice_Method || !Java_Disconnect_Method || !Java_WriteData_Method ||
		!Java_ReadBattery_Method || !Java_SubscribeNotifications_Method)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 部分Java方法未找到"));
		return false;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] JNI初始化成功"));
	return true;
}

void FAndroidBluetoothManager::CleanupJNI()
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (!Env)
	{
		return;
	}

	FScopeLock Lock(&JNILock);

	if (JavaBluetoothManagerObject)
	{
		Env->DeleteGlobalRef(JavaBluetoothManagerObject);
		JavaBluetoothManagerObject = nullptr;
	}

	if (JavaBluetoothManagerClass)
	{
		Env->DeleteGlobalRef(JavaBluetoothManagerClass);
		JavaBluetoothManagerClass = nullptr;
	}
}

bool FAndroidBluetoothManager::StartScan(float ScanDuration)
{
	if (!bIsInitialized)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 蓝牙管理器未初始化"));
		TriggerError(EDgLabBluetoothError::AdapterNotFound);
		return false;
	}

	if (bIsScanning)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 已经在扫描中"));
		return false;
	}

	// 清空之前的设备列表
	ClearDiscoveredDevices();

	// 调用Java层开始扫描
	return Java_StartScan(ScanDuration);
}

bool FAndroidBluetoothManager::Java_StartScan(float ScanDuration)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (Env && JavaBluetoothManagerObject && Java_StartScan_Method)
	{
		FScopeLock Lock(&JNILock);
		jboolean Result = Env->CallBooleanMethod(JavaBluetoothManagerObject, Java_StartScan_Method, (jfloat)ScanDuration);

		if (Result)
		{
			bIsScanning = true;
			UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 开始扫描蓝牙设备 (持续时间: %.1f秒)"), ScanDuration);
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 启动扫描失败"));
			TriggerError(EDgLabBluetoothError::ScanFailed);
			return false;
		}
	}

	return false;
}

void FAndroidBluetoothManager::StopScan()
{
	if (!bIsScanning)
	{
		return;
	}

	Java_StopScan();
	bIsScanning = false;

	UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 停止扫描蓝牙设备"));

	// 触发扫描完成回调
	if (!bIsDestroying && OnScanComplete.IsBound())
	{
		AsyncTask(ENamedThreads::GameThread, [this]()
		{
			if (!bIsDestroying && OnScanComplete.IsBound())
			{
				OnScanComplete.Execute();
			}
		});
	}
}

void FAndroidBluetoothManager::Java_StopScan()
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (Env && JavaBluetoothManagerObject && Java_StopScan_Method)
	{
		FScopeLock Lock(&JNILock);
		Env->CallVoidMethod(JavaBluetoothManagerObject, Java_StopScan_Method);
	}
}

void FAndroidBluetoothManager::ClearDiscoveredDevices()
{
	FScopeLock Lock(&DeviceListLock);
	DiscoveredDevices.Empty();
}

bool FAndroidBluetoothManager::ConnectToDevice(const FString& DeviceAddress)
{
	if (bIsConnected)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 已经连接到设备，请先断开"));
		return false;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 尝试连接设备: %s"), *DeviceAddress);

	return Java_ConnectToDevice(DeviceAddress);
}

bool FAndroidBluetoothManager::Java_ConnectToDevice(const FString& DeviceAddress)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (Env && JavaBluetoothManagerObject && Java_ConnectToDevice_Method)
	{
		FScopeLock Lock(&JNILock);

		// 将FString转换为jstring
		jstring JAddress = Env->NewStringUTF(TCHAR_TO_UTF8(*DeviceAddress));
		jboolean Result = Env->CallBooleanMethod(JavaBluetoothManagerObject, Java_ConnectToDevice_Method, JAddress);
		Env->DeleteLocalRef(JAddress);

		if (Result)
		{
			UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 连接请求已发送"));
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 连接请求失败"));
			TriggerError(EDgLabBluetoothError::ConnectionFailed);
			return false;
		}
	}

	return false;
}

void FAndroidBluetoothManager::Disconnect()
{
	if (!bIsConnected && ConnectedDevice == nullptr)
	{
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 断开设备连接"));

	Java_Disconnect();

	bIsConnected = false;
	ConnectedDevice = nullptr;

	// 触发断开连接回调
	if (!bIsDestroying && OnDisconnected.IsBound())
	{
		AsyncTask(ENamedThreads::GameThread, [this]()
		{
			if (!bIsDestroying && OnDisconnected.IsBound())
			{
				OnDisconnected.Execute();
			}
		});
	}
}

void FAndroidBluetoothManager::Java_Disconnect()
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (Env && JavaBluetoothManagerObject && Java_Disconnect_Method)
	{
		FScopeLock Lock(&JNILock);
		Env->CallVoidMethod(JavaBluetoothManagerObject, Java_Disconnect_Method);
	}
}

const FDgLabDeviceInfo* FAndroidBluetoothManager::GetConnectedDevice() const
{
	return ConnectedDevice;
}

bool FAndroidBluetoothManager::WriteData(const TArray<uint8>& Data)
{
	if (!bIsConnected)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 未连接或写入特性不可用"));
		return false;
	}

	if (Data.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 写入数据为空"));
		return false;
	}

	return Java_WriteData(Data);
}

bool FAndroidBluetoothManager::Java_WriteData(const TArray<uint8>& Data)
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (Env && JavaBluetoothManagerObject && Java_WriteData_Method)
	{
		// 安全性检查
		if (bIsDestroying || !bIsConnected)
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 写入取消：设备已断开或对象已销毁"));
			return false;
		}

		FScopeLock Lock(&JNILock);

		// 将TArray<uint8>转换为jbyteArray
		jbyteArray JData = Env->NewByteArray(Data.Num());
		Env->SetByteArrayRegion(JData, 0, Data.Num(), (jbyte*)Data.GetData());

		jboolean Result = Env->CallBooleanMethod(JavaBluetoothManagerObject, Java_WriteData_Method, JData);
		Env->DeleteLocalRef(JData);

		if (Result)
		{
			UE_LOG(LogTemp, Verbose, TEXT("[DgLab-Android] 数据写入成功"));
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 数据写入失败"));
			return false;
		}
	}

	return false;
}

bool FAndroidBluetoothManager::ReadBattery()
{
	if (!bIsConnected)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 未连接或电量特性不可用"));
		return false;
	}

	return Java_ReadBattery();
}

bool FAndroidBluetoothManager::Java_ReadBattery()
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (Env && JavaBluetoothManagerObject && Java_ReadBattery_Method)
	{
		// 安全性检查
		if (bIsDestroying || !bIsConnected)
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 读取取消：设备已断开或对象已销毁"));
			return false;
		}

		FScopeLock Lock(&JNILock);
		jboolean Result = Env->CallBooleanMethod(JavaBluetoothManagerObject, Java_ReadBattery_Method);

		return Result;
	}

	return false;
}

bool FAndroidBluetoothManager::SubscribeNotifications()
{
	if (!bIsConnected)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 未连接，无法订阅通知"));
		return false;
	}

	return Java_SubscribeNotifications();
}

bool FAndroidBluetoothManager::Java_SubscribeNotifications()
{
	JNIEnv* Env = FAndroidApplication::GetJavaEnv();
	if (Env && JavaBluetoothManagerObject && Java_SubscribeNotifications_Method)
	{
		FScopeLock Lock(&JNILock);
		jboolean Result = Env->CallBooleanMethod(JavaBluetoothManagerObject, Java_SubscribeNotifications_Method);

		if (Result)
		{
			UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 通知订阅成功"));
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[DgLab-Android] 订阅通知失败"));
			return false;
		}
	}

	return false;
}

// ========== JNI回调处理（由Java层调用） ==========

void FAndroidBluetoothManager::OnDeviceDiscovered(const FString& DeviceAddress, const FString& DeviceName, int32 Rssi)
{
	if (bIsDestroying)
	{
		return;
	}

	// 检查是否已发现此设备
	if (IsDeviceAlreadyDiscovered(DeviceAddress))
	{
		return;
	}

	// 判断设备类型
	EDgLabDeviceType DeviceType = FDgLabDeviceInfo::GetDeviceTypeFromName(DeviceName);
	if (DeviceType == EDgLabDeviceType::Unknown)
	{
		// 不是DG-LAB设备，忽略
		return;
	}

	// 创建设备信息
	FDgLabDeviceInfo DeviceInfo;
	DeviceInfo.DeviceAddress = DeviceAddress;
	DeviceInfo.DeviceName = DeviceName;
	DeviceInfo.DeviceType = DeviceType;
	DeviceInfo.SignalStrength = Rssi;
	DeviceInfo.bIsConnectable = true;
	DeviceInfo.DeviceId = DeviceAddress;

	// 添加到设备列表
	{
		FScopeLock Lock(&DeviceListLock);
		DiscoveredDevices.Add(DeviceInfo);
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 发现设备: %s (%s) RSSI: %d dBm"), 
		*DeviceName, *DeviceAddress, Rssi);

	// 触发设备发现回调
	if (!bIsDestroying && OnDeviceFound.IsBound())
	{
		AsyncTask(ENamedThreads::GameThread, [this, DeviceInfo]()
		{
			if (!bIsDestroying && OnDeviceFound.IsBound())
			{
				OnDeviceFound.Execute(DeviceInfo);
			}
		});
	}
}

void FAndroidBluetoothManager::OnConnectionStateChanged(bool bConnected)
{
	if (bIsDestroying)
	{
		return;
	}

	bIsConnected = bConnected;

	if (bConnected)
	{
		UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 设备连接成功"));

		if (OnConnected.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [this]()
			{
				if (!bIsDestroying && OnConnected.IsBound())
				{
					OnConnected.Execute();
				}
			});
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab-Android] 设备连接已断开"));

		if (OnDisconnected.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [this]()
			{
				if (!bIsDestroying && OnDisconnected.IsBound())
				{
					OnDisconnected.Execute();
				}
			});
		}
	}
}

void FAndroidBluetoothManager::OnDataReceivedFromJava(const TArray<uint8>& Data)
{
	if (bIsDestroying)
	{
		return;
	}

	// 打印接收到的数据（用于调试）
	FString DataHex;
	for (uint8 Byte : Data)
	{
		DataHex += FString::Printf(TEXT("%02X "), Byte);
	}
	UE_LOG(LogTemp, Verbose, TEXT("[DgLab-Android] 接收数据: %s"), *DataHex);

	// 触发回调
	if (OnDataReceived.IsBound())
	{
		AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			if (!bIsDestroying && OnDataReceived.IsBound())
			{
				OnDataReceived.Execute(Data);
			}
		});
	}
}

void FAndroidBluetoothManager::OnBatteryLevelReceived(uint8 BatteryLevel)
{
	if (bIsDestroying)
	{
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLab-Android] 电量: %d%%"), BatteryLevel);

	// 触发回调
	if (OnBatteryUpdate.IsBound())
	{
		AsyncTask(ENamedThreads::GameThread, [this, BatteryLevel]()
		{
			if (!bIsDestroying && OnBatteryUpdate.IsBound())
			{
				OnBatteryUpdate.Execute(BatteryLevel);
			}
		});
	}
}

void FAndroidBluetoothManager::OnErrorFromJava(int32 ErrorCode)
{
	if (bIsDestroying)
	{
		return;
	}

	EDgLabBluetoothError ErrorType = static_cast<EDgLabBluetoothError>(ErrorCode);
	TriggerError(ErrorType);
}

bool FAndroidBluetoothManager::IsDeviceAlreadyDiscovered(const FString& DeviceAddress) const
{
	FScopeLock Lock(&DeviceListLock);
	return DiscoveredDevices.ContainsByPredicate([&DeviceAddress](const FDgLabDeviceInfo& Info)
	{
		return Info.DeviceAddress == DeviceAddress;
	});
}

void FAndroidBluetoothManager::TriggerError(EDgLabBluetoothError ErrorType)
{
	if (!bIsDestroying && OnError.IsBound())
	{
		AsyncTask(ENamedThreads::GameThread, [this, ErrorType]()
		{
			if (!bIsDestroying && OnError.IsBound())
			{
				OnError.Execute(ErrorType);
			}
		});
	}
}

// ========== JNI导出函数（供Java层调用） ==========
// 注意：Java类为GameActivity的静态内部类 DGLabBluetoothManager
// JNI函数名规则：$符号编码为 _00024

extern "C"
{
	// 设备发现回调
	JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_00024DGLabBluetoothManager_nativeOnDeviceDiscovered(
		JNIEnv* env, jclass clazz, jlong nativePtr, jstring deviceAddress, jstring deviceName, jint rssi)
	{
		if (nativePtr == 0) return;

		FAndroidBluetoothManager* Manager = reinterpret_cast<FAndroidBluetoothManager*>(nativePtr);

		const char* addressChars = env->GetStringUTFChars(deviceAddress, nullptr);
		const char* nameChars = env->GetStringUTFChars(deviceName, nullptr);

		FString Address(UTF8_TO_TCHAR(addressChars));
		FString Name(UTF8_TO_TCHAR(nameChars));

		env->ReleaseStringUTFChars(deviceAddress, addressChars);
		env->ReleaseStringUTFChars(deviceName, nameChars);

		Manager->OnDeviceDiscovered(Address, Name, (int32)rssi);
	}

	// 连接状态变化回调
	JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_00024DGLabBluetoothManager_nativeOnConnectionStateChanged(
		JNIEnv* env, jclass clazz, jlong nativePtr, jboolean connected)
	{
		if (nativePtr == 0) return;

		FAndroidBluetoothManager* Manager = reinterpret_cast<FAndroidBluetoothManager*>(nativePtr);
		Manager->OnConnectionStateChanged(connected);
	}

	// 数据接收回调
	JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_00024DGLabBluetoothManager_nativeOnDataReceived(
		JNIEnv* env, jclass clazz, jlong nativePtr, jbyteArray data)
	{
		if (nativePtr == 0) return;

		FAndroidBluetoothManager* Manager = reinterpret_cast<FAndroidBluetoothManager*>(nativePtr);

		jsize Length = env->GetArrayLength(data);
		jbyte* Bytes = env->GetByteArrayElements(data, nullptr);

		TArray<uint8> DataArray;
		DataArray.SetNum(Length);
		FMemory::Memcpy(DataArray.GetData(), Bytes, Length);

		env->ReleaseByteArrayElements(data, Bytes, JNI_ABORT);

		Manager->OnDataReceivedFromJava(DataArray);
	}

	// 电量更新回调
	JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_00024DGLabBluetoothManager_nativeOnBatteryLevelReceived(
		JNIEnv* env, jclass clazz, jlong nativePtr, jint batteryLevel)
	{
		if (nativePtr == 0) return;

		FAndroidBluetoothManager* Manager = reinterpret_cast<FAndroidBluetoothManager*>(nativePtr);
		Manager->OnBatteryLevelReceived((uint8)batteryLevel);
	}

	// 错误回调
	JNIEXPORT void JNICALL Java_com_epicgames_unreal_GameActivity_00024DGLabBluetoothManager_nativeOnError(
		JNIEnv* env, jclass clazz, jlong nativePtr, jint errorCode)
	{
		if (nativePtr == 0) return;

		FAndroidBluetoothManager* Manager = reinterpret_cast<FAndroidBluetoothManager*>(nativePtr);
		Manager->OnErrorFromJava((int32)errorCode);
	}
}

#endif // DGLAB_BLUETOOTH_ENABLED && PLATFORM_ANDROID

