// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DgLabTypes.generated.h"

/**
 * 蓝牙设备连接状态
 */
UENUM(BlueprintType)
enum class EDgLabConnectionState : uint8
{
	Disconnected UMETA(DisplayName = "已断开"),
	Scanning UMETA(DisplayName = "扫描中"),
	Connecting UMETA(DisplayName = "连接中"),
	Connected UMETA(DisplayName = "已连接"),
	Error UMETA(DisplayName = "错误")
};

/**
 * DG-LAB设备类型
 */
UENUM(BlueprintType)
enum class EDgLabDeviceType : uint8
{
	Unknown UMETA(DisplayName = "未知设备"),
	Coyote3_0 UMETA(DisplayName = "郊狼3.0 (47L121000)"),
	Sensor UMETA(DisplayName = "无线传感器 (47L120100)")
};

/**
 * 蓝牙扫描错误类型
 */
UENUM(BlueprintType)
enum class EDgLabBluetoothError : uint8
{
	None UMETA(DisplayName = "无错误"),
	AdapterNotFound UMETA(DisplayName = "未找到蓝牙适配器"),
	AdapterDisabled UMETA(DisplayName = "蓝牙适配器已禁用"),
	ScanFailed UMETA(DisplayName = "扫描失败"),
	ConnectionFailed UMETA(DisplayName = "连接失败"),
	DeviceNotFound UMETA(DisplayName = "设备未找到"),
	ServiceNotFound UMETA(DisplayName = "服务未找到"),
	CharacteristicNotFound UMETA(DisplayName = "特性未找到"),
	PermissionDenied UMETA(DisplayName = "权限被拒绝"),
	PlatformNotSupported UMETA(DisplayName = "平台不支持"),
	Unknown UMETA(DisplayName = "未知错误")
};

/**
 * DG-LAB蓝牙UUID常量
 */
namespace DgLabBLE
{
	// 郊狼3.0设备名称前缀
	static const FString DeviceName_Coyote30 = TEXT("47L121000");
	static const FString DeviceName_Sensor = TEXT("47L120100");
	
	// 服务UUID (0x180C)
	static const FGuid ServiceUUID = FGuid(0x0000180C, 0x00001000, 0x80000080, 0x5F9B34FB);
	
	// 写入特性UUID (0x150A)
	static const FGuid CharacteristicWrite = FGuid(0x0000150A, 0x00001000, 0x80000080, 0x5F9B34FB);
	
	// 通知特性UUID (0x150B)
	static const FGuid CharacteristicNotify = FGuid(0x0000150B, 0x00001000, 0x80000080, 0x5F9B34FB);
	
	// 电量特性UUID (0x1500)
	static const FGuid CharacteristicBattery = FGuid(0x00001500, 0x00001000, 0x80000080, 0x5F9B34FB);
	
	// 电量服务UUID (0x180A)
	static const FGuid BatteryServiceUUID = FGuid(0x0000180A, 0x00001000, 0x80000080, 0x5F9B34FB);
}

