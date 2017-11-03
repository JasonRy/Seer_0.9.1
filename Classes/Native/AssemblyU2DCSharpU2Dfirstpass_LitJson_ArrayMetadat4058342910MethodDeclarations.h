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

// System.Type
struct Type_t;
// LitJson.ArrayMetadata
struct ArrayMetadata_t4058342910;
struct ArrayMetadata_t4058342910_marshaled_pinvoke;
struct ArrayMetadata_t4058342910_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_ArrayMetadat4058342910.h"
#include "mscorlib_System_Type2863145774.h"

// System.Type LitJson.ArrayMetadata::get_ElementType()
extern "C"  Type_t * ArrayMetadata_get_ElementType_m3958924451 (ArrayMetadata_t4058342910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ArrayMetadata::set_ElementType(System.Type)
extern "C"  void ArrayMetadata_set_ElementType_m2200103108 (ArrayMetadata_t4058342910 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.ArrayMetadata::get_IsArray()
extern "C"  bool ArrayMetadata_get_IsArray_m384653534 (ArrayMetadata_t4058342910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ArrayMetadata::set_IsArray(System.Boolean)
extern "C"  void ArrayMetadata_set_IsArray_m1050958917 (ArrayMetadata_t4058342910 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.ArrayMetadata::get_IsList()
extern "C"  bool ArrayMetadata_get_IsList_m2258725339 (ArrayMetadata_t4058342910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ArrayMetadata::set_IsList(System.Boolean)
extern "C"  void ArrayMetadata_set_IsList_m870648738 (ArrayMetadata_t4058342910 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ArrayMetadata_t4058342910;
struct ArrayMetadata_t4058342910_marshaled_pinvoke;

extern "C" void ArrayMetadata_t4058342910_marshal_pinvoke(const ArrayMetadata_t4058342910& unmarshaled, ArrayMetadata_t4058342910_marshaled_pinvoke& marshaled);
extern "C" void ArrayMetadata_t4058342910_marshal_pinvoke_back(const ArrayMetadata_t4058342910_marshaled_pinvoke& marshaled, ArrayMetadata_t4058342910& unmarshaled);
extern "C" void ArrayMetadata_t4058342910_marshal_pinvoke_cleanup(ArrayMetadata_t4058342910_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ArrayMetadata_t4058342910;
struct ArrayMetadata_t4058342910_marshaled_com;

extern "C" void ArrayMetadata_t4058342910_marshal_com(const ArrayMetadata_t4058342910& unmarshaled, ArrayMetadata_t4058342910_marshaled_com& marshaled);
extern "C" void ArrayMetadata_t4058342910_marshal_com_back(const ArrayMetadata_t4058342910_marshaled_com& marshaled, ArrayMetadata_t4058342910& unmarshaled);
extern "C" void ArrayMetadata_t4058342910_marshal_com_cleanup(ArrayMetadata_t4058342910_marshaled_com& marshaled);
