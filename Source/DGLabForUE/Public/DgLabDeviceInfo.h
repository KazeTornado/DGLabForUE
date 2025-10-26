// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DgLabTypes.h"
#include "DgLabDeviceInfo.generated.h"

/**
 * 蓝牙设备信息结构
 */
USTRUCT(BlueprintType)
struct DGLABFORUE_API FDgLabDeviceInfo
{
	GENERATED_BODY()

	/** 设备蓝牙地址 (MAC地址格式) */
	UPROPERTY(BlueprintReadOnly, Category = "DgLab|Bluetooth")
	FString DeviceAddress;

	/** 设备名称 */
	UPROPERTY(BlueprintReadOnly, Category = "DgLab|Bluetooth")
	FString DeviceName;

	/** 设备类型 */
	UPROPERTY(BlueprintReadOnly, Category = "DgLab|Bluetooth")
	EDgLabDeviceType DeviceType;

	/** 信号强度 (RSSI) - 单位dBm，数值越大信号越强 */
	UPROPERTY(BlueprintReadOnly, Category = "DgLab|Bluetooth")
	int32 SignalStrength;

	/** 是否已配对 */
	UPROPERTY(BlueprintReadOnly, Category = "DgLab|Bluetooth")
	bool bIsPaired;

	/** 是否可连接 */
	UPROPERTY(BlueprintReadOnly, Category = "DgLab|Bluetooth")
	bool bIsConnectable;

	/** 设备ID (内部使用) */
	FString DeviceId;

	FDgLabDeviceInfo()
		: DeviceType(EDgLabDeviceType::Unknown)
		, SignalStrength(-100)
		, bIsPaired(false)
		, bIsConnectable(false)
	{
	}

	/** 判断是否为有效的DG-LAB设备 */
	bool IsValidDgLabDevice() const
	{
		return DeviceType != EDgLabDeviceType::Unknown && !DeviceAddress.IsEmpty();
	}

	/** 获取设备显示名称 */
	FString GetDisplayName() const
	{
		if (!DeviceName.IsEmpty())
		{
			return FString::Printf(TEXT("%s (%s)"), *DeviceName, *DeviceAddress);
		}
		return DeviceAddress;
	}

	/** 从设备名称判断设备类型 */
	static EDgLabDeviceType GetDeviceTypeFromName(const FString& Name)
	{
		if (Name.Contains(DgLabBLE::DeviceName_Coyote30))
		{
			return EDgLabDeviceType::Coyote3_0;
		}
		else if (Name.Contains(DgLabBLE::DeviceName_Sensor))
		{
			return EDgLabDeviceType::Sensor;
		}
		return EDgLabDeviceType::Unknown;
	}
};

