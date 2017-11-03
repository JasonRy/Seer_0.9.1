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

// UnityStandardAssets.CinematicEffects.RenderTextureUtility
struct RenderTextureUtility_t1679912481;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat2841883826.h"
#include "UnityEngine_UnityEngine_FilterMode1625068031.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void UnityStandardAssets.CinematicEffects.RenderTextureUtility::.ctor()
extern "C"  void RenderTextureUtility__ctor_m1819415520 (RenderTextureUtility_t1679912481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityStandardAssets.CinematicEffects.RenderTextureUtility::GetTemporaryRenderTexture(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.FilterMode)
extern "C"  RenderTexture_t1963041563 * RenderTextureUtility_GetTemporaryRenderTexture_m2044543055 (RenderTextureUtility_t1679912481 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, int32_t ___filterMode4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.RenderTextureUtility::ReleaseTemporaryRenderTexture(UnityEngine.RenderTexture)
extern "C"  void RenderTextureUtility_ReleaseTemporaryRenderTexture_m685514059 (RenderTextureUtility_t1679912481 * __this, RenderTexture_t1963041563 * ___rt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.CinematicEffects.RenderTextureUtility::ReleaseAllTemporaryRenderTextures()
extern "C"  void RenderTextureUtility_ReleaseAllTemporaryRenderTextures_m1582051299 (RenderTextureUtility_t1679912481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
