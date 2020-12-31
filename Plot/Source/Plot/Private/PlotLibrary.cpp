#include "PlotLibrary.h"
#include "EngineUtils.h"
#include "PlotItem_RoleControl.h"
#include "Kismet/KismetSystemLibrary.h"

APlotRoleActor* UPlotLibrary::FindRoleByName(UObject* WorldContextObject, const FString& InName)
{
	UWorld* World = WorldContextObject->GetWorld();
	if (World == nullptr) return nullptr;

	for (TActorIterator<APlotRoleActor> It(World); It; ++It)
	{
		APlotRoleActor* Actor = *It;
		if (Actor && UKismetSystemLibrary::GetObjectName(Actor) == InName)
		{
			return Actor;
		}
	}
	return nullptr;
}

FPlotRoleInfo& UPlotLibrary::GetPlotRoleConfig(int32 InID) {
	return FPlotRoleInfo::Get(InID);
}

FPlotName2Img& UPlotLibrary::GetPlotNameConfig(const FString& InKey)
{
	return FPlotName2Img::Get(InKey);
}
