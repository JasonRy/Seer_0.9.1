#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// I18N.Common.Manager
struct Manager_t3623805651;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.Manager
struct  Manager_t3623805651  : public Il2CppObject
{
public:
	// System.Collections.Hashtable I18N.Common.Manager::handlers
	Hashtable_t1407064410 * ___handlers_2;
	// System.Collections.Hashtable I18N.Common.Manager::active
	Hashtable_t1407064410 * ___active_3;
	// System.Collections.Hashtable I18N.Common.Manager::assemblies
	Hashtable_t1407064410 * ___assemblies_4;

public:
	inline static int32_t get_offset_of_handlers_2() { return static_cast<int32_t>(offsetof(Manager_t3623805651, ___handlers_2)); }
	inline Hashtable_t1407064410 * get_handlers_2() const { return ___handlers_2; }
	inline Hashtable_t1407064410 ** get_address_of_handlers_2() { return &___handlers_2; }
	inline void set_handlers_2(Hashtable_t1407064410 * value)
	{
		___handlers_2 = value;
		Il2CppCodeGenWriteBarrier(&___handlers_2, value);
	}

	inline static int32_t get_offset_of_active_3() { return static_cast<int32_t>(offsetof(Manager_t3623805651, ___active_3)); }
	inline Hashtable_t1407064410 * get_active_3() const { return ___active_3; }
	inline Hashtable_t1407064410 ** get_address_of_active_3() { return &___active_3; }
	inline void set_active_3(Hashtable_t1407064410 * value)
	{
		___active_3 = value;
		Il2CppCodeGenWriteBarrier(&___active_3, value);
	}

	inline static int32_t get_offset_of_assemblies_4() { return static_cast<int32_t>(offsetof(Manager_t3623805651, ___assemblies_4)); }
	inline Hashtable_t1407064410 * get_assemblies_4() const { return ___assemblies_4; }
	inline Hashtable_t1407064410 ** get_address_of_assemblies_4() { return &___assemblies_4; }
	inline void set_assemblies_4(Hashtable_t1407064410 * value)
	{
		___assemblies_4 = value;
		Il2CppCodeGenWriteBarrier(&___assemblies_4, value);
	}
};

struct Manager_t3623805651_StaticFields
{
public:
	// I18N.Common.Manager I18N.Common.Manager::manager
	Manager_t3623805651 * ___manager_1;
	// System.Object I18N.Common.Manager::lockobj
	Il2CppObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_manager_1() { return static_cast<int32_t>(offsetof(Manager_t3623805651_StaticFields, ___manager_1)); }
	inline Manager_t3623805651 * get_manager_1() const { return ___manager_1; }
	inline Manager_t3623805651 ** get_address_of_manager_1() { return &___manager_1; }
	inline void set_manager_1(Manager_t3623805651 * value)
	{
		___manager_1 = value;
		Il2CppCodeGenWriteBarrier(&___manager_1, value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(Manager_t3623805651_StaticFields, ___lockobj_5)); }
	inline Il2CppObject * get_lockobj_5() const { return ___lockobj_5; }
	inline Il2CppObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(Il2CppObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier(&___lockobj_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
