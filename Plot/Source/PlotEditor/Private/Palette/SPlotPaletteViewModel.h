#pragma once
#include "CoreMinimal.h"
#include "PlotEditor.h"
#include "Widgets/Views/STableViewBase.h"
#include "Widgets/Views/STableRow.h"
#include "PlotTemplate.h"

class FPlotPaletteViewModel;

class FPlotViewModel : public TSharedFromThis<FPlotViewModel>
{
public:
	virtual ~FPlotViewModel() { }
	virtual FText GetName() const = 0;
	virtual bool IsTemplate() const = 0;
	virtual void GetFilterStrings(TArray<FString>& OutStrings) const = 0;
	virtual TSharedRef<ITableRow> BuildRow(const TSharedRef<STableViewBase>& OwnerTable) = 0;
	virtual void GetChildren(TArray< TSharedPtr<FPlotViewModel> >& OutChildren)
	{
	}
	virtual bool IsFavorite() const { return false; }
	virtual void SetFavorite()
	{
	}

	virtual bool ShouldForceExpansion() const { return false; }
};

class FPlotTemplateViewModel : public FPlotViewModel
{
public:
	FPlotTemplateViewModel();

	virtual FText GetName() const override;

	virtual bool IsTemplate() const override;

	virtual void GetFilterStrings(TArray<FString>& OutStrings) const override;

	virtual TSharedRef<ITableRow> BuildRow(const TSharedRef<STableViewBase>& OwnerTable) override;

	FReply OnDraggingWidgetTemplateItem(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	void AddToFavorites();
	void RemoveFromFavorites();
	virtual bool IsFavorite() const override { return bIsFavorite; }
	virtual void SetFavorite() override { bIsFavorite = true; }
	TSharedPtr<FPlotTemplate> Template;
	FPlotPaletteViewModel* PaletteViewModel;
private:
	bool bIsFavorite;
};

class FPlotHeaderViewModel : public FPlotViewModel
{
public:
	virtual ~FPlotHeaderViewModel()
	{
	}

	virtual FText GetName() const override
	{
		return GroupName;
	}

	virtual bool IsTemplate() const override
	{
		return false;
	}

	virtual void GetFilterStrings(TArray<FString>& OutStrings) const override
	{
	}
	virtual TSharedRef<ITableRow> BuildRow(const TSharedRef<STableViewBase>& OwnerTable) override;
	virtual void GetChildren(TArray< TSharedPtr<FPlotViewModel> >& OutChildren) override;
	virtual bool ShouldForceExpansion() const override { return bForceExpansion; }
	void SetForceExpansion(bool bInForceExpansion) { bForceExpansion = bInForceExpansion; }
	FText GroupName;
	TArray< TSharedPtr<FPlotViewModel> > Children;
private:
	bool bForceExpansion = false;
};

class FPlotPaletteViewModel: public TSharedFromThis<FPlotPaletteViewModel>
{
public:

	DECLARE_MULTICAST_DELEGATE(FOnUpdating)
	DECLARE_MULTICAST_DELEGATE(FOnUpdated)
public:
	 FPlotPaletteViewModel(TSharedPtr<FPlotEditor> InEditor);
	~FPlotPaletteViewModel();
	void RegisterToEvents();
	void Update();
	bool NeedUpdate() const { return bRebuildRequested; }
	void AddToFavorites(const FPlotTemplateViewModel* WidgetTemplateViewModel);
	void RemoveFromFavorites(const FPlotTemplateViewModel* WidgetTemplateViewModel);
	typedef TArray< TSharedPtr<FPlotViewModel> > ViewModelsArray;
	ViewModelsArray& GetPlotViewModels() { return PlotViewModels; }
	void SetSearchText(const FText& inSearchText) { SearchText = inSearchText; }
	FText GetSearchText() const { return SearchText; }
	FOnUpdating OnUpdating;
	FOnUpdated OnUpdated;
private:
	FPlotPaletteViewModel(){};
	UPlot* GetPlot() const;
	void BuildPlotItemList();
	void BuildClassPlotItemList();
	void AddPlotItemTemplate(TSharedPtr<FPlotTemplate> Template);
	void OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap);
	void OnBlueprintReinstanced();
	void OnFavoritesUpdated();
	void HandleOnHotReload(bool bWasTriggeredAutomatically);
	void HandleOnAssetsDeleted(const TArray<UClass*>& DeletedAssetClasses);
	TWeakPtr<class FPlotEditor> PlotEditor;
	typedef TArray<TSharedPtr<FPlotTemplate>> PlotTemplateArray;
	TMap<FString, PlotTemplateArray> PlotTemplateCategories;
	ViewModelsArray PlotViewModels;
	bool bRebuildRequested;
	FText SearchText;
	TSharedPtr<FPlotHeaderViewModel> FavoriteHeader;
};

