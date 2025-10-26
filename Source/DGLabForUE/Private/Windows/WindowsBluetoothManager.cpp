// Copyright Epic Games, Inc. All Rights Reserved.

#include "Windows/WindowsBluetoothManager.h"

#if DGLAB_BLUETOOTH_ENABLED

#include "Async/Async.h"

FWindowsBluetoothManager::FWindowsBluetoothManager()
	: ConnectedDevice(nullptr)
{
	// 初始化基类的 atomic 标志位（不能在初始化列表中初始化）
	bIsScanning = false;
	bIsConnected = false;
	bIsInitialized = false;
	bIsDestroying = false;
}

FWindowsBluetoothManager::~FWindowsBluetoothManager()
{
	// 设置销毁标志，防止触发异步回调导致野指针访问
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
}

bool FWindowsBluetoothManager::Initialize()
{
	if (bIsInitialized)
	{
		return true;
	}

	try
	{
		// 创建蓝牙LE广播监听器
		AdvertisementWatcher = WinRTAdvertisement::BluetoothLEAdvertisementWatcher();
		
		// 设置扫描模式为主动扫描
		AdvertisementWatcher.ScanningMode(WinRTAdvertisement::BluetoothLEScanningMode::Active);
		
		// 注册广播接收事件
		ReceivedToken = AdvertisementWatcher.Received([this](WinRTAdvertisement::BluetoothLEAdvertisementWatcher sender, WinRTAdvertisement::BluetoothLEAdvertisementReceivedEventArgs args)
		{
			OnAdvertisementReceived(sender, args);
		});

		// 注册监听器停止事件
		StoppedToken = AdvertisementWatcher.Stopped([this](WinRTAdvertisement::BluetoothLEAdvertisementWatcher sender, WinRTAdvertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs args)
		{
			OnAdvertisementWatcherStopped(sender, args);
		});

		bIsInitialized = true;
		UE_LOG(LogTemp, Log, TEXT("[DgLab] 蓝牙管理器初始化成功"));
		return true;
	}
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 蓝牙管理器初始化失败: %s"), *ErrorMsg);
		TriggerError(EDgLabBluetoothError::AdapterNotFound);
		return false;
	}
}

bool FWindowsBluetoothManager::StartScan(float ScanDuration)
{
	if (!bIsInitialized)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab] 蓝牙管理器未初始化"));
		TriggerError(EDgLabBluetoothError::AdapterNotFound);
		return false;
	}

	if (bIsScanning)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab] 已经在扫描中"));
		return false;
	}

	try
	{
		// 清空之前的设备列表
		ClearDiscoveredDevices();

		// 开始扫描
		AdvertisementWatcher.Start();
		bIsScanning = true;

		UE_LOG(LogTemp, Log, TEXT("[DgLab] 开始扫描蓝牙设备 (持续时间: %.1f秒)"), ScanDuration);

		// 如果设置了扫描时长，则定时停止
		// 注意: 定时器需要在组件层实现，这里只标记扫描时长
		// TODO: 在调用方实现定时停止逻辑

		return true;
	}
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 启动扫描失败: %s"), *ErrorMsg);
		TriggerError(EDgLabBluetoothError::ScanFailed);
		bIsScanning = false;
		return false;
	}
}

void FWindowsBluetoothManager::StopScan()
{
	if (!bIsScanning)
	{
		return;
	}

	try
	{
		if (AdvertisementWatcher != nullptr)
		{
			AdvertisementWatcher.Stop();
		}
		bIsScanning = false;
		UE_LOG(LogTemp, Log, TEXT("[DgLab] 停止扫描蓝牙设备"));

		// 触发扫描完成回调（如果不是在销毁过程中）
		if (!bIsDestroying && OnScanComplete.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [this]()
			{
				if (!bIsDestroying)
				{
					OnScanComplete.Execute();
				}
			});
		}
	}
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 停止扫描失败: %s"), *ErrorMsg);
	}
}

void FWindowsBluetoothManager::ClearDiscoveredDevices()
{
	FScopeLock Lock(&DeviceListLock);
	DiscoveredDevices.Empty();
}

bool FWindowsBluetoothManager::ConnectToDevice(const FString& DeviceAddress)
{
	if (bIsConnected)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab] 已经连接到设备，请先断开"));
		return false;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLab] 尝试连接设备: %s"), *DeviceAddress);
	
	// 将地址字符串转换为uint64
	uint64 BluetoothAddress = ConvertAddressStringToUint64(DeviceAddress);
	if (BluetoothAddress == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 无效的设备地址格式: %s"), *DeviceAddress);
		TriggerError(EDgLabBluetoothError::DeviceNotFound);
		return false;
	}

	// 在后台线程执行异步连接操作
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, BluetoothAddress, DeviceAddress]()
	{
		// 安全性检查：确保对象未被销毁
		if (bIsDestroying)
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLab] 连接取消：对象已销毁"));
			return;
		}

		try
		{
			UE_LOG(LogTemp, Log, TEXT("[DgLab] 正在异步连接设备..."));
			
			// 异步获取蓝牙设备对象（这会阻塞当前后台线程，但不会阻塞游戏线程）
			auto Device = WinRTBluetooth::BluetoothLEDevice::FromBluetoothAddressAsync(BluetoothAddress).get();
			
			if (!Device)
			{
				UE_LOG(LogTemp, Error, TEXT("[DgLab] 无法获取蓝牙设备对象"));
				AsyncTask(ENamedThreads::GameThread, [this]()
				{
					if (!bIsDestroying)
					{
						TriggerError(EDgLabBluetoothError::DeviceNotFound);
					}
				});
				return;
			}

			// 检查初始连接状态
			auto ConnectionStatus = Device.ConnectionStatus();
			UE_LOG(LogTemp, Log, TEXT("[DgLab] 设备初始连接状态: %d (0=Disconnected, 1=Connected)"), (int32)ConnectionStatus);

			// 保存设备对象
			BluetoothDevice = Device;
			
			// 订阅连接状态变化事件
			ConnectionStatusChangedToken = BluetoothDevice.ConnectionStatusChanged(
				[this](WinRTBluetooth::BluetoothLEDevice sender, winrt::Windows::Foundation::IInspectable args)
				{
					OnConnectionStatusChanged(sender, args);
				}
			);

			// 重要：在Windows BLE API中，仅获取设备对象不会建立连接
			// 需要访问GATT服务才会触发实际的BLE连接
			UE_LOG(LogTemp, Log, TEXT("[DgLab] 正在访问GATT服务以建立连接..."));
			
			// 获取所有GATT服务（这会触发实际的BLE连接）
			auto GattServicesResult = Device.GetGattServicesAsync().get();
			
			if (GattServicesResult.Status() != WinRTGatt::GattCommunicationStatus::Success)
			{
				UE_LOG(LogTemp, Error, TEXT("[DgLab] 获取GATT服务失败，状态: %d"), (int32)GattServicesResult.Status());
				AsyncTask(ENamedThreads::GameThread, [this]()
				{
					if (!bIsDestroying)
					{
						TriggerError(EDgLabBluetoothError::ConnectionFailed);
					}
				});
				return;
			}
			
			// 再次检查连接状态
			ConnectionStatus = Device.ConnectionStatus();
			UE_LOG(LogTemp, Log, TEXT("[DgLab] GATT访问后连接状态: %d"), (int32)ConnectionStatus);
			
			auto Services = GattServicesResult.Services();
			UE_LOG(LogTemp, Log, TEXT("[DgLab] 发现 %d 个GATT服务"), Services.Size());

			// 检查是否连接成功
			if (ConnectionStatus == WinRTBluetooth::BluetoothConnectionStatus::Connected)
			{
				bIsConnected = true;
				UE_LOG(LogTemp, Log, TEXT("[DgLab] ✓ 设备连接成功！"));
				
				// 获取GATT特性
				if (GetGattCharacteristics())
				{
					UE_LOG(LogTemp, Log, TEXT("[DgLab] ✓ GATT特性获取成功"));
					
					// 订阅通知
					if (SubscribeNotifications())
					{
						UE_LOG(LogTemp, Log, TEXT("[DgLab] ✓ 通知订阅成功"));
					}
				}
				
				// 回到游戏线程触发回调
				AsyncTask(ENamedThreads::GameThread, [this]()
				{
					if (!bIsDestroying && OnConnected.IsBound())
					{
						OnConnected.Execute();
					}
				});
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("[DgLab] 设备仍未连接，等待状态变化..."));
				// 连接状态变化会通过ConnectionStatusChanged事件通知
			}
		}
		catch (const winrt::hresult_error& ex)
		{
			FString ErrorMsg = FString(ex.message().c_str());
			UE_LOG(LogTemp, Error, TEXT("[DgLab] 连接设备失败: %s (HRESULT: 0x%08X)"), *ErrorMsg, ex.code().value);
			
			// 回到游戏线程触发错误回调
			AsyncTask(ENamedThreads::GameThread, [this]()
			{
				if (!bIsDestroying)
				{
					TriggerError(EDgLabBluetoothError::ConnectionFailed);
				}
			});
		}
	});
	
	return true;
}

void FWindowsBluetoothManager::Disconnect()
{
	if (!bIsConnected && BluetoothDevice == nullptr)
	{
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLab] 断开设备连接"));
	
	try
	{
		// 取消订阅通知特性
		if (NotifyCharacteristic != nullptr && NotifyValueChangedToken.value != 0)
		{
			NotifyCharacteristic.ValueChanged(NotifyValueChangedToken);
			NotifyValueChangedToken.value = 0;
		}

		// 清空GATT特性对象
		WriteCharacteristic = nullptr;
		NotifyCharacteristic = nullptr;
		BatteryCharacteristic = nullptr;

		// 取消订阅连接状态变化事件
		if (BluetoothDevice != nullptr && ConnectionStatusChangedToken.value != 0)
		{
			BluetoothDevice.ConnectionStatusChanged(ConnectionStatusChangedToken);
			ConnectionStatusChangedToken.value = 0;
		}

		// 关闭设备（释放资源）
		if (BluetoothDevice != nullptr)
		{
			BluetoothDevice.Close();
			BluetoothDevice = nullptr;
		}

		bIsConnected = false;
		ConnectedDevice = nullptr;

		UE_LOG(LogTemp, Log, TEXT("[DgLab] 设备已断开"));

		// 触发断开连接回调
		if (!bIsDestroying && OnDisconnected.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [this]()
			{
				if (!bIsDestroying)
				{
					OnDisconnected.Execute();
				}
			});
		}
	}
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 断开连接时发生错误: %s"), *ErrorMsg);
	}
}

const FDgLabDeviceInfo* FWindowsBluetoothManager::GetConnectedDevice() const
{
	return ConnectedDevice;
}

void FWindowsBluetoothManager::OnAdvertisementReceived(WinRTAdvertisement::BluetoothLEAdvertisementWatcher sender, WinRTAdvertisement::BluetoothLEAdvertisementReceivedEventArgs args)
{
	try
	{
		// 获取设备地址
		uint64 BluetoothAddress = args.BluetoothAddress();
		FString DeviceAddress = FString::Printf(TEXT("%012llX"), BluetoothAddress);
		
		// 格式化为MAC地址格式 (XX:XX:XX:XX:XX:XX)
		FString FormattedAddress;
		for (int32 i = 0; i < DeviceAddress.Len(); i += 2)
		{
			if (i > 0)
			{
				FormattedAddress += TEXT(":");
			}
			FormattedAddress += DeviceAddress.Mid(i, 2);
		}

		// 检查是否已发现此设备
		if (IsDeviceAlreadyDiscovered(FormattedAddress))
		{
			return;
		}

		// 获取设备名称
		FString DeviceName;
		auto LocalName = args.Advertisement().LocalName();
		if (!LocalName.empty())
		{
			DeviceName = FString(LocalName.c_str());
		}
		else
		{
			DeviceName = TEXT("Unknown Device");
		}

		// 判断设备类型（只处理DG-LAB设备）
		EDgLabDeviceType DeviceType = FDgLabDeviceInfo::GetDeviceTypeFromName(DeviceName);
		if (DeviceType == EDgLabDeviceType::Unknown)
		{
			// 不是DG-LAB设备，忽略
			return;
		}

		// 获取信号强度
		int16 Rssi = args.RawSignalStrengthInDBm();

		// 创建设备信息
		FDgLabDeviceInfo DeviceInfo;
		DeviceInfo.DeviceAddress = FormattedAddress;
		DeviceInfo.DeviceName = DeviceName;
		DeviceInfo.DeviceType = DeviceType;
		DeviceInfo.SignalStrength = Rssi;
		DeviceInfo.bIsConnectable = true;
		DeviceInfo.DeviceId = DeviceAddress; // 存储原始地址用于连接

		// 添加到设备列表
		{
			FScopeLock Lock(&DeviceListLock);
			DiscoveredDevices.Add(DeviceInfo);
		}

		UE_LOG(LogTemp, Log, TEXT("[DgLab] 发现设备: %s (%s) RSSI: %d dBm"), 
			*DeviceName, *FormattedAddress, Rssi);

		// 触发设备发现回调（如果不是在销毁过程中）
		if (!bIsDestroying && OnDeviceFound.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [this, DeviceInfo]()
			{
				if (!bIsDestroying)
				{
					OnDeviceFound.Execute(DeviceInfo);
				}
			});
		}
	}
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 处理广播数据失败: %s"), *ErrorMsg);
	}
}

void FWindowsBluetoothManager::OnAdvertisementWatcherStopped(WinRTAdvertisement::BluetoothLEAdvertisementWatcher sender, WinRTAdvertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs args)
{
	bIsScanning = false;
	
	auto Error = args.Error();
	if (Error != WinRTBluetooth::BluetoothError::Success)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 蓝牙扫描器异常停止，错误代码: %d"), (int32)Error);
		TriggerError(EDgLabBluetoothError::ScanFailed);
	}
}

bool FWindowsBluetoothManager::IsDeviceAlreadyDiscovered(const FString& DeviceAddress) const
{
	FScopeLock Lock(&DeviceListLock);
	return DiscoveredDevices.ContainsByPredicate([&DeviceAddress](const FDgLabDeviceInfo& Info)
	{
		return Info.DeviceAddress == DeviceAddress;
	});
}

void FWindowsBluetoothManager::TriggerError(EDgLabBluetoothError ErrorType)
{
	// 如果不是在销毁过程中才触发错误回调
	if (!bIsDestroying && OnError.IsBound())
	{
		AsyncTask(ENamedThreads::GameThread, [this, ErrorType]()
		{
			if (!bIsDestroying)
			{
				OnError.Execute(ErrorType);
			}
		});
	}
}

void FWindowsBluetoothManager::OnConnectionStatusChanged(WinRTBluetooth::BluetoothLEDevice sender, winrt::Windows::Foundation::IInspectable args)
{
	if (bIsDestroying)
	{
		return;
	}

	try
	{
		auto ConnectionStatus = sender.ConnectionStatus();
		UE_LOG(LogTemp, Log, TEXT("[DgLab] 连接状态变化: %d"), (int32)ConnectionStatus);

		if (ConnectionStatus == WinRTBluetooth::BluetoothConnectionStatus::Connected)
		{
			// 设备已连接
			if (!bIsConnected)
			{
				bIsConnected = true;
				UE_LOG(LogTemp, Log, TEXT("[DgLab] 设备连接成功（状态变化事件）"));
				
				// 触发连接成功回调
				AsyncTask(ENamedThreads::GameThread, [this]()
				{
					if (!bIsDestroying && OnConnected.IsBound())
					{
						OnConnected.Execute();
					}
				});
			}
		}
		else if (ConnectionStatus == WinRTBluetooth::BluetoothConnectionStatus::Disconnected)
		{
			// 设备已断开
			if (bIsConnected)
			{
				bIsConnected = false;
				UE_LOG(LogTemp, Warning, TEXT("[DgLab] 设备连接已断开（状态变化事件）"));
				
				// 触发断开连接回调
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
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 处理连接状态变化失败: %s"), *ErrorMsg);
	}
}

uint64 FWindowsBluetoothManager::ConvertAddressStringToUint64(const FString& AddressString) const
{
	// 移除所有冒号和空格
	FString CleanAddress = AddressString.Replace(TEXT(":"), TEXT("")).Replace(TEXT(" "), TEXT(""));
	
	// 检查长度（应该是12个十六进制字符）
	if (CleanAddress.Len() != 12)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 地址长度不正确: %d（期望12）"), CleanAddress.Len());
		return 0;
	}

	// 将十六进制字符串转换为uint64
	uint64 Address = 0;
	for (int32 i = 0; i < CleanAddress.Len(); i++)
	{
		TCHAR Char = CleanAddress[i];
		uint64 Value = 0;
		
		if (Char >= '0' && Char <= '9')
		{
			Value = Char - '0';
		}
		else if (Char >= 'A' && Char <= 'F')
		{
			Value = 10 + (Char - 'A');
		}
		else if (Char >= 'a' && Char <= 'f')
		{
			Value = 10 + (Char - 'a');
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[DgLab] 地址包含无效字符: %c"), Char);
			return 0;
		}
		
		Address = (Address << 4) | Value;
	}
	
	UE_LOG(LogTemp, Verbose, TEXT("[DgLab] 地址转换: %s -> 0x%llX"), *AddressString, Address);
	return Address;
}

// 辅助函数：将UE的FGuid转换为WinRT的guid
static winrt::guid ConvertFGuidToWinRTGuid(const FGuid& UEGuid)
{
	// FGuid结构: {A(uint32), B(uint32), C(uint32), D(uint32)}
	// winrt::guid需要: (uint32, uint16, uint16, array<uint8,8>)
	// 标准GUID格式: Data1(4字节) + Data2(2字节) + Data3(2字节) + Data4[8字节]
	
	GUID StandardGuid;
	StandardGuid.Data1 = UEGuid.A;
	StandardGuid.Data2 = (UEGuid.B >> 16) & 0xFFFF;
	StandardGuid.Data3 = UEGuid.B & 0xFFFF;
	StandardGuid.Data4[0] = (UEGuid.C >> 24) & 0xFF;
	StandardGuid.Data4[1] = (UEGuid.C >> 16) & 0xFF;
	StandardGuid.Data4[2] = (UEGuid.C >> 8) & 0xFF;
	StandardGuid.Data4[3] = UEGuid.C & 0xFF;
	StandardGuid.Data4[4] = (UEGuid.D >> 24) & 0xFF;
	StandardGuid.Data4[5] = (UEGuid.D >> 16) & 0xFF;
	StandardGuid.Data4[6] = (UEGuid.D >> 8) & 0xFF;
	StandardGuid.Data4[7] = UEGuid.D & 0xFF;
	
	return winrt::guid(StandardGuid);
}

bool FWindowsBluetoothManager::GetGattCharacteristics()
{
	if (BluetoothDevice == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 蓝牙设备对象为空"));
		return false;
	}

	try
	{
		// 获取主服务 (0x180C)
		winrt::guid ServiceUuid = ConvertFGuidToWinRTGuid(DgLabBLE::ServiceUUID);
		auto ServiceResult = BluetoothDevice.GetGattServicesForUuidAsync(ServiceUuid).get();
		
		if (ServiceResult.Status() != WinRTGatt::GattCommunicationStatus::Success || ServiceResult.Services().Size() == 0)
		{
			UE_LOG(LogTemp, Error, TEXT("[DgLab] 未找到主服务 0x180C"));
			return false;
		}

		auto MainService = ServiceResult.Services().GetAt(0);

		// 获取写入特性 (0x150A)
		winrt::guid WriteUuid = ConvertFGuidToWinRTGuid(DgLabBLE::CharacteristicWrite);
		auto WriteResult = MainService.GetCharacteristicsForUuidAsync(WriteUuid).get();
		
		if (WriteResult.Status() == WinRTGatt::GattCommunicationStatus::Success && WriteResult.Characteristics().Size() > 0)
		{
			WriteCharacteristic = WriteResult.Characteristics().GetAt(0);
			UE_LOG(LogTemp, Log, TEXT("[DgLab] ✓ 找到写入特性 0x150A"));
		}

		// 获取通知特性 (0x150B)
		winrt::guid NotifyUuid = ConvertFGuidToWinRTGuid(DgLabBLE::CharacteristicNotify);
		auto NotifyResult = MainService.GetCharacteristicsForUuidAsync(NotifyUuid).get();
		
		if (NotifyResult.Status() == WinRTGatt::GattCommunicationStatus::Success && NotifyResult.Characteristics().Size() > 0)
		{
			NotifyCharacteristic = NotifyResult.Characteristics().GetAt(0);
			UE_LOG(LogTemp, Log, TEXT("[DgLab] ✓ 找到通知特性 0x150B"));
		}

		// 获取电量服务 (0x180A)
		winrt::guid BatteryServiceUuid = ConvertFGuidToWinRTGuid(DgLabBLE::BatteryServiceUUID);
		auto BatteryServiceResult = BluetoothDevice.GetGattServicesForUuidAsync(BatteryServiceUuid).get();
		
		if (BatteryServiceResult.Status() == WinRTGatt::GattCommunicationStatus::Success && BatteryServiceResult.Services().Size() > 0)
		{
			auto BatteryService = BatteryServiceResult.Services().GetAt(0);
			
			// 获取电量特性 (0x1500)
			winrt::guid BatteryUuid = ConvertFGuidToWinRTGuid(DgLabBLE::CharacteristicBattery);
			auto BatteryResult = BatteryService.GetCharacteristicsForUuidAsync(BatteryUuid).get();
			
			if (BatteryResult.Status() == WinRTGatt::GattCommunicationStatus::Success && BatteryResult.Characteristics().Size() > 0)
			{
				BatteryCharacteristic = BatteryResult.Characteristics().GetAt(0);
				UE_LOG(LogTemp, Log, TEXT("[DgLab] ✓ 找到电量特性 0x1500"));
			}
		}

		return WriteCharacteristic != nullptr && NotifyCharacteristic != nullptr;
	}
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 获取GATT特性失败: %s"), *ErrorMsg);
		return false;
	}
}

bool FWindowsBluetoothManager::WriteData(const TArray<uint8>& Data)
{
	if (!bIsConnected || WriteCharacteristic == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab] 未连接或写入特性不可用"));
		return false;
	}

	if (Data.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab] 写入数据为空"));
		return false;
	}

	try
	{
		// 创建数据缓冲区
		auto DataWriter = winrt::Windows::Storage::Streams::DataWriter();
		DataWriter.WriteBytes(winrt::array_view<const uint8>(Data.GetData(), Data.Num()));
		auto Buffer = DataWriter.DetachBuffer();

		// 捕获 WriteCharacteristic 的副本，避免在异步执行时被置空
		auto WriteCharCopy = WriteCharacteristic;

		// 异步写入
		AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, Buffer, WriteCharCopy]()
		{
			// 安全性检查：确保对象未被销毁且仍然连接
			if (bIsDestroying || !bIsConnected || WriteCharCopy == nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("[DgLab] 写入取消：设备已断开或对象已销毁"));
				return;
			}

			try
			{
				auto WriteResult = WriteCharCopy.WriteValueAsync(Buffer).get();
				
				if (WriteResult == WinRTGatt::GattCommunicationStatus::Success)
				{
					UE_LOG(LogTemp, Verbose, TEXT("[DgLab] 数据写入成功"));
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("[DgLab] 数据写入失败，状态: %d"), (int32)WriteResult);
				}
			}
			catch (const winrt::hresult_error& ex)
			{
				FString ErrorMsg = FString(ex.message().c_str());
				UE_LOG(LogTemp, Error, TEXT("[DgLab] 写入数据异常: %s"), *ErrorMsg);
			}
		});

		return true;
	}
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 写入数据失败: %s"), *ErrorMsg);
		return false;
	}
}

bool FWindowsBluetoothManager::ReadBattery()
{
	if (!bIsConnected || BatteryCharacteristic == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab] 未连接或电量特性不可用"));
		return false;
	}

	// 捕获 BatteryCharacteristic 的副本
	auto BatteryCharCopy = BatteryCharacteristic;

	// 异步读取
	AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, BatteryCharCopy]()
	{
		// 安全性检查：确保对象未被销毁且仍然连接
		if (bIsDestroying || !bIsConnected || BatteryCharCopy == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLab] 读取取消：设备已断开或对象已销毁"));
			return;
		}

		try
		{
			auto ReadResult = BatteryCharCopy.ReadValueAsync().get();
			
			if (ReadResult.Status() == WinRTGatt::GattCommunicationStatus::Success)
			{
				auto Buffer = ReadResult.Value();
				auto DataReader = winrt::Windows::Storage::Streams::DataReader::FromBuffer(Buffer);
				
				if (Buffer.Length() >= 1)
				{
					uint8 BatteryLevel = DataReader.ReadByte();
					UE_LOG(LogTemp, Log, TEXT("[DgLab] 电量: %d%%"), BatteryLevel);
					
					// 触发回调
					if (!bIsDestroying && OnBatteryUpdate.IsBound())
					{
						AsyncTask(ENamedThreads::GameThread, [this, BatteryLevel]()
						{
							if (!bIsDestroying)
							{
								OnBatteryUpdate.Execute(BatteryLevel);
							}
						});
					}
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("[DgLab] 读取电量失败"));
			}
		}
		catch (const winrt::hresult_error& ex)
		{
			FString ErrorMsg = FString(ex.message().c_str());
			UE_LOG(LogTemp, Error, TEXT("[DgLab] 读取电量异常: %s"), *ErrorMsg);
		}
	});

	return true;
}

bool FWindowsBluetoothManager::SubscribeNotifications()
{
	if (NotifyCharacteristic == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLab] 通知特性不可用"));
		return false;
	}

	try
	{
		// 设置通知
		auto NotifyResult = NotifyCharacteristic.WriteClientCharacteristicConfigurationDescriptorAsync(
			WinRTGatt::GattClientCharacteristicConfigurationDescriptorValue::Notify).get();
		
		if (NotifyResult != WinRTGatt::GattCommunicationStatus::Success)
		{
			UE_LOG(LogTemp, Error, TEXT("[DgLab] 订阅通知失败"));
			return false;
		}

		// 注册通知回调
		NotifyValueChangedToken = NotifyCharacteristic.ValueChanged(
			[this](WinRTGatt::GattCharacteristic sender, WinRTGatt::GattValueChangedEventArgs args)
			{
				OnNotificationReceived(sender, args);
			}
		);

		UE_LOG(LogTemp, Log, TEXT("[DgLab] 通知订阅成功"));
		return true;
	}
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 订阅通知失败: %s"), *ErrorMsg);
		return false;
	}
}

void FWindowsBluetoothManager::OnNotificationReceived(WinRTGatt::GattCharacteristic sender, WinRTGatt::GattValueChangedEventArgs args)
{
	if (bIsDestroying)
	{
		return;
	}

	try
	{
		auto Buffer = args.CharacteristicValue();
		auto DataReader = winrt::Windows::Storage::Streams::DataReader::FromBuffer(Buffer);
		
		// 读取数据
		TArray<uint8> ReceivedData;
		ReceivedData.SetNum(Buffer.Length());
		DataReader.ReadBytes(winrt::array_view<uint8>(ReceivedData.GetData(), ReceivedData.Num()));

		// 打印接收到的数据（用于调试）
		FString DataHex;
		for (uint8 Byte : ReceivedData)
		{
			DataHex += FString::Printf(TEXT("%02X "), Byte);
		}
		UE_LOG(LogTemp, Verbose, TEXT("[DgLab] 接收数据: %s"), *DataHex);

		// 触发回调
		if (OnDataReceived.IsBound())
		{
			AsyncTask(ENamedThreads::GameThread, [this, ReceivedData]()
			{
				if (!bIsDestroying)
				{
					OnDataReceived.Execute(ReceivedData);
				}
			});
		}
	}
	catch (const winrt::hresult_error& ex)
	{
		FString ErrorMsg = FString(ex.message().c_str());
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 处理通知数据失败: %s"), *ErrorMsg);
	}
}

#endif // DGLAB_BLUETOOTH_ENABLED

