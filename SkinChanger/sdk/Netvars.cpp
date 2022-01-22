#include "Netvars.h"


sdk::RecvProp* sdk::getProp(sdk::RecvTable* recvRable, const char* varName)
{
	for (int i = 0; i < recvRable->propsCount; ++i)
	{
		sdk::RecvProp* recvProp = &recvRable->props[i];
		if (strcmp(recvProp->varName, varName) == 0)
		{
			return recvProp;
		}
	}

	return nullptr;
}

int sdk::getNetvarOffset(const char* netTableName, std::vector<const char*> netvars)
{
	if (!netvars.empty())
	{
		for (sdk::ClientClass* clientClass = sdk::client->getAllClasses(); clientClass != nullptr; clientClass = clientClass->next)
		{
			sdk::RecvTable* recvTable = clientClass->recvTable;
			if (strcmp(recvTable->netTableName, netTableName) == 0)
			{
				sdk::RecvProp* recvProp = nullptr;
				int netvarOffset = 0;

				for (const char* netvarName : netvars)
				{
					recvProp = getProp(recvTable, netvarName);
					if (recvProp == nullptr)
					{
						return -1;
					}

					recvTable = recvProp->dataTable;
					netvarOffset += recvProp->offset;
				}

				return netvarOffset;
			}
		}
	}

	return -1;
}

void sdk::unhookRecvVarProxy(const char* netTableName, std::vector<const char*> netvars, void* original)
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
						return;
					}

					recvTable = recvProp->dataTable;
				}

				recvProp->proxy = original;
				return;
			}
		}
	}
}