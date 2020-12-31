#include "PlotItem_PlayEffect.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"


UPlotItem_PlayEffect::UPlotItem_PlayEffect() {
	bWait = false;
}

void UPlotItem_PlayEffect::Start()
{
	if (auto MyPlot = GetPlot()) {
		auto& PlotSpawnParticle = MyPlot->PlotSpawnParticle;
		if (PlotSpawnParticle.Contains(EffectName)) {
			ParticleSyetem = PlotSpawnParticle[EffectName];
			if (ParticleSyetem.IsValid()) {
				ParticleSyetem->SetVisibility(!bHide);
			}
			else {

				PlotSpawnParticle.Remove(EffectName);
			}
		}
		else {
			if (Effect.IsValid()) {
				UParticleSystem* LoadParticle = Cast<UParticleSystem>(Effect.TryLoad());
				if (LoadParticle) {
					const FTransform SpawnTransform(Rotator.Quaternion(), Position);
					const auto NewParticle = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), LoadParticle, SpawnTransform);
					if (NewParticle) {
						ParticleSyetem = NewParticle;
						PlotSpawnParticle.Add(EffectName, NewParticle);
					}
				}
			}
		}
	}
	Super::Start();
}

#if WITH_EDITOR
void UPlotItem_PlayEffect::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (ParticleSyetem.IsValid()) {
		ParticleSyetem->SetWorldLocation(Position);
		ParticleSyetem->SetWorldRotation(Rotator);
	}
}
#endif


