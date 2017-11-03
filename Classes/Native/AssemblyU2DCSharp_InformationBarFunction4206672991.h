#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t3798907012;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InformationBarFunction
struct  InformationBarFunction_t4206672991  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] InformationBarFunction::informationInterfaces
	GameObjectU5BU5D_t2662109048* ___informationInterfaces_2;
	// UnityEngine.UI.Text[] InformationBarFunction::informationInterfacesInfoTxt
	TextU5BU5D_t3798907012* ___informationInterfacesInfoTxt_3;
	// UnityEngine.UI.Image InformationBarFunction::scrollBar
	Image_t538875265 * ___scrollBar_4;

public:
	inline static int32_t get_offset_of_informationInterfaces_2() { return static_cast<int32_t>(offsetof(InformationBarFunction_t4206672991, ___informationInterfaces_2)); }
	inline GameObjectU5BU5D_t2662109048* get_informationInterfaces_2() const { return ___informationInterfaces_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_informationInterfaces_2() { return &___informationInterfaces_2; }
	inline void set_informationInterfaces_2(GameObjectU5BU5D_t2662109048* value)
	{
		___informationInterfaces_2 = value;
		Il2CppCodeGenWriteBarrier(&___informationInterfaces_2, value);
	}

	inline static int32_t get_offset_of_informationInterfacesInfoTxt_3() { return static_cast<int32_t>(offsetof(InformationBarFunction_t4206672991, ___informationInterfacesInfoTxt_3)); }
	inline TextU5BU5D_t3798907012* get_informationInterfacesInfoTxt_3() const { return ___informationInterfacesInfoTxt_3; }
	inline TextU5BU5D_t3798907012** get_address_of_informationInterfacesInfoTxt_3() { return &___informationInterfacesInfoTxt_3; }
	inline void set_informationInterfacesInfoTxt_3(TextU5BU5D_t3798907012* value)
	{
		___informationInterfacesInfoTxt_3 = value;
		Il2CppCodeGenWriteBarrier(&___informationInterfacesInfoTxt_3, value);
	}

	inline static int32_t get_offset_of_scrollBar_4() { return static_cast<int32_t>(offsetof(InformationBarFunction_t4206672991, ___scrollBar_4)); }
	inline Image_t538875265 * get_scrollBar_4() const { return ___scrollBar_4; }
	inline Image_t538875265 ** get_address_of_scrollBar_4() { return &___scrollBar_4; }
	inline void set_scrollBar_4(Image_t538875265 * value)
	{
		___scrollBar_4 = value;
		Il2CppCodeGenWriteBarrier(&___scrollBar_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
