#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyPinYin.PinYinConverter
struct  PinYinConverter_t2760999061  : public Il2CppObject
{
public:

public:
};

struct PinYinConverter_t2760999061_StaticFields
{
public:
	// System.Int32[] MyPinYin.PinYinConverter::pyValue
	Int32U5BU5D_t3230847821* ___pyValue_3;
	// System.String[] MyPinYin.PinYinConverter::pyName
	StringU5BU5D_t4054002952* ___pyName_4;
	// System.String[] MyPinYin.PinYinConverter::otherChinese
	StringU5BU5D_t4054002952* ___otherChinese_5;
	// System.String[] MyPinYin.PinYinConverter::otherPinYin
	StringU5BU5D_t4054002952* ___otherPinYin_6;

public:
	inline static int32_t get_offset_of_pyValue_3() { return static_cast<int32_t>(offsetof(PinYinConverter_t2760999061_StaticFields, ___pyValue_3)); }
	inline Int32U5BU5D_t3230847821* get_pyValue_3() const { return ___pyValue_3; }
	inline Int32U5BU5D_t3230847821** get_address_of_pyValue_3() { return &___pyValue_3; }
	inline void set_pyValue_3(Int32U5BU5D_t3230847821* value)
	{
		___pyValue_3 = value;
		Il2CppCodeGenWriteBarrier(&___pyValue_3, value);
	}

	inline static int32_t get_offset_of_pyName_4() { return static_cast<int32_t>(offsetof(PinYinConverter_t2760999061_StaticFields, ___pyName_4)); }
	inline StringU5BU5D_t4054002952* get_pyName_4() const { return ___pyName_4; }
	inline StringU5BU5D_t4054002952** get_address_of_pyName_4() { return &___pyName_4; }
	inline void set_pyName_4(StringU5BU5D_t4054002952* value)
	{
		___pyName_4 = value;
		Il2CppCodeGenWriteBarrier(&___pyName_4, value);
	}

	inline static int32_t get_offset_of_otherChinese_5() { return static_cast<int32_t>(offsetof(PinYinConverter_t2760999061_StaticFields, ___otherChinese_5)); }
	inline StringU5BU5D_t4054002952* get_otherChinese_5() const { return ___otherChinese_5; }
	inline StringU5BU5D_t4054002952** get_address_of_otherChinese_5() { return &___otherChinese_5; }
	inline void set_otherChinese_5(StringU5BU5D_t4054002952* value)
	{
		___otherChinese_5 = value;
		Il2CppCodeGenWriteBarrier(&___otherChinese_5, value);
	}

	inline static int32_t get_offset_of_otherPinYin_6() { return static_cast<int32_t>(offsetof(PinYinConverter_t2760999061_StaticFields, ___otherPinYin_6)); }
	inline StringU5BU5D_t4054002952* get_otherPinYin_6() const { return ___otherPinYin_6; }
	inline StringU5BU5D_t4054002952** get_address_of_otherPinYin_6() { return &___otherPinYin_6; }
	inline void set_otherPinYin_6(StringU5BU5D_t4054002952* value)
	{
		___otherPinYin_6 = value;
		Il2CppCodeGenWriteBarrier(&___otherPinYin_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
