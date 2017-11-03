﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3699081103;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1080795294.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM3067001883.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t1080795294  SceneManager_GetActiveScene_m3062973092 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::INTERNAL_CALL_GetActiveScene(UnityEngine.SceneManagement.Scene&)
extern "C"  void SceneManager_INTERNAL_CALL_GetActiveScene_m3594338006 (Il2CppObject * __this /* static, unused */, Scene_t1080795294 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
extern "C"  Scene_t1080795294  SceneManager_GetSceneAt_m2396963182 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::INTERNAL_CALL_GetSceneAt(System.Int32,UnityEngine.SceneManagement.Scene&)
extern "C"  void SceneManager_INTERNAL_CALL_GetSceneAt_m1242004550 (Il2CppObject * __this /* static, unused */, int32_t ___index0, Scene_t1080795294 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m2167814033 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m3907168970 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m193744610 (Il2CppObject * __this /* static, unused */, int32_t ___sceneBuildIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m2455768283 (Il2CppObject * __this /* static, unused */, int32_t ___sceneBuildIndex0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
extern "C"  AsyncOperation_t3699081103 * SceneManager_LoadSceneAsync_m1034954248 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  AsyncOperation_t3699081103 * SceneManager_LoadSceneAsync_m1685951617 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
extern "C"  AsyncOperation_t3699081103 * SceneManager_LoadSceneAsync_m1265579403 (Il2CppObject * __this /* static, unused */, int32_t ___sceneBuildIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  AsyncOperation_t3699081103 * SceneManager_LoadSceneAsync_m4185231428 (Il2CppObject * __this /* static, unused */, int32_t ___sceneBuildIndex0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  AsyncOperation_t3699081103 * SceneManager_LoadSceneAsyncNameIndexInternal_m3775081569 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, int32_t ___sceneBuildIndex1, bool ___isAdditive2, bool ___mustCompleteNextFrame3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::MoveGameObjectToScene(UnityEngine.GameObject,UnityEngine.SceneManagement.Scene)
extern "C"  void SceneManager_MoveGameObjectToScene_m1041785160 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, Scene_t1080795294  ___scene1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::INTERNAL_CALL_MoveGameObjectToScene(UnityEngine.GameObject,UnityEngine.SceneManagement.Scene&)
extern "C"  void SceneManager_INTERNAL_CALL_MoveGameObjectToScene_m2977641667 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, Scene_t1080795294 * ___scene1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_Internal_SceneLoaded_m1398790415 (Il2CppObject * __this /* static, unused */, Scene_t1080795294  ___scene0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneUnloaded(UnityEngine.SceneManagement.Scene)
extern "C"  void SceneManager_Internal_SceneUnloaded_m3773648285 (Il2CppObject * __this /* static, unused */, Scene_t1080795294  ___scene0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_ActiveSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
extern "C"  void SceneManager_Internal_ActiveSceneChanged_m3583151927 (Il2CppObject * __this /* static, unused */, Scene_t1080795294  ___previousActiveScene0, Scene_t1080795294  ___newActiveScene1, const MethodInfo* method) IL2CPP_METHOD_ATTR;