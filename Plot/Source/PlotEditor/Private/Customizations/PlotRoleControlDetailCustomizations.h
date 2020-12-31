// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "PlotEditor.h"

class IDetailLayoutBuilder;
class IPropertyHandle;

/**
 *
 */
class FPlotRoleControlDetailCustomizations : public IDetailCustomization
{
public:
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<class IDetailCustomization> MakeInstance(TSharedRef<FPlotEditor> InEditor)
	{
		return MakeShareable(new FPlotRoleControlDetailCustomizations(InEditor));
	}

	FPlotRoleControlDetailCustomizations(TSharedRef<FPlotEditor> InEditor)
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
private:
	FReply RestPos();
	FReply UsePos();
	TWeakObjectPtr<class UPlotItem_RoleControl> MyRoleControl;
	TWeakPtr<FPlotEditor> Editor;
};
