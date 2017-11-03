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
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlighterItem
struct  HighlighterItem_t2302921460  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean HighlighterItem::seeThrough
	bool ___seeThrough_2;
	// UnityEngine.Color HighlighterItem::revealColor
	Color_t4194546905  ___revealColor_3;
	// HighlightingSystem.Highlighter HighlighterItem::h
	Highlighter_t3349921983 * ___h_4;
	// System.Int32 HighlighterItem::revealCount
	int32_t ___revealCount_5;

public:
	inline static int32_t get_offset_of_seeThrough_2() { return static_cast<int32_t>(offsetof(HighlighterItem_t2302921460, ___seeThrough_2)); }
	inline bool get_seeThrough_2() const { return ___seeThrough_2; }
	inline bool* get_address_of_seeThrough_2() { return &___seeThrough_2; }
	inline void set_seeThrough_2(bool value)
	{
		___seeThrough_2 = value;
	}

	inline static int32_t get_offset_of_revealColor_3() { return static_cast<int32_t>(offsetof(HighlighterItem_t2302921460, ___revealColor_3)); }
	inline Color_t4194546905  get_revealColor_3() const { return ___revealColor_3; }
	inline Color_t4194546905 * get_address_of_revealColor_3() { return &___revealColor_3; }
	inline void set_revealColor_3(Color_t4194546905  value)
	{
		___revealColor_3 = value;
	}

	inline static int32_t get_offset_of_h_4() { return static_cast<int32_t>(offsetof(HighlighterItem_t2302921460, ___h_4)); }
	inline Highlighter_t3349921983 * get_h_4() const { return ___h_4; }
	inline Highlighter_t3349921983 ** get_address_of_h_4() { return &___h_4; }
	inline void set_h_4(Highlighter_t3349921983 * value)
	{
		___h_4 = value;
		Il2CppCodeGenWriteBarrier(&___h_4, value);
	}

	inline static int32_t get_offset_of_revealCount_5() { return static_cast<int32_t>(offsetof(HighlighterItem_t2302921460, ___revealCount_5)); }
	inline int32_t get_revealCount_5() const { return ___revealCount_5; }
	inline int32_t* get_address_of_revealCount_5() { return &___revealCount_5; }
	inline void set_revealCount_5(int32_t value)
	{
		___revealCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
