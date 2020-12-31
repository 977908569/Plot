
#include "PlotRoleControlDetailCustomizations.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "PlotItem_RoleControl.h"

#define LOCTEXT_NAMESPACE "PLOT"

void FPlotRoleControlDetailCustomizations::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	MyRoleControl = GetObjectBeingCustomized<UPlotItem_RoleControl>(DetailLayout);
	if (!MyRoleControl.IsValid())
	{
		return;
	}

	TArray<FName> CategoryNames;
	DetailLayout.GetCategoryNames(CategoryNames);

	FName CategoryName = CategoryNames.Num() > 0 ? CategoryNames[0] : FName(TEXT("Custom"));
	IDetailCategoryBuilder& CategoryBuilder = DetailLayout.EditCategory(CategoryName, FText::GetEmpty(), ECategoryPriority::Important);

	FDetailWidgetRow& CustomRow = CategoryBuilder.AddCustomRow(FText::GetEmpty())
		.WholeRowWidget
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()[

				SNew(SButton)
					.Text(FText::FromString(TEXT("角色归位")))
					.HAlign(HAlign_Center)
					.OnClicked_Raw(this, &FPlotRoleControlDetailCustomizations::RestPos)
			]
		+ SHorizontalBox::Slot()[

			SNew(SButton)
				.Text(FText::FromString(TEXT("更新位置")))
				.HAlign(HAlign_Center)
				.OnClicked_Raw(this, &FPlotRoleControlDetailCustomizations::UsePos)
		]
		];
}

FReply FPlotRoleControlDetailCustomizations::RestPos()
{
	//
	if (MyRoleControl.IsValid())
	{
		MyRoleControl->ResetPos();
	}
	return FReply::Handled();
}

FReply FPlotRoleControlDetailCustomizations::UsePos()
{
	//
	if (MyRoleControl.IsValid())
	{
		MyRoleControl->UpdatePos();
	}
	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
