// Copyright Epic Games, Inc. All Rights Reserved.

#include "Palette/SPlotPaletteViewModel.h"
#include "Palette/SPlotPaletteView.h"
#include "Widgets/Views/STableViewBase.h"
#include "Widgets/Views/STableRow.h"
#include "Editor.h"

#if WITH_EDITOR
#include "EditorStyleSet.h"
#endif // WITH_EDITOR
#include "AssetRegistryModule.h"
#include "Developer/HotReload/Public/IHotReload.h"
#include "DragDrop/PlotTemplateDragDropOp.h"
#include "Settings/ContentBrowserSettings.h"
#include "Templates/PlotTemplateBlueprintClass.h"
#include "Templates/PlotTemplateClass.h"
#include "Utils/PlotEditorUtils.h"

#define LOCTEXT_NAMESPACE "PLOT"

FPlotTemplateViewModel::FPlotTemplateViewModel()
	: PaletteViewModel(nullptr),
	bIsFavorite(false)
{
}

FText FPlotTemplateViewModel::GetName() const
{
	return Template->Name;
}

bool FPlotTemplateViewModel::IsTemplate() const
{
	return true;
}

void FPlotTemplateViewModel::GetFilterStrings(TArray<FString>& OutStrings) const
{
	Template->GetFilterStrings(OutStrings);
}

TSharedRef<ITableRow> FPlotTemplateViewModel::BuildRow(const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(STableRow<TSharedPtr<FPlotViewModel>>, OwnerTable)
		.Padding(2.0f)
		.Style(FEditorStyle::Get(), "UMGEditor.PaletteItem")
		.OnDragDetected(this, &FPlotTemplateViewModel::OnDraggingWidgetTemplateItem)
		[
			SNew(SPlotPaletteViewItem, SharedThis(this))
			.HighlightText(PaletteViewModel, &FPlotPaletteViewModel::GetSearchText)
		];
}

FReply FPlotTemplateViewModel::OnDraggingWidgetTemplateItem(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return FReply::Handled().BeginDragDrop(FPlotTemplateDragDropOp::New(Template));
}

void FPlotTemplateViewModel::AddToFavorites()
{
	bIsFavorite = true;
	PaletteViewModel->AddToFavorites(this);
}

void FPlotTemplateViewModel::RemoveFromFavorites()
{
	bIsFavorite = false;
	PaletteViewModel->RemoveFromFavorites(this);
}

TSharedRef<ITableRow> FPlotHeaderViewModel::BuildRow(const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(STableRow<TSharedPtr<FPlotViewModel>>, OwnerTable)
		.Style(FEditorStyle::Get(), "UMGEditor.PaletteHeader")
		.Padding(2.0f)
		.ShowSelection(false)
		[
			SNew(STextBlock)
			.Text(GroupName)
		.Font(FEditorStyle::GetFontStyle("DetailsView.CategoryFontStyle"))
		.ShadowOffset(FVector2D(1.0f, 1.0f))
		];
}

void FPlotHeaderViewModel::GetChildren(TArray< TSharedPtr<FPlotViewModel> >& OutChildren)
{
	for (TSharedPtr<FPlotViewModel>& Child : Children)
	{
		OutChildren.Add(Child);
	}
}

FPlotPaletteViewModel::FPlotPaletteViewModel(const TSharedPtr<FPlotEditor> InEditor)
	: bRebuildRequested(true)
{
	PlotEditor = InEditor;
	FavoriteHeader = MakeShareable(new FPlotHeaderViewModel());
	FavoriteHeader->GroupName = LOCTEXT("Favorites", "Favorites");
}

void FPlotPaletteViewModel::RegisterToEvents()
{
	// Register for events that can trigger a palette rebuild
	GEditor->OnBlueprintReinstanced().AddRaw(this, &FPlotPaletteViewModel::OnBlueprintReinstanced);
	FEditorDelegates::OnAssetsDeleted.AddSP(this, &FPlotPaletteViewModel::HandleOnAssetsDeleted);
	IHotReloadModule::Get().OnHotReload().AddSP(this, &FPlotPaletteViewModel::HandleOnHotReload);
	// register for any objects replaced
	GEditor->OnObjectsReplaced().AddRaw(this, &FPlotPaletteViewModel::OnObjectsReplaced);
}

FPlotPaletteViewModel::~FPlotPaletteViewModel()
{
	GEditor->OnBlueprintReinstanced().RemoveAll(this);
	FEditorDelegates::OnAssetsDeleted.RemoveAll(this);
	IHotReloadModule::Get().OnHotReload().RemoveAll(this);
	GEditor->OnObjectsReplaced().RemoveAll(this);
}

void FPlotPaletteViewModel::AddToFavorites(const FPlotTemplateViewModel* PlotTemplateViewModel)
{
	//预留
}

void FPlotPaletteViewModel::RemoveFromFavorites(const FPlotTemplateViewModel* PlotTemplateViewModel)
{
	//预留
}

void FPlotPaletteViewModel::Update()
{
	if (bRebuildRequested)
	{
		OnUpdating.Broadcast();
		BuildPlotItemList();
		bRebuildRequested = false;
		OnUpdated.Broadcast();
	}
}

UPlot* FPlotPaletteViewModel::GetPlot() const
{
	if (PlotEditor.IsValid())
	{
		return  PlotEditor.Pin()->GetPlot();
	}
	return nullptr;
}

void FPlotPaletteViewModel::BuildPlotItemList()
{
	PlotViewModels.Reset();
	PlotTemplateCategories.Reset();
	BuildClassPlotItemList();
	FavoriteHeader->Children.Reset();
	for (auto& Entry : PlotTemplateCategories)
	{
		TSharedPtr<FPlotHeaderViewModel> Header = MakeShareable(new FPlotHeaderViewModel());
		Header->GroupName = FText::FromString(Entry.Key);
		for (auto& Template : Entry.Value)
		{
			TSharedPtr<FPlotTemplateViewModel> TemplateViewModel = MakeShareable(new FPlotTemplateViewModel());
			TemplateViewModel->Template = Template;
			TemplateViewModel->PaletteViewModel = this;
			Header->Children.Add(TemplateViewModel);
		}
		Header->Children.Sort([](TSharedPtr<FPlotViewModel> L, TSharedPtr<FPlotViewModel> R) { return R->GetName().CompareTo(L->GetName()) > 0; });
		PlotViewModels.Add(Header);
	}
	PlotViewModels.Sort([](TSharedPtr<FPlotViewModel> L, TSharedPtr<FPlotViewModel> R) { return R->GetName().CompareTo(L->GetName()) > 0; });
}

void FPlotPaletteViewModel::BuildClassPlotItemList()
{
	TMap<FName, TSubclassOf<UPlotItem>> LoadedItemBlueprintClassesByName;

	for (TObjectIterator<UClass> ClassIt; ClassIt; ++ClassIt)
	{
		UClass* ItemClass = *ClassIt;
		if (!FPlotEditorUtils::IsUsableItemClass(ItemClass))
		{
			continue;
		}
		FAssetData ItemAssetData = FAssetData(ItemClass);
		if (ItemClass->IsChildOf(UPlotItem::StaticClass()) && ItemClass->ClassGeneratedBy)
		{
			LoadedItemBlueprintClassesByName.Add(ItemClass->ClassGeneratedBy->GetFName()) = ItemClass;
		}
		else
		{
			TSharedPtr<FPlotTemplateClass> Template = MakeShareable(new FPlotTemplateClass(ItemClass));
			AddPlotItemTemplate(Template);
		}
	}
	const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	TArray<FAssetData> AllBPsAssetData;
	AssetRegistryModule.Get().GetAssetsByClass(UBlueprint::StaticClass()->GetFName(), AllBPsAssetData, true);
	for (FAssetData& BPAssetData : AllBPsAssetData)
	{
		UClass* ParentClass = nullptr;
		FString ParentClassName;
		if (!BPAssetData.GetTagValue(FBlueprintTags::NativeParentClassPath, ParentClassName))
		{
			BPAssetData.GetTagValue(FBlueprintTags::ParentClassPath, ParentClassName);
		}
		if (!ParentClassName.IsEmpty())
		{
			UObject* Outer = nullptr;
			ResolveName(Outer, ParentClassName, false, false);
			ParentClass = FindObject<UClass>(ANY_PACKAGE, *ParentClassName);

			if (!ParentClass->IsChildOf(UPlotItem::StaticClass()))
			{
				continue;
			}

			auto Template = MakeShareable(new FPlotTemplateClass(BPAssetData, nullptr));
			AddPlotItemTemplate(Template);
		}
	}

	TArray<FAssetData> AllItemBPsAssetData;
	AssetRegistryModule.Get().GetAssetsByClass(UPlotItem::StaticClass()->GetFName(), AllItemBPsAssetData, true);

	for (FAssetData& ItemBPAssetData : AllItemBPsAssetData)
	{
		TSubclassOf<UPlotItem> ItemBPClass = nullptr;
		auto LoadedItemBPClass = LoadedItemBlueprintClassesByName.Find(ItemBPAssetData.AssetName);
		if (LoadedItemBPClass)
		{
			ItemBPClass = *LoadedItemBPClass;
		}
		auto Template = MakeShareable(new FPlotTemplateBlueprintClass(ItemBPAssetData, ItemBPClass));
		AddPlotItemTemplate(Template);
	}
}

void FPlotPaletteViewModel::AddPlotItemTemplate(TSharedPtr<FPlotTemplate> Template)
{
	const FString Category = Template->GetCategory().ToString();
	PlotTemplateArray& Group = PlotTemplateCategories.FindOrAdd(Category);
	Group.Add(Template);
}

void FPlotPaletteViewModel::OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap)
{

}

void FPlotPaletteViewModel::OnBlueprintReinstanced()
{
	bRebuildRequested = true;
}

void FPlotPaletteViewModel::OnFavoritesUpdated()
{
	bRebuildRequested = true;
}

void FPlotPaletteViewModel::HandleOnHotReload(bool bWasTriggeredAutomatically)
{
	bRebuildRequested = true;
}

void FPlotPaletteViewModel::HandleOnAssetsDeleted(const TArray<UClass*>& DeletedAssetClasses)
{
	for (auto DeletedAssetClass : DeletedAssetClasses)
	{
		if (DeletedAssetClass->IsChildOf(UPlotItem::StaticClass()))
		{
			bRebuildRequested = true;
		}
	}
}

#undef LOCTEXT_NAMESPACE
