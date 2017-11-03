#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HighlightingSystem.HighlightingBase
struct HighlightingBase_t263525439;
// UnityEngine.UI.Dropdown
struct Dropdown_t4201779933;
// System.Collections.Generic.List`1<PresetSelector/Preset>
struct List_1_t3761469696;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PresetSelector
struct  PresetSelector_t2455156734  : public MonoBehaviour_t667441552
{
public:
	// HighlightingSystem.HighlightingBase PresetSelector::highlightingBase
	HighlightingBase_t263525439 * ___highlightingBase_2;
	// UnityEngine.UI.Dropdown PresetSelector::dropdown
	Dropdown_t4201779933 * ___dropdown_3;
	// System.Collections.Generic.List`1<PresetSelector/Preset> PresetSelector::presets
	List_1_t3761469696 * ___presets_4;

public:
	inline static int32_t get_offset_of_highlightingBase_2() { return static_cast<int32_t>(offsetof(PresetSelector_t2455156734, ___highlightingBase_2)); }
	inline HighlightingBase_t263525439 * get_highlightingBase_2() const { return ___highlightingBase_2; }
	inline HighlightingBase_t263525439 ** get_address_of_highlightingBase_2() { return &___highlightingBase_2; }
	inline void set_highlightingBase_2(HighlightingBase_t263525439 * value)
	{
		___highlightingBase_2 = value;
		Il2CppCodeGenWriteBarrier(&___highlightingBase_2, value);
	}

	inline static int32_t get_offset_of_dropdown_3() { return static_cast<int32_t>(offsetof(PresetSelector_t2455156734, ___dropdown_3)); }
	inline Dropdown_t4201779933 * get_dropdown_3() const { return ___dropdown_3; }
	inline Dropdown_t4201779933 ** get_address_of_dropdown_3() { return &___dropdown_3; }
	inline void set_dropdown_3(Dropdown_t4201779933 * value)
	{
		___dropdown_3 = value;
		Il2CppCodeGenWriteBarrier(&___dropdown_3, value);
	}

	inline static int32_t get_offset_of_presets_4() { return static_cast<int32_t>(offsetof(PresetSelector_t2455156734, ___presets_4)); }
	inline List_1_t3761469696 * get_presets_4() const { return ___presets_4; }
	inline List_1_t3761469696 ** get_address_of_presets_4() { return &___presets_4; }
	inline void set_presets_4(List_1_t3761469696 * value)
	{
		___presets_4 = value;
		Il2CppCodeGenWriteBarrier(&___presets_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
