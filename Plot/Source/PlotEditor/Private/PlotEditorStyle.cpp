// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlotEditorStyle.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleRegistry.h"

TSharedPtr< FSlateStyleSet > FPlotEditorStyle::StyleInstance = NULL;

void FPlotEditorStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FPlotEditorStyle::Shutdown()
{
	if (StyleInstance.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
		ensure(StyleInstance.IsUnique());
		StyleInstance.Reset();
	}
}

FName FPlotEditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("PlotStyle"));
	return StyleSetName;
}

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BORDER_BRUSH( RelativePath, ... ) FSlateBorderBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define TTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".ttf") ), __VA_ARGS__ )
#define OTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".otf") ), __VA_ARGS__ )

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);
const FVector2D Icon40x40(40.0f, 40.0f);

TSharedRef< FSlateStyleSet > FPlotEditorStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("PlotStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin(TEXT("Plot"))->GetBaseDir() / TEXT("Resources"));

	Style->Set(FName(TEXT("ClassThumbnail.Plot")), new IMAGE_BRUSH("PlotIcon128", FVector2D(128, 128)));
	Style->Set(FName(TEXT("ClassIcon.Plot")), new IMAGE_BRUSH("PlotIcon16", FVector2D(16, 16)));
	Style->Set("Plot.OpenPluginWindow", new IMAGE_BRUSH(TEXT("ButtonIcon_40x"), Icon40x40));

	Style->Set("ClassIcon.PlotItem", new IMAGE_BRUSH(TEXT("Item"), Icon16x16));
	Style->Set("ClassIcon.PlotItem_Branch", new IMAGE_BRUSH(TEXT("icon_branch_16x"), Icon16x16));
	Style->Set("ClassIcon.PlotItem_Branch_Item", new IMAGE_BRUSH(TEXT("icon_branch_item_16x"), Icon16x16));
	Style->Set("ClassIcon.PlotItem_Root", new IMAGE_BRUSH(TEXT("icon_branch_root_16x"), Icon16x16));
	
	return Style;
}

#undef IMAGE_BRUSH
#undef BOX_BRUSH
#undef BORDER_BRUSH
#undef TTF_FONT
#undef OTF_FONT

void FPlotEditorStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FPlotEditorStyle::Get()
{
	return *StyleInstance;
}
