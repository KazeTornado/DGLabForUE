// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DgLabBluetoothComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDgLabBluetoothError : uint8;
enum class EDgLabChannel : uint8;
enum class EDgLabConnectionState : uint8;
enum class EDgLabWavePreset : uint8;
struct FDgLabDeviceInfo;
#ifdef DGLABFORUE_DgLabBluetoothComponent_generated_h
#error "DgLabBluetoothComponent.generated.h already included, missing '#pragma once' in DgLabBluetoothComponent.h"
#endif
#define DGLABFORUE_DgLabBluetoothComponent_generated_h

#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_227_DELEGATE \
static void FOnDeviceFoundSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDeviceFoundSignature, FDgLabDeviceInfo const& DeviceInfo);


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_232_DELEGATE \
static void FOnScanCompleteSignature_DelegateWrapper(const FMulticastScriptDelegate& OnScanCompleteSignature);


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_237_DELEGATE \
static void FOnScanCompleteWithDevicesSignature_DelegateWrapper(const FMulticastScriptDelegate& OnScanCompleteWithDevicesSignature, TArray<FDgLabDeviceInfo> const& Devices);


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_242_DELEGATE \
static void FOnConnectionStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionStateChangedSignature, EDgLabConnectionState NewState);


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_247_DELEGATE \
static void FOnBluetoothErrorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnBluetoothErrorSignature, EDgLabBluetoothError ErrorType);


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_252_DELEGATE \
static void FOnStrengthUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStrengthUpdatedSignature, int32 StrengthA, int32 StrengthB);


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_257_DELEGATE \
static void FOnBatteryUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnBatteryUpdatedSignature, int32 BatteryLevel);


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsOutputting); \
	DECLARE_FUNCTION(execGetCurrentStrengthB); \
	DECLARE_FUNCTION(execGetCurrentStrengthA); \
	DECLARE_FUNCTION(execReadBattery); \
	DECLARE_FUNCTION(execSetStrengthLimit); \
	DECLARE_FUNCTION(execSetWavePreset); \
	DECLARE_FUNCTION(execSendPulse); \
	DECLARE_FUNCTION(execSetStrength); \
	DECLARE_FUNCTION(execDecreaseStrength); \
	DECLARE_FUNCTION(execIncreaseStrength); \
	DECLARE_FUNCTION(execStopOutput); \
	DECLARE_FUNCTION(execSendWaveOutput); \
	DECLARE_FUNCTION(execStartOutput); \
	DECLARE_FUNCTION(execGetConnectedDeviceInfo); \
	DECLARE_FUNCTION(execGetConnectionState); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnectToDeviceByInfo); \
	DECLARE_FUNCTION(execConnectToDevice); \
	DECLARE_FUNCTION(execGetDiscoveredDeviceCount); \
	DECLARE_FUNCTION(execGetDiscoveredDevices); \
	DECLARE_FUNCTION(execClearDiscoveredDevices); \
	DECLARE_FUNCTION(execIsScanning); \
	DECLARE_FUNCTION(execStopScan); \
	DECLARE_FUNCTION(execStartScan);


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDgLabBluetoothComponent(); \
	friend struct Z_Construct_UClass_UDgLabBluetoothComponent_Statics; \
public: \
	DECLARE_CLASS(UDgLabBluetoothComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DGLabForUE"), NO_API) \
	DECLARE_SERIALIZER(UDgLabBluetoothComponent)


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDgLabBluetoothComponent(UDgLabBluetoothComponent&&); \
	UDgLabBluetoothComponent(const UDgLabBluetoothComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDgLabBluetoothComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDgLabBluetoothComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDgLabBluetoothComponent) \
	NO_API virtual ~UDgLabBluetoothComponent();


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_26_PROLOG
#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DGLABFORUE_API UClass* StaticClass<class UDgLabBluetoothComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabBluetoothComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
