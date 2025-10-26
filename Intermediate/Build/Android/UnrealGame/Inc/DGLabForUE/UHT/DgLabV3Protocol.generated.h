// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DgLabV3Protocol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DGLABFORUE_DgLabV3Protocol_generated_h
#error "DgLabV3Protocol.generated.h already included, missing '#pragma once' in DgLabV3Protocol.h"
#endif
#define DGLABFORUE_DgLabV3Protocol_generated_h

#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDgLabWaveData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DGLABFORUE_API UScriptStruct* StaticStruct<struct FDgLabWaveData>();

#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDgLabChannelWave_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DGLABFORUE_API UScriptStruct* StaticStruct<struct FDgLabChannelWave>();

#define FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDgLabB1Message_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DGLABFORUE_API UScriptStruct* StaticStruct<struct FDgLabB1Message>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_DGLabForUE_Source_DGLabForUE_Public_DgLabV3Protocol_h


#define FOREACH_ENUM_EDGLABCHANNEL(op) \
	op(EDgLabChannel::ChannelA) \
	op(EDgLabChannel::ChannelB) \
	op(EDgLabChannel::Both) 

enum class EDgLabChannel : uint8;
template<> struct TIsUEnumClass<EDgLabChannel> { enum { Value = true }; };
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabChannel>();

#define FOREACH_ENUM_EDGLABSTRENGTHMODE(op) \
	op(EDgLabStrengthMode::NoChange) \
	op(EDgLabStrengthMode::Increase) \
	op(EDgLabStrengthMode::Decrease) \
	op(EDgLabStrengthMode::Absolute) 

enum class EDgLabStrengthMode : uint8;
template<> struct TIsUEnumClass<EDgLabStrengthMode> { enum { Value = true }; };
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabStrengthMode>();

#define FOREACH_ENUM_EDGLABWAVEPRESET(op) \
	op(EDgLabWavePreset::Constant) \
	op(EDgLabWavePreset::Pulse) \
	op(EDgLabWavePreset::Wave) \
	op(EDgLabWavePreset::Breathing) \
	op(EDgLabWavePreset::Heartbeat) \
	op(EDgLabWavePreset::Rhythm) \
	op(EDgLabWavePreset::Gentle) \
	op(EDgLabWavePreset::Medium) \
	op(EDgLabWavePreset::Strong) \
	op(EDgLabWavePreset::Random) \
	op(EDgLabWavePreset::Custom) 

enum class EDgLabWavePreset : uint8;
template<> struct TIsUEnumClass<EDgLabWavePreset> { enum { Value = true }; };
template<> DGLABFORUE_API UEnum* StaticEnum<EDgLabWavePreset>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
