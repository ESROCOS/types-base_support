/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * A header file to import all the asn1 types either from the 
 * types library or from dataview-uniq.h (if building from TASTE).
 */

#ifndef BASETYPES_HPP
#define BASETYPES_HPP

// Include types generated from ASN.1. These are either:
// - in dataview-uniq.h, if building from TASTE
//   (IMPORTANT: note that the order of includes matters)
// - in the asn1, if building from outside TASTE
// We distingush between the two cases by checking the include variable
#ifndef _INC_DATAVIEW_UNIQ_H
#ifndef GENERATED_ASN1_DATAVIEW_UNIQ_H
#ifndef GENERATED_ASN1SCC_DATAVIEW_UNIQ_H
#include "asn1/asn1crt.h"
#include "asn1/Angle.h"
#include "asn1/BodyState.h"
#include "asn1/Covariance.h"
#include "asn1/Eigen.h"
#include "asn1/JointLimitRange.h"
#include "asn1/JointLimits.h"
#include "asn1/JointState.h"
#include "asn1/Joints.h"
#include "asn1/JointsTrajectory.h"
#include "asn1/Motion2D.h"
#include "asn1/NamedVector.h"
#include "asn1/Point.h"
#include "asn1/Pose.h"
#include "asn1/Pressure.h"
#include "asn1/RigidBodyAcceleration.h"
#include "asn1/RigidBodyState.h"
#include "asn1/Temperature.h"
#include "asn1/Time.h"
#include "asn1/Trajectory.h"
#include "asn1/TransformWithCovariance.h"
#include "asn1/TwistWithCovariance.h"
#include "asn1/Waypoint.h"
#include "asn1/Wrench.h"
#include "asn1/Wrenches.h"
#include "asn1/asn1crt.h"
#include "asn1/taste-extended.h"
#include "asn1/taste-types.h"
#endif //GENERATED_ASN1SCC_DATAVIEW_UNIQ_H
#endif //GENERATED_ASN1_DATAVIEW_UNIQ_H
#endif //_INC_DATAVIEW_UNIQ_H

#endif //BASETYPES_HPP
