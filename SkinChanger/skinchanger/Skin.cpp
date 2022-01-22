#include "Skin.h"


skinchanger::Skin::Skin()
{
	paintKit = 0;
	quality = sdk::WeaponQuality::Default;
	customName = "";
	statTrack = -1;
	seed = 0;
	wear = 0.f;
}

skinchanger::Skin::Skin(int paintKit, sdk::WeaponQuality quality, const char* customName, int statTrack, int seed, float wear)
{
	this->paintKit = paintKit;
	this->quality = quality;
	this->customName = customName;
	this->statTrack = statTrack;
	this->seed = seed;
	this->wear = wear;
}

void skinchanger::Skin::change(sdk::Weapon* weapon)
{
	if (weapon->itemIdHigh() == 0)
	{
		weapon->itemIdHigh() = -1;
		weapon->accountId() = weapon->originalOwnerXuidLow();

		weapon->fallbackPaintKit() = paintKit;
		weapon->quality() = quality;
		weapon->fallbackStatTrak() = statTrack;
		weapon->fallbackSeed() = seed;
		weapon->fallbackWear() = wear;

		strcpy(weapon->customName(), customName);
	}
}