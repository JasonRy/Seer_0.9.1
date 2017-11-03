#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// BetterList`1<System.String>
struct BetterList_1_t1504199569;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ByteReader
struct  ByteReader_t2446302219  : public Il2CppObject
{
public:
	// System.Byte[] ByteReader::mBuffer
	ByteU5BU5D_t4260760469* ___mBuffer_0;
	// System.Int32 ByteReader::mOffset
	int32_t ___mOffset_1;

public:
	inline static int32_t get_offset_of_mBuffer_0() { return static_cast<int32_t>(offsetof(ByteReader_t2446302219, ___mBuffer_0)); }
	inline ByteU5BU5D_t4260760469* get_mBuffer_0() const { return ___mBuffer_0; }
	inline ByteU5BU5D_t4260760469** get_address_of_mBuffer_0() { return &___mBuffer_0; }
	inline void set_mBuffer_0(ByteU5BU5D_t4260760469* value)
	{
		___mBuffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___mBuffer_0, value);
	}

	inline static int32_t get_offset_of_mOffset_1() { return static_cast<int32_t>(offsetof(ByteReader_t2446302219, ___mOffset_1)); }
	inline int32_t get_mOffset_1() const { return ___mOffset_1; }
	inline int32_t* get_address_of_mOffset_1() { return &___mOffset_1; }
	inline void set_mOffset_1(int32_t value)
	{
		___mOffset_1 = value;
	}
};

struct ByteReader_t2446302219_StaticFields
{
public:
	// BetterList`1<System.String> ByteReader::mTemp
	BetterList_1_t1504199569 * ___mTemp_2;

public:
	inline static int32_t get_offset_of_mTemp_2() { return static_cast<int32_t>(offsetof(ByteReader_t2446302219_StaticFields, ___mTemp_2)); }
	inline BetterList_1_t1504199569 * get_mTemp_2() const { return ___mTemp_2; }
	inline BetterList_1_t1504199569 ** get_address_of_mTemp_2() { return &___mTemp_2; }
	inline void set_mTemp_2(BetterList_1_t1504199569 * value)
	{
		___mTemp_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTemp_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
