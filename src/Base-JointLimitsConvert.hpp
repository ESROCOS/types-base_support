/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_JointLimits.
 */

#ifndef BASE_JOINTLIMITS_CONVERT
#define BASE_JOINTLIMITS_CONVERT

#include "baseTypes.h"
#include <base/JointLimits.hpp>
#include <base/JointLimits.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-JointLimitRangeConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_JointLimits_fromAsn1(base::JointLimits& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_JointLimits_names=numBase_JointLimits_names,     asn1SccT_UInt32 length_numBase_JointLimits_elements=numBase_JointLimits_elements)
{

    result.names.resize(asnVal.names.nCount);
    for(int i = 0; i < asnVal.names.nCount;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    result.elements.resize(asnVal.elements.nCount);
    for(int i = 0; i < asnVal.elements.nCount;i++)
    {
        asn1SccBase_JointLimitRange_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_JointLimits_toAsn1(T & result, const base::JointLimits& baseObj,    asn1SccT_UInt32 length_numBase_JointLimits_names=numBase_JointLimits_names,     asn1SccT_UInt32 length_numBase_JointLimits_elements=numBase_JointLimits_elements)
{

    if( baseObj.names.size() > numBase_JointLimits_names)
    {
        fprintf(stderr, "WARNING:  truncated names of asn1SccBase_JointLimits to %lld elements.\n",numBase_JointLimits_names);
        result.names.nCount = numBase_JointLimits_names;
    }
    else
    {
        result.names.nCount = baseObj.names.size();
    }

    for(int i = 0; i < result.names.nCount;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    if( baseObj.elements.size() > numBase_JointLimits_elements)
    {
        fprintf(stderr, "WARNING:  truncated elements of asn1SccBase_JointLimits to %lld elements.\n",numBase_JointLimits_elements);
        result.elements.nCount = numBase_JointLimits_elements;
    }
    else
    {
        result.elements.nCount = baseObj.elements.size();
    }

    for(int i = 0; i < result.elements.nCount;i++)
    {
        asn1SccBase_JointLimitRange_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

}


#endif //BASE_JOINTLIMITS_CONVERT
