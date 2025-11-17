// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DA_IM_MaterialMap.h"
#include "IM_AcousticTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDA_IM_MaterialMap() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_UDA_IM_MaterialMap();
ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_UDA_IM_MaterialMap_NoRegister();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioMaterialResponse();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_IceMoonAcousticField();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDA_IM_MaterialMap *******************************************************
void UDA_IM_MaterialMap::StaticRegisterNativesUDA_IM_MaterialMap()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDA_IM_MaterialMap;
UClass* UDA_IM_MaterialMap::GetPrivateStaticClass()
{
	using TClass = UDA_IM_MaterialMap;
	if (!Z_Registration_Info_UClass_UDA_IM_MaterialMap.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DA_IM_MaterialMap"),
			Z_Registration_Info_UClass_UDA_IM_MaterialMap.InnerSingleton,
			StaticRegisterNativesUDA_IM_MaterialMap,
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
	return Z_Registration_Info_UClass_UDA_IM_MaterialMap.InnerSingleton;
}
UClass* Z_Construct_UClass_UDA_IM_MaterialMap_NoRegister()
{
	return UDA_IM_MaterialMap::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDA_IM_MaterialMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\xb0\x86\xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8\xe6\x98\xa0\xe5\xb0\x84\xe5\x88\xb0\xe5\x85\xb7\xe4\xbd\x93\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe5\x93\x8d\xe5\xba\x94\xe5\x8f\x82\xe6\x95\xb0\xe3\x80\x82\n * \xe9\x9f\xb3\xe6\x95\x88\xe8\xae\xbe\xe8\xae\xa1\xe5\xb8\x88\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe5\x92\x8c\xe9\x85\x8d\xe7\xbd\xae\xe6\xad\xa4\xe8\xb5\x84\xe4\xba\xa7\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "DA_IM_MaterialMap.h" },
		{ "ModuleRelativePath", "Public/DA_IM_MaterialMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\xb0\x86\xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8\xe6\x98\xa0\xe5\xb0\x84\xe5\x88\xb0\xe5\x85\xb7\xe4\xbd\x93\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe5\x93\x8d\xe5\xba\x94\xe5\x8f\x82\xe6\x95\xb0\xe3\x80\x82\n\xe9\x9f\xb3\xe6\x95\x88\xe8\xae\xbe\xe8\xae\xa1\xe5\xb8\x88\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe5\x88\x9b\xe5\xbb\xba\xe5\x92\x8c\xe9\x85\x8d\xe7\xbd\xae\xe6\xad\xa4\xe8\xb5\x84\xe4\xba\xa7\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMap_MetaData[] = {
		{ "Category", "Acoustic Material Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x98\xa0\xe5\xb0\x84\xe8\xa1\xa8\xef\xbc\x9a\xe5\xb0\x86\xe6\xaf\x8f\xe4\xb8\xaa\xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8\xe5\x85\xb3\xe8\x81\x94\xe5\x88\xb0\xe4\xb8\x80\xe4\xb8\xaa\xe9\x9f\xb3\xe9\xa2\x91\xe5\x93\x8d\xe5\xba\x94\xe9\x85\x8d\xe7\xbd\xae */" },
#endif
		{ "ModuleRelativePath", "Public/DA_IM_MaterialMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xa0\xe5\xb0\x84\xe8\xa1\xa8\xef\xbc\x9a\xe5\xb0\x86\xe6\xaf\x8f\xe4\xb8\xaa\xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8\xe5\x85\xb3\xe8\x81\x94\xe5\x88\xb0\xe4\xb8\x80\xe4\xb8\xaa\xe9\x9f\xb3\xe9\xa2\x91\xe5\x93\x8d\xe5\xba\x94\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fallback_MaterialResponse_MetaData[] = {
		{ "Category", "Acoustic Material Mapping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** fallback  \xe5\xbd\x93\xe5\xb0\x84\xe7\xba\xbf\xe6\xb2\xa1\xe6\x9c\x89\xe5\x91\xbd\xe4\xb8\xad\xe4\xbb\xbb\xe4\xbd\x95\xe5\xb7\xb2\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8\xe6\x97\xb6\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe9\xbb\x98\xe8\xae\xa4\xe5\x93\x8d\xe5\xba\x94 */" },
#endif
		{ "DisplayName", "Default Response (Open Air)" },
		{ "ModuleRelativePath", "Public/DA_IM_MaterialMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "fallback  \xe5\xbd\x93\xe5\xb0\x84\xe7\xba\xbf\xe6\xb2\xa1\xe6\x9c\x89\xe5\x91\xbd\xe4\xb8\xad\xe4\xbb\xbb\xe4\xbd\x95\xe5\xb7\xb2\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8\xe6\x97\xb6\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe9\xbb\x98\xe8\xae\xa4\xe5\x93\x8d\xe5\xba\x94" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fallback_MaterialResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_IM_MaterialMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDA_IM_MaterialMap_Statics::NewProp_MaterialMap_ValueProp = { "MaterialMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIM_AudioMaterialResponse, METADATA_PARAMS(0, nullptr) }; // 3352835403
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDA_IM_MaterialMap_Statics::NewProp_MaterialMap_Key_KeyProp = { "MaterialMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDA_IM_MaterialMap_Statics::NewProp_MaterialMap = { "MaterialMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_IM_MaterialMap, MaterialMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialMap_MetaData), NewProp_MaterialMap_MetaData) }; // 3352835403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDA_IM_MaterialMap_Statics::NewProp_Fallback_MaterialResponse = { "Fallback_MaterialResponse", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_IM_MaterialMap, Fallback_MaterialResponse), Z_Construct_UScriptStruct_FIM_AudioMaterialResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fallback_MaterialResponse_MetaData), NewProp_Fallback_MaterialResponse_MetaData) }; // 3352835403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_IM_MaterialMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_IM_MaterialMap_Statics::NewProp_MaterialMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_IM_MaterialMap_Statics::NewProp_MaterialMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_IM_MaterialMap_Statics::NewProp_MaterialMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_IM_MaterialMap_Statics::NewProp_Fallback_MaterialResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_IM_MaterialMap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDA_IM_MaterialMap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonAcousticField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_IM_MaterialMap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_IM_MaterialMap_Statics::ClassParams = {
	&UDA_IM_MaterialMap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDA_IM_MaterialMap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDA_IM_MaterialMap_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_IM_MaterialMap_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_IM_MaterialMap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDA_IM_MaterialMap()
{
	if (!Z_Registration_Info_UClass_UDA_IM_MaterialMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_IM_MaterialMap.OuterSingleton, Z_Construct_UClass_UDA_IM_MaterialMap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDA_IM_MaterialMap.OuterSingleton;
}
UDA_IM_MaterialMap::UDA_IM_MaterialMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_IM_MaterialMap);
UDA_IM_MaterialMap::~UDA_IM_MaterialMap() {}
// ********** End Class UDA_IM_MaterialMap *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_DA_IM_MaterialMap_h__Script_IceMoonAcousticField_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDA_IM_MaterialMap, UDA_IM_MaterialMap::StaticClass, TEXT("UDA_IM_MaterialMap"), &Z_Registration_Info_UClass_UDA_IM_MaterialMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_IM_MaterialMap), 3755304956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_DA_IM_MaterialMap_h__Script_IceMoonAcousticField_3091984369(TEXT("/Script/IceMoonAcousticField"),
	Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_DA_IM_MaterialMap_h__Script_IceMoonAcousticField_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_DA_IM_MaterialMap_h__Script_IceMoonAcousticField_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
