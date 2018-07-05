/*
 * Conversion functions for asn1SccBase_JointTransformVector.
 */

#ifndef BASE_JOINTTRANSFORMVECTOR_CONVERT
#define BASE_JOINTTRANSFORMVECTOR_CONVERT

#include "baseTypes.h"
#include <base/JointTransform.hpp>
#include <base/JointTransform.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-JointTransformConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_JointTransformVector_fromAsn1(base::JointTransformVector& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_JointTransformVector_names=numBase_JointTransformVector_names,     asn1SccT_UInt32 length_numBase_JointTransformVector_elements=numBase_JointTransformVector_elements)
{

    result.names.resize(asnVal.names.nCount);
    for(int i = 0; i < asnVal.names.nCount;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    result.elements.resize(asnVal.elements.nCount);
    for(int i = 0; i < asnVal.elements.nCount;i++)
    {
        asn1SccBase_JointTransform_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_JointTransformVector_toAsn1(T & result, const base::JointTransformVector& baseObj,    asn1SccT_UInt32 length_numBase_JointTransformVector_names=numBase_JointTransformVector_names,     asn1SccT_UInt32 length_numBase_JointTransformVector_elements=numBase_JointTransformVector_elements)
{

    if( baseObj.names.size() > numBase_JointTransformVector_names)
    {
        fprintf(stderr, "WARNING:  truncated names of asn1SccBase_JointTransformVector to %lld elements.\n",numBase_JointTransformVector_names);
        result.names.nCount = numBase_JointTransformVector_names;
    }
    else
    {
        result.names.nCount = baseObj.names.size();
    }

    for(int i = 0; i < result.names.nCount;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    if( baseObj.elements.size() > numBase_JointTransformVector_elements)
    {
        fprintf(stderr, "WARNING:  truncated elements of asn1SccBase_JointTransformVector to %lld elements.\n",numBase_JointTransformVector_elements);
        result.elements.nCount = numBase_JointTransformVector_elements;
    }
    else
    {
        result.elements.nCount = baseObj.elements.size();
    }

    for(int i = 0; i < result.elements.nCount;i++)
    {
        asn1SccBase_JointTransform_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

}


#endif //BASE_JOINTTRANSFORMVECTOR_CONVERT
