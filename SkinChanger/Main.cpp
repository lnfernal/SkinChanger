#include <Windows.h>

#include "sdk/Sdk.h"

#include "hooks/Hooks.h"

#include "skinchanger/SkinChanger.h"


void mainThread(HMODULE moduleInstance)
{
	sdk::init();
	hooks::create();
	skinchanger::initSkins();

	while (GetAsyncKeyState(VK_DELETE) == 0)
	{
		Sleep(5);
	}

	hooks::destroy();
	FreeLibraryAndExitThread(moduleInstance, 0);
}

BOOL WINAPI DllMain(HMODULE moduleInstance, DWORD loadReason, LPVOID reserved)
{
	if (loadReason == DLL_PROCESS_ATTACH)
	{
		HANDLE mainThreadHandle = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(mainThread),
			moduleInstance, 0, nullptr);
		if (mainThreadHandle != nullptr)
		{
			CloseHandle(mainThreadHandle);
		}
	}

	return TRUE;
}