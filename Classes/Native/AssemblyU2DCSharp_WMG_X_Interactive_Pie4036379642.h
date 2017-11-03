#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t3071478659;
// WMG_Pie_Graph
struct WMG_Pie_Graph_t3346148877;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Interactive_Pie
struct  WMG_X_Interactive_Pie_t4036379642  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Object WMG_X_Interactive_Pie::pieGraphPrefab
	Object_t3071478659 * ___pieGraphPrefab_2;
	// WMG_Pie_Graph WMG_X_Interactive_Pie::graph
	WMG_Pie_Graph_t3346148877 * ___graph_3;

public:
	inline static int32_t get_offset_of_pieGraphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Interactive_Pie_t4036379642, ___pieGraphPrefab_2)); }
	inline Object_t3071478659 * get_pieGraphPrefab_2() const { return ___pieGraphPrefab_2; }
	inline Object_t3071478659 ** get_address_of_pieGraphPrefab_2() { return &___pieGraphPrefab_2; }
	inline void set_pieGraphPrefab_2(Object_t3071478659 * value)
	{
		___pieGraphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___pieGraphPrefab_2, value);
	}

	inline static int32_t get_offset_of_graph_3() { return static_cast<int32_t>(offsetof(WMG_X_Interactive_Pie_t4036379642, ___graph_3)); }
	inline WMG_Pie_Graph_t3346148877 * get_graph_3() const { return ___graph_3; }
	inline WMG_Pie_Graph_t3346148877 ** get_address_of_graph_3() { return &___graph_3; }
	inline void set_graph_3(WMG_Pie_Graph_t3346148877 * value)
	{
		___graph_3 = value;
		Il2CppCodeGenWriteBarrier(&___graph_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
