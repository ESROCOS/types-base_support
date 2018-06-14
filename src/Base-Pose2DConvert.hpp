/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Pose2D.
 */

#ifndef BASE_POSE2D_CONVERT
#define BASE_POSE2D_CONVERT

#include "baseTypes.h"
#include <base/Pose.hpp>
#include <base/Pose.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector2dConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_Pose2D_fromAsn1(base::Pose2D& result, const asn1SccBase_Pose2D& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Pose2D_toAsn1(asn1SccBase_Pose2D& result, const base::Pose2D& baseObj);


#endif //BASE_POSE2D_CONVERT
