// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DGLabForUE/Public/DgLabBluetoothComponent.h"
#include "DGLabForUE/Public/DgLabDeviceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDgLabBluetoothComponent() {}

// Begin Cross Module References
DGLABFORUE_API UClass* Z_Construct_UClass_UDgLabBluetoothComponent();
DGLABFORUE_API UClass* Z_Construct_UClass_UDgLabBluetoothComponent_NoRegister();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabChannel();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset();
DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature();
DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature();
DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature();
DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature();
DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature();
DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature();
DGLABFORUE_API UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature();
DGLABFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FDgLabDeviceInfo();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DGLabForUE();
// End Cross Module References

// Begin Delegate FOnDeviceFoundSignature
struct Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics
{
	struct DgLabBluetoothComponent_eventOnDeviceFoundSignature_Parms
	{
		FDgLabDeviceInfo DeviceInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8f\x91\xe7\x8e\xb0\xe6\x96\xb0\xe8\xae\xbe\xe5\xa4\x87\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x88\xe6\xaf\x8f\xe5\x8f\x91\xe7\x8e\xb0\xe4\xb8\x80\xe4\xb8\xaa\xe8\xae\xbe\xe5\xa4\x87\xe8\xa7\xa6\xe5\x8f\x91\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x89 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe7\x8e\xb0\xe6\x96\xb0\xe8\xae\xbe\xe5\xa4\x87\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x88\xe6\xaf\x8f\xe5\x8f\x91\xe7\x8e\xb0\xe4\xb8\x80\xe4\xb8\xaa\xe8\xae\xbe\xe5\xa4\x87\xe8\xa7\xa6\xe5\x8f\x91\xe4\xb8\x80\xe6\xac\xa1\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::NewProp_DeviceInfo = { "DeviceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventOnDeviceFoundSignature_Parms, DeviceInfo), Z_Construct_UScriptStruct_FDgLabDeviceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceInfo_MetaData), NewProp_DeviceInfo_MetaData) }; // 3175805333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::NewProp_DeviceInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "OnDeviceFoundSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnDeviceFoundSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnDeviceFoundSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDgLabBluetoothComponent::FOnDeviceFoundSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDeviceFoundSignature, FDgLabDeviceInfo const& DeviceInfo)
{
	struct DgLabBluetoothComponent_eventOnDeviceFoundSignature_Parms
	{
		FDgLabDeviceInfo DeviceInfo;
	};
	DgLabBluetoothComponent_eventOnDeviceFoundSignature_Parms Parms;
	Parms.DeviceInfo=DeviceInfo;
	OnDeviceFoundSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDeviceFoundSignature

// Begin Delegate FOnScanCompleteSignature
struct Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\xab\xe6\x8f\x8f\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x88\xe4\xb8\x8d\xe5\xb8\xa6\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x89 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xab\xe6\x8f\x8f\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x88\xe4\xb8\x8d\xe5\xb8\xa6\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "OnScanCompleteSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDgLabBluetoothComponent::FOnScanCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnScanCompleteSignature)
{
	OnScanCompleteSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnScanCompleteSignature

// Begin Delegate FOnScanCompleteWithDevicesSignature
struct Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics
{
	struct DgLabBluetoothComponent_eventOnScanCompleteWithDevicesSignature_Parms
	{
		TArray<FDgLabDeviceInfo> Devices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\xab\xe6\x8f\x8f\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe6\x95\xb0\xe7\xbb\x84\xef\xbc\x88\xe6\x8e\xa8\xe8\x8d\x90\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x89 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xab\xe6\x8f\x8f\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe6\x95\xb0\xe7\xbb\x84\xef\xbc\x88\xe6\x8e\xa8\xe8\x8d\x90\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Devices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Devices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Devices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::NewProp_Devices_Inner = { "Devices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDgLabDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 3175805333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::NewProp_Devices = { "Devices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventOnScanCompleteWithDevicesSignature_Parms, Devices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Devices_MetaData), NewProp_Devices_MetaData) }; // 3175805333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::NewProp_Devices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::NewProp_Devices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "OnScanCompleteWithDevicesSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnScanCompleteWithDevicesSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnScanCompleteWithDevicesSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDgLabBluetoothComponent::FOnScanCompleteWithDevicesSignature_DelegateWrapper(const FMulticastScriptDelegate& OnScanCompleteWithDevicesSignature, TArray<FDgLabDeviceInfo> const& Devices)
{
	struct DgLabBluetoothComponent_eventOnScanCompleteWithDevicesSignature_Parms
	{
		TArray<FDgLabDeviceInfo> Devices;
	};
	DgLabBluetoothComponent_eventOnScanCompleteWithDevicesSignature_Parms Parms;
	Parms.Devices=Devices;
	OnScanCompleteWithDevicesSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnScanCompleteWithDevicesSignature

// Begin Delegate FOnConnectionStateChangedSignature
struct Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics
{
	struct DgLabBluetoothComponent_eventOnConnectionStateChangedSignature_Parms
	{
		EDgLabConnectionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x9e\xe6\x8e\xa5\xe7\x8a\xb6\xe6\x80\x81\xe6\x94\xb9\xe5\x8f\x98\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x8a\xb6\xe6\x80\x81\xe6\x94\xb9\xe5\x8f\x98\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventOnConnectionStateChangedSignature_Parms, NewState), Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState, METADATA_PARAMS(0, nullptr) }; // 3370287606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "OnConnectionStateChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnConnectionStateChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnConnectionStateChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDgLabBluetoothComponent::FOnConnectionStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionStateChangedSignature, EDgLabConnectionState NewState)
{
	struct DgLabBluetoothComponent_eventOnConnectionStateChangedSignature_Parms
	{
		EDgLabConnectionState NewState;
	};
	DgLabBluetoothComponent_eventOnConnectionStateChangedSignature_Parms Parms;
	Parms.NewState=NewState;
	OnConnectionStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnConnectionStateChangedSignature

// Begin Delegate FOnBluetoothErrorSignature
struct Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics
{
	struct DgLabBluetoothComponent_eventOnBluetoothErrorSignature_Parms
	{
		EDgLabBluetoothError ErrorType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8f\x91\xe7\x94\x9f\xe9\x94\x99\xe8\xaf\xaf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe7\x94\x9f\xe9\x94\x99\xe8\xaf\xaf\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventOnBluetoothErrorSignature_Parms, ErrorType), Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError, METADATA_PARAMS(0, nullptr) }; // 3575268041
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::NewProp_ErrorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::NewProp_ErrorType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "OnBluetoothErrorSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnBluetoothErrorSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnBluetoothErrorSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDgLabBluetoothComponent::FOnBluetoothErrorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnBluetoothErrorSignature, EDgLabBluetoothError ErrorType)
{
	struct DgLabBluetoothComponent_eventOnBluetoothErrorSignature_Parms
	{
		EDgLabBluetoothError ErrorType;
	};
	DgLabBluetoothComponent_eventOnBluetoothErrorSignature_Parms Parms;
	Parms.ErrorType=ErrorType;
	OnBluetoothErrorSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBluetoothErrorSignature

// Begin Delegate FOnStrengthUpdatedSignature
struct Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics
{
	struct DgLabBluetoothComponent_eventOnStrengthUpdatedSignature_Parms
	{
		int32 StrengthA;
		int32 StrengthB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbc\xba\xe5\xba\xa6\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\xba\xe5\xba\xa6\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrengthA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StrengthB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::NewProp_StrengthA = { "StrengthA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventOnStrengthUpdatedSignature_Parms, StrengthA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::NewProp_StrengthB = { "StrengthB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventOnStrengthUpdatedSignature_Parms, StrengthB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::NewProp_StrengthA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::NewProp_StrengthB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "OnStrengthUpdatedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnStrengthUpdatedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnStrengthUpdatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDgLabBluetoothComponent::FOnStrengthUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStrengthUpdatedSignature, int32 StrengthA, int32 StrengthB)
{
	struct DgLabBluetoothComponent_eventOnStrengthUpdatedSignature_Parms
	{
		int32 StrengthA;
		int32 StrengthB;
	};
	DgLabBluetoothComponent_eventOnStrengthUpdatedSignature_Parms Parms;
	Parms.StrengthA=StrengthA;
	Parms.StrengthB=StrengthB;
	OnStrengthUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStrengthUpdatedSignature

// Begin Delegate FOnBatteryUpdatedSignature
struct Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics
{
	struct DgLabBluetoothComponent_eventOnBatteryUpdatedSignature_Parms
	{
		int32 BatteryLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x94\xb5\xe9\x87\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb5\xe9\x87\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BatteryLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::NewProp_BatteryLevel = { "BatteryLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventOnBatteryUpdatedSignature_Parms, BatteryLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::NewProp_BatteryLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "OnBatteryUpdatedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnBatteryUpdatedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::DgLabBluetoothComponent_eventOnBatteryUpdatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UDgLabBluetoothComponent::FOnBatteryUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnBatteryUpdatedSignature, int32 BatteryLevel)
{
	struct DgLabBluetoothComponent_eventOnBatteryUpdatedSignature_Parms
	{
		int32 BatteryLevel;
	};
	DgLabBluetoothComponent_eventOnBatteryUpdatedSignature_Parms Parms;
	Parms.BatteryLevel=BatteryLevel;
	OnBatteryUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBatteryUpdatedSignature

// Begin Class UDgLabBluetoothComponent Function ClearDiscoveredDevices
struct Z_Construct_UFunction_UDgLabBluetoothComponent_ClearDiscoveredDevices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\xb8\x85\xe7\xa9\xba\xe5\xb7\xb2\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe5\x88\x97\xe8\xa1\xa8\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\x85\xe7\xa9\xba\xe5\xb7\xb2\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe5\x88\x97\xe8\xa1\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_ClearDiscoveredDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "ClearDiscoveredDevices", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_ClearDiscoveredDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_ClearDiscoveredDevices_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_ClearDiscoveredDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_ClearDiscoveredDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execClearDiscoveredDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearDiscoveredDevices();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function ClearDiscoveredDevices

// Begin Class UDgLabBluetoothComponent Function ConnectToDevice
struct Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics
{
	struct DgLabBluetoothComponent_eventConnectToDevice_Parms
	{
		FString DeviceAddress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\n\x09 * @param DeviceAddress \xe8\xae\xbe\xe5\xa4\x87\xe8\x93\x9d\xe7\x89\x99\xe5\x9c\xb0\xe5\x9d\x80\xef\xbc\x88MAC\xe6\xa0\xbc\xe5\xbc\x8f: XX:XX:XX:XX:XX:XX\xef\xbc\x89\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe5\x8f\x91\xe8\xb5\xb7\xe8\xbf\x9e\xe6\x8e\xa5\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\n@param DeviceAddress \xe8\xae\xbe\xe5\xa4\x87\xe8\x93\x9d\xe7\x89\x99\xe5\x9c\xb0\xe5\x9d\x80\xef\xbc\x88MAC\xe6\xa0\xbc\xe5\xbc\x8f: XX:XX:XX:XX:XX:XX\xef\xbc\x89\n@return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe5\x8f\x91\xe8\xb5\xb7\xe8\xbf\x9e\xe6\x8e\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceAddress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::NewProp_DeviceAddress = { "DeviceAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventConnectToDevice_Parms, DeviceAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceAddress_MetaData), NewProp_DeviceAddress_MetaData) };
void Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DgLabBluetoothComponent_eventConnectToDevice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DgLabBluetoothComponent_eventConnectToDevice_Parms), &Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::NewProp_DeviceAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "ConnectToDevice", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::DgLabBluetoothComponent_eventConnectToDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::DgLabBluetoothComponent_eventConnectToDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execConnectToDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceAddress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToDevice(Z_Param_DeviceAddress);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function ConnectToDevice

// Begin Class UDgLabBluetoothComponent Function ConnectToDeviceByInfo
struct Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics
{
	struct DgLabBluetoothComponent_eventConnectToDeviceByInfo_Parms
	{
		FDgLabDeviceInfo DeviceInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x88\xe9\x80\x9a\xe8\xbf\x87\xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x89\n\x09 * @param DeviceInfo \xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe5\x8f\x91\xe8\xb5\xb7\xe8\xbf\x9e\xe6\x8e\xa5\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x88\xe9\x80\x9a\xe8\xbf\x87\xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x89\n@param DeviceInfo \xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf\n@return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe5\x8f\x91\xe8\xb5\xb7\xe8\xbf\x9e\xe6\x8e\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::NewProp_DeviceInfo = { "DeviceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventConnectToDeviceByInfo_Parms, DeviceInfo), Z_Construct_UScriptStruct_FDgLabDeviceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceInfo_MetaData), NewProp_DeviceInfo_MetaData) }; // 3175805333
void Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DgLabBluetoothComponent_eventConnectToDeviceByInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DgLabBluetoothComponent_eventConnectToDeviceByInfo_Parms), &Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::NewProp_DeviceInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "ConnectToDeviceByInfo", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::DgLabBluetoothComponent_eventConnectToDeviceByInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::DgLabBluetoothComponent_eventConnectToDeviceByInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execConnectToDeviceByInfo)
{
	P_GET_STRUCT_REF(FDgLabDeviceInfo,Z_Param_Out_DeviceInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConnectToDeviceByInfo(Z_Param_Out_DeviceInfo);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function ConnectToDeviceByInfo

// Begin Class UDgLabBluetoothComponent Function DecreaseStrength
struct Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics
{
	struct DgLabBluetoothComponent_eventDecreaseStrength_Parms
	{
		EDgLabChannel Channel;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\x87\x8f\xe5\xb0\x8f\xe5\xbc\xba\xe5\xba\xa6\n\x09 * @param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n\x09 * @param Value \xe5\x87\x8f\xe5\xb0\x8f\xe7\x9a\x84\xe5\xbc\xba\xe5\xba\xa6\xe5\x80\xbc (\xe9\xbb\x98\xe8\xae\xa4""5)\n\x09 */" },
#endif
		{ "CPP_Default_Value", "5" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\x8f\xe5\xb0\x8f\xe5\xbc\xba\xe5\xba\xa6\n@param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n@param Value \xe5\x87\x8f\xe5\xb0\x8f\xe7\x9a\x84\xe5\xbc\xba\xe5\xba\xa6\xe5\x80\xbc (\xe9\xbb\x98\xe8\xae\xa4""5)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventDecreaseStrength_Parms, Channel), Z_Construct_UEnum_DGLabForUE_EDgLabChannel, METADATA_PARAMS(0, nullptr) }; // 450391991
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventDecreaseStrength_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "DecreaseStrength", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::DgLabBluetoothComponent_eventDecreaseStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::DgLabBluetoothComponent_eventDecreaseStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execDecreaseStrength)
{
	P_GET_ENUM(EDgLabChannel,Z_Param_Channel);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseStrength(EDgLabChannel(Z_Param_Channel),Z_Param_Value);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function DecreaseStrength

// Begin Class UDgLabBluetoothComponent Function Disconnect
struct Z_Construct_UFunction_UDgLabBluetoothComponent_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x96\xad\xe5\xbc\x80\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\xad\xe5\xbc\x80\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function Disconnect

// Begin Class UDgLabBluetoothComponent Function GetConnectedDeviceInfo
struct Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics
{
	struct DgLabBluetoothComponent_eventGetConnectedDeviceInfo_Parms
	{
		FDgLabDeviceInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventGetConnectedDeviceInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FDgLabDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 3175805333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "GetConnectedDeviceInfo", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::DgLabBluetoothComponent_eventGetConnectedDeviceInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::DgLabBluetoothComponent_eventGetConnectedDeviceInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execGetConnectedDeviceInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDgLabDeviceInfo*)Z_Param__Result=P_THIS->GetConnectedDeviceInfo();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function GetConnectedDeviceInfo

// Begin Class UDgLabBluetoothComponent Function GetConnectionState
struct Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics
{
	struct DgLabBluetoothComponent_eventGetConnectionState_Parms
	{
		EDgLabConnectionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x8a\xb6\xe6\x80\x81\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventGetConnectionState_Parms, ReturnValue), Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState, METADATA_PARAMS(0, nullptr) }; // 3370287606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "GetConnectionState", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::DgLabBluetoothComponent_eventGetConnectionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::DgLabBluetoothComponent_eventGetConnectionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execGetConnectionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDgLabConnectionState*)Z_Param__Result=P_THIS->GetConnectionState();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function GetConnectionState

// Begin Class UDgLabBluetoothComponent Function GetCurrentStrengthA
struct Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics
{
	struct DgLabBluetoothComponent_eventGetCurrentStrengthA_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d""A\xe9\x80\x9a\xe9\x81\x93\xe5\xbc\xba\xe5\xba\xa6\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d""A\xe9\x80\x9a\xe9\x81\x93\xe5\xbc\xba\xe5\xba\xa6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventGetCurrentStrengthA_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "GetCurrentStrengthA", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::DgLabBluetoothComponent_eventGetCurrentStrengthA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::DgLabBluetoothComponent_eventGetCurrentStrengthA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execGetCurrentStrengthA)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStrengthA();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function GetCurrentStrengthA

// Begin Class UDgLabBluetoothComponent Function GetCurrentStrengthB
struct Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics
{
	struct DgLabBluetoothComponent_eventGetCurrentStrengthB_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d""B\xe9\x80\x9a\xe9\x81\x93\xe5\xbc\xba\xe5\xba\xa6\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d""B\xe9\x80\x9a\xe9\x81\x93\xe5\xbc\xba\xe5\xba\xa6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventGetCurrentStrengthB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "GetCurrentStrengthB", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::DgLabBluetoothComponent_eventGetCurrentStrengthB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::DgLabBluetoothComponent_eventGetCurrentStrengthB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execGetCurrentStrengthB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStrengthB();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function GetCurrentStrengthB

// Begin Class UDgLabBluetoothComponent Function GetDiscoveredDeviceCount
struct Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics
{
	struct DgLabBluetoothComponent_eventGetDiscoveredDeviceCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe5\xb7\xb2\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe6\x95\xb0\xe9\x87\x8f\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xb7\xb2\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventGetDiscoveredDeviceCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "GetDiscoveredDeviceCount", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::DgLabBluetoothComponent_eventGetDiscoveredDeviceCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::DgLabBluetoothComponent_eventGetDiscoveredDeviceCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execGetDiscoveredDeviceCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDiscoveredDeviceCount();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function GetDiscoveredDeviceCount

// Begin Class UDgLabBluetoothComponent Function GetDiscoveredDevices
struct Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics
{
	struct DgLabBluetoothComponent_eventGetDiscoveredDevices_Parms
	{
		TArray<FDgLabDeviceInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe5\xb7\xb2\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe5\x88\x97\xe8\xa1\xa8\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xb7\xb2\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe5\x88\x97\xe8\xa1\xa8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDgLabDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 3175805333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventGetDiscoveredDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3175805333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "GetDiscoveredDevices", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::DgLabBluetoothComponent_eventGetDiscoveredDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::DgLabBluetoothComponent_eventGetDiscoveredDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execGetDiscoveredDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDgLabDeviceInfo>*)Z_Param__Result=P_THIS->GetDiscoveredDevices();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function GetDiscoveredDevices

// Begin Class UDgLabBluetoothComponent Function IncreaseStrength
struct Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics
{
	struct DgLabBluetoothComponent_eventIncreaseStrength_Parms
	{
		EDgLabChannel Channel;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\xa2\x9e\xe5\xa4\xa7\xe5\xbc\xba\xe5\xba\xa6\n\x09 * @param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n\x09 * @param Value \xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe5\xbc\xba\xe5\xba\xa6\xe5\x80\xbc (\xe9\xbb\x98\xe8\xae\xa4""5)\n\x09 */" },
#endif
		{ "CPP_Default_Value", "5" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa2\x9e\xe5\xa4\xa7\xe5\xbc\xba\xe5\xba\xa6\n@param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n@param Value \xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84\xe5\xbc\xba\xe5\xba\xa6\xe5\x80\xbc (\xe9\xbb\x98\xe8\xae\xa4""5)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventIncreaseStrength_Parms, Channel), Z_Construct_UEnum_DGLabForUE_EDgLabChannel, METADATA_PARAMS(0, nullptr) }; // 450391991
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventIncreaseStrength_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "IncreaseStrength", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::DgLabBluetoothComponent_eventIncreaseStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::DgLabBluetoothComponent_eventIncreaseStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execIncreaseStrength)
{
	P_GET_ENUM(EDgLabChannel,Z_Param_Channel);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseStrength(EDgLabChannel(Z_Param_Channel),Z_Param_Value);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function IncreaseStrength

// Begin Class UDgLabBluetoothComponent Function IsConnected
struct Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics
{
	struct DgLabBluetoothComponent_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0\xe8\xae\xbe\xe5\xa4\x87\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0\xe8\xae\xbe\xe5\xa4\x87" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DgLabBluetoothComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DgLabBluetoothComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::DgLabBluetoothComponent_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::DgLabBluetoothComponent_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function IsConnected

// Begin Class UDgLabBluetoothComponent Function IsOutputting
struct Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics
{
	struct DgLabBluetoothComponent_eventIsOutputting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe8\xbe\x93\xe5\x87\xba\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe8\xbe\x93\xe5\x87\xba" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DgLabBluetoothComponent_eventIsOutputting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DgLabBluetoothComponent_eventIsOutputting_Parms), &Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "IsOutputting", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::DgLabBluetoothComponent_eventIsOutputting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::DgLabBluetoothComponent_eventIsOutputting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execIsOutputting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOutputting();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function IsOutputting

// Begin Class UDgLabBluetoothComponent Function IsScanning
struct Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics
{
	struct DgLabBluetoothComponent_eventIsScanning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe6\x89\xab\xe6\x8f\x8f\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\xad\xa3\xe5\x9c\xa8\xe6\x89\xab\xe6\x8f\x8f" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DgLabBluetoothComponent_eventIsScanning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DgLabBluetoothComponent_eventIsScanning_Parms), &Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "IsScanning", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::DgLabBluetoothComponent_eventIsScanning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::DgLabBluetoothComponent_eventIsScanning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execIsScanning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsScanning();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function IsScanning

// Begin Class UDgLabBluetoothComponent Function ReadBattery
struct Z_Construct_UFunction_UDgLabBluetoothComponent_ReadBattery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xaf\xbb\xe5\x8f\x96\xe8\xae\xbe\xe5\xa4\x87\xe7\x94\xb5\xe9\x87\x8f\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96\xe8\xae\xbe\xe5\xa4\x87\xe7\x94\xb5\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_ReadBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "ReadBattery", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_ReadBattery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_ReadBattery_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_ReadBattery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_ReadBattery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execReadBattery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReadBattery();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function ReadBattery

// Begin Class UDgLabBluetoothComponent Function SendPulse
struct Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics
{
	struct DgLabBluetoothComponent_eventSendPulse_Parms
	{
		EDgLabChannel Channel;
		int32 Intensity;
		int32 Frequency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\x8f\x91\xe9\x80\x81\xe5\x8d\x95\xe6\xac\xa1\xe8\x84\x89\xe5\x86\xb2\xef\xbc\x88\xe7\x94\xb5\xe5\x87\xbb\xef\xbc\x89\n\x09 * @param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n\x09 * @param Intensity \xe8\x84\x89\xe5\x86\xb2\xe5\xbc\xba\xe5\xba\xa6 (0-100)\n\x09 * @param Frequency \xe8\x84\x89\xe5\x86\xb2\xe9\xa2\x91\xe7\x8e\x87 (10-1000)\n\x09 */" },
#endif
		{ "CPP_Default_Frequency", "100" },
		{ "CPP_Default_Intensity", "80" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe9\x80\x81\xe5\x8d\x95\xe6\xac\xa1\xe8\x84\x89\xe5\x86\xb2\xef\xbc\x88\xe7\x94\xb5\xe5\x87\xbb\xef\xbc\x89\n@param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n@param Intensity \xe8\x84\x89\xe5\x86\xb2\xe5\xbc\xba\xe5\xba\xa6 (0-100)\n@param Frequency \xe8\x84\x89\xe5\x86\xb2\xe9\xa2\x91\xe7\x8e\x87 (10-1000)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSendPulse_Parms, Channel), Z_Construct_UEnum_DGLabForUE_EDgLabChannel, METADATA_PARAMS(0, nullptr) }; // 450391991
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSendPulse_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSendPulse_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::NewProp_Frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "SendPulse", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::DgLabBluetoothComponent_eventSendPulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::DgLabBluetoothComponent_eventSendPulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execSendPulse)
{
	P_GET_ENUM(EDgLabChannel,Z_Param_Channel);
	P_GET_PROPERTY(FIntProperty,Z_Param_Intensity);
	P_GET_PROPERTY(FIntProperty,Z_Param_Frequency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendPulse(EDgLabChannel(Z_Param_Channel),Z_Param_Intensity,Z_Param_Frequency);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function SendPulse

// Begin Class UDgLabBluetoothComponent Function SendWaveOutput
struct Z_Construct_UFunction_UDgLabBluetoothComponent_SendWaveOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\x8f\x91\xe9\x80\x81\xe5\xbd\x93\xe5\x89\x8d\xe6\xb3\xa2\xe5\xbd\xa2\xe8\xbe\x93\xe5\x87\xba\xef\xbc\x88\xe5\x8d\x95\xe6\xac\xa1\xe5\x8f\x91\xe9\x80\x81""B0\xe6\x8c\x87\xe4\xbb\xa4\xef\xbc\x89\n\x09 * \xe9\x9c\x80\xe8\xa6\x81\xe5\x85\x88\xe8\xb0\x83\xe7\x94\xa8 StartOutput \xe8\xae\xbe\xe7\xbd\xae\xe6\xb3\xa2\xe5\xbd\xa2\xe5\x8f\x82\xe6\x95\xb0\n\x09 * \xe5\xbb\xba\xe8\xae\xae\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe4\xbd\xbf\xe7\x94\xa8 Timer \xe6\xaf\x8f 0.1 \xe7\xa7\x92\xe8\xb0\x83\xe7\x94\xa8\xe4\xb8\x80\xe6\xac\xa1\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe9\x80\x81\xe5\xbd\x93\xe5\x89\x8d\xe6\xb3\xa2\xe5\xbd\xa2\xe8\xbe\x93\xe5\x87\xba\xef\xbc\x88\xe5\x8d\x95\xe6\xac\xa1\xe5\x8f\x91\xe9\x80\x81""B0\xe6\x8c\x87\xe4\xbb\xa4\xef\xbc\x89\n\xe9\x9c\x80\xe8\xa6\x81\xe5\x85\x88\xe8\xb0\x83\xe7\x94\xa8 StartOutput \xe8\xae\xbe\xe7\xbd\xae\xe6\xb3\xa2\xe5\xbd\xa2\xe5\x8f\x82\xe6\x95\xb0\n\xe5\xbb\xba\xe8\xae\xae\xe5\x9c\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\xad\xe4\xbd\xbf\xe7\x94\xa8 Timer \xe6\xaf\x8f 0.1 \xe7\xa7\x92\xe8\xb0\x83\xe7\x94\xa8\xe4\xb8\x80\xe6\xac\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_SendWaveOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "SendWaveOutput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SendWaveOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_SendWaveOutput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_SendWaveOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_SendWaveOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execSendWaveOutput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendWaveOutput();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function SendWaveOutput

// Begin Class UDgLabBluetoothComponent Function SetStrength
struct Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics
{
	struct DgLabBluetoothComponent_eventSetStrength_Parms
	{
		EDgLabChannel Channel;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xae\xbe\xe7\xbd\xae\xe7\xbb\x9d\xe5\xaf\xb9\xe5\xbc\xba\xe5\xba\xa6\n\x09 * @param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n\x09 * @param Value \xe5\xbc\xba\xe5\xba\xa6\xe5\x80\xbc (0-200)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe7\xbb\x9d\xe5\xaf\xb9\xe5\xbc\xba\xe5\xba\xa6\n@param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n@param Value \xe5\xbc\xba\xe5\xba\xa6\xe5\x80\xbc (0-200)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSetStrength_Parms, Channel), Z_Construct_UEnum_DGLabForUE_EDgLabChannel, METADATA_PARAMS(0, nullptr) }; // 450391991
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSetStrength_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "SetStrength", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::DgLabBluetoothComponent_eventSetStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::DgLabBluetoothComponent_eventSetStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execSetStrength)
{
	P_GET_ENUM(EDgLabChannel,Z_Param_Channel);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStrength(EDgLabChannel(Z_Param_Channel),Z_Param_Value);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function SetStrength

// Begin Class UDgLabBluetoothComponent Function SetStrengthLimit
struct Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics
{
	struct DgLabBluetoothComponent_eventSetStrengthLimit_Parms
	{
		int32 LimitA;
		int32 LimitB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xae\xbe\xe7\xbd\xae\xe8\xbd\xaf\xe4\xb8\x8a\xe9\x99\x90\n\x09 * @param LimitA A\xe9\x80\x9a\xe9\x81\x93\xe5\xbc\xba\xe5\xba\xa6\xe4\xb8\x8a\xe9\x99\x90 (0-200)\n\x09 * @param LimitB B\xe9\x80\x9a\xe9\x81\x93\xe5\xbc\xba\xe5\xba\xa6\xe4\xb8\x8a\xe9\x99\x90 (0-200)\n\x09 */" },
#endif
		{ "CPP_Default_LimitA", "150" },
		{ "CPP_Default_LimitB", "150" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe8\xbd\xaf\xe4\xb8\x8a\xe9\x99\x90\n@param LimitA A\xe9\x80\x9a\xe9\x81\x93\xe5\xbc\xba\xe5\xba\xa6\xe4\xb8\x8a\xe9\x99\x90 (0-200)\n@param LimitB B\xe9\x80\x9a\xe9\x81\x93\xe5\xbc\xba\xe5\xba\xa6\xe4\xb8\x8a\xe9\x99\x90 (0-200)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LimitA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LimitB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::NewProp_LimitA = { "LimitA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSetStrengthLimit_Parms, LimitA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::NewProp_LimitB = { "LimitB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSetStrengthLimit_Parms, LimitB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::NewProp_LimitA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::NewProp_LimitB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "SetStrengthLimit", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::DgLabBluetoothComponent_eventSetStrengthLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::DgLabBluetoothComponent_eventSetStrengthLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execSetStrengthLimit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LimitA);
	P_GET_PROPERTY(FIntProperty,Z_Param_LimitB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStrengthLimit(Z_Param_LimitA,Z_Param_LimitB);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function SetStrengthLimit

// Begin Class UDgLabBluetoothComponent Function SetWavePreset
struct Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics
{
	struct DgLabBluetoothComponent_eventSetWavePreset_Parms
	{
		EDgLabChannel Channel;
		EDgLabWavePreset WavePreset;
		int32 Frequency;
		int32 Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xae\xbe\xe7\xbd\xae\xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x84\xe8\xae\xbe\n\x09 * @param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n\x09 * @param WavePreset \xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x84\xe8\xae\xbe\n\x09 * @param Frequency \xe5\x9f\xba\xe7\xa1\x80\xe9\xa2\x91\xe7\x8e\x87 (10-1000)\n\x09 * @param Intensity \xe5\x9f\xba\xe7\xa1\x80\xe5\xbc\xba\xe5\xba\xa6 (0-100)\n\x09 */" },
#endif
		{ "CPP_Default_Frequency", "100" },
		{ "CPP_Default_Intensity", "50" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x84\xe8\xae\xbe\n@param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n@param WavePreset \xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x84\xe8\xae\xbe\n@param Frequency \xe5\x9f\xba\xe7\xa1\x80\xe9\xa2\x91\xe7\x8e\x87 (10-1000)\n@param Intensity \xe5\x9f\xba\xe7\xa1\x80\xe5\xbc\xba\xe5\xba\xa6 (0-100)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WavePreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WavePreset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSetWavePreset_Parms, Channel), Z_Construct_UEnum_DGLabForUE_EDgLabChannel, METADATA_PARAMS(0, nullptr) }; // 450391991
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_WavePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_WavePreset = { "WavePreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSetWavePreset_Parms, WavePreset), Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset, METADATA_PARAMS(0, nullptr) }; // 596573529
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSetWavePreset_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventSetWavePreset_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_WavePreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_WavePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "SetWavePreset", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::DgLabBluetoothComponent_eventSetWavePreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::DgLabBluetoothComponent_eventSetWavePreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execSetWavePreset)
{
	P_GET_ENUM(EDgLabChannel,Z_Param_Channel);
	P_GET_ENUM(EDgLabWavePreset,Z_Param_WavePreset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Frequency);
	P_GET_PROPERTY(FIntProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWavePreset(EDgLabChannel(Z_Param_Channel),EDgLabWavePreset(Z_Param_WavePreset),Z_Param_Frequency,Z_Param_Intensity);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function SetWavePreset

// Begin Class UDgLabBluetoothComponent Function StartOutput
struct Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics
{
	struct DgLabBluetoothComponent_eventStartOutput_Parms
	{
		EDgLabChannel Channel;
		EDgLabWavePreset WavePreset;
		int32 Frequency;
		int32 Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xae\xbe\xe7\xbd\xae\xe6\xb3\xa2\xe5\xbd\xa2\xe8\xbe\x93\xe5\x87\xba\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x88\xe4\xb8\x8d\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\x8f\x91\xe9\x80\x81\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x89\x8b\xe5\x8a\xa8\xe8\xb0\x83\xe7\x94\xa8 SendWaveOutput\xef\xbc\x89\n\x09 * @param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n\x09 * @param WavePreset \xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x84\xe8\xae\xbe\n\x09 * @param Frequency \xe5\x9f\xba\xe7\xa1\x80\xe9\xa2\x91\xe7\x8e\x87 (10-1000)\n\x09 * @param Intensity \xe5\x9f\xba\xe7\xa1\x80\xe5\xbc\xba\xe5\xba\xa6 (0-100)\n\x09 */" },
#endif
		{ "CPP_Default_Channel", "Both" },
		{ "CPP_Default_Frequency", "100" },
		{ "CPP_Default_Intensity", "50" },
		{ "CPP_Default_WavePreset", "Constant" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe6\xb3\xa2\xe5\xbd\xa2\xe8\xbe\x93\xe5\x87\xba\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x88\xe4\xb8\x8d\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\x8f\x91\xe9\x80\x81\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x89\x8b\xe5\x8a\xa8\xe8\xb0\x83\xe7\x94\xa8 SendWaveOutput\xef\xbc\x89\n@param Channel \xe9\x80\x9a\xe9\x81\x93\xe9\x80\x89\xe6\x8b\xa9\n@param WavePreset \xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x84\xe8\xae\xbe\n@param Frequency \xe5\x9f\xba\xe7\xa1\x80\xe9\xa2\x91\xe7\x8e\x87 (10-1000)\n@param Intensity \xe5\x9f\xba\xe7\xa1\x80\xe5\xbc\xba\xe5\xba\xa6 (0-100)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WavePreset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WavePreset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventStartOutput_Parms, Channel), Z_Construct_UEnum_DGLabForUE_EDgLabChannel, METADATA_PARAMS(0, nullptr) }; // 450391991
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_WavePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_WavePreset = { "WavePreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventStartOutput_Parms, WavePreset), Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset, METADATA_PARAMS(0, nullptr) }; // 596573529
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventStartOutput_Parms, Frequency), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventStartOutput_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_WavePreset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_WavePreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "StartOutput", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::DgLabBluetoothComponent_eventStartOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::DgLabBluetoothComponent_eventStartOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execStartOutput)
{
	P_GET_ENUM(EDgLabChannel,Z_Param_Channel);
	P_GET_ENUM(EDgLabWavePreset,Z_Param_WavePreset);
	P_GET_PROPERTY(FIntProperty,Z_Param_Frequency);
	P_GET_PROPERTY(FIntProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartOutput(EDgLabChannel(Z_Param_Channel),EDgLabWavePreset(Z_Param_WavePreset),Z_Param_Frequency,Z_Param_Intensity);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function StartOutput

// Begin Class UDgLabBluetoothComponent Function StartScan
struct Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics
{
	struct DgLabBluetoothComponent_eventStartScan_Parms
	{
		float ScanDuration;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f\xe5\x91\xa8\xe5\x9b\xb4\xe7\x9a\x84""DG-LAB\xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\n\x09 * @param ScanDuration \xe6\x89\xab\xe6\x8f\x8f\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xef\xbc\x8c""0\xe8\xa1\xa8\xe7\xa4\xba\xe6\x8c\x81\xe7\xbb\xad\xe6\x89\xab\xe6\x8f\x8f\xe7\x9b\xb4\xe5\x88\xb0\xe6\x89\x8b\xe5\x8a\xa8\xe5\x81\x9c\xe6\xad\xa2\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f\n\x09 */" },
#endif
		{ "CPP_Default_ScanDuration", "10.000000" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f\xe5\x91\xa8\xe5\x9b\xb4\xe7\x9a\x84""DG-LAB\xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\n@param ScanDuration \xe6\x89\xab\xe6\x8f\x8f\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\xef\xbc\x8c""0\xe8\xa1\xa8\xe7\xa4\xba\xe6\x8c\x81\xe7\xbb\xad\xe6\x89\xab\xe6\x8f\x8f\xe7\x9b\xb4\xe5\x88\xb0\xe6\x89\x8b\xe5\x8a\xa8\xe5\x81\x9c\xe6\xad\xa2\n@return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScanDuration;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::NewProp_ScanDuration = { "ScanDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabBluetoothComponent_eventStartScan_Parms, ScanDuration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DgLabBluetoothComponent_eventStartScan_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DgLabBluetoothComponent_eventStartScan_Parms), &Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::NewProp_ScanDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "StartScan", nullptr, nullptr, Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::DgLabBluetoothComponent_eventStartScan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::DgLabBluetoothComponent_eventStartScan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execStartScan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScanDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartScan(Z_Param_ScanDuration);
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function StartScan

// Begin Class UDgLabBluetoothComponent Function StopOutput
struct Z_Construct_UFunction_UDgLabBluetoothComponent_StopOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\x81\x9c\xe6\xad\xa2\xe6\xb3\xa2\xe5\xbd\xa2\xe8\xbe\x93\xe5\x87\xba\xef\xbc\x88\xe6\xb8\x85\xe7\xa9\xba\xe6\xb3\xa2\xe5\xbd\xa2\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x89\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe6\xb3\xa2\xe5\xbd\xa2\xe8\xbe\x93\xe5\x87\xba\xef\xbc\x88\xe6\xb8\x85\xe7\xa9\xba\xe6\xb3\xa2\xe5\xbd\xa2\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_StopOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "StopOutput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_StopOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_StopOutput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_StopOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_StopOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execStopOutput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopOutput();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function StopOutput

// Begin Class UDgLabBluetoothComponent Function StopScan
struct Z_Construct_UFunction_UDgLabBluetoothComponent_StopScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\x81\x9c\xe6\xad\xa2\xe6\x89\xab\xe6\x8f\x8f\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe6\x89\xab\xe6\x8f\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgLabBluetoothComponent_StopScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgLabBluetoothComponent, nullptr, "StopScan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDgLabBluetoothComponent_StopScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDgLabBluetoothComponent_StopScan_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDgLabBluetoothComponent_StopScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDgLabBluetoothComponent_StopScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDgLabBluetoothComponent::execStopScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopScan();
	P_NATIVE_END;
}
// End Class UDgLabBluetoothComponent Function StopScan

// Begin Class UDgLabBluetoothComponent
void UDgLabBluetoothComponent::StaticRegisterNativesUDgLabBluetoothComponent()
{
	UClass* Class = UDgLabBluetoothComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearDiscoveredDevices", &UDgLabBluetoothComponent::execClearDiscoveredDevices },
		{ "ConnectToDevice", &UDgLabBluetoothComponent::execConnectToDevice },
		{ "ConnectToDeviceByInfo", &UDgLabBluetoothComponent::execConnectToDeviceByInfo },
		{ "DecreaseStrength", &UDgLabBluetoothComponent::execDecreaseStrength },
		{ "Disconnect", &UDgLabBluetoothComponent::execDisconnect },
		{ "GetConnectedDeviceInfo", &UDgLabBluetoothComponent::execGetConnectedDeviceInfo },
		{ "GetConnectionState", &UDgLabBluetoothComponent::execGetConnectionState },
		{ "GetCurrentStrengthA", &UDgLabBluetoothComponent::execGetCurrentStrengthA },
		{ "GetCurrentStrengthB", &UDgLabBluetoothComponent::execGetCurrentStrengthB },
		{ "GetDiscoveredDeviceCount", &UDgLabBluetoothComponent::execGetDiscoveredDeviceCount },
		{ "GetDiscoveredDevices", &UDgLabBluetoothComponent::execGetDiscoveredDevices },
		{ "IncreaseStrength", &UDgLabBluetoothComponent::execIncreaseStrength },
		{ "IsConnected", &UDgLabBluetoothComponent::execIsConnected },
		{ "IsOutputting", &UDgLabBluetoothComponent::execIsOutputting },
		{ "IsScanning", &UDgLabBluetoothComponent::execIsScanning },
		{ "ReadBattery", &UDgLabBluetoothComponent::execReadBattery },
		{ "SendPulse", &UDgLabBluetoothComponent::execSendPulse },
		{ "SendWaveOutput", &UDgLabBluetoothComponent::execSendWaveOutput },
		{ "SetStrength", &UDgLabBluetoothComponent::execSetStrength },
		{ "SetStrengthLimit", &UDgLabBluetoothComponent::execSetStrengthLimit },
		{ "SetWavePreset", &UDgLabBluetoothComponent::execSetWavePreset },
		{ "StartOutput", &UDgLabBluetoothComponent::execStartOutput },
		{ "StartScan", &UDgLabBluetoothComponent::execStartScan },
		{ "StopOutput", &UDgLabBluetoothComponent::execStopOutput },
		{ "StopScan", &UDgLabBluetoothComponent::execStopScan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDgLabBluetoothComponent);
UClass* Z_Construct_UClass_UDgLabBluetoothComponent_NoRegister()
{
	return UDgLabBluetoothComponent::StaticClass();
}
struct Z_Construct_UClass_UDgLabBluetoothComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "DgLab" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DG-LAB\xe8\x93\x9d\xe7\x89\x99\xe7\xbb\x84\xe4\xbb\xb6\n * \xe5\x8f\xaf\xe6\x8c\x82\xe8\xbd\xbd\xe5\x88\xb0\xe4\xbb\xbb\xe6\x84\x8f""Actor\xe4\xb8\x8a\xef\xbc\x8c\xe6\x8f\x90\xe4\xbe\x9b\xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\xe6\x89\xab\xe6\x8f\x8f\xe5\x92\x8c\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x8a\x9f\xe8\x83\xbd\n * \n * \xe4\xbd\xbf\xe7\x94\xa8\xe6\x96\xb9\xe6\xb3\x95:\n * 1. \xe5\xb0\x86\xe6\xad\xa4\xe7\xbb\x84\xe4\xbb\xb6\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0""Actor\xe4\xb8\x8a\n * 2. \xe7\xbb\x91\xe5\xae\x9a\xe8\x93\x9d\xe5\x9b\xbe\xe4\xba\x8b\xe4\xbb\xb6 (OnDeviceFound, OnScanComplete\xe7\xad\x89)\n * 3. \xe8\xb0\x83\xe7\x94\xa8StartScan()\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f\n * 4. \xe4\xbb\x8eOnDeviceFound\xe4\xba\x8b\xe4\xbb\xb6\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\n * 5. \xe8\xb0\x83\xe7\x94\xa8""ConnectToDevice()\xe8\xbf\x9e\xe6\x8e\xa5\xe8\xae\xbe\xe5\xa4\x87\n */" },
#endif
		{ "IncludePath", "DgLabBluetoothComponent.h" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DG-LAB\xe8\x93\x9d\xe7\x89\x99\xe7\xbb\x84\xe4\xbb\xb6\n\xe5\x8f\xaf\xe6\x8c\x82\xe8\xbd\xbd\xe5\x88\xb0\xe4\xbb\xbb\xe6\x84\x8f""Actor\xe4\xb8\x8a\xef\xbc\x8c\xe6\x8f\x90\xe4\xbe\x9b\xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\xe6\x89\xab\xe6\x8f\x8f\xe5\x92\x8c\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x8a\x9f\xe8\x83\xbd\n\n\xe4\xbd\xbf\xe7\x94\xa8\xe6\x96\xb9\xe6\xb3\x95:\n1. \xe5\xb0\x86\xe6\xad\xa4\xe7\xbb\x84\xe4\xbb\xb6\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x88\xb0""Actor\xe4\xb8\x8a\n2. \xe7\xbb\x91\xe5\xae\x9a\xe8\x93\x9d\xe5\x9b\xbe\xe4\xba\x8b\xe4\xbb\xb6 (OnDeviceFound, OnScanComplete\xe7\xad\x89)\n3. \xe8\xb0\x83\xe7\x94\xa8StartScan()\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f\n4. \xe4\xbb\x8eOnDeviceFound\xe4\xba\x8b\xe4\xbb\xb6\xe4\xb8\xad\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\n5. \xe8\xb0\x83\xe7\x94\xa8""ConnectToDevice()\xe8\xbf\x9e\xe6\x8e\xa5\xe8\xae\xbe\xe5\xa4\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeviceFound_MetaData[] = {
		{ "Category", "DgLab|Bluetooth|Events" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScanComplete_MetaData[] = {
		{ "Category", "DgLab|Bluetooth|Events" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScanCompleteWithDevices_MetaData[] = {
		{ "Category", "DgLab|Bluetooth|Events" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionStateChanged_MetaData[] = {
		{ "Category", "DgLab|Bluetooth|Events" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBluetoothError_MetaData[] = {
		{ "Category", "DgLab|Bluetooth|Events" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStrengthUpdated_MetaData[] = {
		{ "Category", "DgLab|Control|Events" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBatteryUpdated_MetaData[] = {
		{ "Category", "DgLab|Control|Events" },
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoInitialize_MetaData[] = {
		{ "Category", "DgLab|Bluetooth|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe8\x93\x9d\xe7\x89\x99\xef\xbc\x88\xe5\x9c\xa8""BeginPlay\xe6\x97\xb6\xef\xbc\x89- \xe5\xa6\x82\xe6\x9e\x9c\xe5\x85\xb3\xe9\x97\xad\xef\xbc\x8c\xe8\x93\x9d\xe7\x89\x99\xe5\x8a\x9f\xe8\x83\xbd\xe5\xb0\x86\xe4\xb8\x8d\xe5\x8f\xaf\xe7\x94\xa8 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe8\x93\x9d\xe7\x89\x99\xef\xbc\x88\xe5\x9c\xa8""BeginPlay\xe6\x97\xb6\xef\xbc\x89- \xe5\xa6\x82\xe6\x9e\x9c\xe5\x85\xb3\xe9\x97\xad\xef\xbc\x8c\xe8\x93\x9d\xe7\x89\x99\xe5\x8a\x9f\xe8\x83\xbd\xe5\xb0\x86\xe4\xb8\x8d\xe5\x8f\xaf\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterDgLabDevicesOnly_MetaData[] = {
		{ "Category", "DgLab|Bluetooth|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaa\xe6\x98\xbe\xe7\xa4\xba""DG-LAB\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x88\xe8\xbf\x87\xe6\xbb\xa4\xe5\x85\xb6\xe4\xbb\x96\xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x89- \xe6\x8e\xa8\xe8\x8d\x90\xe5\xbc\x80\xe5\x90\xaf */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaa\xe6\x98\xbe\xe7\xa4\xba""DG-LAB\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x88\xe8\xbf\x87\xe6\xbb\xa4\xe5\x85\xb6\xe4\xbb\x96\xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\xef\xbc\x89- \xe6\x8e\xa8\xe8\x8d\x90\xe5\xbc\x80\xe5\x90\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignalStrengthThreshold_MetaData[] = {
		{ "Category", "DgLab|Bluetooth|Settings" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-100" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\xab\xe6\x8f\x8f\xe4\xbf\xa1\xe5\x8f\xb7\xe5\xbc\xba\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x88RSSI dBm\xef\xbc\x89- \xe4\xbd\x8e\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe4\xbc\x9a\xe8\xa2\xab\xe8\xbf\x87\xe6\xbb\xa4\xef\xbc\x8c\xe8\x8c\x83\xe5\x9b\xb4-100\xe5\x88\xb0""0\xef\xbc\x8c\xe8\xb6\x8a\xe5\xa4\xa7\xe4\xbf\xa1\xe5\x8f\xb7\xe8\xb6\x8a\xe5\xbc\xba */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabBluetoothComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xab\xe6\x8f\x8f\xe4\xbf\xa1\xe5\x8f\xb7\xe5\xbc\xba\xe5\xba\xa6\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x88RSSI dBm\xef\xbc\x89- \xe4\xbd\x8e\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87\xe4\xbc\x9a\xe8\xa2\xab\xe8\xbf\x87\xe6\xbb\xa4\xef\xbc\x8c\xe8\x8c\x83\xe5\x9b\xb4-100\xe5\x88\xb0""0\xef\xbc\x8c\xe8\xb6\x8a\xe5\xa4\xa7\xe4\xbf\xa1\xe5\x8f\xb7\xe8\xb6\x8a\xe5\xbc\xba" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeviceFound;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScanComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScanCompleteWithDevices;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBluetoothError;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStrengthUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBatteryUpdated;
	static void NewProp_bAutoInitialize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInitialize;
	static void NewProp_bFilterDgLabDevicesOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterDgLabDevicesOnly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SignalStrengthThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_ClearDiscoveredDevices, "ClearDiscoveredDevices" }, // 2129964020
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDevice, "ConnectToDevice" }, // 3395441437
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_ConnectToDeviceByInfo, "ConnectToDeviceByInfo" }, // 533698288
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_DecreaseStrength, "DecreaseStrength" }, // 350003876
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_Disconnect, "Disconnect" }, // 2360940222
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectedDeviceInfo, "GetConnectedDeviceInfo" }, // 2361661231
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_GetConnectionState, "GetConnectionState" }, // 474539142
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthA, "GetCurrentStrengthA" }, // 319426864
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_GetCurrentStrengthB, "GetCurrentStrengthB" }, // 2426333141
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDeviceCount, "GetDiscoveredDeviceCount" }, // 291704052
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_GetDiscoveredDevices, "GetDiscoveredDevices" }, // 689086571
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_IncreaseStrength, "IncreaseStrength" }, // 431540080
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_IsConnected, "IsConnected" }, // 3914394352
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_IsOutputting, "IsOutputting" }, // 3614926145
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_IsScanning, "IsScanning" }, // 1528323955
		{ &Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature, "OnBatteryUpdatedSignature__DelegateSignature" }, // 431014037
		{ &Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature, "OnBluetoothErrorSignature__DelegateSignature" }, // 4223235495
		{ &Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature, "OnConnectionStateChangedSignature__DelegateSignature" }, // 662594716
		{ &Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature, "OnDeviceFoundSignature__DelegateSignature" }, // 849609173
		{ &Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature, "OnScanCompleteSignature__DelegateSignature" }, // 3131858309
		{ &Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature, "OnScanCompleteWithDevicesSignature__DelegateSignature" }, // 393954300
		{ &Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature, "OnStrengthUpdatedSignature__DelegateSignature" }, // 3702889316
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_ReadBattery, "ReadBattery" }, // 712424270
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_SendPulse, "SendPulse" }, // 2651357801
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_SendWaveOutput, "SendWaveOutput" }, // 3579410542
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrength, "SetStrength" }, // 3499865609
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_SetStrengthLimit, "SetStrengthLimit" }, // 2022919647
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_SetWavePreset, "SetWavePreset" }, // 4193632501
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_StartOutput, "StartOutput" }, // 2233588046
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_StartScan, "StartScan" }, // 3957550885
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_StopOutput, "StopOutput" }, // 204268729
		{ &Z_Construct_UFunction_UDgLabBluetoothComponent_StopScan, "StopScan" }, // 3887080129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDgLabBluetoothComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnDeviceFound = { "OnDeviceFound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDgLabBluetoothComponent, OnDeviceFound), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnDeviceFoundSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeviceFound_MetaData), NewProp_OnDeviceFound_MetaData) }; // 849609173
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnScanComplete = { "OnScanComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDgLabBluetoothComponent, OnScanComplete), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScanComplete_MetaData), NewProp_OnScanComplete_MetaData) }; // 3131858309
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnScanCompleteWithDevices = { "OnScanCompleteWithDevices", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDgLabBluetoothComponent, OnScanCompleteWithDevices), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnScanCompleteWithDevicesSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScanCompleteWithDevices_MetaData), NewProp_OnScanCompleteWithDevices_MetaData) }; // 393954300
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnConnectionStateChanged = { "OnConnectionStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDgLabBluetoothComponent, OnConnectionStateChanged), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnConnectionStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectionStateChanged_MetaData), NewProp_OnConnectionStateChanged_MetaData) }; // 662594716
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnBluetoothError = { "OnBluetoothError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDgLabBluetoothComponent, OnBluetoothError), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBluetoothErrorSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBluetoothError_MetaData), NewProp_OnBluetoothError_MetaData) }; // 4223235495
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnStrengthUpdated = { "OnStrengthUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDgLabBluetoothComponent, OnStrengthUpdated), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnStrengthUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStrengthUpdated_MetaData), NewProp_OnStrengthUpdated_MetaData) }; // 3702889316
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnBatteryUpdated = { "OnBatteryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDgLabBluetoothComponent, OnBatteryUpdated), Z_Construct_UDelegateFunction_UDgLabBluetoothComponent_OnBatteryUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBatteryUpdated_MetaData), NewProp_OnBatteryUpdated_MetaData) }; // 431014037
void Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_bAutoInitialize_SetBit(void* Obj)
{
	((UDgLabBluetoothComponent*)Obj)->bAutoInitialize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_bAutoInitialize = { "bAutoInitialize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDgLabBluetoothComponent), &Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_bAutoInitialize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoInitialize_MetaData), NewProp_bAutoInitialize_MetaData) };
void Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_bFilterDgLabDevicesOnly_SetBit(void* Obj)
{
	((UDgLabBluetoothComponent*)Obj)->bFilterDgLabDevicesOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_bFilterDgLabDevicesOnly = { "bFilterDgLabDevicesOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDgLabBluetoothComponent), &Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_bFilterDgLabDevicesOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterDgLabDevicesOnly_MetaData), NewProp_bFilterDgLabDevicesOnly_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_SignalStrengthThreshold = { "SignalStrengthThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDgLabBluetoothComponent, SignalStrengthThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignalStrengthThreshold_MetaData), NewProp_SignalStrengthThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDgLabBluetoothComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnDeviceFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnScanComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnScanCompleteWithDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnConnectionStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnBluetoothError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnStrengthUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_OnBatteryUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_bAutoInitialize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_bFilterDgLabDevicesOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDgLabBluetoothComponent_Statics::NewProp_SignalStrengthThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDgLabBluetoothComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDgLabBluetoothComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DGLabForUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDgLabBluetoothComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDgLabBluetoothComponent_Statics::ClassParams = {
	&UDgLabBluetoothComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDgLabBluetoothComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDgLabBluetoothComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDgLabBluetoothComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDgLabBluetoothComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDgLabBluetoothComponent()
{
	if (!Z_Registration_Info_UClass_UDgLabBluetoothComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDgLabBluetoothComponent.OuterSingleton, Z_Construct_UClass_UDgLabBluetoothComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDgLabBluetoothComponent.OuterSingleton;
}
template<> DGLABFORUE_API UClass* StaticClass<UDgLabBluetoothComponent>()
{
	return UDgLabBluetoothComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDgLabBluetoothComponent);
UDgLabBluetoothComponent::~UDgLabBluetoothComponent() {}
// End Class UDgLabBluetoothComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDgLabBluetoothComponent, UDgLabBluetoothComponent::StaticClass, TEXT("UDgLabBluetoothComponent"), &Z_Registration_Info_UClass_UDgLabBluetoothComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDgLabBluetoothComponent), 2607417965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_885939795(TEXT("/Script/DGLabForUE"),
	Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
