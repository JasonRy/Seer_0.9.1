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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "AssemblyU2DCSharp_WMG_GUI_Functions1067338185.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_X_Pie_Ring_Graph
struct  WMG_X_Pie_Ring_Graph_t1048929351  : public WMG_GUI_Functions_t1067338185
{
public:
	// UnityEngine.Object WMG_X_Pie_Ring_Graph::ringGraphPrefab
	Object_t3071478659 * ___ringGraphPrefab_2;
	// UnityEngine.GameObject WMG_X_Pie_Ring_Graph::ringGO
	GameObject_t3674682005 * ___ringGO_3;

public:
	inline static int32_t get_offset_of_ringGraphPrefab_2() { return static_cast<int32_t>(offsetof(WMG_X_Pie_Ring_Graph_t1048929351, ___ringGraphPrefab_2)); }
	inline Object_t3071478659 * get_ringGraphPrefab_2() const { return ___ringGraphPrefab_2; }
	inline Object_t3071478659 ** get_address_of_ringGraphPrefab_2() { return &___ringGraphPrefab_2; }
	inline void set_ringGraphPrefab_2(Object_t3071478659 * value)
	{
		___ringGraphPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___ringGraphPrefab_2, value);
	}

	inline static int32_t get_offset_of_ringGO_3() { return static_cast<int32_t>(offsetof(WMG_X_Pie_Ring_Graph_t1048929351, ___ringGO_3)); }
	inline GameObject_t3674682005 * get_ringGO_3() const { return ___ringGO_3; }
	inline GameObject_t3674682005 ** get_address_of_ringGO_3() { return &___ringGO_3; }
	inline void set_ringGO_3(GameObject_t3674682005 * value)
	{
		___ringGO_3 = value;
		Il2CppCodeGenWriteBarrier(&___ringGO_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
