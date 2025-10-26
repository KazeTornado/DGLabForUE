// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DGLabForUE/Public/DgLabDeviceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDgLabDeviceInfo() {}

// Begin Cross Module References
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType();
DGLABFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FDgLabDeviceInfo();
UPackage* Z_Construct_UPackage__Script_DGLabForUE();
// End Cross Module References

// Begin ScriptStruct FDgLabDeviceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DgLabDeviceInfo;
class UScriptStruct* FDgLabDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DgLabDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DgLabDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDgLabDeviceInfo, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("DgLabDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DgLabDeviceInfo.OuterSingleton;
}
template<> DGLABFORUE_API UScriptStruct* StaticStruct<FDgLabDeviceInfo>()
{
	return FDgLabDeviceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf\xe7\xbb\x93\xe6\x9e\x84\n */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabDeviceInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\xe4\xbf\xa1\xe6\x81\xaf\xe7\xbb\x93\xe6\x9e\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceAddress_MetaData[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xae\xbe\xe5\xa4\x87\xe8\x93\x9d\xe7\x89\x99\xe5\x9c\xb0\xe5\x9d\x80 (MAC\xe5\x9c\xb0\xe5\x9d\x80\xe6\xa0\xbc\xe5\xbc\x8f) */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabDeviceInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe5\xa4\x87\xe8\x93\x9d\xe7\x89\x99\xe5\x9c\xb0\xe5\x9d\x80 (MAC\xe5\x9c\xb0\xe5\x9d\x80\xe6\xa0\xbc\xe5\xbc\x8f)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xae\xbe\xe5\xa4\x87\xe5\x90\x8d\xe7\xa7\xb0 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabDeviceInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe5\xa4\x87\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xae\xbe\xe5\xa4\x87\xe7\xb1\xbb\xe5\x9e\x8b */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabDeviceInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe5\xa4\x87\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignalStrength_MetaData[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbf\xa1\xe5\x8f\xb7\xe5\xbc\xba\xe5\xba\xa6 (RSSI) - \xe5\x8d\x95\xe4\xbd\x8d""dBm\xef\xbc\x8c\xe6\x95\xb0\xe5\x80\xbc\xe8\xb6\x8a\xe5\xa4\xa7\xe4\xbf\xa1\xe5\x8f\xb7\xe8\xb6\x8a\xe5\xbc\xba */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabDeviceInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\xa1\xe5\x8f\xb7\xe5\xbc\xba\xe5\xba\xa6 (RSSI) - \xe5\x8d\x95\xe4\xbd\x8d""dBm\xef\xbc\x8c\xe6\x95\xb0\xe5\x80\xbc\xe8\xb6\x8a\xe5\xa4\xa7\xe4\xbf\xa1\xe5\x8f\xb7\xe8\xb6\x8a\xe5\xbc\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaired_MetaData[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe9\x85\x8d\xe5\xaf\xb9 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabDeviceInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xb7\xb2\xe9\x85\x8d\xe5\xaf\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsConnectable_MetaData[] = {
		{ "Category", "DgLab|Bluetooth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe8\xbf\x9e\xe6\x8e\xa5 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabDeviceInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe8\xbf\x9e\xe6\x8e\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceAddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SignalStrength;
	static void NewProp_bIsPaired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaired;
	static void NewProp_bIsConnectable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnectable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDgLabDeviceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_DeviceAddress = { "DeviceAddress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabDeviceInfo, DeviceAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceAddress_MetaData), NewProp_DeviceAddress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabDeviceInfo, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabDeviceInfo, DeviceType), Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceType_MetaData), NewProp_DeviceType_MetaData) }; // 1199645063
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_SignalStrength = { "SignalStrength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabDeviceInfo, SignalStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignalStrength_MetaData), NewProp_SignalStrength_MetaData) };
void Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_bIsPaired_SetBit(void* Obj)
{
	((FDgLabDeviceInfo*)Obj)->bIsPaired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_bIsPaired = { "bIsPaired", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDgLabDeviceInfo), &Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_bIsPaired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPaired_MetaData), NewProp_bIsPaired_MetaData) };
void Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_bIsConnectable_SetBit(void* Obj)
{
	((FDgLabDeviceInfo*)Obj)->bIsConnectable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_bIsConnectable = { "bIsConnectable", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDgLabDeviceInfo), &Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_bIsConnectable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsConnectable_MetaData), NewProp_bIsConnectable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_DeviceAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_DeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_DeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_SignalStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_bIsPaired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewProp_bIsConnectable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	&NewStructOps,
	"DgLabDeviceInfo",
	Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::PropPointers),
	sizeof(FDgLabDeviceInfo),
	alignof(FDgLabDeviceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDgLabDeviceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DgLabDeviceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DgLabDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DgLabDeviceInfo.InnerSingleton;
}
// End ScriptStruct FDgLabDeviceInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabDeviceInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDgLabDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FDgLabDeviceInfo_Statics::NewStructOps, TEXT("DgLabDeviceInfo"), &Z_Registration_Info_UScriptStruct_DgLabDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDgLabDeviceInfo), 3175805333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabDeviceInfo_h_3591548404(TEXT("/Script/DGLabForUE"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabDeviceInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabDeviceInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
