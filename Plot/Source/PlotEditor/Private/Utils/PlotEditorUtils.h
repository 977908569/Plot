
#pragma once
#include "CoreMinimal.h"
class UPlotItem;
class UPlot;
struct FPlotReference;
class FMenuBuilder;
//Utils
class FPlotEditorUtils
{
public:
	static bool VerifyItemRename(TSharedRef<class FPlotEditor> PlotEditor, FPlotReference PlotItem, const FText& NewName, FText& OutErrorMessage);

	static bool RenameItem(TSharedRef<class FPlotEditor> InEditor,  UPlotItem* InItem, const FString& NewDisplayName);

	static void CreateItemContextMenu(FMenuBuilder& MenuBuilder, TSharedRef<FPlotEditor> BlueprintEditor, FVector2D TargetLocation);

	static void CopyItems(UPlot* InPlot, TSet<FPlotReference> Items);

	static TArray<UPlotItem*> PasteItems(TSharedRef<FPlotEditor> BlueprintEditor, UPlot* InPlot, FPlotReference ParentItem, int32 PasteIndex);

	static void DeleteItems(UPlot* InPlot, TSet<FPlotReference> Items);

	static void CutItems(UPlot* InPlot, TSet<FPlotReference> Items);

	static void DuplicateItems(TSharedRef<FPlotEditor> BlueprintEditor, UPlot* InPlot, TSet<FPlotReference> Items);

	//Check Class 
	static bool IsUsableItemClass(UClass* ItemClass);
	//Copy Paset Use
	static void ExportItemsToText(TArray<UPlotItem*> ItemsToExport, /*out*/ FString& ExportedText);
	static void ImportItemsFromText(UPlot* InPlot, const FString& TextToImport, /*out*/ TSet<UPlotItem*>& ImportedItemSet);
	static void ExportPropertiesToText(UObject* Object, TMap<FName, FString>& ExportedProperties);
	static void ImportPropertiesFromText(UObject* Object, const TMap<FName, FString>& ExportedProperties);

	//Play 
	static void Play(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, TSet<FPlotReference> Items);
	static bool IsSequenceSubItem(UPlotItem* InItem);
private:

	static FString CopyItemsInternal(UPlot* InPlot, TSet<FPlotReference> Items);

	static TArray<UPlotItem*> PasteItemsInternal(TSharedRef<FPlotEditor> BlueprintEditor, UPlot* InPlot, const FString& TextToImport, FPlotReference ParentItem, int32 PasteIndex, bool& TransactionSuccesful);

	static void ExecuteOpenSelectedItemsForEdit(TSet<FPlotReference> SelectedItems);

	static bool CanOpenSelectedItemsForEdit(TSet<FPlotReference> SelectedItems);

	static void BuildAddItemMenu(FMenuBuilder& Menu, TSharedRef<FPlotEditor> BlueprintEditor, UPlot* InPlot, TSet<FPlotReference> Items);

	//Add Item
	static void AddItems(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, TSet<FPlotReference> Items, UClass* ItemClass);

	static void BuildReplaceWithMenu(FMenuBuilder& Menu, TSharedRef<FPlotEditor> BlueprintEditor, UPlot* InPlot, TSet<FPlotReference> Items);

	static void ReplaceItemWithSelectedTemplate(TSharedRef<FPlotEditor> BlueprintEditor, UPlot* InPlot, FPlotReference Item);
	//
	static bool CanBeReplacedWithTemplate(TSharedRef<FPlotEditor> BlueprintEditor, UPlot* InPlot, FPlotReference Item);
	//Replace
	static void ReplaceItems(TSharedRef<FPlotEditor> BlueprintEditor, UPlot* InPlot, TSet<FPlotReference> Items, UClass* ItemClass);

	static FString FindNextValidName(UPlot* InPlot, const FString& Name);
};
