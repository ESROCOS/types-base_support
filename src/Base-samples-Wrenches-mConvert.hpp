/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_Wrenches_m.
 */

#ifndef BASE_SAMPLES_WRENCHES_M_CONVERT
#define BASE_SAMPLES_WRENCHES_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_samples_Wrenches.hpp>
#include <base/m_types/base_samples_Wrenches.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Std-orogen-typekits-mtype-std-vector-base-WrenchConvert.hpp"
#include "Base-TimeConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_Wrenches_m_fromAsn1(base::samples::Wrenches_m& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_Wrenches_m_names=numBase_samples_Wrenches_m_names)
{

    result.names.resize(asnVal.names.nCount);
    for(int i = 0; i < numBase_samples_Wrenches_m_names;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_fromAsn1(result.elements, asnVal.elements);

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_Wrenches_m_toAsn1(T & result, const base::samples::Wrenches_m& baseObj,    asn1SccT_UInt32 length_numBase_samples_Wrenches_m_names=numBase_samples_Wrenches_m_names)
{

    for(int i = 0; i < numBase_samples_Wrenches_m_names;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench_toAsn1(result.elements, baseObj.elements);

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

}


#endif //BASE_SAMPLES_WRENCHES_M_CONVERT
