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

// outline
struct outline_t3188721730;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void outline::.ctor()
extern "C"  void outline__ctor_m210850153 (outline_t3188721730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material outline::get_solidMaterail()
extern "C"  Material_t3870600107 * outline_get_solidMaterail_m2631791423 (outline_t3188721730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material outline::get_compositeMaterial()
extern "C"  Material_t3870600107 * outline_get_compositeMaterial_m4199868203 (outline_t3188721730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material outline::get_blurMaterial()
extern "C"  Material_t3870600107 * outline_get_blurMaterial_m2203746771 (outline_t3188721730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material outline::get_cutoffMaterial()
extern "C"  Material_t3870600107 * outline_get_cutoffMaterial_m2907583705 (outline_t3188721730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void outline::Start()
extern "C"  void outline_Start_m3452955241 (outline_t3188721730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void outline::Update()
extern "C"  void outline_Update_m3968249540 (outline_t3188721730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void outline::OnPreRender()
extern "C"  void outline_OnPreRender_m3523967617 (outline_t3188721730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void outline::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void outline_OnRenderImage_m3131798869 (outline_t3188721730 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___desture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void outline::MixRender(UnityEngine.RenderTexture,UnityEngine.RenderTexture&)
extern "C"  void outline_MixRender_m139704355 (outline_t3188721730 * __this, RenderTexture_t1963041563 * ___in_outerTexture0, RenderTexture_t1963041563 ** ____renderTexture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void outline::FourTapCone(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
extern "C"  void outline_FourTapCone_m624821244 (outline_t3188721730 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___dest1, int32_t ___iteration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
