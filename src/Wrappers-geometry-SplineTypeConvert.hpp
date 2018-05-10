/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccWrappers_geometry_SplineType.
 */

#ifndef WRAPPERS_GEOMETRY_SPLINETYPE_CONVERT
#define WRAPPERS_GEOMETRY_SPLINETYPE_CONVERT

#include "baseTypes.h"
#include <base/wrappers/geometry/Spline.hpp>
#include <base/wrappers/geometry/Spline.hpp>
#include <string.h>



//Conversion functions from asn1 to c++ type
void asn1SccWrappers_geometry_SplineType_fromAsn1(wrappers::geometry::SplineType& result, const asn1SccWrappers_geometry_SplineType& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccWrappers_geometry_SplineType_toAsn1(asn1SccWrappers_geometry_SplineType& result, const wrappers::geometry::SplineType& baseObj);


#endif //WRAPPERS_GEOMETRY_SPLINETYPE_CONVERT