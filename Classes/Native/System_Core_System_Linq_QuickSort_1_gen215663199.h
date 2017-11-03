#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AllSingleton/Contacts[]
struct ContactsU5BU5D_t2097638985;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Linq.SortContext`1<AllSingleton/Contacts>
struct SortContext_1_t3596594101;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.QuickSort`1<AllSingleton/Contacts>
struct  QuickSort_1_t215663199  : public Il2CppObject
{
public:
	// TElement[] System.Linq.QuickSort`1::elements
	ContactsU5BU5D_t2097638985* ___elements_0;
	// System.Int32[] System.Linq.QuickSort`1::indexes
	Int32U5BU5D_t3230847821* ___indexes_1;
	// System.Linq.SortContext`1<TElement> System.Linq.QuickSort`1::context
	SortContext_1_t3596594101 * ___context_2;

public:
	inline static int32_t get_offset_of_elements_0() { return static_cast<int32_t>(offsetof(QuickSort_1_t215663199, ___elements_0)); }
	inline ContactsU5BU5D_t2097638985* get_elements_0() const { return ___elements_0; }
	inline ContactsU5BU5D_t2097638985** get_address_of_elements_0() { return &___elements_0; }
	inline void set_elements_0(ContactsU5BU5D_t2097638985* value)
	{
		___elements_0 = value;
		Il2CppCodeGenWriteBarrier(&___elements_0, value);
	}

	inline static int32_t get_offset_of_indexes_1() { return static_cast<int32_t>(offsetof(QuickSort_1_t215663199, ___indexes_1)); }
	inline Int32U5BU5D_t3230847821* get_indexes_1() const { return ___indexes_1; }
	inline Int32U5BU5D_t3230847821** get_address_of_indexes_1() { return &___indexes_1; }
	inline void set_indexes_1(Int32U5BU5D_t3230847821* value)
	{
		___indexes_1 = value;
		Il2CppCodeGenWriteBarrier(&___indexes_1, value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(QuickSort_1_t215663199, ___context_2)); }
	inline SortContext_1_t3596594101 * get_context_2() const { return ___context_2; }
	inline SortContext_1_t3596594101 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(SortContext_1_t3596594101 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier(&___context_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
