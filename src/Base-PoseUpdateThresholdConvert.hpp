/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_PoseUpdateThreshold.
 */

#ifndef BASE_POSEUPDATETHRESHOLD_CONVERT
#define BASE_POSEUPDATETHRESHOLD_CONVERT

#include "baseTypes.h"
#include <base/Pose.hpp>
#include <base/Pose.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_PoseUpdateThreshold_fromAsn1(base::PoseUpdateThreshold& result, const asn1SccBase_PoseUpdateThreshold& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_PoseUpdateThreshold_toAsn1(asn1SccBase_PoseUpdateThreshold& result, const base::PoseUpdateThreshold& baseObj);


#endif //BASE_POSEUPDATETHRESHOLD_CONVERT