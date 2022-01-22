#pragma once

#include "../Vmt.h"

#include "Entity.h"


namespace sdk
{
	class EntityList : public Vmt
	{
	public:
		Entity* getEntity(int entityNumber);
		Entity* getEntityFromHandle(int entityHandle);
	};
}