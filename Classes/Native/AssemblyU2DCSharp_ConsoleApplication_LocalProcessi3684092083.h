#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConsoleApplication.LocalProcessing/depData
struct  depData_t3684092083 
{
public:
	// System.Collections.Generic.List`1<System.Int32> ConsoleApplication.LocalProcessing/depData::count_entry
	List_1_t2522024052 * ___count_entry_0;
	// System.Collections.Generic.List`1<System.Int32> ConsoleApplication.LocalProcessing/depData::count_leave
	List_1_t2522024052 * ___count_leave_1;

public:
	inline static int32_t get_offset_of_count_entry_0() { return static_cast<int32_t>(offsetof(depData_t3684092083, ___count_entry_0)); }
	inline List_1_t2522024052 * get_count_entry_0() const { return ___count_entry_0; }
	inline List_1_t2522024052 ** get_address_of_count_entry_0() { return &___count_entry_0; }
	inline void set_count_entry_0(List_1_t2522024052 * value)
	{
		___count_entry_0 = value;
		Il2CppCodeGenWriteBarrier(&___count_entry_0, value);
	}

	inline static int32_t get_offset_of_count_leave_1() { return static_cast<int32_t>(offsetof(depData_t3684092083, ___count_leave_1)); }
	inline List_1_t2522024052 * get_count_leave_1() const { return ___count_leave_1; }
	inline List_1_t2522024052 ** get_address_of_count_leave_1() { return &___count_leave_1; }
	inline void set_count_leave_1(List_1_t2522024052 * value)
	{
		___count_leave_1 = value;
		Il2CppCodeGenWriteBarrier(&___count_leave_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ConsoleApplication.LocalProcessing/depData
struct depData_t3684092083_marshaled_pinvoke
{
	List_1_t2522024052 * ___count_entry_0;
	List_1_t2522024052 * ___count_leave_1;
};
// Native definition for marshalling of: ConsoleApplication.LocalProcessing/depData
struct depData_t3684092083_marshaled_com
{
	List_1_t2522024052 * ___count_entry_0;
	List_1_t2522024052 * ___count_leave_1;
};
