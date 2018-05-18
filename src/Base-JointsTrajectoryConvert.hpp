/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_JointsTrajectory.
 */

#ifndef BASE_JOINTSTRAJECTORY_CONVERT
#define BASE_JOINTSTRAJECTORY_CONVERT

#include "baseTypes.h"
#include <base/JointsTrajectory.hpp>
#include <base/JointsTrajectory.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-JointTrajectoryConvert.hpp"
#include "Base-TimeConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_JointsTrajectory_fromAsn1(base::JointsTrajectory& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_JointsTrajectory_names=numBase_JointsTrajectory_names,     asn1SccT_UInt32 length_numBase_JointsTrajectory_elements=numBase_JointsTrajectory_elements,     asn1SccT_UInt32 length_numBase_JointsTrajectory_times_t=numBase_JointsTrajectory_times_t)
{

    result.names.resize(asnVal.names.nCount);
    for(int i = 0; i < asnVal.names.nCount;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    result.elements.resize(asnVal.elements.nCount);
    for(int i = 0; i < asnVal.elements.nCount;i++)
    {
        asn1SccBase_JointTrajectory_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }

    result.times.resize(asnVal.times_t.nCount);
    for(int i = 0; i < asnVal.times_t.nCount;i++)
    {
        asn1SccBase_Time_fromAsn1(result.times[i], asnVal.times_t.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_JointsTrajectory_toAsn1(T & result, const base::JointsTrajectory& baseObj,    asn1SccT_UInt32 length_numBase_JointsTrajectory_names=numBase_JointsTrajectory_names,     asn1SccT_UInt32 length_numBase_JointsTrajectory_elements=numBase_JointsTrajectory_elements,     asn1SccT_UInt32 length_numBase_JointsTrajectory_times_t=numBase_JointsTrajectory_times_t)
{

    if( baseObj.names.size() > numBase_JointsTrajectory_names)
    {
        fprintf(stderr, "WARNING:  truncated names of asn1SccBase_JointsTrajectory to %lld elements.\n",numBase_JointsTrajectory_names);
        result.names.nCount = numBase_JointsTrajectory_names;
    }
    else
    {
        result.names.nCount = baseObj.names.size();
    }

    for(int i = 0; i < result.names.nCount;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    if( baseObj.elements.size() > numBase_JointsTrajectory_elements)
    {
        fprintf(stderr, "WARNING:  truncated elements of asn1SccBase_JointsTrajectory to %lld elements.\n",numBase_JointsTrajectory_elements);
        result.elements.nCount = numBase_JointsTrajectory_elements;
    }
    else
    {
        result.elements.nCount = baseObj.elements.size();
    }

    for(int i = 0; i < result.elements.nCount;i++)
    {
        asn1SccBase_JointTrajectory_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

    if( baseObj.times.size() > numBase_JointsTrajectory_times_t)
    {
        fprintf(stderr, "WARNING:  truncated times_t of asn1SccBase_JointsTrajectory to %lld elements.\n",numBase_JointsTrajectory_times_t);
        result.times_t.nCount = numBase_JointsTrajectory_times_t;
    }
    else
    {
        result.times_t.nCount = baseObj.times.size();
    }

    for(int i = 0; i < result.times_t.nCount;i++)
    {
        asn1SccBase_Time_toAsn1(result.times_t.arr[i], baseObj.times[i]);
    }

}


#endif //BASE_JOINTSTRAJECTORY_CONVERT
