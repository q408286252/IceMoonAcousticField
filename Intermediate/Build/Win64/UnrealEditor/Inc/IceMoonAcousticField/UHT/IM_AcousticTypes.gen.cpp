// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IM_AcousticTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIM_AcousticTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioMaterialResponse();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioRayResponse();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioReverbParameters();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_GridAudioCell();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_WetCalculationParameters();
UPackage* Z_Construct_UPackage__Script_IceMoonAcousticField();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIM_AudioMaterialResponse *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIM_AudioMaterialResponse;
class UScriptStruct* FIM_AudioMaterialResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_AudioMaterialResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIM_AudioMaterialResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIM_AudioMaterialResponse, (UObject*)Z_Construct_UPackage__Script_IceMoonAcousticField(), TEXT("IM_AudioMaterialResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FIM_AudioMaterialResponse.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------\n// \xe9\x9f\xb3\xe9\xa2\x91\xe6\x9d\x90\xe8\xb4\xa8\xe5\x93\x8d\xe5\xba\x94 - \xe8\xbf\x99\xe6\x98\xaf\xe9\x9f\xb3\xe6\x95\x88\xe8\xae\xbe\xe8\xae\xa1\xe5\xb8\x88\xe7\x9c\x9f\xe6\xad\xa3\xe5\x85\xb3\xe5\xbf\x83\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\n//--------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\x9d\x90\xe8\xb4\xa8\xe5\x93\x8d\xe5\xba\x94 - \xe8\xbf\x99\xe6\x98\xaf\xe9\x9f\xb3\xe6\x95\x88\xe8\xae\xbe\xe8\xae\xa1\xe5\xb8\x88\xe7\x9c\x9f\xe6\xad\xa3\xe5\x85\xb3\xe5\xbf\x83\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[] = {
		{ "Category", "Acoustic Response" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// [0-1] \xe6\xad\xa4\xe6\x9d\x90\xe8\xb4\xa8\xe5\xa3\xb0\xe9\x9f\xb3\xe5\xae\x8c\xe5\x85\xa8\xe9\x98\xbb\xe6\x8c\xa1\xe7\x9a\x84\xe7\xa8\x8b\xe5\xba\xa6. 0=\xe5\xae\x8c\xe5\x85\xa8\xe9\x80\x9a\xe9\x80\x8f, 1=\xe5\xae\x8c\xe5\x85\xa8\xe9\x81\xae\xe8\x94\xbd   \xe6\x9a\x82\xe6\x97\xb6\xe7\x94\xa8\xe4\xb8\x8d\xe4\xb8\x8a \xe5\x8f\xaf\xe8\x83\xbd\xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x80\xe4\xba\x9b\xe5\xa3\xb0\xe9\x9f\xb3\xe5\x90\xb8\xe6\x94\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[0-1] \xe6\xad\xa4\xe6\x9d\x90\xe8\xb4\xa8\xe5\xa3\xb0\xe9\x9f\xb3\xe5\xae\x8c\xe5\x85\xa8\xe9\x98\xbb\xe6\x8c\xa1\xe7\x9a\x84\xe7\xa8\x8b\xe5\xba\xa6. 0=\xe5\xae\x8c\xe5\x85\xa8\xe9\x80\x9a\xe9\x80\x8f, 1=\xe5\xae\x8c\xe5\x85\xa8\xe9\x81\xae\xe8\x94\xbd   \xe6\x9a\x82\xe6\x97\xb6\xe7\x94\xa8\xe4\xb8\x8d\xe4\xb8\x8a \xe5\x8f\xaf\xe8\x83\xbd\xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x80\xe4\xba\x9b\xe5\xa3\xb0\xe9\x9f\xb3\xe5\x90\xb8\xe6\x94\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[] = {
		{ "Category", "Acoustic Response" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x89\xe6\xbb\x91\xe5\xb9\xb3\xe5\x9d\xa6 \xe5\x8f\xaf\xe4\xbb\xa5\xe7\x90\x86\xe8\xa7\xa3\xe4\xb8\xba\xe9\x99\xa4\xe7\xb2\x97\xe7\xb3\x99\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x89\xe6\xbb\x91\xe5\xb9\xb3\xe5\x9d\xa6 \xe5\x8f\xaf\xe4\xbb\xa5\xe7\x90\x86\xe8\xa7\xa3\xe4\xb8\xba\xe9\x99\xa4\xe7\xb2\x97\xe7\xb3\x99\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowDampening_MetaData[] = {
		{ "Category", "Acoustic Response" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighDampening_MetaData[] = {
		{ "Category", "Acoustic Response" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Diffusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowDampening;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighDampening;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIM_AudioMaterialResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioMaterialResponse, Occlusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Occlusion_MetaData), NewProp_Occlusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioMaterialResponse, Diffusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diffusion_MetaData), NewProp_Diffusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::NewProp_LowDampening = { "LowDampening", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioMaterialResponse, LowDampening), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowDampening_MetaData), NewProp_LowDampening_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::NewProp_HighDampening = { "HighDampening", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioMaterialResponse, HighDampening), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighDampening_MetaData), NewProp_HighDampening_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::NewProp_Occlusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::NewProp_Diffusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::NewProp_LowDampening,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::NewProp_HighDampening,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonAcousticField,
	nullptr,
	&NewStructOps,
	"IM_AudioMaterialResponse",
	Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::PropPointers),
	sizeof(FIM_AudioMaterialResponse),
	alignof(FIM_AudioMaterialResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioMaterialResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_AudioMaterialResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIM_AudioMaterialResponse.InnerSingleton, Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIM_AudioMaterialResponse.InnerSingleton;
}
// ********** End ScriptStruct FIM_AudioMaterialResponse *******************************************

// ********** Begin ScriptStruct FIM_AudioRayResponse **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIM_AudioRayResponse;
class UScriptStruct* FIM_AudioRayResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_AudioRayResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIM_AudioRayResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIM_AudioRayResponse, (UObject*)Z_Construct_UPackage__Script_IceMoonAcousticField(), TEXT("IM_AudioRayResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FIM_AudioRayResponse.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SumDistance_MetaData[] = {
		{ "Category", "AIM|Cell" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AveVariance_MetaData[] = {
		{ "Category", "AIM|Cell" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[] = {
		{ "Category", "AIM|Cell" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SumHitDirectionVariance_MetaData[] = {
		{ "Category", "AIM|Cell" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AveHitLocation_MetaData[] = {
		{ "Category", "AIM|Cell" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayHitCount_MetaData[] = {
		{ "Category", "AIM|Cell" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeCount_MetaData[] = {
		{ "Category", "AIM|Cell" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SumDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AveVariance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SumHitDirectionVariance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AveHitLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayHitCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProbeCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIM_AudioRayResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_SumDistance = { "SumDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioRayResponse, SumDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SumDistance_MetaData), NewProp_SumDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_AveVariance = { "AveVariance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioRayResponse, AveVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AveVariance_MetaData), NewProp_AveVariance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioRayResponse, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_SumHitDirectionVariance = { "SumHitDirectionVariance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioRayResponse, SumHitDirectionVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SumHitDirectionVariance_MetaData), NewProp_SumHitDirectionVariance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_AveHitLocation = { "AveHitLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioRayResponse, AveHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AveHitLocation_MetaData), NewProp_AveHitLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_RayHitCount = { "RayHitCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioRayResponse, RayHitCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayHitCount_MetaData), NewProp_RayHitCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_ProbeCount = { "ProbeCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioRayResponse, ProbeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeCount_MetaData), NewProp_ProbeCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_SumDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_AveVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_MinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_SumHitDirectionVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_AveHitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_RayHitCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewProp_ProbeCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonAcousticField,
	nullptr,
	&NewStructOps,
	"IM_AudioRayResponse",
	Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::PropPointers),
	sizeof(FIM_AudioRayResponse),
	alignof(FIM_AudioRayResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioRayResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_AudioRayResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIM_AudioRayResponse.InnerSingleton, Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIM_AudioRayResponse.InnerSingleton;
}
// ********** End ScriptStruct FIM_AudioRayResponse ************************************************

// ********** Begin ScriptStruct FIM_GridAudioCell *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIM_GridAudioCell;
class UScriptStruct* FIM_GridAudioCell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_GridAudioCell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIM_GridAudioCell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIM_GridAudioCell, (UObject*)Z_Construct_UPackage__Script_IceMoonAcousticField(), TEXT("IM_GridAudioCell"));
	}
	return Z_Registration_Info_UScriptStruct_FIM_GridAudioCell.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------\n// \xe7\xbd\x91\xe6\xa0\xbc\xe5\x8d\x95\xe5\x85\x83\n//--------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbd\x91\xe6\xa0\xbc\xe5\x8d\x95\xe5\x85\x83" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayRes_MetaData[] = {
		{ "Category", "AIM|Cell" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatRes_MetaData[] = {
		{ "Category", "AIM|Cell" },
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayRes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatRes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIM_GridAudioCell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::NewProp_RayRes = { "RayRes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_GridAudioCell, RayRes), Z_Construct_UScriptStruct_FIM_AudioRayResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayRes_MetaData), NewProp_RayRes_MetaData) }; // 2437146000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::NewProp_MatRes = { "MatRes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_GridAudioCell, MatRes), Z_Construct_UScriptStruct_FIM_AudioMaterialResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatRes_MetaData), NewProp_MatRes_MetaData) }; // 3352835403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::NewProp_RayRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::NewProp_MatRes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonAcousticField,
	nullptr,
	&NewStructOps,
	"IM_GridAudioCell",
	Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::PropPointers),
	sizeof(FIM_GridAudioCell),
	alignof(FIM_GridAudioCell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIM_GridAudioCell()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_GridAudioCell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIM_GridAudioCell.InnerSingleton, Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIM_GridAudioCell.InnerSingleton;
}
// ********** End ScriptStruct FIM_GridAudioCell ***************************************************

// ********** Begin ScriptStruct FIM_WetCalculationParameters **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIM_WetCalculationParameters;
class UScriptStruct* FIM_WetCalculationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_WetCalculationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIM_WetCalculationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIM_WetCalculationParameters, (UObject*)Z_Construct_UPackage__Script_IceMoonAcousticField(), TEXT("IM_WetCalculationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FIM_WetCalculationParameters.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------\n// Wet \xe8\xae\xa1\xe7\xae\x97\xe5\x8f\x82\xe6\x95\xb0 - \xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\xa7\xe5\x88\xb6\xe6\xb7\xb7\xe5\x93\x8d\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe8\xae\xa1\xe7\xae\x97\xe9\x80\xbb\xe8\xbe\x91\n//--------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wet \xe8\xae\xa1\xe7\xae\x97\xe5\x8f\x82\xe6\x95\xb0 - \xe7\x94\xa8\xe4\xba\x8e\xe6\x8e\xa7\xe5\x88\xb6\xe6\xb7\xb7\xe5\x93\x8d\xe5\xbc\xba\xe5\xba\xa6\xe7\x9a\x84\xe8\xae\xa1\xe7\xae\x97\xe9\x80\xbb\xe8\xbe\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetClosedDistanceThreshold_MetaData[] = {
		{ "Category", "Wet Calculation" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xb0\x81\xe9\x97\xad\xe7\xa9\xba\xe9\x97\xb4\xe7\x9a\x84\xe5\xb9\xb3\xe5\x9d\x87\xe8\xb7\x9d\xe7\xa6\xbb\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x88\xe7\xb1\xb3\xef\xbc\x89\xef\xbc\x9a\xe5\xb0\x8f\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe8\xae\xa4\xe4\xb8\xba\xe6\x98\xaf\xe5\xb0\x81\xe9\x97\xad\xe6\x88\xbf\xe9\x97\xb4 */" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x81\xe9\x97\xad\xe7\xa9\xba\xe9\x97\xb4\xe7\x9a\x84\xe5\xb9\xb3\xe5\x9d\x87\xe8\xb7\x9d\xe7\xa6\xbb\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x88\xe7\xb1\xb3\xef\xbc\x89\xef\xbc\x9a\xe5\xb0\x8f\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe8\xae\xa4\xe4\xb8\xba\xe6\x98\xaf\xe5\xb0\x81\xe9\x97\xad\xe6\x88\xbf\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetOpenDistanceThreshold_MetaData[] = {
		{ "Category", "Wet Calculation" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "5.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbc\x80\xe6\x94\xbe\xe7\xa9\xba\xe9\x97\xb4\xe7\x9a\x84\xe5\xb9\xb3\xe5\x9d\x87\xe8\xb7\x9d\xe7\xa6\xbb\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x88\xe7\xb1\xb3\xef\xbc\x89\xef\xbc\x9a\xe5\xa4\xa7\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe8\xae\xa4\xe4\xb8\xba\xe6\x98\xaf\xe5\xbc\x80\xe9\x98\x94\xe5\x8c\xba\xe5\x9f\x9f */" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe6\x94\xbe\xe7\xa9\xba\xe9\x97\xb4\xe7\x9a\x84\xe5\xb9\xb3\xe5\x9d\x87\xe8\xb7\x9d\xe7\xa6\xbb\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x88\xe7\xb1\xb3\xef\xbc\x89\xef\xbc\x9a\xe5\xa4\xa7\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe8\xae\xa4\xe4\xb8\xba\xe6\x98\xaf\xe5\xbc\x80\xe9\x98\x94\xe5\x8c\xba\xe5\x9f\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetHitRateLow_MetaData[] = {
		{ "Category", "Wet Calculation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x91\xbd\xe4\xb8\xad\xe7\x8e\x87\xe4\xbd\x8e\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x9a\xe4\xbd\x8e\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe6\xb7\xb7\xe5\x93\x8d\xe5\x87\x8f\xe5\xbc\xb1 */" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x91\xbd\xe4\xb8\xad\xe7\x8e\x87\xe4\xbd\x8e\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x9a\xe4\xbd\x8e\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe6\xb7\xb7\xe5\x93\x8d\xe5\x87\x8f\xe5\xbc\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetHitRateHigh_MetaData[] = {
		{ "Category", "Wet Calculation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x91\xbd\xe4\xb8\xad\xe7\x8e\x87\xe9\xab\x98\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x9a\xe9\xab\x98\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe6\xb7\xb7\xe5\x93\x8d\xe5\xa2\x9e\xe5\xbc\xba */" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x91\xbd\xe4\xb8\xad\xe7\x8e\x87\xe9\xab\x98\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x9a\xe9\xab\x98\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe6\xb7\xb7\xe5\x93\x8d\xe5\xa2\x9e\xe5\xbc\xba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetNearWallDistance_MetaData[] = {
		{ "Category", "Wet Calculation" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x9d\xa0\xe5\xa2\x99\xe8\xb7\x9d\xe7\xa6\xbb\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x88\xe7\xb1\xb3\xef\xbc\x89\xef\xbc\x9a\xe5\xb0\x8f\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe6\x97\xb6\xe5\xa2\x9e\xe5\xbc\xba\xe6\xb7\xb7\xe5\x93\x8d */" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9d\xa0\xe5\xa2\x99\xe8\xb7\x9d\xe7\xa6\xbb\xe9\x98\x88\xe5\x80\xbc\xef\xbc\x88\xe7\xb1\xb3\xef\xbc\x89\xef\xbc\x9a\xe5\xb0\x8f\xe4\xba\x8e\xe6\xad\xa4\xe5\x80\xbc\xe6\x97\xb6\xe5\xa2\x9e\xe5\xbc\xba\xe6\xb7\xb7\xe5\x93\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetNearWallBoost_MetaData[] = {
		{ "Category", "Wet Calculation" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\x9d\xa0\xe5\xa2\x99\xe6\xb7\xb7\xe5\x93\x8d\xe5\xa2\x9e\xe5\xbc\xba\xe9\x87\x8f\xef\xbc\x9a\xe9\x9d\xa0\xe8\xbf\x91\xe5\xa2\x99\xe5\xa3\x81\xe6\x97\xb6\xe9\xa2\x9d\xe5\xa4\x96\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84Wet\xe5\x80\xbc */" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9d\xa0\xe5\xa2\x99\xe6\xb7\xb7\xe5\x93\x8d\xe5\xa2\x9e\xe5\xbc\xba\xe9\x87\x8f\xef\xbc\x9a\xe9\x9d\xa0\xe8\xbf\x91\xe5\xa2\x99\xe5\xa3\x81\xe6\x97\xb6\xe9\xa2\x9d\xe5\xa4\x96\xe5\xa2\x9e\xe5\x8a\xa0\xe7\x9a\x84Wet\xe5\x80\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetClosedDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetOpenDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetHitRateLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetHitRateHigh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetNearWallDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WetNearWallBoost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIM_WetCalculationParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetClosedDistanceThreshold = { "WetClosedDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_WetCalculationParameters, WetClosedDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetClosedDistanceThreshold_MetaData), NewProp_WetClosedDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetOpenDistanceThreshold = { "WetOpenDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_WetCalculationParameters, WetOpenDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetOpenDistanceThreshold_MetaData), NewProp_WetOpenDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetHitRateLow = { "WetHitRateLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_WetCalculationParameters, WetHitRateLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetHitRateLow_MetaData), NewProp_WetHitRateLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetHitRateHigh = { "WetHitRateHigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_WetCalculationParameters, WetHitRateHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetHitRateHigh_MetaData), NewProp_WetHitRateHigh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetNearWallDistance = { "WetNearWallDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_WetCalculationParameters, WetNearWallDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetNearWallDistance_MetaData), NewProp_WetNearWallDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetNearWallBoost = { "WetNearWallBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_WetCalculationParameters, WetNearWallBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetNearWallBoost_MetaData), NewProp_WetNearWallBoost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetClosedDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetOpenDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetHitRateLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetHitRateHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetNearWallDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewProp_WetNearWallBoost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonAcousticField,
	nullptr,
	&NewStructOps,
	"IM_WetCalculationParameters",
	Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::PropPointers),
	sizeof(FIM_WetCalculationParameters),
	alignof(FIM_WetCalculationParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIM_WetCalculationParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_WetCalculationParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIM_WetCalculationParameters.InnerSingleton, Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIM_WetCalculationParameters.InnerSingleton;
}
// ********** End ScriptStruct FIM_WetCalculationParameters ****************************************

// ********** Begin ScriptStruct FIM_AudioReverbParameters *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIM_AudioReverbParameters;
class UScriptStruct* FIM_AudioReverbParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_AudioReverbParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIM_AudioReverbParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIM_AudioReverbParameters, (UObject*)Z_Construct_UPackage__Script_IceMoonAcousticField(), TEXT("IM_AudioReverbParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FIM_AudioReverbParameters.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------\n// \xe9\x9f\xb3\xe9\xa2\x91\xe6\xb7\xb7\xe5\x93\x8d\xe5\x8f\x82\xe6\x95\xb0 - \xe6\x9c\x80\xe7\xbb\x88\xe5\xba\x94\xe7\x94\xa8\xe5\x88\xb0\xe9\x9f\xb3\xe9\xa2\x91\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe6\xb7\xb7\xe5\x93\x8d\xe6\x95\x88\xe6\x9e\x9c\xe5\x8f\x82\xe6\x95\xb0\n//--------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe6\xb7\xb7\xe5\x93\x8d\xe5\x8f\x82\xe6\x95\xb0 - \xe6\x9c\x80\xe7\xbb\x88\xe5\xba\x94\xe7\x94\xa8\xe5\x88\xb0\xe9\x9f\xb3\xe9\xa2\x91\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84\xe6\xb7\xb7\xe5\x93\x8d\xe6\x95\x88\xe6\x9e\x9c\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wet_MetaData[] = {
		{ "Category", "Reverb Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x9c\xba\xe7\xa9\xba\xe9\x97\xb4\xe6\x9f\xa5\xe8\xaf\xa2\xe6\xb7\xb7\xe5\x90\x88\xe5\xbc\xba\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xba\xe7\xa9\xba\xe9\x97\xb4\xe6\x9f\xa5\xe8\xaf\xa2\xe6\xb7\xb7\xe5\x90\x88\xe5\xbc\xba\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[] = {
		{ "Category", "Reverb Parameters" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbb\xb6\xe8\xbf\x9f\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89- \xe5\xb0\x84\xe7\xba\xbf\xe6\x89\xbe\xe6\x9c\x80\xe7\x9f\xad(\xe7\x9b\xb8\xe6\x9c\xba->\xe5\x8f\x8d\xe5\xb0\x84\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x8d\xe7\xbd\xae + \xe5\x8f\x91\xe7\x94\x9f\xe6\xba\x90->\xe5\x8f\x8d\xe5\xb0\x84\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x8d\xe7\xbd\xae) / \xe5\xa3\xb0\xe9\x80\x9f * \xe8\x89\xba\xe6\x9c\xaf\xe5\x8a\xa0\xe5\xb7\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbb\xb6\xe8\xbf\x9f\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89- \xe5\xb0\x84\xe7\xba\xbf\xe6\x89\xbe\xe6\x9c\x80\xe7\x9f\xad(\xe7\x9b\xb8\xe6\x9c\xba->\xe5\x8f\x8d\xe5\xb0\x84\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x8d\xe7\xbd\xae + \xe5\x8f\x91\xe7\x94\x9f\xe6\xba\x90->\xe5\x8f\x8d\xe5\xb0\x84\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x8d\xe7\xbd\xae) / \xe5\xa3\xb0\xe9\x80\x9f * \xe8\x89\xba\xe6\x9c\xaf\xe5\x8a\xa0\xe5\xb7\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Decay_MetaData[] = {
		{ "Category", "Reverb Parameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\xb0\xe5\x87\x8f""60dB\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89- \xe5\xa3\xb0\xe9\x9f\xb3\xe7\x95\x99\xe5\xad\x98\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c\xe6\x88\xbf\xe9\x97\xb4\xe5\xb0\xba\xe5\xaf\xb8*\xe6\x9d\x90\xe8\xb4\xa8\xe7\xa1\xac\xe5\xba\xa6 0.161 * V / A\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\xb0\xe5\x87\x8f""60dB\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89- \xe5\xa3\xb0\xe9\x9f\xb3\xe7\x95\x99\xe5\xad\x98\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x8c\xe6\x88\xbf\xe9\x97\xb4\xe5\xb0\xba\xe5\xaf\xb8*\xe6\x9d\x90\xe8\xb4\xa8\xe7\xa1\xac\xe5\xba\xa6 0.161 * V / A" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "Category", "Reverb Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xaf\x86\xe5\xba\xa6 - \xe5\x91\xbd\xe4\xb8\xad\xe7\x82\xb9\xe6\x96\xb9\xe5\xb7\xae*\xe5\x8f\x8d\xe5\xb0\x84\xe4\xbd\x93\xe6\x95\xb0\xe9\x87\x8f\xef\xbc\x88\xe5\x91\xbd\xe4\xb8\xad\xe7\x8e\x87\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\x86\xe5\xba\xa6 - \xe5\x91\xbd\xe4\xb8\xad\xe7\x82\xb9\xe6\x96\xb9\xe5\xb7\xae*\xe5\x8f\x8d\xe5\xb0\x84\xe4\xbd\x93\xe6\x95\xb0\xe9\x87\x8f\xef\xbc\x88\xe5\x91\xbd\xe4\xb8\xad\xe7\x8e\x87\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[] = {
		{ "Category", "Reverb Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\xa9\xe6\x95\xa3 - \xe6\x88\xbf\xe9\x97\xb4\xe8\xa1\xa8\xe9\x9d\xa2\xe7\x9a\x84\xe4\xb8\x8d\xe8\xa7\x84\xe5\x88\x99\xe6\x80\xa7\xe3\x80\x82\xe9\xab\x98\xe6\x89\xa9\xe6\x95\xa3=\xe5\xa3\xb0\xe9\x9f\xb3\xe5\x9d\x87\xe5\x8c\x80\xe6\x95\xa3\xe5\xb0\x84\xef\xbc\x88\xe6\xa8\xa1\xe7\xb3\x8a\xe5\xb9\xb3\xe6\xbb\x91\xef\xbc\x89\xef\xbc\x8c\xe4\xbd\x8e\xe6\x89\xa9\xe6\x95\xa3=\xe5\x8f\x8d\xe5\xb0\x84\xe9\x9b\x86\xe4\xb8\xad\xef\xbc\x88\xe5\x9b\x9e\xe5\xa3\xb0\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xa9\xe6\x95\xa3 - \xe6\x88\xbf\xe9\x97\xb4\xe8\xa1\xa8\xe9\x9d\xa2\xe7\x9a\x84\xe4\xb8\x8d\xe8\xa7\x84\xe5\x88\x99\xe6\x80\xa7\xe3\x80\x82\xe9\xab\x98\xe6\x89\xa9\xe6\x95\xa3=\xe5\xa3\xb0\xe9\x9f\xb3\xe5\x9d\x87\xe5\x8c\x80\xe6\x95\xa3\xe5\xb0\x84\xef\xbc\x88\xe6\xa8\xa1\xe7\xb3\x8a\xe5\xb9\xb3\xe6\xbb\x91\xef\xbc\x89\xef\xbc\x8c\xe4\xbd\x8e\xe6\x89\xa9\xe6\x95\xa3=\xe5\x8f\x8d\xe5\xb0\x84\xe9\x9b\x86\xe4\xb8\xad\xef\xbc\x88\xe5\x9b\x9e\xe5\xa3\xb0\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dampening_MetaData[] = {
		{ "Category", "Reverb Parameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x98\xbb\xe5\xb0\xbc - \xe9\xab\x98\xe9\xa2\x91\xe6\x9d\x90\xe8\xb4\xa8\xe5\x90\xb8\xe6\x94\xb6\xef\xbc\x88\xe5\x9c\xb0\xe6\xaf\xaf\xe3\x80\x81\xe7\xaa\x97\xe5\xb8\x98\xe7\xad\x89\xe8\xbd\xaf\xe6\x9d\x90\xe8\xb4\xa8\xe6\x9b\xb4\xe5\xbf\xab\xe5\x90\xb8\xe6\x94\xb6\xe9\xab\x98\xe9\xa2\x91\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/IM_AcousticTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\xbb\xe5\xb0\xbc - \xe9\xab\x98\xe9\xa2\x91\xe6\x9d\x90\xe8\xb4\xa8\xe5\x90\xb8\xe6\x94\xb6\xef\xbc\x88\xe5\x9c\xb0\xe6\xaf\xaf\xe3\x80\x81\xe7\xaa\x97\xe5\xb8\x98\xe7\xad\x89\xe8\xbd\xaf\xe6\x9d\x90\xe8\xb4\xa8\xe6\x9b\xb4\xe5\xbf\xab\xe5\x90\xb8\xe6\x94\xb6\xe9\xab\x98\xe9\xa2\x91\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wet;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Decay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Diffusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Dampening;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIM_AudioReverbParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Wet = { "Wet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioReverbParameters, Wet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wet_MetaData), NewProp_Wet_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioReverbParameters, Delay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delay_MetaData), NewProp_Delay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Decay = { "Decay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioReverbParameters, Decay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Decay_MetaData), NewProp_Decay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioReverbParameters, Density), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioReverbParameters, Diffusion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diffusion_MetaData), NewProp_Diffusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Dampening = { "Dampening", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIM_AudioReverbParameters, Dampening), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dampening_MetaData), NewProp_Dampening_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Wet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Decay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Diffusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewProp_Dampening,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonAcousticField,
	nullptr,
	&NewStructOps,
	"IM_AudioReverbParameters",
	Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::PropPointers),
	sizeof(FIM_AudioReverbParameters),
	alignof(FIM_AudioReverbParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioReverbParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FIM_AudioReverbParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIM_AudioReverbParameters.InnerSingleton, Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIM_AudioReverbParameters.InnerSingleton;
}
// ********** End ScriptStruct FIM_AudioReverbParameters *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IM_AcousticTypes_h__Script_IceMoonAcousticField_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIM_AudioMaterialResponse::StaticStruct, Z_Construct_UScriptStruct_FIM_AudioMaterialResponse_Statics::NewStructOps, TEXT("IM_AudioMaterialResponse"), &Z_Registration_Info_UScriptStruct_FIM_AudioMaterialResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIM_AudioMaterialResponse), 3352835403U) },
		{ FIM_AudioRayResponse::StaticStruct, Z_Construct_UScriptStruct_FIM_AudioRayResponse_Statics::NewStructOps, TEXT("IM_AudioRayResponse"), &Z_Registration_Info_UScriptStruct_FIM_AudioRayResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIM_AudioRayResponse), 2437146000U) },
		{ FIM_GridAudioCell::StaticStruct, Z_Construct_UScriptStruct_FIM_GridAudioCell_Statics::NewStructOps, TEXT("IM_GridAudioCell"), &Z_Registration_Info_UScriptStruct_FIM_GridAudioCell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIM_GridAudioCell), 1938957139U) },
		{ FIM_WetCalculationParameters::StaticStruct, Z_Construct_UScriptStruct_FIM_WetCalculationParameters_Statics::NewStructOps, TEXT("IM_WetCalculationParameters"), &Z_Registration_Info_UScriptStruct_FIM_WetCalculationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIM_WetCalculationParameters), 3409948405U) },
		{ FIM_AudioReverbParameters::StaticStruct, Z_Construct_UScriptStruct_FIM_AudioReverbParameters_Statics::NewStructOps, TEXT("IM_AudioReverbParameters"), &Z_Registration_Info_UScriptStruct_FIM_AudioReverbParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIM_AudioReverbParameters), 1103105627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IM_AcousticTypes_h__Script_IceMoonAcousticField_1239392888(TEXT("/Script/IceMoonAcousticField"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IM_AcousticTypes_h__Script_IceMoonAcousticField_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IM_AcousticTypes_h__Script_IceMoonAcousticField_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
