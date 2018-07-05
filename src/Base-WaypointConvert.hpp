/*
 * Conversion functions for asn1SccBase_Waypoint.
 */

#ifndef BASE_WAYPOINT_CONVERT
#define BASE_WAYPOINT_CONVERT

#include "baseTypes.h"
#include <base/Waypoint.hpp>
#include <base/Waypoint.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector3dConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_Waypoint_fromAsn1(base::Waypoint& result, const asn1SccBase_Waypoint& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Waypoint_toAsn1(asn1SccBase_Waypoint& result, const base::Waypoint& baseObj);


#endif //BASE_WAYPOINT_CONVERT
