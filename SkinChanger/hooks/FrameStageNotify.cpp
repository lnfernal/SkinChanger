#include "FrameStageNotify.h"

#include "../sdk/Sdk.h"

#include "../skinchanger/SkinChanger.h"


namespace hooks
{
	hooks::FrameStageNotifyFPtr hooks::originalFrameStageNotify;
}


void __fastcall hooks::frameStageNotify(sdk::Client* _this, void* reserved, sdk::FrameStage frameStage)
{
	if (sdk::engine->isInGame() && frameStage == sdk::FrameStage::NetUpdatePostDataUpdateStart)
	{
		skinchanger::changeSkins();
	}

	originalFrameStageNotify(_this, reserved, frameStage);
}