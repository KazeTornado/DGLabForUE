// Copyright Epic Games, Inc. All Rights Reserved.

#include "BluetoothManagerFactory.h"

// 根据平台引入对应的实现
#if DGLAB_BLUETOOTH_ENABLED

	#if PLATFORM_WINDOWS
		#include "Windows/WindowsBluetoothManager.h"
	#elif PLATFORM_ANDROID
		#include "Android/AndroidBluetoothManager.h"
	#elif PLATFORM_IOS
		// #include "IOS/IOSBluetoothManager.h" // 未来实现
	#endif

#endif // DGLAB_BLUETOOTH_ENABLED

TSharedPtr<IBluetoothManager> FBluetoothManagerFactory::Create()
{
#if DGLAB_BLUETOOTH_ENABLED

	// Windows平台
	#if PLATFORM_WINDOWS
		UE_LOG(LogTemp, Log, TEXT("[DgLab] 创建Windows平台蓝牙管理器"));
		return MakeShared<FWindowsBluetoothManager>();

	// Android平台
	#elif PLATFORM_ANDROID
		UE_LOG(LogTemp, Log, TEXT("[DgLab] 创建Android平台蓝牙管理器"));
		return MakeShared<FAndroidBluetoothManager>();

	// iOS平台（未来实现）
	#elif PLATFORM_IOS
		UE_LOG(LogTemp, Warning, TEXT("[DgLab] iOS平台蓝牙管理器尚未实现"));
		return nullptr;

	// 其他不支持的平台
	#else
		UE_LOG(LogTemp, Error, TEXT("[DgLab] 当前平台不支持蓝牙功能: %s"), *GetPlatformName());
		return nullptr;
	#endif

#else
	// 蓝牙功能未启用
	UE_LOG(LogTemp, Error, TEXT("[DgLab] 蓝牙功能未启用（DGLAB_BLUETOOTH_ENABLED=0）"));
	return nullptr;
#endif
}

FString FBluetoothManagerFactory::GetPlatformName()
{
#if PLATFORM_WINDOWS
	return TEXT("Windows");
#elif PLATFORM_ANDROID
	return TEXT("Android");
#elif PLATFORM_IOS
	return TEXT("iOS");
#elif PLATFORM_MAC
	return TEXT("Mac");
#elif PLATFORM_LINUX
	return TEXT("Linux");
#else
	return TEXT("Unknown");
#endif
}

bool FBluetoothManagerFactory::IsPlatformSupported()
{
#if DGLAB_BLUETOOTH_ENABLED
	#if PLATFORM_WINDOWS || PLATFORM_ANDROID
		return true;
	#elif PLATFORM_IOS
		// iOS支持需要等待实现
		return false;
	#else
		return false;
	#endif
#else
	return false;
#endif
}

