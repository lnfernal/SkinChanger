#pragma once

#include <cstdint>

#include "../Vmt.h"


namespace sdk
{
	struct PlayerInfo
	{
		uint64_t version;

		union
		{
			uint64_t xuid;
			struct
			{
				uint32_t xuidLow;
				uint32_t xuidHigh;
			};
		};
		char name[128];
		int	userId;
		char guid[33];

		uint32_t friendsID;
		char friendsName[128];

		bool isFakePlayer;
		bool isHltv;

		uint32_t customFiles[4];
		uint8_t filesDownloaded;
	};

	class Engine : public Vmt
	{
	public:
		bool getPlayerInfo(int entityNumber, PlayerInfo* playerInfo);
		int getPlayerForUserId(int userId);
		int getLocalPlayer();
		bool isInGame();
	};
}