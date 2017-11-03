#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WMG_Axis_Graph
struct WMG_Axis_Graph_t1856481278;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Graph_Auto_Anim
struct  WMG_Graph_Auto_Anim_t1435251906  : public MonoBehaviour_t667441552
{
public:
	// WMG_Axis_Graph WMG_Graph_Auto_Anim::theGraph
	WMG_Axis_Graph_t1856481278 * ___theGraph_2;

public:
	inline static int32_t get_offset_of_theGraph_2() { return static_cast<int32_t>(offsetof(WMG_Graph_Auto_Anim_t1435251906, ___theGraph_2)); }
	inline WMG_Axis_Graph_t1856481278 * get_theGraph_2() const { return ___theGraph_2; }
	inline WMG_Axis_Graph_t1856481278 ** get_address_of_theGraph_2() { return &___theGraph_2; }
	inline void set_theGraph_2(WMG_Axis_Graph_t1856481278 * value)
	{
		___theGraph_2 = value;
		Il2CppCodeGenWriteBarrier(&___theGraph_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
