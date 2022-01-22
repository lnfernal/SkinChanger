#pragma once

#include "../sdk/classes/GameEvent.h"
#include "../sdk/classes/Client.h"
#include "../sdk/classes/ViewModel.h"


namespace skinchanger
{
	void changeSkins();
	void changeKillIcons(sdk::GameEvent* gameEvent);
	void fixAnimations(sdk::RecvProxyData* proxyData, sdk::ViewModel* viewModel);

	void initSkins();
}