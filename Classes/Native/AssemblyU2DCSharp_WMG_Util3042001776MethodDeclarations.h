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

// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1355284821;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_WMG_Enums_labelTypes2690512624.h"

// System.Single WMG_Util::RemapFloat(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float WMG_Util_RemapFloat_m2828164455 (Il2CppObject * __this /* static, unused */, float ___val0, float ___start11, float ___end12, float ___start23, float ___end24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Util::RemapVec2(System.Single,System.Single,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  WMG_Util_RemapVec2_m3725081000 (Il2CppObject * __this /* static, unused */, float ___val0, float ___start11, float ___end12, Vector2_t4282066565  ___start23, Vector2_t4282066565  ___end24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite WMG_Util::createSprite(System.Int32,System.Int32)
extern "C"  Sprite_t3199167241 * WMG_Util_createSprite_m1910050315 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D WMG_Util::createTexture(System.Int32,System.Int32)
extern "C"  Texture2D_t3884108195 * WMG_Util_createTexture_m372784891 (Il2CppObject * __this /* static, unused */, int32_t ___x0, int32_t ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Util::GenLinear(System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  List_1_t1355284821 * WMG_Util_GenLinear_m3157041130 (Il2CppObject * __this /* static, unused */, int32_t ___numPoints0, float ___minX1, float ___maxX2, float ___a3, float ___b4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Util::GenQuadratic(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  List_1_t1355284821 * WMG_Util_GenQuadratic_m693458084 (Il2CppObject * __this /* static, unused */, int32_t ___numPoints0, float ___minX1, float ___maxX2, float ___a3, float ___b4, float ___c5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Util::GenExponential(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  List_1_t1355284821 * WMG_Util_GenExponential_m2196622865 (Il2CppObject * __this /* static, unused */, int32_t ___numPoints0, float ___minX1, float ___maxX2, float ___a3, float ___b4, float ___c5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Util::GenLogarithmic(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  List_1_t1355284821 * WMG_Util_GenLogarithmic_m2317566731 (Il2CppObject * __this /* static, unused */, int32_t ___numPoints0, float ___minX1, float ___maxX2, float ___a3, float ___b4, float ___c5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Util::GenCircular(System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  List_1_t1355284821 * WMG_Util_GenCircular_m39196708 (Il2CppObject * __this /* static, unused */, int32_t ___numPoints0, float ___a1, float ___b2, float ___c3, float ___degreeOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Util::GenRadar(System.Collections.Generic.List`1<System.Single>,System.Single,System.Single,System.Single)
extern "C"  List_1_t1355284821 * WMG_Util_GenRadar_m2808491490 (Il2CppObject * __this /* static, unused */, List_1_t1365137228 * ___data0, float ___a1, float ___b2, float ___degreeOffset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Util::GenRandomXY(System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  List_1_t1355284821 * WMG_Util_GenRandomXY_m46699721 (Il2CppObject * __this /* static, unused */, int32_t ___numPoints0, float ___minX1, float ___maxX2, float ___minY3, float ___maxY4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector2> WMG_Util::GenRandomY(System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  List_1_t1355284821 * WMG_Util_GenRandomY_m3959079581 (Il2CppObject * __this /* static, unused */, int32_t ___numPoints0, float ___minX1, float ___maxX2, float ___minY3, float ___maxY4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Single> WMG_Util::GenRandomList(System.Int32,System.Single,System.Single)
extern "C"  List_1_t1365137228 * WMG_Util_GenRandomList_m1720980205 (Il2CppObject * __this /* static, unused */, int32_t ___numPoints0, float ___min1, float ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Util::updateBandColors(UnityEngine.Color[]&,System.Single,System.Single,System.Single,System.Boolean,System.Single,UnityEngine.Color[])
extern "C"  void WMG_Util_updateBandColors_m4291175522 (Il2CppObject * __this /* static, unused */, ColorU5BU5D_t2441545636** ___colors0, float ___maxSize1, float ___inner2, float ___outer3, bool ___antiAliasing4, float ___antiAliasingStrength5, ColorU5BU5D_t2441545636* ___orig6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Util::LineIntersectsCircle(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  bool WMG_Util_LineIntersectsCircle_m2827608132 (Il2CppObject * __this /* static, unused */, float ___x00, float ___y01, float ___x12, float ___y13, float ___x24, float ___y25, float ___r6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Util::LineSegmentsIntersect(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  bool WMG_Util_LineSegmentsIntersect_m2867108942 (Il2CppObject * __this /* static, unused */, float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, float ___p4x6, float ___p4y7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single WMG_Util::PointInterArea(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float WMG_Util_PointInterArea_m544426886 (Il2CppObject * __this /* static, unused */, float ___p1x0, float ___p1y1, float ___p2x2, float ___p2y3, float ___p3x4, float ___p3y5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WMG_Util::FormatValueLabel(System.String,WMG_Enums/labelTypes,System.Single,System.Single,System.Int32)
extern "C"  String_t* WMG_Util_FormatValueLabel_m183922755 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___labelType1, float ___value2, float ___percent3, int32_t ___numDecimals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 WMG_Util::ExpressionEvaluator(System.Collections.Generic.List`1<System.String>,System.Single)
extern "C"  Vector2_t4282066565  WMG_Util_ExpressionEvaluator_m3746526110 (Il2CppObject * __this /* static, unused */, List_1_t1375417109 * ___rpnString0, float ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> WMG_Util::ShuntingYardAlgorithm(System.String)
extern "C"  List_1_t1375417109 * WMG_Util_ShuntingYardAlgorithm_m3904092753 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Util::IsOperator(System.String)
extern "C"  bool WMG_Util_IsOperator_m3723232775 (Il2CppObject * __this /* static, unused */, String_t* ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WMG_Util::OperatorIsUnary(System.String)
extern "C"  bool WMG_Util_OperatorIsUnary_m418672908 (Il2CppObject * __this /* static, unused */, String_t* ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WMG_Util::PrecedenceOf(System.String)
extern "C"  int32_t WMG_Util_PrecedenceOf_m893432826 (Il2CppObject * __this /* static, unused */, String_t* ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
