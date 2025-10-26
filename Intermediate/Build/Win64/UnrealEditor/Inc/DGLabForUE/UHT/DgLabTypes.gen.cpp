// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DGLabForUE/Public/DgLabTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDgLabTypes() {}

// Begin Cross Module References
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType();
UPackage* Z_Construct_UPackage__Script_DGLabForUE();
// End Cross Module References

// Begin Enum EDgLabConnectionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDgLabConnectionState;
static UEnum* EDgLabConnectionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDgLabConnectionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDgLabConnectionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("EDgLabConnectionState"));
	}
	return Z_Registration_Info_UEnum_EDgLabConnectionState.OuterSingleton;
}
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabConnectionState>()
{
	return EDgLabConnectionState_StaticEnum();
}
struct Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x8a\xb6\xe6\x80\x81\n */" },
#endif
		{ "Connected.DisplayName", "\xe5\xb7\xb2\xe8\xbf\x9e\xe6\x8e\xa5" },
		{ "Connected.Name", "EDgLabConnectionState::Connected" },
		{ "Connecting.DisplayName", "\xe8\xbf\x9e\xe6\x8e\xa5\xe4\xb8\xad" },
		{ "Connecting.Name", "EDgLabConnectionState::Connecting" },
		{ "Disconnected.DisplayName", "\xe5\xb7\xb2\xe6\x96\xad\xe5\xbc\x80" },
		{ "Disconnected.Name", "EDgLabConnectionState::Disconnected" },
		{ "Error.DisplayName", "\xe9\x94\x99\xe8\xaf\xaf" },
		{ "Error.Name", "EDgLabConnectionState::Error" },
		{ "ModuleRelativePath", "Public/DgLabTypes.h" },
		{ "Scanning.DisplayName", "\xe6\x89\xab\xe6\x8f\x8f\xe4\xb8\xad" },
		{ "Scanning.Name", "EDgLabConnectionState::Scanning" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x93\x9d\xe7\x89\x99\xe8\xae\xbe\xe5\xa4\x87\xe8\xbf\x9e\xe6\x8e\xa5\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDgLabConnectionState::Disconnected", (int64)EDgLabConnectionState::Disconnected },
		{ "EDgLabConnectionState::Scanning", (int64)EDgLabConnectionState::Scanning },
		{ "EDgLabConnectionState::Connecting", (int64)EDgLabConnectionState::Connecting },
		{ "EDgLabConnectionState::Connected", (int64)EDgLabConnectionState::Connected },
		{ "EDgLabConnectionState::Error", (int64)EDgLabConnectionState::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	"EDgLabConnectionState",
	"EDgLabConnectionState",
	Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState()
{
	if (!Z_Registration_Info_UEnum_EDgLabConnectionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDgLabConnectionState.InnerSingleton, Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDgLabConnectionState.InnerSingleton;
}
// End Enum EDgLabConnectionState

// Begin Enum EDgLabDeviceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDgLabDeviceType;
static UEnum* EDgLabDeviceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDgLabDeviceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDgLabDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("EDgLabDeviceType"));
	}
	return Z_Registration_Info_UEnum_EDgLabDeviceType.OuterSingleton;
}
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabDeviceType>()
{
	return EDgLabDeviceType_StaticEnum();
}
struct Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DG-LAB\xe8\xae\xbe\xe5\xa4\x87\xe7\xb1\xbb\xe5\x9e\x8b\n */" },
#endif
		{ "Coyote3_0.DisplayName", "\xe9\x83\x8a\xe7\x8b\xbc""3.0 (47L121000)" },
		{ "Coyote3_0.Name", "EDgLabDeviceType::Coyote3_0" },
		{ "ModuleRelativePath", "Public/DgLabTypes.h" },
		{ "Sensor.DisplayName", "\xe6\x97\xa0\xe7\xba\xbf\xe4\xbc\xa0\xe6\x84\x9f\xe5\x99\xa8 (47L120100)" },
		{ "Sensor.Name", "EDgLabDeviceType::Sensor" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DG-LAB\xe8\xae\xbe\xe5\xa4\x87\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Unknown.DisplayName", "\xe6\x9c\xaa\xe7\x9f\xa5\xe8\xae\xbe\xe5\xa4\x87" },
		{ "Unknown.Name", "EDgLabDeviceType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDgLabDeviceType::Unknown", (int64)EDgLabDeviceType::Unknown },
		{ "EDgLabDeviceType::Coyote3_0", (int64)EDgLabDeviceType::Coyote3_0 },
		{ "EDgLabDeviceType::Sensor", (int64)EDgLabDeviceType::Sensor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	"EDgLabDeviceType",
	"EDgLabDeviceType",
	Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType()
{
	if (!Z_Registration_Info_UEnum_EDgLabDeviceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDgLabDeviceType.InnerSingleton, Z_Construct_UEnum_DGLabForUE_EDgLabDeviceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDgLabDeviceType.InnerSingleton;
}
// End Enum EDgLabDeviceType

// Begin Enum EDgLabBluetoothError
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDgLabBluetoothError;
static UEnum* EDgLabBluetoothError_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDgLabBluetoothError.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDgLabBluetoothError.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError, (UObject*)Z_Construct_UPackage__Script_DGLabForUE(), TEXT("EDgLabBluetoothError"));
	}
	return Z_Registration_Info_UEnum_EDgLabBluetoothError.OuterSingleton;
}
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabBluetoothError>()
{
	return EDgLabBluetoothError_StaticEnum();
}
struct Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdapterDisabled.DisplayName", "\xe8\x93\x9d\xe7\x89\x99\xe9\x80\x82\xe9\x85\x8d\xe5\x99\xa8\xe5\xb7\xb2\xe7\xa6\x81\xe7\x94\xa8" },
		{ "AdapterDisabled.Name", "EDgLabBluetoothError::AdapterDisabled" },
		{ "AdapterNotFound.DisplayName", "\xe6\x9c\xaa\xe6\x89\xbe\xe5\x88\xb0\xe8\x93\x9d\xe7\x89\x99\xe9\x80\x82\xe9\x85\x8d\xe5\x99\xa8" },
		{ "AdapterNotFound.Name", "EDgLabBluetoothError::AdapterNotFound" },
		{ "BlueprintType", "true" },
		{ "CharacteristicNotFound.DisplayName", "\xe7\x89\xb9\xe6\x80\xa7\xe6\x9c\xaa\xe6\x89\xbe\xe5\x88\xb0" },
		{ "CharacteristicNotFound.Name", "EDgLabBluetoothError::CharacteristicNotFound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x93\x9d\xe7\x89\x99\xe6\x89\xab\xe6\x8f\x8f\xe9\x94\x99\xe8\xaf\xaf\xe7\xb1\xbb\xe5\x9e\x8b\n */" },
#endif
		{ "ConnectionFailed.DisplayName", "\xe8\xbf\x9e\xe6\x8e\xa5\xe5\xa4\xb1\xe8\xb4\xa5" },
		{ "ConnectionFailed.Name", "EDgLabBluetoothError::ConnectionFailed" },
		{ "DeviceNotFound.DisplayName", "\xe8\xae\xbe\xe5\xa4\x87\xe6\x9c\xaa\xe6\x89\xbe\xe5\x88\xb0" },
		{ "DeviceNotFound.Name", "EDgLabBluetoothError::DeviceNotFound" },
		{ "ModuleRelativePath", "Public/DgLabTypes.h" },
		{ "None.DisplayName", "\xe6\x97\xa0\xe9\x94\x99\xe8\xaf\xaf" },
		{ "None.Name", "EDgLabBluetoothError::None" },
		{ "PermissionDenied.DisplayName", "\xe6\x9d\x83\xe9\x99\x90\xe8\xa2\xab\xe6\x8b\x92\xe7\xbb\x9d" },
		{ "PermissionDenied.Name", "EDgLabBluetoothError::PermissionDenied" },
		{ "PlatformNotSupported.DisplayName", "\xe5\xb9\xb3\xe5\x8f\xb0\xe4\xb8\x8d\xe6\x94\xaf\xe6\x8c\x81" },
		{ "PlatformNotSupported.Name", "EDgLabBluetoothError::PlatformNotSupported" },
		{ "ScanFailed.DisplayName", "\xe6\x89\xab\xe6\x8f\x8f\xe5\xa4\xb1\xe8\xb4\xa5" },
		{ "ScanFailed.Name", "EDgLabBluetoothError::ScanFailed" },
		{ "ServiceNotFound.DisplayName", "\xe6\x9c\x8d\xe5\x8a\xa1\xe6\x9c\xaa\xe6\x89\xbe\xe5\x88\xb0" },
		{ "ServiceNotFound.Name", "EDgLabBluetoothError::ServiceNotFound" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x93\x9d\xe7\x89\x99\xe6\x89\xab\xe6\x8f\x8f\xe9\x94\x99\xe8\xaf\xaf\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
		{ "Unknown.DisplayName", "\xe6\x9c\xaa\xe7\x9f\xa5\xe9\x94\x99\xe8\xaf\xaf" },
		{ "Unknown.Name", "EDgLabBluetoothError::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDgLabBluetoothError::None", (int64)EDgLabBluetoothError::None },
		{ "EDgLabBluetoothError::AdapterNotFound", (int64)EDgLabBluetoothError::AdapterNotFound },
		{ "EDgLabBluetoothError::AdapterDisabled", (int64)EDgLabBluetoothError::AdapterDisabled },
		{ "EDgLabBluetoothError::ScanFailed", (int64)EDgLabBluetoothError::ScanFailed },
		{ "EDgLabBluetoothError::ConnectionFailed", (int64)EDgLabBluetoothError::ConnectionFailed },
		{ "EDgLabBluetoothError::DeviceNotFound", (int64)EDgLabBluetoothError::DeviceNotFound },
		{ "EDgLabBluetoothError::ServiceNotFound", (int64)EDgLabBluetoothError::ServiceNotFound },
		{ "EDgLabBluetoothError::CharacteristicNotFound", (int64)EDgLabBluetoothError::CharacteristicNotFound },
		{ "EDgLabBluetoothError::PermissionDenied", (int64)EDgLabBluetoothError::PermissionDenied },
		{ "EDgLabBluetoothError::PlatformNotSupported", (int64)EDgLabBluetoothError::PlatformNotSupported },
		{ "EDgLabBluetoothError::Unknown", (int64)EDgLabBluetoothError::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DGLabForUE,
	nullptr,
	"EDgLabBluetoothError",
	"EDgLabBluetoothError",
	Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError()
{
	if (!Z_Registration_Info_UEnum_EDgLabBluetoothError.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDgLabBluetoothError.InnerSingleton, Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDgLabBluetoothError.InnerSingleton;
}
// End Enum EDgLabBluetoothError

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDgLabConnectionState_StaticEnum, TEXT("EDgLabConnectionState"), &Z_Registration_Info_UEnum_EDgLabConnectionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3370287606U) },
		{ EDgLabDeviceType_StaticEnum, TEXT("EDgLabDeviceType"), &Z_Registration_Info_UEnum_EDgLabDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1199645063U) },
		{ EDgLabBluetoothError_StaticEnum, TEXT("EDgLabBluetoothError"), &Z_Registration_Info_UEnum_EDgLabBluetoothError, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3575268041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTypes_h_765880737(TEXT("/Script/DGLabForUE"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
