#pragma once

#include "../sdk/classes/Weapon.h"


namespace skinchanger
{
	class Skin
	{
	public:
		Skin();
		Skin(int paintKit, sdk::WeaponQuality quality = sdk::WeaponQuality::Default, const char* customName = "", int statTrack = -1, int seed = 0, float wear = 0.f);

		void change(sdk::Weapon* weapon);

	private:
		int paintKit;
		sdk::WeaponQuality quality;
		const char* customName;
		int statTrack;
		int seed;
		float wear;
	};
}