
#pragma once
#include "CoreMinimal.h"
#include "Widgets/SWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "SViewportToolBar.h"

class FExtender;
class FUICommandList;
enum class ECheckBoxState : uint8;
class SPlotDesignerToolBar : public SViewportToolBar
{
public:
	SLATE_BEGIN_ARGS( SPlotDesignerToolBar ){}
		SLATE_ARGUMENT( TSharedPtr<FUICommandList>, CommandList )
		SLATE_ARGUMENT( TSharedPtr<FExtender>, Extenders )
	SLATE_END_ARGS()
	void Construct( const FArguments& InArgs );
	TSharedRef< SWidget > MakeToolBar( const TSharedPtr< FExtender > InExtenders );	

	TSharedPtr<FUICommandList> CommandList;
};
