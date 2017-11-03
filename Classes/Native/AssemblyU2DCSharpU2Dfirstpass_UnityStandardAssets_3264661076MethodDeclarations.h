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

// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t667441552;
// UnityEngine.Material
struct Material_t3870600107;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Shader3191267369.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

// System.Boolean UnityStandardAssets.CinematicEffects.ImageEffectHelper::IsSupported(UnityEngine.Shader,System.Boolean,System.Boolean,UnityEngine.MonoBehaviour)
extern "C"  bool ImageEffectHelper_IsSupported_m2943136600 (Il2CppObject * __this /* static, unused */, Shader_t3191267369 * ___s0, bool ___needDepth1, bool ___needHdr2, MonoBehaviour_t667441552 * ___effect3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.CinematicEffects.ImageEffectHelper::CheckShaderAndCreateMaterial(UnityEngine.Shader)
extern "C"  Material_t3870600107 * ImageEffectHelper_CheckShaderAndCreateMaterial_m636018455 (Il2CppObject * __this /* static, unused */, Shader_t3191267369 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CinematicEffects.ImageEffectHelper::get_supportsDX11()
extern "C"  bool ImageEffectHelper_get_supportsDX11_m3904586300 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
