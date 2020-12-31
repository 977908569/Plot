#include "PlotEditorDesignerApplicationMode.h"
#include "LevelEditor.h"
#include "PlotEditorToolbar.h"
#include "TabFactory/PlotCameraTabSummoner.h"
#include "TabFactory/PlotPaletteTabSummoner.h"
#include "TabFactory/PlotHierarchyTabSummoner.h"
#include "TabFactory/PlotDesignerTabSummoner.h"
#include "TabFactory/PlotDetailsTabSummoner.h"
#define LOCTEXT_NAMESPACE "PlotDesignerMode"
const FName FPlotDesignerApplicationMode::DesignerMode("DesignerName");
//=============================

FPlotDesignerApplicationMode::FPlotDesignerApplicationMode(TSharedPtr<FPlotEditor> InPlotEditor) : FApplicationMode(FPlotDesignerApplicationMode::DesignerMode)
{
	MyPlotEditor = InPlotEditor;
	WorkspaceMenuCategory = FWorkspaceItem::NewGroup(LOCTEXT("WorkspaceMenu_PlotDesigner", "Plot Designer"));
	TabLayout = FTabManager::NewLayout("PlotEditor_Designer_Layout_v4_1")
		->AddArea
		(
			FTabManager::NewPrimaryArea()
			->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.2f)
				->SetHideTabWell(true)
				->AddTab(InPlotEditor->GetToolbarTabId(), ETabState::OpenedTab)
			)
			->Split
			(
				FTabManager::NewSplitter()
				->SetOrientation(Orient_Horizontal)
				->SetSizeCoefficient(0.70f)
				->Split
				(
					FTabManager::NewSplitter()
					->SetSizeCoefficient(0.15f)
					->SetOrientation(Orient_Vertical)
					->Split
					(
						FTabManager::NewStack()
						->SetSizeCoefficient(0.5f)
						->AddTab(FPlotPaletteTabSummoner::TabID, ETabState::OpenedTab)
					)
					->Split
					(
						FTabManager::NewStack()
						->SetSizeCoefficient(0.5f)
						->AddTab(FPlotHierarchyTabSummoner::TabID, ETabState::OpenedTab)
					)
				)
				->Split
				(
					FTabManager::NewSplitter()
					->SetSizeCoefficient(0.85f)
					->SetOrientation(Orient_Horizontal)
					->Split
					(
						FTabManager::NewStack()
						->SetHideTabWell(true)
						->AddTab(FPlotDesignerTabSummoner::TabID, ETabState::OpenedTab)
					)
					->Split
					(
						FTabManager::NewStack()
						->SetSizeCoefficient(0.35f)
						->AddTab(FPlotDetailsTabSummoner::TabID, ETabState::OpenedTab)
					)
				)
			)
			->Split(
				FTabManager::NewSplitter()
				->SetOrientation(Orient_Horizontal)
				->SetSizeCoefficient(0.30f)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(.15f)
					->AddTab(FPlotCameraTabSummoner::TabID, ETabState::OpenedTab)
				)
			)
		);

	TabFactories.RegisterFactory(MakeShareable(new FPlotDetailsTabSummoner(InPlotEditor)));
	TabFactories.RegisterFactory(MakeShareable(new FPlotDesignerTabSummoner(InPlotEditor)));
	TabFactories.RegisterFactory(MakeShareable(new FPlotHierarchyTabSummoner(InPlotEditor)));
	TabFactories.RegisterFactory(MakeShareable(new FPlotPaletteTabSummoner(InPlotEditor)));
	TabFactories.RegisterFactory(MakeShareable(new FPlotCameraTabSummoner(InPlotEditor)));

	FLevelEditorModule& LevelEdModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	ToolbarExtender = LevelEdModule.GetToolBarExtensibilityManager()->GetAllExtenders();
	InPlotEditor->GetPlotToolbarBuilder()->AddPlotEditorModesToolbar(ToolbarExtender);
}

void FPlotDesignerApplicationMode::RegisterTabFactories(TSharedPtr<FTabManager> InTabManager)
{
	TSharedPtr<FPlotEditor> PlotED = GetPlotEditor();
	PlotED->RegisterToolbarTab(InTabManager.ToSharedRef());
	PlotED->PushTabFactories(TabFactories);
}

UPlot* FPlotDesignerApplicationMode::GetPlot() const
{
	if (MyPlotEditor.IsValid()) return MyPlotEditor.Pin()->GetPlot();
	return nullptr;
}

TSharedPtr<FPlotEditor> FPlotDesignerApplicationMode::GetPlotEditor() const
{
	return MyPlotEditor.Pin();
}

#undef LOCTEXT_NAMESPACE
