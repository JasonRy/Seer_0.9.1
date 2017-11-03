#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WMG_Ring
struct WMG_Ring_t3041901982;
// WMG_Ring_Graph
struct WMG_Ring_Graph_t2216739661;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Ring_Graph/<updateLabelLineAring>c__AnonStorey9F
struct  U3CupdateLabelLineAringU3Ec__AnonStorey9F_t131734274  : public Il2CppObject
{
public:
	// WMG_Ring WMG_Ring_Graph/<updateLabelLineAring>c__AnonStorey9F::ring
	WMG_Ring_t3041901982 * ___ring_0;
	// System.Int32 WMG_Ring_Graph/<updateLabelLineAring>c__AnonStorey9F::numOverlapping
	int32_t ___numOverlapping_1;
	// WMG_Ring_Graph WMG_Ring_Graph/<updateLabelLineAring>c__AnonStorey9F::<>f__this
	WMG_Ring_Graph_t2216739661 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_ring_0() { return static_cast<int32_t>(offsetof(U3CupdateLabelLineAringU3Ec__AnonStorey9F_t131734274, ___ring_0)); }
	inline WMG_Ring_t3041901982 * get_ring_0() const { return ___ring_0; }
	inline WMG_Ring_t3041901982 ** get_address_of_ring_0() { return &___ring_0; }
	inline void set_ring_0(WMG_Ring_t3041901982 * value)
	{
		___ring_0 = value;
		Il2CppCodeGenWriteBarrier(&___ring_0, value);
	}

	inline static int32_t get_offset_of_numOverlapping_1() { return static_cast<int32_t>(offsetof(U3CupdateLabelLineAringU3Ec__AnonStorey9F_t131734274, ___numOverlapping_1)); }
	inline int32_t get_numOverlapping_1() const { return ___numOverlapping_1; }
	inline int32_t* get_address_of_numOverlapping_1() { return &___numOverlapping_1; }
	inline void set_numOverlapping_1(int32_t value)
	{
		___numOverlapping_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CupdateLabelLineAringU3Ec__AnonStorey9F_t131734274, ___U3CU3Ef__this_2)); }
	inline WMG_Ring_Graph_t2216739661 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline WMG_Ring_Graph_t2216739661 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(WMG_Ring_Graph_t2216739661 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
