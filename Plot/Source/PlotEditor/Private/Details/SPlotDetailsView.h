#pragma once
#include "CoreMinimal.h"
#include "Layout/Visibility.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SCompoundWidget.h"
#include "PlotEditor.h"
class IDetailsView;
class SBox;
class SEditableTextBox;
class SPlotDetailsView : public SCompoundWidget, public FNotifyHook
{
public:
	SLATE_BEGIN_ARGS( SPlotDetailsView ){}
	SLATE_END_ARGS()
	void Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InBlueprintEditor);
	virtual ~SPlotDetailsView();
	TSharedPtr<class IDetailsView> GetPropertyView() const { return PropertyView; }
	virtual void NotifyPreChange(FEditPropertyChain* PropertyAboutToChange) override;
	virtual void NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FEditPropertyChain* PropertyThatChanged) override;
	
private:
	void RegisterCustomizations();
	void OnEditorSelectionChanging();
	void OnEditorSelectionChanged();
	void OnPropertyViewObjectArrayChanged(const FString& InTitle, const TArray<UObject*>& InObjects);
	void ClearFocusIfOwned();
	bool IsItemCDOSelected() const;
	EVisibility GetBorderAreaVisibility() const;
	EVisibility GetNameAreaVisibility() const;
	const FSlateBrush* GetNameIcon() const;
	FText GetNameText() const;
	bool HandleVerifyNameTextChanged(const FText& InText, FText& OutErrorMessage);
	void HandleNameTextChanged(const FText& Text);
	void HandleNameTextCommitted(const FText& Text, ETextCommit::Type CommitType);
	EVisibility GetCategoryAreaVisibility() const;
	FText GetCategoryText() const;
	void HandleCategoryTextCommitted(const FText& Text, ETextCommit::Type CommitType);

private:
	TWeakPtr<class FPlotEditor> PlotEditor;
	TSharedPtr<SEditableTextBox> NameTextBox;
	TSharedPtr<SBox> ClassLinkArea;
	TSharedPtr<class IDetailsView> PropertyView;
	TArray< TWeakObjectPtr<UObject> > SelectedObjects;
};
