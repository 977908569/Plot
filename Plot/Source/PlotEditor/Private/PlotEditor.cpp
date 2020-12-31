#include "PlotEditor.h"
#include "AssetToolsModule.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "PlotEditorCommands.h"
#include "PlotEditorDesignerApplicationMode.h"
#include "PlotEditorToolbar.h"
#include "PlotFactory.h"
#include "PlotWidget.h"
#include "Kismet2/DebuggerCommands.h"
#include "ToolMenus.h"
#include "UnrealEdGlobals.h"
#include "Blueprint/UserWidget.h"
#include "Editor/UnrealEdEngine.h"
#include "Palette/SPlotPaletteViewModel.h"
#include "Framework/Commands/GenericCommands.h"
#include "Utils/PlotEditorUtils.h"
#define LOCTEXT_NAMESPACE "PlotEditor"

FPlotEditor::~FPlotEditor()
{
	GEditor->OnObjectsReplaced().RemoveAll(this);
	if (GUnrealEd && GUnrealEd->PlayWorld)
	{
		GUnrealEd->EndPlayMap();
	}
}

void FPlotEditor::InitPlotEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UPlot* InPlot, bool bShouldOpenInDefaultsMode)
{
	check(InPlot)
		Plot = InPlot;
	TSharedPtr<FPlotEditor> ThisPtr(SharedThis(this));
	// Default Item 
	PaletteViewModel = MakeShareable(new FPlotPaletteViewModel(ThisPtr));
	PaletteViewModel->RegisterToEvents();
	//Tool
	if (!PlotToolbar.IsValid())
	{
		PlotToolbar = MakeShareable(new FPlotEditorToolbar(ThisPtr));
	}

	GetToolkitCommands()->Append(FPlayWorldCommands::GlobalPlayWorldActions.ToSharedRef());

	//Commands
	CreateDefaultCommands();
	RegisterMenus();
	const TSharedRef<FTabManager::FLayout> DummyLayout = FTabManager::NewLayout("NullLayout")->AddArea(FTabManager::NewPrimaryArea());
	const bool bCreateDefaultStandaloneMenu = true;
	const bool bCreateDefaultToolbar = true;
	const FName PlotEditorAppName = FName(TEXT("PlotEditorApp"));
	InitAssetEditor(Mode, InitToolkitHost, PlotEditorAppName, DummyLayout, bCreateDefaultStandaloneMenu, bCreateDefaultToolbar, InPlot);

	RegenerateMenusAndToolbars();
	//
	RegisterApplicationModes(InPlot, bShouldOpenInDefaultsMode, false);
	//
	GEditor->OnObjectsReplaced().AddSP(this, &FPlotEditor::OnObjectsReplaced);
	//
	DesignerCommandList = MakeShareable(new FUICommandList);

	//Delete 
	DesignerCommandList->MapAction(FGenericCommands::Get().Delete,
		FExecuteAction::CreateSP(this, &FPlotEditor::DeleteSelectedPlots),
		FCanExecuteAction::CreateSP(this, &FPlotEditor::CanDeleteSelectedPlots)
	);

	DesignerCommandList->MapAction(FGenericCommands::Get().Copy,
		FExecuteAction::CreateSP(this, &FPlotEditor::CopySelectedPlots),
		FCanExecuteAction::CreateSP(this, &FPlotEditor::CanCopySelectedPlots)
	);

	DesignerCommandList->MapAction(FGenericCommands::Get().Cut,
		FExecuteAction::CreateSP(this, &FPlotEditor::CutSelectedPlot),
		FCanExecuteAction::CreateSP(this, &FPlotEditor::CanCutSelectedPlots)
	);

	DesignerCommandList->MapAction(FGenericCommands::Get().Paste,
		FExecuteAction::CreateSP(this, &FPlotEditor::PastePlots),
		FCanExecuteAction::CreateSP(this, &FPlotEditor::CanPastePlots)
	);

	DesignerCommandList->MapAction(FGenericCommands::Get().Duplicate,
		FExecuteAction::CreateSP(this, &FPlotEditor::DuplicateSelectedPlots),
		FCanExecuteAction::CreateSP(this, &FPlotEditor::CanDuplicateSelectedPlots)
	);
}

void FPlotEditor::RegisterApplicationModes(const UPlot* InPlot, bool bShouldOpenInDefaultsMode, bool bNewlyCreated)
{
	TSharedPtr<FPlotEditor> ThisPtr(SharedThis(this));
	TArray< TSharedRef<FApplicationMode> > TempModeList;
	TempModeList.Add(MakeShareable(new FPlotDesignerApplicationMode(ThisPtr)));
	for (TSharedRef<FApplicationMode>& AppMode : TempModeList)
	{
		AddApplicationMode(AppMode->GetModeName(), AppMode);
	}
	SetCurrentMode(FPlotDesignerApplicationMode::DesignerMode);
}

void FPlotEditor::SetCurrentMode(FName NewMode)
{
	FWorkflowCentricApplication::SetCurrentMode(NewMode);
}

void FPlotEditor::RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	FWorkflowCentricApplication::RegisterTabSpawners(InTabManager);
}

void FPlotEditor::RegisterToolbarTab(const TSharedRef<FTabManager>& InTabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);
}

void FPlotEditor::CreateDefaultCommands()
{
	//TODO
	ToolkitCommands->MapAction(FPlotEditorCommands::Get().NewPlot,
		FExecuteAction::CreateSP(this, &FPlotEditor::CreateNewPlot),
		FCanExecuteAction::CreateSP(this, &FPlotEditor::CanCreateNewPlot)
	);

	ToolkitCommands->MapAction(FPlotEditorCommands::Get().ResetPlot,
		FExecuteAction::CreateSP(this, &FPlotEditor::ResetPlot),
		FCanExecuteAction::CreateSP(this, &FPlotEditor::CanResetPlot)
	);

	ToolkitCommands->MapAction(FPlotEditorCommands::Get().Save2Config,
		FExecuteAction::CreateSP(this, &FPlotEditor::Save2Txt),
		FCanExecuteAction::CreateSP(this, &FPlotEditor::CanSave2Txt)
	);
}

void FPlotEditor::RegisterMenus()
{
	//TODO
}

void FPlotEditor::CreateNewPlot()
{
	FString PathName = Plot->GetOutermost()->GetPathName();
	PathName = FPaths::GetPath(PathName);
	const FString PathNameWithFilename = PathName / LOCTEXT("NewPlotName", "NewPlot").ToString();
	FString Name;
	FString PackageName;
	FAssetToolsModule& AssetToolsModule = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools");
	AssetToolsModule.Get().CreateUniqueAssetName(PathNameWithFilename, TEXT(""), PackageName, Name);

	UPlotFactory* NewPlotFactory = NewObject<UPlotFactory>();
	NewPlotFactory->bOpen = true;
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	ContentBrowserModule.Get().CreateNewAsset(Name, PathName, UPlot::StaticClass(), NewPlotFactory);
}

bool FPlotEditor::CanCreateNewPlot() const
{
	return true;
}

void FPlotEditor::ResetPlot()
{
	UPlot* MyPlot = GetPlot();
	check(MyPlot);
	MyPlot->Reset();
}

bool FPlotEditor::CanResetPlot() const
{
	return true;
}

void FPlotEditor::Save2Txt()
{
	UPlot* MyPlot = GetPlot();
	check(MyPlot);
	MyPlot->Save2Txt();
}

bool FPlotEditor::CanSave2Txt() const
{
	return true;
}

void FPlotEditor::Tick(float DeltaTime)
{
}

FPlotReference FPlotEditor::GetReferenceFromTemplate(UPlotItem* TemplateItem)
{
	const TSharedRef<FPlotHandle> Reference = MakeShareable(new FPlotHandle(TemplateItem));
	PlotHandlePool.Add(Reference);
	return FPlotReference(SharedThis(this), Reference);
}

UPlot* FPlotEditor::GetPlot() const
{
	return Plot.IsValid() ? Plot.Get() : nullptr;
}

void FPlotEditor::RefreshPreview()
{
	OnSelectedPlotsChanging.Broadcast();
	CleanSelection();
	OnSelectedPlotsChanged.Broadcast();
}

void FPlotEditor::SelectPlotItems(const TSet<FPlotReference>& InItems, bool bAppendOrToggle)
{
	TSet<FPlotReference> TempSelection;
	for (const FPlotReference& Item : InItems)
	{
		if (Item.IsValid())
		{
			TempSelection.Add(Item);
		}
	}

	OnSelectedPlotsChanging.Broadcast();
	if (!bAppendOrToggle)
	{
		SelectedPlotItems.Empty();
	}
	SelectedObjects.Empty();
	for (const FPlotReference& Item : TempSelection)
	{
		if (bAppendOrToggle && SelectedPlotItems.Contains(Item))
		{
			SelectedPlotItems.Remove(Item);
		}
		else
		{
			SelectedPlotItems.Add(Item);
		}
	}

	OnSelectedPlotsChanged.Broadcast();
}

void FPlotEditor::SelectObjects(const TSet<UObject*>& Objects)
{
	OnSelectedPlotsChanging.Broadcast();
	SelectedPlotItems.Empty();
	SelectedObjects.Empty();
	for (UObject* Obj : Objects)
	{
		SelectedObjects.Add(Obj);
	}
	OnSelectedPlotsChanged.Broadcast();
}

const TSet<TWeakObjectPtr<UObject>>& FPlotEditor::GetSelectedObjects() const
{
	return SelectedObjects;
}

const FPlotReference& FPlotEditor::GetHoveredPlotItem() const
{
	return HoveredPlotItem;
}

TStatId FPlotEditor::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(FPlotEditor, STATGROUP_Tickables);
}

FLinearColor FPlotEditor::GetWorldCentricTabColorScale() const
{
	return FLinearColor(0.0f, 0.0f, 0.3f, 0.5f);
}

FName FPlotEditor::GetToolkitFName() const
{
	return FName(TEXT("PlotItem"));
}

FText FPlotEditor::GetBaseToolkitName() const
{
	return LOCTEXT("AppLabel", "PlotItem Editor");
}

FString FPlotEditor::GetWorldCentricTabPrefix() const
{
	return NSLOCTEXT("KismetEditor", "WorldCentricTabPrefix_Plot", "PlotItem ").ToString();
}

void FPlotEditor::CleanSelection()
{
	TSet<FPlotReference> TempSelection;
	TArray<UPlotItem*> ItemsInPlot;
	GetPlot()->GetAllItems(ItemsInPlot);
	TSet<UPlotItem*> ItemSet(ItemsInPlot);
	for (FPlotReference& ItemRef : SelectedPlotItems)
	{
		if (ItemRef.IsValid())
		{
			if (ItemSet.Contains(ItemRef.GetTemplate()))
			{
				TempSelection.Add(ItemRef);
			}
		}
	}
	if (TempSelection.Num() != SelectedPlotItems.Num())
	{
		SelectPlotItems(TempSelection, false);
	}
}


const TSet<FPlotReference>& FPlotEditor::GetSelectedPlotItems() const
{
	return SelectedPlotItems;
}

void FPlotEditor::SetHoveredPlotItem(FPlotReference& InHoveredItem)
{
	if (InHoveredItem != HoveredPlotItem)
	{
		HoveredPlotItem = InHoveredItem;
		OnHoveredPlotSet.Broadcast(InHoveredItem);
	}
}

void FPlotEditor::ClearHoveredPlotItem()
{
	HoveredPlotItem = FPlotReference();
	OnHoveredPlotCleared.Broadcast();
}

void FPlotEditor::OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap)
{
	for (int32 HandleIndex = PlotHandlePool.Num() - 1; HandleIndex >= 0; HandleIndex--)
	{
		TSharedPtr<FPlotHandle> Ref = PlotHandlePool[HandleIndex].Pin();
		if (Ref.IsValid())
		{
			UObject* const* NewObject = ReplacementMap.Find(Ref->PlotItem.Get());
			if (NewObject)
			{
				Ref->PlotItem = Cast<UPlotItem>(*NewObject);
			}
		}
		else
		{
			PlotHandlePool.RemoveAtSwap(HandleIndex);
		}
	}
}

bool FPlotEditor::CanDeleteSelectedPlots()
{
	TSet<FPlotReference> Items = GetSelectedPlotItems();
	bool bHasRoot = false;
	for (auto& Item : Items)
	{
		if (Item.GetTemplate()->IsA(UPlotItem_Root::StaticClass()))
		{
			bHasRoot = true;
			break;
		}
	}
	return Items.Num() > 0 && !bHasRoot;
}

void FPlotEditor::DeleteSelectedPlots()
{
	TSet<FPlotReference> Items = GetSelectedPlotItems();
	FPlotEditorUtils::DeleteItems(GetPlot(), Items);
	TSet<FPlotReference> Empty;
	SelectPlotItems(Empty, false);
}

bool FPlotEditor::CanCopySelectedPlots()
{
	TSet<FPlotReference> Items = GetSelectedPlotItems();
	return Items.Num() > 0;
}

void FPlotEditor::CopySelectedPlots()
{
	TSet<FPlotReference> Items = GetSelectedPlotItems();
	FPlotEditorUtils::CopyItems(GetPlot(), Items);
}

bool FPlotEditor::CanPastePlots()
{
	TSet<FPlotReference> Items = GetSelectedPlotItems();
	if (Items.Num() == 1)
	{
		return true;
	}
	return false;
}

void FPlotEditor::PastePlots()
{
	TSet<FPlotReference> Items = GetSelectedPlotItems();
	const FPlotReference Target = Items.Num() > 0 ? *Items.CreateIterator() : FPlotReference();

	TArray<UPlotItem*> PastedItems = FPlotEditorUtils::PasteItems(SharedThis(this), GetPlot(), Target, Target.GetTemplate()->GetIndex());
	PasteDropLocation = PasteDropLocation + FVector2D(25, 25);
	TSet<FPlotReference> PastedItemRefs;
	for (UPlotItem* Item : PastedItems)
	{
		PastedItemRefs.Add(GetReferenceFromTemplate(Item));
	}
	SelectPlotItems(PastedItemRefs, false);
}

bool FPlotEditor::CanCutSelectedPlots()
{
	TSet<FPlotReference> Items = GetSelectedPlotItems();
	return Items.Num() > 0;
}

void FPlotEditor::CutSelectedPlot()
{
	TSet<FPlotReference> Items = GetSelectedPlotItems();
	FPlotEditorUtils::CutItems(GetPlot(), Items);
}

bool FPlotEditor::CanDuplicateSelectedPlots()
{
	TSet<FPlotReference> Items = GetSelectedPlotItems();
	if (Items.Num() == 1)
	{
		const FPlotReference Target = *Items.CreateIterator();
		UPlotItem* ParentItem = Target.GetTemplate()->GetParent();
		return ParentItem && ParentItem->CanHaveMultipleChildren();
	}
	return false;
}

void FPlotEditor::DuplicateSelectedPlots()
{
	const TSet<FPlotReference> Items = GetSelectedPlotItems();
	FPlotEditorUtils::DuplicateItems(SharedThis(this), GetPlot(), Items);
}

#undef LOCTEXT_NAMESPACE
