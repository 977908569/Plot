#include "PlotItem_RoleImgCtr.h"

UPlotItem_RoleImgCtr::UPlotItem_RoleImgCtr() {
	bWait = false;
}

void UPlotItem_RoleImgCtr::Start()
{
	if (auto Widget = GetWidget()) {
		Widget->SetRoleImg(Pos, ImgPath, bHide);
	}
	Super::Start();
}
