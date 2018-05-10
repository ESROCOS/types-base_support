/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_JointTrajectory.
 */

#ifndef BASE_JOINTTRAJECTORY_CONVERT
#define BASE_JOINTTRAJECTORY_CONVERT

#include "baseTypes.h"
#include <string.h>
#include <stdio.h>

#include "Base-JointStateConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_JointTrajectory_fromAsn1(std::vector<base::JointState>& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_JointTrajectory=numBase_JointTrajectory)
{

    for (int i = 0; i < length_numBase_JointTrajectory; i++)
    {
		asn1SccBase_JointState_fromAsn1(result[i], asnVal.arr[i]);
    }
}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_JointTrajectory_toAsn1(T & result, const std::vector<base::JointState>& baseObj,    asn1SccT_UInt32 length_numBase_JointTrajectory=numBase_JointTrajectory)
{

    for (int i = 0; i < length_numBase_JointTrajectory; i++)
    {
        result.arr[i] = baseObj[i];
    }
    result.nCount = length_numBase_JointTrajectory;
}


#endif //BASE_JOINTTRAJECTORY_CONVERT
