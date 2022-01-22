#pragma once

#include "../sdk/classes/Client.h"


namespace hooks
{
	extern sdk::RecvVarProxyFPtr originalRecvVarProxy;


	void __cdecl recvVarProxy(sdk::RecvProxyData* proxyData, void* _class, void* out);
}