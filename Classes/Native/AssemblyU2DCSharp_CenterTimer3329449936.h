#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Timer>
struct List_1_t1448997365;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CenterTimer
struct  CenterTimer_t3329449936  : public MonoBehaviour_t667441552
{
public:

public:
};

struct CenterTimer_t3329449936_StaticFields
{
public:
	// System.Collections.Generic.List`1<Timer> CenterTimer::timers
	List_1_t1448997365 * ___timers_2;

public:
	inline static int32_t get_offset_of_timers_2() { return static_cast<int32_t>(offsetof(CenterTimer_t3329449936_StaticFields, ___timers_2)); }
	inline List_1_t1448997365 * get_timers_2() const { return ___timers_2; }
	inline List_1_t1448997365 ** get_address_of_timers_2() { return &___timers_2; }
	inline void set_timers_2(List_1_t1448997365 * value)
	{
		___timers_2 = value;
		Il2CppCodeGenWriteBarrier(&___timers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
