#pragma once

#include "Entity.h"
#include "Weapon.h"
#include "ViewModel.h"


namespace sdk
{
	constexpr int PLAYER_MAX_WEAPONS = 64;


	class Player : public Entity
	{
	public:
		bool isAlive();

		Weapon* getWeapon(int i);
		Weapon* getActiveWeapon();

		ViewModel* getViewModel();
	};
}