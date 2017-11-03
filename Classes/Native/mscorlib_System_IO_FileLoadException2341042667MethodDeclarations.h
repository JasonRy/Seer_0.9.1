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

// System.IO.FileLoadException
struct FileLoadException_t2341042667;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.IO.FileLoadException::.ctor()
extern "C"  void FileLoadException__ctor_m4055788976 (FileLoadException_t2341042667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileLoadException__ctor_m3673704177 (FileLoadException_t2341042667 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileLoadException::get_Message()
extern "C"  String_t* FileLoadException_get_Message_m4067415503 (FileLoadException_t2341042667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileLoadException_GetObjectData_m771755342 (FileLoadException_t2341042667 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileLoadException::ToString()
extern "C"  String_t* FileLoadException_ToString_m4074433085 (FileLoadException_t2341042667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
