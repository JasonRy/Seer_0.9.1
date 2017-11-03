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

// SelectObjectNew
struct SelectObjectNew_t1264701477;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void SelectObjectNew::.ctor()
extern "C"  void SelectObjectNew__ctor_m3194835174 (SelectObjectNew_t1264701477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SelectObjectNew::get_compositeMaterial()
extern "C"  Material_t3870600107 * SelectObjectNew_get_compositeMaterial_m3640671656 (SelectObjectNew_t1264701477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SelectObjectNew::get_blurMaterial()
extern "C"  Material_t3870600107 * SelectObjectNew_get_blurMaterial_m4175974710 (SelectObjectNew_t1264701477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material SelectObjectNew::get_outterLineMat()
extern "C"  Material_t3870600107 * SelectObjectNew_get_outterLineMat_m2374839763 (SelectObjectNew_t1264701477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectObjectNew::Start()
extern "C"  void SelectObjectNew_Start_m2141972966 (SelectObjectNew_t1264701477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectObjectNew::OnDisable()
extern "C"  void SelectObjectNew_OnDisable_m1106625101 (SelectObjectNew_t1264701477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectObjectNew::OnPreRender()
extern "C"  void SelectObjectNew_OnPreRender_m2635540542 (SelectObjectNew_t1264701477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SelectObjectNew::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void SelectObjectNew_OnRenderImage_m459170744 (SelectObjectNew_t1264701477 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
