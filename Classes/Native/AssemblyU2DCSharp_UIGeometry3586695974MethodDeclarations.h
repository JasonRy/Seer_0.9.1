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

// UIGeometry
struct UIGeometry_t3586695974;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t1484067282;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t1484067281;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t1396547621;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t1484067283;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

// System.Void UIGeometry::.ctor()
extern "C"  void UIGeometry__ctor_m3438354485 (UIGeometry_t3586695974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasVertices()
extern "C"  bool UIGeometry_get_hasVertices_m167811977 (UIGeometry_t3586695974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIGeometry::get_hasTransformed()
extern "C"  bool UIGeometry_get_hasTransformed_m4232907805 (UIGeometry_t3586695974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::Clear()
extern "C"  void UIGeometry_Clear_m844487776 (UIGeometry_t3586695974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::ApplyTransform(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void UIGeometry_ApplyTransform_m336861776 (UIGeometry_t3586695974 * __this, Matrix4x4_t1651859333  ___widgetToPanel0, bool ___generateNormals1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGeometry::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C"  void UIGeometry_WriteToBuffers_m1074852803 (UIGeometry_t3586695974 * __this, BetterList_1_t1484067282 * ___v0, BetterList_1_t1484067281 * ___u1, BetterList_1_t1396547621 * ___c2, BetterList_1_t1484067282 * ___n3, BetterList_1_t1484067283 * ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
