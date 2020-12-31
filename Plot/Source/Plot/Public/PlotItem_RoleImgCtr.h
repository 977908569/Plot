#pragma once
#include "PlotItem.h"
#include "PlotItem_RoleImgCtr.generated.h"

UCLASS(BlueprintType, meta = (DisplayName = "角色立绘控制"))
class PLOT_API UPlotItem_RoleImgCtr :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "立绘位置"))
		int32 Pos = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "立绘资源", AllowedClasses = "Texture2D"))
		FSoftObjectPath ImgPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (DisplayName = "是否隐藏"))
		uint8 bHide : 1;
public:
	UPlotItem_RoleImgCtr();
	virtual void Start() override;

#if WITH_EDITOR
	virtual FText GetPaletteCategory() override {
		return  FText::FromString(TEXT("角色"));
	}
#endif

};


