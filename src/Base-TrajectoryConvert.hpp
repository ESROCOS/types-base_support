/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Trajectory.
 */

#ifndef BASE_TRAJECTORY_CONVERT
#define BASE_TRAJECTORY_CONVERT

#include "baseTypes.h"
#include <base/Trajectory.hpp>
#include <base/Trajectory.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_Trajectory_fromAsn1(base::Trajectory& result, const asn1SccBase_Trajectory& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Trajectory_toAsn1(asn1SccBase_Trajectory& result, const base::Trajectory& baseObj);


#endif //BASE_TRAJECTORY_CONVERT