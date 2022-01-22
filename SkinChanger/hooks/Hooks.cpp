#include "Hooks.h"

#include "../sdk/Netvars.h"

#include "FrameStageNotify.h"
#include "FireEventClientSide.h"
#include "RecvVarProxy.h"


void hooks::create()
{
	originalFrameStageNotify = sdk::client->hookMethod(37, frameStageNotify);
	originalFireEventClientSide = sdk::gameEventsManager->hookMethod(9, fireEventClientSide);
	originalRecvVarProxy = sdk::hookRecvVarProxy("DT_BaseViewModel", { "m_nSequence" }, recvVarProxy);
}

void hooks::destroy()
{
	sdk::client->unhookMethod(37, originalFrameStageNotify);
	sdk::gameEventsManager->unhookMethod(9, originalFireEventClientSide);
	sdk::unhookRecvVarProxy("DT_BaseViewModel", { "m_nSequence" }, originalRecvVarProxy);
}