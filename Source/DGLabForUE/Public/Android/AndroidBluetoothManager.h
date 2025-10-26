// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IBluetoothManager.h"

#if DGLAB_BLUETOOTH_ENABLED && PLATFORM_ANDROID

#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"

/**
 * Android平台蓝牙管理器
 * 使用JNI调用Android BLE API实现蓝牙低功耗设备扫描和连接
 * 
 * 技术栈：
 * - C++ <-> JNI <-> Java (BluetoothAdapter, BluetoothGatt)
 * - Android BLE API (android.bluetooth.*)
 */
class DGLABFORUE_API FAndroidBluetoothManager : public IBluetoothManager
{
public:
	FAndroidBluetoothManager();
	virtual ~FAndroidBluetoothManager() override;

	// ========== IBluetoothManager 接口实现 ==========

	virtual bool Initialize() override;
	virtual bool StartScan(float ScanDuration = 10.0f) override;
	virtual void StopScan() override;
	virtual bool IsScanning() const override { return bIsScanning; }
	virtual void ClearDiscoveredDevices() override;
	virtual const TArray<FDgLabDeviceInfo>& GetDiscoveredDevices() const override { return DiscoveredDevices; }
	virtual bool ConnectToDevice(const FString& DeviceAddress) override;
	virtual void Disconnect() override;
	virtual bool IsConnected() const override { return bIsConnected; }
	virtual const FDgLabDeviceInfo* GetConnectedDevice() const override;
	virtual bool WriteData(const TArray<uint8>& Data) override;
	virtual bool ReadBattery() override;
	virtual bool SubscribeNotifications() override;

	virtual void SetOnDeviceFoundCallback(FOnDeviceFound InCallback) override { OnDeviceFound = InCallback; }
	virtual void SetOnScanCompleteCallback(FOnScanComplete InCallback) override { OnScanComplete = InCallback; }
	virtual void SetOnErrorCallback(FOnError InCallback) override { OnError = InCallback; }
	virtual void SetOnConnectedCallback(FOnConnected InCallback) override { OnConnected = InCallback; }
	virtual void SetOnDisconnectedCallback(FOnDisconnected InCallback) override { OnDisconnected = InCallback; }
	virtual void SetOnDataReceivedCallback(FOnDataReceived InCallback) override { OnDataReceived = InCallback; }
	virtual void SetOnBatteryUpdateCallback(FOnBatteryUpdate InCallback) override { OnBatteryUpdate = InCallback; }

	// ========== JNI回调处理（从Java层调用） ==========

	/**
	 * 设备发现回调（由Java层调用）
	 * @param DeviceAddress 设备地址
	 * @param DeviceName 设备名称
	 * @param Rssi 信号强度
	 */
	void OnDeviceDiscovered(const FString& DeviceAddress, const FString& DeviceName, int32 Rssi);

	/**
	 * 连接状态变化回调（由Java层调用）
	 * @param bConnected 是否已连接
	 */
	void OnConnectionStateChanged(bool bConnected);

	/**
	 * 数据接收回调（由Java层调用）
	 * @param Data 接收到的数据
	 */
	void OnDataReceivedFromJava(const TArray<uint8>& Data);

	/**
	 * 电量更新回调（由Java层调用）
	 * @param BatteryLevel 电量百分比
	 */
	void OnBatteryLevelReceived(uint8 BatteryLevel);

	/**
	 * 错误回调（由Java层调用）
	 * @param ErrorCode 错误代码
	 */
	void OnErrorFromJava(int32 ErrorCode);

private:
	/** 检查设备是否已在列表中 */
	bool IsDeviceAlreadyDiscovered(const FString& DeviceAddress) const;

	/** 触发错误回调 */
	void TriggerError(EDgLabBluetoothError ErrorType);

	/** 初始化JNI */
	bool InitializeJNI();

	/** 清理JNI */
	void CleanupJNI();

	/** 调用Java方法 - 开始扫描 */
	bool Java_StartScan(float ScanDuration);

	/** 调用Java方法 - 停止扫描 */
	void Java_StopScan();

	/** 调用Java方法 - 连接设备 */
	bool Java_ConnectToDevice(const FString& DeviceAddress);

	/** 调用Java方法 - 断开连接 */
	void Java_Disconnect();

	/** 调用Java方法 - 写入数据 */
	bool Java_WriteData(const TArray<uint8>& Data);

	/** 调用Java方法 - 读取电量 */
	bool Java_ReadBattery();

	/** 调用Java方法 - 订阅通知 */
	bool Java_SubscribeNotifications();

private:
	/** Java类引用 */
	jclass JavaBluetoothManagerClass;
	jobject JavaBluetoothManagerObject;

	/** Java方法ID缓存 */
	jmethodID Java_Initialize_Method;
	jmethodID Java_StartScan_Method;
	jmethodID Java_StopScan_Method;
	jmethodID Java_ConnectToDevice_Method;
	jmethodID Java_Disconnect_Method;
	jmethodID Java_WriteData_Method;
	jmethodID Java_ReadBattery_Method;
	jmethodID Java_SubscribeNotifications_Method;

	/** 已发现的设备列表 */
	TArray<FDgLabDeviceInfo> DiscoveredDevices;

	/** 当前连接的设备 */
	FDgLabDeviceInfo* ConnectedDevice;

	/** 回调委托 */
	FOnDeviceFound OnDeviceFound;
	FOnScanComplete OnScanComplete;
	FOnError OnError;
	FOnConnected OnConnected;
	FOnDisconnected OnDisconnected;
	FOnDataReceived OnDataReceived;
	FOnBatteryUpdate OnBatteryUpdate;

	/** 线程安全锁 */
	mutable FCriticalSection DeviceListLock;
	mutable FCriticalSection JNILock;
};

#endif // DGLAB_BLUETOOTH_ENABLED && PLATFORM_ANDROID

