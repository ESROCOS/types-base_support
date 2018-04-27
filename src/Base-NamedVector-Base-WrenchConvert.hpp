/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_NamedVector_Base_Wrench.
 */

#ifndef BASE_NAMEDVECTOR_BASE_WRENCH_CONVERT
#define BASE_NAMEDVECTOR_BASE_WRENCH_CONVERT

#include "baseTypes.h"

#include "T-StringConvert.hpp"
#include "Base-WrenchConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_NamedVector_Base_Wrench_fromAsn1(base::NamedVector<base::Wrench>& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_NamedVector_Base_Wrench_names=numBase_NamedVector_Base_Wrench_names,     asn1SccT_UInt32 length_numBase_NamedVector_Base_Wrench_elements=numBase_NamedVector_Base_Wrench_elements)
{

    for(int i = 0; i < numBase_NamedVector_Base_Wrench_names;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    for(int i = 0; i < numBase_NamedVector_Base_Wrench_elements;i++)
    {
        asn1SccBase_Wrench_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_NamedVector_Base_Wrench_toAsn1(T & result, const base::NamedVector<base::Wrench>& baseObj,    asn1SccT_UInt32 length_numBase_NamedVector_Base_Wrench_names=numBase_NamedVector_Base_Wrench_names,     asn1SccT_UInt32 length_numBase_NamedVector_Base_Wrench_elements=numBase_NamedVector_Base_Wrench_elements)
{

    for(int i = 0; i < numBase_NamedVector_Base_Wrench_names;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    for(int i = 0; i < numBase_NamedVector_Base_Wrench_elements;i++)
    {
        asn1SccBase_Wrench_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

}


#endif //BASE_NAMEDVECTOR_BASE_WRENCH_CONVERT