#include "Vmt.h"


void sdk::Vmt::unhookMethod(int methodNumber, void* original)
{
	LPVOID address = &vmt[methodNumber];
	DWORD oldProtect;
	VirtualProtect(address, sizeof(void*), PAGE_READWRITE, &oldProtect);
	vmt[methodNumber] = original;
	VirtualProtect(address, sizeof(void*), oldProtect, &oldProtect);
}