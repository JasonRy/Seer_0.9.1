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

// WMG_X_Plot_Overtime
struct WMG_X_Plot_Overtime_t4276922250;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// WMG_Series
struct WMG_Series_t2715102821;
// WMG_Node
struct WMG_Node_t3041788272;
// WMG_Axis
struct WMG_Axis_t3041409807;
// WMG_Axis_Graph
struct WMG_Axis_Graph_t1856481278;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_WMG_Series2715102821.h"
#include "AssemblyU2DCSharp_WMG_Node3041788272.h"
#include "AssemblyU2DCSharp_WMG_Axis3041409807.h"
#include "AssemblyU2DCSharp_WMG_Axis_Graph1856481278.h"

// System.Void WMG_X_Plot_Overtime::.ctor()
extern "C"  void WMG_X_Plot_Overtime__ctor_m1158956833 (WMG_X_Plot_Overtime_t4276922250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_X_Plot_Overtime::get_plottingData()
extern "C"  bool WMG_X_Plot_Overtime_get_plottingData_m1460449041 (WMG_X_Plot_Overtime_t4276922250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_X_Plot_Overtime::set_plottingData(System.Boolean)
extern "C"  void WMG_X_Plot_Overtime_set_plottingData_m2683197296 (WMG_X_Plot_Overtime_t4276922250 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_X_Plot_Overtime::Start()
extern "C"  void WMG_X_Plot_Overtime_Start_m106094625 (WMG_X_Plot_Overtime_t4276922250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_X_Plot_Overtime::PlottingDataChanged()
extern "C"  void WMG_X_Plot_Overtime_PlottingDataChanged_m4292484570 (WMG_X_Plot_Overtime_t4276922250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WMG_X_Plot_Overtime::plotData()
extern "C"  Il2CppObject * WMG_X_Plot_Overtime_plotData_m3077522182 (WMG_X_Plot_Overtime_t4276922250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_X_Plot_Overtime::animateAddPointFromEnd(UnityEngine.Vector2,System.Single)
extern "C"  void WMG_X_Plot_Overtime_animateAddPointFromEnd_m3780496699 (WMG_X_Plot_Overtime_t4276922250 * __this, Vector2_t4282066565  ___pointVec0, float ___animDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_X_Plot_Overtime::blinkCurrentPointAnimation(System.Boolean)
extern "C"  void WMG_X_Plot_Overtime_blinkCurrentPointAnimation_m2448056907 (WMG_X_Plot_Overtime_t4276922250 * __this, bool ___fromOnCompleteAnimateAdd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_X_Plot_Overtime::updateIndicator()
extern "C"  void WMG_X_Plot_Overtime_updateIndicator_m1686877349 (WMG_X_Plot_Overtime_t4276922250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_X_Plot_Overtime::onUpdateAnimateAddPoint(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void WMG_X_Plot_Overtime_onUpdateAnimateAddPoint_m2807492239 (WMG_X_Plot_Overtime_t4276922250 * __this, Vector2_t4282066565  ___newEnd0, Vector2_t4282066565  ___oldEnd1, Vector2_t4282066565  ___newStart2, Vector2_t4282066565  ___oldStart3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_X_Plot_Overtime::onCompleteAnimateAddPoint()
extern "C"  void WMG_X_Plot_Overtime_onCompleteAnimateAddPoint_m4246851447 (WMG_X_Plot_Overtime_t4276922250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_X_Plot_Overtime::customTooltipLabeler(WMG_Series,WMG_Node)
extern "C"  String_t* WMG_X_Plot_Overtime_customTooltipLabeler_m3958949260 (WMG_X_Plot_Overtime_t4276922250 * __this, WMG_Series_t2715102821 * ___aSeries0, WMG_Node_t3041788272 * ___aNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_X_Plot_Overtime::customYAxisLabelLabeler(WMG_Axis,System.Int32)
extern "C"  String_t* WMG_X_Plot_Overtime_customYAxisLabelLabeler_m2566130926 (WMG_X_Plot_Overtime_t4276922250 * __this, WMG_Axis_t3041409807 * ___axis0, int32_t ___labelIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_X_Plot_Overtime::customSeriesDataLabeler(WMG_Series,System.Single,System.Int32)
extern "C"  String_t* WMG_X_Plot_Overtime_customSeriesDataLabeler_m1828976422 (WMG_X_Plot_Overtime_t4276922250 * __this, WMG_Series_t2715102821 * ___series0, float ___val1, int32_t ___labelIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_X_Plot_Overtime::UpdateIndicatorSize(WMG_Axis_Graph)
extern "C"  void WMG_X_Plot_Overtime_UpdateIndicatorSize_m1890159464 (WMG_X_Plot_Overtime_t4276922250 * __this, WMG_Axis_Graph_t1856481278 * ___aGraph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
