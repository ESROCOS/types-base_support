/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_geometry_SplineBase_CoordinateType.
 */

#ifndef BASE_GEOMETRY_SPLINEBASE_COORDINATETYPE_CONVERT
#define BASE_GEOMETRY_SPLINEBASE_COORDINATETYPE_CONVERT

#include "baseTypes.h"
#include <base/geometry/Spline.hpp>
#include <base/geometry/Spline.hpp>
#include <string.h>



//Conversion functions from asn1 to c++ type
void asn1SccBase_geometry_SplineBase_CoordinateType_fromAsn1(base::geometry::SplineBase::CoordinateType& result, const asn1SccBase_geometry_SplineBase_CoordinateType& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_geometry_SplineBase_CoordinateType_toAsn1(asn1SccBase_geometry_SplineBase_CoordinateType& result, const base::geometry::SplineBase::CoordinateType& baseObj);


#endif //BASE_GEOMETRY_SPLINEBASE_COORDINATETYPE_CONVERT