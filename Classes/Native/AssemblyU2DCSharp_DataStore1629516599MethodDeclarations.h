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

// DataStore
struct DataStore_t1629516599;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"

// System.Void DataStore::.ctor()
extern "C"  void DataStore__ctor_m3650310164 (DataStore_t1629516599 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataStore::.cctor()
extern "C"  void DataStore__cctor_m1008369177 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DataStore DataStore::CreateInstance()
extern "C"  DataStore_t1629516599 * DataStore_CreateInstance_m348129765 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DataStore::SerializeObject(System.Object,System.Type)
extern "C"  String_t* DataStore_SerializeObject_m2245604147 (DataStore_t1629516599 * __this, Il2CppObject * ___pObject0, Type_t * ___ty1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object DataStore::DeserializeObject(System.String,System.Type)
extern "C"  Il2CppObject * DataStore_DeserializeObject_m118672656 (DataStore_t1629516599 * __this, String_t* ___pXmlizedString0, Type_t * ___ty1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DataStore::UTF8ByteArrayToString(System.Byte[])
extern "C"  String_t* DataStore_UTF8ByteArrayToString_m2901711752 (DataStore_t1629516599 * __this, ByteU5BU5D_t4260760469* ___characters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] DataStore::StringToUTF8ByteArray(System.String)
extern "C"  ByteU5BU5D_t4260760469* DataStore_StringToUTF8ByteArray_m3452056498 (DataStore_t1629516599 * __this, String_t* ___pXmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DataStore::CreateTextFile(System.String,System.String,System.Boolean)
extern "C"  void DataStore_CreateTextFile_m1105078740 (DataStore_t1629516599 * __this, String_t* ___fileName0, String_t* ___strFileData1, bool ___isEncryption2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DataStore::LoadTextFile(System.String,System.Boolean)
extern "C"  String_t* DataStore_LoadTextFile_m3508512951 (DataStore_t1629516599 * __this, String_t* ___fileName0, bool ___isEncryption1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DataStore::Encrypt(System.String)
extern "C"  String_t* DataStore_Encrypt_m166639752 (DataStore_t1629516599 * __this, String_t* ___toE0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DataStore::Decrypt(System.String)
extern "C"  String_t* DataStore_Decrypt_m302537824 (DataStore_t1629516599 * __this, String_t* ___toD0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
