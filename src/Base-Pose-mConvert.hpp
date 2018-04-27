/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Pose_m.
 */

#ifndef BASE_POSE_M_CONVERT
#define BASE_POSE_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_Pose.hpp>
#include <base/m_types/base_Pose.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_Pose_m_fromAsn1(base::Pose_m& result, const asn1SccBase_Pose_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Pose_m_toAsn1(asn1SccBase_Pose_m& result, const base::Pose_m& baseObj);


#endif //BASE_POSE_M_CONVERT