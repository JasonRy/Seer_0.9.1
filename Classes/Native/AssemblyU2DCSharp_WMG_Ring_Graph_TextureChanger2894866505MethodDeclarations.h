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

// WMG_Ring_Graph/TextureChanger
struct TextureChanger_t2894866505;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Ring_Graph/TextureChanger::.ctor(System.Object,System.IntPtr)
extern "C"  void TextureChanger__ctor_m109344672 (TextureChanger_t2894866505 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring_Graph/TextureChanger::Invoke(UnityEngine.GameObject,UnityEngine.Sprite,System.Int32,System.Single,System.Single,System.Single,System.Boolean,System.Single,System.Single)
extern "C"  void TextureChanger_Invoke_m1669307801 (TextureChanger_t2894866505 * __this, GameObject_t3674682005 * ___obj0, Sprite_t3199167241 * ___sprite1, int32_t ___textureNum2, float ___maxSize3, float ___inner4, float ___outer5, bool ___antiAliasing6, float ___antiAliasingStrength7, float ___fill8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Ring_Graph/TextureChanger::BeginInvoke(UnityEngine.GameObject,UnityEngine.Sprite,System.Int32,System.Single,System.Single,System.Single,System.Boolean,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TextureChanger_BeginInvoke_m1007906852 (TextureChanger_t2894866505 * __this, GameObject_t3674682005 * ___obj0, Sprite_t3199167241 * ___sprite1, int32_t ___textureNum2, float ___maxSize3, float ___inner4, float ___outer5, bool ___antiAliasing6, float ___antiAliasingStrength7, float ___fill8, AsyncCallback_t1369114871 * ___callback9, Il2CppObject * ___object10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring_Graph/TextureChanger::EndInvoke(System.IAsyncResult)
extern "C"  void TextureChanger_EndInvoke_m1040497072 (TextureChanger_t2894866505 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
