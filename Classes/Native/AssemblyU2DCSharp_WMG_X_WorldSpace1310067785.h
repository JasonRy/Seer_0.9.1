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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_WorldSpace
struct  WMG_X_WorldSpace_t1310067785  : public MonoBehaviour_t667441552
{
public:
	// WMG_Axis_Graph WMG_X_WorldSpace::graph
	WMG_Axis_Graph_t1856481278 * ___graph_2;
	// UnityEngine.GameObject WMG_X_WorldSpace::toolTipPanel
	GameObject_t3674682005 * ___toolTipPanel_3;
	// UnityEngine.GameObject WMG_X_WorldSpace::toolTipLabel
	GameObject_t3674682005 * ___toolTipLabel_4;

public:
	inline static int32_t get_offset_of_graph_2() { return static_cast<int32_t>(offsetof(WMG_X_WorldSpace_t1310067785, ___graph_2)); }
	inline WMG_Axis_Graph_t1856481278 * get_graph_2() const { return ___graph_2; }
	inline WMG_Axis_Graph_t1856481278 ** get_address_of_graph_2() { return &___graph_2; }
	inline void set_graph_2(WMG_Axis_Graph_t1856481278 * value)
	{
		___graph_2 = value;
		Il2CppCodeGenWriteBarrier(&___graph_2, value);
	}

	inline static int32_t get_offset_of_toolTipPanel_3() { return static_cast<int32_t>(offsetof(WMG_X_WorldSpace_t1310067785, ___toolTipPanel_3)); }
	inline GameObject_t3674682005 * get_toolTipPanel_3() const { return ___toolTipPanel_3; }
	inline GameObject_t3674682005 ** get_address_of_toolTipPanel_3() { return &___toolTipPanel_3; }
	inline void set_toolTipPanel_3(GameObject_t3674682005 * value)
	{
		___toolTipPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___toolTipPanel_3, value);
	}

	inline static int32_t get_offset_of_toolTipLabel_4() { return static_cast<int32_t>(offsetof(WMG_X_WorldSpace_t1310067785, ___toolTipLabel_4)); }
	inline GameObject_t3674682005 * get_toolTipLabel_4() const { return ___toolTipLabel_4; }
	inline GameObject_t3674682005 ** get_address_of_toolTipLabel_4() { return &___toolTipLabel_4; }
	inline void set_toolTipLabel_4(GameObject_t3674682005 * value)
	{
		___toolTipLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___toolTipLabel_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
