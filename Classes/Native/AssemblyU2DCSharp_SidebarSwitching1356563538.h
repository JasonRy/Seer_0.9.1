#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image[]
struct ImageU5BU5D_t4039083868;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SidebarSwitching
struct  SidebarSwitching_t1356563538  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image[] SidebarSwitching::allSwitchSpries
	ImageU5BU5D_t4039083868* ___allSwitchSpries_2;
	// UnityEngine.UI.Image SidebarSwitching::_MI
	Image_t538875265 * ____MI_3;

public:
	inline static int32_t get_offset_of_allSwitchSpries_2() { return static_cast<int32_t>(offsetof(SidebarSwitching_t1356563538, ___allSwitchSpries_2)); }
	inline ImageU5BU5D_t4039083868* get_allSwitchSpries_2() const { return ___allSwitchSpries_2; }
	inline ImageU5BU5D_t4039083868** get_address_of_allSwitchSpries_2() { return &___allSwitchSpries_2; }
	inline void set_allSwitchSpries_2(ImageU5BU5D_t4039083868* value)
	{
		___allSwitchSpries_2 = value;
		Il2CppCodeGenWriteBarrier(&___allSwitchSpries_2, value);
	}

	inline static int32_t get_offset_of__MI_3() { return static_cast<int32_t>(offsetof(SidebarSwitching_t1356563538, ____MI_3)); }
	inline Image_t538875265 * get__MI_3() const { return ____MI_3; }
	inline Image_t538875265 ** get_address_of__MI_3() { return &____MI_3; }
	inline void set__MI_3(Image_t538875265 * value)
	{
		____MI_3 = value;
		Il2CppCodeGenWriteBarrier(&____MI_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
