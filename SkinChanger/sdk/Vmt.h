#pragma once

#include <Windows.h>


namespace sdk
{
	class Vmt
	{
	public:
		template<class T>
		T getMethod(int methodNumber);

		template<class T>
		T hookMethod(int methodNumber, T hook);

		void unhookMethod(int methodNumber, void* original);

	private:
		void** vmt;
	};
}


template<class T>
T sdk::Vmt::getMethod(int methodNumber)
{
	return static_cast<T>(vmt[methodNumber]);
}

template<class T>
T sdk::Vmt::hookMethod(int methodNumber, T hook)
{
	LPVOID address = &vmt[methodNumber];
	DWORD oldProtect;
	if (VirtualProtect(address, sizeof(void*), PAGE_READWRITE, &oldProtect) == FALSE)
	{
		return nullptr;
	}

	T original = static_cast<T>(vmt[methodNumber]);
	vmt[methodNumber] = hook;

	VirtualProtect(address, sizeof(void*), oldProtect, &oldProtect);
	return original;
}