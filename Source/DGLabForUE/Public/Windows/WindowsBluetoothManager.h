// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IBluetoothManager.h"

#if DGLAB_BLUETOOTH_ENABLED

// 使用UE推荐的Windows头文件包含方式
#include "Windows/AllowWindowsPlatformTypes.h"

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Devices.Bluetooth.h>
#include <winrt/Windows.Devices.Bluetooth.Advertisement.h>
#include <winrt/Windows.Devices.Bluetooth.GenericAttributeProfile.h>
#include <winrt/Windows.Storage.Streams.h>

#include "Windows/HideWindowsPlatformTypes.h"

// 使用命名空间别名避免与UE的Windows命名空间冲突
namespace WinRTBluetooth = winrt::Windows::Devices::Bluetooth;
namespace WinRTAdvertisement = winrt::Windows::Devices::Bluetooth::Advertisement;
namespace WinRTGatt = winrt::Windows::Devices::Bluetooth::GenericAttributeProfile;
namespace WinRTFoundation = winrt::Windows::Foundation;

/**
 * Windows平台蓝牙管理器
 * 使用WinRT API实现蓝牙低功耗(BLE)设备扫描和连接
 */
class DGLABFORUE_API FWindowsBluetoothManager : public IBluetoothManager
{
public:
	FWindowsBluetoothManager();
	virtual ~FWindowsBluetoothManager() override;

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

private:
	/** 处理蓝牙广播接收 */
	void OnAdvertisementReceived(WinRTAdvertisement::BluetoothLEAdvertisementWatcher sender, WinRTAdvertisement::BluetoothLEAdvertisementReceivedEventArgs args);

	/** 处理扫描停止事件 */
	void OnAdvertisementWatcherStopped(WinRTAdvertisement::BluetoothLEAdvertisementWatcher sender, WinRTAdvertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs args);

	/** 处理连接状态变化 */
	void OnConnectionStatusChanged(WinRTBluetooth::BluetoothLEDevice sender, winrt::Windows::Foundation::IInspectable args);

	/** 检查设备是否已在列表中 */
	bool IsDeviceAlreadyDiscovered(const FString& DeviceAddress) const;

	/** 触发错误回调 */
	void TriggerError(EDgLabBluetoothError ErrorType);

	/** 将地址字符串转换为uint64 */
	uint64 ConvertAddressStringToUint64(const FString& AddressString) const;

	/** 处理GATT通知数据接收 */
	void OnNotificationReceived(WinRTGatt::GattCharacteristic sender, WinRTGatt::GattValueChangedEventArgs args);

	/** 获取GATT特性对象 */
	bool GetGattCharacteristics();

private:
	/** WinRT蓝牙广播监听器 */
	WinRTAdvertisement::BluetoothLEAdvertisementWatcher AdvertisementWatcher{ nullptr };

	/** WinRT蓝牙设备对象 */
	WinRTBluetooth::BluetoothLEDevice BluetoothDevice{ nullptr };

	/** GATT特性对象 */
	WinRTGatt::GattCharacteristic WriteCharacteristic{ nullptr };
	WinRTGatt::GattCharacteristic NotifyCharacteristic{ nullptr };
	WinRTGatt::GattCharacteristic BatteryCharacteristic{ nullptr };

	/** 已发现的设备列表 */
	TArray<FDgLabDeviceInfo> DiscoveredDevices;

	/** 当前连接的设备 */
	FDgLabDeviceInfo* ConnectedDevice;

	/** 广播接收事件令牌 */
	winrt::event_token ReceivedToken;

	/** 监听器停止事件令牌 */
	winrt::event_token StoppedToken;

	/** 连接状态改变事件令牌 */
	winrt::event_token ConnectionStatusChangedToken;

	/** 通知特性值改变事件令牌 */
	winrt::event_token NotifyValueChangedToken;

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
};

#endif // DGLAB_BLUETOOTH_ENABLED

