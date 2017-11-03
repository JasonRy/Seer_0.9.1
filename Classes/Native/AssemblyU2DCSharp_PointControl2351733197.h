#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3027308338;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// BackGroundEffect
struct BackGroundEffect_t616462495;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t1907060817;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointControl
struct  PointControl_t2351733197  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> PointControl::nearbyPoint
	List_1_t3027308338 * ___nearbyPoint_2;
	// System.Collections.Generic.List`1<System.Single> PointControl::distance
	List_1_t1365137228 * ___distance_3;
	// BackGroundEffect PointControl::BGE
	BackGroundEffect_t616462495 * ___BGE_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> PointControl::line
	List_1_t1907060817 * ___line_5;

public:
	inline static int32_t get_offset_of_nearbyPoint_2() { return static_cast<int32_t>(offsetof(PointControl_t2351733197, ___nearbyPoint_2)); }
	inline List_1_t3027308338 * get_nearbyPoint_2() const { return ___nearbyPoint_2; }
	inline List_1_t3027308338 ** get_address_of_nearbyPoint_2() { return &___nearbyPoint_2; }
	inline void set_nearbyPoint_2(List_1_t3027308338 * value)
	{
		___nearbyPoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___nearbyPoint_2, value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(PointControl_t2351733197, ___distance_3)); }
	inline List_1_t1365137228 * get_distance_3() const { return ___distance_3; }
	inline List_1_t1365137228 ** get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(List_1_t1365137228 * value)
	{
		___distance_3 = value;
		Il2CppCodeGenWriteBarrier(&___distance_3, value);
	}

	inline static int32_t get_offset_of_BGE_4() { return static_cast<int32_t>(offsetof(PointControl_t2351733197, ___BGE_4)); }
	inline BackGroundEffect_t616462495 * get_BGE_4() const { return ___BGE_4; }
	inline BackGroundEffect_t616462495 ** get_address_of_BGE_4() { return &___BGE_4; }
	inline void set_BGE_4(BackGroundEffect_t616462495 * value)
	{
		___BGE_4 = value;
		Il2CppCodeGenWriteBarrier(&___BGE_4, value);
	}

	inline static int32_t get_offset_of_line_5() { return static_cast<int32_t>(offsetof(PointControl_t2351733197, ___line_5)); }
	inline List_1_t1907060817 * get_line_5() const { return ___line_5; }
	inline List_1_t1907060817 ** get_address_of_line_5() { return &___line_5; }
	inline void set_line_5(List_1_t1907060817 * value)
	{
		___line_5 = value;
		Il2CppCodeGenWriteBarrier(&___line_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
