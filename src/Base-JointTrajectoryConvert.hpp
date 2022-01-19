/*
 * Conversion functions for asn1SccBase_JointTrajectory.
 */

#ifndef BASE_JOINTTRAJECTORY_CONVERT
#define BASE_JOINTTRAJECTORY_CONVERT

#include "baseTypes.h"
#include <c++/10/bits/stl_vector.h>
#include <vector>
#include <base/JointState.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-JointStateConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_JointTrajectory_fromAsn1(std::vector<base::JointState>& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_JointTrajectory=numBase_JointTrajectory)
{

    result.resize(asnVal.nCount);
    for (int i = 0; i < asnVal.nCount; i++)
    {
		asn1SccBase_JointState_fromAsn1(result[i], asnVal.arr[i]);
    }
}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_JointTrajectory_toAsn1(T & result, const std::vector<base::JointState>& baseObj,    asn1SccT_UInt32 length_numBase_JointTrajectory=numBase_JointTrajectory)
{

    if( baseObj.size() > length_numBase_JointTrajectory)
    {
        fprintf(stderr, "WARNING:  truncated asn1SccBase_JointTrajectory to %lld elements.\n",length_numBase_JointTrajectory);
        result.nCount = length_numBase_JointTrajectory;
    }
    else
        result.nCount = baseObj.size();
    for (int i = 0; i < result.nCount; i++)
    {
		asn1SccBase_JointState_toAsn1(result.arr[i], baseObj[i]);
    }
}


#endif //BASE_JOINTTRAJECTORY_CONVERT
