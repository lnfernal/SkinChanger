#include "ViewModel.h"

#include "../Sdk.h"
#include "../Netvars.h"


int& sdk::ViewModel::modelIndex()
{
	static int modelIndexOffset = sdk::getNetvarOffset("DT_BaseViewModel", { "m_nModelIndex" });
	return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + modelIndexOffset);
}

int& sdk::ViewModel::viewModelIndex()
{
	static int viewModelIndexOffset = sdk::getNetvarOffset("DT_BaseViewModel", { "m_nViewModelIndex" });
	return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + viewModelIndexOffset);
}

sdk::Weapon* sdk::ViewModel::getWeapon()
{
	static int weaponOffset = sdk::getNetvarOffset("DT_BaseViewModel", { "m_hWeapon" });
	return reinterpret_cast<sdk::Weapon*>(sdk::entityList->getEntityFromHandle(
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + weaponOffset)));
}

sdk::Player* sdk::ViewModel::getOwner()
{
	static int ownerOffset = sdk::getNetvarOffset("DT_BaseViewModel", { "m_hOwner" });
	return reinterpret_cast<sdk::Player*>(sdk::entityList->getEntityFromHandle(
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ownerOffset)));
}