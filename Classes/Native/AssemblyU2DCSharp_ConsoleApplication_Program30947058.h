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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConsoleApplication.Program
struct  Program_t30947058  : public Il2CppObject
{
public:

public:
};

struct Program_t30947058_StaticFields
{
public:
	// System.String ConsoleApplication.Program::deviceJson
	String_t* ___deviceJson_0;

public:
	inline static int32_t get_offset_of_deviceJson_0() { return static_cast<int32_t>(offsetof(Program_t30947058_StaticFields, ___deviceJson_0)); }
	inline String_t* get_deviceJson_0() const { return ___deviceJson_0; }
	inline String_t** get_address_of_deviceJson_0() { return &___deviceJson_0; }
	inline void set_deviceJson_0(String_t* value)
	{
		___deviceJson_0 = value;
		Il2CppCodeGenWriteBarrier(&___deviceJson_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
