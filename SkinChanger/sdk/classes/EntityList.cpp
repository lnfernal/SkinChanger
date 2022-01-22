#include "EntityList.h"


sdk::Entity* sdk::EntityList::getEntity(int entityNumber)
{
	using MethodPtr = Entity*(__thiscall*)(sdk::EntityList*, int);
	return getMethod<MethodPtr>(3)(this, entityNumber);
}

sdk::Entity* sdk::EntityList::getEntityFromHandle(int entityHandle)
{
	using MethodPtr = Entity*(__thiscall*)(sdk::EntityList*, int);
	return getMethod<MethodPtr>(4)(this, entityHandle);
}
