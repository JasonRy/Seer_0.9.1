﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<ConsoleApplication.Program/departureData>
struct List_1_t1675550862;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConsoleApplication.Program/departureInfo
struct  departureInfo_t307526338  : public Il2CppObject
{
public:
	// System.String ConsoleApplication.Program/departureInfo::<msg>k__BackingField
	String_t* ___U3CmsgU3Ek__BackingField_0;
	// System.String ConsoleApplication.Program/departureInfo::<code>k__BackingField
	String_t* ___U3CcodeU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<ConsoleApplication.Program/departureData> ConsoleApplication.Program/departureInfo::<data>k__BackingField
	List_1_t1675550862 * ___U3CdataU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmsgU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(departureInfo_t307526338, ___U3CmsgU3Ek__BackingField_0)); }
	inline String_t* get_U3CmsgU3Ek__BackingField_0() const { return ___U3CmsgU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CmsgU3Ek__BackingField_0() { return &___U3CmsgU3Ek__BackingField_0; }
	inline void set_U3CmsgU3Ek__BackingField_0(String_t* value)
	{
		___U3CmsgU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmsgU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CcodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(departureInfo_t307526338, ___U3CcodeU3Ek__BackingField_1)); }
	inline String_t* get_U3CcodeU3Ek__BackingField_1() const { return ___U3CcodeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CcodeU3Ek__BackingField_1() { return &___U3CcodeU3Ek__BackingField_1; }
	inline void set_U3CcodeU3Ek__BackingField_1(String_t* value)
	{
		___U3CcodeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcodeU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(departureInfo_t307526338, ___U3CdataU3Ek__BackingField_2)); }
	inline List_1_t1675550862 * get_U3CdataU3Ek__BackingField_2() const { return ___U3CdataU3Ek__BackingField_2; }
	inline List_1_t1675550862 ** get_address_of_U3CdataU3Ek__BackingField_2() { return &___U3CdataU3Ek__BackingField_2; }
	inline void set_U3CdataU3Ek__BackingField_2(List_1_t1675550862 * value)
	{
		___U3CdataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdataU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
