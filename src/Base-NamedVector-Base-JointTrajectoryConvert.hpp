/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_NamedVector_Base_JointTrajectory.
 */

#ifndef BASE_NAMEDVECTOR_BASE_JOINTTRAJECTORY_CONVERT
#define BASE_NAMEDVECTOR_BASE_JOINTTRAJECTORY_CONVERT

#include "baseTypes.h"
#include <base/NamedVector.hpp>
#include <base/samples/Joints.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-JointTrajectoryConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_NamedVector_Base_JointTrajectory_fromAsn1(base::NamedVector<std::vector<base::JointState>>& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_NamedVector_Base_JointTrajectory_names=numBase_NamedVector_Base_JointTrajectory_names,     asn1SccT_UInt32 length_numBase_NamedVector_Base_JointTrajectory_elements=numBase_NamedVector_Base_JointTrajectory_elements)
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

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_NamedVector_Base_JointTrajectory_toAsn1(T & result, const base::NamedVector<std::vector<base::JointState>>& baseObj,    asn1SccT_UInt32 length_numBase_NamedVector_Base_JointTrajectory_names=numBase_NamedVector_Base_JointTrajectory_names,     asn1SccT_UInt32 length_numBase_NamedVector_Base_JointTrajectory_elements=numBase_NamedVector_Base_JointTrajectory_elements)
{

    if( baseObj.names.size() > numBase_NamedVector_Base_JointTrajectory_names)
    {
        fprintf(stderr, "WARNING:  truncated names of asn1SccBase_NamedVector_Base_JointTrajectory to %lld elements.\n",numBase_NamedVector_Base_JointTrajectory_names);
        result.names.nCount = numBase_NamedVector_Base_JointTrajectory_names;
    }
    else
    {
        result.names.nCount = baseObj.names.size();
    }

    for(int i = 0; i < result.names.nCount;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    if( baseObj.elements.size() > numBase_NamedVector_Base_JointTrajectory_elements)
    {
        fprintf(stderr, "WARNING:  truncated elements of asn1SccBase_NamedVector_Base_JointTrajectory to %lld elements.\n",numBase_NamedVector_Base_JointTrajectory_elements);
        result.elements.nCount = numBase_NamedVector_Base_JointTrajectory_elements;
    }
    else
    {
        result.elements.nCount = baseObj.elements.size();
    }

    for(int i = 0; i < result.elements.nCount;i++)
    {
        asn1SccBase_JointTrajectory_toAsn1(result.elements.arr[i], baseObj.elements[i]);
    }

}


#endif //BASE_NAMEDVECTOR_BASE_JOINTTRAJECTORY_CONVERT
