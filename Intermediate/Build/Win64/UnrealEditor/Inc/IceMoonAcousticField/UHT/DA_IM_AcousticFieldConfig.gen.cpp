// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DA_IM_AcousticFieldConfig.h"
#include "IM_AcousticTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDA_IM_AcousticFieldConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_UDA_IM_AcousticFieldConfig();
ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_UDA_IM_AcousticFieldConfig_NoRegister();
ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_UDA_IM_MaterialMap_NoRegister();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_AudioReverbParameters();
ICEMOONACOUSTICFIELD_API UScriptStruct* Z_Construct_UScriptStruct_FIM_WetCalculationParameters();
UPackage* Z_Construct_UPackage__Script_IceMoonAcousticField();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDA_IM_AcousticFieldConfig ***********************************************
void UDA_IM_AcousticFieldConfig::StaticRegisterNativesUDA_IM_AcousticFieldConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDA_IM_AcousticFieldConfig;
UClass* UDA_IM_AcousticFieldConfig::GetPrivateStaticClass()
{
	using TClass = UDA_IM_AcousticFieldConfig;
	if (!Z_Registration_Info_UClass_UDA_IM_AcousticFieldConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DA_IM_AcousticFieldConfig"),
			Z_Registration_Info_UClass_UDA_IM_AcousticFieldConfig.InnerSingleton,
			StaticRegisterNativesUDA_IM_AcousticFieldConfig,
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
	return Z_Registration_Info_UClass_UDA_IM_AcousticFieldConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UDA_IM_AcousticFieldConfig_NoRegister()
{
	return UDA_IM_AcousticFieldConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\xa3\xb0\xe5\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe9\xa2\x84\xe8\xae\xbe - \xe5\xae\x9a\xe4\xb9\x89\xe5\x9c\xba\xe6\x99\xaf\xe7\x89\xb9\xe5\xae\x9a\xe7\x9a\x84\xe5\xa3\xb0\xe5\xad\xa6\xe5\x8f\x82\xe6\x95\xb0\n * \xe5\x8c\x85\xe6\x8b\xac\xef\xbc\x9a\xe9\xbb\x98\xe8\xae\xa4\xe6\xb7\xb7\xe5\x93\x8d\xe3\x80\x81Wet\xe8\xae\xa1\xe7\xae\x97\xe5\x8f\x82\xe6\x95\xb0\xe7\xad\x89\n * \xe5\x8f\xaf\xe5\x88\x9b\xe5\xbb\xba\xe5\xa4\x9a\xe4\xb8\xaa\xe9\xa2\x84\xe8\xae\xbe\xef\xbc\x9a\xe5\xae\xa4\xe5\x86\x85\xe3\x80\x81\xe5\xae\xa4\xe5\xa4\x96\xe3\x80\x81\xe5\x9c\xb0\xe4\xb8\x8b\xe5\x9f\x8e\xe7\xad\x89\xef\xbc\x8c\xe4\xbe\x9b\xe4\xb8\x8d\xe5\x90\x8c\xe5\x85\xb3\xe5\x8d\xa1\xe4\xbd\xbf\xe7\x94\xa8\n */" },
#endif
		{ "IncludePath", "DA_IM_AcousticFieldConfig.h" },
		{ "ModuleRelativePath", "Public/DA_IM_AcousticFieldConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa3\xb0\xe5\x9c\xba\xe9\x85\x8d\xe7\xbd\xae\xe9\xa2\x84\xe8\xae\xbe - \xe5\xae\x9a\xe4\xb9\x89\xe5\x9c\xba\xe6\x99\xaf\xe7\x89\xb9\xe5\xae\x9a\xe7\x9a\x84\xe5\xa3\xb0\xe5\xad\xa6\xe5\x8f\x82\xe6\x95\xb0\n\xe5\x8c\x85\xe6\x8b\xac\xef\xbc\x9a\xe9\xbb\x98\xe8\xae\xa4\xe6\xb7\xb7\xe5\x93\x8d\xe3\x80\x81Wet\xe8\xae\xa1\xe7\xae\x97\xe5\x8f\x82\xe6\x95\xb0\xe7\xad\x89\n\xe5\x8f\xaf\xe5\x88\x9b\xe5\xbb\xba\xe5\xa4\x9a\xe4\xb8\xaa\xe9\xa2\x84\xe8\xae\xbe\xef\xbc\x9a\xe5\xae\xa4\xe5\x86\x85\xe3\x80\x81\xe5\xae\xa4\xe5\xa4\x96\xe3\x80\x81\xe5\x9c\xb0\xe4\xb8\x8b\xe5\x9f\x8e\xe7\xad\x89\xef\xbc\x8c\xe4\xbe\x9b\xe4\xb8\x8d\xe5\x90\x8c\xe5\x85\xb3\xe5\x8d\xa1\xe4\xbd\xbf\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLibrary_MetaData[] = {
		{ "Category", "1. Material Library" },
		{ "ModuleRelativePath", "Public/DA_IM_AcousticFieldConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe7\x89\xa9\xe7\x90\x86\xe6\x9d\x90\xe8\xb4\xa8\xe5\x88\xb0\xe9\x9f\xb3\xe9\xa2\x91\xe5\x93\x8d\xe5\xba\x94\xe7\x9a\x84\xe6\x98\xa0\xe5\xb0\x84\xe5\xba\x93\xef\xbc\x88\xe5\x8f\xaf\xe9\x80\x89\xef\xbc\x8c\xe7\x95\x99\xe7\xa9\xba\xe5\x88\x99\xe4\xbd\xbf\xe7\x94\xa8\xe5\x85\xa8\xe5\xb1\x80\xe9\xbb\x98\xe8\xae\xa4\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbParameters_MetaData[] = {
		{ "Category", "2. Default Reverb" },
		{ "ModuleRelativePath", "Public/DA_IM_AcousticFieldConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe6\x9f\xa5\xe8\xaf\xa2\xe5\xa4\xb1\xe8\xb4\xa5\xe6\x88\x96\xe6\x97\xa0\xe6\x95\xb0\xe6\x8d\xae\xe6\x97\xb6\xe7\x9a\x84\xe9\xbb\x98\xe8\xae\xa4\xe6\xb7\xb7\xe5\x93\x8d\xef\xbc\x88\xe4\xbe\x8b\xe5\xa6\x82\xe5\xae\xa4\xe5\xa4\x96\xe7\x8e\xaf\xe5\xa2\x83\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WetCalculationParameters_MetaData[] = {
		{ "Category", "3. Wet Calculation" },
		{ "ModuleRelativePath", "Public/DA_IM_AcousticFieldConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Wet\xe8\xae\xa1\xe7\xae\x97\xe5\x8f\x82\xe6\x95\xb0\xef\xbc\x88\xe5\xb0\x81\xe9\x97\xad\xe5\xba\xa6\xe3\x80\x81\xe5\x91\xbd\xe4\xb8\xad\xe7\x8e\x87\xe3\x80\x81\xe9\x9d\xa0\xe5\xa2\x99\xe6\xa3\x80\xe6\xb5\x8b\xe7\xad\x89\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[] = {
		{ "Category", "4. Metadata" },
		{ "ModuleRelativePath", "Public/DA_IM_AcousticFieldConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe6\xad\xa4\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0/\xe7\x94\xa8\xe9\x80\x94\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigDescription_MetaData[] = {
		{ "Category", "4. Metadata" },
		{ "ModuleRelativePath", "Public/DA_IM_AcousticFieldConfig.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe8\xaf\xa6\xe7\xbb\x86\xe8\xaf\xb4\xe6\x98\x8e" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialLibrary;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultReverbParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WetCalculationParameters;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_IM_AcousticFieldConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_MaterialLibrary = { "MaterialLibrary", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_IM_AcousticFieldConfig, MaterialLibrary), Z_Construct_UClass_UDA_IM_MaterialMap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialLibrary_MetaData), NewProp_MaterialLibrary_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_DefaultReverbParameters = { "DefaultReverbParameters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_IM_AcousticFieldConfig, DefaultReverbParameters), Z_Construct_UScriptStruct_FIM_AudioReverbParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultReverbParameters_MetaData), NewProp_DefaultReverbParameters_MetaData) }; // 1103105627
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_WetCalculationParameters = { "WetCalculationParameters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_IM_AcousticFieldConfig, WetCalculationParameters), Z_Construct_UScriptStruct_FIM_WetCalculationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WetCalculationParameters_MetaData), NewProp_WetCalculationParameters_MetaData) }; // 3409948405
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_IM_AcousticFieldConfig, ConfigName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigName_MetaData), NewProp_ConfigName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_ConfigDescription = { "ConfigDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_IM_AcousticFieldConfig, ConfigDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigDescription_MetaData), NewProp_ConfigDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_MaterialLibrary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_DefaultReverbParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_WetCalculationParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_ConfigName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::NewProp_ConfigDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_IceMoonAcousticField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::ClassParams = {
	&UDA_IM_AcousticFieldConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDA_IM_AcousticFieldConfig()
{
	if (!Z_Registration_Info_UClass_UDA_IM_AcousticFieldConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_IM_AcousticFieldConfig.OuterSingleton, Z_Construct_UClass_UDA_IM_AcousticFieldConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDA_IM_AcousticFieldConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_IM_AcousticFieldConfig);
UDA_IM_AcousticFieldConfig::~UDA_IM_AcousticFieldConfig() {}
// ********** End Class UDA_IM_AcousticFieldConfig *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_DA_IM_AcousticFieldConfig_h__Script_IceMoonAcousticField_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDA_IM_AcousticFieldConfig, UDA_IM_AcousticFieldConfig::StaticClass, TEXT("UDA_IM_AcousticFieldConfig"), &Z_Registration_Info_UClass_UDA_IM_AcousticFieldConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_IM_AcousticFieldConfig), 1166256213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_DA_IM_AcousticFieldConfig_h__Script_IceMoonAcousticField_1182445076(TEXT("/Script/IceMoonAcousticField"),
	Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_DA_IM_AcousticFieldConfig_h__Script_IceMoonAcousticField_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_DA_IM_AcousticFieldConfig_h__Script_IceMoonAcousticField_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
