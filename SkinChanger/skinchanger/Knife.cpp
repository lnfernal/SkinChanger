#include "Knife.h"

#include "../sdk/Sdk.h"


namespace skinchanger
{
	const char* getKnifeViewModelName(sdk::WeaponId weaponId)
	{
		switch (weaponId)
		{
		case sdk::WeaponId::Knife:
			return "models/weapons/v_knife_default_ct.mdl";

		case sdk::WeaponId::KnifeT:
			return "models/weapons/v_knife_default_t.mdl";

		case sdk::WeaponId::Bayonet:
			return "models/weapons/v_knife_bayonet.mdl";

		case sdk::WeaponId::KnifeCss:
			return "models/weapons/v_knife_css.mdl";

		case sdk::WeaponId::KnifeFlip:
			return "models/weapons/v_knife_flip.mdl";

		case sdk::WeaponId::KnifeGut:
			return "models/weapons/v_knife_gut.mdl";

		case sdk::WeaponId::KnifeKarambit:
			return "models/weapons/v_knife_karam.mdl";

		case sdk::WeaponId::KnifeM9Bayonet:
			return "models/weapons/v_knife_m9_bay.mdl";

		case sdk::WeaponId::KnifeTactical:
			return "models/weapons/v_knife_tactical.mdl";

		case sdk::WeaponId::KnifeFalchion:
			return "models/weapons/v_knife_falchion_advanced.mdl";

		case sdk::WeaponId::KnifeSurvivalBowie:
			return "models/weapons/v_knife_survival_bowie.mdl";

		case sdk::WeaponId::KnifeButterfly:
			return "models/weapons/v_knife_butterfly.mdl";

		case sdk::WeaponId::KnifePush:
			return "models/weapons/v_knife_push.mdl";

		case sdk::WeaponId::KnifeCord:
			return "models/weapons/v_knife_cord.mdl";

		case sdk::WeaponId::KnifeCanis:
			return "models/weapons/v_knife_canis.mdl";

		case sdk::WeaponId::KnifeUrsus:
			return "models/weapons/v_knife_ursus.mdl";

		case sdk::WeaponId::KnifeGypsyJackknife:
			return "models/weapons/v_knife_gypsy_.mdl";

		case sdk::WeaponId::KnifeOutdoor:
			return "models/weapons/v_knife_outdoor.mdl";

		case sdk::WeaponId::KnifeStiletto:
			return "models/weapons/v_knife_stilleto.mdl";

		case sdk::WeaponId::KnifeWidowmaker:
			return "models/weapons/v_knife_widowmaker.mdl";

		case sdk::WeaponId::KnifeSkeleton:
			return "models/weapons/v_knife_skeleton.mdl";

		default:
			return nullptr;
		}
	}

	const char* getKnifeWorldModelName(sdk::WeaponId weaponId)
	{
		switch (weaponId)
		{
		case sdk::WeaponId::Knife:
			return "models/weapons/w_knife_default_ct.mdl";

		case sdk::WeaponId::KnifeT:
			return "models/weapons/w_knife_default_t.mdl";

		case sdk::WeaponId::Bayonet:
			return "models/weapons/w_knife_bayonet.mdl";

		case sdk::WeaponId::KnifeCss:
			return "models/weapons/w_knife_css.mdl";

		case sdk::WeaponId::KnifeFlip:
			return "models/weapons/w_knife_flip.mdl";

		case sdk::WeaponId::KnifeGut:
			return "models/weapons/w_knife_gut.mdl";

		case sdk::WeaponId::KnifeKarambit:
			return "models/weapons/w_knife_karam.mdl";

		case sdk::WeaponId::KnifeM9Bayonet:
			return "models/weapons/w_knife_m9_bay.mdl";

		case sdk::WeaponId::KnifeTactical:
			return "models/weapons/w_knife_tactical.mdl";

		case sdk::WeaponId::KnifeFalchion:
			return "models/weapons/w_knife_falchion_advanced.mdl";

		case sdk::WeaponId::KnifeSurvivalBowie:
			return "models/weapons/w_knife_survival_bowie.mdl";

		case sdk::WeaponId::KnifeButterfly:
			return "models/weapons/w_knife_butterfly.mdl";

		case sdk::WeaponId::KnifePush:
			return "models/weapons/w_knife_push.mdl";

		case sdk::WeaponId::KnifeCord:
			return "models/weapons/w_knife_cord.mdl";

		case sdk::WeaponId::KnifeCanis:
			return "models/weapons/w_knife_canis.mdl";

		case sdk::WeaponId::KnifeUrsus:
			return "models/weapons/w_knife_ursus.mdl";

		case sdk::WeaponId::KnifeGypsyJackknife:
			return "models/weapons/w_knife_gypsy_.mdl";

		case sdk::WeaponId::KnifeOutdoor:
			return "models/weapons/w_knife_outdoor.mdl";

		case sdk::WeaponId::KnifeStiletto:
			return "models/weapons/w_knife_stilleto.mdl";

		case sdk::WeaponId::KnifeWidowmaker:
			return "models/weapons/w_knife_widowmaker.mdl";

		case sdk::WeaponId::KnifeSkeleton:
			return "models/weapons/w_knife_skeleton.mdl";

		default:
			return nullptr;
		}
	}
}


bool skinchanger::isChangeableKnife(sdk::WeaponId weaponId)
{
	switch (weaponId)
	{
	case sdk::WeaponId::Knife:
	case sdk::WeaponId::KnifeT:
		return true;

	default:
		return false;
	}
}

bool skinchanger::isChangeableKnife(const char* weaponName)
{
	return strcmp(weaponName, "knife") == 0 || strcmp(weaponName, "knife_t") == 0;
}

const char* skinchanger::getKnifeName(sdk::WeaponId weaponId)
{
	switch (weaponId)
	{
	case sdk::WeaponId::Knife:
		return "knife";

	case sdk::WeaponId::KnifeT:
		return "knife_t";

	case sdk::WeaponId::Bayonet:
		return "bayonet";

	case sdk::WeaponId::KnifeCss:
		return "knife_css";

	case sdk::WeaponId::KnifeFlip:
		return "knife_flip";

	case sdk::WeaponId::KnifeGut:
		return "knife_gut";

	case sdk::WeaponId::KnifeKarambit:
		return "knife_karambit";

	case sdk::WeaponId::KnifeM9Bayonet:
		return "knife_m9_bayonet";

	case sdk::WeaponId::KnifeTactical:
		return "knife_tactical";

	case sdk::WeaponId::KnifeFalchion:
		return "knife_falchion";

	case sdk::WeaponId::KnifeSurvivalBowie:
		return "knife_survival_bowie";

	case sdk::WeaponId::KnifeButterfly:
		return "knife_butterfly";

	case sdk::WeaponId::KnifePush:
		return "knife_push";

	case sdk::WeaponId::KnifeCord:
		return "knife_cord";

	case sdk::WeaponId::KnifeCanis:
		return "knife_canis";

	case sdk::WeaponId::KnifeUrsus:
		return "knife_ursus";

	case sdk::WeaponId::KnifeGypsyJackknife:
		return "knife_gypsy_jackknife";

	case sdk::WeaponId::KnifeOutdoor:
		return "knife_outdoor";

	case sdk::WeaponId::KnifeStiletto:
		return "knife_stilleto";

	case sdk::WeaponId::KnifeWidowmaker:
		return "knife_widowmaker";

	case sdk::WeaponId::KnifeSkeleton:
		return "knife_skeleton";

	default:
		return nullptr;
	}
}

int skinchanger::getKnifeSequence(sdk::WeaponId weaponId, int sequence)
{
	int knifeCssLookatSequences[]{ 12, 15 };

	switch (weaponId)
	{
	case sdk::WeaponId::KnifeCss:
		switch (sequence)
		{
		case 12:
			return knifeCssLookatSequences[sdk::randomInt(0, 1)];

		default:
			return sequence;
		}

	case sdk::WeaponId::KnifeFalchion:
		switch (sequence)
		{
		case 1:
		case 2:
			return 1;

		case 9:
			return sdk::randomInt(8, 9);

		case 12:
			return sdk::randomInt(12, 13);

		case 0:
		case 10:
		case 11:
			return sequence;

		default:
			return --sequence;
		}

	case sdk::WeaponId::KnifeSurvivalBowie:
		switch (sequence)
		{
		case 1:
		case 2:
			return 1;

		case 0:
			return sequence;

		default:
			return --sequence;
		}

	case sdk::WeaponId::KnifeButterfly:
		switch (sequence)
		{
		case 0:
			return sdk::randomInt(0, 1);

		case 12:
			return sdk::randomInt(13, 15);

		default:
			return ++sequence;
		}

	case sdk::WeaponId::KnifePush:
		switch (sequence)
		{
		case 2:
			return 1;

		case 3:
		case 4:
			return sdk::randomInt(2, 6);

		case 9:
			return sdk::randomInt(11, 12);

		case 0:
		case 1:
			return sequence;

		case 10:
		case 11:
		case 12:
			return sequence + 3;

		default:
			return sequence + 2;
		}

	case sdk::WeaponId::KnifeCord:
	case sdk::WeaponId::KnifeCanis:
	case sdk::WeaponId::KnifeUrsus:
	case sdk::WeaponId::KnifeOutdoor:
	case sdk::WeaponId::KnifeSkeleton:
		switch (sequence)
		{
		case 0:
			return sdk::randomInt(0, 1);

		case 12:
			return sdk::randomInt(13, 14);

		default:
			return ++sequence;
		}

	case sdk::WeaponId::KnifeStiletto:
		switch (sequence)
		{
		case 12:
			return sdk::randomInt(12, 13);

		default:
			return sequence;
		}

	case sdk::WeaponId::KnifeWidowmaker:
		switch (sequence)
		{
		case 12:
			return sdk::randomInt(14, 15);

		default:
			return sequence;
		}

	default:
		return sequence;
	}
}

void skinchanger::changeKnife(sdk::Player* player, sdk::Weapon* weapon, sdk::WeaponId weaponId)
{
	const char* viewModelName = getKnifeViewModelName(weaponId);
	const char* worldModelName = getKnifeWorldModelName(weaponId);
	if (viewModelName != nullptr && worldModelName != nullptr)
	{
		int viewModelIndex = sdk::modelInfo->getModelIndex(viewModelName);
		int worldModelIndex = sdk::modelInfo->getModelIndex(worldModelName);

		weapon->id() = weaponId;
		weapon->modelIndex() = viewModelIndex;
		weapon->viewModelIndex() = viewModelIndex;
		weapon->worldModelIndex() = worldModelIndex;

		if (weapon == player->getActiveWeapon())
		{
			sdk::ViewModel* viewModel = player->getViewModel();
			viewModel->modelIndex() = viewModelIndex;
			viewModel->viewModelIndex() = viewModelIndex;

			sdk::ViewModel* worldModel = weapon->getWorldModel();
			worldModel->modelIndex() = worldModelIndex;
			worldModel->viewModelIndex() = worldModelIndex;
		}
	}
}