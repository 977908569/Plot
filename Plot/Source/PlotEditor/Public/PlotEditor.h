#pragma once
#include "PlotEditorModule.h"
#include "Plot.h"
#include "PlotReference.h"
#include "TickableEditorObject.h"
#include "Stats/Stats.h"

class FPlotPaletteViewModel;
class PLOTEDITOR_API  FPlotEditor :public IPlotEditor, FTickableEditorObject {
public:
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnHoveredPlotSet, const FPlotReference&)
	DECLARE_MULTICAST_DELEGATE(FOnHoveredPlotCleared);
	DECLARE_MULTICAST_DELEGATE(FOnSelectedPlotChanging)
	DECLARE_MULTICAST_DELEGATE(FOnSelectedPlotChanged)
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnPlotPreviewUpdated, UPlotItem*)
	DECLARE_MULTICAST_DELEGATE(FOnDesignerChange)
public:
	FPlotEditor() {}
	virtual ~FPlotEditor();
	virtual void InitPlotEditor(const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, UPlot* InPlot, bool bShouldOpenInDefaultsMode) override;
	void RegisterApplicationModes(const UPlot* InPlot, bool bShouldOpenInDefaultsMode, bool bNewlyCreated = false);
	virtual void SetCurrentMode(FName NewMode) override;
	virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager) override;
	void RegisterToolbarTab(const TSharedRef<class FTabManager>& TabManager);
	virtual void CreateDefaultCommands();
	void RegisterMenus();

	void CreateNewPlot();
	bool CanCreateNewPlot() const;

	void ResetPlot();
	bool CanResetPlot() const;

	
	void Save2Txt();
	bool CanSave2Txt() const;
public:
	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override { return ETickableTickType::Always; }
	virtual TStatId GetStatId() const override;
public:
	virtual FLinearColor GetWorldCentricTabColorScale() const override;
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	TSharedPtr<class FPlotEditorToolbar> GetPlotToolbarBuilder() const { return PlotToolbar; }
public:
	FPlotReference GetReferenceFromTemplate(UPlotItem* TemplateItem);
	//Current Plot
	UPlot* GetPlot() const;
	//Update view
	void RefreshPreview();
	TSharedPtr<FPlotPaletteViewModel> GetPaletteViewModel() const { return PaletteViewModel; };
	//
	void SelectPlotItems(const TSet<FPlotReference>& InItems, bool bAppendOrToggle);
	TWeakObjectPtr<UClass> GetSelectedTemplate() const { return SelectedTemplate; }
	void SetSelectedTemplate(TWeakObjectPtr<UClass> TemplateClass) { SelectedTemplate = TemplateClass; }

	void SelectObjects(const TSet<UObject*>& Objects);
	const TSet< TWeakObjectPtr<UObject> >& GetSelectedObjects() const;

	const FPlotReference& GetHoveredPlotItem() const;
	void CleanSelection();
	//
	const TSet<FPlotReference>& GetSelectedPlotItems() const;
	void SetHoveredPlotItem(FPlotReference& InHoveredItem);
	void ClearHoveredPlotItem();
private:
	void OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap);
private:
	bool CanDeleteSelectedPlots();
	void DeleteSelectedPlots();
	bool CanCopySelectedPlots();
	void CopySelectedPlots();
	bool CanPastePlots();
	void PastePlots();
	bool CanCutSelectedPlots();
	void CutSelectedPlot();
	bool CanDuplicateSelectedPlots();
	void DuplicateSelectedPlots();
public:
	FOnHoveredPlotSet OnHoveredPlotSet;
	FOnHoveredPlotCleared OnHoveredPlotCleared;
	FOnSelectedPlotChanged OnSelectedPlotsChanging;
	FOnSelectedPlotChanged OnSelectedPlotsChanged;
	FOnPlotPreviewUpdated OnPlotPreviewUpdated;

	//场景属性同步
	FOnDesignerChange OnDesignerChange;
public:
	TSharedPtr< FUICommandList > DesignerCommandList;
	FVector2D PasteDropLocation;
private:
	TWeakObjectPtr<UClass> SelectedTemplate;
	TSharedPtr<FPlotPaletteViewModel> PaletteViewModel;
	TArray< TWeakPtr<FPlotHandle> > PlotHandlePool;
	TSet< FPlotReference > SelectedPlotItems;
	FPlotReference HoveredPlotItem;
	TSet< TWeakObjectPtr<UObject> > SelectedObjects;

	TSharedPtr<class FPlotEditorToolbar> PlotToolbar;
private:
	//Current Plot Asset
	TWeakObjectPtr<UPlot> Plot;
};
