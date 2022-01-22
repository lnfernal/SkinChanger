#pragma once

#include "../sdk/classes/Weapon.h"
#include "../sdk/classes/Player.h"


namespace skinchanger
{
	bool isChangeableKnife(sdk::WeaponId weaponId);
	bool isChangeableKnife(const char* weaponName);

	const char* getKnifeName(sdk::WeaponId weaponId);

	int getKnifeSequence(sdk::WeaponId weaponId, int sequence);

	void changeKnife(sdk::Player* player, sdk::Weapon* weapon, sdk::WeaponId weaponId);
}