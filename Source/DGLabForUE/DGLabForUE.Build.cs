// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class DGLabForUE : ModuleRules
{
	public DGLabForUE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// 跨平台蓝牙支持
		bool bluetoothEnabled = false;

		// ========== Windows平台蓝牙支持 ==========
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// 添加Windows Runtime支持
			PublicSystemLibraries.Add("WindowsApp.lib");
			
			// 添加必要的包含路径
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public", "Windows"));
			
			// 添加Windows SDK包含路径 (C++/WinRT)
			// 尝试多个可能的SDK路径
			string[] possibleSDKVersions = new string[] 
			{
				"10.0.22621.0",  // Windows 11 SDK
				"10.0.22000.0",  
				"10.0.20348.0",
				"10.0.19041.0",  // Windows 10 2004
				"10.0.18362.0",
			};
			
			string WindowsSDKPath = @"C:\Program Files (x86)\Windows Kits\10";
			bool foundCppWinRT = false;
			
			foreach (string sdkVersion in possibleSDKVersions)
			{
				string cppWinRTPath = Path.Combine(WindowsSDKPath, "Include", sdkVersion, "cppwinrt");
				
				if (Directory.Exists(cppWinRTPath))
				{
					PublicSystemIncludePaths.Add(cppWinRTPath);
					System.Console.WriteLine("DGLabForUE: Found C++/WinRT at: " + cppWinRTPath);
					foundCppWinRT = true;
					break;
				}
			}
			
			if (!foundCppWinRT)
			{
				System.Console.WriteLine("=======================================================");
				System.Console.WriteLine("DGLabForUE WARNING: C++/WinRT headers not found!");
				System.Console.WriteLine("Bluetooth functionality will be disabled on Windows.");
				System.Console.WriteLine("To fix this:");
				System.Console.WriteLine("1. Install Windows 10 SDK (10.0.22621.0 or later)");
				System.Console.WriteLine("2. Make sure 'C++ WinRT' component is selected");
				System.Console.WriteLine("=======================================================");
			}
			else
			{
				// 启用WinRT支持
				bEnableExceptions = true;
				bluetoothEnabled = true;
			}
		}
		// ========== Android平台蓝牙支持 ==========
		else if (Target.Platform == UnrealTargetPlatform.Android)
		{
			System.Console.WriteLine("DGLabForUE: Configuring for Android platform");
			
			// 添加Android包含路径
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public", "Android"));
			
			// 添加Android依赖模块
			PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });
			
			// 启用异常支持（JNI需要）
			bEnableExceptions = true;
			
			// 标记为Android平台
			bluetoothEnabled = true;
			
			System.Console.WriteLine("DGLabForUE: Android Bluetooth support enabled");
			
			// 添加Android配置文件（使用内嵌版本，Java代码直接在APL中）
			string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
			
			// 使用内嵌APL - Java代码直接嵌入GameActivity
			string EmbeddedAplPath = Path.Combine(PluginPath, "DGLabForUE_Embedded_APL.xml");
			AdditionalPropertiesForReceipt.Add("AndroidPlugin", EmbeddedAplPath);
			System.Console.WriteLine("DGLabForUE: Added Embedded APL: " + EmbeddedAplPath);
		}
		// ========== iOS平台蓝牙支持（未来实现） ==========
		else if (Target.Platform == UnrealTargetPlatform.IOS)
		{
			System.Console.WriteLine("DGLabForUE: iOS platform detected but not yet implemented");
			// 未来可以在这里添加CoreBluetooth支持
			// PublicFrameworks.AddRange(new string[] { "CoreBluetooth" });
			// bluetoothEnabled = true;
		}
		
		// 设置蓝牙功能宏
		if (bluetoothEnabled)
		{
			PublicDefinitions.Add("DGLAB_BLUETOOTH_ENABLED=1");
			System.Console.WriteLine("DGLabForUE: Bluetooth functionality ENABLED");
		}
		else
		{
			PublicDefinitions.Add("DGLAB_BLUETOOTH_ENABLED=0");
			System.Console.WriteLine("DGLabForUE: Bluetooth functionality DISABLED");
		}
	}
}
