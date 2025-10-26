// Copyright Epic Games, Inc. All Rights Reserved.

#include "DgLabTestActor.h"
#include "Engine/Engine.h"

ADgLabTestActor::ADgLabTestActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// 创建蓝牙组件
	BluetoothComponent = CreateDefaultSubobject<UDgLabBluetoothComponent>(TEXT("BluetoothComponent"));
}

void ADgLabTestActor::BeginPlay()
{
	Super::BeginPlay();
	
	if (BluetoothComponent)
	{
		// 绑定事件
		BluetoothComponent->OnDeviceFound.AddDynamic(this, &ADgLabTestActor::OnDeviceFound);
		BluetoothComponent->OnScanComplete.AddDynamic(this, &ADgLabTestActor::OnScanComplete);
		
		// 绑定新的带设备数组的扫描完成事件
		BluetoothComponent->OnScanCompleteWithDevices.AddDynamic(this, &ADgLabTestActor::OnScanCompleteWithDevices);
		
		BluetoothComponent->OnConnectionStateChanged.AddDynamic(this, &ADgLabTestActor::OnConnectionStateChanged);
		BluetoothComponent->OnBluetoothError.AddDynamic(this, &ADgLabTestActor::OnBluetoothError);

		// 自动开始扫描
		if (bAutoStartScan)
		{
			TestStartScan();
		}
	}
}

void ADgLabTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADgLabTestActor::TestStartScan()
{
	if (BluetoothComponent)
	{
		UE_LOG(LogTemp, Log, TEXT("[DgLabTest] 开始扫描蓝牙设备..."));
		
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, 
				FString::Printf(TEXT("开始扫描DG-LAB设备... (%.1f秒)"), AutoScanDuration));
		}

		bool bSuccess = BluetoothComponent->StartScan(AutoScanDuration);
		
		if (!bSuccess)
		{
			UE_LOG(LogTemp, Error, TEXT("[DgLabTest] 启动扫描失败！"));
			
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, 
					TEXT("启动扫描失败！请检查蓝牙是否开启。"));
			}
		}
	}
}

void ADgLabTestActor::TestStopScan()
{
	if (BluetoothComponent)
	{
		UE_LOG(LogTemp, Log, TEXT("[DgLabTest] 停止扫描"));
		BluetoothComponent->StopScan();
		
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("已停止扫描"));
		}
	}
}

void ADgLabTestActor::PrintDiscoveredDevices()
{
	if (BluetoothComponent)
	{
		TArray<FDgLabDeviceInfo> Devices = BluetoothComponent->GetDiscoveredDevices();
		
		UE_LOG(LogTemp, Log, TEXT("[DgLabTest] ========== 已发现的设备 =========="));
		UE_LOG(LogTemp, Log, TEXT("[DgLabTest] 共 %d 个设备"), Devices.Num());
		
		for (int32 i = 0; i < Devices.Num(); ++i)
		{
			const FDgLabDeviceInfo& Device = Devices[i];
			UE_LOG(LogTemp, Log, TEXT("[DgLabTest] [%d] %s"), i + 1, *Device.GetDisplayName());
			UE_LOG(LogTemp, Log, TEXT("     - 类型: %d, 信号: %d dBm"), 
				(int32)Device.DeviceType, Device.SignalStrength);
		}
		
		UE_LOG(LogTemp, Log, TEXT("[DgLabTest] ====================================="));
	}
}

void ADgLabTestActor::ConnectToFirstDevice()
{
	if (BluetoothComponent)
	{
		TArray<FDgLabDeviceInfo> Devices = BluetoothComponent->GetDiscoveredDevices();
		
		if (Devices.Num() > 0)
		{
			const FDgLabDeviceInfo& FirstDevice = Devices[0];
			UE_LOG(LogTemp, Log, TEXT("[DgLabTest] 尝试连接到: %s"), *FirstDevice.GetDisplayName());
			
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, 
					FString::Printf(TEXT("连接到: %s"), *FirstDevice.DeviceName));
			}
			
			BluetoothComponent->ConnectToDeviceByInfo(FirstDevice);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[DgLabTest] 没有发现任何设备"));
			
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Orange, 
					TEXT("没有发现任何设备"));
			}
		}
	}
}

void ADgLabTestActor::OnDeviceFound(const FDgLabDeviceInfo& DeviceInfo)
{
	UE_LOG(LogTemp, Log, TEXT("[DgLabTest] 发现设备: %s (%s) - 信号: %d dBm"), 
		*DeviceInfo.DeviceName, 
		*DeviceInfo.DeviceAddress,
		DeviceInfo.SignalStrength);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, 
			FString::Printf(TEXT("发现: %s (RSSI: %d)"), *DeviceInfo.DeviceName, DeviceInfo.SignalStrength));
	}

	// 自动连接第一个设备
	if (bAutoConnectFirstDevice && !bHasAttemptedAutoConnect)
	{
		bHasAttemptedAutoConnect = true;
		
		// 延迟1秒后连接，给扫描器一点时间
		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(
			TimerHandle,
			this,
			&ADgLabTestActor::ConnectToFirstDevice,
			1.0f,
			false
		);
	}
}

void ADgLabTestActor::OnScanComplete()
{
	int32 DeviceCount = BluetoothComponent->GetDiscoveredDeviceCount();
	
	UE_LOG(LogTemp, Log, TEXT("[DgLabTest] 扫描完成！共发现 %d 个DG-LAB设备"), DeviceCount);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, 
			FString::Printf(TEXT("扫描完成！发现 %d 个设备"), DeviceCount));
	}

	// 打印设备列表
	PrintDiscoveredDevices();
}

void ADgLabTestActor::OnScanCompleteWithDevices(const TArray<FDgLabDeviceInfo>& Devices)
{
	UE_LOG(LogTemp, Log, TEXT("[DgLabTest] OnScanCompleteWithDevices: 收到 %d 个设备"), Devices.Num());

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, 
			FString::Printf(TEXT("扫描完成（带数组）！共 %d 个设备"), Devices.Num()));
	}

	// 演示：遍历设备数组
	for (int32 i = 0; i < Devices.Num(); ++i)
	{
		const FDgLabDeviceInfo& Device = Devices[i];
		UE_LOG(LogTemp, Log, TEXT("[DgLabTest]   [%d] %s - RSSI: %d dBm"), 
			i + 1, *Device.GetDisplayName(), Device.SignalStrength);
		
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, 
				FString::Printf(TEXT("  [%d] %s (%d dBm)"), i + 1, *Device.DeviceName, Device.SignalStrength));
		}
	}
}

void ADgLabTestActor::OnConnectionStateChanged(EDgLabConnectionState NewState)
{
	const UEnum* EnumPtr = StaticEnum<EDgLabConnectionState>();
	FString StateName = EnumPtr ? EnumPtr->GetNameStringByValue((int64)NewState) : TEXT("Unknown");
	
	UE_LOG(LogTemp, Log, TEXT("[DgLabTest] 连接状态变更: %s"), *StateName);

	if (GEngine)
	{
		FColor StateColor = FColor::White;
		switch (NewState)
		{
			case EDgLabConnectionState::Scanning:
				StateColor = FColor::Yellow;
				break;
			case EDgLabConnectionState::Connecting:
				StateColor = FColor::Cyan;
				break;
			case EDgLabConnectionState::Connected:
				StateColor = FColor::Green;
				break;
			case EDgLabConnectionState::Error:
				StateColor = FColor::Red;
				break;
			default:
				StateColor = FColor::White;
				break;
		}
		
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, StateColor, 
			FString::Printf(TEXT("状态: %s"), *StateName));
	}
}

void ADgLabTestActor::OnBluetoothError(EDgLabBluetoothError ErrorType)
{
	const UEnum* EnumPtr = StaticEnum<EDgLabBluetoothError>();
	FString ErrorName = EnumPtr ? EnumPtr->GetNameStringByValue((int64)ErrorType) : TEXT("Unknown");
	
	UE_LOG(LogTemp, Error, TEXT("[DgLabTest] 蓝牙错误: %s"), *ErrorName);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, 
			FString::Printf(TEXT("蓝牙错误: %s"), *ErrorName));
	}
}

