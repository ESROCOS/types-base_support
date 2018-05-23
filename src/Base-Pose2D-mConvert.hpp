/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Pose2D_m.
 */

#ifndef BASE_POSE2D_M_CONVERT
#define BASE_POSE2D_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_Pose2D.hpp>
#include <base/m_types/base_Pose2D.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector2dConvert.hpp"


//Conversion functions from asn1 to c++ type
void asn1SccBase_Pose2D_m_fromAsn1(base::Pose2D_m& result, const asn1SccBase_Pose2D_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Pose2D_m_toAsn1(asn1SccBase_Pose2D_m& result, const base::Pose2D_m& baseObj);


#endif //BASE_POSE2D_M_CONVERT
