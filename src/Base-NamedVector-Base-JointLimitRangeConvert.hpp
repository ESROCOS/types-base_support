/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_NamedVector_Base_JointLimitRange.
 */

#ifndef BASE_NAMEDVECTOR_BASE_JOINTLIMITRANGE_CONVERT
#define BASE_NAMEDVECTOR_BASE_JOINTLIMITRANGE_CONVERT

#include "baseTypes.h"
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-JointLimitRangeConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_NamedVector_Base_JointLimitRange_fromAsn1(base::NamedVector<base::JointLimitRange>& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_NamedVector_Base_JointLimitRange_names=numBase_NamedVector_Base_JointLimitRange_names,     asn1SccT_UInt32 length_numBase_NamedVector_Base_JointLimitRange_elements=numBase_NamedVector_Base_JointLimitRange_elements)
{


    for(int i = 0; i < numBase_NamedVector_Base_JointLimitRange_names;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }


    for(int i = 0; i < numBase_NamedVector_Base_JointLimitRange_elements;i++)
    {
        asn1SccBase_JointLimitRange_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_NamedVector_Base_JointLimitRange_toAsn1(T & result, const base::NamedVector<base::JointLimitRange>& baseObj,    asn1SccT_UInt32 length_numBase_NamedVector_Base_JointLimitRange_names=numBase_NamedVector_Base_JointLimitRange_names,     asn1SccT_UInt32 length_numBase_NamedVector_Base_JointLimitRange_elements=numBase_NamedVector_Base_JointLimitRange_elements)
{

    for(int i = 0; i < numBase_NamedVector_Base_JointLimitRange_names;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    for(int i = 0; i < numBase_NamedVector_Base_JointLimitRange_elements;i++)
    {
        asn1SccBase_JointLimitRange_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

}


#endif //BASE_NAMEDVECTOR_BASE_JOINTLIMITRANGE_CONVERT
