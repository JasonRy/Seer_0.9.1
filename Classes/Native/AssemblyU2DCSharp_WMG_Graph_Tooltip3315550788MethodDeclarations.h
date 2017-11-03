#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// WMG_Graph_Tooltip
struct WMG_Graph_Tooltip_t3315550788;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// WMG_Series
struct WMG_Series_t2715102821;
// WMG_Node
struct WMG_Node_t3041788272;
// WMG_Link
struct WMG_Link_t3041723240;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_WMG_Series2715102821.h"
#include "AssemblyU2DCSharp_WMG_Node3041788272.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WMG_Link3041723240.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "DOTween_DG_Tweening_Ease1564688304.h"

// System.Void WMG_Graph_Tooltip::.ctor()
extern "C"  void WMG_Graph_Tooltip__ctor_m3544821671 (WMG_Graph_Tooltip_t3315550788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::SetToolTipRefs()
extern "C"  void WMG_Graph_Tooltip_SetToolTipRefs_m2698374270 (WMG_Graph_Tooltip_t3315550788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::SetTooltipObject(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void WMG_Graph_Tooltip_SetTooltipObject_m959053193 (WMG_Graph_Tooltip_t3315550788 * __this, GameObject_t3674682005 * ___toolTipPanel0, GameObject_t3674682005 * ___toolTipLabel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::Update()
extern "C"  void WMG_Graph_Tooltip_Update_m4242151494 (WMG_Graph_Tooltip_t3315550788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::OnDisable()
extern "C"  void WMG_Graph_Tooltip_OnDisable_m3222460558 (WMG_Graph_Tooltip_t3315550788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::subscribeToEvents(System.Boolean)
extern "C"  void WMG_Graph_Tooltip_subscribeToEvents_m3034494586 (WMG_Graph_Tooltip_t3315550788 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Graph_Tooltip::isTooltipObjectNull()
extern "C"  bool WMG_Graph_Tooltip_isTooltipObjectNull_m887712408 (WMG_Graph_Tooltip_t3315550788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::repositionTooltip()
extern "C"  void WMG_Graph_Tooltip_repositionTooltip_m3764397356 (WMG_Graph_Tooltip_t3315550788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::EnsureTooltipStaysOnScreen()
extern "C"  void WMG_Graph_Tooltip_EnsureTooltipStaysOnScreen_m3411048541 (WMG_Graph_Tooltip_t3315550788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Graph_Tooltip::defaultTooltipLabeler(WMG_Series,WMG_Node)
extern "C"  String_t* WMG_Graph_Tooltip_defaultTooltipLabeler_m830744660 (WMG_Graph_Tooltip_t3315550788 * __this, WMG_Series_t2715102821 * ___aSeries0, WMG_Node_t3041788272 * ___aNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::MouseEnterCommon(System.String,UnityEngine.GameObject)
extern "C"  void WMG_Graph_Tooltip_MouseEnterCommon_m2653687031 (WMG_Graph_Tooltip_t3315550788 * __this, String_t* ___textToSet0, GameObject_t3674682005 * ___objUnderMouse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::MouseExitCommon()
extern "C"  void WMG_Graph_Tooltip_MouseExitCommon_m2991221619 (WMG_Graph_Tooltip_t3315550788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::TooltipNodeMouseEnter(WMG_Series,WMG_Node,System.Boolean)
extern "C"  void WMG_Graph_Tooltip_TooltipNodeMouseEnter_m1073759327 (WMG_Graph_Tooltip_t3315550788 * __this, WMG_Series_t2715102821 * ___aSeries0, WMG_Node_t3041788272 * ___aNode1, bool ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::TooltipLegendNodeMouseEnter(WMG_Series,WMG_Node,System.Boolean)
extern "C"  void WMG_Graph_Tooltip_TooltipLegendNodeMouseEnter_m1424231948 (WMG_Graph_Tooltip_t3315550788 * __this, WMG_Series_t2715102821 * ___aSeries0, WMG_Node_t3041788272 * ___aNode1, bool ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::TooltipLegendLinkMouseEnter(WMG_Series,WMG_Link,System.Boolean)
extern "C"  void WMG_Graph_Tooltip_TooltipLegendLinkMouseEnter_m1737125884 (WMG_Graph_Tooltip_t3315550788 * __this, WMG_Series_t2715102821 * ___aSeries0, WMG_Link_t3041723240 * ___aLink1, bool ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Graph_Tooltip::performTooltipAnimation(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Single,DG.Tweening.Ease)
extern "C"  void WMG_Graph_Tooltip_performTooltipAnimation_m2047391833 (WMG_Graph_Tooltip_t3315550788 * __this, Transform_t1659122786 * ___trans0, Vector3_t4282066566  ___newScale1, float ___animDuration2, float ___animDelay3, int32_t ___easeType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
