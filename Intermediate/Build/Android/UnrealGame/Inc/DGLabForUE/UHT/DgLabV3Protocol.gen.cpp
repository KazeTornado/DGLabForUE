// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DGLabForUE/Public/DgLabV3Protocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDgLabV3Protocol() {}

// Begin Cross Module References
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabChannel();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset();
DGLABFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FDgLabB1Message();
DGLABFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FDgLabChannelWave();
DGLABFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FDgLabWaveData();
UPackage* Z_Construct_UPackage__Script_DGLabForUE();
// End Cross Module References

// Begin Enum EDgLabChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDgLabChannel;
static UEnum* EDgLabChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDgLabChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDgLabChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DGLabForUE_EDgLabChannel, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("EDgLabChannel"));
	}
	return Z_Registration_Info_UEnum_EDgLabChannel.OuterSingleton;
}
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabChannel>()
{
	return EDgLabChannel_StaticEnum();
}
struct Z_Construct_UEnum_DGLabForUE_EDgLabChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.DisplayName", "AB\xe9\x80\x9a\xe9\x81\x93" },
		{ "Both.Name", "EDgLabChannel::Both" },
		{ "ChannelA.DisplayName", "\xe9\x80\x9a\xe9\x81\x93""A" },
		{ "ChannelA.Name", "EDgLabChannel::ChannelA" },
		{ "ChannelB.DisplayName", "\xe9\x80\x9a\xe9\x81\x93""B" },
		{ "ChannelB.Name", "EDgLabChannel::ChannelB" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DG-LAB\xe9\x80\x9a\xe9\x81\x93\xe6\x9e\x9a\xe4\xb8\xbe\n */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DG-LAB\xe9\x80\x9a\xe9\x81\x93\xe6\x9e\x9a\xe4\xb8\xbe" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDgLabChannel::ChannelA", (int64)EDgLabChannel::ChannelA },
		{ "EDgLabChannel::ChannelB", (int64)EDgLabChannel::ChannelB },
		{ "EDgLabChannel::Both", (int64)EDgLabChannel::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DGLabForUE_EDgLabChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	"EDgLabChannel",
	"EDgLabChannel",
	Z_Construct_UEnum_DGLabForUE_EDgLabChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DGLabForUE_EDgLabChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabChannel()
{
	if (!Z_Registration_Info_UEnum_EDgLabChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDgLabChannel.InnerSingleton, Z_Construct_UEnum_DGLabForUE_EDgLabChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDgLabChannel.InnerSingleton;
}
// End Enum EDgLabChannel

// Begin Enum EDgLabStrengthMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDgLabStrengthMode;
static UEnum* EDgLabStrengthMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDgLabStrengthMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDgLabStrengthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("EDgLabStrengthMode"));
	}
	return Z_Registration_Info_UEnum_EDgLabStrengthMode.OuterSingleton;
}
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabStrengthMode>()
{
	return EDgLabStrengthMode_StaticEnum();
}
struct Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.DisplayName", "\xe7\xbb\x9d\xe5\xaf\xb9\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Absolute.Name", "EDgLabStrengthMode::Absolute" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xbc\xba\xe5\xba\xa6\xe5\x8f\x98\xe5\x8c\x96\xe6\xa8\xa1\xe5\xbc\x8f\n */" },
#endif
		{ "Decrease.DisplayName", "\xe7\x9b\xb8\xe5\xaf\xb9\xe5\x87\x8f\xe5\xb0\x91" },
		{ "Decrease.Name", "EDgLabStrengthMode::Decrease" },
		{ "Increase.DisplayName", "\xe7\x9b\xb8\xe5\xaf\xb9\xe5\xa2\x9e\xe5\x8a\xa0" },
		{ "Increase.Name", "EDgLabStrengthMode::Increase" },
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
		{ "NoChange.DisplayName", "\xe4\xb8\x8d\xe6\x94\xb9\xe5\x8f\x98" },
		{ "NoChange.Name", "EDgLabStrengthMode::NoChange" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\xba\xe5\xba\xa6\xe5\x8f\x98\xe5\x8c\x96\xe6\xa8\xa1\xe5\xbc\x8f" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDgLabStrengthMode::NoChange", (int64)EDgLabStrengthMode::NoChange },
		{ "EDgLabStrengthMode::Increase", (int64)EDgLabStrengthMode::Increase },
		{ "EDgLabStrengthMode::Decrease", (int64)EDgLabStrengthMode::Decrease },
		{ "EDgLabStrengthMode::Absolute", (int64)EDgLabStrengthMode::Absolute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	"EDgLabStrengthMode",
	"EDgLabStrengthMode",
	Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode()
{
	if (!Z_Registration_Info_UEnum_EDgLabStrengthMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDgLabStrengthMode.InnerSingleton, Z_Construct_UEnum_DGLabForUE_EDgLabStrengthMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDgLabStrengthMode.InnerSingleton;
}
// End Enum EDgLabStrengthMode

// Begin Enum EDgLabWavePreset
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDgLabWavePreset;
static UEnum* EDgLabWavePreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDgLabWavePreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDgLabWavePreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("EDgLabWavePreset"));
	}
	return Z_Registration_Info_UEnum_EDgLabWavePreset.OuterSingleton;
}
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabWavePreset>()
{
	return EDgLabWavePreset_StaticEnum();
}
struct Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Breathing.Comment", "// \xe8\x8a\x82\xe5\xa5\x8f\xe6\xb3\xa2\xe5\xbd\xa2\n" },
		{ "Breathing.DisplayName", "\xe5\x91\xbc\xe5\x90\xb8" },
		{ "Breathing.Name", "EDgLabWavePreset::Breathing" },
		{ "Breathing.ToolTip", "\xe8\x8a\x82\xe5\xa5\x8f\xe6\xb3\xa2\xe5\xbd\xa2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x84\xe8\xae\xbe\xe7\xb1\xbb\xe5\x9e\x8b\n */" },
#endif
		{ "Constant.Comment", "// \xe5\x9f\xba\xe7\xa1\x80\xe6\xb3\xa2\xe5\xbd\xa2\n" },
		{ "Constant.DisplayName", "\xe6\x81\x92\xe5\xae\x9a\xe8\xbe\x93\xe5\x87\xba" },
		{ "Constant.Name", "EDgLabWavePreset::Constant" },
		{ "Constant.ToolTip", "\xe5\x9f\xba\xe7\xa1\x80\xe6\xb3\xa2\xe5\xbd\xa2" },
		{ "Custom.Comment", "// \xe9\x9a\x8f\xe6\x9c\xba\xe5\x8f\x98\xe5\x8c\x96\n" },
		{ "Custom.DisplayName", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89" },
		{ "Custom.Name", "EDgLabWavePreset::Custom" },
		{ "Custom.ToolTip", "\xe9\x9a\x8f\xe6\x9c\xba\xe5\x8f\x98\xe5\x8c\x96" },
		{ "Gentle.Comment", "// \xe5\xbc\xba\xe5\xba\xa6\xe6\xb3\xa2\xe5\xbd\xa2\n" },
		{ "Gentle.DisplayName", "\xe8\xbd\xbb\xe6\x9f\x94" },
		{ "Gentle.Name", "EDgLabWavePreset::Gentle" },
		{ "Gentle.ToolTip", "\xe5\xbc\xba\xe5\xba\xa6\xe6\xb3\xa2\xe5\xbd\xa2" },
		{ "Heartbeat.Comment", "// \xe6\xa8\xa1\xe6\x8b\x9f\xe5\x91\xbc\xe5\x90\xb8\xe8\x8a\x82\xe5\xa5\x8f\n" },
		{ "Heartbeat.DisplayName", "\xe5\xbf\x83\xe8\xb7\xb3" },
		{ "Heartbeat.Name", "EDgLabWavePreset::Heartbeat" },
		{ "Heartbeat.ToolTip", "\xe6\xa8\xa1\xe6\x8b\x9f\xe5\x91\xbc\xe5\x90\xb8\xe8\x8a\x82\xe5\xa5\x8f" },
		{ "Medium.Comment", "// \xe4\xbd\x8e\xe9\xa2\x91\xe8\xbd\xbb\xe6\x9f\x94\n" },
		{ "Medium.DisplayName", "\xe4\xb8\xad\xe7\xad\x89" },
		{ "Medium.Name", "EDgLabWavePreset::Medium" },
		{ "Medium.ToolTip", "\xe4\xbd\x8e\xe9\xa2\x91\xe8\xbd\xbb\xe6\x9f\x94" },
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
		{ "Pulse.Comment", "// \xe5\x9b\xba\xe5\xae\x9a\xe9\xa2\x91\xe7\x8e\x87\xe5\x92\x8c\xe5\xbc\xba\xe5\xba\xa6\n" },
		{ "Pulse.DisplayName", "\xe8\x84\x89\xe5\x86\xb2" },
		{ "Pulse.Name", "EDgLabWavePreset::Pulse" },
		{ "Pulse.ToolTip", "\xe5\x9b\xba\xe5\xae\x9a\xe9\xa2\x91\xe7\x8e\x87\xe5\x92\x8c\xe5\xbc\xba\xe5\xba\xa6" },
		{ "Random.Comment", "// \xe7\x89\xb9\xe6\xae\x8a\xe6\xb3\xa2\xe5\xbd\xa2\n" },
		{ "Random.DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba" },
		{ "Random.Name", "EDgLabWavePreset::Random" },
		{ "Random.ToolTip", "\xe7\x89\xb9\xe6\xae\x8a\xe6\xb3\xa2\xe5\xbd\xa2" },
		{ "Rhythm.Comment", "// \xe6\xa8\xa1\xe6\x8b\x9f\xe5\xbf\x83\xe8\xb7\xb3\n" },
		{ "Rhythm.DisplayName", "\xe8\x8a\x82\xe5\xa5\x8f" },
		{ "Rhythm.Name", "EDgLabWavePreset::Rhythm" },
		{ "Rhythm.ToolTip", "\xe6\xa8\xa1\xe6\x8b\x9f\xe5\xbf\x83\xe8\xb7\xb3" },
		{ "Strong.Comment", "// \xe4\xb8\xad\xe9\xa2\x91\xe9\x80\x82\xe4\xb8\xad\n" },
		{ "Strong.DisplayName", "\xe5\xbc\xba\xe5\x8a\xb2" },
		{ "Strong.Name", "EDgLabWavePreset::Strong" },
		{ "Strong.ToolTip", "\xe4\xb8\xad\xe9\xa2\x91\xe9\x80\x82\xe4\xb8\xad" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x84\xe8\xae\xbe\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Wave.Comment", "// \xe5\x8d\x95\xe6\xac\xa1\xe8\x84\x89\xe5\x86\xb2\n" },
		{ "Wave.DisplayName", "\xe6\xb3\xa2\xe6\xb5\xaa" },
		{ "Wave.Name", "EDgLabWavePreset::Wave" },
		{ "Wave.ToolTip", "\xe5\x8d\x95\xe6\xac\xa1\xe8\x84\x89\xe5\x86\xb2" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDgLabWavePreset::Constant", (int64)EDgLabWavePreset::Constant },
		{ "EDgLabWavePreset::Pulse", (int64)EDgLabWavePreset::Pulse },
		{ "EDgLabWavePreset::Wave", (int64)EDgLabWavePreset::Wave },
		{ "EDgLabWavePreset::Breathing", (int64)EDgLabWavePreset::Breathing },
		{ "EDgLabWavePreset::Heartbeat", (int64)EDgLabWavePreset::Heartbeat },
		{ "EDgLabWavePreset::Rhythm", (int64)EDgLabWavePreset::Rhythm },
		{ "EDgLabWavePreset::Gentle", (int64)EDgLabWavePreset::Gentle },
		{ "EDgLabWavePreset::Medium", (int64)EDgLabWavePreset::Medium },
		{ "EDgLabWavePreset::Strong", (int64)EDgLabWavePreset::Strong },
		{ "EDgLabWavePreset::Random", (int64)EDgLabWavePreset::Random },
		{ "EDgLabWavePreset::Custom", (int64)EDgLabWavePreset::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	"EDgLabWavePreset",
	"EDgLabWavePreset",
	Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset()
{
	if (!Z_Registration_Info_UEnum_EDgLabWavePreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDgLabWavePreset.InnerSingleton, Z_Construct_UEnum_DGLabForUE_EDgLabWavePreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDgLabWavePreset.InnerSingleton;
}
// End Enum EDgLabWavePreset

// Begin ScriptStruct FDgLabWaveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DgLabWaveData;
class UScriptStruct* FDgLabWaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DgLabWaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DgLabWaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDgLabWaveData, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("DgLabWaveData"));
	}
	return Z_Registration_Info_UScriptStruct_DgLabWaveData.OuterSingleton;
}
template<> DGLABFORUE_API UScriptStruct* StaticStruct<FDgLabWaveData>()
{
	return FDgLabWaveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDgLabWaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xb3\xa2\xe5\xbd\xa2\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\xef\xbc\x88""25ms\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x89\n */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\xa2\xe5\xbd\xa2\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\xef\xbc\x88""25ms\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "DgLab|Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x91\xe7\x8e\x87 (10-240, \xe6\x98\xa0\xe5\xb0\x84\xe8\x87\xaa""10-1000) */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\xa2\xe5\xbd\xa2\xe9\xa2\x91\xe7\x8e\x87 (10-240, \xe6\x98\xa0\xe5\xb0\x84\xe8\x87\xaa""10-1000)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "DgLab|Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\xb3\xa2\xe5\xbd\xa2\xe5\xbc\xba\xe5\xba\xa6 (0-100) */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb3\xa2\xe5\xbd\xa2\xe5\xbc\xba\xe5\xba\xa6 (0-100)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDgLabWaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDgLabWaveData_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabWaveData, Frequency), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDgLabWaveData_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabWaveData, Intensity), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDgLabWaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabWaveData_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabWaveData_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabWaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDgLabWaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	&NewStructOps,
	"DgLabWaveData",
	Z_Construct_UScriptStruct_FDgLabWaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabWaveData_Statics::PropPointers),
	sizeof(FDgLabWaveData),
	alignof(FDgLabWaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabWaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDgLabWaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDgLabWaveData()
{
	if (!Z_Registration_Info_UScriptStruct_DgLabWaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DgLabWaveData.InnerSingleton, Z_Construct_UScriptStruct_FDgLabWaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DgLabWaveData.InnerSingleton;
}
// End ScriptStruct FDgLabWaveData

// Begin ScriptStruct FDgLabChannelWave
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DgLabChannelWave;
class UScriptStruct* FDgLabChannelWave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DgLabChannelWave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DgLabChannelWave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDgLabChannelWave, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("DgLabChannelWave"));
	}
	return Z_Registration_Info_UScriptStruct_DgLabChannelWave.OuterSingleton;
}
template<> DGLABFORUE_API UScriptStruct* StaticStruct<FDgLabChannelWave>()
{
	return FDgLabChannelWave::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDgLabChannelWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe9\x80\x9a\xe9\x81\x93\xe6\xb3\xa2\xe5\xbd\xa2\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe5\x8c\x85\xe5\x90\xab""4\xe7\xbb\x84""25ms\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x85\xb1""100ms\xef\xbc\x89\n */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe9\x81\x93\xe6\xb3\xa2\xe5\xbd\xa2\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe5\x8c\x85\xe5\x90\xab""4\xe7\xbb\x84""25ms\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x85\xb1""100ms\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveData_MetaData[] = {
		{ "Category", "DgLab|Wave" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 4\xe7\xbb\x84\xe6\xb3\xa2\xe5\xbd\xa2\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe6\xaf\x8f\xe7\xbb\x84""25ms\xef\xbc\x89 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "4\xe7\xbb\x84\xe6\xb3\xa2\xe5\xbd\xa2\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe6\xaf\x8f\xe7\xbb\x84""25ms\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDgLabChannelWave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::NewProp_WaveData_Inner = { "WaveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDgLabWaveData, METADATA_PARAMS(0, nullptr) }; // 2517558949
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::NewProp_WaveData = { "WaveData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabChannelWave, WaveData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveData_MetaData), NewProp_WaveData_MetaData) }; // 2517558949
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::NewProp_WaveData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::NewProp_WaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	&NewStructOps,
	"DgLabChannelWave",
	Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::PropPointers),
	sizeof(FDgLabChannelWave),
	alignof(FDgLabChannelWave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDgLabChannelWave()
{
	if (!Z_Registration_Info_UScriptStruct_DgLabChannelWave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DgLabChannelWave.InnerSingleton, Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DgLabChannelWave.InnerSingleton;
}
// End ScriptStruct FDgLabChannelWave

// Begin ScriptStruct FDgLabB1Message
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DgLabB1Message;
class UScriptStruct* FDgLabB1Message::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DgLabB1Message.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DgLabB1Message.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDgLabB1Message, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("DgLabB1Message"));
	}
	return Z_Registration_Info_UScriptStruct_DgLabB1Message.OuterSingleton;
}
template<> DGLABFORUE_API UScriptStruct* StaticStruct<FDgLabB1Message>()
{
	return FDgLabB1Message::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDgLabB1Message_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * B1\xe6\xb6\x88\xe6\x81\xaf\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe5\xbc\xba\xe5\xba\xa6\xe5\x8f\x8d\xe9\xa6\x88\xef\xbc\x89\n */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "B1\xe6\xb6\x88\xe6\x81\xaf\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe5\xbc\xba\xe5\xba\xa6\xe5\x8f\x8d\xe9\xa6\x88\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNumber_MetaData[] = {
		{ "Category", "DgLab|Protocol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xba\x8f\xe5\x88\x97\xe5\x8f\xb7 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xba\x8f\xe5\x88\x97\xe5\x8f\xb7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthA_MetaData[] = {
		{ "Category", "DgLab|Protocol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A\xe9\x80\x9a\xe9\x81\x93\xe5\xbd\x93\xe5\x89\x8d\xe5\xbc\xba\xe5\xba\xa6 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A\xe9\x80\x9a\xe9\x81\x93\xe5\xbd\x93\xe5\x89\x8d\xe5\xbc\xba\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthB_MetaData[] = {
		{ "Category", "DgLab|Protocol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** B\xe9\x80\x9a\xe9\x81\x93\xe5\xbd\x93\xe5\x89\x8d\xe5\xbc\xba\xe5\xba\xa6 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabV3Protocol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "B\xe9\x80\x9a\xe9\x81\x93\xe5\xbd\x93\xe5\x89\x8d\xe5\xbc\xba\xe5\xba\xa6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SequenceNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StrengthA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StrengthB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDgLabB1Message>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDgLabB1Message_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabB1Message, SequenceNumber), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceNumber_MetaData), NewProp_SequenceNumber_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDgLabB1Message_Statics::NewProp_StrengthA = { "StrengthA", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabB1Message, StrengthA), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthA_MetaData), NewProp_StrengthA_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDgLabB1Message_Statics::NewProp_StrengthB = { "StrengthB", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDgLabB1Message, StrengthB), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthB_MetaData), NewProp_StrengthB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDgLabB1Message_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabB1Message_Statics::NewProp_SequenceNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabB1Message_Statics::NewProp_StrengthA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDgLabB1Message_Statics::NewProp_StrengthB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabB1Message_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDgLabB1Message_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	&NewStructOps,
	"DgLabB1Message",
	Z_Construct_UScriptStruct_FDgLabB1Message_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabB1Message_Statics::PropPointers),
	sizeof(FDgLabB1Message),
	alignof(FDgLabB1Message),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDgLabB1Message_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDgLabB1Message_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDgLabB1Message()
{
	if (!Z_Registration_Info_UScriptStruct_DgLabB1Message.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DgLabB1Message.InnerSingleton, Z_Construct_UScriptStruct_FDgLabB1Message_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DgLabB1Message.InnerSingleton;
}
// End ScriptStruct FDgLabB1Message

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDgLabChannel_StaticEnum, TEXT("EDgLabChannel"), &Z_Registration_Info_UEnum_EDgLabChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 450391991U) },
		{ EDgLabStrengthMode_StaticEnum, TEXT("EDgLabStrengthMode"), &Z_Registration_Info_UEnum_EDgLabStrengthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2606267733U) },
		{ EDgLabWavePreset_StaticEnum, TEXT("EDgLabWavePreset"), &Z_Registration_Info_UEnum_EDgLabWavePreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 596573529U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDgLabWaveData::StaticStruct, Z_Construct_UScriptStruct_FDgLabWaveData_Statics::NewStructOps, TEXT("DgLabWaveData"), &Z_Registration_Info_UScriptStruct_DgLabWaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDgLabWaveData), 2517558949U) },
		{ FDgLabChannelWave::StaticStruct, Z_Construct_UScriptStruct_FDgLabChannelWave_Statics::NewStructOps, TEXT("DgLabChannelWave"), &Z_Registration_Info_UScriptStruct_DgLabChannelWave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDgLabChannelWave), 1917121805U) },
		{ FDgLabB1Message::StaticStruct, Z_Construct_UScriptStruct_FDgLabB1Message_Statics::NewStructOps, TEXT("DgLabB1Message"), &Z_Registration_Info_UScriptStruct_DgLabB1Message, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDgLabB1Message), 3302981737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h_531299863(TEXT("/Script/DGLabForUE"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
