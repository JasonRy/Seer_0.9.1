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

// bl_SceneLoader
struct bl_SceneLoader_t943165226;
// System.String
struct String_t;
// Lovatto.SceneLoader.bl_SceneLoaderInfo
struct bl_SceneLoaderInfo_t2496802106;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Lovatto_SceneLoader_bl_SceneLoad2496802106.h"
#include "UnityEngine_UnityEngine_CanvasGroup3702418109.h"

// System.Void bl_SceneLoader::.ctor()
extern "C"  void bl_SceneLoader__ctor_m2516298929 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bl_SceneLoader::Awake()
extern "C"  void bl_SceneLoader_Awake_m2753904148 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bl_SceneLoader::Update()
extern "C"  void bl_SceneLoader_Update_m2422717564 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bl_SceneLoader::SkipWithKey()
extern "C"  void bl_SceneLoader_SkipWithKey_m1742546441 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bl_SceneLoader::UpdateUI()
extern "C"  void bl_SceneLoader_UpdateUI_m360677200 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bl_SceneLoader::LoadingRotator()
extern "C"  void bl_SceneLoader_LoadingRotator_m2642934404 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bl_SceneLoader::OnFinish()
extern "C"  void bl_SceneLoader_OnFinish_m2752902213 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bl_SceneLoader::LoadLevel(System.String)
extern "C"  void bl_SceneLoader_LoadLevel_m4049855125 (bl_SceneLoader_t943165226 * __this, String_t* ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bl_SceneLoader::SetupUI(Lovatto.SceneLoader.bl_SceneLoaderInfo)
extern "C"  void bl_SceneLoader_SetupUI_m1291208588 (bl_SceneLoader_t943165226 * __this, bl_SceneLoaderInfo_t2496802106 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bl_SceneLoader::LoadNextScene()
extern "C"  void bl_SceneLoader_LoadNextScene_m3967149602 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator bl_SceneLoader::StartAsyncOperation(System.String)
extern "C"  Il2CppObject * bl_SceneLoader_StartAsyncOperation_m2405589870 (bl_SceneLoader_t943165226 * __this, String_t* ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator bl_SceneLoader::BackgroundTransition()
extern "C"  Il2CppObject * bl_SceneLoader_BackgroundTransition_m2613594910 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator bl_SceneLoader::TipsLoop()
extern "C"  Il2CppObject * bl_SceneLoader_TipsLoop_m42235063 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator bl_SceneLoader::FadeAudio(System.Boolean)
extern "C"  Il2CppObject * bl_SceneLoader_FadeAudio_m494214008 (bl_SceneLoader_t943165226 * __this, bool ___FadeIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator bl_SceneLoader::WaitNextTip(System.Single)
extern "C"  Il2CppObject * bl_SceneLoader_WaitNextTip_m4004687153 (bl_SceneLoader_t943165226 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator bl_SceneLoader::LoadNextSceneIE()
extern "C"  Il2CppObject * bl_SceneLoader_LoadNextSceneIE_m495894198 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator bl_SceneLoader::FadeOutCanvas(UnityEngine.CanvasGroup,System.Single)
extern "C"  Il2CppObject * bl_SceneLoader_FadeOutCanvas_m1374630614 (bl_SceneLoader_t943165226 * __this, CanvasGroup_t3702418109 * ___alpha0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator bl_SceneLoader::FadeInCanvas(UnityEngine.CanvasGroup,System.Single)
extern "C"  Il2CppObject * bl_SceneLoader_FadeInCanvas_m3553478131 (bl_SceneLoader_t943165226 * __this, CanvasGroup_t3702418109 * ___alpha0, float ___delay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single bl_SceneLoader::get_DeltaTime()
extern "C"  float bl_SceneLoader_get_DeltaTime_m3153857407 (bl_SceneLoader_t943165226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
