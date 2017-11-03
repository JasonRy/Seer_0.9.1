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
// System.Collections.Generic.List`1<WMG_Ring_Graph>
struct List_1_t3584925213;

#include "AssemblyU2DCSharp_WMG_GUI_Functions1067338185.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Ring_Graph
struct  WMG_X_Ring_Graph_t1574434324  : public WMG_GUI_Functions_t1067338185
{
public:
	// UnityEngine.Object WMG_X_Ring_Graph::ringGraphPrefab
	Object_t3071478659 * ___ringGraphPrefab_2;
	// System.Boolean WMG_X_Ring_Graph::onlyRandomizeData
	bool ___onlyRandomizeData_3;
	// System.Collections.Generic.List`1<WMG_Ring_Graph> WMG_X_Ring_Graph::ringGraphs
	List_1_t3584925213 * ___ringGraphs_4;

public:
	inline static int32_t get_offset_of_ringGraphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Ring_Graph_t1574434324, ___ringGraphPrefab_2)); }
	inline Object_t3071478659 * get_ringGraphPrefab_2() const { return ___ringGraphPrefab_2; }
	inline Object_t3071478659 ** get_address_of_ringGraphPrefab_2() { return &___ringGraphPrefab_2; }
	inline void set_ringGraphPrefab_2(Object_t3071478659 * value)
	{
		___ringGraphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___ringGraphPrefab_2, value);
	}

	inline static int32_t get_offset_of_onlyRandomizeData_3() { return static_cast<int32_t>(offsetof(WMG_X_Ring_Graph_t1574434324, ___onlyRandomizeData_3)); }
	inline bool get_onlyRandomizeData_3() const { return ___onlyRandomizeData_3; }
	inline bool* get_address_of_onlyRandomizeData_3() { return &___onlyRandomizeData_3; }
	inline void set_onlyRandomizeData_3(bool value)
	{
		___onlyRandomizeData_3 = value;
	}

	inline static int32_t get_offset_of_ringGraphs_4() { return static_cast<int32_t>(offsetof(WMG_X_Ring_Graph_t1574434324, ___ringGraphs_4)); }
	inline List_1_t3584925213 * get_ringGraphs_4() const { return ___ringGraphs_4; }
	inline List_1_t3584925213 ** get_address_of_ringGraphs_4() { return &___ringGraphs_4; }
	inline void set_ringGraphs_4(List_1_t3584925213 * value)
	{
		___ringGraphs_4 = value;
		Il2CppCodeGenWriteBarrier(&___ringGraphs_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
