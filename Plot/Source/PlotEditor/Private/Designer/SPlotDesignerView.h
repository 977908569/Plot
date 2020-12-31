
#pragma once
#include "IAssetViewport.h"
#include "LevelEditorViewport.h"
#include "PlotEditor.h"
#include "SEditorViewport.h"
#include "SScaleBox.h"
#include "Blueprint/UserWidget.h"
#include "Slate/SGameLayerManager.h"

struct HActor;
class SPlotViewport;
class UPlot;
/**
 * Viewport Client
 */
class FPlotViewportClient : public FEditorViewportClient {
public:
	FPlotViewportClient(const TSharedRef<SPlotViewport>& InViewport);
	virtual ~FPlotViewportClient();
	virtual void Draw(const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	virtual UWorld* GetWorld() const override;
	virtual bool InputWidgetDelta(FViewport* InViewport, EAxisList::Type CurrentAxis, FVector& Drag, FRotator& Rot, FVector& Scale) override;
	virtual void ProcessClick(FSceneView& View, HHitProxy* HitProxy, FKey Key, EInputEvent Event, uint32 HitX, uint32 HitY) override;
	//Actor 
	void ApplyDeltaToActors(const FVector& InDrag, const FRotator& InRot, const FVector& InScale);
	void ApplyDeltaToActor(AActor* InActor, const FVector& InDeltaDrag, const FRotator& InDeltaRot, const FVector& InDeltaScale);
	void ApplyDeltaToComponent(USceneComponent* InComponent, const FVector& InDeltaDrag, const FRotator& InDeltaRot, const FVector& InDeltaScale);
private:
	TSharedPtr<SPlotViewport> MyViewport;
	FPlotCameraInfo CameraInfo;
};

/**
 * Viewport
 */
class SPlotViewport : public SEditorViewport, public IAssetViewport {
public:
	SLATE_BEGIN_ARGS(SPlotViewport) {}
	SLATE_END_ARGS()
		void Construct(const FArguments& InArgs, TSharedPtr<class FPlotEditor> InEditor);

	SPlotViewport();
	~SPlotViewport();

protected:
	virtual TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override {
		return PlotViewportClient.ToSharedRef();
	}
public:
	/** IAssetViewport Interface */
	virtual void StartPlayInEditorSession(UGameViewportClient* PlayClient, const bool bInSimulateInEditor) override;
	virtual void EndPlayInEditorSession() override;
	virtual void SwapViewportsForSimulateInEditor() override;
	virtual void SwapViewportsForPlayInEditor() override;
	virtual void OnSimulateSessionStarted() override;
	virtual void OnSimulateSessionFinished() override;
	virtual void RegisterGameViewportIfPIE() override;
	virtual bool HasPlayInEditorViewport() const override;
	virtual FViewport* GetActiveViewport() override;
	TSharedPtr<FSceneViewport> GetSharedActiveViewport() const override { return SceneViewport; };
	virtual TSharedRef< const SWidget> AsWidget() const override { return AsShared(); }
	virtual TSharedRef< SWidget> AsWidget() override { return AsShared(); }
	virtual TWeakPtr< SViewport > GetViewportWidget() override { return ViewportWidget; }
	virtual void AddOverlayWidget(TSharedRef<SWidget> OverlaidWidget) override;
	virtual void RemoveOverlayWidget(TSharedRef<SWidget> OverlaidWidget) override;
	virtual FEditorViewportClient& GetAssetViewportClient() override;
	virtual void MakeImmersive(const bool bWantImmersive, const bool bAllowAnimation) override;
	virtual bool IsImmersive() const override;
	virtual void ToggleGameView() override;
	virtual bool IsInGameView() const override;
	virtual bool IsInteractable() const override;
	virtual UWorld* GetWorld() const override;

	/** SEditorViewport Interface */
	virtual void OnFocusViewportToSelection() override;
	virtual EVisibility GetTransformToolbarVisibility() const override;

	void ConstructPlotEditorViewportClient(const FArguments& InArgs);
	void ConstructViewportOverlayContent();

	FSceneViewport* GetGameSceneViewport() const;
	FVector2D GetSViewportSize() const;
	EStretch::Type OnGetScaleBoxStretch() const;

	void OnActorSelectionChanged(const TArray<UObject*>& NewSelection, bool bForceRefresh = false);
public:
	TWeakPtr<FPlotEditor> PlotEditor;
	TSharedPtr<FPlotViewportClient> PlotViewportClient;
private:
	TSharedPtr<class FSceneViewport> InactiveViewport;
	TSharedPtr<SWidget> InactiveViewportWidgetEditorContent;
	TSharedPtr<class FSceneViewport> ActiveViewport;
	TSharedPtr<SOverlay> PIEViewportOverlayWidget;
	TSharedPtr<SGameLayerManager> GameLayerManager;
};
/**
 * Designer
 */
class SPlotDesignerView : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPlotDesignerView) {}
	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs, TSharedPtr<class FPlotEditor> InEditor);
	virtual ~SPlotDesignerView();
	void OnPreviewUpdate(UPlotItem* InItem);
	void OnDesignerChange();
	void CheckWorld();
	void CreatePlotWidget();
	void OnStartupFinished(bool bSuc);
	void OnEndFinished(bool bSuc);

	void OnCameraPosChange(FPlotCameraInfo CameraInfo);
private:
	TSharedPtr<SPlotViewport> Viewport;
	TWeakPtr<FPlotEditor> PlotEditor;
	bool bPlaying = false;
	TWeakObjectPtr<UPlotWidget> PlotWidget;
	TWeakObjectPtr<UWorld> MyWorld;
	FSoftObjectPath LastWorldPath;
	TWeakObjectPtr<UPlotItem> SimulateItem;
};

/**
 * Select Actor
 */
namespace PlotViewportClickHandlers
{
	bool ClickActor(FPlotViewportClient* ViewportClient, AActor* Actor, const FViewportClick& Click, bool bAllowSelectionChange);
};

