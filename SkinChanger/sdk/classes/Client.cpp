#include "Client.h"


sdk::ClientClass* sdk::Client::getAllClasses()
{
	using MethodPtr = sdk::ClientClass*(__thiscall*)(sdk::Client*);
	return getMethod<MethodPtr>(8)(this);
}