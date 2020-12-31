
#pragma once
#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "PlotEditor.h"

class IDetailLayoutBuilder;
class IPropertyHandle;

/**
 *
 */
class FPlotItemlCustomizations : public IDetailCustomization
{
public:
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<class IDetailCustomization> MakeInstance(TSharedRef<FPlotEditor> InEditor)
	{
		return MakeShareable(new FPlotItemlCustomizations(InEditor));
	}

	FPlotItemlCustomizations(TSharedRef<FPlotEditor> InEditor)
	{
		Editor = InEditor;
	}

	/** IDetailCustomization interface */
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;


	template<typename T>
	static T* GetObjectBeingCustomized(IDetailLayoutBuilder& DetailBuilder)
	{
		TArray<TWeakObjectPtr<UObject>> Objects;
		DetailBuilder.GetObjectsBeingCustomized(Objects);
		for (TWeakObjectPtr<UObject> Object : Objects)
		{
			if (T* CastedObject = Cast<T>(Object.Get()))
			{
				return CastedObject;
			}
		}

		return nullptr;
	}

	EVisibility GetVisbility();
private:
	TWeakObjectPtr<class UPlotItem> MyItem;
	TWeakPtr<FPlotEditor> Editor;
};
