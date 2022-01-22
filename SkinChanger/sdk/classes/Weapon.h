#pragma once

#include <cstdint>

#include "Entity.h"
#include "ViewModel.h"


namespace sdk
{
	enum class WeaponId : short
	{
		None = 0,
		Deagle,
		Elite,
		Fiveseven,
		Glock,
		Ak47 = 7,
		Aug,
		Awp,
		Famas,
		G3sg1,
		GalilAr = 13,
		M249,
		M4a1 = 16,
		Mac10,
		P90 = 19,
		Mp5 = 23,
		Ump45,
		Xm1014,
		Bizon,
		Mag7,
		Negev,
		Sawedoff,
		Tec9,
		Taser,
		Hkp2000,
		Mp7,
		Mp9,
		Nova,
		P250,
		Shield,
		Scar20,
		Sg556,
		Ssg08,
		Knifegg,
		Knife,
		Flashbang,
		Hegrenade,
		Smokegrenade,
		Molotov,
		Decoy,
		Incgrenade,
		C4,
		Healthshot = 57,
		KnifeT = 59,
		M4a1Silencer,
		UspSilencer,
		Cz75a = 63,
		Revolver,
		Tagrenade = 68,
		Fists,
		Breachcharge,
		Tablet = 72,
		Melee = 74,
		Axe,
		Hammer,
		Spanner = 78,
		KnifeGhost = 80,
		Firebomb,
		Diversion,
		FragGrenade,
		Snowball,
		Bumpmine,
		Bayonet = 500,
		KnifeCss = 503,
		KnifeFlip = 505,
		KnifeGut,
		KnifeKarambit,
		KnifeM9Bayonet,
		KnifeTactical,
		KnifeFalchion = 512,
		KnifeSurvivalBowie = 514,
		KnifeButterfly,
		KnifePush,
		KnifeCord,
		KnifeCanis,
		KnifeUrsus,
		KnifeGypsyJackknife,
		KnifeOutdoor,
		KnifeStiletto,
		KnifeWidowmaker,
		KnifeSkeleton = 525,
	};

    enum class WeaponQuality
    {
        Default,
        Genuine,
        Vintage,
        Unusual,
        Community = 5,
        Developer,
        SelfMade,
        Customized,
        Strange,
        Completed,
        Tournament = 12
    };

	class Weapon : public Entity
	{
	public:
		int& modelIndex();

        WeaponId& id();
        WeaponQuality& quality();
        int& itemIdHigh();
        uint32_t& accountId();
		char* customName();
        uint64_t& originalOwnerXuid();
        uint32_t& originalOwnerXuidLow();
        uint32_t& originalOwnerXuidHigh();
        int& fallbackPaintKit();
        int& fallbackSeed();
        float& fallbackWear();
        int& fallbackStatTrak();
		int& viewModelIndex();
		int& worldModelIndex();

		ViewModel* getWorldModel();
	};
}