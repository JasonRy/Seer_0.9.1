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

// WMG_Link
struct WMG_Link_t3041723240;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// WMG_Node
struct WMG_Node_t3041788272;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_WMG_Node3041788272.h"

// System.Void WMG_Link::.ctor()
extern "C"  void WMG_Link__ctor_m335351859 (WMG_Link_t3041723240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Link::Setup(UnityEngine.GameObject,UnityEngine.GameObject,System.Int32,System.Boolean)
extern "C"  void WMG_Link_Setup_m1836180734 (WMG_Link_t3041723240 * __this, GameObject_t3674682005 * ___fromNode0, GameObject_t3674682005 * ___toNode1, int32_t ___linkId2, bool ___repos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Link::Reposition()
extern "C"  void WMG_Link_Reposition_m1352688653 (WMG_Link_t3041723240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Link::SetNodeAngles(System.Single,WMG_Node,WMG_Node)
extern "C"  void WMG_Link_SetNodeAngles_m243048982 (WMG_Link_t3041723240 * __this, float ___angle0, WMG_Node_t3041788272 * ___fromN1, WMG_Node_t3041788272 * ___toN2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Link::getSquareCircleOffsetLength(WMG_Node,System.Single,System.Boolean)
extern "C"  float WMG_Link_getSquareCircleOffsetLength_m3682806567 (WMG_Link_t3041723240 * __this, WMG_Node_t3041788272 * ___theNode0, float ___angle1, bool ___isFrom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Link::getSquareCircleOffsetAngle(System.Single,System.Boolean)
extern "C"  int32_t WMG_Link_getSquareCircleOffsetAngle_m3963871374 (WMG_Link_t3041723240 * __this, float ___angle0, bool ___isFrom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
