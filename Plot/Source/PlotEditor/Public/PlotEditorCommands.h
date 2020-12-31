#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "PlotEditorStyle.h"
class PLOTEDITOR_API FPlotEditorCommands : public TCommands<FPlotEditorCommands>
{
public:

	FPlotEditorCommands()
		: TCommands<FPlotEditorCommands>(TEXT("Plot"), NSLOCTEXT("Contexts", "Plot", "Plot Plugin"), NAME_None, FPlotEditorStyle::GetStyleSetName())
	{
	}
	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
	TSharedPtr<FUICommandInfo> NewPlot;
	TSharedPtr<FUICommandInfo> ResetPlot;
	TSharedPtr<FUICommandInfo> Save2Config;
};