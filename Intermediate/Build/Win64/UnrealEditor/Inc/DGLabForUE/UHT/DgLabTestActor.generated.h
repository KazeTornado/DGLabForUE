// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DgLabTestActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDgLabBluetoothError : uint8;
enum class EDgLabConnectionState : uint8;
struct FDgLabDeviceInfo;
#ifdef DGLABFORUE_DgLabTestActor_generated_h
#error "DgLabTestActor.generated.h already included, missing '#pragma once' in DgLabTestActor.h"
#endif
#define DGLABFORUE_DgLabTestActor_generated_h

#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBluetoothError); \
	DECLARE_FUNCTION(execOnConnectionStateChanged); \
	DECLARE_FUNCTION(execOnScanCompleteWithDevices); \
	DECLARE_FUNCTION(execOnScanComplete); \
	DECLARE_FUNCTION(execOnDeviceFound); \
	DECLARE_FUNCTION(execConnectToFirstDevice); \
	DECLARE_FUNCTION(execPrintDiscoveredDevices); \
	DECLARE_FUNCTION(execTestStopScan); \
	DECLARE_FUNCTION(execTestStartScan);


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADgLabTestActor(); \
	friend struct Z_Construct_UClass_ADgLabTestActor_Statics; \
public: \
	DECLARE_CLASS(ADgLabTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DGLabForUE"), NO_API) \
	DECLARE_SERIALIZER(ADgLabTestActor)


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADgLabTestActor(ADgLabTestActor&&); \
	ADgLabTestActor(const ADgLabTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADgLabTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADgLabTestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADgLabTestActor) \
	NO_API virtual ~ADgLabTestActor();


#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_14_PROLOG
#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DGLABFORUE_API UClass* StaticClass<class ADgLabTestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
