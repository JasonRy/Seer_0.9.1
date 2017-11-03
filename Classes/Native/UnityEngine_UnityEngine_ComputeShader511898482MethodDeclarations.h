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

// UnityEngine.ComputeShader
struct ComputeShader_t511898482;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.Texture
struct Texture_t2526458961;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"

// System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
extern "C"  int32_t ComputeShader_FindKernel_m1939337733 (ComputeShader_t511898482 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeShader::SetFloat(System.String,System.Single)
extern "C"  void ComputeShader_SetFloat_m146176230 (ComputeShader_t511898482 * __this, String_t* ___name0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeShader::SetInt(System.String,System.Int32)
extern "C"  void ComputeShader_SetInt_m2834048713 (ComputeShader_t511898482 * __this, String_t* ___name0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeShader::SetFloats(System.String,System.Single[])
extern "C"  void ComputeShader_SetFloats_m591311729 (ComputeShader_t511898482 * __this, String_t* ___name0, SingleU5BU5D_t2316563989* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeShader::Internal_SetFloats(System.String,System.Single[])
extern "C"  void ComputeShader_Internal_SetFloats_m3100560391 (ComputeShader_t511898482 * __this, String_t* ___name0, SingleU5BU5D_t2316563989* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeShader::SetTexture(System.Int32,System.String,UnityEngine.Texture)
extern "C"  void ComputeShader_SetTexture_m3657435989 (ComputeShader_t511898482 * __this, int32_t ___kernelIndex0, String_t* ___name1, Texture_t2526458961 * ___texture2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ComputeShader::Dispatch(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void ComputeShader_Dispatch_m2941488421 (ComputeShader_t511898482 * __this, int32_t ___kernelIndex0, int32_t ___threadGroupsX1, int32_t ___threadGroupsY2, int32_t ___threadGroupsZ3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
