/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform.
 */

#ifndef STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_JOINTTRANSFORM_CONVERT
#define STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_JOINTTRANSFORM_CONVERT

#include "baseTypes.h"
#include <string.h>
#include <stdio.h>

#include "Base-JointTransform-mConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_fromAsn1(std::vector<base::JointTransform_m>& result, const T & asnVal,    asn1SccT_UInt32 length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform=numStd_orogen_typekits_mtype_std_vector_base_JointTransform)
{

    for (int i = 0; i < length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform; i++)
    {
        result[i] = asnVal.arr[i];
    }
}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_toAsn1(T & result, const std::vector<base::JointTransform_m>& baseObj,    asn1SccT_UInt32 length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform=numStd_orogen_typekits_mtype_std_vector_base_JointTransform)
{

    for (int i = 0; i < length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform; i++)
    {
        result.arr[i] = baseObj[i];
    }
    result.nCount = length_numStd_orogen_typekits_mtype_std_vector_base_JointTransform;
}


#endif //STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_JOINTTRANSFORM_CONVERT
