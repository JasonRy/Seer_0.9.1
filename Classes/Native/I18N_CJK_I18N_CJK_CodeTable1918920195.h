﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t1561764144;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.CJK.CodeTable
struct  CodeTable_t1918920195  : public Il2CppObject
{
public:
	// System.IO.Stream I18N.CJK.CodeTable::stream
	Stream_t1561764144 * ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(CodeTable_t1918920195, ___stream_0)); }
	inline Stream_t1561764144 * get_stream_0() const { return ___stream_0; }
	inline Stream_t1561764144 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t1561764144 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif