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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrderAttributes
struct  OrderAttributes_t1620409125  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text OrderAttributes::name
	Text_t9039225 * ___name_2;
	// UnityEngine.UI.Text OrderAttributes::date
	Text_t9039225 * ___date_3;
	// UnityEngine.UI.Text OrderAttributes::status
	Text_t9039225 * ___status_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(OrderAttributes_t1620409125, ___name_2)); }
	inline Text_t9039225 * get_name_2() const { return ___name_2; }
	inline Text_t9039225 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(Text_t9039225 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_date_3() { return static_cast<int32_t>(offsetof(OrderAttributes_t1620409125, ___date_3)); }
	inline Text_t9039225 * get_date_3() const { return ___date_3; }
	inline Text_t9039225 ** get_address_of_date_3() { return &___date_3; }
	inline void set_date_3(Text_t9039225 * value)
	{
		___date_3 = value;
		Il2CppCodeGenWriteBarrier(&___date_3, value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(OrderAttributes_t1620409125, ___status_4)); }
	inline Text_t9039225 * get_status_4() const { return ___status_4; }
	inline Text_t9039225 ** get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(Text_t9039225 * value)
	{
		___status_4 = value;
		Il2CppCodeGenWriteBarrier(&___status_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
