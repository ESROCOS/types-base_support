/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_NamedVector_Base_JointTransform.
 */

#ifndef BASE_NAMEDVECTOR_BASE_JOINTTRANSFORM_CONVERT
#define BASE_NAMEDVECTOR_BASE_JOINTTRANSFORM_CONVERT

#include "baseTypes.h"
#include <string.h>

#include "T-StringConvert.hpp"
#include "Base-JointTransformConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_NamedVector_Base_JointTransform_fromAsn1(base::NamedVector<base::JointTransform>& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_NamedVector_Base_JointTransform_names=numBase_NamedVector_Base_JointTransform_names,     asn1SccT_UInt32 length_numBase_NamedVector_Base_JointTransform_elements=numBase_NamedVector_Base_JointTransform_elements)
{

    for(int i = 0; i < numBase_NamedVector_Base_JointTransform_names;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    for(int i = 0; i < numBase_NamedVector_Base_JointTransform_elements;i++)
    {
        asn1SccBase_JointTransform_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_NamedVector_Base_JointTransform_toAsn1(T & result, const base::NamedVector<base::JointTransform>& baseObj,    asn1SccT_UInt32 length_numBase_NamedVector_Base_JointTransform_names=numBase_NamedVector_Base_JointTransform_names,     asn1SccT_UInt32 length_numBase_NamedVector_Base_JointTransform_elements=numBase_NamedVector_Base_JointTransform_elements)
{

    for(int i = 0; i < numBase_NamedVector_Base_JointTransform_names;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    for(int i = 0; i < numBase_NamedVector_Base_JointTransform_elements;i++)
    {
        asn1SccBase_JointTransform_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

}


#endif //BASE_NAMEDVECTOR_BASE_JOINTTRANSFORM_CONVERT