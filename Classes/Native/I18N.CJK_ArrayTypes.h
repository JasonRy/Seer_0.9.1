#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// I18N.CJK.GB18030Source/GB18030Map
struct GB18030Map_t3463414964;

#include "mscorlib_System_Array1146569071.h"
#include "I18N_CJK_I18N_CJK_GB18030Source_GB18030Map3463414964.h"

#pragma once
// I18N.CJK.GB18030Source/GB18030Map[]
struct GB18030MapU5BU5D_t1932029437  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) GB18030Map_t3463414964 * m_Items[1];

public:
	inline GB18030Map_t3463414964 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GB18030Map_t3463414964 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GB18030Map_t3463414964 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
