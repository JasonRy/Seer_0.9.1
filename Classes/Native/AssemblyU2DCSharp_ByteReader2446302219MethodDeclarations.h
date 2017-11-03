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

// ByteReader
struct ByteReader_t2446302219;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// UnityEngine.TextAsset
struct TextAsset_t3836129977;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// BetterList`1<System.String>
struct BetterList_1_t1504199569;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAsset3836129977.h"
#include "mscorlib_System_String7231557.h"

// System.Void ByteReader::.ctor(System.Byte[])
extern "C"  void ByteReader__ctor_m417508569 (ByteReader_t2446302219 * __this, ByteU5BU5D_t4260760469* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ByteReader::.ctor(UnityEngine.TextAsset)
extern "C"  void ByteReader__ctor_m3209705686 (ByteReader_t2446302219 * __this, TextAsset_t3836129977 * ___asset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ByteReader::.cctor()
extern "C"  void ByteReader__cctor_m1589350589 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ByteReader ByteReader::Open(System.String)
extern "C"  ByteReader_t2446302219 * ByteReader_Open_m175599250 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ByteReader::get_canRead()
extern "C"  bool ByteReader_get_canRead_m759072407 (ByteReader_t2446302219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* ByteReader_ReadLine_m416558568 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___start1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine()
extern "C"  String_t* ByteReader_ReadLine_m3908010721 (ByteReader_t2446302219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine(System.Boolean)
extern "C"  String_t* ByteReader_ReadLine_m2195921560 (ByteReader_t2446302219 * __this, bool ___skipEmptyLines0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> ByteReader::ReadDictionary()
extern "C"  Dictionary_2_t827649927 * ByteReader_ReadDictionary_m2502625102 (ByteReader_t2446302219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> ByteReader::ReadCSV()
extern "C"  BetterList_1_t1504199569 * ByteReader_ReadCSV_m2254485814 (ByteReader_t2446302219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
