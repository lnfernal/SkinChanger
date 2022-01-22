#include "Engine.h"


bool sdk::Engine::getPlayerInfo(int entityNumber, PlayerInfo* playerInfo)
{
	using MethodPtr = bool(__thiscall*)(sdk::Engine*, int, PlayerInfo*);
	return getMethod<MethodPtr>(8)(this, entityNumber, playerInfo);
}

int sdk::Engine::getPlayerForUserId(int userId)
{
	using MethodPtr = int(__thiscall*)(sdk::Engine*, int);
	return getMethod<MethodPtr>(9)(this, userId);
}

int sdk::Engine::getLocalPlayer()
{
	using MethodPtr = int(__thiscall*)(sdk::Engine*);
	return getMethod<MethodPtr>(12)(this);
}

bool sdk::Engine::isInGame()
{
	using MethodPtr = bool(__thiscall*)(sdk::Engine*);
	return getMethod<MethodPtr>(37)(this);
}