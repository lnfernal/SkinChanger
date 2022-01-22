#include "SkinChanger.h"

#include <map>

#include "Skin.h"
#include "Knife.h"

#include "../sdk/Sdk.h"


namespace skinchanger
{
	std::map<sdk::WeaponId, Skin> skins;
	sdk::WeaponId knifeId;
}


void skinchanger::changeSkins()
{
	int localPlayerEntityNumber = sdk::engine->getLocalPlayer();

	sdk::Player* localPlayer = reinterpret_cast<sdk::Player*>(sdk::entityList->getEntity(localPlayerEntityNumber));
	sdk::PlayerInfo localPlayerInfo;
	if (localPlayer != nullptr && sdk::engine->getPlayerInfo(localPlayerEntityNumber, &localPlayerInfo))
	{
		for (int i = 0; i < sdk::PLAYER_MAX_WEAPONS; ++i)
		{
			sdk::Weapon* weapon = localPlayer->getWeapon(i);
			if (weapon != nullptr && weapon->originalOwnerXuid() == localPlayerInfo.xuid)
			{
				if (weapon->id() == knifeId || isChangeableKnife(weapon->id()))
				{
					changeKnife(localPlayer, weapon, knifeId);
				}

				std::map<sdk::WeaponId, Skin>::iterator skin = skins.find(weapon->id());
				if (skin != skins.end())
				{
					skin->second.change(weapon);
				}
			}
		}
	}
}

void skinchanger::changeKillIcons(sdk::GameEvent* gameEvent)
{
	if (strcmp(gameEvent->getName(), "player_death") == 0 &&
		sdk::engine->getPlayerForUserId(gameEvent->getInt("attacker")) == sdk::engine->getLocalPlayer() &&
		isChangeableKnife(gameEvent->getString("weapon")))
	{
		gameEvent->setString("weapon", getKnifeName(knifeId));
	}
}

void skinchanger::fixAnimations(sdk::RecvProxyData* proxyData, sdk::ViewModel* viewModel)
{
	sdk::Player* localPlayer = reinterpret_cast<sdk::Player*>(sdk::entityList->getEntity(sdk::engine->getLocalPlayer()));
	if (localPlayer != nullptr && localPlayer == viewModel->getOwner())
	{
		sdk::Weapon* weapon = viewModel->getWeapon();
		if (weapon != nullptr && (weapon->id() == knifeId || isChangeableKnife(weapon->id())))
		{
			proxyData->value.intValue = getKnifeSequence(weapon->id(), proxyData->value.intValue);
		}
	}
}

void skinchanger::initSkins()
{
	skins.emplace(sdk::WeaponId::Deagle, Skin(527));
	skins.emplace(sdk::WeaponId::Glock, Skin(586));
	skins.emplace(sdk::WeaponId::Ak47, Skin(801));
	skins.emplace(sdk::WeaponId::Awp, Skin(344));
	skins.emplace(sdk::WeaponId::M4a1, Skin(309));
	skins.emplace(sdk::WeaponId::Ssg08, Skin(624));
	skins.emplace(sdk::WeaponId::M4a1Silencer, Skin(714));
	skins.emplace(sdk::WeaponId::UspSilencer, Skin(504));

	knifeId = sdk::WeaponId::KnifeFalchion;
	skins.emplace(knifeId, Skin(415, sdk::WeaponQuality::Unusual));
}