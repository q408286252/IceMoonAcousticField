// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMAcousticFieldActor.h"

#ifdef ICEMOONACOUSTICFIELD_IMAcousticFieldActor_generated_h
#error "IMAcousticFieldActor.generated.h already included, missing '#pragma once' in IMAcousticFieldActor.h"
#endif
#define ICEMOONACOUSTICFIELD_IMAcousticFieldActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AIceMoonAcousticField;
class UObject;
class UPhysicalMaterial;
struct FHitResult;
struct FIM_AudioMaterialResponse;
struct FIM_AudioReverbParameters;
struct FIM_GridAudioCell;

// ********** Begin Class AIceMoonAcousticField ****************************************************
#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAudioResponseForMaterial); \
	DECLARE_FUNCTION(execInvalidateAcousticRegion); \
	DECLARE_FUNCTION(execAddProbeFromHitResultOnlayWorldStatic); \
	DECLARE_FUNCTION(execGetAcousticFieldExtentCells); \
	DECLARE_FUNCTION(execClearSmoothQueryCache); \
	DECLARE_FUNCTION(execQueryAcousticFieldSmooth); \
	DECLARE_FUNCTION(execQueryAcousticField); \
	DECLARE_FUNCTION(execAsyncFireProbes); \
	DECLARE_FUNCTION(execGetAcousticFieldActor);


ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_AIceMoonAcousticField_NoRegister();

#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIceMoonAcousticField(); \
	friend struct Z_Construct_UClass_AIceMoonAcousticField_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ICEMOONACOUSTICFIELD_API UClass* Z_Construct_UClass_AIceMoonAcousticField_NoRegister(); \
public: \
	DECLARE_CLASS2(AIceMoonAcousticField, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IceMoonAcousticField"), Z_Construct_UClass_AIceMoonAcousticField_NoRegister) \
	DECLARE_SERIALIZER(AIceMoonAcousticField)


#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIceMoonAcousticField(AIceMoonAcousticField&&) = delete; \
	AIceMoonAcousticField(const AIceMoonAcousticField&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIceMoonAcousticField); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIceMoonAcousticField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIceMoonAcousticField) \
	NO_API virtual ~AIceMoonAcousticField();


#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h_55_PROLOG
#define FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h_58_INCLASS_NO_PURE_DECLS \
	FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIceMoonAcousticField;

// ********** End Class AIceMoonAcousticField ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BaiduSyncdisk_project_Test550_Plugins_IceMoonAcousticField_Source_IceMoonAcousticField_Public_IMAcousticFieldActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
