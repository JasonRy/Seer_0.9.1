﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WMG_Ring_Graph
struct WMG_Ring_Graph_t2216739661;
// UnityEngine.Object
struct Object_t3071478659;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// WMG_List`1<System.Single>
struct WMG_List_1_t3645425878;
// System.Collections.Generic.List`1<WMG_Ring>
struct List_1_t115120238;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.UI.Text
struct Text_t9039225;
// MainInterfaceNumericalControl
struct MainInterfaceNumericalControl_t4129790405;

#include "AssemblyU2DCSharp_WMG_GUI_Functions1067338185.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetRingsGraph
struct  SetRingsGraph_t2559073453  : public WMG_GUI_Functions_t1067338185
{
public:
	// WMG_Ring_Graph SetRingsGraph::graph
	WMG_Ring_Graph_t2216739661 * ___graph_2;
	// UnityEngine.Object SetRingsGraph::ringGraphPrefab
	Object_t3071478659 * ___ringGraphPrefab_3;
	// UnityEngine.GameObject SetRingsGraph::ringGO
	GameObject_t3674682005 * ___ringGO_4;
	// System.String SetRingsGraph::graphName
	String_t* ___graphName_5;
	// System.Single SetRingsGraph::horizontal_line_length
	float ___horizontal_line_length_6;
	// System.Single SetRingsGraph::vertical_line_length
	float ___vertical_line_length_7;
	// System.Collections.Generic.List`1<System.String> SetRingsGraph::allCategories
	List_1_t1375417109 * ___allCategories_8;
	// WMG_List`1<System.Single> SetRingsGraph::allCategoriesValue
	WMG_List_1_t3645425878 * ___allCategoriesValue_9;
	// System.Collections.Generic.List`1<WMG_Ring> SetRingsGraph::rings
	List_1_t115120238 * ___rings_10;
	// UnityEngine.Sprite SetRingsGraph::clickSprite
	Sprite_t3199167241 * ___clickSprite_11;
	// UnityEngine.Sprite SetRingsGraph::normalSprite
	Sprite_t3199167241 * ___normalSprite_12;
	// UnityEngine.Sprite SetRingsGraph::click_off_sprite
	Sprite_t3199167241 * ___click_off_sprite_13;
	// UnityEngine.UI.Text SetRingsGraph::nowClickNumText
	Text_t9039225 * ___nowClickNumText_14;
	// MainInterfaceNumericalControl SetRingsGraph::MINC
	MainInterfaceNumericalControl_t4129790405 * ___MINC_15;

public:
	inline static int32_t get_offset_of_graph_2() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___graph_2)); }
	inline WMG_Ring_Graph_t2216739661 * get_graph_2() const { return ___graph_2; }
	inline WMG_Ring_Graph_t2216739661 ** get_address_of_graph_2() { return &___graph_2; }
	inline void set_graph_2(WMG_Ring_Graph_t2216739661 * value)
	{
		___graph_2 = value;
		Il2CppCodeGenWriteBarrier(&___graph_2, value);
	}

	inline static int32_t get_offset_of_ringGraphPrefab_3() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___ringGraphPrefab_3)); }
	inline Object_t3071478659 * get_ringGraphPrefab_3() const { return ___ringGraphPrefab_3; }
	inline Object_t3071478659 ** get_address_of_ringGraphPrefab_3() { return &___ringGraphPrefab_3; }
	inline void set_ringGraphPrefab_3(Object_t3071478659 * value)
	{
		___ringGraphPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___ringGraphPrefab_3, value);
	}

	inline static int32_t get_offset_of_ringGO_4() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___ringGO_4)); }
	inline GameObject_t3674682005 * get_ringGO_4() const { return ___ringGO_4; }
	inline GameObject_t3674682005 ** get_address_of_ringGO_4() { return &___ringGO_4; }
	inline void set_ringGO_4(GameObject_t3674682005 * value)
	{
		___ringGO_4 = value;
		Il2CppCodeGenWriteBarrier(&___ringGO_4, value);
	}

	inline static int32_t get_offset_of_graphName_5() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___graphName_5)); }
	inline String_t* get_graphName_5() const { return ___graphName_5; }
	inline String_t** get_address_of_graphName_5() { return &___graphName_5; }
	inline void set_graphName_5(String_t* value)
	{
		___graphName_5 = value;
		Il2CppCodeGenWriteBarrier(&___graphName_5, value);
	}

	inline static int32_t get_offset_of_horizontal_line_length_6() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___horizontal_line_length_6)); }
	inline float get_horizontal_line_length_6() const { return ___horizontal_line_length_6; }
	inline float* get_address_of_horizontal_line_length_6() { return &___horizontal_line_length_6; }
	inline void set_horizontal_line_length_6(float value)
	{
		___horizontal_line_length_6 = value;
	}

	inline static int32_t get_offset_of_vertical_line_length_7() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___vertical_line_length_7)); }
	inline float get_vertical_line_length_7() const { return ___vertical_line_length_7; }
	inline float* get_address_of_vertical_line_length_7() { return &___vertical_line_length_7; }
	inline void set_vertical_line_length_7(float value)
	{
		___vertical_line_length_7 = value;
	}

	inline static int32_t get_offset_of_allCategories_8() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___allCategories_8)); }
	inline List_1_t1375417109 * get_allCategories_8() const { return ___allCategories_8; }
	inline List_1_t1375417109 ** get_address_of_allCategories_8() { return &___allCategories_8; }
	inline void set_allCategories_8(List_1_t1375417109 * value)
	{
		___allCategories_8 = value;
		Il2CppCodeGenWriteBarrier(&___allCategories_8, value);
	}

	inline static int32_t get_offset_of_allCategoriesValue_9() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___allCategoriesValue_9)); }
	inline WMG_List_1_t3645425878 * get_allCategoriesValue_9() const { return ___allCategoriesValue_9; }
	inline WMG_List_1_t3645425878 ** get_address_of_allCategoriesValue_9() { return &___allCategoriesValue_9; }
	inline void set_allCategoriesValue_9(WMG_List_1_t3645425878 * value)
	{
		___allCategoriesValue_9 = value;
		Il2CppCodeGenWriteBarrier(&___allCategoriesValue_9, value);
	}

	inline static int32_t get_offset_of_rings_10() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___rings_10)); }
	inline List_1_t115120238 * get_rings_10() const { return ___rings_10; }
	inline List_1_t115120238 ** get_address_of_rings_10() { return &___rings_10; }
	inline void set_rings_10(List_1_t115120238 * value)
	{
		___rings_10 = value;
		Il2CppCodeGenWriteBarrier(&___rings_10, value);
	}

	inline static int32_t get_offset_of_clickSprite_11() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___clickSprite_11)); }
	inline Sprite_t3199167241 * get_clickSprite_11() const { return ___clickSprite_11; }
	inline Sprite_t3199167241 ** get_address_of_clickSprite_11() { return &___clickSprite_11; }
	inline void set_clickSprite_11(Sprite_t3199167241 * value)
	{
		___clickSprite_11 = value;
		Il2CppCodeGenWriteBarrier(&___clickSprite_11, value);
	}

	inline static int32_t get_offset_of_normalSprite_12() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___normalSprite_12)); }
	inline Sprite_t3199167241 * get_normalSprite_12() const { return ___normalSprite_12; }
	inline Sprite_t3199167241 ** get_address_of_normalSprite_12() { return &___normalSprite_12; }
	inline void set_normalSprite_12(Sprite_t3199167241 * value)
	{
		___normalSprite_12 = value;
		Il2CppCodeGenWriteBarrier(&___normalSprite_12, value);
	}

	inline static int32_t get_offset_of_click_off_sprite_13() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___click_off_sprite_13)); }
	inline Sprite_t3199167241 * get_click_off_sprite_13() const { return ___click_off_sprite_13; }
	inline Sprite_t3199167241 ** get_address_of_click_off_sprite_13() { return &___click_off_sprite_13; }
	inline void set_click_off_sprite_13(Sprite_t3199167241 * value)
	{
		___click_off_sprite_13 = value;
		Il2CppCodeGenWriteBarrier(&___click_off_sprite_13, value);
	}

	inline static int32_t get_offset_of_nowClickNumText_14() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___nowClickNumText_14)); }
	inline Text_t9039225 * get_nowClickNumText_14() const { return ___nowClickNumText_14; }
	inline Text_t9039225 ** get_address_of_nowClickNumText_14() { return &___nowClickNumText_14; }
	inline void set_nowClickNumText_14(Text_t9039225 * value)
	{
		___nowClickNumText_14 = value;
		Il2CppCodeGenWriteBarrier(&___nowClickNumText_14, value);
	}

	inline static int32_t get_offset_of_MINC_15() { return static_cast<int32_t>(offsetof(SetRingsGraph_t2559073453, ___MINC_15)); }
	inline MainInterfaceNumericalControl_t4129790405 * get_MINC_15() const { return ___MINC_15; }
	inline MainInterfaceNumericalControl_t4129790405 ** get_address_of_MINC_15() { return &___MINC_15; }
	inline void set_MINC_15(MainInterfaceNumericalControl_t4129790405 * value)
	{
		___MINC_15 = value;
		Il2CppCodeGenWriteBarrier(&___MINC_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
