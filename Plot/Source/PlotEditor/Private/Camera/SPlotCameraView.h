#pragma once
#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "PlotEditor.h"

class SPlotCameraView : public SCompoundWidget, public FNotifyHook
{
public:
	SLATE_BEGIN_ARGS(SPlotCameraView){}
	SLATE_END_ARGS()
	void Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InBlueprintEditor);
	virtual ~SPlotCameraView();
	virtual void NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FEditPropertyChain* PropertyThatChanged) override;
	FReply AddCameraItem();
private:
	TSharedPtr<class IDetailsView> PropertyView;
	TWeakPtr<class FPlotEditor> PlotEditor;
};
