#pragma once
#include "PlotItem.h"
#include "PlotItem_Spine.generated.h"

UCLASS(BlueprintType, meta = (DisplayName = "Spine"))
class PLOT_API UPlotItem_Spine :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "位置"))
		int32 Pos = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "Atlas", AllowedClasses = "SpineAtlasAsset"))
		FSoftObjectPath Atlas;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "Skeleton", AllowedClasses = "SpineSkeletonDataAsset"))
		FSoftObjectPath Skeleton;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "动作"))
		FString Anim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "是否循环"))
		bool bLoop = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "是否隐藏"))
		uint8 bHide : 1;
public:
	UPlotItem_Spine();
	virtual void Start() override;

#if WITH_EDITOR
	virtual FText GetPaletteCategory() override {
		return  FText::FromString(TEXT("角色"));
	}
#endif

};


