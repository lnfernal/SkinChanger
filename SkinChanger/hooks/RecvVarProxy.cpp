#include "RecvVarProxy.h"

#include "../sdk/Sdk.h"

#include "../sdk/classes/ViewModel.h"

#include "../skinchanger/SkinChanger.h"


namespace hooks
{
	sdk::RecvVarProxyFPtr hooks::originalRecvVarProxy;
}


void __cdecl hooks::recvVarProxy(sdk::RecvProxyData* proxyData, void* _class, void* out)
{
	skinchanger::fixAnimations(proxyData, static_cast<sdk::ViewModel*>(_class));

	originalRecvVarProxy(proxyData, _class, out);
}