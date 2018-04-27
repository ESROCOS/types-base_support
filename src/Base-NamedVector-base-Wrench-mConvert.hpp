/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_NamedVector_base_Wrench_m.
 */

#ifndef BASE_NAMEDVECTOR_BASE_WRENCH_M_CONVERT
#define BASE_NAMEDVECTOR_BASE_WRENCH_M_CONVERT

#include "baseTypes.h"

#include "T-StringConvert.hpp"
#include "Std-orogen-typekits-mtype-std-vector-base-WrenchConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_NamedVector_base_Wrench_m_fromAsn1(base::NamedVector__base_Wrench__m& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_NamedVector_base_Wrench_m_names=numBase_NamedVector_base_Wrench_m_names)
{

    for(int i = 0; i < numBase_NamedVector_base_Wrench_m_names;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_fromAsn1(result.elements, asnVal.elements);

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_NamedVector_base_Wrench_m_toAsn1(T & result, const base::NamedVector__base_Wrench__m& baseObj,    asn1SccT_UInt32 length_numBase_NamedVector_base_Wrench_m_names=numBase_NamedVector_base_Wrench_m_names)
{

    for(int i = 0; i < numBase_NamedVector_base_Wrench_m_names;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_toAsn1(result.elements, baseObj.elements);

}


#endif //BASE_NAMEDVECTOR_BASE_WRENCH_M_CONVERT