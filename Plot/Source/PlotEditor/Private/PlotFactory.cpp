// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlotFactory.h"
#include "Blueprint/UserWidget.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "ClassViewerModule.h"
#include "ClassViewerFilter.h"
#include "Plot.h"
#include "AssetTypeCategories.h"
#include "PlotItem.h"
#define LOCTEXT_NAMESPACE "UPlotFactory"

class FPlotClassFilter : public IClassViewerFilter
{
public:
	/** All children of these classes will be included unless filtered out by another setting. */
	TSet <const UClass*> AllowedChildrenOfClasses;

	/** Disallowed class flags. */
	EClassFlags DisallowedClassFlags;

	virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
	{
		return !InClass->HasAnyClassFlags(DisallowedClassFlags)
			&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InClass) != EFilterReturn::Failed;
	}

	virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef< const IUnloadedBlueprintData > InUnloadedClassData, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
	{
		return !InUnloadedClassData->HasAnyClassFlags(DisallowedClassFlags)
			&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InUnloadedClassData) != EFilterReturn::Failed;
	}

};

UPlotFactory::UPlotFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UPlot::StaticClass();
}

UObject* UPlotFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	const auto NewAsset = NewObject<UPlot>(InParent, Name, Flags | RF_Transactional);
	if (NewAsset->RootItem == nullptr)
	{
		UPlotItem* Root = NewAsset->ConstructItem(UPlotItem_Root::StaticClass());
		NewAsset->RootItem = Root;
	}
	if (bOpen)
	{
		GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAsset(NewAsset);
	}
	return NewAsset;
}

FText UPlotFactory::GetDisplayName() const
{
	return LOCTEXT("PlotText", "Plot");
}

FString UPlotFactory::GetDefaultNewAssetName() const
{
	return TEXT("New Plot");
}

uint32 UPlotFactory::GetMenuCategories() const
{
	return EAssetTypeCategories::Gameplay;
}

#undef LOCTEXT_NAMESPACE
