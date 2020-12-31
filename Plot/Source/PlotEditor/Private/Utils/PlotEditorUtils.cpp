
#include "PlotEditorUtils.h"
#include "Factories.h"
#include "Components/PanelSlot.h"
#include "UObject/UObjectIterator.h"
#include "Internationalization/TextPackageNamespaceUtil.h"
#include "HAL/PlatformApplicationMisc.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "PlotEditor.h"
#include "PlotItem.h"
#include "PlotItem_Branch.h"
#include "PlotItem_PlaySequence.h"
#include "PlotItem_Sequence.h"
#include "PlotReference.h"
#include "Framework/Commands/GenericCommands.h"
#include "ScopedTransaction.h"
#include "UnrealExporter.h"
#include "Exporters/Exporter.h"
#include "Subsystems/AssetEditorSubsystem.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Templates/PlotTemplateClass.h"
#include "Widgets/Notifications/SNotificationList.h"
#define LOCTEXT_NAMESPACE "PLOT"

class FPlotObjectTextFactory : public FCustomizableTextObjectFactory
{
public:
	FPlotObjectTextFactory()
		: FCustomizableTextObjectFactory(GWarn)
	{
	}
	// FCustomizableTextObjectFactory implementation
	virtual bool CanCreateClass(UClass* ObjectClass, bool& bOmitSubObjs) const override
	{
		return  ObjectClass->IsChildOf(UPlotItem::StaticClass());
	}

	virtual void ProcessConstructedObject(UObject* NewObject) override
	{
		check(NewObject);
		if (UPlotItem* Item = Cast<UPlotItem>(NewObject))
		{
			NewItemMap.Add(Item->GetFName(), Item);
		}
	}
	// FCustomizableTextObjectFactory (end)
public:
	// Name->Instance object mapping
	TMap<FName, UPlotItem*> NewItemMap;
};

bool FPlotEditorUtils::VerifyItemRename(TSharedRef<class FPlotEditor> PlotEditor, FPlotReference Item, const FText& NewName, FText& OutErrorMessage)
{
	//Check Name
	if (NewName.IsEmptyOrWhitespace())
	{
		OutErrorMessage = LOCTEXT("EmptyPlotItemName", "Empty PlotItem Name");
		return false;
	}
	const FString& NewNameString = NewName.ToString();
	if (NewNameString.Len() >= NAME_SIZE)
	{
		OutErrorMessage = LOCTEXT("ItemNameTooLong", "Item Name is Too Long");
		return false;
	}

	UPlotItem* RenamedTemplateItem = Item.GetTemplate();
	if (!RenamedTemplateItem)
	{
		return false;
	}
	const FName NewNameSlug = MakeObjectNameFromDisplayLabel(NewNameString, RenamedTemplateItem->GetFName());
	UPlot* Plot = PlotEditor->GetPlot();
	if (Plot == nullptr) return false;
	if (!RenamedTemplateItem->Rename(*NewNameSlug.ToString(), nullptr, REN_Test))
	{
		OutErrorMessage = LOCTEXT("ExistingObjectName", "Existing Object Name");
		return false;
	}
	return true;
}

bool FPlotEditorUtils::RenameItem(TSharedRef<FPlotEditor> InEditor, UPlotItem* InItem, const FString& NewDisplayName)
{
	InItem->SetDisplayLabel(NewDisplayName);
	InItem->Rename(*NewDisplayName);
	return true;
}

void FPlotEditorUtils::CreateItemContextMenu(FMenuBuilder& MenuBuilder, TSharedRef<FPlotEditor> InEditor, FVector2D TargetLocation)
{
	InEditor->PasteDropLocation = TargetLocation;
	const TSet<FPlotReference> Items = InEditor->GetSelectedPlotItems();
	UPlot* Plot = InEditor->GetPlot();
	check(Plot);
	MenuBuilder.PushCommandList(InEditor->DesignerCommandList.ToSharedRef());
	//
	MenuBuilder.BeginSection("Edit", LOCTEXT("Edit", "Edit"));
	{
		MenuBuilder.AddMenuEntry(FGenericCommands::Get().Cut);
		MenuBuilder.AddMenuEntry(FGenericCommands::Get().Copy);
		MenuBuilder.AddMenuEntry(FGenericCommands::Get().Paste);
		MenuBuilder.AddMenuEntry(FGenericCommands::Get().Duplicate);
		MenuBuilder.AddMenuEntry(FGenericCommands::Get().Delete);
	}
	MenuBuilder.PopCommandList();
	{
		MenuBuilder.AddMenuEntry(FGenericCommands::Get().Rename);
	}
	MenuBuilder.EndSection();
	MenuBuilder.BeginSection("Actions");
	{
		if (Items.Num() <= 1)
		{
			MenuBuilder.AddSubMenu(
				LOCTEXT("PlotTree_AddItem", "Add Item..."),
				LOCTEXT("PlotTree_AddItemToolTip", "Add New Item"),
				FNewMenuDelegate::CreateStatic(&FPlotEditorUtils::BuildAddItemMenu, InEditor, Plot, Items)
			);
		}
		//TODO
		/*if (Items.Num() == 1)
		{
			MenuBuilder.AddSubMenu(
				LOCTEXT("PlotTree_ReplaceItem", "Replace Item With..."),
				LOCTEXT("PlotTree_ReplaceItemToolTip", "Replaces the currently selected item, with another item"),
				FNewMenuDelegate::CreateStatic(&FPlotEditorUtils::BuildReplaceWithMenu, InEditor, Plot, Items)
			);
		}*/
	}
	MenuBuilder.EndSection();

	MenuBuilder.BeginSection("Play", LOCTEXT("Play", "Play"));
	MenuBuilder.AddMenuEntry(
		LOCTEXT("PlotTree_Play", "Play"),
		FText::GetEmpty(),
		FSlateIcon(),
		FUIAction(
			FExecuteAction::CreateStatic(&FPlotEditorUtils::Play, InEditor, Plot, Items),
			FCanExecuteAction()
		));
	MenuBuilder.EndSection();
}

void FPlotEditorUtils::ExecuteOpenSelectedItemsForEdit(TSet<FPlotReference> SelectedItems)
{
	for (auto& Item : SelectedItems)
	{
		GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(Item.GetTemplate()->GetClass()->ClassGeneratedBy);
	}
}

bool FPlotEditorUtils::CanOpenSelectedItemsForEdit(TSet<FPlotReference> SelectedItems)
{
	return true;
}

void FPlotEditorUtils::DeleteItems(UPlot* InPlot, TSet<FPlotReference> Items)
{
	if (Items.Num() > 0)
	{
		bool bRemoved = false;
		for (FPlotReference& Item : Items)
		{
			UPlotItem* ItemTemplate = Item.GetTemplate();
			bRemoved = InPlot->RemoveItem(ItemTemplate);
			ItemTemplate->Rename(nullptr, GetTransientPackage());
		}
		if (bRemoved)
		{
			InPlot->BroadcastChanged();
		}
	}
}


void FPlotEditorUtils::BuildAddItemMenu(FMenuBuilder& Menu, TSharedRef<FPlotEditor> BlueprintEditor, UPlot* InPlot, TSet<FPlotReference> Items)
{
	TArray<UClass*> AddClasses;
	for (TObjectIterator<UClass> ClassIt; ClassIt; ++ClassIt)
	{
		UClass* ItemClass = *ClassIt;
		if (FPlotEditorUtils::IsUsableItemClass(ItemClass))
		{
			if (ItemClass->IsChildOf(UPlotItem::StaticClass()))
			{
				AddClasses.Add(ItemClass);
			}
		}
	}
	Menu.BeginSection("AddItem", LOCTEXT("PlotTree_AddItem", "Add Item..."));
	{
		for (UClass* WrapperClass : AddClasses)
		{
			Menu.AddMenuEntry(
				WrapperClass->GetDisplayNameText(),
				FText::GetEmpty(),
				FSlateIcon(),
				FUIAction(
					FExecuteAction::CreateStatic(&FPlotEditorUtils::AddItems, BlueprintEditor, InPlot, Items, WrapperClass),
					FCanExecuteAction()
				));
		}
	}
	Menu.EndSection();
}

void FPlotEditorUtils::AddItems(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, TSet<FPlotReference> Items, UClass* ItemClass)
{
	const FScopedTransaction Transaction(LOCTEXT("AddItems", "Add Items"));
	TSharedPtr<FPlotTemplateClass> Template = MakeShareable(new FPlotTemplateClass(ItemClass));
	for (auto& Each : Items)
	{
		UPlotItem* Item = Each.GetTemplate();
		if (Item == nullptr) return;

		Item->Modify();
		InPlot->SetFlags(RF_Transactional);
		InPlot->Modify();
		//根节点
		if (Item->IsA(UPlotItem_Root::StaticClass()))
		{
			const auto NewItem = Template->Create(InPlot);
			Item->SetFlags(RF_Transactional);
			Item->Modify();

			Item->AddChild(NewItem);
		}
		else
		{
			UPlotItem* Parent = Item->GetParent();
			if (Parent == nullptr) return;

			Parent->SetFlags(RF_Transactional);
			Parent->Modify();
			const int32 Index = Item->GetIndex();
			const auto NewItem = Template->Create(InPlot);
			Parent->InsertChildAt(Index + 1, NewItem);
		}

	}
	InPlot->BroadcastChanged();
}

void FPlotEditorUtils::BuildReplaceWithMenu(FMenuBuilder& Menu, TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, TSet<FPlotReference> Items)
{
	Menu.BeginSection("ReplaceWith", LOCTEXT("PlotTree_ReplaceWith", "Replace Item With..."));
	{
		if (Items.Num() == 1)
		{
			const FPlotReference Item = *Items.CreateIterator();
			UClass* ItemClass = Item.GetTemplate()->GetClass();
			const TWeakObjectPtr<UClass> TemplateItem = InEditor->GetSelectedTemplate();

			if (TemplateItem.IsValid())
			{
				Menu.AddMenuEntry(
					FText::Format(LOCTEXT("PlotTree_ReplaceWithSelection", "Replace With {0}"), FText::FromString(TemplateItem.IsValid() ? TemplateItem->GetName() : ItemClass->GetName())),
					FText::Format(LOCTEXT("PlotTree_ReplaceWithSelectionToolTip", "Replace this widget with a {0}"), FText::FromString(TemplateItem.IsValid() ? TemplateItem->GetName() : ItemClass->GetName())),
					FSlateIcon(),
					FUIAction(
						FExecuteAction::CreateStatic(&FPlotEditorUtils::ReplaceItemWithSelectedTemplate, InEditor, InPlot, Item),
						FCanExecuteAction::CreateStatic(&FPlotEditorUtils::CanBeReplacedWithTemplate, InEditor, InPlot, Item)
					));
				Menu.AddMenuSeparator();
			}
		}

		TArray<UClass*> ReplacementClasses;
		for (TObjectIterator<UClass> ClassIt; ClassIt; ++ClassIt)
		{
			UClass* EachClass = *ClassIt;
			if (FPlotEditorUtils::IsUsableItemClass(EachClass))
			{
				ReplacementClasses.Add(EachClass);
			}
		}

		ReplacementClasses.Sort([](UClass& Lhs, UClass& Rhs) { return Lhs.GetDisplayNameText().CompareTo(Rhs.GetDisplayNameText()) < 0; });

		for (UClass* ReplacementClass : ReplacementClasses)
		{
			Menu.AddMenuEntry(
				ReplacementClass->GetDisplayNameText(),
				FText::GetEmpty(),
				FSlateIcon(),
				FUIAction(
					FExecuteAction::CreateStatic(&FPlotEditorUtils::ReplaceItems, InEditor, InPlot, Items, ReplacementClass)
				));
		}
	}
	Menu.EndSection();
}

void FPlotEditorUtils::ReplaceItemWithSelectedTemplate(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, FPlotReference Item)
{

}

bool FPlotEditorUtils::CanBeReplacedWithTemplate(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, FPlotReference Item)
{
	return false;
}

void FPlotEditorUtils::ReplaceItems(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, TSet<FPlotReference> Items, UClass* ItemClass)
{

}

FString RemoveSuffixFromName(const FString OldName)
{
	int NameLen = OldName.Len();
	int SuffixIndex = 0;
	if (OldName.FindLastChar('_', SuffixIndex))
	{
		NameLen = SuffixIndex;
		for (int32 i = SuffixIndex + 1; i < OldName.Len(); ++i)
		{
			const TCHAR& C = OldName[i];
			const bool bGoodChar = ((C >= '0') && (C <= '9'));
			if (!bGoodChar)
			{
				return OldName;
			}
		}
	}
	return FString(NameLen, *OldName);
}

FString FPlotEditorUtils::FindNextValidName(UPlot* InPlot, const FString& Name)
{
	if (FindObject<UObject>(InPlot, *Name))
	{
		// If the name is already used, we will suffix it with '_X'
		const FString NameWithoutSuffix = RemoveSuffixFromName(Name);
		FString NewName = NameWithoutSuffix;

		int32 Postfix = 0;
		while (FindObject<UObject>(InPlot, *NewName))
		{
			++Postfix;
			NewName = FString::Printf(TEXT("%s_%d"), *NameWithoutSuffix, Postfix);
		}

		return NewName;
	}
	return Name;
}

void FPlotEditorUtils::CutItems(UPlot* InPlot, TSet<FPlotReference> Items)
{
	CopyItems(InPlot, Items);
	DeleteItems(InPlot, Items);
}

void FPlotEditorUtils::CopyItems(UPlot* InPlot, TSet<FPlotReference> Items)
{
	const FString ExportedText = CopyItemsInternal(InPlot, Items);
	FPlatformApplicationMisc::ClipboardCopy(*ExportedText);
}

FString FPlotEditorUtils::CopyItemsInternal(UPlot* InPlot, TSet<FPlotReference> Items)
{
	TSet<UPlotItem*> TemplateItems;
	for (const FPlotReference& Item : Items)
	{
		UPlotItem* TemplateItem = Item.GetTemplate();
		TemplateItems.Add(TemplateItem);
	}

	TArray<UPlotItem*> FinalItems;
	for (UPlotItem* TemplateItem : TemplateItems)
	{
		bool bFoundParent = false;

		// See if the item already has a parent in the set we're copying.
		for (UPlotItem* PossibleParent : TemplateItems)
		{
			if (PossibleParent != TemplateItem)
			{
				if (TemplateItem->IsChildOf(PossibleParent))
				{
					bFoundParent = true;
					break;
				}
			}
		}

		if (!bFoundParent)
		{
			FinalItems.Add(TemplateItem);
			UPlot::GetChildItems(TemplateItem, FinalItems);
		}
	}

	FString ExportedText;
	FPlotEditorUtils::ExportItemsToText(FinalItems, /*out*/ ExportedText);
	return ExportedText;
}

void FPlotEditorUtils::DuplicateItems(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, TSet<FPlotReference> Items)
{
	FPlotReference ParentItemRef = (Items.Num() == 1) ? *Items.CreateIterator() : FPlotReference();
	const int32 InsertIndex = ParentItemRef.GetTemplate()->GetIndex();
	if (ParentItemRef.IsValid())
	{
		//Parent
		ParentItemRef = InEditor->GetReferenceFromTemplate(ParentItemRef.GetTemplate()->GetParent());
	}

	if (ParentItemRef.IsValid())
	{
		const FString ExportedText = CopyItemsInternal(InPlot, Items);
		FScopedTransaction Transaction(FGenericCommands::Get().Duplicate->GetDescription());
		bool TransactionSuccesful = true;
		PasteItemsInternal(InEditor, InPlot, ExportedText, ParentItemRef, InsertIndex, TransactionSuccesful);
		if (!TransactionSuccesful)
		{
			Transaction.Cancel();
		}
	}
}

TArray<UPlotItem*> FPlotEditorUtils::PasteItems(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, FPlotReference ParentItemRef, int32 PasteIndex)
{
	FScopedTransaction Transaction(FGenericCommands::Get().Paste->GetDescription());

	// Grab the text to paste from the clipboard.
	FString TextToImport;
	FPlatformApplicationMisc::ClipboardPaste(TextToImport);

	bool bTransactionSuccessful = true;
	TArray<UPlotItem*> PastedItems = PasteItemsInternal(InEditor, InPlot, TextToImport, ParentItemRef, PasteIndex, bTransactionSuccessful);
	if (!bTransactionSuccessful)
	{
		Transaction.Cancel();
	}
	return PastedItems;
}

TArray<UPlotItem*> FPlotEditorUtils::PasteItemsInternal(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, const FString& TextToImport, FPlotReference ParentItemRef, int32 PasteIndex, bool& bTransactionSuccessful)
{
	// Import the nodes
	TSet<UPlotItem*> PastedItems;
	FPlotEditorUtils::ImportItemsFromText(InPlot, TextToImport, /*out*/ PastedItems);

	// Ignore an empty set of widget paste data.
	if (PastedItems.Num() == 0)
	{
		bTransactionSuccessful = false;
		return TArray<UPlotItem*>();
	}
	//
	TArray<UPlotItem*> RootPasteItems;
	for (UPlotItem* NewItem : PastedItems)
	{
		if (NewItem->Parent == nullptr)
			RootPasteItems.Add(NewItem);
	}

	UPlotItem* ParentItem = nullptr;

	if (ParentItemRef.IsValid())
	{
		ParentItem = ParentItemRef.GetTemplate();
	}
	if (!ParentItem)
	{
		bTransactionSuccessful = false;
		return TArray<UPlotItem*>();
	}
	//向上一级
	if (!ParentItem->CanHaveMultipleChildren()) {
		ParentItem = ParentItem->Parent;
	}

	if (!ParentItem)
	{
		bTransactionSuccessful = false;
		return TArray<UPlotItem*>();
	}

	if (!ParentItem->CanHaveMultipleChildren())
	{
		const FNotificationInfo Info(LOCTEXT("CanNotPaste", "Can't paste contents  //CanHaveMultipleChildren."));
		FSlateNotificationManager::Get().AddNotification(Info);
		bTransactionSuccessful = false;
		return TArray<UPlotItem*>();
	}
	ParentItem->Modify();
	for (UPlotItem* NewItem : RootPasteItems)
	{
		NewItem->Parent = ParentItem;
		if (const auto BranchItem = Cast<UPlotItem_Branch>(NewItem)) {
			BranchItem->bDefaultAdd = false;
		}
		const bool bSuc = ParentItem->InsertChildAt(PasteIndex + 1, NewItem);
		if (bSuc)
		{
			InEditor->RefreshPreview();
		}
	}

	InPlot->BroadcastChanged();
	return RootPasteItems;
}

bool FPlotEditorUtils::IsUsableItemClass(UClass* ItemClass)
{
	if (ItemClass->IsChildOf(UPlotItem::StaticClass()))
	{
		if (ItemClass->GetName() == UPlotItem_Root::StaticClass()->GetName()
			|| ItemClass->GetName() == UPlotItem_Branch_Item::StaticClass()->GetName()
			|| ItemClass->GetName() == UPlotItem_Sequence_Item::StaticClass()->GetName())
		{
			return false;
		}
		const bool bIsInvalid = ItemClass->HasAnyClassFlags(CLASS_Abstract | CLASS_Deprecated | CLASS_NewerVersionExists);
		if (bIsInvalid)
		{
			return false;
		}
		const bool bIsSkeletonClass = ItemClass->HasAnyFlags(RF_Transient) && ItemClass->HasAnyClassFlags(CLASS_CompiledFromBlueprint);
		if (bIsSkeletonClass)
		{
			return false;
		}

		return true;
	}
	return false;
}

void FPlotEditorUtils::ExportItemsToText(TArray<UPlotItem*> ItemsToExport, FString& ExportedText)
{
	// Clear the mark state for saving.
	UnMarkAllObjects(EObjectMark(OBJECTMARK_TagExp | OBJECTMARK_TagImp));
	FStringOutputDevice Archive;
	const TArray<UObject*> ItemsToIgnore;
	UObject* LastOuter = nullptr;
	for (UPlotItem* Item : ItemsToExport)
	{
		// The nodes should all be from the same scope
		UObject* ThisOuter = Item->GetOuter();
		check((LastOuter == ThisOuter) || (LastOuter == nullptr));
		LastOuter = ThisOuter;
	}
	const FExportObjectInnerContext Context(ItemsToIgnore);
	// Export each of the selected nodes
	for (UPlotItem* Item : ItemsToExport)
	{
		UExporter::ExportToOutputDevice(&Context, Item, nullptr, Archive, TEXT("copy"), 0, PPF_ExportsNotFullyQualified | PPF_Copy | PPF_Delimited, false, LastOuter);
	}
	ExportedText = static_cast<FString>(Archive);
}

void FPlotEditorUtils::ImportItemsFromText(UPlot* InPlot, const FString& TextToImport, TSet<UPlotItem*>& ImportedItemSet)
{
	UPackage* TempPackage = GetTransientPackage();
	TempPackage->AddToRoot();

	// Turn the text buffer into objects
	FPlotObjectTextFactory Factory;
	Factory.ProcessBuffer(TempPackage, RF_Transactional, TextToImport);

	for (auto& Entry : Factory.NewItemMap)
	{
		UPlotItem* Item = Entry.Value;
		ImportedItemSet.Add(Item);
		Item->SetFlags(RF_Transactional);

		TArray<UPlotItem*> Items = Item->Childs;
		for (int32 Index = 0; Index < Item->GetChildrenCount(); Index++)
		{
			Item->GetChildAt(Index)->Parent = Item;
		}

		FString ItemOldName = Item->GetName();
		FString NewName = FindNextValidName(InPlot, ItemOldName);
		if (NewName != ItemOldName)
		{
			Item->Rename(*NewName, InPlot);
		}
		else
		{
			Item->Rename(*ItemOldName, InPlot);
		}
	}
	// Remove the temp package from the root now that it has served its purpose.
	TempPackage->RemoveFromRoot();
}

void FPlotEditorUtils::ExportPropertiesToText(UObject* Object, TMap<FName, FString>& ExportedProperties)
{
	if (Object)
	{
		for (TFieldIterator<FProperty> PropertyIt(Object->GetClass(), EFieldIteratorFlags::ExcludeSuper); PropertyIt; ++PropertyIt)
		{
			FProperty* Property = *PropertyIt;

			// Don't serialize out object properties, we just want value data.
			if (!Property->IsA<FObjectProperty>())
			{
				FString ValueText;
				if (Property->ExportText_InContainer(0, ValueText, Object, Object, Object, PPF_IncludeTransient))
				{
					ExportedProperties.Add(Property->GetFName(), ValueText);
				}
			}
		}
	}
}

void FPlotEditorUtils::ImportPropertiesFromText(UObject* Object, const TMap<FName, FString>& ExportedProperties)
{
	if (Object)
	{
		for (const auto& Entry : ExportedProperties)
		{
			if (FProperty* Property = FindFProperty<FProperty>(Object->GetClass(), Entry.Key))
			{
				FEditPropertyChain PropertyChain;
				PropertyChain.AddHead(Property);
				Object->PreEditChange(PropertyChain);

				Property->ImportText(*Entry.Value, Property->ContainerPtrToValuePtr<uint8>(Object), 0, Object);

				FPropertyChangedEvent ChangedEvent(Property);
				Object->PostEditChangeProperty(ChangedEvent);
			}
		}
	}
}

void FPlotEditorUtils::Play(TSharedRef<FPlotEditor> InEditor, UPlot* InPlot, TSet<FPlotReference> Items)
{
	UPlotItem* SimulateItem = nullptr;
	if (Items.Num() > 0)
	{
		UPlotItem* Item = Items.Array()[0].GetTemplate();
		if (Item->IsA(UPlotItem_Root::StaticClass()))
		{
		}
		else
		{
			SimulateItem = Item;
		}
	}
	//点击sequence子轨道 从sequence节点开始播放
	if (SimulateItem)
	{
		auto Parent = SimulateItem->GetParent();
		while (Parent)
		{
			if (Parent->IsA(UPlotItem_PlaySequence::StaticClass()))
			{
				SimulateItem = Parent;
				break;
			}
			Parent = Parent->GetParent();
		}
	}

	InEditor.Get().OnPlotPreviewUpdated.Broadcast(SimulateItem);
}

bool FPlotEditorUtils::IsSequenceSubItem(UPlotItem* InItem) {
	if (InItem)
	{
		auto Parent = InItem->GetParent();
		while (Parent)
		{
			if (Parent->IsA(UPlotItem_PlaySequence_Item::StaticClass()))
			{
				return true;
			}
			Parent = Parent->GetParent();
		}
	}
	return false;
}
#undef LOCTEXT_NAMESPACE
