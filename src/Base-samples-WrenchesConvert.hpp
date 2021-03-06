/*
 * Conversion functions for asn1SccBase_samples_Wrenches.
 */

#ifndef BASE_SAMPLES_WRENCHES_CONVERT
#define BASE_SAMPLES_WRENCHES_CONVERT

#include "baseTypes.h"
#include <base/samples/Wrenches.hpp>
#include <base/samples/Wrenches.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-WrenchConvert.hpp"
#include "Base-TimeConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_Wrenches_fromAsn1(base::samples::Wrenches& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_Wrenches_names=numBase_samples_Wrenches_names,     asn1SccT_UInt32 length_numBase_samples_Wrenches_elements=numBase_samples_Wrenches_elements)
{

    result.names.resize(asnVal.names.nCount);
    for(int i = 0; i < asnVal.names.nCount;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    result.elements.resize(asnVal.elements.nCount);
    for(int i = 0; i < asnVal.elements.nCount;i++)
    {
        asn1SccBase_Wrench_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_Wrenches_toAsn1(T & result, const base::samples::Wrenches& baseObj,    asn1SccT_UInt32 length_numBase_samples_Wrenches_names=numBase_samples_Wrenches_names,     asn1SccT_UInt32 length_numBase_samples_Wrenches_elements=numBase_samples_Wrenches_elements)
{

    if( baseObj.names.size() > numBase_samples_Wrenches_names)
    {
        fprintf(stderr, "WARNING:  truncated names of asn1SccBase_samples_Wrenches to %lld elements.\n",numBase_samples_Wrenches_names);
        result.names.nCount = numBase_samples_Wrenches_names;
    }
    else
    {
        result.names.nCount = baseObj.names.size();
    }

    for(int i = 0; i < result.names.nCount;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    if( baseObj.elements.size() > numBase_samples_Wrenches_elements)
    {
        fprintf(stderr, "WARNING:  truncated elements of asn1SccBase_samples_Wrenches to %lld elements.\n",numBase_samples_Wrenches_elements);
        result.elements.nCount = numBase_samples_Wrenches_elements;
    }
    else
    {
        result.elements.nCount = baseObj.elements.size();
    }

    for(int i = 0; i < result.elements.nCount;i++)
    {
        asn1SccBase_Wrench_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }


    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

}


#endif //BASE_SAMPLES_WRENCHES_CONVERT
