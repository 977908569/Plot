#pragma once
#include "CoreMinimal.h"
#include "PlotTemplate.h"
#include "Widgets/IToolTip.h"

class FPlotTemplateClass : public FPlotTemplate
{
public:
	explicit FPlotTemplateClass(TSubclassOf<UPlotItem> InClass);
	explicit FPlotTemplateClass(const FAssetData& InPlotAssetData, TSubclassOf<UPlotItem> InItem);
	virtual ~FPlotTemplateClass();
	virtual FText GetCategory() const override;
	virtual UPlotItem* Create(UPlot* InPlot) override;
	virtual const FSlateBrush* GetIcon() const override;
	virtual TSharedRef<IToolTip> GetToolTip() const override;
	virtual void GetFilterStrings(TArray<FString>& OutStrings) const override;
	TWeakObjectPtr<UClass> GetItemClass() const { return PlotClass; }
	virtual UClass* GetTemplateClass() override;
protected:
	FPlotTemplateClass();
	void OnObjectsReplaced(const TMap<UObject*, UObject*>& ReplacementMap);
	UPlotItem* CreateNamed(class UPlot* InPlot, FName NameOverride) const;
protected:
	TWeakObjectPtr<UClass> PlotClass;
	FAssetData PlotAssetData;
};
