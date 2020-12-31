
#include "PlotTemplateBlueprintClass.h"
#include "IDocumentation.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Styling/SlateIconFinder.h"
#include "Subsystems/AssetEditorSubsystem.h"
#include "Editor.h"
#include "PlotItem.h"
#define LOCTEXT_NAMESPACE "PlotEditor"

FPlotTemplateBlueprintClass::FPlotTemplateBlueprintClass(const FAssetData& InPlotAssetData, TSubclassOf<UPlotItem> InPlotItemClass)
	: FPlotTemplateClass(InPlotAssetData, InPlotItemClass)
{
}

FPlotTemplateBlueprintClass::~FPlotTemplateBlueprintClass()
{
}

FText FPlotTemplateBlueprintClass::GetCategory() const
{
	if (PlotClass.Get())
	{
		UPlotItem* DefaultUserItem = PlotClass->GetDefaultObject<UPlotItem>();
		return DefaultUserItem->GetPaletteCategory();
	}
	else
	{
		auto DefaultUserItem = UPlotItem::StaticClass()->GetDefaultObject<UPlotItem>();
		return DefaultUserItem->GetPaletteCategory();
	}
}

UPlotItem* FPlotTemplateBlueprintClass::Create(UPlot* InPlot)
{
	if (!PlotClass.Get())
	{
		const FString AssetPath = PlotAssetData.ObjectPath.ToString();
		UBlueprint* LoadedItem = LoadObject<UBlueprint>(nullptr, *AssetPath);
		PlotClass = *LoadedItem->GeneratedClass;
	}
	return FPlotTemplateClass::Create(InPlot);
}

const FSlateBrush* FPlotTemplateBlueprintClass::GetIcon() const
{
	return FSlateIconFinder::FindIconBrushForClass(UPlotItem::StaticClass());

}

TSharedRef<IToolTip> FPlotTemplateBlueprintClass::GetToolTip() const
{
	FText Description;
	FString DescriptionStr = PlotAssetData.GetTagValueRef<FString>( GET_MEMBER_NAME_CHECKED( UBlueprint, BlueprintDescription ) );
	if ( !DescriptionStr.IsEmpty() )
	{
		DescriptionStr.ReplaceInline( TEXT( "\\n" ), TEXT( "\n" ) );
		Description = FText::FromString( MoveTemp(DescriptionStr) );
	}
	else
	{
		Description = Name;
	}
	return IDocumentation::Get()->CreateToolTip( Description, nullptr, FString( TEXT( "Shared/Types/" ) ) + Name.ToString(), TEXT( "Class" ) );
}

FReply FPlotTemplateBlueprintClass::OnDoubleClicked()
{
	GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(PlotAssetData.GetAsset());
	return FReply::Handled();
}

UClass* FPlotTemplateBlueprintClass::GetTemplateClass()
{
	if (!PlotClass.Get())
	{
		const FString AssetPath = PlotAssetData.ObjectPath.ToString();
		UBlueprint* LoadedItem = LoadObject<UBlueprint>(nullptr, *AssetPath);
		PlotClass = *LoadedItem->GeneratedClass;
	}
	return PlotClass.Get();
}
#undef LOCTEXT_NAMESPACE
