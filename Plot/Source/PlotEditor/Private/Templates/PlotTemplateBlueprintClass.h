
#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Input/Reply.h"
#include "AssetData.h"
#include "PlotTemplateClass.h"
#include "Widgets/IToolTip.h"
class FPlotTemplateBlueprintClass : public FPlotTemplateClass
{
public:
	FPlotTemplateBlueprintClass(const FAssetData& InPlotAssetData, TSubclassOf<UPlotItem> InPlotItemClass = nullptr);
	virtual ~FPlotTemplateBlueprintClass();
	virtual FText GetCategory() const override;
	virtual UPlotItem* Create(UPlot* InPlot) override;
	virtual const FSlateBrush* GetIcon() const override;
	virtual TSharedRef<IToolTip> GetToolTip() const override;
	virtual FReply OnDoubleClicked() override;
	virtual UClass* GetTemplateClass() override;
};
