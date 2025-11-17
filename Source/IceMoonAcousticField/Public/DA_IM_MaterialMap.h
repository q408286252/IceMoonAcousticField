// AcousticIdentifier/Source/IceMoonAcousticField/Public/DA_IM_MaterialMap.h

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IM_AcousticTypes.h"
#include "DA_IM_MaterialMap.generated.h"

/**
 * 数据资产，用于将物理材质映射到具体的音频响应参数。
 * 音效设计师可以在编辑器中创建和配置此资产。
 */
UCLASS(BlueprintType)
class ICEMOONACOUSTICFIELD_API UDA_IM_MaterialMap : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	/** 映射表：将每个物理材质关联到一个音频响应配置 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Acoustic Material Mapping")
	TMap<TObjectPtr<class UPhysicalMaterial>, FIM_AudioMaterialResponse> MaterialMap;

	/** fallback  当射线没有命中任何已配置的物理材质时，使用的默认响应 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Acoustic Material Mapping",
		meta=(DisplayName="Default Response (Open Air)"))
	FIM_AudioMaterialResponse Fallback_MaterialResponse;
};
