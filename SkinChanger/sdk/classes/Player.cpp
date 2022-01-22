#include "Player.h"

#include "../Sdk.h"
#include "../Netvars.h"

#include "EntityList.h"


bool sdk::Player::isAlive()
{
	using MethodPtr = bool(__thiscall*)(sdk::Player*);
	return getMethod<MethodPtr>(155)(this);
}

sdk::Weapon* sdk::Player::getWeapon(int i)
{
	static int weaponsOffset = sdk::getNetvarOffset("DT_BaseCombatCharacter", { "m_hMyWeapons" });
	return reinterpret_cast<sdk::Weapon*>(sdk::entityList->getEntityFromHandle(
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + weaponsOffset + i * sizeof(int))));
}

sdk::Weapon* sdk::Player::getActiveWeapon()
{
	static int activeWeaponOffset = sdk::getNetvarOffset("DT_BaseCombatCharacter", { "m_hActiveWeapon" });
	return reinterpret_cast<sdk::Weapon*>(sdk::entityList->getEntityFromHandle(
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + activeWeaponOffset)));
}

sdk::ViewModel* sdk::Player::getViewModel()
{
	static int viewModelOffset = sdk::getNetvarOffset("DT_BasePlayer", { "m_hViewModel[0]" });
	return reinterpret_cast<sdk::ViewModel*>(sdk::entityList->getEntityFromHandle(
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + viewModelOffset)));
}