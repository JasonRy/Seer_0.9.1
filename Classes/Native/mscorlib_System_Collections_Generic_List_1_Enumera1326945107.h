﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<AllSingleton/DeviceDetailedInformation>
struct List_1_t1307272337;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_AllSingleton_DeviceDetailedInfor4234054081.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<AllSingleton/DeviceDetailedInformation>
struct  Enumerator_t1326945107 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1307272337 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DeviceDetailedInformation_t4234054081  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1326945107, ___l_0)); }
	inline List_1_t1307272337 * get_l_0() const { return ___l_0; }
	inline List_1_t1307272337 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1307272337 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier(&___l_0, value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1326945107, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1326945107, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1326945107, ___current_3)); }
	inline DeviceDetailedInformation_t4234054081  get_current_3() const { return ___current_3; }
	inline DeviceDetailedInformation_t4234054081 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DeviceDetailedInformation_t4234054081  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
