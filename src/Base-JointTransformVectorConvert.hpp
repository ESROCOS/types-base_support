/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_JointTransformVector.
 */

#ifndef BASE_JOINTTRANSFORMVECTOR_CONVERT
#define BASE_JOINTTRANSFORMVECTOR_CONVERT

#include "baseTypes.h"
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-JointTransformConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_JointTransformVector_fromAsn1(base::JointTransformVector& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_JointTransformVector_names=numBase_JointTransformVector_names,     asn1SccT_UInt32 length_numBase_JointTransformVector_elements=numBase_JointTransformVector_elements)
{


    for(int i = 0; i < numBase_JointTransformVector_names;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }


    for(int i = 0; i < numBase_JointTransformVector_elements;i++)
    {
        asn1SccBase_JointTransform_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_JointTransformVector_toAsn1(T & result, const base::JointTransformVector& baseObj,    asn1SccT_UInt32 length_numBase_JointTransformVector_names=numBase_JointTransformVector_names,     asn1SccT_UInt32 length_numBase_JointTransformVector_elements=numBase_JointTransformVector_elements)
{

    for(int i = 0; i < numBase_JointTransformVector_names;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    for(int i = 0; i < numBase_JointTransformVector_elements;i++)
    {
        asn1SccBase_JointTransform_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

}


#endif //BASE_JOINTTRANSFORMVECTOR_CONVERT
