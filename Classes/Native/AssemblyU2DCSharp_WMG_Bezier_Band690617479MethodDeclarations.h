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

// WMG_Bezier_Band
struct WMG_Bezier_Band_t690617479;
// WMG_Bezier_Band_Graph
struct WMG_Bezier_Band_Graph_t341864310;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_WMG_Bezier_Band_Graph341864310.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void WMG_Bezier_Band::.ctor()
extern "C"  void WMG_Bezier_Band__ctor_m87290564 (WMG_Bezier_Band_t690617479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Bezier_Band::Init(WMG_Bezier_Band_Graph)
extern "C"  void WMG_Bezier_Band_Init_m78476012 (WMG_Bezier_Band_t690617479 * __this, WMG_Bezier_Band_Graph_t341864310 * ___graph0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Bezier_Band::setCumulativePercents(System.Single,System.Single)
extern "C"  void WMG_Bezier_Band_setCumulativePercents_m549376523 (WMG_Bezier_Band_t690617479 * __this, float ___val0, float ___prev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Bezier_Band::setFillColor(UnityEngine.Color)
extern "C"  void WMG_Bezier_Band_setFillColor_m1191063848 (WMG_Bezier_Band_t690617479 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Bezier_Band::setLineColor(UnityEngine.Color)
extern "C"  void WMG_Bezier_Band_setLineColor_m1380247705 (WMG_Bezier_Band_t690617479 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Bezier_Band::UpdateBand()
extern "C"  void WMG_Bezier_Band_UpdateBand_m2081639902 (WMG_Bezier_Band_t690617479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Bezier_Band::updateColors(UnityEngine.Color[]&,UnityEngine.Color[]&)
extern "C"  void WMG_Bezier_Band_updateColors_m1929510509 (WMG_Bezier_Band_t690617479 * __this, ColorU5BU5D_t2441545636** ___bandFillColors0, ColorU5BU5D_t2441545636** ___bandLineColors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Bezier_Band::cubicBezier(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t4282066565  WMG_Bezier_Band_cubicBezier_m1987282261 (WMG_Bezier_Band_t690617479 * __this, Vector2_t4282066565  ___p00, Vector2_t4282066565  ___p11, Vector2_t4282066565  ___p22, Vector2_t4282066565  ___p33, float ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
