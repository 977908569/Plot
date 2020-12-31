#include "SPlotCameraView.h"
#include "PlotItem_Branch.h"
#include "PlotItem_Sequence.h"
#include "PlotItem_SetCameraArgs.h"
#include "GameFramework/PlayerController.h"
#define LOCTEXT_NAMESPACE "PLOT"

void SPlotCameraView::Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InPlotEditor)
{
	PlotEditor = InPlotEditor;
	FPropertyEditorModule& EditModule = FModuleManager::Get().GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FNotifyHook* NotifyHook = this;
	FDetailsViewArgs DetailsViewArgs(false,
		false,
		true,
		FDetailsViewArgs::HideNameArea,
		true,
		NotifyHook,
		false,
		NAME_None);
	DetailsViewArgs.DefaultsOnlyVisibility = EEditDefaultsOnlyNodeVisibility::Automatic;
	PropertyView = EditModule.CreateDetailView(DetailsViewArgs);

	ChildSlot[

		SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 2)
			[
				PropertyView.ToSharedRef()

			]
		+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 2)
			[
				SNew(SButton)
				.Text(FText::FromString(TEXT("使用")))
			.HAlign(HAlign_Center)
			.OnClicked_Raw(this, &SPlotCameraView::AddCameraItem)
			]
	];

	UPlotCameraObj* CameraObj = PlotEditor.Pin()->GetPlot()->CameraObj;
	if (CameraObj == nullptr)
	{
		CameraObj = NewObject<UPlotCameraObj>(PlotEditor.Pin()->GetPlot());
		PlotEditor.Pin()->GetPlot()->CameraObj = CameraObj;
	}
	PropertyView->SetObject(CameraObj);
}

SPlotCameraView::~SPlotCameraView()
{

}

void SPlotCameraView::NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FEditPropertyChain* PropertyThatChanged)
{
	const static FName DesignerRebuildName("DesignerRebuild");
	if (PropertyChangedEvent.Property->HasMetaData(DesignerRebuildName) || PropertyThatChanged->GetActiveMemberNode()->GetValue()->HasMetaData(DesignerRebuildName))
	{
		PlotEditor.Pin()->OnDesignerChange.Broadcast();
	}
}

FReply SPlotCameraView::AddCameraItem() {
	const auto SelectItems = PlotEditor.Pin()->GetSelectedPlotItems();
	if (SelectItems.Num() > 0)
	{
		UPlot* MyPlot = PlotEditor.Pin()->GetPlot();
		UPlotItem* Select = SelectItems.Array()[0].GetTemplate();
		if (!Select->IsA(UPlotItem_Branch_Item::StaticClass())
			&& !Select->IsA(UPlotItem_Sequence_Item::StaticClass()))
		{
			UPlotItem* Parent = Select->Parent;
			if (Parent)
			{
				UPlotItem_SetCameraArgs* NewItem = Cast<UPlotItem_SetCameraArgs>(MyPlot->ConstructItem(UPlotItem_SetCameraArgs::StaticClass()));
				if (NewItem)
				{
					NewItem->Args = MyPlot->CameraObj->CameraArgs;
				}
				Parent->InsertChildAt(Select->GetIndex(), NewItem);
				MyPlot->BroadcastChanged();
			}
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Select Is Branch Item"))
		}
	}
	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
