#include "PlotItem_SetCameraArgs.h"
#include "Plot.h"

UPlotItem_SetCameraArgs::UPlotItem_SetCameraArgs() {
	bWait = false;
}

void UPlotItem_SetCameraArgs::Start()
{
#if WITH_EDITOR
	UpdateCamera();
	GetPlot()->OnCameraPosChange.Broadcast(Args);
#else
	if (auto Widget = GetWidget())
	{
		Widget->SetCameraArgs(Args);
	}
#endif
	Super::Start();
}

#if WITH_EDITOR
void UPlotItem_SetCameraArgs::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
	Super::PostEditChangeProperty(PropertyChangedEvent);
	UpdateCamera();
}

void UPlotItem_SetCameraArgs::UpdateCamera() const
{
	if (GetWorld())
	{
		APlotCharacter* Character = Cast<APlotCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
		if (Character)
		{
			Character->SetCameraArgs(Args);
		}
	}
}
#endif

