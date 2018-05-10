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
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-JointTrajectoryConvert.hpp"
#include "Base-TimeConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_JointsTrajectory_fromAsn1(base::JointsTrajectory& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_JointsTrajectory_names=numBase_JointsTrajectory_names,     asn1SccT_UInt32 length_numBase_JointsTrajectory_elements=numBase_JointsTrajectory_elements,     asn1SccT_UInt32 length_numBase_JointsTrajectory_times=numBase_JointsTrajectory_times)
{


    for(int i = 0; i < numBase_JointsTrajectory_names;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }


    for(int i = 0; i < numBase_JointsTrajectory_elements;i++)
    {
        asn1SccBase_JointTrajectory_fromAsn1(result.elements[i], asnVal.elements.arr[i]);
    }


    for(int i = 0; i < numBase_JointsTrajectory_times;i++)
    {
        asn1SccBase_Time_fromAsn1(result.times[i], asnVal.times.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_JointsTrajectory_toAsn1(T & result, const base::JointsTrajectory& baseObj,    asn1SccT_UInt32 length_numBase_JointsTrajectory_names=numBase_JointsTrajectory_names,     asn1SccT_UInt32 length_numBase_JointsTrajectory_elements=numBase_JointsTrajectory_elements,     asn1SccT_UInt32 length_numBase_JointsTrajectory_times=numBase_JointsTrajectory_times)
{

    for(int i = 0; i < numBase_JointsTrajectory_names;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    for(int i = 0; i < numBase_JointsTrajectory_elements;i++)
    {
        asn1SccBase_JointTrajectory_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

    for(int i = 0; i < numBase_JointsTrajectory_times;i++)
    {
        asn1SccBase_Time_toAsn1(result.times.arr[i], baseObj.times[i]);
    }

}


#endif //BASE_JOINTSTRAJECTORY_CONVERT
