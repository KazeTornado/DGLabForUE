// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DgLabTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DGLABFORUE_DgLabTypes_generated_h
#error "DgLabTypes.generated.h already included, missing '#pragma once' in DgLabTypes.h"
#endif
#define DGLABFORUE_DgLabTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabTypes_h


#define FOREACH_ENUM_EDGLABCONNECTIONSTATE(op) \
	op(EDgLabConnectionState::Disconnected) \
	op(EDgLabConnectionState::Scanning) \
	op(EDgLabConnectionState::Connecting) \
	op(EDgLabConnectionState::Connected) \
	op(EDgLabConnectionState::Error) 

enum class EDgLabConnectionState : uint8;
template<> struct TIsUEnumClass<EDgLabConnectionState> { enum { Value = true }; };
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabConnectionState>();

#define FOREACH_ENUM_EDGLABDEVICETYPE(op) \
	op(EDgLabDeviceType::Unknown) \
	op(EDgLabDeviceType::Coyote3_0) \
	op(EDgLabDeviceType::Sensor) 

enum class EDgLabDeviceType : uint8;
template<> struct TIsUEnumClass<EDgLabDeviceType> { enum { Value = true }; };
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabDeviceType>();

#define FOREACH_ENUM_EDGLABBLUETOOTHERROR(op) \
	op(EDgLabBluetoothError::None) \
	op(EDgLabBluetoothError::AdapterNotFound) \
	op(EDgLabBluetoothError::AdapterDisabled) \
	op(EDgLabBluetoothError::ScanFailed) \
	op(EDgLabBluetoothError::ConnectionFailed) \
	op(EDgLabBluetoothError::DeviceNotFound) \
	op(EDgLabBluetoothError::ServiceNotFound) \
	op(EDgLabBluetoothError::CharacteristicNotFound) \
	op(EDgLabBluetoothError::PermissionDenied) \
	op(EDgLabBluetoothError::PlatformNotSupported) \
	op(EDgLabBluetoothError::Unknown) 

enum class EDgLabBluetoothError : uint8;
template<> struct TIsUEnumClass<EDgLabBluetoothError> { enum { Value = true }; };
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabBluetoothError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
