
#include "PlotRootDetailCustomizations.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "PlotItem.h"

#define LOCTEXT_NAMESPACE "PLOT"

void FPlotRootDetailCustomizations::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	MyRoot = GetObjectBeingCustomized<UPlotItem_Root>(DetailLayout);
	if (!MyRoot.IsValid())
	{
		return;
	}

	TArray<FName> CategoryNames;
	DetailLayout.GetCategoryNames(CategoryNames);

	FName CategoryName = CategoryNames.Num() > 0 ? CategoryNames[0] : FName(TEXT("Custom"));
	IDetailCategoryBuilder& CategoryBuilder = DetailLayout.EditCategory(CategoryName, FText::GetEmpty(), ECategoryPriority::Important);

	FDetailWidgetRow& CustomRow = CategoryBuilder.AddCustomRow(FText::GetEmpty())
		.WholeRowContent()[
			SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()[

					SNew(SButton)
						.Text(FText::FromString(TEXT("重置对话参数")))
						.HAlign(HAlign_Center)
						.OnClicked_Raw(this, &FPlotRootDetailCustomizations::RestTalkArgs)
				]
		];

}

FReply FPlotRootDetailCustomizations::RestTalkArgs()
{
	if (MyRoot.IsValid()) {
		MyRoot->ResetTalkArgs();
	}
	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
