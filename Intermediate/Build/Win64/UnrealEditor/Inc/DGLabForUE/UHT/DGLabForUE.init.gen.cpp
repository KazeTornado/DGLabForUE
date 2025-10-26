// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDGLabForUE_init() {}
	DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature();
	DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature();
	DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature();
	DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature();
	DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature();
	DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature();
	DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DGLabForUE;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DGLabForUE()
	{
		if (!Z_Registration_Info_UPackage__Script_DGLabForUE.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DGLabForUE",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE37EA35A,
				0x26347E09,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DGLabForUE.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DGLabForUE.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DGLabForUE(Z_Construct_UPackage__Script_DGLabForUE, TEXT("/Script/DGLabForUE"), Z_Registration_Info_UPackage__Script_DGLabForUE, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE37EA35A, 0x26347E09));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
