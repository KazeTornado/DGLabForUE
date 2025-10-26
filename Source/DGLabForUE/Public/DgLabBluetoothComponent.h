// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DgLabTypes.h"
#include "DgLabDeviceInfo.h"
#include "DgLabV3Protocol.h"
#include "DgLabBluetoothComponent.generated.h"

// 前向声明：跨平台蓝牙管理器接口
class IBluetoothManager;

/**
 * DG-LAB蓝牙组件
 * 可挂载到任意Actor上，提供蓝牙设备扫描和连接功能
 * 
 * 使用方法:
 * 1. 将此组件添加到Actor上
 * 2. 绑定蓝图事件 (OnDeviceFound, OnScanComplete等)
 * 3. 调用StartScan()开始扫描
 * 4. 从OnDeviceFound事件中获取发现的设备
 * 5. 调用ConnectToDevice()连接设备
 */
UCLASS(ClassGroup=(DgLab), meta=(BlueprintSpawnableComponent))
class DGLABFORUE_API UDgLabBluetoothComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDgLabBluetoothComponent();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// ========== 蓝牙扫描功能 ==========

	/**
	 * 开始扫描周围的DG-LAB蓝牙设备
	 * @param ScanDuration 扫描持续时间（秒），0表示持续扫描直到手动停止
	 * @return 是否成功开始扫描
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Bluetooth")
	bool StartScan(float ScanDuration = 10.0f);

	/**
	 * 停止扫描
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Bluetooth")
	void StopScan();

	/**
	 * 是否正在扫描
	 */
	UFUNCTION(BlueprintPure, Category = "DgLab|Bluetooth")
	bool IsScanning() const;

	/**
	 * 清空已发现的设备列表
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Bluetooth")
	void ClearDiscoveredDevices();

	/**
	 * 获取已发现的设备列表
	 */
	UFUNCTION(BlueprintPure, Category = "DgLab|Bluetooth")
	TArray<FDgLabDeviceInfo> GetDiscoveredDevices() const;

	/**
	 * 获取已发现的设备数量
	 */
	UFUNCTION(BlueprintPure, Category = "DgLab|Bluetooth")
	int32 GetDiscoveredDeviceCount() const;

	// ========== 蓝牙连接功能 ==========

	/**
	 * 连接到指定的设备
	 * @param DeviceAddress 设备蓝牙地址（MAC格式: XX:XX:XX:XX:XX:XX）
	 * @return 是否成功发起连接
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Bluetooth")
	bool ConnectToDevice(const FString& DeviceAddress);

	/**
	 * 连接到指定的设备（通过设备信息）
	 * @param DeviceInfo 设备信息
	 * @return 是否成功发起连接
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Bluetooth")
	bool ConnectToDeviceByInfo(const FDgLabDeviceInfo& DeviceInfo);

	/**
	 * 断开当前连接
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Bluetooth")
	void Disconnect();

	/**
	 * 是否已连接到设备
	 */
	UFUNCTION(BlueprintPure, Category = "DgLab|Bluetooth")
	bool IsConnected() const;

	/**
	 * 获取当前连接状态
	 */
	UFUNCTION(BlueprintPure, Category = "DgLab|Bluetooth")
	EDgLabConnectionState GetConnectionState() const { return ConnectionState; }

	/**
	 * 获取当前连接的设备信息
	 */
	UFUNCTION(BlueprintPure, Category = "DgLab|Bluetooth")
	FDgLabDeviceInfo GetConnectedDeviceInfo() const;

	// ========== 设备控制功能 ==========

	/**
	 * 设置波形输出参数（不会自动发送，需要手动调用 SendWaveOutput）
	 * @param Channel 通道选择
	 * @param WavePreset 波形预设
	 * @param Frequency 基础频率 (10-1000)
	 * @param Intensity 基础强度 (0-100)
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void StartOutput(EDgLabChannel Channel = EDgLabChannel::Both, EDgLabWavePreset WavePreset = EDgLabWavePreset::Constant, int32 Frequency = 100, int32 Intensity = 50);

	/**
	 * 发送当前波形输出（单次发送B0指令）
	 * 需要先调用 StartOutput 设置波形参数
	 * 建议在蓝图中使用 Timer 每 0.1 秒调用一次
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void SendWaveOutput();

	/**
	 * 停止波形输出（清空波形参数）
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void StopOutput();

	/**
	 * 增大强度
	 * @param Channel 通道选择
	 * @param Value 增加的强度值 (默认5)
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void IncreaseStrength(EDgLabChannel Channel, int32 Value = 5);

	/**
	 * 减小强度
	 * @param Channel 通道选择
	 * @param Value 减小的强度值 (默认5)
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void DecreaseStrength(EDgLabChannel Channel, int32 Value = 5);

	/**
	 * 设置绝对强度
	 * @param Channel 通道选择
	 * @param Value 强度值 (0-200)
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void SetStrength(EDgLabChannel Channel, int32 Value);

	/**
	 * 发送单次脉冲（电击）
	 * @param Channel 通道选择
	 * @param Intensity 脉冲强度 (0-100)
	 * @param Frequency 脉冲频率 (10-1000)
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void SendPulse(EDgLabChannel Channel, int32 Intensity = 80, int32 Frequency = 100);

	/**
	 * 设置波形预设
	 * @param Channel 通道选择
	 * @param WavePreset 波形预设
	 * @param Frequency 基础频率 (10-1000)
	 * @param Intensity 基础强度 (0-100)
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void SetWavePreset(EDgLabChannel Channel, EDgLabWavePreset WavePreset, int32 Frequency = 100, int32 Intensity = 50);

	/**
	 * 设置软上限
	 * @param LimitA A通道强度上限 (0-200)
	 * @param LimitB B通道强度上限 (0-200)
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void SetStrengthLimit(int32 LimitA = 150, int32 LimitB = 150);

	/**
	 * 读取设备电量
	 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Control")
	void ReadBattery();

	/**
	 * 获取当前A通道强度
	 */
	UFUNCTION(BlueprintPure, Category = "DgLab|Control")
	int32 GetCurrentStrengthA() const { return CurrentStrengthA; }

	/**
	 * 获取当前B通道强度
	 */
	UFUNCTION(BlueprintPure, Category = "DgLab|Control")
	int32 GetCurrentStrengthB() const { return CurrentStrengthB; }

	/**
	 * 是否正在输出
	 */
	UFUNCTION(BlueprintPure, Category = "DgLab|Control")
	bool IsOutputting() const { return bIsOutputting; }

	// ========== 蓝牙事件 ==========

	/** 发现新设备时触发（每发现一个设备触发一次） */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeviceFoundSignature, const FDgLabDeviceInfo&, DeviceInfo);
	UPROPERTY(BlueprintAssignable, Category = "DgLab|Bluetooth|Events")
	FOnDeviceFoundSignature OnDeviceFound;

	/** 扫描完成时触发（不带参数） */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnScanCompleteSignature);
	UPROPERTY(BlueprintAssignable, Category = "DgLab|Bluetooth|Events")
	FOnScanCompleteSignature OnScanComplete;

	/** 扫描完成时触发，返回所有发现的设备数组（推荐使用此事件） */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScanCompleteWithDevicesSignature, const TArray<FDgLabDeviceInfo>&, Devices);
	UPROPERTY(BlueprintAssignable, Category = "DgLab|Bluetooth|Events")
	FOnScanCompleteWithDevicesSignature OnScanCompleteWithDevices;

	/** 连接状态改变时触发 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConnectionStateChangedSignature, EDgLabConnectionState, NewState);
	UPROPERTY(BlueprintAssignable, Category = "DgLab|Bluetooth|Events")
	FOnConnectionStateChangedSignature OnConnectionStateChanged;

	/** 发生错误时触发 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBluetoothErrorSignature, EDgLabBluetoothError, ErrorType);
	UPROPERTY(BlueprintAssignable, Category = "DgLab|Bluetooth|Events")
	FOnBluetoothErrorSignature OnBluetoothError;

	/** 强度更新时触发 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStrengthUpdatedSignature, int32, StrengthA, int32, StrengthB);
	UPROPERTY(BlueprintAssignable, Category = "DgLab|Control|Events")
	FOnStrengthUpdatedSignature OnStrengthUpdated;

	/** 电量更新时触发 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBatteryUpdatedSignature, int32, BatteryLevel);
	UPROPERTY(BlueprintAssignable, Category = "DgLab|Control|Events")
	FOnBatteryUpdatedSignature OnBatteryUpdated;

	// ========== 配置选项 ==========

	/** 是否自动初始化蓝牙（在BeginPlay时）- 如果关闭，蓝牙功能将不可用 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DgLab|Bluetooth|Settings")
	bool bAutoInitialize = true;

	/** 是否只显示DG-LAB设备（过滤其他蓝牙设备）- 推荐开启 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DgLab|Bluetooth|Settings")
	bool bFilterDgLabDevicesOnly = true;

	/** 扫描信号强度阈值（RSSI dBm）- 低于此值的设备会被过滤，范围-100到0，越大信号越强 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DgLab|Bluetooth|Settings", meta = (ClampMin = "-100", ClampMax = "0"))
	int32 SignalStrengthThreshold = -80;

private:
	/** 设置连接状态并触发事件 */
	void SetConnectionState(EDgLabConnectionState NewState);

	/** 处理设备发现回调 */
	void HandleDeviceFound(const FDgLabDeviceInfo& DeviceInfo);

	/** 处理扫描完成回调 */
	void HandleScanComplete();

	/** 处理错误回调 */
	void HandleError(EDgLabBluetoothError ErrorType);

	/** 处理连接成功回调 */
	void HandleConnected();

	/** 处理断开连接回调 */
	void HandleDisconnected();

	/** 处理数据接收回调 */
	void HandleDataReceived(const TArray<uint8>& Data);

	/** 处理电量更新回调 */
	void HandleBatteryUpdate(uint8 BatteryLevel);

	/** 定时发送B0指令 */
	void SendB0Command();

	/** 更新强度累加值 */
	void UpdateStrengthAccumulation(EDgLabChannel Channel, int32 Delta);

	/** 发送波形数据 */
	void SendWaveData(const FDgLabChannelWave& WaveA, const FDgLabChannelWave& WaveB);

private:
	/** 跨平台蓝牙管理器实例（自动根据平台创建） */
	TSharedPtr<IBluetoothManager> BluetoothManager;

	/** 当前连接状态 */
	EDgLabConnectionState ConnectionState;

	/** 当前连接的设备信息 */
	FDgLabDeviceInfo CurrentDeviceInfo;

	/** 已发现的设备列表（用于Blueprint访问） */
	TArray<FDgLabDeviceInfo> CachedDiscoveredDevices;

	/** 是否已初始化 */
	bool bIsInitialized;

	/** 扫描定时器句柄 */
	FTimerHandle ScanTimerHandle;

	/** B0指令发送定时器句柄 */
	FTimerHandle B0TimerHandle;

	// ========== 波形控制状态 ==========

	/** 是否正在输出 */
	bool bIsOutputting;

	/** 当前A通道波形 */
	FDgLabChannelWave CurrentWaveA;

	/** 当前B通道波形 */
	FDgLabChannelWave CurrentWaveB;

	/** A通道强度累加值 */
	int32 AccumulatedStrengthA;

	/** B通道强度累加值 */
	int32 AccumulatedStrengthB;

	/** 当前A通道强度 */
	int32 CurrentStrengthA;

	/** 当前B通道强度 */
	int32 CurrentStrengthB;

	/** 当前序列号 */
	uint8 CurrentSequenceNumber;

	/** 是否允许发送强度变化 */
	bool bAllowStrengthInput;

	/** 输入序列号 */
	uint8 InputSequenceNumber;

	/** A通道强度上限 */
	int32 StrengthLimitA;

	/** B通道强度上限 */
	int32 StrengthLimitB;
};

