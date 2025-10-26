// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DgLabTypes.h"
#include "DgLabDeviceInfo.h"

/**
 * 跨平台蓝牙管理器抽象接口
 * 
 * 提供统一的蓝牙BLE设备扫描、连接和通信接口
 * 支持平台：Windows、Android、iOS
 * 
 * 设计模式：
 * - 抽象基类定义统一接口
 * - 各平台实现具体逻辑
 * - 通过工厂模式自动识别平台并创建对应实例
 */
class DGLABFORUE_API IBluetoothManager
{
public:
	// ========== 委托类型定义 ==========
	
	/** 设备发现回调 */
	DECLARE_DELEGATE_OneParam(FOnDeviceFound, const FDgLabDeviceInfo&);
	
	/** 扫描完成回调 */
	DECLARE_DELEGATE(FOnScanComplete);
	
	/** 错误回调 */
	DECLARE_DELEGATE_OneParam(FOnError, EDgLabBluetoothError);
	
	/** 连接成功回调 */
	DECLARE_DELEGATE(FOnConnected);
	
	/** 断开连接回调 */
	DECLARE_DELEGATE(FOnDisconnected);
	
	/** 数据接收回调 */
	DECLARE_DELEGATE_OneParam(FOnDataReceived, const TArray<uint8>&);
	
	/** 电量更新回调 */
	DECLARE_DELEGATE_OneParam(FOnBatteryUpdate, uint8);

public:
	virtual ~IBluetoothManager() = default;

	// ========== 初始化与生命周期 ==========

	/**
	 * 初始化蓝牙管理器
	 * @return 是否初始化成功
	 */
	virtual bool Initialize() = 0;

	// ========== 设备扫描 ==========

	/**
	 * 开始扫描蓝牙设备
	 * @param ScanDuration 扫描持续时间（秒），0表示持续扫描直到手动停止
	 * @return 是否成功开始扫描
	 */
	virtual bool StartScan(float ScanDuration = 10.0f) = 0;

	/**
	 * 停止扫描
	 */
	virtual void StopScan() = 0;

	/**
	 * 是否正在扫描
	 */
	virtual bool IsScanning() const = 0;

	/**
	 * 清空已发现的设备列表
	 */
	virtual void ClearDiscoveredDevices() = 0;

	/**
	 * 获取已发现的设备列表
	 */
	virtual const TArray<FDgLabDeviceInfo>& GetDiscoveredDevices() const = 0;

	// ========== 设备连接 ==========

	/**
	 * 连接到指定设备
	 * @param DeviceAddress 设备蓝牙地址
	 * @return 是否成功发起连接
	 */
	virtual bool ConnectToDevice(const FString& DeviceAddress) = 0;

	/**
	 * 断开当前连接
	 */
	virtual void Disconnect() = 0;

	/**
	 * 是否已连接
	 */
	virtual bool IsConnected() const = 0;

	/**
	 * 获取当前连接的设备信息
	 */
	virtual const FDgLabDeviceInfo* GetConnectedDevice() const = 0;

	// ========== GATT通信 ==========

	/**
	 * 写入数据到指定特性
	 * @param Data 要写入的数据
	 * @return 是否成功发起写入操作
	 */
	virtual bool WriteData(const TArray<uint8>& Data) = 0;

	/**
	 * 读取电量
	 * @return 是否成功发起读取操作
	 */
	virtual bool ReadBattery() = 0;

	/**
	 * 订阅通知特性（接收B1消息等）
	 * @return 是否成功订阅
	 */
	virtual bool SubscribeNotifications() = 0;

	// ========== 回调设置 ==========

	virtual void SetOnDeviceFoundCallback(FOnDeviceFound InCallback) = 0;
	virtual void SetOnScanCompleteCallback(FOnScanComplete InCallback) = 0;
	virtual void SetOnErrorCallback(FOnError InCallback) = 0;
	virtual void SetOnConnectedCallback(FOnConnected InCallback) = 0;
	virtual void SetOnDisconnectedCallback(FOnDisconnected InCallback) = 0;
	virtual void SetOnDataReceivedCallback(FOnDataReceived InCallback) = 0;
	virtual void SetOnBatteryUpdateCallback(FOnBatteryUpdate InCallback) = 0;

protected:
	// 通用的线程安全标志
	std::atomic<bool> bIsDestroying{ false };
	std::atomic<bool> bIsConnected{ false };
	std::atomic<bool> bIsScanning{ false };
	std::atomic<bool> bIsInitialized{ false };
};

