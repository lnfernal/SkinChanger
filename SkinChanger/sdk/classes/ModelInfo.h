#pragma once

#include "../Vmt.h"


namespace sdk
{
	class ModelInfo : public Vmt
	{
	public:
		int getModelIndex(const char* modelName);
	};
}