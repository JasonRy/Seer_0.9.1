#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PropertyReference
struct PropertyReference_t614957270;
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_PropertyBinding_Direction260931296.h"
#include "AssemblyU2DCSharp_PropertyBinding_UpdateCondition1215877363.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PropertyBinding
struct  PropertyBinding_t2650920656  : public MonoBehaviour_t667441552
{
public:
	// PropertyReference PropertyBinding::source
	PropertyReference_t614957270 * ___source_2;
	// PropertyReference PropertyBinding::target
	PropertyReference_t614957270 * ___target_3;
	// PropertyBinding/Direction PropertyBinding::direction
	int32_t ___direction_4;
	// PropertyBinding/UpdateCondition PropertyBinding::update
	int32_t ___update_5;
	// System.Boolean PropertyBinding::editMode
	bool ___editMode_6;
	// System.Object PropertyBinding::mLastValue
	Il2CppObject * ___mLastValue_7;

public:
	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(PropertyBinding_t2650920656, ___source_2)); }
	inline PropertyReference_t614957270 * get_source_2() const { return ___source_2; }
	inline PropertyReference_t614957270 ** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(PropertyReference_t614957270 * value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier(&___source_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(PropertyBinding_t2650920656, ___target_3)); }
	inline PropertyReference_t614957270 * get_target_3() const { return ___target_3; }
	inline PropertyReference_t614957270 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(PropertyReference_t614957270 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(PropertyBinding_t2650920656, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_update_5() { return static_cast<int32_t>(offsetof(PropertyBinding_t2650920656, ___update_5)); }
	inline int32_t get_update_5() const { return ___update_5; }
	inline int32_t* get_address_of_update_5() { return &___update_5; }
	inline void set_update_5(int32_t value)
	{
		___update_5 = value;
	}

	inline static int32_t get_offset_of_editMode_6() { return static_cast<int32_t>(offsetof(PropertyBinding_t2650920656, ___editMode_6)); }
	inline bool get_editMode_6() const { return ___editMode_6; }
	inline bool* get_address_of_editMode_6() { return &___editMode_6; }
	inline void set_editMode_6(bool value)
	{
		___editMode_6 = value;
	}

	inline static int32_t get_offset_of_mLastValue_7() { return static_cast<int32_t>(offsetof(PropertyBinding_t2650920656, ___mLastValue_7)); }
	inline Il2CppObject * get_mLastValue_7() const { return ___mLastValue_7; }
	inline Il2CppObject ** get_address_of_mLastValue_7() { return &___mLastValue_7; }
	inline void set_mLastValue_7(Il2CppObject * value)
	{
		___mLastValue_7 = value;
		Il2CppCodeGenWriteBarrier(&___mLastValue_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
