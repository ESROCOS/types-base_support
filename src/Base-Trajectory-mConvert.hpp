/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Trajectory_m.
 */

#ifndef BASE_TRAJECTORY_M_CONVERT
#define BASE_TRAJECTORY_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_Trajectory.hpp>
#include <base/m_types/base_Trajectory.hpp>
#include <string.h>



//Conversion functions from asn1 to c++ type
void asn1SccBase_Trajectory_m_fromAsn1(base::Trajectory_m& result, const asn1SccBase_Trajectory_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Trajectory_m_toAsn1(asn1SccBase_Trajectory_m& result, const base::Trajectory_m& baseObj);


#endif //BASE_TRAJECTORY_M_CONVERT