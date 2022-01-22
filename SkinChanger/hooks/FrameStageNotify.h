#pragma once

#include "../sdk/classes/Client.h"


namespace hooks
{
	using FrameStageNotifyFPtr = void(__fastcall*)(sdk::Client*, void*, sdk::FrameStage);
	extern FrameStageNotifyFPtr originalFrameStageNotify;


	void __fastcall frameStageNotify(sdk::Client* _this, void* reserved, sdk::FrameStage frameStage);
}