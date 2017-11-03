#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DataStore
struct DataStore_t1629516599;
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataStore
struct  DataStore_t1629516599  : public MonoBehaviour_t667441552
{
public:

public:
};

struct DataStore_t1629516599_StaticFields
{
public:
	// DataStore modreq(System.Runtime.CompilerServices.IsVolatile) DataStore::_instance
	DataStore_t1629516599 * ____instance_2;
	// System.Object DataStore::lockHelper
	Il2CppObject * ___lockHelper_3;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(DataStore_t1629516599_StaticFields, ____instance_2)); }
	inline DataStore_t1629516599 * get__instance_2() const { return ____instance_2; }
	inline DataStore_t1629516599 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(DataStore_t1629516599 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of_lockHelper_3() { return static_cast<int32_t>(offsetof(DataStore_t1629516599_StaticFields, ___lockHelper_3)); }
	inline Il2CppObject * get_lockHelper_3() const { return ___lockHelper_3; }
	inline Il2CppObject ** get_address_of_lockHelper_3() { return &___lockHelper_3; }
	inline void set_lockHelper_3(Il2CppObject * value)
	{
		___lockHelper_3 = value;
		Il2CppCodeGenWriteBarrier(&___lockHelper_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
