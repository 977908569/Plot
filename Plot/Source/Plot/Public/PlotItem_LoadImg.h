#pragma once
#include "PlotItem.h"
#include "PlotItem_LoadImg.generated.h"

UCLASS(BlueprintType, meta = (DisplayName = "加载背景图片"))
class PLOT_API UPlotItem_LoadImg :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "图片资源", AllowedClasses = "Texture2D"))
		FSoftObjectPath ImgPath;
public:
	UPlotItem_LoadImg();
	virtual void Start() override;
};


