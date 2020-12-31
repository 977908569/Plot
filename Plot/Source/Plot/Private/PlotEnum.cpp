#include "PlotEnum.h"
#include "PlotTabFile.h"

static FDataTableLoader<FPlotName2Img, FString> RoleNameConfig(TEXT("DataTable'/Game/Blueprints/Plot/PlotRoleImg.PlotRoleImg'"));
static FDataTableLoader<FPlotRoleInfo, int32> PlotRoleConfig(TEXT("DataTable'/Game/Blueprints/Plot/PlotRole.PlotRole'"));

FPlotName2Img& FPlotName2Img::Get(const FString& InKey)
{
	const auto Config = RoleNameConfig.Get(InKey);
	if (!Config)
	{
		static FPlotName2Img Default;
		GLog->Logf(ELogVerbosity::Error, TEXT("Load PlotName2Img [ID=%s] failed."), *InKey);
		return Default;
	}

	return *Config;
}

FPlotRoleInfo& FPlotRoleInfo::Get(int32 InID) {
	const auto Config = PlotRoleConfig.Get(InID);
	if (!Config)
	{
		static FPlotRoleInfo Default;
		GLog->Logf(ELogVerbosity::Error, TEXT("Load PlotRoleConfig [ID=%d] failed."), InID);
		return Default;
	}

	return *Config;
}
