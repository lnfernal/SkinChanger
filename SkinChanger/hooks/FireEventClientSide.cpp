#include "FireEventClientSide.h"

#include "../skinchanger/SkinChanger.h"


namespace hooks
{
	hooks::FireEventClientSideFPtr hooks::originalFireEventClientSide;
}


void __fastcall hooks::fireEventClientSide(sdk::GameEventsManager* _this, void* reserved, sdk::GameEvent* gameEvent)
{
	skinchanger::changeKillIcons(gameEvent);

	originalFireEventClientSide(_this, reserved, gameEvent);
}