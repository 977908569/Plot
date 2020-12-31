
#include "PlotItemlCustomizations.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "PlotItem.h"
#include "Utils/PlotEditorUtils.h"

#define LOCTEXT_NAMESPACE "PLOT"

void FPlotItemlCustomizations::CustomizeDetails(IDetailLayoutBuilder& DetailLayout)
{
	MyItem = GetObjectBeingCustomized<UPlotItem>(DetailLayout);
	if (!MyItem.IsValid())
	{
		return;
	}

	auto PropertyHandle = DetailLayout.GetProperty(GET_MEMBER_NAME_CHECKED(UPlotItem, TrackTime));
	PropertyHandle->MarkHiddenByCustomization();

	if (FPlotEditorUtils::IsSequenceSubItem(MyItem.Get())) {
		IDetailPropertyRow& ConfigPropertyRow = DetailLayout.AddPropertyToCategory(PropertyHandle);
		ConfigPropertyRow.CustomWidget()
			.NameContent()
			[
				PropertyHandle->CreatePropertyNameWidget()
			]
		.ValueContent()
			[
				PropertyHandle->CreatePropertyValueWidget()
			];
	}

}

EVisibility FPlotItemlCustomizations::GetVisbility()
{
	return  EVisibility::Collapsed;
}


#undef LOCTEXT_NAMESPACE
