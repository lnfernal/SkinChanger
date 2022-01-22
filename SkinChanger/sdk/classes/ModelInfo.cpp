#include "ModelInfo.h"


int sdk::ModelInfo::getModelIndex(const char* modelName)
{
	using MethodPtr = int(__thiscall*)(sdk::ModelInfo*, const char*);
	return getMethod<MethodPtr>(2)(this, modelName);
}