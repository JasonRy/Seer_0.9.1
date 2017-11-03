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
// Lovatto.SceneLoader.bl_SceneLoaderManager
struct bl_SceneLoaderManager_t3371621549;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3699081103;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// bl_SceneLoader bl_SceneLoaderUtils::get_GetLoader()
extern "C"  bl_SceneLoader_t943165226 * bl_SceneLoaderUtils_get_GetLoader_m1968887477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Lovatto.SceneLoader.bl_SceneLoaderManager bl_SceneLoaderUtils::GetSceneLoaderManager()
extern "C"  bl_SceneLoaderManager_t3371621549 * bl_SceneLoaderUtils_GetSceneLoaderManager_m628623058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation bl_SceneLoaderUtils::LoadLevelAsync(System.Int32)
extern "C"  AsyncOperation_t3699081103 * bl_SceneLoaderUtils_LoadLevelAsync_m623813876 (Il2CppObject * __this /* static, unused */, int32_t ___scene0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation bl_SceneLoaderUtils::LoadLevelAsync(System.String)
extern "C"  AsyncOperation_t3699081103 * bl_SceneLoaderUtils_LoadLevelAsync_m2615059391 (Il2CppObject * __this /* static, unused */, String_t* ___scene0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
