#pragma once

#include "../sdk/classes/GameEvent.h"
#include "../sdk/classes/GameEventsManager.h"


namespace hooks
{
	using FireEventClientSideFPtr = void(__fastcall*)(sdk::GameEventsManager*, void*, sdk::GameEvent*);
	extern FireEventClientSideFPtr originalFireEventClientSide;


	void __fastcall fireEventClientSide(sdk::GameEventsManager* _this, void* reserved, sdk::GameEvent* gameEvent);
}