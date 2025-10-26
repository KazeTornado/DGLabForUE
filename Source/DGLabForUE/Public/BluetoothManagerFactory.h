// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IBluetoothManager.h"

/**
 * 蓝牙管理器工厂类
 * 
 * 自动识别当前运行平台并创建对应的蓝牙管理器实例
 * 
 * 使用示例：
 * ```cpp
 * TSharedPtr<IBluetoothManager> BluetoothManager = FBluetoothManagerFactory::Create();
 * if (BluetoothManager.IsValid())
 * {
 *     BluetoothManager->Initialize();
 * }
 * ```
 * 
 * 支持的平台：
 * - Windows: 使用 WinRT API (BluetoothLE)
 * - Android: 使用 JNI + Android BLE API
 * - iOS: 使用 CoreBluetooth (未来实现)
 */
class DGLABFORUE_API FBluetoothManagerFactory
{
public:
	/**
	 * 创建适合当前平台的蓝牙管理器实例
	 * 
	 * @return 蓝牙管理器实例，如果当前平台不支持则返回nullptr
	 */
	static TSharedPtr<IBluetoothManager> Create();

	/**
	 * 获取当前平台名称
	 * 
	 * @return 平台名称字符串（用于调试和日志）
	 */
	static FString GetPlatformName();

	/**
	 * 检查当前平台是否支持蓝牙功能
	 * 
	 * @return 如果当前平台支持蓝牙则返回true
	 */
	static bool IsPlatformSupported();

private:
	FBluetoothManagerFactory() = delete;
	~FBluetoothManagerFactory() = delete;
};

