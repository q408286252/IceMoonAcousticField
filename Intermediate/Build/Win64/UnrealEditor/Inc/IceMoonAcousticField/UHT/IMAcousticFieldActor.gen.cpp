// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMAcousticFieldActor.h"
#include "Engine/HitResult.h"
#include "IM_AcousticTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIMAcousticFieldActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_AIceMoonAcousticField();
ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_AIceMoonAcousticField_NoRegister();
ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_UDA_IM_AcousticFieldConfig_NoRegister();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioMaterialResponse();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioReverbParameters();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_GridAudioCell();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_WetCalculationParameters();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_IceMoonAcousticField();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIceMoonAcousticField Function AddProbeFromHitResultOnlayWorldStatic *****
struct Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics
{
	struct IceMoonAcousticField_eventAddProbeFromHitResultOnlayWorldStatic_Parms
	{
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IM|Acoustics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x85\xe5\x8a\xa9\xe5\x87\xbd\xe6\x95\xb0\n// \xe4\xb8\x80\xe4\xba\x9b\xe5\x8f\x91\xe5\xa3\xb0\xe8\xae\xbe\xe5\xa4\x87\xe4\xbb\x96\xe5\x9c\xa8\xe5\x8f\x91\xe5\xa3\xb0\xe6\x97\xb6\xe5\x80\x99\xe4\xbc\x9a\xe4\xbd\xbf\xe7\x94\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe7\xa2\xb0\xe6\x92\x9e\xe6\xa3\x80\xe6\xb5\x8b \xe9\x82\xa3\xe4\xb9\x88\xe8\xbf\x99\xe4\xb8\xaa\xe5\x85\x8d\xe8\xb4\xb9\xe7\x9a\x84\xe5\xb0\x84\xe7\xba\xbf\xe5\xb0\xb1\xe5\x9b\xa0\xe8\xaf\xa5\xe5\xad\x98\xe5\x82\xa8\xe7\x94\xa8\xe4\xba\x8e \xe5\x85\xb6\xe4\xbb\x96\xe5\x9c\xb0\xe6\x96\xb9\xe7\x9a\x84\xe8\xbf\x94\xe5\x9b\x9e\xe9\x9c\x80\xe6\xb1\x82   \xe9\x9c\x80\xe8\xa6\x81\xe8\xb0\x83\xe7\x94\xa8\xe8\x80\x85\xe6\x98\x8e\xe7\xa1\xae\xe7\x9f\xa5\xe6\x99\x93\xe8\xbf\x99\xe4\xb8\xaa\xe5\xb0\x84\xe7\xba\xbf\xe6\x98\xaf\xe9\x9d\x99\xe6\x80\x81\xe7\xa2\xb0\xe6\x92\x9e\xe6\x9f\xa5\xe8\xaf\xa2\xe5\x88\xb0\xe7\x9a\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x85\xe5\x8a\xa9\xe5\x87\xbd\xe6\x95\xb0\n \xe4\xb8\x80\xe4\xba\x9b\xe5\x8f\x91\xe5\xa3\xb0\xe8\xae\xbe\xe5\xa4\x87\xe4\xbb\x96\xe5\x9c\xa8\xe5\x8f\x91\xe5\xa3\xb0\xe6\x97\xb6\xe5\x80\x99\xe4\xbc\x9a\xe4\xbd\xbf\xe7\x94\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe7\xa2\xb0\xe6\x92\x9e\xe6\xa3\x80\xe6\xb5\x8b \xe9\x82\xa3\xe4\xb9\x88\xe8\xbf\x99\xe4\xb8\xaa\xe5\x85\x8d\xe8\xb4\xb9\xe7\x9a\x84\xe5\xb0\x84\xe7\xba\xbf\xe5\xb0\xb1\xe5\x9b\xa0\xe8\xaf\xa5\xe5\xad\x98\xe5\x82\xa8\xe7\x94\xa8\xe4\xba\x8e \xe5\x85\xb6\xe4\xbb\x96\xe5\x9c\xb0\xe6\x96\xb9\xe7\x9a\x84\xe8\xbf\x94\xe5\x9b\x9e\xe9\x9c\x80\xe6\xb1\x82   \xe9\x9c\x80\xe8\xa6\x81\xe8\xb0\x83\xe7\x94\xa8\xe8\x80\x85\xe6\x98\x8e\xe7\xa1\xae\xe7\x9f\xa5\xe6\x99\x93\xe8\xbf\x99\xe4\xb8\xaa\xe5\xb0\x84\xe7\xba\xbf\xe6\x98\xaf\xe9\x9d\x99\xe6\x80\x81\xe7\xa2\xb0\xe6\x92\x9e\xe6\x9f\xa5\xe8\xaf\xa2\xe5\x88\xb0\xe7\x9a\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventAddProbeFromHitResultOnlayWorldStatic_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIceMoonAcousticField, nullptr, "AddProbeFromHitResultOnlayWorldStatic", Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::IceMoonAcousticField_eventAddProbeFromHitResultOnlayWorldStatic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::IceMoonAcousticField_eventAddProbeFromHitResultOnlayWorldStatic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIceMoonAcousticField::execAddProbeFromHitResultOnlayWorldStatic)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddProbeFromHitResultOnlayWorldStatic(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// ********** End Class AIceMoonAcousticField Function AddProbeFromHitResultOnlayWorldStatic *******

// ********** Begin Class AIceMoonAcousticField Function AsyncFireProbes ***************************
struct Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics
{
	struct IceMoonAcousticField_eventAsyncFireProbes_Parms
	{
		FVector Origin;
		int32 NumTraces;
		float Radius;
		FVector ConeDirection;
		float ConeDegree;
		int32 RandomSeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IM|Tracing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * [\xe6\x8c\x89\xe9\x9c\x80\xe6\x8e\xa2\xe6\xb5\x8b] \xe8\xaf\xb7\xe6\xb1\x82\xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe4\xbd\x8d\xe7\xbd\xae\xe8\xbf\x9b\xe8\xa1\x8c\xe4\xb8\x80\xe6\xac\xa1\xe5\xb0\x8f\xe8\xa7\x84\xe6\xa8\xa1\xe3\x80\x81\xe9\xab\x98\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe7\x9a\x84\xe6\x8e\xa2\xe6\xb5\x8b\xe3\x80\x82\n     * \xe7\x94\xa8\xe4\xba\x8e\xe5\xa1\xab\xe5\x85\x85\xe8\xbf\x9c\xe7\xa8\x8b\xe9\x9f\xb3\xe6\xba\x90\xe7\xad\x89\xe7\xbc\x93\xe5\xad\x98\xe6\x9c\xaa\xe5\x91\xbd\xe4\xb8\xad\xe7\x9a\x84\xe5\x8c\xba\xe5\x9f\x9f\xe3\x80\x82\n     * @param NumTraces \xe5\x8f\x91\xe5\xb0\x84\xe7\x9a\x84\xe5\xb0\x84\xe7\xba\xbf\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x82\n     */" },
#endif
		{ "CPP_Default_ConeDegree", "179.990005" },
		{ "CPP_Default_ConeDirection", "0.000000,0.000000,1.000000" },
		{ "CPP_Default_NumTraces", "1" },
		{ "CPP_Default_Radius", "2000.000000" },
		{ "CPP_Default_RandomSeed", "-1" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[\xe6\x8c\x89\xe9\x9c\x80\xe6\x8e\xa2\xe6\xb5\x8b] \xe8\xaf\xb7\xe6\xb1\x82\xe5\x9c\xa8\xe6\x8c\x87\xe5\xae\x9a\xe4\xbd\x8d\xe7\xbd\xae\xe8\xbf\x9b\xe8\xa1\x8c\xe4\xb8\x80\xe6\xac\xa1\xe5\xb0\x8f\xe8\xa7\x84\xe6\xa8\xa1\xe3\x80\x81\xe9\xab\x98\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe7\x9a\x84\xe6\x8e\xa2\xe6\xb5\x8b\xe3\x80\x82\n\xe7\x94\xa8\xe4\xba\x8e\xe5\xa1\xab\xe5\x85\x85\xe8\xbf\x9c\xe7\xa8\x8b\xe9\x9f\xb3\xe6\xba\x90\xe7\xad\x89\xe7\xbc\x93\xe5\xad\x98\xe6\x9c\xaa\xe5\x91\xbd\xe4\xb8\xad\xe7\x9a\x84\xe5\x8c\xba\xe5\x9f\x9f\xe3\x80\x82\n@param NumTraces \xe5\x8f\x91\xe5\xb0\x84\xe7\x9a\x84\xe5\xb0\x84\xe7\xba\xbf\xe6\x95\xb0\xe9\x87\x8f\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTraces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConeDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeDegree;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventAsyncFireProbes_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_NumTraces = { "NumTraces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventAsyncFireProbes_Parms, NumTraces), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventAsyncFireProbes_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_ConeDirection = { "ConeDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventAsyncFireProbes_Parms, ConeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_ConeDegree = { "ConeDegree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventAsyncFireProbes_Parms, ConeDegree), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventAsyncFireProbes_Parms, RandomSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_NumTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_ConeDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_ConeDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::NewProp_RandomSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIceMoonAcousticField, nullptr, "AsyncFireProbes", Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::IceMoonAcousticField_eventAsyncFireProbes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::IceMoonAcousticField_eventAsyncFireProbes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIceMoonAcousticField::execAsyncFireProbes)
{
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumTraces);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FVector,Z_Param_ConeDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ConeDegree);
	P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AsyncFireProbes(Z_Param_Origin,Z_Param_NumTraces,Z_Param_Radius,Z_Param_ConeDirection,Z_Param_ConeDegree,Z_Param_RandomSeed);
	P_NATIVE_END;
}
// ********** End Class AIceMoonAcousticField Function AsyncFireProbes *****************************

// ********** Begin Class AIceMoonAcousticField Function ClearSmoothQueryCache *********************
struct Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics
{
	struct IceMoonAcousticField_eventClearSmoothQueryCache_Parms
	{
		UObject* SourceObject;
		FName SoundSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IM|Acoustics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * [\xe6\xb8\x85\xe7\x90\x86\xe7\xbc\x93\xe5\xad\x98] \xe6\x89\x8b\xe5\x8a\xa8\xe6\xb8\x85\xe7\x90\x86\xe6\x8c\x87\xe5\xae\x9a\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe5\xb9\xb3\xe6\xbb\x91\xe6\x9f\xa5\xe8\xaf\xa2\xe7\xbc\x93\xe5\xad\x98\n     * @param SourceObject \xe8\xa6\x81\xe6\xb8\x85\xe7\x90\x86\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x88""Actor\xe6\x88\x96""Component\xef\xbc\x89\n     * @param SoundSlot \xe5\xa3\xb0\xe9\x9f\xb3\xe6\xa7\xbd\xe4\xbd\x8d\xef\xbc\x88NAME_None\xe8\xa1\xa8\xe7\xa4\xba\xe6\xb8\x85\xe7\x90\x86\xe8\xaf\xa5\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe6\xa7\xbd\xe4\xbd\x8d\xef\xbc\x89\n     */" },
#endif
		{ "CPP_Default_SoundSlot", "None" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[\xe6\xb8\x85\xe7\x90\x86\xe7\xbc\x93\xe5\xad\x98] \xe6\x89\x8b\xe5\x8a\xa8\xe6\xb8\x85\xe7\x90\x86\xe6\x8c\x87\xe5\xae\x9a\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe5\xb9\xb3\xe6\xbb\x91\xe6\x9f\xa5\xe8\xaf\xa2\xe7\xbc\x93\xe5\xad\x98\n@param SourceObject \xe8\xa6\x81\xe6\xb8\x85\xe7\x90\x86\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x88""Actor\xe6\x88\x96""Component\xef\xbc\x89\n@param SoundSlot \xe5\xa3\xb0\xe9\x9f\xb3\xe6\xa7\xbd\xe4\xbd\x8d\xef\xbc\x88NAME_None\xe8\xa1\xa8\xe7\xa4\xba\xe6\xb8\x85\xe7\x90\x86\xe8\xaf\xa5\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe6\xa7\xbd\xe4\xbd\x8d\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventClearSmoothQueryCache_Parms, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::NewProp_SoundSlot = { "SoundSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventClearSmoothQueryCache_Parms, SoundSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::NewProp_SourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::NewProp_SoundSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIceMoonAcousticField, nullptr, "ClearSmoothQueryCache", Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::IceMoonAcousticField_eventClearSmoothQueryCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::IceMoonAcousticField_eventClearSmoothQueryCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIceMoonAcousticField::execClearSmoothQueryCache)
{
	P_GET_OBJECT(UObject,Z_Param_SourceObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_SoundSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSmoothQueryCache(Z_Param_SourceObject,Z_Param_SoundSlot);
	P_NATIVE_END;
}
// ********** End Class AIceMoonAcousticField Function ClearSmoothQueryCache ***********************

// ********** Begin Class AIceMoonAcousticField Function GetAcousticFieldActor *********************
struct Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics
{
	struct IceMoonAcousticField_eventGetAcousticFieldActor_Parms
	{
		const UObject* WorldContextObject;
		AIceMoonAcousticField* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IM|Acoustics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\x8e\xb7\xe5\x8f\x96\xe5\x8d\x95\xe4\xbe\x8b\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x8d\x95\xe4\xbe\x8b\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventGetAcousticFieldActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventGetAcousticFieldActor_Parms, ReturnValue), Z_Construct_UClass_AIceMoonAcousticField_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIceMoonAcousticField, nullptr, "GetAcousticFieldActor", Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::IceMoonAcousticField_eventGetAcousticFieldActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::IceMoonAcousticField_eventGetAcousticFieldActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIceMoonAcousticField::execGetAcousticFieldActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AIceMoonAcousticField**)Z_Param__Result=AIceMoonAcousticField::GetAcousticFieldActor(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class AIceMoonAcousticField Function GetAcousticFieldActor ***********************

// ********** Begin Class AIceMoonAcousticField Function GetAcousticFieldExtentCells ***************
struct Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics
{
	struct IceMoonAcousticField_eventGetAcousticFieldExtentCells_Parms
	{
		int32 LodIndex;
		FVector QueryLocation;
		float SearchRadius;
		TArray<FIM_GridAudioCell> OutCells;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IM|Tracing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xbb\xe5\x8f\x96\xe5\x91\xa8\xe5\x9b\xb4\xe5\xa3\xb0\xe9\x9f\xb3\xe6\xb7\xb7\xe6\xb7\x86\xe7\xb3\xbb\xe6\x95\xb0\xe7\xad\x89\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\xe5\x87\xbd\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xbb\xe5\x8f\x96\xe5\x91\xa8\xe5\x9b\xb4\xe5\xa3\xb0\xe9\x9f\xb3\xe6\xb7\xb7\xe6\xb7\x86\xe7\xb3\xbb\xe6\x95\xb0\xe7\xad\x89\xe5\xa4\x84\xe7\x90\x86\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\xe5\x87\xbd\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutCells;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventGetAcousticFieldExtentCells_Parms, LodIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_QueryLocation = { "QueryLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventGetAcousticFieldExtentCells_Parms, QueryLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventGetAcousticFieldExtentCells_Parms, SearchRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_OutCells_Inner = { "OutCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIM_GridAudioCell, METADATA_PARAMS(0, nullptr) }; // 1938957139
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_OutCells = { "OutCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventGetAcousticFieldExtentCells_Parms, OutCells), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1938957139
void Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IceMoonAcousticField_eventGetAcousticFieldExtentCells_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IceMoonAcousticField_eventGetAcousticFieldExtentCells_Parms), &Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_LodIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_QueryLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_SearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_OutCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_OutCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIceMoonAcousticField, nullptr, "GetAcousticFieldExtentCells", Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::IceMoonAcousticField_eventGetAcousticFieldExtentCells_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::IceMoonAcousticField_eventGetAcousticFieldExtentCells_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIceMoonAcousticField::execGetAcousticFieldExtentCells)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
	P_GET_STRUCT(FVector,Z_Param_QueryLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SearchRadius);
	P_GET_TARRAY_REF(FIM_GridAudioCell,Z_Param_Out_OutCells);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAcousticFieldExtentCells(Z_Param_LodIndex,Z_Param_QueryLocation,Z_Param_SearchRadius,Z_Param_Out_OutCells);
	P_NATIVE_END;
}
// ********** End Class AIceMoonAcousticField Function GetAcousticFieldExtentCells *****************

// ********** Begin Class AIceMoonAcousticField Function GetAudioResponseForMaterial ***************
struct Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics
{
	struct IceMoonAcousticField_eventGetAudioResponseForMaterial_Parms
	{
		const UPhysicalMaterial* PhysMaterial;
		FIM_AudioMaterialResponse ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IM|Acoustics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8 \xe6\x9f\xa5\xe5\xa3\xb0\xe5\xad\xa6 \xe9\x9f\xb3\xe6\x95\x88\xe8\xae\xbe\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8 \xe6\x9f\xa5\xe5\xa3\xb0\xe5\xad\xa6 \xe9\x9f\xb3\xe6\x95\x88\xe8\xae\xbe\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventGetAudioResponseForMaterial_Parms, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterial_MetaData), NewProp_PhysMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventGetAudioResponseForMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FIM_AudioMaterialResponse, METADATA_PARAMS(0, nullptr) }; // 3352835403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::NewProp_PhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIceMoonAcousticField, nullptr, "GetAudioResponseForMaterial", Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::IceMoonAcousticField_eventGetAudioResponseForMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::IceMoonAcousticField_eventGetAudioResponseForMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIceMoonAcousticField::execGetAudioResponseForMaterial)
{
	P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIM_AudioMaterialResponse*)Z_Param__Result=P_THIS->GetAudioResponseForMaterial(Z_Param_PhysMaterial);
	P_NATIVE_END;
}
// ********** End Class AIceMoonAcousticField Function GetAudioResponseForMaterial *****************

// ********** Begin Class AIceMoonAcousticField Function InvalidateAcousticRegion ******************
struct Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics
{
	struct IceMoonAcousticField_eventInvalidateAcousticRegion_Parms
	{
		FBox ChangedBounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IM|Acoustics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9d\x99\xe6\x80\x81\xe5\x8c\xba\xe5\x9f\x9f\xe6\x9b\xb4\xe6\x96\xb0 \xe5\x89\x94\xe9\x99\xa4\xe5\x8c\xba\xe5\x9f\x9f\xe7\x9a\x84\xe5\xa3\xb0\xe5\xad\xa6\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9d\x99\xe6\x80\x81\xe5\x8c\xba\xe5\x9f\x9f\xe6\x9b\xb4\xe6\x96\xb0 \xe5\x89\x94\xe9\x99\xa4\xe5\x8c\xba\xe5\x9f\x9f\xe7\x9a\x84\xe5\xa3\xb0\xe5\xad\xa6\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangedBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChangedBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::NewProp_ChangedBounds = { "ChangedBounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventInvalidateAcousticRegion_Parms, ChangedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangedBounds_MetaData), NewProp_ChangedBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::NewProp_ChangedBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIceMoonAcousticField, nullptr, "InvalidateAcousticRegion", Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::IceMoonAcousticField_eventInvalidateAcousticRegion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::IceMoonAcousticField_eventInvalidateAcousticRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIceMoonAcousticField::execInvalidateAcousticRegion)
{
	P_GET_STRUCT_REF(FBox,Z_Param_Out_ChangedBounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvalidateAcousticRegion(Z_Param_Out_ChangedBounds);
	P_NATIVE_END;
}
// ********** End Class AIceMoonAcousticField Function InvalidateAcousticRegion ********************

// ********** Begin Class AIceMoonAcousticField Function QueryAcousticField ************************
struct Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics
{
	struct IceMoonAcousticField_eventQueryAcousticField_Parms
	{
		FVector QueryLocation;
		FIM_AudioReverbParameters OutResponse;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IM|Acoustics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\xb4\xe8\xbf\x91\xe6\x9f\xa5\xe8\xaf\xa2 \xe5\xa6\x82\xe6\x9e\x9c\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe5\x88\x99\xe6\x8f\x92\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xb4\xe8\xbf\x91\xe6\x9f\xa5\xe8\xaf\xa2 \xe5\xa6\x82\xe6\x9e\x9c\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe5\x88\x99\xe6\x8f\x92\xe5\x80\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResponse;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::NewProp_QueryLocation = { "QueryLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventQueryAcousticField_Parms, QueryLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::NewProp_OutResponse = { "OutResponse", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventQueryAcousticField_Parms, OutResponse), Z_Construct_UScriptStruct_FIM_AudioReverbParameters, METADATA_PARAMS(0, nullptr) }; // 1103105627
void Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IceMoonAcousticField_eventQueryAcousticField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IceMoonAcousticField_eventQueryAcousticField_Parms), &Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::NewProp_QueryLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::NewProp_OutResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIceMoonAcousticField, nullptr, "QueryAcousticField", Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::IceMoonAcousticField_eventQueryAcousticField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::IceMoonAcousticField_eventQueryAcousticField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIceMoonAcousticField::execQueryAcousticField)
{
	P_GET_STRUCT(FVector,Z_Param_QueryLocation);
	P_GET_STRUCT_REF(FIM_AudioReverbParameters,Z_Param_Out_OutResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->QueryAcousticField(Z_Param_QueryLocation,Z_Param_Out_OutResponse);
	P_NATIVE_END;
}
// ********** End Class AIceMoonAcousticField Function QueryAcousticField **************************

// ********** Begin Class AIceMoonAcousticField Function QueryAcousticFieldSmooth ******************
struct Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics
{
	struct IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms
	{
		UObject* SourceObject;
		FName SoundSlot;
		FVector QueryLocation;
		FIM_AudioReverbParameters OutResponse;
		float SmoothSpeed;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IM|Acoustics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * [\xe5\xb9\xb3\xe6\xbb\x91\xe6\x9f\xa5\xe8\xaf\xa2] \xe5\xb8\xa6\xe6\x8c\x87\xe6\x95\xb0\xe5\xb9\xb3\xe6\xbb\x91\xe7\x9a\x84\xe5\xa3\xb0\xe5\x9c\xba\xe6\x9f\xa5\xe8\xaf\xa2\xef\xbc\x8c\xe4\xb8\x93\xe4\xb8\xba""AnimNotify\xe7\xad\x89\xe7\xa6\xbb\xe6\x95\xa3\xe9\x87\x87\xe6\xa0\xb7\xe4\xba\x8b\xe4\xbb\xb6\xe8\xae\xbe\xe8\xae\xa1\n     * \xe8\x87\xaa\xe5\x8a\xa8\xe7\xbc\x93\xe5\xad\x98\xe6\xaf\x8f\xe4\xb8\xaa\xe5\xa3\xb0\xe6\xba\x90\xe7\x9a\x84\xe4\xb8\x8a\xe6\xac\xa1\xe6\x9f\xa5\xe8\xaf\xa2\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe8\xbf\x87\xe6\xb8\xa1\xe9\x81\xbf\xe5\x85\x8d\xe6\xb7\xb7\xe5\x93\x8d\xe5\x8f\x82\xe6\x95\xb0\xe8\xb7\xb3\xe5\x8f\x98\n     * @param SourceObject \xe5\xa3\xb0\xe6\xba\x90\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x88\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x98\xaf""Actor\xe6\x88\x96""Component\xef\xbc\x8c\xe6\x8e\xa8\xe8\x8d\x90\xe7\x94\xa8""Component\xef\xbc\x89\n     * @param SoundSlot \xe5\xa3\xb0\xe9\x9f\xb3\xe6\xa7\xbd\xe4\xbd\x8d\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x88\xe5\xa6\x82 \"FootL\", \"FootR\", \"Jump\"\xef\xbc\x89\n     * @param QueryLocation \xe6\x9f\xa5\xe8\xaf\xa2\xe4\xbd\x8d\xe7\xbd\xae\n     * @param OutResponse \xe5\xb9\xb3\xe6\xbb\x91\xe5\x90\x8e\xe7\x9a\x84\xe6\xb7\xb7\xe5\x93\x8d\xe5\x8f\x82\xe6\x95\xb0\n     * @param SmoothSpeed \xe5\xb9\xb3\xe6\xbb\x91\xe6\x97\xb6\xe9\x97\xb4\xe5\xb8\xb8\xe6\x95\xb0\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4""5.0\xef\xbc\x89\n     *        - \xe8\xa1\xa8\xe7\xa4\xba\xe8\xbe\xbe\xe5\x88\xb0""63.2%\xe6\x94\xb6\xe6\x95\x9b\xe6\x89\x80\xe9\x9c\x80\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c""3\xe5\x80\x8d\xe6\x97\xb6\xe9\x97\xb4\xe8\xbe\xbe\xe5\x88\xb0""95%\xe6\x94\xb6\xe6\x95\x9b\n     *        - \xe7\xa6\xbb\xe6\x95\xa3\xe9\x87\x87\xe6\xa0\xb7\xef\xbc\x88\xe8\x84\x9a\xe6\xad\xa5\xef\xbc\x89\xe6\x8e\xa8\xe8\x8d\x90 3.0-5.0 \xe7\xa7\x92\n     *        - \xe8\xbf\x9e\xe7\xbb\xad\xe9\x87\x87\xe6\xa0\xb7\xef\xbc\x88\xe7\x8e\xaf\xe5\xa2\x83\xe9\x9f\xb3\xef\xbc\x89\xe6\x8e\xa8\xe8\x8d\x90 0.5-1.0 \xe7\xa7\x92\n     *        - \xe5\x80\xbc\xe8\xb6\x8a\xe5\xa4\xa7\xe5\x93\x8d\xe5\xba\x94\xe8\xb6\x8a\xe6\x85\xa2\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x9b\xb4\xe5\xa4\x9a\xe6\xac\xa1\xe6\x9f\xa5\xe8\xaf\xa2\xe6\x89\x8d\xe5\xae\x8c\xe5\x85\xa8\xe8\xbf\x87\xe6\xb8\xa1\n     * @return \xe6\x80\xbb\xe6\x98\xaf\xe8\xbf\x94\xe5\x9b\x9etrue\xef\xbc\x88\xe5\xa4\xb1\xe8\xb4\xa5\xe6\x97\xb6\xe5\xb9\xb3\xe6\xbb\x91\xe5\x88\xb0\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xef\xbc\x89\n     */" },
#endif
		{ "CPP_Default_SmoothSpeed", "3.000000" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[\xe5\xb9\xb3\xe6\xbb\x91\xe6\x9f\xa5\xe8\xaf\xa2] \xe5\xb8\xa6\xe6\x8c\x87\xe6\x95\xb0\xe5\xb9\xb3\xe6\xbb\x91\xe7\x9a\x84\xe5\xa3\xb0\xe5\x9c\xba\xe6\x9f\xa5\xe8\xaf\xa2\xef\xbc\x8c\xe4\xb8\x93\xe4\xb8\xba""AnimNotify\xe7\xad\x89\xe7\xa6\xbb\xe6\x95\xa3\xe9\x87\x87\xe6\xa0\xb7\xe4\xba\x8b\xe4\xbb\xb6\xe8\xae\xbe\xe8\xae\xa1\n\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbc\x93\xe5\xad\x98\xe6\xaf\x8f\xe4\xb8\xaa\xe5\xa3\xb0\xe6\xba\x90\xe7\x9a\x84\xe4\xb8\x8a\xe6\xac\xa1\xe6\x9f\xa5\xe8\xaf\xa2\xe7\xbb\x93\xe6\x9e\x9c\xef\xbc\x8c\xe5\xb9\xb3\xe6\xbb\x91\xe8\xbf\x87\xe6\xb8\xa1\xe9\x81\xbf\xe5\x85\x8d\xe6\xb7\xb7\xe5\x93\x8d\xe5\x8f\x82\xe6\x95\xb0\xe8\xb7\xb3\xe5\x8f\x98\n@param SourceObject \xe5\xa3\xb0\xe6\xba\x90\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x88\xe5\x8f\xaf\xe4\xbb\xa5\xe6\x98\xaf""Actor\xe6\x88\x96""Component\xef\xbc\x8c\xe6\x8e\xa8\xe8\x8d\x90\xe7\x94\xa8""Component\xef\xbc\x89\n@param SoundSlot \xe5\xa3\xb0\xe9\x9f\xb3\xe6\xa7\xbd\xe4\xbd\x8d\xe5\x90\x8d\xe7\xa7\xb0\xef\xbc\x88\xe5\xa6\x82 \"FootL\", \"FootR\", \"Jump\"\xef\xbc\x89\n@param QueryLocation \xe6\x9f\xa5\xe8\xaf\xa2\xe4\xbd\x8d\xe7\xbd\xae\n@param OutResponse \xe5\xb9\xb3\xe6\xbb\x91\xe5\x90\x8e\xe7\x9a\x84\xe6\xb7\xb7\xe5\x93\x8d\xe5\x8f\x82\xe6\x95\xb0\n@param SmoothSpeed \xe5\xb9\xb3\xe6\xbb\x91\xe6\x97\xb6\xe9\x97\xb4\xe5\xb8\xb8\xe6\x95\xb0\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x8c\xe9\xbb\x98\xe8\xae\xa4""5.0\xef\xbc\x89\n       - \xe8\xa1\xa8\xe7\xa4\xba\xe8\xbe\xbe\xe5\x88\xb0""63.2%\xe6\x94\xb6\xe6\x95\x9b\xe6\x89\x80\xe9\x9c\x80\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c""3\xe5\x80\x8d\xe6\x97\xb6\xe9\x97\xb4\xe8\xbe\xbe\xe5\x88\xb0""95%\xe6\x94\xb6\xe6\x95\x9b\n       - \xe7\xa6\xbb\xe6\x95\xa3\xe9\x87\x87\xe6\xa0\xb7\xef\xbc\x88\xe8\x84\x9a\xe6\xad\xa5\xef\xbc\x89\xe6\x8e\xa8\xe8\x8d\x90 3.0-5.0 \xe7\xa7\x92\n       - \xe8\xbf\x9e\xe7\xbb\xad\xe9\x87\x87\xe6\xa0\xb7\xef\xbc\x88\xe7\x8e\xaf\xe5\xa2\x83\xe9\x9f\xb3\xef\xbc\x89\xe6\x8e\xa8\xe8\x8d\x90 0.5-1.0 \xe7\xa7\x92\n       - \xe5\x80\xbc\xe8\xb6\x8a\xe5\xa4\xa7\xe5\x93\x8d\xe5\xba\x94\xe8\xb6\x8a\xe6\x85\xa2\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x9b\xb4\xe5\xa4\x9a\xe6\xac\xa1\xe6\x9f\xa5\xe8\xaf\xa2\xe6\x89\x8d\xe5\xae\x8c\xe5\x85\xa8\xe8\xbf\x87\xe6\xb8\xa1\n@return \xe6\x80\xbb\xe6\x98\xaf\xe8\xbf\x94\xe5\x9b\x9etrue\xef\xbc\x88\xe5\xa4\xb1\xe8\xb4\xa5\xe6\x97\xb6\xe5\xb9\xb3\xe6\xbb\x91\xe5\x88\xb0\xe9\xbb\x98\xe8\xae\xa4\xe5\x80\xbc\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SoundSlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResponse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothSpeed;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_SoundSlot = { "SoundSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms, SoundSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_QueryLocation = { "QueryLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms, QueryLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_OutResponse = { "OutResponse", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms, OutResponse), Z_Construct_UScriptStruct_FIM_AudioReverbParameters, METADATA_PARAMS(0, nullptr) }; // 1103105627
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_SmoothSpeed = { "SmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms, SmoothSpeed), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms), &Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_SourceObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_SoundSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_QueryLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_OutResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_SmoothSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIceMoonAcousticField, nullptr, "QueryAcousticFieldSmooth", Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::IceMoonAcousticField_eventQueryAcousticFieldSmooth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIceMoonAcousticField::execQueryAcousticFieldSmooth)
{
	P_GET_OBJECT(UObject,Z_Param_SourceObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_SoundSlot);
	P_GET_STRUCT(FVector,Z_Param_QueryLocation);
	P_GET_STRUCT_REF(FIM_AudioReverbParameters,Z_Param_Out_OutResponse);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SmoothSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->QueryAcousticFieldSmooth(Z_Param_SourceObject,Z_Param_SoundSlot,Z_Param_QueryLocation,Z_Param_Out_OutResponse,Z_Param_SmoothSpeed);
	P_NATIVE_END;
}
// ********** End Class AIceMoonAcousticField Function QueryAcousticFieldSmooth ********************

// ********** Begin Class AIceMoonAcousticField ****************************************************
void AIceMoonAcousticField::StaticRegisterNativesAIceMoonAcousticField()
{
	UClass* Class = AIceMoonAcousticField::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddProbeFromHitResultOnlayWorldStatic", &AIceMoonAcousticField::execAddProbeFromHitResultOnlayWorldStatic },
		{ "AsyncFireProbes", &AIceMoonAcousticField::execAsyncFireProbes },
		{ "ClearSmoothQueryCache", &AIceMoonAcousticField::execClearSmoothQueryCache },
		{ "GetAcousticFieldActor", &AIceMoonAcousticField::execGetAcousticFieldActor },
		{ "GetAcousticFieldExtentCells", &AIceMoonAcousticField::execGetAcousticFieldExtentCells },
		{ "GetAudioResponseForMaterial", &AIceMoonAcousticField::execGetAudioResponseForMaterial },
		{ "InvalidateAcousticRegion", &AIceMoonAcousticField::execInvalidateAcousticRegion },
		{ "QueryAcousticField", &AIceMoonAcousticField::execQueryAcousticField },
		{ "QueryAcousticFieldSmooth", &AIceMoonAcousticField::execQueryAcousticFieldSmooth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIceMoonAcousticField;
UClass* AIceMoonAcousticField::GetPrivateStaticClass()
{
	using TClass = AIceMoonAcousticField;
	if (!Z_Registration_Info_UClass_AIceMoonAcousticField.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IceMoonAcousticField"),
			Z_Registration_Info_UClass_AIceMoonAcousticField.InnerSingleton,
			StaticRegisterNativesAIceMoonAcousticField,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AIceMoonAcousticField.InnerSingleton;
}
UClass* Z_Construct_UClass_AIceMoonAcousticField_NoRegister()
{
	return AIceMoonAcousticField::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIceMoonAcousticField_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x85\xb3\xe5\x8d\xa1\xe5\x8d\x95\xe4\xbe\x8b""Actor\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe7\xae\xa1\xe7\x90\x86\xe6\x95\xb4\xe4\xb8\xaa\xe4\xb8\x96\xe7\x95\x8c\xe7\x9a\x84\xe5\xa3\xb0\xe5\xad\xa6\xe5\x9c\xba\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82 \xe6\xa0\xb8\xe5\xbf\x83:\xe4\xbd\x8e\xe5\xbc\x80\xe9\x94\x80/\xe8\xa7\xa3\xe5\x86\xb3\xe5\xa3\xb0\xe6\xba\x90\xe5\x8a\xa8\xe6\x80\x81/\xe4\xb8\x8d\xe5\x90\x8c\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbd\x8d\xe7\xbd\xae\xe5\xaf\xbc\xe8\x87\xb4\xe7\x9a\x84\xe5\x8a\xa8\xe6\x80\x81\xe9\x9f\xb3\xe6\x95\x88\xe9\x97\xae\xe9\xa2\x98(\xe9\x9f\xb3\xe9\xa2\x91\xe9\x81\xae\xe8\x94\xbd \xe7\x8e\xaf\xe5\xa2\x83\xe5\xa3\xb0\xe5\xad\xa6)  \xe8\xbe\x85\xe5\x8a\xa9\xe7\x94\xa8\xe4\xba\x8e\xe8\xbf\x94\xe5\x9b\x9e\xe7\xa2\xb0\xe6\x92\x9e\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xbd\x8d\xe7\xbd\xae\xe5\x8f\x91\xe7\x8e\xb0\xe7\xad\x89\xe7\x94\xa8\xe4\xba\x8e\xe5\x85\xb6\xe4\xbb\x96\xe7\x94\xa8\xe9\x80\x94\n * \xe5\xbc\xa5\xe8\xa1\xa5\xe4\xbc\xa0\xe7\xbb\x9f\xe7\x83\x98\xe7\x84\x99\xe5\xa3\xb0\xe5\xad\xa6\xe6\x96\xb9\xe6\xa1\x88\xe6\x97\xa0\xe6\xb3\x95\xe5\x93\x8d\xe5\xba\x94\xe5\xae\x9e\xe6\x97\xb6\xe7\x8e\xaf\xe5\xa2\x83\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\xbc\xba\xe9\x99\xb7\xef\xbc\x8c \xe6\x9b\xb4\xe5\x8a\xa0\xe7\x9a\x84\xe4\xbe\xbf\xe6\x90\xba\xe6\x98\x93\xe7\x94\xa8\xe6\x80\xa7\n\n    AIM \xe6\x8f\x92\xe4\xbb\xb6 - \xe6\xa0\xb8\xe5\xbf\x83\xe7\x89\xb9\xe6\x80\xa7\xe7\x8a\xb6\xe6\x80\x81\n    \xe2\x9c\x85 \xe5\xb7\xb2\xe5\xae\x9e\xe7\x8e\xb0\n        1. \xe5\x85\xb3\xe5\x8d\xa1\xe5\x8d\x95\xe4\xbe\x8b""Actor + 3\xe5\xb1\x82LOD\xe7\xbd\x91\xe6\xa0\xbc\xe7\xb3\xbb\xe7\xbb\x9f\xef\xbc\x88""2x/4x\xe5\x8f\xaf\xe9\x85\x8d\xe7\xbd\xae\xe5\x80\x8d\xe5\xa2\x9e\xe5\x99\xa8\xef\xbc\x89\n        2. \xe9\x9d\x99\xe6\x80\x81\xe4\xb8\x96\xe7\x95\x8c\xe5\x8e\x9f\xe5\x88\x99\xef\xbc\x9a\xe5\x8f\xaa\xe6\x8e\xa5\xe5\x8f\x97Static/Stationary\xe5\x87\xa0\xe4\xbd\x95\xe4\xbd\x93\xe6\x95\xb0\xe6\x8d\xae\n        3. \xe5\xa4\x9aLOD\xe5\x8a\xa0\xe6\x9d\x83\xe6\x9f\xa5\xe8\xaf\xa2\xef\xbc\x88""50%-30%-20%\xe7\xbb\x84\xe5\x90\x88\xe6\x8f\x92\xe5\x80\xbc\xef\xbc\x89\n        4. \xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8\xe2\x86\x92\xe9\x9f\xb3\xe9\xa2\x91\xe5\x93\x8d\xe5\xba\x94\xe6\x98\xa0\xe5\xb0\x84\xef\xbc\x88""DA_IM_MaterialMap + DA_IM_AcousticFieldConfig\xef\xbc\x89\n        5. \xe9\x9f\xb3\xe6\xba\x90\xe9\xa9\xb1\xe5\x8a\xa8\xe7\x9a\x84\xe6\x8c\x89\xe9\x9c\x80\xe6\x8e\xa2\xe6\xb5\x8b\xef\xbc\x88""AsyncFireProbes\xef\xbc\x89\n        6. \xe4\xba\x8b\xe4\xbb\xb6\xe9\xa9\xb1\xe5\x8a\xa8\xe7\x9a\x84\xe7\xbc\x93\xe5\xad\x98\xe5\xa4\xb1\xe6\x95\x88\xef\xbc\x88InvalidateAcousticRegion\xef\xbc\x89\n        7. \xe7\xb3\xbb\xe7\xbb\x9f\xe4\xbc\x91\xe7\x9c\xa0\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xef\xbc\x88""Active/Moderate/Dormant\xe8\x87\xaa\xe9\x80\x82\xe5\xba\x94Tick\xe9\xa2\x91\xe7\x8e\x87\xef\xbc\x89\n        8. \"\xe5\x85\x8d\xe8\xb4\xb9\"\xe5\xb0\x84\xe7\xba\xbf\xe6\x95\xb0\xe6\x8d\xae\xe6\xb3\xa8\xe5\x85\xa5\xef\xbc\x88""AddProbeFromHitResultOnlayWorldStatic\xef\xbc\x89\n        9. \xe5\xb9\xb3\xe6\xbb\x91\xe6\x9f\xa5\xe8\xaf\xa2\xe7\xb3\xbb\xe7\xbb\x9f\xef\xbc\x88QueryAcousticFieldSmooth\xef\xbc\x8c\xe8\x87\xaa\xe9\x80\x82\xe5\xba\x94\xe6\x8c\x87\xe6\x95\xb0\xe5\xb9\xb3\xe6\xbb\x91\xef\xbc\x89\n        10. \xe8\x87\xaa\xe9\x80\x82\xe5\xba\x94\xe6\x90\x9c\xe7\xb4\xa2\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x88\xe5\x9f\xba\xe4\xba\x8eLOD\xe5\x80\x8d\xe5\xa2\x9e\xe5\x99\xa8\xe5\x8a\xa8\xe6\x80\x81\xe8\xb0\x83\xe6\x95\xb4\xef\xbc\x89\n        11. Z\xe8\xbd\xb4\xe9\x92\xb3\xe5\x88\xb6\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x88MaxCellHeightZ\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe8\xb7\xa8\xe6\xa5\xbc\xe5\xb1\x82\xe6\xb1\xa1\xe6\x9f\x93\xef\xbc\x89\n\n    \xf0\x9f\x9a\xa7 \xe5\xbe\x85\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x88\xe6\x8c\x89\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe6\x8e\x92\xe5\xba\x8f\xef\xbc\x89\n        [\xe9\xab\x98\xe4\xbc\x98] GPU SDF\xe7\xa9\xba\xe9\x97\xb4\xe8\xbf\x9e\xe7\xbb\xad\xe6\x80\xa7\xe6\xa3\x80\xe6\xb5\x8b\xe7\xb3\xbb\xe7\xbb\x9f\xef\xbc\x88\xe8\xaf\xa6\xe8\xa7\x81IM_AcousticTypes.h\xe7\x9a\x84TODO\xe6\x96\x87\xe6\xa1\xa3\xef\xbc\x89\n            - Cell\xe5\x88\x9b\xe5\xbb\xba\xe6\x97\xb6\xe5\xbc\x82\xe6\xad\xa5GPU\xe9\xaa\x8c\xe8\xaf\x81\xef\xbc\x8c\xe6\x8b\x92\xe7\xbb\x9d\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8d\xe8\xbf\x9e\xe7\xbb\xad\xe7\x9a\x84""Cell\n            - \xe6\x9f\xa5\xe8\xaf\xa2\xe6\x97\xb6GPU\xe8\xb7\xaf\xe5\xbe\x84\xe9\x81\xae\xe6\x8c\xa1\xe6\xa3\x80\xe6\xb5\x8b\xef\xbc\x8c\xe9\x99\x8d\xe4\xbd\x8e\xe8\xa2\xab\xe5\xa2\x99\xe9\x81\xae\xe6\x8c\xa1""Cell\xe7\x9a\x84\xe6\x9d\x83\xe9\x87\x8d\n            - \xe8\xa7\xa3\xe5\x86\xb3\xe5\xbd\x93\xe5\x89\x8d\xe6\x96\xb9\xe5\xb7\xae\xe6\xa3\x80\xe6\xb5\x8b\xe6\x97\xa0\xe6\xb3\x95\xe7\xb2\xbe\xe7\xa1\xae\xe5\x88\xa4\xe6\x96\xad\xe8\xb7\xa8\xe6\x88\xbf\xe9\x97\xb4""Cell\xe7\x9a\x84\xe9\x97\xae\xe9\xa2\x98\n        [\xe4\xb8\xad\xe4\xbc\x98] \xe7\x81\xb0\xe5\x90\x8d\xe5\x8d\x95\xe5\xae\xb9\xe9\x94\x99\xe6\x9c\xba\xe5\x88\xb6\n            - \xe4\xb8\xb4\xe6\x97\xb6\xe5\xb1\x8f\xe8\x94\xbd\xe9\x94\x99\xe8\xaf\xaf\xe9\x85\x8d\xe7\xbd\xae\xe4\xb8\xbaMovable\xe7\x9a\x84""Actor\xef\xbc\x88\xe9\x98\xb2\xe6\xad\xa2\xe6\x80\xa7\xe8\x83\xbd\xe9\xbb\x91\xe6\xb4\x9e\xef\xbc\x89\n        [\xe4\xb8\xad\xe4\xbc\x98] \xe9\x9b\x86\xe6\x88\x90""AudioReverbVolume\xe5\x9b\x9e\xe9\x80\x80\n            - \xe6\x97\xa0\xe6\x8e\xa2\xe9\x92\x88\xe6\x95\xb0\xe6\x8d\xae\xe6\x97\xb6\xe6\x9f\xa5\xe8\xaf\xa2UE\xe5\x86\x85\xe7\xbd\xae\xe6\xb7\xb7\xe5\x93\x8d\xe4\xbd\x93\xe7\xa7\xaf\xe4\xbd\x9c\xe4\xb8\xba\xe5\x90\x8e\xe5\xa4\x87\n        [\xe4\xbd\x8e\xe4\xbc\x98] \xe6\x95\xb0\xe6\x8d\xae\xe8\x81\x9a\xe5\x90\x88\xe5\x90\x8e\xe5\x8f\xb0\xe4\xbb\xbb\xe5\x8a\xa1\n            - \xe5\xb0\x86\xe5\xaf\x86\xe9\x9b\x86\xe6\x8e\xa2\xe9\x92\x88\xe8\x81\x9a\xe5\x90\x88\xe4\xb8\xba\xe9\x9b\x86\xe7\xbe\xa4\xe6\x8e\xa2\xe9\x92\x88\xef\xbc\x8c\xe4\xbc\x98\xe5\x8c\x96\xe9\x95\xbf\xe6\x9c\x9f\xe8\xbf\x90\xe8\xa1\x8c\xe6\x80\xa7\xe8\x83\xbd\n\n    \xe2\x9d\x8c \xe5\xb7\xb2\xe5\xba\x9f\xe5\xbc\x83\n        - \xe7\x9b\x91\xe5\x90\xac\xe8\x80\x85\xe9\xa9\xb1\xe5\x8a\xa8\xe7\x9a\x84\xe8\x83\x8c\xe6\x99\xaf\xe6\x8e\xa2\xe6\xb5\x8b\xef\xbc\x88\xe5\x9f\xba\xe4\xba\x8e\xe7\x9b\xb8\xe6\x9c\xba\xe7\x9a\x84\xe6\x8c\x81\xe7\xbb\xad\xe6\x8e\xa2\xe9\x92\x88\xef\xbc\x89\xef\xbc\x9a\xe4\xb8\x8d\xe7\xac\xa6\xe5\x90\x88\xe6\x8c\x89\xe9\x9c\x80\xe9\x87\x87\xe6\xa0\xb7\xe8\xae\xbe\xe8\xae\xa1\n        - \xe5\xa3\xb0\xe5\xad\xa6\xe5\xaf\xbb\xe8\xb7\xaf/\xe9\x9a\xa7\xe9\x81\x93\xe6\x95\x88\xe5\xba\x94\xef\xbc\x9a\xe6\x8a\x80\xe6\x9c\xaf\xe6\x88\x90\xe6\x9c\xac\xe9\xab\x98\xef\xbc\x8c\xe6\x9a\x82\xe4\xb8\x8d\xe5\xae\x9e\xe7\x8e\xb0\n        - \xe6\x8f\x90\xe5\x89\x8d\xe9\x80\x9a\xe7\x9f\xa5/Token\xe6\xa8\xa1\xe5\xbc\x8f\xef\xbc\x9a\xe5\xaf\xb9\xe5\xb7\xa5\xe4\xbd\x9c\xe6\xb5\x81\xe7\xa0\xb4\xe5\x9d\x8f\xe6\x80\xa7\xe5\xa4\xa7\n        - Cell\xe5\x86\x85sub-point\xe6\xb3\x95\xe7\xba\xbf/\xe5\x85\xa5\xe5\xb0\x84\xe8\xa7\x92\xe5\xad\x98\xe5\x82\xa8\xef\xbc\x9a\xe5\xa4\x8d\xe6\x9d\x82\xe5\xba\xa6\xe9\xab\x98\xef\xbc\x8cSDF\xe6\x96\xb9\xe6\xa1\x88\xe6\x9b\xb4\xe4\xbc\x98\n */" },
#endif
		{ "IncludePath", "IMAcousticFieldActor.h" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe5\x8d\xa1\xe5\x8d\x95\xe4\xbe\x8b""Actor\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe7\xae\xa1\xe7\x90\x86\xe6\x95\xb4\xe4\xb8\xaa\xe4\xb8\x96\xe7\x95\x8c\xe7\x9a\x84\xe5\xa3\xb0\xe5\xad\xa6\xe5\x9c\xba\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82 \xe6\xa0\xb8\xe5\xbf\x83:\xe4\xbd\x8e\xe5\xbc\x80\xe9\x94\x80/\xe8\xa7\xa3\xe5\x86\xb3\xe5\xa3\xb0\xe6\xba\x90\xe5\x8a\xa8\xe6\x80\x81/\xe4\xb8\x8d\xe5\x90\x8c\xe7\x9b\xb8\xe6\x9c\xba\xe4\xbd\x8d\xe7\xbd\xae\xe5\xaf\xbc\xe8\x87\xb4\xe7\x9a\x84\xe5\x8a\xa8\xe6\x80\x81\xe9\x9f\xb3\xe6\x95\x88\xe9\x97\xae\xe9\xa2\x98(\xe9\x9f\xb3\xe9\xa2\x91\xe9\x81\xae\xe8\x94\xbd \xe7\x8e\xaf\xe5\xa2\x83\xe5\xa3\xb0\xe5\xad\xa6)  \xe8\xbe\x85\xe5\x8a\xa9\xe7\x94\xa8\xe4\xba\x8e\xe8\xbf\x94\xe5\x9b\x9e\xe7\xa2\xb0\xe6\x92\x9e\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xbd\x8d\xe7\xbd\xae\xe5\x8f\x91\xe7\x8e\xb0\xe7\xad\x89\xe7\x94\xa8\xe4\xba\x8e\xe5\x85\xb6\xe4\xbb\x96\xe7\x94\xa8\xe9\x80\x94\n\xe5\xbc\xa5\xe8\xa1\xa5\xe4\xbc\xa0\xe7\xbb\x9f\xe7\x83\x98\xe7\x84\x99\xe5\xa3\xb0\xe5\xad\xa6\xe6\x96\xb9\xe6\xa1\x88\xe6\x97\xa0\xe6\xb3\x95\xe5\x93\x8d\xe5\xba\x94\xe5\xae\x9e\xe6\x97\xb6\xe7\x8e\xaf\xe5\xa2\x83\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\xbc\xba\xe9\x99\xb7\xef\xbc\x8c \xe6\x9b\xb4\xe5\x8a\xa0\xe7\x9a\x84\xe4\xbe\xbf\xe6\x90\xba\xe6\x98\x93\xe7\x94\xa8\xe6\x80\xa7\n\n    AIM \xe6\x8f\x92\xe4\xbb\xb6 - \xe6\xa0\xb8\xe5\xbf\x83\xe7\x89\xb9\xe6\x80\xa7\xe7\x8a\xb6\xe6\x80\x81\n    \xe2\x9c\x85 \xe5\xb7\xb2\xe5\xae\x9e\xe7\x8e\xb0\n        1. \xe5\x85\xb3\xe5\x8d\xa1\xe5\x8d\x95\xe4\xbe\x8b""Actor + 3\xe5\xb1\x82LOD\xe7\xbd\x91\xe6\xa0\xbc\xe7\xb3\xbb\xe7\xbb\x9f\xef\xbc\x88""2x/4x\xe5\x8f\xaf\xe9\x85\x8d\xe7\xbd\xae\xe5\x80\x8d\xe5\xa2\x9e\xe5\x99\xa8\xef\xbc\x89\n        2. \xe9\x9d\x99\xe6\x80\x81\xe4\xb8\x96\xe7\x95\x8c\xe5\x8e\x9f\xe5\x88\x99\xef\xbc\x9a\xe5\x8f\xaa\xe6\x8e\xa5\xe5\x8f\x97Static/Stationary\xe5\x87\xa0\xe4\xbd\x95\xe4\xbd\x93\xe6\x95\xb0\xe6\x8d\xae\n        3. \xe5\xa4\x9aLOD\xe5\x8a\xa0\xe6\x9d\x83\xe6\x9f\xa5\xe8\xaf\xa2\xef\xbc\x88""50%-30%-20%\xe7\xbb\x84\xe5\x90\x88\xe6\x8f\x92\xe5\x80\xbc\xef\xbc\x89\n        4. \xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8\xe2\x86\x92\xe9\x9f\xb3\xe9\xa2\x91\xe5\x93\x8d\xe5\xba\x94\xe6\x98\xa0\xe5\xb0\x84\xef\xbc\x88""DA_IM_MaterialMap + DA_IM_AcousticFieldConfig\xef\xbc\x89\n        5. \xe9\x9f\xb3\xe6\xba\x90\xe9\xa9\xb1\xe5\x8a\xa8\xe7\x9a\x84\xe6\x8c\x89\xe9\x9c\x80\xe6\x8e\xa2\xe6\xb5\x8b\xef\xbc\x88""AsyncFireProbes\xef\xbc\x89\n        6. \xe4\xba\x8b\xe4\xbb\xb6\xe9\xa9\xb1\xe5\x8a\xa8\xe7\x9a\x84\xe7\xbc\x93\xe5\xad\x98\xe5\xa4\xb1\xe6\x95\x88\xef\xbc\x88InvalidateAcousticRegion\xef\xbc\x89\n        7. \xe7\xb3\xbb\xe7\xbb\x9f\xe4\xbc\x91\xe7\x9c\xa0\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xef\xbc\x88""Active/Moderate/Dormant\xe8\x87\xaa\xe9\x80\x82\xe5\xba\x94Tick\xe9\xa2\x91\xe7\x8e\x87\xef\xbc\x89\n        8. \"\xe5\x85\x8d\xe8\xb4\xb9\"\xe5\xb0\x84\xe7\xba\xbf\xe6\x95\xb0\xe6\x8d\xae\xe6\xb3\xa8\xe5\x85\xa5\xef\xbc\x88""AddProbeFromHitResultOnlayWorldStatic\xef\xbc\x89\n        9. \xe5\xb9\xb3\xe6\xbb\x91\xe6\x9f\xa5\xe8\xaf\xa2\xe7\xb3\xbb\xe7\xbb\x9f\xef\xbc\x88QueryAcousticFieldSmooth\xef\xbc\x8c\xe8\x87\xaa\xe9\x80\x82\xe5\xba\x94\xe6\x8c\x87\xe6\x95\xb0\xe5\xb9\xb3\xe6\xbb\x91\xef\xbc\x89\n        10. \xe8\x87\xaa\xe9\x80\x82\xe5\xba\x94\xe6\x90\x9c\xe7\xb4\xa2\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x88\xe5\x9f\xba\xe4\xba\x8eLOD\xe5\x80\x8d\xe5\xa2\x9e\xe5\x99\xa8\xe5\x8a\xa8\xe6\x80\x81\xe8\xb0\x83\xe6\x95\xb4\xef\xbc\x89\n        11. Z\xe8\xbd\xb4\xe9\x92\xb3\xe5\x88\xb6\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x88MaxCellHeightZ\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe8\xb7\xa8\xe6\xa5\xbc\xe5\xb1\x82\xe6\xb1\xa1\xe6\x9f\x93\xef\xbc\x89\n\n    \xf0\x9f\x9a\xa7 \xe5\xbe\x85\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x88\xe6\x8c\x89\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe6\x8e\x92\xe5\xba\x8f\xef\xbc\x89\n        [\xe9\xab\x98\xe4\xbc\x98] GPU SDF\xe7\xa9\xba\xe9\x97\xb4\xe8\xbf\x9e\xe7\xbb\xad\xe6\x80\xa7\xe6\xa3\x80\xe6\xb5\x8b\xe7\xb3\xbb\xe7\xbb\x9f\xef\xbc\x88\xe8\xaf\xa6\xe8\xa7\x81IM_AcousticTypes.h\xe7\x9a\x84TODO\xe6\x96\x87\xe6\xa1\xa3\xef\xbc\x89\n            - Cell\xe5\x88\x9b\xe5\xbb\xba\xe6\x97\xb6\xe5\xbc\x82\xe6\xad\xa5GPU\xe9\xaa\x8c\xe8\xaf\x81\xef\xbc\x8c\xe6\x8b\x92\xe7\xbb\x9d\xe7\xa9\xba\xe9\x97\xb4\xe4\xb8\x8d\xe8\xbf\x9e\xe7\xbb\xad\xe7\x9a\x84""Cell\n            - \xe6\x9f\xa5\xe8\xaf\xa2\xe6\x97\xb6GPU\xe8\xb7\xaf\xe5\xbe\x84\xe9\x81\xae\xe6\x8c\xa1\xe6\xa3\x80\xe6\xb5\x8b\xef\xbc\x8c\xe9\x99\x8d\xe4\xbd\x8e\xe8\xa2\xab\xe5\xa2\x99\xe9\x81\xae\xe6\x8c\xa1""Cell\xe7\x9a\x84\xe6\x9d\x83\xe9\x87\x8d\n            - \xe8\xa7\xa3\xe5\x86\xb3\xe5\xbd\x93\xe5\x89\x8d\xe6\x96\xb9\xe5\xb7\xae\xe6\xa3\x80\xe6\xb5\x8b\xe6\x97\xa0\xe6\xb3\x95\xe7\xb2\xbe\xe7\xa1\xae\xe5\x88\xa4\xe6\x96\xad\xe8\xb7\xa8\xe6\x88\xbf\xe9\x97\xb4""Cell\xe7\x9a\x84\xe9\x97\xae\xe9\xa2\x98\n        [\xe4\xb8\xad\xe4\xbc\x98] \xe7\x81\xb0\xe5\x90\x8d\xe5\x8d\x95\xe5\xae\xb9\xe9\x94\x99\xe6\x9c\xba\xe5\x88\xb6\n            - \xe4\xb8\xb4\xe6\x97\xb6\xe5\xb1\x8f\xe8\x94\xbd\xe9\x94\x99\xe8\xaf\xaf\xe9\x85\x8d\xe7\xbd\xae\xe4\xb8\xbaMovable\xe7\x9a\x84""Actor\xef\xbc\x88\xe9\x98\xb2\xe6\xad\xa2\xe6\x80\xa7\xe8\x83\xbd\xe9\xbb\x91\xe6\xb4\x9e\xef\xbc\x89\n        [\xe4\xb8\xad\xe4\xbc\x98] \xe9\x9b\x86\xe6\x88\x90""AudioReverbVolume\xe5\x9b\x9e\xe9\x80\x80\n            - \xe6\x97\xa0\xe6\x8e\xa2\xe9\x92\x88\xe6\x95\xb0\xe6\x8d\xae\xe6\x97\xb6\xe6\x9f\xa5\xe8\xaf\xa2UE\xe5\x86\x85\xe7\xbd\xae\xe6\xb7\xb7\xe5\x93\x8d\xe4\xbd\x93\xe7\xa7\xaf\xe4\xbd\x9c\xe4\xb8\xba\xe5\x90\x8e\xe5\xa4\x87\n        [\xe4\xbd\x8e\xe4\xbc\x98] \xe6\x95\xb0\xe6\x8d\xae\xe8\x81\x9a\xe5\x90\x88\xe5\x90\x8e\xe5\x8f\xb0\xe4\xbb\xbb\xe5\x8a\xa1\n            - \xe5\xb0\x86\xe5\xaf\x86\xe9\x9b\x86\xe6\x8e\xa2\xe9\x92\x88\xe8\x81\x9a\xe5\x90\x88\xe4\xb8\xba\xe9\x9b\x86\xe7\xbe\xa4\xe6\x8e\xa2\xe9\x92\x88\xef\xbc\x8c\xe4\xbc\x98\xe5\x8c\x96\xe9\x95\xbf\xe6\x9c\x9f\xe8\xbf\x90\xe8\xa1\x8c\xe6\x80\xa7\xe8\x83\xbd\n\n    \xe2\x9d\x8c \xe5\xb7\xb2\xe5\xba\x9f\xe5\xbc\x83\n        - \xe7\x9b\x91\xe5\x90\xac\xe8\x80\x85\xe9\xa9\xb1\xe5\x8a\xa8\xe7\x9a\x84\xe8\x83\x8c\xe6\x99\xaf\xe6\x8e\xa2\xe6\xb5\x8b\xef\xbc\x88\xe5\x9f\xba\xe4\xba\x8e\xe7\x9b\xb8\xe6\x9c\xba\xe7\x9a\x84\xe6\x8c\x81\xe7\xbb\xad\xe6\x8e\xa2\xe9\x92\x88\xef\xbc\x89\xef\xbc\x9a\xe4\xb8\x8d\xe7\xac\xa6\xe5\x90\x88\xe6\x8c\x89\xe9\x9c\x80\xe9\x87\x87\xe6\xa0\xb7\xe8\xae\xbe\xe8\xae\xa1\n        - \xe5\xa3\xb0\xe5\xad\xa6\xe5\xaf\xbb\xe8\xb7\xaf/\xe9\x9a\xa7\xe9\x81\x93\xe6\x95\x88\xe5\xba\x94\xef\xbc\x9a\xe6\x8a\x80\xe6\x9c\xaf\xe6\x88\x90\xe6\x9c\xac\xe9\xab\x98\xef\xbc\x8c\xe6\x9a\x82\xe4\xb8\x8d\xe5\xae\x9e\xe7\x8e\xb0\n        - \xe6\x8f\x90\xe5\x89\x8d\xe9\x80\x9a\xe7\x9f\xa5/Token\xe6\xa8\xa1\xe5\xbc\x8f\xef\xbc\x9a\xe5\xaf\xb9\xe5\xb7\xa5\xe4\xbd\x9c\xe6\xb5\x81\xe7\xa0\xb4\xe5\x9d\x8f\xe6\x80\xa7\xe5\xa4\xa7\n        - Cell\xe5\x86\x85sub-point\xe6\xb3\x95\xe7\xba\xbf/\xe5\x85\xa5\xe5\xb0\x84\xe8\xa7\x92\xe5\xad\x98\xe5\x82\xa8\xef\xbc\x9a\xe5\xa4\x8d\xe6\x9d\x82\xe5\xba\xa6\xe9\xab\x98\xef\xbc\x8cSDF\xe6\x96\xb9\xe6\xa1\x88\xe6\x9b\xb4\xe4\xbc\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigAsset_MetaData[] = {
		{ "Category", "IM|Configuration" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe5\xa3\xb0\xe5\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe9\xa2\x84\xe8\xae\xbe\xe8\xb5\x84\xe4\xba\xa7\xef\xbc\x88\xe5\xbf\x85\xe9\x9c\x80\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCellSize_MetaData[] = {
		{ "Category", "IM|Configuration" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe5\x9f\xba\xe7\xa1\x80\xe7\xbd\x91\xe6\xa0\xbc\xe5\x8d\x95\xe5\x85\x83\xe5\xa4\xa7\xe5\xb0\x8f\xef\xbc\x88\xe5\x8e\x98\xe7\xb1\xb3\xef\xbc\x89LOD0\xe7\x9a\x84""cell\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodMultiplier_MetaData[] = {
		{ "Category", "IM|Configuration" },
		{ "ClampMax", "4" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "LOD\xe5\x80\x8d\xe5\xa2\x9e\xe7\xb3\xbb\xe6\x95\xb0: 2=\xe5\xae\xa4\xe5\x86\x85\xe4\xbc\x98\xe5\x8c\x96(2-4-8m), 4=\xe5\xae\xa4\xe5\xa4\x96\xe4\xbc\x98\xe5\x8c\x96(2-8-32m)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCellHeightZ_MetaData[] = {
		{ "Category", "IM|Configuration" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Z\xe8\xbd\xb4\xe6\x9c\x80\xe5\xa4\xa7""cell\xe9\xab\x98\xe5\xba\xa6\xef\xbc\x88\xe5\x8e\x98\xe7\xb1\xb3\xef\xbc\x89\xef\xbc\x8c\xe9\x81\xbf\xe5\x85\x8d\xe8\xb7\xa8\xe6\xa5\xbc\xe5\xb1\x82\xe3\x80\x82""0=\xe4\xb8\x8d\xe9\x92\xb3\xe5\x88\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStateThreshold_MetaData[] = {
		{ "Category", "IM|Performance" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe6\x9c\x80\xe5\x90\x8e\xe6\x9f\xa5\xe8\xaf\xa2\xe5\x90\x8e\xe5\xb0\x8f\xe4\xba\x8e\xe6\xad\xa4\xe6\x97\xb6\xe9\x97\xb4 \xe2\x86\x92 \xe6\xb4\xbb\xe8\xb7\x83\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x88\xe6\xaf\x8f\xe5\xb8\xa7Tick\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DormantStateThreshold_MetaData[] = {
		{ "Category", "IM|Performance" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "5.0" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe6\x9c\x80\xe5\x90\x8e\xe6\x9f\xa5\xe8\xaf\xa2\xe5\x90\x8e\xe5\xa4\xa7\xe4\xba\x8e\xe6\xad\xa4\xe6\x97\xb6\xe9\x97\xb4 \xe2\x86\x92 \xe4\xbc\x91\xe7\x9c\xa0\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x88\xe9\x99\x8d\xe4\xbd\x8eTick\xe9\xa2\x91\xe7\x8e\x87\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultReverb_MetaData[] = {
		{ "Category", "IM|Configuration|Override" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe5\x8b\xbe\xe9\x80\x89\xe5\x90\x8e\xe5\x8f\xaf\xe8\xa6\x86\xe7\x9b\x96""ConfigAsset\xe4\xb8\xad\xe7\x9a\x84\xe9\xbb\x98\xe8\xae\xa4\xe6\xb7\xb7\xe5\x93\x8d\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e\xe7\x89\xb9\xe6\xae\x8a\xe5\x85\xb3\xe5\x8d\xa1\xe5\xbe\xae\xe8\xb0\x83\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbParameters_Override_MetaData[] = {
		{ "Category", "IM|Configuration|Override" },
		{ "EditCondition", "bOverrideDefaultReverb" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe6\xad\xa4\xe5\xae\x9e\xe4\xbe\x8b\xe7\x89\xb9\xe5\xae\x9a\xe7\x9a\x84\xe9\xbb\x98\xe8\xae\xa4\xe6\xb7\xb7\xe5\x93\x8d\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWetCalculation_MetaData[] = {
		{ "Category", "IM|Configuration|Override" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe5\x8b\xbe\xe9\x80\x89\xe5\x90\x8e\xe5\x8f\xaf\xe8\xa6\x86\xe7\x9b\x96""ConfigAsset\xe4\xb8\xad\xe7\x9a\x84Wet\xe8\xae\xa1\xe7\xae\x97\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetCalculationParameters_Override_MetaData[] = {
		{ "Category", "IM|Configuration|Override" },
		{ "EditCondition", "bOverrideWetCalculation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe6\xad\xa4\xe5\xae\x9e\xe4\xbe\x8b\xe7\x89\xb9\xe5\xae\x9a\xe7\x9a\x84Wet\xe8\xae\xa1\xe7\xae\x97\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "IM|Debug" },
		{ "ModuleRelativePath", "Public/IMAcousticFieldActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfigAsset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LodMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCellHeightZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveStateThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DormantStateThreshold;
	static void NewProp_bOverrideDefaultReverb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultReverb;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultReverbParameters_Override;
	static void NewProp_bOverrideWetCalculation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWetCalculation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WetCalculationParameters_Override;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIceMoonAcousticField_AddProbeFromHitResultOnlayWorldStatic, "AddProbeFromHitResultOnlayWorldStatic" }, // 3149246762
		{ &Z_Construct_UFunction_AIceMoonAcousticField_AsyncFireProbes, "AsyncFireProbes" }, // 879305943
		{ &Z_Construct_UFunction_AIceMoonAcousticField_ClearSmoothQueryCache, "ClearSmoothQueryCache" }, // 2321496691
		{ &Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldActor, "GetAcousticFieldActor" }, // 2487728329
		{ &Z_Construct_UFunction_AIceMoonAcousticField_GetAcousticFieldExtentCells, "GetAcousticFieldExtentCells" }, // 1782655439
		{ &Z_Construct_UFunction_AIceMoonAcousticField_GetAudioResponseForMaterial, "GetAudioResponseForMaterial" }, // 1408307991
		{ &Z_Construct_UFunction_AIceMoonAcousticField_InvalidateAcousticRegion, "InvalidateAcousticRegion" }, // 3792780866
		{ &Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticField, "QueryAcousticField" }, // 3349271222
		{ &Z_Construct_UFunction_AIceMoonAcousticField_QueryAcousticFieldSmooth, "QueryAcousticFieldSmooth" }, // 3642246657
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIceMoonAcousticField>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_ConfigAsset = { "ConfigAsset", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIceMoonAcousticField, ConfigAsset), Z_Construct_UClass_UDA_IM_AcousticFieldConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigAsset_MetaData), NewProp_ConfigAsset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_GridCellSize = { "GridCellSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIceMoonAcousticField, GridCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCellSize_MetaData), NewProp_GridCellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_LodMultiplier = { "LodMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIceMoonAcousticField, LodMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodMultiplier_MetaData), NewProp_LodMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_MaxCellHeightZ = { "MaxCellHeightZ", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIceMoonAcousticField, MaxCellHeightZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCellHeightZ_MetaData), NewProp_MaxCellHeightZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_ActiveStateThreshold = { "ActiveStateThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIceMoonAcousticField, ActiveStateThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStateThreshold_MetaData), NewProp_ActiveStateThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_DormantStateThreshold = { "DormantStateThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIceMoonAcousticField, DormantStateThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DormantStateThreshold_MetaData), NewProp_DormantStateThreshold_MetaData) };
void Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bOverrideDefaultReverb_SetBit(void* Obj)
{
	((AIceMoonAcousticField*)Obj)->bOverrideDefaultReverb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bOverrideDefaultReverb = { "bOverrideDefaultReverb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIceMoonAcousticField), &Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bOverrideDefaultReverb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefaultReverb_MetaData), NewProp_bOverrideDefaultReverb_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_DefaultReverbParameters_Override = { "DefaultReverbParameters_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIceMoonAcousticField, DefaultReverbParameters_Override), Z_Construct_UScriptStruct_FIM_AudioReverbParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultReverbParameters_Override_MetaData), NewProp_DefaultReverbParameters_Override_MetaData) }; // 1103105627
void Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bOverrideWetCalculation_SetBit(void* Obj)
{
	((AIceMoonAcousticField*)Obj)->bOverrideWetCalculation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bOverrideWetCalculation = { "bOverrideWetCalculation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIceMoonAcousticField), &Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bOverrideWetCalculation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideWetCalculation_MetaData), NewProp_bOverrideWetCalculation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_WetCalculationParameters_Override = { "WetCalculationParameters_Override", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIceMoonAcousticField, WetCalculationParameters_Override), Z_Construct_UScriptStruct_FIM_WetCalculationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetCalculationParameters_Override_MetaData), NewProp_WetCalculationParameters_Override_MetaData) }; // 3409948405
void Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((AIceMoonAcousticField*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIceMoonAcousticField), &Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIceMoonAcousticField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_ConfigAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_GridCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_LodMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_MaxCellHeightZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_ActiveStateThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_DormantStateThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bOverrideDefaultReverb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_DefaultReverbParameters_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bOverrideWetCalculation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_WetCalculationParameters_Override,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceMoonAcousticField_Statics::NewProp_bDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIceMoonAcousticField_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIceMoonAcousticField_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonAcousticField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIceMoonAcousticField_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIceMoonAcousticField_Statics::ClassParams = {
	&AIceMoonAcousticField::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIceMoonAcousticField_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIceMoonAcousticField_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIceMoonAcousticField_Statics::Class_MetaDataParams), Z_Construct_UClass_AIceMoonAcousticField_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIceMoonAcousticField()
{
	if (!Z_Registration_Info_UClass_AIceMoonAcousticField.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIceMoonAcousticField.OuterSingleton, Z_Construct_UClass_AIceMoonAcousticField_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIceMoonAcousticField.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIceMoonAcousticField);
AIceMoonAcousticField::~AIceMoonAcousticField() {}
// ********** End Class AIceMoonAcousticField ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h__Script_IceMoonAcousticField_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIceMoonAcousticField, AIceMoonAcousticField::StaticClass, TEXT("AIceMoonAcousticField"), &Z_Registration_Info_UClass_AIceMoonAcousticField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIceMoonAcousticField), 4201349865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h__Script_IceMoonAcousticField_4293378205(TEXT("/Script/IceMoonAcousticField"),
	Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h__Script_IceMoonAcousticField_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h__Script_IceMoonAcousticField_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
