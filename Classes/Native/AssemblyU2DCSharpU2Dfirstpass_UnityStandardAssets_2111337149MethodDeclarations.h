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

// UnityStandardAssets.CinematicEffects.Bloom
struct Bloom_t2111337149;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.CinematicEffects.Bloom::.ctor()
extern "C"  void Bloom__ctor_m1590299612 (Bloom_t2111337149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityStandardAssets.CinematicEffects.Bloom::get_shader()
extern "C"  Shader_t3191267369 * Bloom_get_shader_m3585236479 (Bloom_t2111337149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.CinematicEffects.Bloom::get_material()
extern "C"  Material_t3870600107 * Bloom_get_material_m1607557503 (Bloom_t2111337149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.Bloom::OnEnable()
extern "C"  void Bloom_OnEnable_m903077418 (Bloom_t2111337149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.Bloom::OnDisable()
extern "C"  void Bloom_OnDisable_m2666533443 (Bloom_t2111337149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_OnRenderImage_m451598082 (Bloom_t2111337149 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
