/*
 * Conversion functions for asn1SccBase_JointTransformVector_m.
 */

#ifndef BASE_JOINTTRANSFORMVECTOR_M_CONVERT
#define BASE_JOINTTRANSFORMVECTOR_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_JointTransformVector.hpp>
#include <base/m_types/base_JointTransformVector.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Std-orogen-typekits-mtype-std-vector-base-JointTransformConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_JointTransformVector_m_fromAsn1(base::JointTransformVector_m& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_JointTransformVector_m_names=numBase_JointTransformVector_m_names)
{

    result.names.resize(asnVal.names.nCount);
    for(int i = 0; i < asnVal.names.nCount;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_fromAsn1(result.elements, asnVal.elements);

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_JointTransformVector_m_toAsn1(T & result, const base::JointTransformVector_m& baseObj,    asn1SccT_UInt32 length_numBase_JointTransformVector_m_names=numBase_JointTransformVector_m_names)
{

    if( baseObj.names.size() > numBase_JointTransformVector_m_names)
    {
        fprintf(stderr, "WARNING:  truncated names of asn1SccBase_JointTransformVector_m to %lld elements.\n",numBase_JointTransformVector_m_names);
        result.names.nCount = numBase_JointTransformVector_m_names;
    }
    else
    {
        result.names.nCount = baseObj.names.size();
    }

    for(int i = 0; i < result.names.nCount;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }


    asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform_toAsn1(result.elements, baseObj.elements);

}


#endif //BASE_JOINTTRANSFORMVECTOR_M_CONVERT
