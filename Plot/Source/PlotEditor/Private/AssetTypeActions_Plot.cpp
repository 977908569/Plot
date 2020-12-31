
#include "AssetTypeActions_Plot.h"
#include "Misc/MessageDialog.h"
#include "PlotEditor.h"
#define LOCTEXT_NAMESPACE "AssetTypeActions"

void FAssetTypeActions_Plot::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		const auto PlotObj = Cast<UPlot>(*ObjIt);
		if (PlotObj)
		{
			TSharedRef<FPlotEditor> NewPlotEitor(new FPlotEditor());
			NewPlotEitor->InitPlotEditor(Mode, EditWithinLevelEditor, PlotObj, true);
		}
		else
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FailedToLoadWPlot", "Plot could not be loaded because it derives from an invalid class."));
		}
	}
}

UClass* FAssetTypeActions_Plot::GetSupportedClass() const
{
	return UPlot::StaticClass();
}

FText FAssetTypeActions_Plot::GetAssetDescription(const FAssetData& AssetData) const
{
	return FText::FromString(TEXT("Plot Des"));
}

#undef LOCTEXT_NAMESPACE
