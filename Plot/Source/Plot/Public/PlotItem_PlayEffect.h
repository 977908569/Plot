#pragma once
#include "PlotItem.h"
#include "Particles/ParticleSystemComponent.h"
#include "PlotItem_PlayEffect.generated.h"

UCLASS(BlueprintType, meta = (DisplayName = "播放特效"))
class PLOT_API UPlotItem_PlayEffect :public UPlotItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "特效名称"))
		FString EffectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "特效资源", AllowedClasses = "ParticleSystem", DesignerRebuild))
		FSoftObjectPath Effect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "位置", DesignerRebuild))
		FVector Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "旋转", DesignerRebuild))
		FRotator Rotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "隐藏"))
		bool bHide;
public:
	UPlotItem_PlayEffect();
	virtual void Start() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
private:
	TWeakObjectPtr<class UParticleSystemComponent> ParticleSyetem;
};


