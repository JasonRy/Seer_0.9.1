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

// SelectObject
struct SelectObject_t2073783163;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void SelectObject::.ctor()
extern "C"  void SelectObject__ctor_m4229841280 (SelectObject_t2073783163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SelectObject::get_compositeMaterial()
extern "C"  Material_t3870600107 * SelectObject_get_compositeMaterial_m2413070692 (SelectObject_t2073783163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SelectObject::get_blurMaterial()
extern "C"  Material_t3870600107 * SelectObject_get_blurMaterial_m2815074298 (SelectObject_t2073783163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SelectObject::get_cutoffMaterial()
extern "C"  Material_t3870600107 * SelectObject_get_cutoffMaterial_m1982817600 (SelectObject_t2073783163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SelectObject::get_outterLineMat()
extern "C"  Material_t3870600107 * SelectObject_get_outterLineMat_m3136599951 (SelectObject_t2073783163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectObject::Start()
extern "C"  void SelectObject_Start_m3176979072 (SelectObject_t2073783163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectObject::OnDisable()
extern "C"  void SelectObject_OnDisable_m1713952231 (SelectObject_t2073783163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectObject::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void SelectObject_FourTapCone_m1019481811 (SelectObject_t2073783163 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___dest1, int32_t ___iteration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectObject::OnPreRender()
extern "C"  void SelectObject_OnPreRender_m2161360216 (SelectObject_t2073783163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectObject::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void SelectObject_OnRenderImage_m3164588766 (SelectObject_t2073783163 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
