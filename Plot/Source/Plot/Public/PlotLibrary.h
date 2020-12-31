#pragma once
#include "PlotEnum.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlotLibrary.generated.h"

class APlotRoleActor;

UCLASS()
class PLOT_API UPlotLibrary : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Meta = (WorldContext = "WorldContextObject"))
	static APlotRoleActor* FindRoleByName(UObject* WorldContextObject, const FString& InName);

  UFUNCTION(BlueprintCallable)
	  static  FPlotRoleInfo& GetPlotRoleConfig(int32 InID);

  UFUNCTION(BlueprintCallable)
	  static FPlotName2Img& GetPlotNameConfig(const FString& InKey);
};
