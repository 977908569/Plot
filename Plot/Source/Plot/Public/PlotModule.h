
#pragma once
#include "Modules/ModuleInterface.h"
DECLARE_LOG_CATEGORY_EXTERN(LogPlot, Log, All)

class PLOT_API FPlotModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
