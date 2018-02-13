/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1JointsTrajectory (header).
 */

#ifndef ASN1JOINTSTRAJECTORYCONVERT_HPP
#define ASN1JOINTSTRAJECTORYCONVERT_HPP

#include "baseTypes.h"
#include "base/JointsTrajectory.hpp"

// Conversion functions
void JointsTrajectory_fromAsn1(base::JointsTrajectory& result, const asn1SccJointsTrajectory& asnVal);
void JointTrajectory_fromAsn1(base::JointTrajectory& result, const asn1SccJointTrajectory& asnVal);

void JointsTrajectory_toAsn1(asn1SccJointsTrajectory& result, const base::JointsTrajectory& baseObj);
void JointTrajectory_toAsn1(asn1SccJointTrajectory& result, const base::JointTrajectory& baseObj);


#endif //ASN1JOINTSTRAJECTORYCONVERT_HPP
