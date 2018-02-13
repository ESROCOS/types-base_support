/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1JointsTrajectory (implementation).
 */

#include "asn1JointsTrajectoryConvert.hpp"
#include "asn1JointStateConvert.hpp"
#include "asn1StringConvert.hpp"
#include "asn1TimeConvert.hpp"
#include "asn1ArrayUtils.hpp"

void JointsTrajectory_fromAsn1(base::JointsTrajectory& result, const asn1SccJointsTrajectory& asnVal)
{
	
  
    array_from_asn1_string(result.names, asnVal.vector_name.nCount, asnVal.vector_name.arr, maxSize_T_String);
    array_from_asn1_func(result.times, asnVal.timetags.nCount, asnVal.timetags.arr, Time_fromAsn1);
	array_from_asn1_func(result.elements, asnVal.trajectory.nCount, asnVal.trajectory.arr, JointTrajectory_fromAsn1);
}

void JointTrajectory_fromAsn1(base::JointTrajectory& result, const asn1SccJointTrajectory& asnVal)
{
	array_from_asn1_func(result, asnVal.nCount, asnVal.arr, JointState_fromAsn1);
}




void JointsTrajectory_toAsn1(asn1SccJointsTrajectory& result, const base::JointsTrajectory& baseObj)
{
	array_to_asn1_func(&result.timetags.nCount, result.timetags.arr, baseObj.times, Time_toAsn1, "Time tags elements");
    array_to_asn1_string(&result.vector_name.nCount, result.vector_name.arr, baseObj.names, maxSize_T_String, "JointsTrajectory names");
    array_to_asn1_func(&result.trajectory.nCount, result.trajectory.arr, baseObj.elements, JointTrajectory_toAsn1, "JointsTrajectory elements");
}

void JointTrajectory_toAsn1(asn1SccJointTrajectory& result, const base::JointTrajectory& baseObj)
{
	array_to_asn1_func(&result.nCount, result.arr, baseObj, JointState_toAsn1, "JointTrajectory vector");
}

