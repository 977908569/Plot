
#include "PlotTemplateClass.h"
#if WITH_EDITOR
#include "Editor.h"
#endif // WITH_EDITOR
#include "IDocumentation.h"
#include "PlotItem.h"
#include "Styling/SlateIconFinder.h"
#define LOCTEXT_NAMESPACE "PlotEditor"

UClass* FPlotTemplateClass::GetTemplateClass()
{
	if (!PlotClass.Get())
	{
		const FString AssetPath = PlotAssetData.ObjectPath.ToString();
		UBlueprint* LoadedBP = LoadObject<UBlueprint>(nullptr, *AssetPath);
		PlotClass = *LoadedBP->GeneratedClass;
	}
	return PlotClass.Get();
}

FPlotTemplateClass::FPlotTemplateClass()
	: PlotClass(nullptr)
{
	GEditor->OnObjectsReplaced().AddRaw(this, &FPlotTemplateClass::OnObjectsReplaced);
}

FPlotTemplateClass::FPlotTemplateClass(TSubclassOf<UPlotItem> InClass)
	: PlotClass(InClass.Get())
{
	Name = PlotClass->GetDisplayNameText();
	GEditor->OnObjectsReplaced().AddRaw(this, &FPlotTemplateClass::OnObjectsReplaced);
}

FPlotTemplateClass::FPlotTemplateClass(const FAssetData& InPlotAssetData, TSubclassOf<UPlotItem> InItem)
	:PlotAssetData(InPlotAssetData)
{
	if (InItem)
	{
		PlotClass = *InItem;
		Name = InItem->GetDisplayNameText();
	}
	else
	{
		Name = FText::FromString(FName::NameToDisplayString(PlotAssetData.AssetName.ToString(), false));
	}
}

FPlotTemplateClass::~FPlotTemplateClass()
{
	GEditor->OnObjectsReplaced().RemoveAll(this);
}

FText FPlotTemplateClass::GetCategory() const
{
	if (PlotClass.Get())
	{
		auto DefaultItem = PlotClass->GetDefaultObject<UPlotItem>();
		return DefaultItem->GetPaletteCategory();
	}
	else
	{
		auto DefaultItem = UPlotItem::StaticClass()->GetDefaultObject<UPlotItem>();
		return DefaultItem->GetPaletteCategory();
	}
}

UPlotItem* FPlotTemplateClass::Create(UPlot* InPlot)
{
	if (!PlotClass.Get())
	{
		const FString AssetPath = PlotAssetData.ObjectPath.ToString();
		UBlueprint* LoadedBP = LoadObject<UBlueprint>(nullptr, *AssetPath);
		PlotClass = *LoadedBP->GeneratedClass;
	}
	return  CreateNamed(InPlot, NAME_None);
}

const FSlateBrush* FPlotTemplateClass::GetIcon() const
{
	if (PlotClass.IsValid())
	{
		return FSlateIconFinder::FindIconBrushForClass(PlotClass.Get());
	}
	else
	{
		return FSlateIconFinder::FindIconBrushForClass(UPlotItem::StaticClass());
	}
}

TSharedRef<IToolTip> FPlotTemplateClass::GetToolTip() const
{
	if (PlotClass.IsValid())
	{
		return IDocumentation::Get()->CreateToolTip(PlotClass->GetToolTipText(), nullptr, FString(TEXT("Shared/Types/")) + PlotClass->GetName(), TEXT("Class"));
	}
	else
	{
		FText Description;
		FString DescriptionStr = PlotAssetData.GetTagValueRef<FString>(GET_MEMBER_NAME_CHECKED(UBlueprint, BlueprintDescription));
		if (!DescriptionStr.IsEmpty())
		{
			DescriptionStr.ReplaceInline(TEXT("\\n"), TEXT("\n"));
			Description = FText::FromString(MoveTemp(DescriptionStr));
		}
		else
		{
			Description = Name;
		}
		return IDocumentation::Get()->CreateToolTip(Description, nullptr, FString(TEXT("Shared/Types/")) + Name.ToString(), TEXT("Class"));
	}
}

void FPlotTemplateClass::GetFilterStrings(TArray<FString>& OutStrings) const
{
	FPlotTemplate::GetFilterStrings(OutStrings);
	if (PlotClass.IsValid())
	{
		OutStrings.Add(PlotClass->GetName());
	}
}

void FPlotTemplateClass::OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap)
{
	UObject* const* NewObject = ReplacementMap.Find(PlotClass.Get());
	if (NewObject)
	{
		PlotClass = CastChecked<UClass>(*NewObject);
	}
}

UPlotItem* FPlotTemplateClass::CreateNamed(UPlot* InPlot, FName NameOverride) const
{
	if (NameOverride != NAME_None)
	{
		UObject* ExistingObject = StaticFindObject(UObject::StaticClass(), InPlot, *NameOverride.ToString());
		if (ExistingObject != nullptr)
		{
			NameOverride = MakeUniqueObjectName(InPlot, PlotClass.Get(), NameOverride);
		}
	}
	UPlotItem* NewItem = InPlot->ConstructItem(PlotClass.Get(), NameOverride);
	return NewItem;
}

#undef LOCTEXT_NAMESPACE
