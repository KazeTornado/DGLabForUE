// Copyright Epic Games, Inc. All Rights Reserved.

#include "DgLabBluetoothComponent.h"
#include "BluetoothManagerFactory.h"

UDgLabBluetoothComponent::UDgLabBluetoothComponent()
	: ConnectionState(EDgLabConnectionState::Disconnected)
	, bIsInitialized(false)
	, bIsOutputting(false)
	, AccumulatedStrengthA(0)
	, AccumulatedStrengthB(0)
	, CurrentStrengthA(0)
	, CurrentStrengthB(0)
	, CurrentSequenceNumber(0)
	, bAllowStrengthInput(true)
	, InputSequenceNumber(0)
	, StrengthLimitA(200)
	, StrengthLimitB(200)
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UDgLabBluetoothComponent::BeginPlay()
{
	Super::BeginPlay();

	if (bAutoInitialize)
	{
		// 使用工厂创建适合当前平台的蓝牙管理器
		BluetoothManager = FBluetoothManagerFactory::Create();

		if (BluetoothManager.IsValid())
		{
			UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 创建蓝牙管理器成功 - 平台: %s"), 
				*FBluetoothManagerFactory::GetPlatformName());

			// 设置回调
			BluetoothManager->SetOnDeviceFoundCallback(
				IBluetoothManager::FOnDeviceFound::CreateUObject(this, &UDgLabBluetoothComponent::HandleDeviceFound)
			);

			BluetoothManager->SetOnScanCompleteCallback(
				IBluetoothManager::FOnScanComplete::CreateUObject(this, &UDgLabBluetoothComponent::HandleScanComplete)
			);

			BluetoothManager->SetOnErrorCallback(
				IBluetoothManager::FOnError::CreateUObject(this, &UDgLabBluetoothComponent::HandleError)
			);

			BluetoothManager->SetOnConnectedCallback(
				IBluetoothManager::FOnConnected::CreateUObject(this, &UDgLabBluetoothComponent::HandleConnected)
			);

			BluetoothManager->SetOnDisconnectedCallback(
				IBluetoothManager::FOnDisconnected::CreateUObject(this, &UDgLabBluetoothComponent::HandleDisconnected)
			);

			BluetoothManager->SetOnDataReceivedCallback(
				IBluetoothManager::FOnDataReceived::CreateUObject(this, &UDgLabBluetoothComponent::HandleDataReceived)
			);

			BluetoothManager->SetOnBatteryUpdateCallback(
				IBluetoothManager::FOnBatteryUpdate::CreateUObject(this, &UDgLabBluetoothComponent::HandleBatteryUpdate)
			);

			// 初始化
			if (BluetoothManager->Initialize())
			{
				bIsInitialized = true;
				UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 蓝牙组件初始化成功"));
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("[DgLabComponent] 蓝牙组件初始化失败"));
				HandleError(EDgLabBluetoothError::AdapterNotFound);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 当前平台不支持蓝牙功能或蓝牙功能未启用 - 平台: %s"), 
				*FBluetoothManagerFactory::GetPlatformName());
			HandleError(EDgLabBluetoothError::PlatformNotSupported);
		}
	}
}

void UDgLabBluetoothComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// 停止输出
	StopOutput();

	// 清除定时器
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(ScanTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(B0TimerHandle);
	}

	// 清理蓝牙管理器
	if (BluetoothManager.IsValid())
	{
		BluetoothManager->StopScan();
		BluetoothManager->Disconnect();
		BluetoothManager.Reset();
	}

	bIsInitialized = false;
}

void UDgLabBluetoothComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// 在这里可以处理需要在主线程更新的逻辑
}

bool UDgLabBluetoothComponent::StartScan(float ScanDuration)
{
#if DGLAB_BLUETOOTH_ENABLED
	if (!bIsInitialized || !BluetoothManager.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 蓝牙管理器未初始化"));
		HandleError(EDgLabBluetoothError::AdapterNotFound);
		return false;
	}

	// 清空缓存的设备列表
	CachedDiscoveredDevices.Empty();

	// 设置状态
	SetConnectionState(EDgLabConnectionState::Scanning);

	// 开始扫描
	bool bSuccess = BluetoothManager->StartScan(ScanDuration);
	if (!bSuccess)
	{
		SetConnectionState(EDgLabConnectionState::Disconnected);
		return false;
	}

	// 如果设置了扫描时长，则设置定时器自动停止
	if (ScanDuration > 0.0f && GetWorld())
	{
		GetWorld()->GetTimerManager().SetTimer(
			ScanTimerHandle,
			this,
			&UDgLabBluetoothComponent::StopScan,
			ScanDuration,
			false
		);
	}

	return bSuccess;
#else
	UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 当前平台不支持蓝牙功能"));
	HandleError(EDgLabBluetoothError::PlatformNotSupported);
	return false;
#endif
}

void UDgLabBluetoothComponent::StopScan()
{
#if DGLAB_BLUETOOTH_ENABLED
	// 清除定时器
	if (GetWorld() && ScanTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(ScanTimerHandle);
	}

	if (BluetoothManager.IsValid())
	{
		BluetoothManager->StopScan();
		SetConnectionState(EDgLabConnectionState::Disconnected);
	}
#endif
}

bool UDgLabBluetoothComponent::IsScanning() const
{
#if DGLAB_BLUETOOTH_ENABLED
	if (BluetoothManager.IsValid())
	{
		return BluetoothManager->IsScanning();
	}
#endif
	return false;
}

void UDgLabBluetoothComponent::ClearDiscoveredDevices()
{
	CachedDiscoveredDevices.Empty();

#if DGLAB_BLUETOOTH_ENABLED
	if (BluetoothManager.IsValid())
	{
		BluetoothManager->ClearDiscoveredDevices();
	}
#endif
}

TArray<FDgLabDeviceInfo> UDgLabBluetoothComponent::GetDiscoveredDevices() const
{
	return CachedDiscoveredDevices;
}

int32 UDgLabBluetoothComponent::GetDiscoveredDeviceCount() const
{
	return CachedDiscoveredDevices.Num();
}

bool UDgLabBluetoothComponent::ConnectToDevice(const FString& DeviceAddress)
{
#if DGLAB_BLUETOOTH_ENABLED
	if (!bIsInitialized || !BluetoothManager.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 蓝牙管理器未初始化"));
		HandleError(EDgLabBluetoothError::AdapterNotFound);
		return false;
	}

	SetConnectionState(EDgLabConnectionState::Connecting);

	bool bSuccess = BluetoothManager->ConnectToDevice(DeviceAddress);
	if (bSuccess)
	{
		// 查找设备信息
		const FDgLabDeviceInfo* FoundDevice = CachedDiscoveredDevices.FindByPredicate(
			[&DeviceAddress](const FDgLabDeviceInfo& Info)
			{
				return Info.DeviceAddress == DeviceAddress;
			}
		);

		if (FoundDevice)
		{
			CurrentDeviceInfo = *FoundDevice;
		}
	}
	else
	{
		SetConnectionState(EDgLabConnectionState::Error);
		HandleError(EDgLabBluetoothError::ConnectionFailed);
	}

	return bSuccess;
#else
	UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 当前平台不支持蓝牙功能"));
	HandleError(EDgLabBluetoothError::PlatformNotSupported);
	return false;
#endif
}

bool UDgLabBluetoothComponent::ConnectToDeviceByInfo(const FDgLabDeviceInfo& DeviceInfo)
{
	return ConnectToDevice(DeviceInfo.DeviceAddress);
}

void UDgLabBluetoothComponent::Disconnect()
{
#if DGLAB_BLUETOOTH_ENABLED
	if (BluetoothManager.IsValid())
	{
		BluetoothManager->Disconnect();
		SetConnectionState(EDgLabConnectionState::Disconnected);
		CurrentDeviceInfo = FDgLabDeviceInfo();
	}
#endif
}

bool UDgLabBluetoothComponent::IsConnected() const
{
#if DGLAB_BLUETOOTH_ENABLED
	if (BluetoothManager.IsValid())
	{
		return BluetoothManager->IsConnected();
	}
#endif
	return false;
}

FDgLabDeviceInfo UDgLabBluetoothComponent::GetConnectedDeviceInfo() const
{
	return CurrentDeviceInfo;
}

void UDgLabBluetoothComponent::SetConnectionState(EDgLabConnectionState NewState)
{
	if (ConnectionState != NewState)
	{
		ConnectionState = NewState;
		OnConnectionStateChanged.Broadcast(NewState);

		// 日志
		const UEnum* EnumPtr = StaticEnum<EDgLabConnectionState>();
		if (EnumPtr)
		{
			FString StateName = EnumPtr->GetNameStringByValue((int64)NewState);
			UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 连接状态变更: %s"), *StateName);
		}
	}
}

void UDgLabBluetoothComponent::HandleDeviceFound(const FDgLabDeviceInfo& DeviceInfo)
{
	// 检查信号强度阈值
	if (DeviceInfo.SignalStrength < SignalStrengthThreshold)
	{
		return;
	}

	// 检查是否只显示DG-LAB设备
	if (bFilterDgLabDevicesOnly && !DeviceInfo.IsValidDgLabDevice())
	{
		return;
	}

	// 添加到缓存列表
	CachedDiscoveredDevices.Add(DeviceInfo);

	// 触发事件
	OnDeviceFound.Broadcast(DeviceInfo);

	UE_LOG(LogTemp, Verbose, TEXT("[DgLabComponent] 发现设备: %s"), *DeviceInfo.GetDisplayName());
}

void UDgLabBluetoothComponent::HandleScanComplete()
{
	SetConnectionState(EDgLabConnectionState::Disconnected);
	
	// 触发不带参数的扫描完成事件
	OnScanComplete.Broadcast();
	
	// 触发带设备数组的扫描完成事件（推荐使用）
	OnScanCompleteWithDevices.Broadcast(CachedDiscoveredDevices);

	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 扫描完成，共发现 %d 个设备"), CachedDiscoveredDevices.Num());
}

void UDgLabBluetoothComponent::HandleError(EDgLabBluetoothError ErrorType)
{
	SetConnectionState(EDgLabConnectionState::Error);
	OnBluetoothError.Broadcast(ErrorType);

	// 日志
	const UEnum* EnumPtr = StaticEnum<EDgLabBluetoothError>();
	if (EnumPtr)
	{
		FString ErrorName = EnumPtr->GetNameStringByValue((int64)ErrorType);
		UE_LOG(LogTemp, Error, TEXT("[DgLabComponent] 蓝牙错误: %s"), *ErrorName);
	}
}

void UDgLabBluetoothComponent::HandleConnected()
{
	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 设备连接成功回调"));
	SetConnectionState(EDgLabConnectionState::Connected);
}

void UDgLabBluetoothComponent::HandleDisconnected()
{
	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 设备断开连接回调"));
	
	// 停止输出
	StopOutput();
	
	SetConnectionState(EDgLabConnectionState::Disconnected);
	CurrentDeviceInfo = FDgLabDeviceInfo();
}

void UDgLabBluetoothComponent::HandleDataReceived(const TArray<uint8>& Data)
{
	// 解析B1消息
	FDgLabB1Message Message;
	if (FDgLabV3Protocol::ParseB1Message(Data, Message))
	{
		UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 强度反馈: A=%d, B=%d, 序列号=%d"), 
			Message.StrengthA, Message.StrengthB, Message.SequenceNumber);

		// 更新当前强度
		CurrentStrengthA = Message.StrengthA;
		CurrentStrengthB = Message.StrengthB;

		// 如果序列号匹配，允许下次输入
		if (Message.SequenceNumber == InputSequenceNumber && Message.SequenceNumber != 0)
		{
			bAllowStrengthInput = true;
			InputSequenceNumber = 0;
		}

		// 触发强度更新事件
		OnStrengthUpdated.Broadcast(Message.StrengthA, Message.StrengthB);
	}
}

void UDgLabBluetoothComponent::HandleBatteryUpdate(uint8 BatteryLevel)
{
	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 电量: %d%%"), BatteryLevel);
	OnBatteryUpdated.Broadcast(BatteryLevel);
}

// ========== 控制函数实现 ==========

void UDgLabBluetoothComponent::StartOutput(EDgLabChannel Channel, EDgLabWavePreset WavePreset, int32 Frequency, int32 Intensity)
{
	if (!IsConnected())
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 未连接到设备"));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 设置波形参数 - 通道:%d, 预设:%d, 频率:%d, 强度:%d"), 
		(int32)Channel, (int32)WavePreset, Frequency, Intensity);

	// 生成波形
	if (Channel == EDgLabChannel::ChannelA || Channel == EDgLabChannel::Both)
	{
		CurrentWaveA = FDgLabV3Protocol::GeneratePresetWave(WavePreset, Frequency, Intensity);
	}
	else
	{
		CurrentWaveA = FDgLabV3Protocol::CreateEmptyWave();
	}

	if (Channel == EDgLabChannel::ChannelB || Channel == EDgLabChannel::Both)
	{
		CurrentWaveB = FDgLabV3Protocol::GeneratePresetWave(WavePreset, Frequency, Intensity);
	}
	else
	{
		CurrentWaveB = FDgLabV3Protocol::CreateEmptyWave();
	}

	// 标记为正在输出（允许发送）
	bIsOutputting = true;

	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 波形参数已设置，请手动调用 SendWaveOutput 进行发送"));
}

void UDgLabBluetoothComponent::SendWaveOutput()
{
	if (!IsConnected())
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 未连接到设备"));
		return;
	}

	if (!bIsOutputting)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 未启动输出，请先调用 StartOutput"));
		return;
	}

	// 调用定时发送函数（发送一次B0指令）
	SendB0Command();
}

void UDgLabBluetoothComponent::StopOutput()
{
	if (!bIsOutputting)
	{
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 停止输出"));

	bIsOutputting = false;

	// 发送停止指令（无效波形）
	CurrentWaveA = FDgLabV3Protocol::CreateEmptyWave();
	CurrentWaveB = FDgLabV3Protocol::CreateEmptyWave();
	SendWaveData(CurrentWaveA, CurrentWaveB);
}

void UDgLabBluetoothComponent::IncreaseStrength(EDgLabChannel Channel, int32 Value)
{
	UpdateStrengthAccumulation(Channel, Value);
}

void UDgLabBluetoothComponent::DecreaseStrength(EDgLabChannel Channel, int32 Value)
{
	UpdateStrengthAccumulation(Channel, -Value);
}

void UDgLabBluetoothComponent::SetStrength(EDgLabChannel Channel, int32 Value)
{
	if (!IsConnected())
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 未连接到设备"));
		return;
	}

	// 首先限制在绝对范围内
	Value = FMath::Clamp(Value, 0, 200);

	EDgLabStrengthMode ModeA = EDgLabStrengthMode::NoChange;
	EDgLabStrengthMode ModeB = EDgLabStrengthMode::NoChange;
	uint8 StrengthA = 0;
	uint8 StrengthB = 0;

	if (Channel == EDgLabChannel::ChannelA || Channel == EDgLabChannel::Both)
	{
		// 应用A通道上限
		int32 ClampedValue = FMath::Min(Value, StrengthLimitA);
		if (ClampedValue != Value)
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] A通道强度 %d 超过上限 %d，已限制"), 
				Value, StrengthLimitA);
		}
		ModeA = EDgLabStrengthMode::Absolute;
		StrengthA = ClampedValue;
	}

	if (Channel == EDgLabChannel::ChannelB || Channel == EDgLabChannel::Both)
	{
		// 应用B通道上限
		int32 ClampedValue = FMath::Min(Value, StrengthLimitB);
		if (ClampedValue != Value)
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] B通道强度 %d 超过上限 %d，已限制"), 
				Value, StrengthLimitB);
		}
		ModeB = EDgLabStrengthMode::Absolute;
		StrengthB = ClampedValue;
	}

	// 构建B0指令
	CurrentSequenceNumber = (CurrentSequenceNumber + 1) % 16;
	if (CurrentSequenceNumber == 0) CurrentSequenceNumber = 1;
	
	TArray<uint8> Command = FDgLabV3Protocol::BuildB0Command(
		CurrentSequenceNumber,
		ModeA, ModeB,
		StrengthA, StrengthB,
		CurrentWaveA, CurrentWaveB
	);

#if DGLAB_BLUETOOTH_ENABLED
	if (BluetoothManager.IsValid())
	{
		BluetoothManager->WriteData(Command);
		InputSequenceNumber = CurrentSequenceNumber;
		bAllowStrengthInput = false;
	}
#endif

	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 设置绝对强度 - 通道:%d, 值:%d"), (int32)Channel, Value);
}

void UDgLabBluetoothComponent::SendPulse(EDgLabChannel Channel, int32 Intensity, int32 Frequency)
{
	if (!IsConnected())
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 未连接到设备"));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 发送脉冲 - 通道:%d, 强度:%d, 频率:%d"), 
		(int32)Channel, Intensity, Frequency);

	// 生成脉冲波形
	FDgLabChannelWave PulseWave = FDgLabV3Protocol::GeneratePresetWave(EDgLabWavePreset::Pulse, Frequency, Intensity);
	FDgLabChannelWave EmptyWave = FDgLabV3Protocol::CreateEmptyWave();

	FDgLabChannelWave WaveA = (Channel == EDgLabChannel::ChannelA || Channel == EDgLabChannel::Both) ? PulseWave : EmptyWave;
	FDgLabChannelWave WaveB = (Channel == EDgLabChannel::ChannelB || Channel == EDgLabChannel::Both) ? PulseWave : EmptyWave;

	// 发送一次
	SendWaveData(WaveA, WaveB);
}

void UDgLabBluetoothComponent::SetWavePreset(EDgLabChannel Channel, EDgLabWavePreset WavePreset, int32 Frequency, int32 Intensity)
{
	if (!IsConnected())
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 未连接到设备"));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 设置波形预设 - 通道:%d, 预设:%d"), (int32)Channel, (int32)WavePreset);

	// 更新当前波形
	if (Channel == EDgLabChannel::ChannelA || Channel == EDgLabChannel::Both)
	{
		CurrentWaveA = FDgLabV3Protocol::GeneratePresetWave(WavePreset, Frequency, Intensity);
	}

	if (Channel == EDgLabChannel::ChannelB || Channel == EDgLabChannel::Both)
	{
		CurrentWaveB = FDgLabV3Protocol::GeneratePresetWave(WavePreset, Frequency, Intensity);
	}
}

void UDgLabBluetoothComponent::SetStrengthLimit(int32 LimitA, int32 LimitB)
{
	if (!IsConnected())
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 未连接到设备"));
		return;
	}

	// 保存上限值
	StrengthLimitA = FMath::Clamp(LimitA, 0, 200);
	StrengthLimitB = FMath::Clamp(LimitB, 0, 200);

	UE_LOG(LogTemp, Log, TEXT("[DgLabComponent] 设置软上限 - A:%d, B:%d"), StrengthLimitA, StrengthLimitB);

	// 构建BF指令发送到设备
	TArray<uint8> Command = FDgLabV3Protocol::BuildBFCommand(
		StrengthLimitA,
		StrengthLimitB
	);

#if DGLAB_BLUETOOTH_ENABLED
	if (BluetoothManager.IsValid())
	{
		BluetoothManager->WriteData(Command);
	}
#endif

	// 立即检查当前强度是否超过新上限，如果超过则调整
	if (CurrentStrengthA > StrengthLimitA || CurrentStrengthB > StrengthLimitB)
	{
		int32 NewStrengthA = FMath::Min(CurrentStrengthA, StrengthLimitA);
		int32 NewStrengthB = FMath::Min(CurrentStrengthB, StrengthLimitB);
		
		if (NewStrengthA != CurrentStrengthA)
		{
			SetStrength(EDgLabChannel::ChannelA, NewStrengthA);
		}
		if (NewStrengthB != CurrentStrengthB)
		{
			SetStrength(EDgLabChannel::ChannelB, NewStrengthB);
		}
		
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 当前强度超过新上限，已自动调整为 A:%d, B:%d"), 
			NewStrengthA, NewStrengthB);
	}
}

void UDgLabBluetoothComponent::ReadBattery()
{
#if DGLAB_BLUETOOTH_ENABLED
	if (BluetoothManager.IsValid())
	{
		BluetoothManager->ReadBattery();
	}
#endif
}

// ========== 辅助函数实现 ==========

void UDgLabBluetoothComponent::SendB0Command()
{
	if (!IsConnected() || !bIsOutputting)
	{
		return;
	}

	// 处理强度累加
	EDgLabStrengthMode ModeA = EDgLabStrengthMode::NoChange;
	EDgLabStrengthMode ModeB = EDgLabStrengthMode::NoChange;
	uint8 StrengthA = 0;
	uint8 StrengthB = 0;
	uint8 SequenceNum = 0;

	if (bAllowStrengthInput)
	{
		if (AccumulatedStrengthA > 0)
		{
			ModeA = EDgLabStrengthMode::Increase;
			StrengthA = FMath::Abs(AccumulatedStrengthA);
			AccumulatedStrengthA = 0;
			SequenceNum = (CurrentSequenceNumber + 1) % 16;
			if (SequenceNum == 0) SequenceNum = 1;
			CurrentSequenceNumber = SequenceNum;
			InputSequenceNumber = SequenceNum;
			bAllowStrengthInput = false;
		}
		else if (AccumulatedStrengthA < 0)
		{
			ModeA = EDgLabStrengthMode::Decrease;
			StrengthA = FMath::Abs(AccumulatedStrengthA);
			AccumulatedStrengthA = 0;
			SequenceNum = (CurrentSequenceNumber + 1) % 16;
			if (SequenceNum == 0) SequenceNum = 1;
			CurrentSequenceNumber = SequenceNum;
			InputSequenceNumber = SequenceNum;
			bAllowStrengthInput = false;
		}

		if (AccumulatedStrengthB > 0)
		{
			ModeB = EDgLabStrengthMode::Increase;
			StrengthB = FMath::Abs(AccumulatedStrengthB);
			AccumulatedStrengthB = 0;
			if (SequenceNum == 0)
			{
				SequenceNum = (CurrentSequenceNumber + 1) % 16;
				if (SequenceNum == 0) SequenceNum = 1;
				CurrentSequenceNumber = SequenceNum;
				InputSequenceNumber = SequenceNum;
				bAllowStrengthInput = false;
			}
		}
		else if (AccumulatedStrengthB < 0)
		{
			ModeB = EDgLabStrengthMode::Decrease;
			StrengthB = FMath::Abs(AccumulatedStrengthB);
			AccumulatedStrengthB = 0;
			if (SequenceNum == 0)
			{
				SequenceNum = (CurrentSequenceNumber + 1) % 16;
				if (SequenceNum == 0) SequenceNum = 1;
				CurrentSequenceNumber = SequenceNum;
				InputSequenceNumber = SequenceNum;
				bAllowStrengthInput = false;
			}
		}
	}

	// 构建B0指令
	TArray<uint8> Command = FDgLabV3Protocol::BuildB0Command(
		SequenceNum,
		ModeA, ModeB,
		StrengthA, StrengthB,
		CurrentWaveA, CurrentWaveB
	);

#if DGLAB_BLUETOOTH_ENABLED
	if (BluetoothManager.IsValid())
	{
		BluetoothManager->WriteData(Command);
	}
#endif
}

void UDgLabBluetoothComponent::UpdateStrengthAccumulation(EDgLabChannel Channel, int32 Delta)
{
	if (!IsConnected())
	{
		UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] 未连接到设备"));
		return;
	}

	if (Channel == EDgLabChannel::ChannelA || Channel == EDgLabChannel::Both)
	{
		// 预计算新值并应用上限
		int32 NewValue = CurrentStrengthA + Delta;
		NewValue = FMath::Clamp(NewValue, 0, StrengthLimitA);
		
		int32 ActualDelta = NewValue - CurrentStrengthA;
		if (ActualDelta != Delta)
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] A通道累加受上限限制: 请求%+d，实际%+d（上限:%d）"), 
				Delta, ActualDelta, StrengthLimitA);
		}
		
		AccumulatedStrengthA += ActualDelta;
		UE_LOG(LogTemp, Verbose, TEXT("[DgLabComponent] A通道强度累加: %d"), AccumulatedStrengthA);
	}

	if (Channel == EDgLabChannel::ChannelB || Channel == EDgLabChannel::Both)
	{
		// 预计算新值并应用上限
		int32 NewValue = CurrentStrengthB + Delta;
		NewValue = FMath::Clamp(NewValue, 0, StrengthLimitB);
		
		int32 ActualDelta = NewValue - CurrentStrengthB;
		if (ActualDelta != Delta)
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLabComponent] B通道累加受上限限制: 请求%+d，实际%+d（上限:%d）"), 
				Delta, ActualDelta, StrengthLimitB);
		}
		
		AccumulatedStrengthB += ActualDelta;
		UE_LOG(LogTemp, Verbose, TEXT("[DgLabComponent] B通道强度累加: %d"), AccumulatedStrengthB);
	}
}

void UDgLabBluetoothComponent::SendWaveData(const FDgLabChannelWave& WaveA, const FDgLabChannelWave& WaveB)
{
	// 构建B0指令（不改变强度）
	TArray<uint8> Command = FDgLabV3Protocol::BuildB0Command(
		0, // 序列号0表示不需要反馈
		EDgLabStrengthMode::NoChange,
		EDgLabStrengthMode::NoChange,
		0, 0,
		WaveA, WaveB
	);

#if DGLAB_BLUETOOTH_ENABLED
	if (BluetoothManager.IsValid())
	{
		BluetoothManager->WriteData(Command);
	}
#endif
}

