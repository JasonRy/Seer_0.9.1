﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EventDelegate[]
struct EventDelegateU5BU5D_t1029252742;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<EventDelegate>
struct  List_1_t1077642479  : public Il2CppObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EventDelegateU5BU5D_t1029252742* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1077642479, ____items_1)); }
	inline EventDelegateU5BU5D_t1029252742* get__items_1() const { return ____items_1; }
	inline EventDelegateU5BU5D_t1029252742** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EventDelegateU5BU5D_t1029252742* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier(&____items_1, value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1077642479, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1077642479, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1077642479_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EventDelegateU5BU5D_t1029252742* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1077642479_StaticFields, ___EmptyArray_4)); }
	inline EventDelegateU5BU5D_t1029252742* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EventDelegateU5BU5D_t1029252742** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EventDelegateU5BU5D_t1029252742* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
