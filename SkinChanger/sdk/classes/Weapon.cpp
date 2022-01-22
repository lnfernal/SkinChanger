#include "Weapon.h"

#include "../Sdk.h"
#include "../Netvars.h"

#include "EntityList.h"


int& sdk::Weapon::modelIndex()
{
    static int modelIndexOffset = sdk::getNetvarOffset("DT_BaseViewModel", { "m_nModelIndex" });
    return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + modelIndexOffset);
}

sdk::WeaponId& sdk::Weapon::id()
{
    static int idOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_AttributeManager", "m_Item", "m_iItemDefinitionIndex" });
    return *reinterpret_cast<sdk::WeaponId*>(reinterpret_cast<char*>(this) + idOffset);
}

sdk::WeaponQuality& sdk::Weapon::quality()
{
    static int qualityOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_AttributeManager", "m_Item", "m_iEntityQuality" });
    return *reinterpret_cast<sdk::WeaponQuality*>(reinterpret_cast<char*>(this) + qualityOffset);
}

int& sdk::Weapon::itemIdHigh()
{
    static int itemIdHighOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_AttributeManager", "m_Item", "m_iItemIDHigh" });
    return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + itemIdHighOffset);
}

uint32_t& sdk::Weapon::accountId()
{
    static int accountIdOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_AttributeManager", "m_Item", "m_iAccountID" });
    return *reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(this) + accountIdOffset);
}

char* sdk::Weapon::customName()
{
    static int customNameOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_AttributeManager", "m_Item", "m_szCustomName" });
    return reinterpret_cast<char*>(reinterpret_cast<char*>(this) + customNameOffset);
}

uint64_t& sdk::Weapon::originalOwnerXuid()
{
    static int originalOwnerXuidLowOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_OriginalOwnerXuidLow" });
    return *reinterpret_cast<uint64_t*>(reinterpret_cast<char*>(this) + originalOwnerXuidLowOffset);
}

uint32_t& sdk::Weapon::originalOwnerXuidLow()
{
    static int originalOwnerXuidLowOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_OriginalOwnerXuidLow" });
    return *reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(this) + originalOwnerXuidLowOffset);
}

uint32_t& sdk::Weapon::originalOwnerXuidHigh()
{
    static int originalOwnerXuidHighOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_OriginalOwnerXuidHigh" });
    return *reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(this) + originalOwnerXuidHighOffset);
}

int& sdk::Weapon::fallbackPaintKit()
{
    static int fallbackPaintKitOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_nFallbackPaintKit" });
    return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + fallbackPaintKitOffset);
}

int& sdk::Weapon::fallbackSeed()
{
    static int fallbackSeedOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_nFallbackSeed" });
    return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + fallbackSeedOffset);
}

float& sdk::Weapon::fallbackWear()
{
    static int fallbackWearOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_flFallbackWear" });
    return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + fallbackWearOffset);
}

int& sdk::Weapon::fallbackStatTrak()
{
    static int fallbackStatTrakOffset = sdk::getNetvarOffset("DT_BaseAttributableItem", { "m_nFallbackStatTrak" });
    return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + fallbackStatTrakOffset);
}

int& sdk::Weapon::viewModelIndex()
{
    static int viewModelIndexOffset = sdk::getNetvarOffset("DT_BaseCombatWeapon", { "m_iViewModelIndex" });
    return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + viewModelIndexOffset);
}

int& sdk::Weapon::worldModelIndex()
{
    static int worldModelIndexOffset = sdk::getNetvarOffset("DT_BaseCombatWeapon", { "m_iWorldModelIndex" });
    return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + worldModelIndexOffset);
}

sdk::ViewModel* sdk::Weapon::getWorldModel()
{
    static int worldModelOffset = sdk::getNetvarOffset("DT_BaseCombatWeapon", { "m_hWeaponWorldModel" });
	return reinterpret_cast<sdk::ViewModel*>(sdk::entityList->getEntityFromHandle(
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + worldModelOffset)));
}