
#include "Designer/SPlotDesignerView.h"
#include "ActorEditorUtils.h"
#include "ActorGroupingUtils.h"
#include "BrushEditingSubsystem.h"
#include "ComponentEditorUtils.h"
#include "Dialogs.h"
#include "Components/PanelWidget.h"
#include "Widgets/Layout/SGridPanel.h"
#include "Editor.h"
#include "EditorModeManager.h"
#include "EngineUtils.h"
#include "HModel.h"
#include "KismetEditorUtilities.h"
#include "LevelEditor.h"
#include "PlotEditor.h"
#include "PlotWidget.h"
#include "SceneViewport.h"
#include "UnrealEdGlobals.h"
#include "Editor/GroupActor.h"
#include "Editor/UnrealEdEngine.h"
#include "Engine/Selection.h"
#include "GameFramework/GameModeBase.h"
#include "Editor/UnrealEd/Private/Editor/ActorPositioning.h"
#include "PlotItem.h"

#define LOCTEXT_NAMESPACE "PLOT"
FPlotViewportClient::FPlotViewportClient(const TSharedRef<SPlotViewport>& InViewport)
	: FEditorViewportClient(&GLevelEditorModeTools(), nullptr, StaticCastSharedRef<SEditorViewport>(InViewport))
{
	MyViewport = InViewport;
	ModeTools->SetWidgetMode(FWidget::WM_Translate);
	Widget->SetUsesEditorModeTools(ModeTools);
	bUsesDrawHelper = true;
	bWidgetAxisControlledByDrag = true;
}

FPlotViewportClient::~FPlotViewportClient() {}

void FPlotViewportClient::Draw(const FSceneView* View, FPrimitiveDrawInterface* PDI) {
	FEditorViewportClient::Draw(View, PDI);

	if (MyViewport.IsValid() && MyViewport.Get()->PlotEditor.IsValid())
	{
		CameraInfo.Postion = View->ViewLocation;
		CameraInfo.Rotator = View->ViewRotation;
		CameraInfo.FOV = View->FOV;
		CameraInfo.Direction = View->GetViewDirection();
		MyViewport.Get()->PlotEditor.Pin()->GetPlot()->CameraObj->CameraArgs.Set(CameraInfo);
	}
}

UWorld* FPlotViewportClient::GetWorld() const {

	if (bIsSimulateInEditorViewport)
	{
		return GEditor->PlayWorld;
	}
	else if (MyViewport.IsValid() && MyViewport->GetWorld())
	{
		return MyViewport->GetWorld();
	}

	return FEditorViewportClient::GetWorld();
}

bool FPlotViewportClient::InputWidgetDelta(FViewport* InViewport, EAxisList::Type InCurrentAxis, FVector& Drag, FRotator& Rot, FVector& Scale) {

	if (GUnrealEd->ComponentVisManager.HandleInputDelta(this, InViewport, Drag, Rot, Scale))
	{
		return true;
	}

	bool bHandled = false;

	// Give the current editor mode a chance to use the input first.  If it does, don't apply it to anything else.
	if (FEditorViewportClient::InputWidgetDelta(InViewport, InCurrentAxis, Drag, Rot, Scale))
	{
		bHandled = true;
	}
	else
	{
		//@TODO: MODETOOLS: Much of this needs to get pushed to Super, but not all of it can be...
		if (InCurrentAxis != EAxisList::None)
		{
			// Skip actors transformation routine in case if any of the selected actors locked
			// but still pretend that we have handled the input
			if (!GEditor->HasLockedActors())
			{
				const bool MiddleMouseButtonDown = InViewport->KeyState(EKeys::MiddleMouseButton);

				// We do not want actors updated if we are holding down the middle mouse button.
				if (!MiddleMouseButtonDown)
				{
					ApplyDeltaToActors(Drag, Rot, Scale);

					ApplyDeltaToRotateWidget(Rot);
				}

				ModeTools->PivotLocation += Drag;
				ModeTools->SnappedLocation += Drag;

				ModeTools->UpdateInternalData();
			}

			bHandled = true;
		}
	}

	return bHandled;
}

void FPlotViewportClient::ProcessClick(FSceneView& View, HHitProxy* HitProxy, FKey Key, EInputEvent Event, uint32 HitX, uint32 HitY) {

	UBrushEditingSubsystem* BrushSubsystem = GEditor->GetEditorSubsystem<UBrushEditingSubsystem>();
	const FViewportClick Click(&View, this, Key, Event, HitX, HitY);

	if (!ModeTools->HandleClick(this, HitProxy, Click))
	{
		if (HitProxy == NULL)
		{

		}
		else if (HitProxy->IsA(HWidgetAxis::StaticGetType()))
		{
			const bool bOldModeWidgets1 = EngineShowFlags.ModeWidgets;
			const bool bOldModeWidgets2 = View.Family->EngineShowFlags.ModeWidgets;

			EngineShowFlags.SetModeWidgets(false);
			FSceneViewFamily* SceneViewFamily = const_cast<FSceneViewFamily*>(View.Family);
			SceneViewFamily->EngineShowFlags.SetModeWidgets(false);
			bool bWasWidgetDragging = Widget->IsDragging();
			Widget->SetDragging(false);
			Viewport->InvalidateHitProxy();

			// This will actually re-render the viewport's hit proxies!
			HHitProxy* HitProxyWithoutAxisWidgets = Viewport->GetHitProxy(HitX, HitY);
			if (HitProxyWithoutAxisWidgets != NULL && !HitProxyWithoutAxisWidgets->IsA(HWidgetAxis::StaticGetType()))
			{
				// Try this again, but without the widget this time!
				ProcessClick(View, HitProxyWithoutAxisWidgets, Key, Event, HitX, HitY);
			}

			// Undo the evil
			EngineShowFlags.SetModeWidgets(bOldModeWidgets1);
			SceneViewFamily->EngineShowFlags.SetModeWidgets(bOldModeWidgets2);
			Widget->SetDragging(bWasWidgetDragging);
			Viewport->InvalidateHitProxy();
		}
		else if (GUnrealEd->ComponentVisManager.HandleClick(this, HitProxy, Click))
		{
			// Component vis manager handled the click
		}
		else if (HitProxy->IsA(HActor::StaticGetType()))
		{
			HActor* ActorHitProxy = (HActor*)HitProxy;
			AActor* ConsideredActor = ActorHitProxy->Actor;
			if (ConsideredActor) // It is possible to be clicking something during level transition if you spam click, and it might not be valid by this point
			{
				while (ConsideredActor->IsChildActor())
				{
					ConsideredActor = ConsideredActor->GetParentActor();
				}


				PlotViewportClickHandlers::ClickActor(this, ConsideredActor, Click, true);
			}
		}
	}
}

void FPlotViewportClient::ApplyDeltaToActors(const FVector& InDrag, const FRotator& InRot, const FVector& InScale) {
	if ((InDrag.IsZero() && InRot.IsZero() && InScale.IsZero()))
	{
		return;
	}

	FVector ModifiedScale = InScale;
	// If we are scaling, we need to change the scaling factor a bit to properly align to grid.

	if (GEditor->UsePercentageBasedScaling())
	{
		USelection* SelectedActors = GEditor->GetSelectedActors();
		const bool bScalingActors = !InScale.IsNearlyZero();

		if (bScalingActors)
		{

			ModifiedScale = InScale * ((GEditor->GetScaleGridSize() / 100.0f) / GEditor->GetGridSize());
		}
	}

	// Transact the actors.
	GEditor->NoteActorMovement();

	TArray<AGroupActor*> ActorGroups;

	// Apply the deltas to any selected actors.
	for (FSelectionIterator SelectedActorIt(GEditor->GetSelectedActorIterator()); SelectedActorIt; ++SelectedActorIt)
	{
		AActor* Actor = static_cast<AActor*>(*SelectedActorIt);
		checkSlow(Actor->IsA(AActor::StaticClass()));

		if (!Actor->bLockLocation)
		{
			if (GEditor->GetSelectedComponentCount() > 0)
			{
				USelection* ComponentSelection = GEditor->GetSelectedComponents();

				// Only move the parent-most component(s) that are selected 
				// Otherwise, if both a parent and child are selected and the delta is applied to both, the child will actually move 2x delta
				TInlineComponentArray<USceneComponent*> ComponentsToMove;
				for (FSelectedEditableComponentIterator EditableComponentIt(GEditor->GetSelectedEditableComponentIterator()); EditableComponentIt; ++EditableComponentIt)
				{
					USceneComponent* SelectedComponent = Cast<USceneComponent>(*EditableComponentIt);
					if (SelectedComponent)
					{
						// Check to see if any parent is selected
						bool bParentAlsoSelected = false;
						USceneComponent* Parent = SelectedComponent->GetAttachParent();
						while (Parent != nullptr)
						{
							if (ComponentSelection->IsSelected(Parent))
							{
								bParentAlsoSelected = true;
								break;
							}

							Parent = Parent->GetAttachParent();
						}

						// If no parent of this component is also in the selection set, move it!
						if (!bParentAlsoSelected)
						{
							ComponentsToMove.Add(SelectedComponent);
						}
					}
				}

				// Now actually apply the delta to the appropriate component(s)
				for (USceneComponent* SceneComp : ComponentsToMove)
				{
					ApplyDeltaToComponent(SceneComp, InDrag, InRot, ModifiedScale);
				}
			}
			else
			{
				AGroupActor* ParentGroup = AGroupActor::GetRootForActor(Actor, true, true);
				if (ParentGroup && UActorGroupingUtils::IsGroupingActive())
				{
					ActorGroups.AddUnique(ParentGroup);
				}
				else
				{
					// Finally, verify that no actor in the parent hierarchy is also selected
					bool bHasParentInSelection = false;
					AActor* ParentActor = Actor->GetAttachParentActor();
					while (ParentActor != NULL && !bHasParentInSelection)
					{
						if (ParentActor->IsSelected())
						{
							bHasParentInSelection = true;
						}
						ParentActor = ParentActor->GetAttachParentActor();
					}
					if (!bHasParentInSelection)
					{
						ApplyDeltaToActor(Actor, InDrag, InRot, ModifiedScale);
					}
				}
			}
		}
	}
	AGroupActor::RemoveSubGroupsFromArray(ActorGroups);
}

void FPlotViewportClient::ApplyDeltaToActor(AActor* InActor,
	const FVector& InDeltaDrag, const FRotator& InDeltaRot,
	const FVector& InDeltaScale) {

	FVector ModifiedDeltaScale = InDeltaScale;

	// we dont scale actors when we only have a very small scale change
	if (!InDeltaScale.IsNearlyZero())
	{
		if (!GEditor->UsePercentageBasedScaling())
		{
			//ModifyScale(InActor, ModifiedDeltaScale, Cast< ABrush >(InActor) != NULL);
		}
	}
	else
	{
		ModifiedDeltaScale = FVector::ZeroVector;
	}

	GEditor->ApplyDeltaToActor(
		InActor,
		true,
		&InDeltaDrag,
		&InDeltaRot,
		&ModifiedDeltaScale,
		IsAltPressed(),
		IsShiftPressed(),
		IsCtrlPressed());
}

void FPlotViewportClient::ApplyDeltaToComponent(USceneComponent* InComponent,
	const FVector& InDeltaDrag, const FRotator& InDeltaRot,
	const FVector& InDeltaScale) {
	FVector ModifiedDeltaScale = InDeltaScale;

	// we don't scale components when we only have a very small scale change
	if (!InDeltaScale.IsNearlyZero())
	{
		if (!GEditor->UsePercentageBasedScaling())
		{
			//ModifyScale(InComponent, ModifiedDeltaScale);
		}
	}
	else
	{
		ModifiedDeltaScale = FVector::ZeroVector;
	}

	FVector AdjustedDrag = InDeltaDrag;
	FRotator AdjustedRot = InDeltaRot;
	FComponentEditorUtils::AdjustComponentDelta(InComponent, AdjustedDrag, AdjustedRot);

	FVector EditorWorldPivotLocation = GEditor->GetPivotLocation();

	// If necessary, transform the editor pivot location to be relative to the component's parent
	const bool bIsRootComponent = InComponent->GetOwner()->GetRootComponent() == InComponent;
	FVector RelativePivotLocation = bIsRootComponent || !InComponent->GetAttachParent() ? EditorWorldPivotLocation : InComponent->GetAttachParent()->GetComponentToWorld().Inverse().TransformPosition(EditorWorldPivotLocation);

	GEditor->ApplyDeltaToComponent(
		InComponent,
		true,
		&AdjustedDrag,
		&AdjustedRot,
		&ModifiedDeltaScale,
		RelativePivotLocation);
}

void SPlotViewport::Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InEditor)
{
	ConstructPlotEditorViewportClient(InArgs);
	PlotEditor = InEditor;
	SEditorViewport::Construct(SEditorViewport::FArguments()
		.ViewportSize(MakeAttributeSP(this, &SPlotViewport::GetSViewportSize))
	);

	const TSharedRef<SWidget> EditorViewportWidget = ChildSlot.GetChildAt(0);
	ChildSlot
		[
			SNew(SScaleBox)
			.Stretch(this, &SPlotViewport::OnGetScaleBoxStretch)
		.HAlign(EHorizontalAlignment::HAlign_Center)
		.VAlign(EVerticalAlignment::VAlign_Center)
		.StretchDirection(EStretchDirection::Both)
		[
			EditorViewportWidget
		]
		];
	ActiveViewport = SceneViewport;
	ConstructViewportOverlayContent();

	FLevelEditorModule& LevelEditor = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	LevelEditor.OnActorSelectionChanged().AddRaw(this, &SPlotViewport::OnActorSelectionChanged);
}

SPlotViewport::SPlotViewport()
{
	//
}

SPlotViewport::~SPlotViewport()
{
	FLevelEditorModule& LevelEditor = FModuleManager::GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	LevelEditor.OnActorSelectionChanged().RemoveAll(this);
}

void SPlotViewport::StartPlayInEditorSession(UGameViewportClient* PlayClient, const bool bInSimulateInEditor)
{
	InactiveViewport = ActiveViewport;
	InactiveViewportWidgetEditorContent = ViewportWidget->GetContent();

	FSlateApplication::Get().ClearKeyboardFocus(EFocusCause::SetDirectly);

	ActiveViewport = MakeShareable(new FSceneViewport(PlayClient, ViewportWidget));
	ActiveViewport->SetPlayInEditorViewport(true);

	ActiveViewport->SetPlayInEditorGetsMouseControl(false);
	ActiveViewport->SetPlayInEditorIsSimulate(bInSimulateInEditor);

	const TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(AsShared());
	PlayClient->SetViewportOverlayWidget(ParentWindow, PIEViewportOverlayWidget.ToSharedRef());
	PlayClient->SetGameLayerManager(GameLayerManager);
	ViewportWidget->SetViewportInterface(ActiveViewport.ToSharedRef());

	if (GameLayerManager.IsValid() && !bInSimulateInEditor)
	{
		GameLayerManager->SetSceneViewport(ActiveViewport.Get());
	}
	ViewportWidget->SetViewportInterface(ActiveViewport.ToSharedRef());

	// Let the viewport client know what viewport it is associated with
	PlayClient->Viewport = ActiveViewport.Get();
	FSlateApplication::Get().RegisterGameViewport(ViewportWidget.ToSharedRef());

	GEngine->BroadcastLevelActorListChanged();
}

void SPlotViewport::EndPlayInEditorSession()
{
	FSlateApplication::Get().UnregisterGameViewport();
	check(InactiveViewport.IsValid());
	if (ActiveViewport->IsPlayInEditorViewport())
	{
		TSharedPtr<FSceneViewport> GameViewport = ActiveViewport;
		ActiveViewport = InactiveViewport;
		ActiveViewport->OnPlayWorldViewportSwapped(*GameViewport);

		// Play in editor viewport was active, swap back to our level editor viewport
		GameViewport->SetViewportClient(nullptr);
	}
	else {
		InactiveViewport->SetViewportClient(nullptr);
	}
	GameLayerManager->SetSceneViewport(ActiveViewport.Get());
	InactiveViewport.Reset();
	ViewportWidget->SetViewportInterface(ActiveViewport.ToSharedRef());
	ViewportWidget->SetContent(InactiveViewportWidgetEditorContent);
	InactiveViewportWidgetEditorContent.Reset();
	GEngine->BroadcastLevelActorListChanged();
}

void SPlotViewport::SwapViewportsForSimulateInEditor()
{
	check(ActiveViewport->IsPlayInEditorViewport());
	FSlateApplication::Get().UnregisterGameViewport();

	TSharedPtr<FSceneViewport> TempViewport = ActiveViewport;
	ActiveViewport = InactiveViewport;
	InactiveViewport = TempViewport;

	ViewportWidget->SetContent(InactiveViewportWidgetEditorContent);

	// Resize the viewport to be the same size the previously active viewport
	// When starting in immersive mode its possible that the viewport has not been resized yet
	ActiveViewport->OnPlayWorldViewportSwapped(*InactiveViewport);

	if (GameLayerManager.IsValid())
	{
		GameLayerManager->SetSceneViewport(ActiveViewport.Get());
	}

	ViewportWidget->SetViewportInterface(ActiveViewport.ToSharedRef());

	UPlotWidget* PlotWidget = PlotEditor.Pin()->GetPlot()->GetWidget();
	if (PlotWidget) {
		PlotWidget->SetVisibility(ESlateVisibility::HitTestInvisible);
	}
}

void SPlotViewport::SwapViewportsForPlayInEditor()
{
	check(!ActiveViewport->IsPlayInEditorViewport() && HasPlayInEditorViewport());
	// Swap between the active and inactive viewport
	TSharedPtr<FSceneViewport> TempViewport = ActiveViewport;
	ActiveViewport = InactiveViewport;
	InactiveViewport = TempViewport;

	// Resize the viewport to be the same size the previously active viewport
	// When starting in immersive mode its possible that the viewport has not been resized yet
	ActiveViewport->OnPlayWorldViewportSwapped(*InactiveViewport);

	if (GameLayerManager.IsValid())
	{
		GameLayerManager->SetSceneViewport(ActiveViewport.Get());
	}

	InactiveViewportWidgetEditorContent = ViewportWidget->GetContent();
	ViewportWidget->SetViewportInterface(ActiveViewport.ToSharedRef());

	// Register the game viewport with slate which will capture the mouse and lock it to the viewport
	FSlateApplication::Get().RegisterGameViewport(ViewportWidget.ToSharedRef());

	UPlotWidget* PlotWidget = PlotEditor.Pin()->GetPlot()->GetWidget();
	if (PlotWidget) {
		PlotWidget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}
}

void SPlotViewport::OnSimulateSessionStarted()
{
	ActiveViewport->InvalidateHitProxy();
}

void SPlotViewport::OnSimulateSessionFinished()
{
	ActiveViewport->InvalidateHitProxy();
}

void SPlotViewport::RegisterGameViewportIfPIE()
{
	if (ActiveViewport->IsPlayInEditorViewport())
	{
		FSlateApplication::Get().RegisterGameViewport(ViewportWidget.ToSharedRef());
	}
}

bool SPlotViewport::HasPlayInEditorViewport() const
{
	return ActiveViewport->IsPlayInEditorViewport() || (InactiveViewport.IsValid() && InactiveViewport->IsPlayInEditorViewport());
}

FViewport* SPlotViewport::GetActiveViewport()
{
	return ActiveViewport->GetViewport();
}

void SPlotViewport::AddOverlayWidget(TSharedRef<SWidget> OverlaidWidget)
{
	ViewportOverlay->AddSlot()
		[
			OverlaidWidget
		];
}

void SPlotViewport::RemoveOverlayWidget(TSharedRef<SWidget> OverlaidWidget)
{
	ViewportOverlay->RemoveSlot(OverlaidWidget);
}

FEditorViewportClient& SPlotViewport::GetAssetViewportClient()
{
	return *PlotViewportClient;
}

void SPlotViewport::MakeImmersive(const bool bWantImmersive, const bool bAllowAnimation)
{
}

bool SPlotViewport::IsImmersive() const
{
	return true;
}

void SPlotViewport::ToggleGameView()
{
}

bool SPlotViewport::IsInGameView() const
{
	return true;
}

bool SPlotViewport::IsInteractable() const
{
	return true;
}

UWorld* SPlotViewport::GetWorld() const {
	if (PlotEditor.IsValid())
		return PlotEditor.Pin()->GetPlot()->GetWorld();
	return nullptr;
}


void SPlotViewport::OnFocusViewportToSelection()
{
}

EVisibility SPlotViewport::GetTransformToolbarVisibility() const
{
	return EVisibility::Visible;
}

void SPlotViewport::ConstructPlotEditorViewportClient(const FArguments& InArgs)
{
	PlotViewportClient = MakeShareable(new FPlotViewportClient(SharedThis(this)));
	FLevelEditorViewportInstanceSettings ViewportInstanceSettings;
	ViewportInstanceSettings.ViewportType = ELevelViewportType::LVT_Perspective;
	ViewportInstanceSettings.PerspViewModeIndex = VMI_Lit;
	ViewportInstanceSettings.OrthoViewModeIndex = VMI_BrushWireframe;
	ViewportInstanceSettings.bIsRealtime = true;

	FEngineShowFlags EditorShowFlags(ESFIM_Editor);
	FEngineShowFlags GameShowFlags(ESFIM_Game);

	if (ViewportInstanceSettings.ViewportType == LVT_Perspective)
	{
		ApplyViewMode(ViewportInstanceSettings.PerspViewModeIndex, true, EditorShowFlags);
		ApplyViewMode(ViewportInstanceSettings.PerspViewModeIndex, true, GameShowFlags);
	}
	else
	{
		ApplyViewMode(ViewportInstanceSettings.OrthoViewModeIndex, false, EditorShowFlags);
		ApplyViewMode(ViewportInstanceSettings.OrthoViewModeIndex, false, GameShowFlags);
	}

	if (ViewportInstanceSettings.ViewportType != LVT_Perspective)
	{
		EditorShowFlags.MotionBlur = 0;
		EditorShowFlags.Fog = 0;
		EditorShowFlags.SetDepthOfField(false);
		GameShowFlags.MotionBlur = 0;
		GameShowFlags.Fog = 0;
		GameShowFlags.SetDepthOfField(false);
	}

	EditorShowFlags.SetSnap(1);
	GameShowFlags.SetSnap(1);

	PlotViewportClient->ViewportType = ViewportInstanceSettings.ViewportType;
	PlotViewportClient->bSetListenerPosition = false;
	PlotViewportClient->EngineShowFlags = EditorShowFlags;
	PlotViewportClient->LastEngineShowFlags = GameShowFlags;
	PlotViewportClient->CurrentBufferVisualizationMode = ViewportInstanceSettings.BufferVisualizationMode;
	PlotViewportClient->CurrentRayTracingDebugVisualizationMode = ViewportInstanceSettings.RayTracingDebugVisualizationMode;
	PlotViewportClient->ExposureSettings = ViewportInstanceSettings.ExposureSettings;


	if (PlotViewportClient->ViewportType == LVT_Perspective)
	{
		PlotViewportClient->SetViewLocation(EditorViewportDefs::DefaultPerspectiveViewLocation);
		PlotViewportClient->SetViewRotation(EditorViewportDefs::DefaultPerspectiveViewRotation);
		PlotViewportClient->SetAllowCinematicControl(true);
	}

	PlotViewportClient->SetRealtime(ViewportInstanceSettings.bIsRealtime);
	PlotViewportClient->SetShowStats(ViewportInstanceSettings.bShowOnScreenStats);


	PlotViewportClient->bDrawVertices = true;
	PlotViewportClient->ViewFOV = PlotViewportClient->FOVAngle = ViewportInstanceSettings.FOVAngle;
	PlotViewportClient->OverrideFarClipPlane(ViewportInstanceSettings.FarViewPlane);

	PlotViewportClient->EngineShowFlags.SetSelectionOutline(GetDefault<ULevelEditorViewportSettings>()->bUseSelectionOutline);

	// Always composite editor objects after post processing in the editor
	PlotViewportClient->EngineShowFlags.SetCompositeEditorPrimitives(true);

	PlotViewportClient->SetViewModes(ViewportInstanceSettings.PerspViewModeIndex, ViewportInstanceSettings.OrthoViewModeIndex);
}

void SPlotViewport::ConstructViewportOverlayContent()
{
	PIEViewportOverlayWidget = SNew(SOverlay);
	ViewportOverlay->AddSlot(10)
		[
			SAssignNew(GameLayerManager, SGameLayerManager)
			.SceneViewport(this, &SPlotViewport::GetGameSceneViewport)
		[
			PIEViewportOverlayWidget.ToSharedRef()
		]
		];
}


FSceneViewport* SPlotViewport::GetGameSceneViewport() const
{
	return ActiveViewport.Get();
}

FVector2D SPlotViewport::GetSViewportSize() const
{
	return FVector2D(1920, 1080);
}

EStretch::Type SPlotViewport::OnGetScaleBoxStretch() const
{
	return EStretch::ScaleToFit;
}

void SPlotViewport::OnActorSelectionChanged(const TArray<UObject*>& NewSelection, bool bForceRefresh) {
	if (IsVisible() && IsInGameView() && NewSelection.Num() != 0)
	{
		PlotViewportClient->EngineShowFlags.SetModeWidgets(true);
		PlotViewportClient->EngineShowFlags.SetSelection(true);
		PlotViewportClient->EngineShowFlags.SetSelectionOutline(true);
	}
}

void SPlotDesignerView::Construct(const FArguments& InArgs, TSharedPtr<FPlotEditor> InEditor)
{
	PlotEditor = InEditor;
	Viewport = SNew(SPlotViewport, InEditor);
	ChildSlot
		[
			SNew(SBorder)
			.BorderImage(FCoreStyle::Get().GetBrush("NoBrush"))
		.Padding(FVector2D::UnitVector * 4)
		[
			Viewport->AsShared()
		]
		];
	auto Editor = PlotEditor.Pin();
	Editor->OnPlotPreviewUpdated.AddRaw(this, &SPlotDesignerView::OnPreviewUpdate);
	Editor->OnDesignerChange.AddRaw(this, &SPlotDesignerView::OnDesignerChange);

	Editor->GetPlot()->OnCameraPosChange.AddRaw(this, &SPlotDesignerView::OnCameraPosChange);
}

void SPlotDesignerView::OnPreviewUpdate(UPlotItem* InItem)
{
	SimulateItem = InItem;
	if (MyWorld.IsValid())
	{
		PlotEditor.Pin()->GetPlot()->StartSimulate(InItem);
	}
	else
	{
		CheckWorld();
	}
}

void SPlotDesignerView::OnDesignerChange()
{
	UPlotCameraObj* CameraObj = PlotEditor.Pin()->GetPlot()->CameraObj;
	if (CameraObj && Viewport.IsValid())
	{
		Viewport->GetViewportClient()->ViewFOV = CameraObj->CameraArgs.FOV;
		Viewport->GetViewportClient()->SetViewRotation(CameraObj->CameraArgs.Rotator);
		Viewport->GetViewportClient()->SetViewLocation(CameraObj->CameraArgs.Postion);
		//
		if (PlotEditor.Pin()->GetPlot()->GetWorld())
		{
			APlotCharacter* Character = Cast<APlotCharacter>(PlotEditor.Pin()->GetPlot()->GetWorld()->GetFirstPlayerController()->GetCharacter());
			if (Character) {
				Character->SetCameraArgs(CameraObj->CameraArgs);
			}
		}
	}
}


void SPlotDesignerView::CheckWorld()
{
	if (MyWorld.IsValid())
	{
		return;
	}
	if (GUnrealEd && GUnrealEd->PlayWorld)
	{
		GUnrealEd->EndPlayMap();
	}

	ULevelEditorPlaySettings* PlayInEditorSettings = NewObject<ULevelEditorPlaySettings>();
	PlayInEditorSettings->SetPlayNetMode(EPlayNetMode::PIE_Standalone);
	PlayInEditorSettings->SetPlayNumberOfClients(1);
	PlayInEditorSettings->bLaunchSeparateServer = false;
	PlayInEditorSettings->SetRunUnderOneProcess(true);
	PlayInEditorSettings->LastExecutedPlayModeType = EPlayModeType::PlayMode_InEditorFloating;
	PlayInEditorSettings->UseMouseForTouch = false;

	FEditorDelegates::PostPIEStarted.AddRaw(this, &SPlotDesignerView::OnStartupFinished);
	FEditorDelegates::PrePIEEnded.AddRaw(this, &SPlotDesignerView::OnEndFinished);
	FRequestPlaySessionParams SessionParams;
	SessionParams.EditorPlaySettings = PlayInEditorSettings;
	SessionParams.SessionDestination = EPlaySessionDestinationType::InProcess;
	SessionParams.DestinationSlateViewport = Viewport;
	SessionParams.SessionPreviewTypeOverride = EPlaySessionPreviewType::MobilePreview;
	SessionParams.GlobalMapOverride = PlotEditor.Pin()->GetPlot()->PreviewLevelPath.GetAssetPathString();
	SessionParams.WorldType = EPlaySessionWorldType::PlayInEditor;

	UClass* PlotModeClass = LoadClass<AGameModeBase>(nullptr, TEXT("/Plot/Blueprints/PlotGameMode.PlotGameMode_C"));
	SessionParams.GameModeOverride = PlotModeClass;
	GUnrealEd->RequestPlaySession(SessionParams);
}

void SPlotDesignerView::CreatePlotWidget()
{
	if (PlotWidget.IsValid()) {
		PlotWidget->RemoveFromParent();
	}
	if (MyWorld.IsValid())
	{
		UClass* WidgetClass = LoadClass<UPlotWidget>(MyWorld.Get(), TEXT("/Game/UI/UMG/Dialogue/umg_dialogue.umg_dialogue_C"));
		PlotWidget = CreateWidget<UPlotWidget>(MyWorld.Get(), WidgetClass);
		if (PlotWidget.IsValid())
		{
			if (ULocalPlayer* Player = MyWorld->GetFirstLocalPlayerFromController())
			{
				PlotWidget->SetPlayerContext(FLocalPlayerContext(Player));
			}
			PlotWidget->AddToViewport();
			PlotEditor.Pin()->GetPlot()->SetWidget(PlotWidget.Get());
			PlotEditor.Pin()->GetPlot()->StartSimulate(SimulateItem.Get());
		}
	}
}

void SPlotDesignerView::OnStartupFinished(bool bSuc)
{
	for (const FWorldContext& Context : GEngine->GetWorldContexts())
	{
		if (Context.WorldType == EWorldType::PIE)
		{
			MyWorld = Context.World();
			MyWorld->ChangeFeatureLevel(ERHIFeatureLevel::ES3_1);
		}
	}
	CreatePlotWidget();
}

void SPlotDesignerView::OnEndFinished(bool bSuc)
{
	FEditorDelegates::PostPIEStarted.RemoveAll(this);
	FEditorDelegates::PrePIEEnded.RemoveAll(this);
	bPlaying = false;
	if (PlotWidget.IsValid())
	{
		PlotWidget->RemoveFromParent();
	}
}

void SPlotDesignerView::OnCameraPosChange(FPlotCameraInfo CameraInfo)
{
	if (PlotEditor.IsValid() && Viewport.IsValid() && Viewport->GetViewportClient().IsValid())
	{
		Viewport->GetViewportClient()->ViewFOV = CameraInfo.FOV;
		Viewport->GetViewportClient()->SetViewRotation(CameraInfo.Rotator);
		Viewport->GetViewportClient()->SetViewLocation(CameraInfo.Postion);
		//
		PlotEditor.Pin()->GetPlot()->CameraObj->CameraArgs.Set(CameraInfo);
	}
}

bool PlotViewportClickHandlers::ClickActor(FPlotViewportClient* ViewportClient, AActor* Actor, const FViewportClick& Click, bool bAllowSelectionChange) {

	// Pivot snapping
	if (Click.GetKey() == EKeys::MiddleMouseButton && Click.IsAltDown())
	{
		GEditor->SetPivot(GEditor->ClickLocation, true, false, true);

		return true;
	}
	// Handle selection.
	else if (Click.GetKey() == EKeys::RightMouseButton && !Click.IsControlDown() && !ViewportClient->Viewport->KeyState(EKeys::LeftMouseButton))
	{
		bool bNeedViewportRefresh = false;
		if (Actor)
		{
			const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "ClickingOnActorsContextMenu", "Clicking on Actors (context menu)"));
			UE_LOG(LogTemp, Log, TEXT("Clicking on Actor (context menu): %s (%s)"), *Actor->GetClass()->GetName(), *Actor->GetActorLabel());

			GEditor->GetSelectedActors()->Modify();

			if (bAllowSelectionChange && GEditor->CanSelectActor(Actor, true, true))
			{
				// If the actor the user clicked on was already selected, then we won't bother clearing the selection
				if (!Actor->IsSelected())
				{
					GEditor->SelectNone(false, true);
					bNeedViewportRefresh = true;
				}

				// Select the actor the user clicked on
				GEditor->SelectActor(Actor, true, true);
			}
		}

		if (bNeedViewportRefresh)
		{
			// Redraw the viewport so the user can see which object was right clicked on
			ViewportClient->Viewport->Draw();
			FlushRenderingCommands();
		}

		//PrivateSummonContextMenu(ViewportClient);
		return true;
	}
	else if (Click.GetEvent() == IE_DoubleClick && Click.GetKey() == EKeys::LeftMouseButton && !Click.IsControlDown() && !Click.IsShiftDown())
	{
		if (Actor)
		{
			const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "ClickingOnActorsDouble-Click", "Clicking on Actors (double-click)"));
			UE_LOG(LogTemp, Log, TEXT("Clicking on Actor (double click): %s (%s)"), *Actor->GetClass()->GetName(), *Actor->GetActorLabel());

			GEditor->GetSelectedActors()->Modify();

			if (bAllowSelectionChange && GEditor->CanSelectActor(Actor, true, true))
			{
				// Clear the selection
				GEditor->SelectNone(false, true);

				// Select the actor the user clicked on
				GEditor->SelectActor(Actor, true, true);
			}
		}

		return true;
	}
	else if (Click.GetKey() != EKeys::RightMouseButton)
	{
		if (Click.GetKey() == EKeys::LeftMouseButton && ViewportClient->Viewport->KeyState(EKeys::T) && Actor)
		{
			TArray<UActorComponent*> Components;
			Actor->GetComponents(Components);
			//SetDebugLightmapSample(&Components, NULL, 0, GEditor->ClickLocation);
		}
		else
			if (Click.GetKey() == EKeys::LeftMouseButton && ViewportClient->Viewport->KeyState(EKeys::L))
			{
				//TODO
				return true;
			}
			else if (Click.GetKey() == EKeys::LeftMouseButton && ViewportClient->Viewport->KeyState(EKeys::S))
			{
				//TODO
				return true;
			}
			else if (Click.GetKey() == EKeys::LeftMouseButton && ViewportClient->Viewport->KeyState(EKeys::A))
			{
				// Create an actor of the selected class.
				UClass* SelectedClass = GEditor->GetSelectedObjects()->GetTop<UClass>();
				if (SelectedClass)
				{
					//TODO
				}

				return true;
			}
			else if (Actor)
			{
				if (bAllowSelectionChange && GEditor->CanSelectActor(Actor, true, true, true))
				{
					const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "ClickingOnActors", "Clicking on Actors"));
					GEditor->GetSelectedActors()->Modify();

					// Ctrl- or shift- clicking an actor is the same as regular clicking when components are selected
					const bool bComponentSelected = GEditor->GetSelectedComponentCount() > 0;

					if (Click.IsControlDown() && !bComponentSelected)
					{
						const bool bSelect = !Actor->IsSelected();
						if (bSelect)
						{
							UE_LOG(LogTemp, Log, TEXT("Clicking on Actor (CTRL LMB): %s (%s)"), *Actor->GetClass()->GetName(), *Actor->GetActorLabel());
						}
						GEditor->SelectActor(Actor, bSelect, true, true);
					}
					else if (Click.IsShiftDown() && !bComponentSelected)
					{
						if (!Actor->IsSelected())
						{
							const bool bSelect = true;
							GEditor->SelectActor(Actor, bSelect, true, true);
						}
					}
					else
					{
						// check to see how many actors need deselecting first - and warn as appropriate
						int32 NumSelectedActors = GEditor->GetSelectedActors()->Num();
						if (NumSelectedActors >= EditorActorSelectionDefs::MaxActorsToSelectBeforeWarning)
						{
							const FText ConfirmText = FText::Format(NSLOCTEXT("UnrealEd", "Warning_ManyActorsToSelectOne", "There are {0} selected actors. Selecting this actor will deselect them all. Are you sure?"), FText::AsNumber(NumSelectedActors));

							FSuppressableWarningDialog::FSetupInfo Info(ConfirmText, NSLOCTEXT("UnrealEd", "Warning_ManyActors", "Warning: Many Actors"), "Warning_ManyActors");
							Info.ConfirmText = NSLOCTEXT("ModalDialogs", "ManyActorsToSelectOneConfirm", "Continue Selection");
							Info.CancelText = NSLOCTEXT("ModalDialogs", "ManyActorsToSelectOneCancel", "Keep Current Selection");

							FSuppressableWarningDialog ManyActorsWarning(Info);
							if (ManyActorsWarning.ShowModal() == FSuppressableWarningDialog::Cancel)
							{
								return false;
							}
						}

						GEditor->SelectNone(false, true, false);
						UE_LOG(LogTemp, Log, TEXT("Clicking on Actor (LMB): %s (%s)"), *Actor->GetClass()->GetName(), *Actor->GetActorLabel());
						GEditor->SelectActor(Actor, true, true, true);
					}
				}

				return false;
			}
	}

	return false;
}

SPlotDesignerView::~SPlotDesignerView()
{
	FEditorDelegates::PostPIEStarted.RemoveAll(this);
	FEditorDelegates::PrePIEEnded.RemoveAll(this);
	if (PlotEditor.IsValid())
	{
		auto Editor = PlotEditor.Pin();
		Editor->OnPlotPreviewUpdated.RemoveAll(this);
		Editor->OnDesignerChange.RemoveAll(this);
		Editor->GetPlot()->OnCameraPosChange.RemoveAll(this);
	}

	if (GEditor)
	{
		GEditor->OnBlueprintReinstanced().RemoveAll(this);
	}
}

#undef LOCTEXT_NAMESPACE
