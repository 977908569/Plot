#include "PlotItem_RoleControl.h"
#include "Plot.h"


APlotRoleActor::APlotRoleActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
}

void APlotRoleActor::SetData(const FPlotRoleControlArgs& InArgs)
{
	//Check Name//
	if (InArgs.ShowName.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT(" name is empty"))
	}
	OnUpdate(InArgs);
	UpdatePosAndRot(InArgs);
}

void APlotRoleActor::UpdatePosAndRot(const FPlotRoleControlArgs& InArgs) {
	SetActorLocation(InArgs.Position);
	SetActorRotation(InArgs.Rotator);
}

UPlotItem_RoleControl::UPlotItem_RoleControl() {

}

void UPlotItem_RoleControl::Start()
{
	const FString ShowName = Args.ShowName;
	if (auto MyPlot = GetPlot()) {
		auto& SpawnRole = MyPlot->PlotSpawnRole;
		if (SpawnRole.Contains(ShowName)) {
			Role = SpawnRole[ShowName].Get();
			Role->SetActorHiddenInGame(Args.bHide);
			if (!Args.bHide) {
				Role->PlayAnim(Args.Anim, Args.LoopNum == 0);
			}
			Role->UpdatePosAndRot(Args);
		}
		else {
			const FActorSpawnParameters Parameters;
			UClass* RoleClass = LoadClass<APlotRoleActor>(GetTransientPackage(), TEXT("/Game/Blueprints/Plot/Assets/PlotRole.PlotRole_C"));
			Role = GetWorld()->SpawnActor<APlotRoleActor>(RoleClass, Parameters);
			SpawnRole.Add(ShowName, Role);
			Role->SetData(Args);
		}
		if (Role.IsValid()) {
			if (bWait) {
				if (!Role->OnPlayAnimEnd.IsAlreadyBound(this, &UPlotItem_RoleControl::OnAnimEnd)) {
					Role->OnPlayAnimEnd.AddDynamic(this, &UPlotItem_RoleControl::OnAnimEnd);
				}
			}
			else {
				if (Role->OnPlayAnimEnd.IsBound()) {
					Role->OnPlayAnimEnd.RemoveAll(this);
				}
			}
		}
	}
	Super::Start();
}

void UPlotItem_RoleControl::Jump() {
	Super::Jump();
	if (Role.IsValid()) {
		Role->Jump();
	}
}

void UPlotItem_RoleControl::OnAnimEnd() {
	if (!bWait) return;
	End();
}
#if WITH_EDITOR
void UPlotItem_RoleControl::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (Role.IsValid()) {
		Role->SetActorLocation(Args.Position);
		Role->SetActorRotation(Args.Rotator);
	}
}

void UPlotItem_RoleControl::ResetPos()
{
	if (Role.IsValid())
	{
		const FVector& Pos = GetPlot()->CameraObj->CameraArgs.Postion;
		const FVector NewPos = Pos + GetPlot()->CameraObj->CameraArgs.Direction * 300;
		Role->SetActorLocation(NewPos);
	}
}

void UPlotItem_RoleControl::UpdatePos() {
	if (Role.IsValid())
	{
		Args.Position = Role->GetActorLocation();
		Args.Rotator = Role->GetActorRotation();
	}
}

#endif

