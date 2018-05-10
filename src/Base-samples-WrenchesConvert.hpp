/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_Wrenches.
 */

#ifndef BASE_SAMPLES_WRENCHES_CONVERT
#define BASE_SAMPLES_WRENCHES_CONVERT

#include "baseTypes.h"
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-WrenchConvert.hpp"
#include "Base-TimeConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_Wrenches_fromAsn1(base::samples::Wrenches& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_Wrenches_names=numBase_samples_Wrenches_names,     asn1SccT_UInt32 length_numBase_samples_Wrenches_elements=numBase_samples_Wrenches_elements)
{


    for(int i = 0; i < numBase_samples_Wrenches_names;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }


    for(int i = 0; i < numBase_samples_Wrenches_elements;i++)
    {
        asn1SccBase_Wrench_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_Wrenches_toAsn1(T & result, const base::samples::Wrenches& baseObj,    asn1SccT_UInt32 length_numBase_samples_Wrenches_names=numBase_samples_Wrenches_names,     asn1SccT_UInt32 length_numBase_samples_Wrenches_elements=numBase_samples_Wrenches_elements)
{

    for(int i = 0; i < numBase_samples_Wrenches_names;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    for(int i = 0; i < numBase_samples_Wrenches_elements;i++)
    {
        asn1SccBase_Wrench_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

}


#endif //BASE_SAMPLES_WRENCHES_CONVERT
