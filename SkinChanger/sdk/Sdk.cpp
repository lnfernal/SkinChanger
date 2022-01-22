#include "Sdk.h"

#include <Windows.h>


namespace sdk
{
	const char* clientDll = "client.dll";
	const char* engineDll = "engine.dll";


	template<class T>
	T* getInterface(const char* moduleName, const char* interfaceName)
	{
		using CreateInterfaceFPtr = T * (*)(const char*, int*);
		CreateInterfaceFPtr createInterface = reinterpret_cast<CreateInterfaceFPtr>(
			GetProcAddress(GetModuleHandle(moduleName), "CreateInterface"));
		return createInterface(interfaceName, nullptr);
	}
}


sdk::Client* sdk::client;
sdk::EntityList* sdk::entityList;

sdk::Engine* sdk::engine;
sdk::ModelInfo* sdk::modelInfo;
sdk::GameEventsManager* sdk::gameEventsManager;


void sdk::init()
{
	client = getInterface<sdk::Client>(clientDll, "VClient018");
	entityList = getInterface<sdk::EntityList>(clientDll, "VClientEntityList003");

	engine = getInterface<sdk::Engine>(engineDll, "VEngineClient014");
	modelInfo = getInterface<sdk::ModelInfo>(engineDll, "VModelInfoClient004");
	gameEventsManager = getInterface<sdk::GameEventsManager>(engineDll, "GAMEEVENTSMANAGER002");
}

int sdk::randomInt(int min, int max)
{
	return rand() % (max - min + 1) + min;
}