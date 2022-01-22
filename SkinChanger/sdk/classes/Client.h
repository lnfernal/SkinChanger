#pragma once

#include <cstdint>

#include "../Vmt.h"


namespace sdk
{
	struct RecvProxyData;
	struct RecvTable;

	using RecvVarProxyFPtr = void(__cdecl*)(sdk::RecvProxyData*, void*, void*);

	struct RecvProp
	{
		const char* varName;
		int recvType;
		int flags;
		int stringBufferSize;
		bool insideArray;
		const void* extraData;
		RecvProp* arrayProp;
		void* arrayLengthProxy;
		void* proxy;
		void* dataTableProxy;
		RecvTable* dataTable;
		int offset;
		int elementStride;
		int elements;
		const char* parentArrayPropName;
	};

	struct Variant
	{
		union
		{
			float floatValue;
			int intValue;
			const char* string;
			void* data;
			float vector[3];
			int64_t int64Value;
		};

		int	type;
	};

	struct RecvProxyData
	{
		const RecvProp* recvProp;
		Variant value;
		int element;
		int objectId;
	};

	struct RecvTable
	{
		RecvProp* props;
		int propsCount;
		void* decoder;
		const char* netTableName;
	};

	struct ClientClass
	{
		void* create;
		void* createEvent;
		const char* networkName;
		RecvTable* recvTable;
		ClientClass* next;
		int classId;
	};

	enum class FrameStage
	{
		Undefined = -1,
		Start,
		NetUpdateStart,
		NetUpdatePostDataUpdateStart,
		NetUpdatePostDataUpdateEnd,
		NetUpdateEnd,
		RenderStart,
		RenderEnd
	};

	class Client : public Vmt
	{
	public:
		ClientClass* getAllClasses();
	};
}