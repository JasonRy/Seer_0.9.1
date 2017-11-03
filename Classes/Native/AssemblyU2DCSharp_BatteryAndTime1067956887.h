#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BatteryAndTime
struct  BatteryAndTime_t1067956887  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text BatteryAndTime::power
	Text_t9039225 * ___power_2;
	// System.String BatteryAndTime::_time
	String_t* ____time_3;
	// System.String BatteryAndTime::_battery
	String_t* ____battery_4;

public:
	inline static int32_t get_offset_of_power_2() { return static_cast<int32_t>(offsetof(BatteryAndTime_t1067956887, ___power_2)); }
	inline Text_t9039225 * get_power_2() const { return ___power_2; }
	inline Text_t9039225 ** get_address_of_power_2() { return &___power_2; }
	inline void set_power_2(Text_t9039225 * value)
	{
		___power_2 = value;
		Il2CppCodeGenWriteBarrier(&___power_2, value);
	}

	inline static int32_t get_offset_of__time_3() { return static_cast<int32_t>(offsetof(BatteryAndTime_t1067956887, ____time_3)); }
	inline String_t* get__time_3() const { return ____time_3; }
	inline String_t** get_address_of__time_3() { return &____time_3; }
	inline void set__time_3(String_t* value)
	{
		____time_3 = value;
		Il2CppCodeGenWriteBarrier(&____time_3, value);
	}

	inline static int32_t get_offset_of__battery_4() { return static_cast<int32_t>(offsetof(BatteryAndTime_t1067956887, ____battery_4)); }
	inline String_t* get__battery_4() const { return ____battery_4; }
	inline String_t** get_address_of__battery_4() { return &____battery_4; }
	inline void set__battery_4(String_t* value)
	{
		____battery_4 = value;
		Il2CppCodeGenWriteBarrier(&____battery_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
