
#include "Designer/SPlotDesignerToolBar.h"
#include "Framework/MultiBox/MultiBoxDefs.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "SViewportToolBarComboMenu.h"
#define LOCTEXT_NAMESPACE "PLOT"

void SPlotDesignerToolBar::Construct( const FArguments& InArgs )
{
	CommandList = InArgs._CommandList;

	ChildSlot
	[
		MakeToolBar(InArgs._Extenders)
	];

	SViewportToolBar::Construct(SViewportToolBar::FArguments());
}

TSharedRef< SWidget > SPlotDesignerToolBar::MakeToolBar(const TSharedPtr< FExtender > InExtenders)
{
	FToolBarBuilder ToolbarBuilder( CommandList, FMultiBoxCustomization::None, InExtenders );
	return ToolbarBuilder.MakeWidget();
}
#undef LOCTEXT_NAMESPACE
