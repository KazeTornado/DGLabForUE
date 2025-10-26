// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DGLabForUE/Public/DgLabTestActor.h"
#include "DGLabForUE/Public/DgLabDeviceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDgLabTestActor() {}

// Begin Cross Module References
DGLABFORUE_API UClass* Z_Construct_UClass_ADgLabTestActor();
DGLABFORUE_API UClass* Z_Construct_UClass_ADgLabTestActor_NoRegister();
DGLABFORUE_API UClass* Z_Construct_UClass_UDgLabBluetoothComponent_NoRegister();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError();
DGLABFORUE_API UEnum* Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState();
DGLABFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FDgLabDeviceInfo();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DGLabForUE();
// End Cross Module References

// Begin Class ADgLabTestActor Function ConnectToFirstDevice
struct Z_Construct_UFunction_ADgLabTestActor_ConnectToFirstDevice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe6\x8e\xa5\xe5\x88\xb0\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADgLabTestActor_ConnectToFirstDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADgLabTestActor, nullptr, "ConnectToFirstDevice", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_ConnectToFirstDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADgLabTestActor_ConnectToFirstDevice_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADgLabTestActor_ConnectToFirstDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADgLabTestActor_ConnectToFirstDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADgLabTestActor::execConnectToFirstDevice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectToFirstDevice();
	P_NATIVE_END;
}
// End Class ADgLabTestActor Function ConnectToFirstDevice

// Begin Class ADgLabTestActor Function OnBluetoothError
struct Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics
{
	struct DgLabTestActor_eventOnBluetoothError_Parms
	{
		EDgLabBluetoothError ErrorType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabTestActor_eventOnBluetoothError_Parms, ErrorType), Z_Construct_UEnum_DGLabForUE_EDgLabBluetoothError, METADATA_PARAMS(0, nullptr) }; // 3575268041
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::NewProp_ErrorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::NewProp_ErrorType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADgLabTestActor, nullptr, "OnBluetoothError", nullptr, nullptr, Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::DgLabTestActor_eventOnBluetoothError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::DgLabTestActor_eventOnBluetoothError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADgLabTestActor::execOnBluetoothError)
{
	P_GET_ENUM(EDgLabBluetoothError,Z_Param_ErrorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBluetoothError(EDgLabBluetoothError(Z_Param_ErrorType));
	P_NATIVE_END;
}
// End Class ADgLabTestActor Function OnBluetoothError

// Begin Class ADgLabTestActor Function OnConnectionStateChanged
struct Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics
{
	struct DgLabTestActor_eventOnConnectionStateChanged_Parms
	{
		EDgLabConnectionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabTestActor_eventOnConnectionStateChanged_Parms, NewState), Z_Construct_UEnum_DGLabForUE_EDgLabConnectionState, METADATA_PARAMS(0, nullptr) }; // 3370287606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADgLabTestActor, nullptr, "OnConnectionStateChanged", nullptr, nullptr, Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::DgLabTestActor_eventOnConnectionStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::DgLabTestActor_eventOnConnectionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADgLabTestActor::execOnConnectionStateChanged)
{
	P_GET_ENUM(EDgLabConnectionState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnConnectionStateChanged(EDgLabConnectionState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class ADgLabTestActor Function OnConnectionStateChanged

// Begin Class ADgLabTestActor Function OnDeviceFound
struct Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics
{
	struct DgLabTestActor_eventOnDeviceFound_Parms
	{
		FDgLabDeviceInfo DeviceInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ========== \xe4\xba\x8b\xe4\xbb\xb6\xe5\x9b\x9e\xe8\xb0\x83 ==========\n" },
#endif
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "========== \xe4\xba\x8b\xe4\xbb\xb6\xe5\x9b\x9e\xe8\xb0\x83 ==========" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::NewProp_DeviceInfo = { "DeviceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabTestActor_eventOnDeviceFound_Parms, DeviceInfo), Z_Construct_UScriptStruct_FDgLabDeviceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceInfo_MetaData), NewProp_DeviceInfo_MetaData) }; // 3175805333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::NewProp_DeviceInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADgLabTestActor, nullptr, "OnDeviceFound", nullptr, nullptr, Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::DgLabTestActor_eventOnDeviceFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::DgLabTestActor_eventOnDeviceFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADgLabTestActor::execOnDeviceFound)
{
	P_GET_STRUCT_REF(FDgLabDeviceInfo,Z_Param_Out_DeviceInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeviceFound(Z_Param_Out_DeviceInfo);
	P_NATIVE_END;
}
// End Class ADgLabTestActor Function OnDeviceFound

// Begin Class ADgLabTestActor Function OnScanComplete
struct Z_Construct_UFunction_ADgLabTestActor_OnScanComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADgLabTestActor_OnScanComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADgLabTestActor, nullptr, "OnScanComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnScanComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADgLabTestActor_OnScanComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADgLabTestActor_OnScanComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADgLabTestActor_OnScanComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADgLabTestActor::execOnScanComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScanComplete();
	P_NATIVE_END;
}
// End Class ADgLabTestActor Function OnScanComplete

// Begin Class ADgLabTestActor Function OnScanCompleteWithDevices
struct Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics
{
	struct DgLabTestActor_eventOnScanCompleteWithDevices_Parms
	{
		TArray<FDgLabDeviceInfo> Devices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::NewProp_Devices_Inner = { "Devices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDgLabDeviceInfo, METADATA_PARAMS(0, nullptr) }; // 3175805333
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::NewProp_Devices = { "Devices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DgLabTestActor_eventOnScanCompleteWithDevices_Parms, Devices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Devices_MetaData), NewProp_Devices_MetaData) }; // 3175805333
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::NewProp_Devices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::NewProp_Devices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADgLabTestActor, nullptr, "OnScanCompleteWithDevices", nullptr, nullptr, Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::DgLabTestActor_eventOnScanCompleteWithDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::DgLabTestActor_eventOnScanCompleteWithDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADgLabTestActor::execOnScanCompleteWithDevices)
{
	P_GET_TARRAY_REF(FDgLabDeviceInfo,Z_Param_Out_Devices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScanCompleteWithDevices(Z_Param_Out_Devices);
	P_NATIVE_END;
}
// End Class ADgLabTestActor Function OnScanCompleteWithDevices

// Begin Class ADgLabTestActor Function PrintDiscoveredDevices
struct Z_Construct_UFunction_ADgLabTestActor_PrintDiscoveredDevices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\x93\xe5\x8d\xb0\xe5\xb7\xb2\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x93\xe5\x8d\xb0\xe5\xb7\xb2\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADgLabTestActor_PrintDiscoveredDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADgLabTestActor, nullptr, "PrintDiscoveredDevices", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_PrintDiscoveredDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADgLabTestActor_PrintDiscoveredDevices_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADgLabTestActor_PrintDiscoveredDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADgLabTestActor_PrintDiscoveredDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADgLabTestActor::execPrintDiscoveredDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintDiscoveredDevices();
	P_NATIVE_END;
}
// End Class ADgLabTestActor Function PrintDiscoveredDevices

// Begin Class ADgLabTestActor Function TestStartScan
struct Z_Construct_UFunction_ADgLabTestActor_TestStartScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f\xe6\xb5\x8b\xe8\xaf\x95 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f\xe6\xb5\x8b\xe8\xaf\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADgLabTestActor_TestStartScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADgLabTestActor, nullptr, "TestStartScan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_TestStartScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADgLabTestActor_TestStartScan_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADgLabTestActor_TestStartScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADgLabTestActor_TestStartScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADgLabTestActor::execTestStartScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestStartScan();
	P_NATIVE_END;
}
// End Class ADgLabTestActor Function TestStartScan

// Begin Class ADgLabTestActor Function TestStopScan
struct Z_Construct_UFunction_ADgLabTestActor_TestStopScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DgLab|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x81\x9c\xe6\xad\xa2\xe6\x89\xab\xe6\x8f\x8f\xe6\xb5\x8b\xe8\xaf\x95 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe6\x89\xab\xe6\x8f\x8f\xe6\xb5\x8b\xe8\xaf\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADgLabTestActor_TestStopScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADgLabTestActor, nullptr, "TestStopScan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADgLabTestActor_TestStopScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADgLabTestActor_TestStopScan_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADgLabTestActor_TestStopScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADgLabTestActor_TestStopScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADgLabTestActor::execTestStopScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestStopScan();
	P_NATIVE_END;
}
// End Class ADgLabTestActor Function TestStopScan

// Begin Class ADgLabTestActor
void ADgLabTestActor::StaticRegisterNativesADgLabTestActor()
{
	UClass* Class = ADgLabTestActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectToFirstDevice", &ADgLabTestActor::execConnectToFirstDevice },
		{ "OnBluetoothError", &ADgLabTestActor::execOnBluetoothError },
		{ "OnConnectionStateChanged", &ADgLabTestActor::execOnConnectionStateChanged },
		{ "OnDeviceFound", &ADgLabTestActor::execOnDeviceFound },
		{ "OnScanComplete", &ADgLabTestActor::execOnScanComplete },
		{ "OnScanCompleteWithDevices", &ADgLabTestActor::execOnScanCompleteWithDevices },
		{ "PrintDiscoveredDevices", &ADgLabTestActor::execPrintDiscoveredDevices },
		{ "TestStartScan", &ADgLabTestActor::execTestStartScan },
		{ "TestStopScan", &ADgLabTestActor::execTestStopScan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADgLabTestActor);
UClass* Z_Construct_UClass_ADgLabTestActor_NoRegister()
{
	return ADgLabTestActor::StaticClass();
}
struct Z_Construct_UClass_ADgLabTestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DG-LAB\xe8\x93\x9d\xe7\x89\x99\xe6\xb5\x8b\xe8\xaf\x95""Actor\n * \xe6\xbc\x94\xe7\xa4\xba\xe5\xa6\x82\xe4\xbd\x95\xe4\xbd\xbf\xe7\x94\xa8""DgLabBluetoothComponent\n */" },
#endif
		{ "IncludePath", "DgLabTestActor.h" },
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DG-LAB\xe8\x93\x9d\xe7\x89\x99\xe6\xb5\x8b\xe8\xaf\x95""Actor\n\xe6\xbc\x94\xe7\xa4\xba\xe5\xa6\x82\xe4\xbd\x95\xe4\xbd\xbf\xe7\x94\xa8""DgLabBluetoothComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BluetoothComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DG-LAB\xe8\x93\x9d\xe7\x89\x99\xe7\xbb\x84\xe4\xbb\xb6 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DG-LAB\xe8\x93\x9d\xe7\x89\x99\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartScan_MetaData[] = {
		{ "Category", "DgLab|Test|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8""BeginPlay\xe6\x97\xb6\xe8\x87\xaa\xe5\x8a\xa8\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8""BeginPlay\xe6\x97\xb6\xe8\x87\xaa\xe5\x8a\xa8\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xab\xe6\x8f\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoScanDuration_MetaData[] = {
		{ "Category", "DgLab|Test|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\x87\xaa\xe5\x8a\xa8\xe6\x89\xab\xe6\x8f\x8f\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x87\xaa\xe5\x8a\xa8\xe6\x89\xab\xe6\x8f\x8f\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectFirstDevice_MetaData[] = {
		{ "Category", "DgLab|Test|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87 */" },
#endif
		{ "ModuleRelativePath", "Public/DgLabTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe8\xbf\x9e\xe6\x8e\xa5\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xe5\x8f\x91\xe7\x8e\xb0\xe7\x9a\x84\xe8\xae\xbe\xe5\xa4\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BluetoothComponent;
	static void NewProp_bAutoStartScan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartScan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoScanDuration;
	static void NewProp_bAutoConnectFirstDevice_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectFirstDevice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADgLabTestActor_ConnectToFirstDevice, "ConnectToFirstDevice" }, // 2538347408
		{ &Z_Construct_UFunction_ADgLabTestActor_OnBluetoothError, "OnBluetoothError" }, // 887119323
		{ &Z_Construct_UFunction_ADgLabTestActor_OnConnectionStateChanged, "OnConnectionStateChanged" }, // 2809181127
		{ &Z_Construct_UFunction_ADgLabTestActor_OnDeviceFound, "OnDeviceFound" }, // 1293776309
		{ &Z_Construct_UFunction_ADgLabTestActor_OnScanComplete, "OnScanComplete" }, // 132049486
		{ &Z_Construct_UFunction_ADgLabTestActor_OnScanCompleteWithDevices, "OnScanCompleteWithDevices" }, // 2821758911
		{ &Z_Construct_UFunction_ADgLabTestActor_PrintDiscoveredDevices, "PrintDiscoveredDevices" }, // 2782656458
		{ &Z_Construct_UFunction_ADgLabTestActor_TestStartScan, "TestStartScan" }, // 1694091806
		{ &Z_Construct_UFunction_ADgLabTestActor_TestStopScan, "TestStopScan" }, // 1499612008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADgLabTestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_BluetoothComponent = { "BluetoothComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADgLabTestActor, BluetoothComponent), Z_Construct_UClass_UDgLabBluetoothComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BluetoothComponent_MetaData), NewProp_BluetoothComponent_MetaData) };
void Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_bAutoStartScan_SetBit(void* Obj)
{
	((ADgLabTestActor*)Obj)->bAutoStartScan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_bAutoStartScan = { "bAutoStartScan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADgLabTestActor), &Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_bAutoStartScan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartScan_MetaData), NewProp_bAutoStartScan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_AutoScanDuration = { "AutoScanDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADgLabTestActor, AutoScanDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoScanDuration_MetaData), NewProp_AutoScanDuration_MetaData) };
void Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_bAutoConnectFirstDevice_SetBit(void* Obj)
{
	((ADgLabTestActor*)Obj)->bAutoConnectFirstDevice = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_bAutoConnectFirstDevice = { "bAutoConnectFirstDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADgLabTestActor), &Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_bAutoConnectFirstDevice_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoConnectFirstDevice_MetaData), NewProp_bAutoConnectFirstDevice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADgLabTestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_BluetoothComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_bAutoStartScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_AutoScanDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADgLabTestActor_Statics::NewProp_bAutoConnectFirstDevice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADgLabTestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADgLabTestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DGLabForUE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADgLabTestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADgLabTestActor_Statics::ClassParams = {
	&ADgLabTestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADgLabTestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADgLabTestActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADgLabTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADgLabTestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADgLabTestActor()
{
	if (!Z_Registration_Info_UClass_ADgLabTestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADgLabTestActor.OuterSingleton, Z_Construct_UClass_ADgLabTestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADgLabTestActor.OuterSingleton;
}
template<> DGLABFORUE_API UClass* StaticClass<ADgLabTestActor>()
{
	return ADgLabTestActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADgLabTestActor);
ADgLabTestActor::~ADgLabTestActor() {}
// End Class ADgLabTestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADgLabTestActor, ADgLabTestActor::StaticClass, TEXT("ADgLabTestActor"), &Z_Registration_Info_UClass_ADgLabTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADgLabTestActor), 67298137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_44764770(TEXT("/Script/DGLabForUE"),
	Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
