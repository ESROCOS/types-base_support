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
#include <base/m_types/base_NamedVector__base_Wrench_.hpp>
#include <base/m_types/base_NamedVector__base_Wrench_.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Std-orogen-typekits-mtype-std-vector-base-WrenchConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_NamedVector_base_Wrench_m_fromAsn1(base::NamedVector__base_Wrench__m& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_NamedVector_base_Wrench_m_names=numBase_NamedVector_base_Wrench_m_names)
{

    result.names.resize(asnVal.names.nCount);
    for(int i = 0; i < asnVal.names.nCount;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_fromAsn1(result.elements, asnVal.elements);

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_NamedVector_base_Wrench_m_toAsn1(T & result, const base::NamedVector__base_Wrench__m& baseObj,    asn1SccT_UInt32 length_numBase_NamedVector_base_Wrench_m_names=numBase_NamedVector_base_Wrench_m_names)
{

    if( baseObj.names.size() > numBase_NamedVector_base_Wrench_m_names)
    {
        fprintf(stderr, "WARNING:  truncated names of asn1SccBase_NamedVector_base_Wrench_m to %lld elements.\n",numBase_NamedVector_base_Wrench_m_names);
        result.names.nCount = numBase_NamedVector_base_Wrench_m_names;
    }
    else
    {
        result.names.nCount = baseObj.names.size();
    }

    for(int i = 0; i < result.names.nCount;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }


    asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_toAsn1(result.elements, baseObj.elements);

}


#endif //BASE_NAMEDVECTOR_BASE_WRENCH_M_CONVERT
