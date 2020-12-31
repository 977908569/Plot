#pragma once
#include "PlotItem.h"
#include "PlotItem_SetCameraArgs.generated.h"

UCLASS(BlueprintType, meta = (DisplayName = "设置镜头参数"))
class PLOT_API UPlotItem_SetCameraArgs :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "参数", DesignerRebuild))
		FPlotCameraInfo Args;
public:
	UPlotItem_SetCameraArgs();
	virtual void Start() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	void UpdateCamera() const;
#endif
};


