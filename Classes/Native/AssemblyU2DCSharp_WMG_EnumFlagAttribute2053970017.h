#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_PropertyAttribute3531521085.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_EnumFlagAttribute
struct  WMG_EnumFlagAttribute_t2053970017  : public PropertyAttribute_t3531521085
{
public:
	// System.String WMG_EnumFlagAttribute::enumName
	String_t* ___enumName_0;

public:
	inline static int32_t get_offset_of_enumName_0() { return static_cast<int32_t>(offsetof(WMG_EnumFlagAttribute_t2053970017, ___enumName_0)); }
	inline String_t* get_enumName_0() const { return ___enumName_0; }
	inline String_t** get_address_of_enumName_0() { return &___enumName_0; }
	inline void set_enumName_0(String_t* value)
	{
		___enumName_0 = value;
		Il2CppCodeGenWriteBarrier(&___enumName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
