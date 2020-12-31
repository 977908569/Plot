
#include "PlotDetailCustomizations.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "PlotItem.h"

#define LOCTEXT_NAMESPACE "PLOT"

void FPlotDetailCustomizations::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	MyPlot = GetObjectBeingCustomized<UPlot>(DetailLayout);
	if (!MyPlot.IsValid())
	{
		return;
	}
	ConfigPropertyHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UPlot, PlotConfig));
	ConfigPropertyHandle->MarkHiddenByCustomization();
	IDetailPropertyRow& ConfigPropertyRow = DetailLayout.AddPropertyToCategory(ConfigPropertyHandle);

	ConfigPropertyRow.CustomWidget()
		.NameContent()
		[
			ConfigPropertyHandle->CreatePropertyNameWidget()
		]
	.ValueContent()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			ConfigPropertyHandle->CreatePropertyValueWidget()
		]
	+ SHorizontalBox::Slot()
		.Padding(200, 0)
		.AutoWidth()
		[
			SNew(SButton)
			.Text(FText::FromString(TEXT("打开配置文件夹")))
		.HAlign(HAlign_Center)
		.OnClicked_Raw(this, &FPlotDetailCustomizations::OpenConfigFolder)
		]
		];
}

FReply FPlotDetailCustomizations::OpenConfigFolder()
{
	FString OutText;
	if (ConfigPropertyHandle->GetValue(OutText) == FPropertyAccess::Success)
	{
		const FString FilePath = FPaths::ProjectContentDir() / TEXT("Settings/dialogue/") + OutText + TEXT(".txt");
		FPlatformProcess::ExploreFolder(*FilePath);
	}
	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
