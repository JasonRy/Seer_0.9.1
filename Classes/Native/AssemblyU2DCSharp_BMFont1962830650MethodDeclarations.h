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

// BMFont
struct BMFont_t1962830650;
// System.String
struct String_t;
// System.Collections.Generic.List`1<BMGlyph>
struct List_1_t2087238257;
// BMGlyph
struct BMGlyph_t719052705;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void BMFont::.ctor()
extern "C"  void BMFont__ctor_m2683632289 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BMFont::get_isValid()
extern "C"  bool BMFont_get_isValid_m1354584564 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_charSize()
extern "C"  int32_t BMFont_get_charSize_m3324309297 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_charSize(System.Int32)
extern "C"  void BMFont_set_charSize_m3463653864 (BMFont_t1962830650 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_baseOffset()
extern "C"  int32_t BMFont_get_baseOffset_m4243423230 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_baseOffset(System.Int32)
extern "C"  void BMFont_set_baseOffset_m3493449141 (BMFont_t1962830650 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texWidth()
extern "C"  int32_t BMFont_get_texWidth_m678192793 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texWidth(System.Int32)
extern "C"  void BMFont_set_texWidth_m3413820752 (BMFont_t1962830650 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texHeight()
extern "C"  int32_t BMFont_get_texHeight_m52954454 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texHeight(System.Int32)
extern "C"  void BMFont_set_texHeight_m4070080385 (BMFont_t1962830650 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_glyphCount()
extern "C"  int32_t BMFont_get_glyphCount_m2598502589 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BMFont::get_spriteName()
extern "C"  String_t* BMFont_get_spriteName_m3156205119 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_spriteName(System.String)
extern "C"  void BMFont_set_spriteName_m3412845938 (BMFont_t1962830650 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMGlyph> BMFont::get_glyphs()
extern "C"  List_1_t2087238257 * BMFont_get_glyphs_m1206383509 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32,System.Boolean)
extern "C"  BMGlyph_t719052705 * BMFont_GetGlyph_m3108008609 (BMFont_t1962830650 * __this, int32_t ___index0, bool ___createIfMissing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32)
extern "C"  BMGlyph_t719052705 * BMFont_GetGlyph_m1989279068 (BMFont_t1962830650 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Clear()
extern "C"  void BMFont_Clear_m89765580 (BMFont_t1962830650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Trim(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void BMFont_Trim_m3028559553 (BMFont_t1962830650 * __this, int32_t ___xMin0, int32_t ___yMin1, int32_t ___xMax2, int32_t ___yMax3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
