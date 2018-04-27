/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Waypoint_m.
 */

#ifndef BASE_WAYPOINT_M_CONVERT
#define BASE_WAYPOINT_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_Waypoint.hpp>
#include <base/m_types/base_Waypoint.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_Waypoint_m_fromAsn1(base::Waypoint_m& result, const asn1SccBase_Waypoint_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Waypoint_m_toAsn1(asn1SccBase_Waypoint_m& result, const base::Waypoint_m& baseObj);


#endif //BASE_WAYPOINT_M_CONVERT