#include "GameEvent.h"


const char* sdk::GameEvent::getName()
{
	using MethodPtr = const char*(__thiscall*)(sdk::GameEvent*);
	return getMethod<MethodPtr>(1)(this);
}

int sdk::GameEvent::getInt(const char* keyName, int defaultValue)
{
	using MethodPtr = int(__thiscall*)(sdk::GameEvent*, const char*, int);
	return getMethod<MethodPtr>(6)(this, keyName, defaultValue);
}

const char* sdk::GameEvent::getString(const char* keyName, const char* defaultValue)
{
	using MethodPtr = const char*(__thiscall*)(sdk::GameEvent*, const char*, const char*);
	return getMethod<MethodPtr>(9)(this, keyName, defaultValue);
}

const char* sdk::GameEvent::setString(const char* keyName, const char* value)
{
	using MethodPtr = const char*(__thiscall*)(sdk::GameEvent*, const char*, const char*);
	return getMethod<MethodPtr>(16)(this, keyName, value);
}