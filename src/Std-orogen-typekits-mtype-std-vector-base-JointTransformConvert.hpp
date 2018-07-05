/*
 * Conversion functions for asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform.
 */

#ifndef STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_JOINTTRANSFORM_CONVERT
#define STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_JOINTTRANSFORM_CONVERT

#include "baseTypes.h"
#include <c++/6/bits/stl_vector.h>
#include <vector>
#include <base/m_types/base_JointTransform.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-JointTransform-mConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_fromAsn1(std::vector<base::JointTransform_m>& result, const T & asnVal,    asn1SccT_UInt32 length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform=numStd_orogen_typekits_mtype_std_vector_base_JointTransform)
{

    result.resize(asnVal.nCount);
    for (int i = 0; i < asnVal.nCount; i++)
    {
		asn1SccBase_JointTransform_m_fromAsn1(result[i], asnVal.arr[i]);
    }
}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_toAsn1(T & result, const std::vector<base::JointTransform_m>& baseObj,    asn1SccT_UInt32 length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform=numStd_orogen_typekits_mtype_std_vector_base_JointTransform)
{

    if( baseObj.size() > length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform)
    {
        fprintf(stderr, "WARNING:  truncated asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform to %lld elements.\n",length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform);
        result.nCount = length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform;
    }
    else
        result.nCount = baseObj.size();
    for (int i = 0; i < result.nCount; i++)
    {
		asn1SccBase_JointTransform_m_toAsn1(result.arr[i], baseObj[i]);
    }
}


#endif //STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_JOINTTRANSFORM_CONVERT
