/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_NamedVector_Base_JointState.
 */

#ifndef BASE_NAMEDVECTOR_BASE_JOINTSTATE_CONVERT
#define BASE_NAMEDVECTOR_BASE_JOINTSTATE_CONVERT

#include "baseTypes.h"
#include <base/NamedVector.hpp>
#include <base/samples/Joints.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-JointTrajectoryConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_NamedVector_Base_JointState_fromAsn1(base::NamedVector<base::JointState>& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_NamedVector_Base_JointState_names=numBase_NamedVector_Base_JointState_names)
{

    result.names.resize(asnVal.names.nCount);
    for(int i = 0; i < asnVal.names.nCount;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    asn1SccBase_JointTrajectory_fromAsn1(result.elements, asnVal.elements);

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_NamedVector_Base_JointState_toAsn1(T & result, const base::NamedVector<base::JointState>& baseObj,    asn1SccT_UInt32 length_numBase_NamedVector_Base_JointState_names=numBase_NamedVector_Base_JointState_names)
{

    if( baseObj.names.size() > numBase_NamedVector_Base_JointState_names)
    {
        fprintf(stderr, "WARNING:  truncated names of asn1SccBase_NamedVector_Base_JointState to %lld elements.\n",numBase_NamedVector_Base_JointState_names);
        result.names.nCount = numBase_NamedVector_Base_JointState_names;
    }
    else
    {
        result.names.nCount = baseObj.names.size();
    }

    for(int i = 0; i < result.names.nCount;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }


    asn1SccBase_JointTrajectory_toAsn1(result.elements, baseObj.elements);

}


#endif //BASE_NAMEDVECTOR_BASE_JOINTSTATE_CONVERT
