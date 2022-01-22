#pragma once

#include "../Vmt.h"


namespace sdk
{
	class GameEvent : public Vmt
	{
	public:
		const char* getName();
		int getInt(const char* keyName, int defaultValue = 0);
		const char* getString(const char* keyName, const char* defaultValue = "");
		const char* setString(const char* keyName, const char* value);
	};
}