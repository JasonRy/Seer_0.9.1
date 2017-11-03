#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HighlightingSystem.Highlighter
struct Highlighter_t3349921983;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlighterBase
struct  HighlighterBase_t2302695090  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean HighlighterBase::seeThrough
	bool ___seeThrough_2;
	// HighlightingSystem.Highlighter HighlighterBase::h
	Highlighter_t3349921983 * ___h_3;

public:
	inline static int32_t get_offset_of_seeThrough_2() { return static_cast<int32_t>(offsetof(HighlighterBase_t2302695090, ___seeThrough_2)); }
	inline bool get_seeThrough_2() const { return ___seeThrough_2; }
	inline bool* get_address_of_seeThrough_2() { return &___seeThrough_2; }
	inline void set_seeThrough_2(bool value)
	{
		___seeThrough_2 = value;
	}

	inline static int32_t get_offset_of_h_3() { return static_cast<int32_t>(offsetof(HighlighterBase_t2302695090, ___h_3)); }
	inline Highlighter_t3349921983 * get_h_3() const { return ___h_3; }
	inline Highlighter_t3349921983 ** get_address_of_h_3() { return &___h_3; }
	inline void set_h_3(Highlighter_t3349921983 * value)
	{
		___h_3 = value;
		Il2CppCodeGenWriteBarrier(&___h_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
