// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlotEditorCommands.h"

#define LOCTEXT_NAMESPACE "FPlotEditorModule"

void FPlotEditorCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "PlotEditor", "Bring up Plot window", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(NewPlot, "Create New", "Create a new Plot Asset", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(ResetPlot, "Reset Plot", "Reset Plot", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(Save2Config, "Save2Txt", "Save2Txt", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
