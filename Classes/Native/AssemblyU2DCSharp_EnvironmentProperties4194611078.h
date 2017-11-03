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

// EnvironmentProperties
struct  EnvironmentProperties_t4194611078  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text EnvironmentProperties::humidityText
	Text_t9039225 * ___humidityText_2;
	// UnityEngine.UI.Text EnvironmentProperties::temperatureText
	Text_t9039225 * ___temperatureText_3;
	// UnityEngine.UI.Text EnvironmentProperties::PMText
	Text_t9039225 * ___PMText_4;
	// UnityEngine.UI.Text EnvironmentProperties::deviceText
	Text_t9039225 * ___deviceText_5;
	// UnityEngine.UI.Text EnvironmentProperties::positionText
	Text_t9039225 * ___positionText_6;

public:
	inline static int32_t get_offset_of_humidityText_2() { return static_cast<int32_t>(offsetof(EnvironmentProperties_t4194611078, ___humidityText_2)); }
	inline Text_t9039225 * get_humidityText_2() const { return ___humidityText_2; }
	inline Text_t9039225 ** get_address_of_humidityText_2() { return &___humidityText_2; }
	inline void set_humidityText_2(Text_t9039225 * value)
	{
		___humidityText_2 = value;
		Il2CppCodeGenWriteBarrier(&___humidityText_2, value);
	}

	inline static int32_t get_offset_of_temperatureText_3() { return static_cast<int32_t>(offsetof(EnvironmentProperties_t4194611078, ___temperatureText_3)); }
	inline Text_t9039225 * get_temperatureText_3() const { return ___temperatureText_3; }
	inline Text_t9039225 ** get_address_of_temperatureText_3() { return &___temperatureText_3; }
	inline void set_temperatureText_3(Text_t9039225 * value)
	{
		___temperatureText_3 = value;
		Il2CppCodeGenWriteBarrier(&___temperatureText_3, value);
	}

	inline static int32_t get_offset_of_PMText_4() { return static_cast<int32_t>(offsetof(EnvironmentProperties_t4194611078, ___PMText_4)); }
	inline Text_t9039225 * get_PMText_4() const { return ___PMText_4; }
	inline Text_t9039225 ** get_address_of_PMText_4() { return &___PMText_4; }
	inline void set_PMText_4(Text_t9039225 * value)
	{
		___PMText_4 = value;
		Il2CppCodeGenWriteBarrier(&___PMText_4, value);
	}

	inline static int32_t get_offset_of_deviceText_5() { return static_cast<int32_t>(offsetof(EnvironmentProperties_t4194611078, ___deviceText_5)); }
	inline Text_t9039225 * get_deviceText_5() const { return ___deviceText_5; }
	inline Text_t9039225 ** get_address_of_deviceText_5() { return &___deviceText_5; }
	inline void set_deviceText_5(Text_t9039225 * value)
	{
		___deviceText_5 = value;
		Il2CppCodeGenWriteBarrier(&___deviceText_5, value);
	}

	inline static int32_t get_offset_of_positionText_6() { return static_cast<int32_t>(offsetof(EnvironmentProperties_t4194611078, ___positionText_6)); }
	inline Text_t9039225 * get_positionText_6() const { return ___positionText_6; }
	inline Text_t9039225 ** get_address_of_positionText_6() { return &___positionText_6; }
	inline void set_positionText_6(Text_t9039225 * value)
	{
		___positionText_6 = value;
		Il2CppCodeGenWriteBarrier(&___positionText_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
