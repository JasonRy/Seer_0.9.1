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

// WMG_Ring_Graph/ColorChanger
struct ColorChanger_t2534509953;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void WMG_Ring_Graph/ColorChanger::.ctor(System.Object,System.IntPtr)
extern "C"  void ColorChanger__ctor_m4015277784 (ColorChanger_t2534509953 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring_Graph/ColorChanger::Invoke(UnityEngine.GameObject,UnityEngine.Color)
extern "C"  void ColorChanger_Invoke_m3982532362 (ColorChanger_t2534509953 * __this, GameObject_t3674682005 * ___obj0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WMG_Ring_Graph/ColorChanger::BeginInvoke(UnityEngine.GameObject,UnityEngine.Color,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ColorChanger_BeginInvoke_m1709686285 (ColorChanger_t2534509953 * __this, GameObject_t3674682005 * ___obj0, Color_t4194546905  ___color1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WMG_Ring_Graph/ColorChanger::EndInvoke(System.IAsyncResult)
extern "C"  void ColorChanger_EndInvoke_m3922519272 (ColorChanger_t2534509953 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
