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

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlChoiceIdentifierAttribute
struct  XmlChoiceIdentifierAttribute_t4098143021  : public Attribute_t2523058482
{
public:
	// System.String System.Xml.Serialization.XmlChoiceIdentifierAttribute::memberName
	String_t* ___memberName_0;

public:
	inline static int32_t get_offset_of_memberName_0() { return static_cast<int32_t>(offsetof(XmlChoiceIdentifierAttribute_t4098143021, ___memberName_0)); }
	inline String_t* get_memberName_0() const { return ___memberName_0; }
	inline String_t** get_address_of_memberName_0() { return &___memberName_0; }
	inline void set_memberName_0(String_t* value)
	{
		___memberName_0 = value;
		Il2CppCodeGenWriteBarrier(&___memberName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
