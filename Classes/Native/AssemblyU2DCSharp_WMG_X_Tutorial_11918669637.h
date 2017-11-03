#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1856481278;
// WMG_Series
struct WMG_Series_t2715102821;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Tutorial_1
struct  WMG_X_Tutorial_1_t1918669637  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject WMG_X_Tutorial_1::emptyGraphPrefab
	GameObject_t3674682005 * ___emptyGraphPrefab_2;
	// WMG_Axis_Graph WMG_X_Tutorial_1::graph
	WMG_Axis_Graph_t1856481278 * ___graph_3;
	// WMG_Series WMG_X_Tutorial_1::series1
	WMG_Series_t2715102821 * ___series1_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_X_Tutorial_1::series1Data
	List_1_t1355284821 * ___series1Data_5;
	// System.Boolean WMG_X_Tutorial_1::useData2
	bool ___useData2_6;
	// System.Collections.Generic.List`1<System.String> WMG_X_Tutorial_1::series1Data2
	List_1_t1375417109 * ___series1Data2_7;

public:
	inline static int32_t get_offset_of_emptyGraphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Tutorial_1_t1918669637, ___emptyGraphPrefab_2)); }
	inline GameObject_t3674682005 * get_emptyGraphPrefab_2() const { return ___emptyGraphPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_emptyGraphPrefab_2() { return &___emptyGraphPrefab_2; }
	inline void set_emptyGraphPrefab_2(GameObject_t3674682005 * value)
	{
		___emptyGraphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___emptyGraphPrefab_2, value);
	}

	inline static int32_t get_offset_of_graph_3() { return static_cast<int32_t>(offsetof(WMG_X_Tutorial_1_t1918669637, ___graph_3)); }
	inline WMG_Axis_Graph_t1856481278 * get_graph_3() const { return ___graph_3; }
	inline WMG_Axis_Graph_t1856481278 ** get_address_of_graph_3() { return &___graph_3; }
	inline void set_graph_3(WMG_Axis_Graph_t1856481278 * value)
	{
		___graph_3 = value;
		Il2CppCodeGenWriteBarrier(&___graph_3, value);
	}

	inline static int32_t get_offset_of_series1_4() { return static_cast<int32_t>(offsetof(WMG_X_Tutorial_1_t1918669637, ___series1_4)); }
	inline WMG_Series_t2715102821 * get_series1_4() const { return ___series1_4; }
	inline WMG_Series_t2715102821 ** get_address_of_series1_4() { return &___series1_4; }
	inline void set_series1_4(WMG_Series_t2715102821 * value)
	{
		___series1_4 = value;
		Il2CppCodeGenWriteBarrier(&___series1_4, value);
	}

	inline static int32_t get_offset_of_series1Data_5() { return static_cast<int32_t>(offsetof(WMG_X_Tutorial_1_t1918669637, ___series1Data_5)); }
	inline List_1_t1355284821 * get_series1Data_5() const { return ___series1Data_5; }
	inline List_1_t1355284821 ** get_address_of_series1Data_5() { return &___series1Data_5; }
	inline void set_series1Data_5(List_1_t1355284821 * value)
	{
		___series1Data_5 = value;
		Il2CppCodeGenWriteBarrier(&___series1Data_5, value);
	}

	inline static int32_t get_offset_of_useData2_6() { return static_cast<int32_t>(offsetof(WMG_X_Tutorial_1_t1918669637, ___useData2_6)); }
	inline bool get_useData2_6() const { return ___useData2_6; }
	inline bool* get_address_of_useData2_6() { return &___useData2_6; }
	inline void set_useData2_6(bool value)
	{
		___useData2_6 = value;
	}

	inline static int32_t get_offset_of_series1Data2_7() { return static_cast<int32_t>(offsetof(WMG_X_Tutorial_1_t1918669637, ___series1Data2_7)); }
	inline List_1_t1375417109 * get_series1Data2_7() const { return ___series1Data2_7; }
	inline List_1_t1375417109 ** get_address_of_series1Data2_7() { return &___series1Data2_7; }
	inline void set_series1Data2_7(List_1_t1375417109 * value)
	{
		___series1Data2_7 = value;
		Il2CppCodeGenWriteBarrier(&___series1Data2_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
