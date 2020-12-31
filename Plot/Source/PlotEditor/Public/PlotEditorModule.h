
#pragma once
#include "Modules/ModuleInterface.h"
#include "WorkflowOrientedApp/WorkflowCentricApplication.h"
#include "Plot.h"
#include "IAssetTypeActions.h"

class IAssetTools;
class FToolBarBuilder;
class FMenuBuilder;

class PLOTEDITOR_API  IPlotEditor : public FWorkflowCentricApplication
{
public:
	virtual void InitPlotEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UPlot* InPlot, bool bShouldOpenInDefaultsMode) = 0;
};

class PLOTEDITOR_API FPlotEditorModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	/** This function will be bound to Command (by default it will bring up plugin window) */
	void PluginButtonClicked();
private:
	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action);
	void RegisterMenus();
	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);
private:
	TSharedPtr<class FUICommandList> PluginCommands;
	TArray< TSharedPtr<IAssetTypeActions> > CreatedAssetTypeActions;
};
