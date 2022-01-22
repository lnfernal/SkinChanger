#pragma once

#include "classes/Client.h"
#include "classes/EntityList.h"
#include "classes/Engine.h"
#include "classes/ModelInfo.h"
#include "classes/GameEventsManager.h"


namespace sdk
{
	extern Client* client;
	extern EntityList* entityList;

	extern Engine* engine;
	extern ModelInfo* modelInfo;
	extern GameEventsManager* gameEventsManager;


	void init();

	int randomInt(int min, int max);
}