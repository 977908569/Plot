#pragma once
#include "CoreMinimal.h"
#include "Toolkits/IToolkitHost.h"
#include "AssetTypeActions_Base.h"
struct FAssetData;
class FAssetTypeActions_Plot : public FAssetTypeActions_Base
{
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_Plot", "Plot"); }
	virtual FColor GetTypeColor() const override { return FColor(44, 89, 180); }
	virtual UClass* GetSupportedClass() const override;
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Blueprint; }
	virtual bool CanLocalize() const override { return false; }
	virtual FText GetAssetDescription( const FAssetData& AssetData ) const override;
	// End IAssetTypeActions Implementation
};
