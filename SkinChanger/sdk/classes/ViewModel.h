#pragma once

#include "../Vmt.h"


namespace sdk
{
	class Player;
	class Weapon;

	class ViewModel : public Vmt
	{
	public:
		int& modelIndex();
		int& viewModelIndex();

		Weapon* getWeapon();
		Player* getOwner();
	};
}