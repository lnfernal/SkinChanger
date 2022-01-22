#pragma once

#include <vector>

#include "Sdk.h"


namespace sdk
{
	sdk::RecvProp* getProp(sdk::RecvTable* recvRable, const char* varName);
	int getNetvarOffset(const char* netTableName, std::vector<const char*> netvars);

	template<class T>
	T hookRecvVarProxy(const char* netTableName, std::vector<const char*> netvars, T hook);

	void unhookRecvVarProxy(const char* netTableName, std::vector<const char*> netvars, void* original);
}


template<class T>
T sdk::hookRecvVarProxy(const char* netTableName, std::vector<const char*> netvars, T hook)
{
	if (!netvars.empty())
	{
		for (sdk::ClientClass* clientClass = sdk::client->getAllClasses(); clientClass != nullptr; clientClass = clientClass->next)
		{
			sdk::RecvTable* recvTable = clientClass->recvTable;
			if (strcmp(recvTable->netTableName, netTableName) == 0)
			{
				sdk::RecvProp* recvProp = nullptr;

				for (const char* netvarName : netvars)
				{
					recvProp = getProp(recvTable, netvarName);
					if (recvProp == nullptr)
					{
						return nullptr;
					}

					recvTable = recvProp->dataTable;
				}

				T original = static_cast<T>(recvProp->proxy);
				recvProp->proxy = static_cast<void*>(hook);
				return original;
			}
		}
	}

	return nullptr;
}