// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DgLabBluetoothComponent.h"
#include "DgLabTestActor.generated.h"

/**
 * DG-LAB蓝牙测试Actor
 * 演示如何使用DgLabBluetoothComponent
 */
UCLASS()
class DGLABFORUE_API ADgLabTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ADgLabTestActor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	// ========== 组件 ==========
	
	/** DG-LAB蓝牙组件 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UDgLabBluetoothComponent* BluetoothComponent;

	// ========== 测试函数 ==========

	/** 开始扫描测试 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Test")
	void TestStartScan();

	/** 停止扫描测试 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Test")
	void TestStopScan();

	/** 打印已发现的设备 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Test")
	void PrintDiscoveredDevices();

	/** 连接到第一个发现的设备 */
	UFUNCTION(BlueprintCallable, Category = "DgLab|Test")
	void ConnectToFirstDevice();

	// ========== 事件回调 ==========

	UFUNCTION()
	void OnDeviceFound(const FDgLabDeviceInfo& DeviceInfo);

	UFUNCTION()
	void OnScanComplete();

	UFUNCTION()
	void OnScanCompleteWithDevices(const TArray<FDgLabDeviceInfo>& Devices);

	UFUNCTION()
	void OnConnectionStateChanged(EDgLabConnectionState NewState);

	UFUNCTION()
	void OnBluetoothError(EDgLabBluetoothError ErrorType);

	// ========== 配置 ==========

	/** 是否在BeginPlay时自动开始扫描 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DgLab|Test|Settings")
	bool bAutoStartScan = false;

	/** 自动扫描持续时间 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DgLab|Test|Settings")
	float AutoScanDuration = 10.0f;

	/** 是否自动连接第一个发现的设备 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DgLab|Test|Settings")
	bool bAutoConnectFirstDevice = false;

private:
	/** 已尝试自动连接 */
	bool bHasAttemptedAutoConnect = false;
};

