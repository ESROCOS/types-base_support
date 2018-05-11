/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_commands_Joints.
 */

#ifndef BASE_COMMANDS_JOINTS_CONVERT
#define BASE_COMMANDS_JOINTS_CONVERT

#include "baseTypes.h"
#include <base/samples/Joints.hpp>
#include <base/samples/Joints.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "Base-JointTrajectoryConvert.hpp"
#include "Base-TimeConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_commands_Joints_fromAsn1(base::samples::Joints& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_commands_Joints_names=numBase_commands_Joints_names)
{

    result.names.resize(asnVal.names.nCount);
    for(int i = 0; i < numBase_commands_Joints_names;i++)
    {
        asn1SccT_String_fromAsn1(result.names[i], asnVal.names.arr[i]);
    }

    asn1SccBase_JointTrajectory_fromAsn1(result.elements, asnVal.elements);

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_commands_Joints_toAsn1(T & result, const base::samples::Joints& baseObj,    asn1SccT_UInt32 length_numBase_commands_Joints_names=numBase_commands_Joints_names)
{

    for(int i = 0; i < numBase_commands_Joints_names;i++)
    {
        asn1SccT_String_toAsn1(result.names.arr[i], baseObj.names[i]);
    }

    asn1SccBase_JointTrajectory_toAsn1(result.elements, baseObj.elements);

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

}


#endif //BASE_COMMANDS_JOINTS_CONVERT
