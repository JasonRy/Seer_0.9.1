#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WMG_Graph_Tooltip/TooltipLabeler
struct TooltipLabeler_t4262699113;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1856481278;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;

#include "AssemblyU2DCSharp_WMG_GUI_Functions1067338185.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WMG_Graph_Tooltip
struct  WMG_Graph_Tooltip_t3315550788  : public WMG_GUI_Functions_t1067338185
{
public:
	// WMG_Graph_Tooltip/TooltipLabeler WMG_Graph_Tooltip::tooltipLabeler
	TooltipLabeler_t4262699113 * ___tooltipLabeler_2;
	// WMG_Axis_Graph WMG_Graph_Tooltip::theGraph
	WMG_Axis_Graph_t1856481278 * ___theGraph_3;
	// UnityEngine.Canvas WMG_Graph_Tooltip::_canvas
	Canvas_t2727140764 * ____canvas_4;
	// UnityEngine.GameObject WMG_Graph_Tooltip::currentObj
	GameObject_t3674682005 * ___currentObj_5;
	// UnityEngine.CanvasGroup WMG_Graph_Tooltip::_cg
	CanvasGroup_t3702418109 * ____cg_6;

public:
	inline static int32_t get_offset_of_tooltipLabeler_2() { return static_cast<int32_t>(offsetof(WMG_Graph_Tooltip_t3315550788, ___tooltipLabeler_2)); }
	inline TooltipLabeler_t4262699113 * get_tooltipLabeler_2() const { return ___tooltipLabeler_2; }
	inline TooltipLabeler_t4262699113 ** get_address_of_tooltipLabeler_2() { return &___tooltipLabeler_2; }
	inline void set_tooltipLabeler_2(TooltipLabeler_t4262699113 * value)
	{
		___tooltipLabeler_2 = value;
		Il2CppCodeGenWriteBarrier(&___tooltipLabeler_2, value);
	}

	inline static int32_t get_offset_of_theGraph_3() { return static_cast<int32_t>(offsetof(WMG_Graph_Tooltip_t3315550788, ___theGraph_3)); }
	inline WMG_Axis_Graph_t1856481278 * get_theGraph_3() const { return ___theGraph_3; }
	inline WMG_Axis_Graph_t1856481278 ** get_address_of_theGraph_3() { return &___theGraph_3; }
	inline void set_theGraph_3(WMG_Axis_Graph_t1856481278 * value)
	{
		___theGraph_3 = value;
		Il2CppCodeGenWriteBarrier(&___theGraph_3, value);
	}

	inline static int32_t get_offset_of__canvas_4() { return static_cast<int32_t>(offsetof(WMG_Graph_Tooltip_t3315550788, ____canvas_4)); }
	inline Canvas_t2727140764 * get__canvas_4() const { return ____canvas_4; }
	inline Canvas_t2727140764 ** get_address_of__canvas_4() { return &____canvas_4; }
	inline void set__canvas_4(Canvas_t2727140764 * value)
	{
		____canvas_4 = value;
		Il2CppCodeGenWriteBarrier(&____canvas_4, value);
	}

	inline static int32_t get_offset_of_currentObj_5() { return static_cast<int32_t>(offsetof(WMG_Graph_Tooltip_t3315550788, ___currentObj_5)); }
	inline GameObject_t3674682005 * get_currentObj_5() const { return ___currentObj_5; }
	inline GameObject_t3674682005 ** get_address_of_currentObj_5() { return &___currentObj_5; }
	inline void set_currentObj_5(GameObject_t3674682005 * value)
	{
		___currentObj_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentObj_5, value);
	}

	inline static int32_t get_offset_of__cg_6() { return static_cast<int32_t>(offsetof(WMG_Graph_Tooltip_t3315550788, ____cg_6)); }
	inline CanvasGroup_t3702418109 * get__cg_6() const { return ____cg_6; }
	inline CanvasGroup_t3702418109 ** get_address_of__cg_6() { return &____cg_6; }
	inline void set__cg_6(CanvasGroup_t3702418109 * value)
	{
		____cg_6 = value;
		Il2CppCodeGenWriteBarrier(&____cg_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
