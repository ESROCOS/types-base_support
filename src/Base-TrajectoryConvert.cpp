
#include "Base-TrajectoryConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-geometry-SplineConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_Trajectory_fromAsn1(base::Trajectory& result, const asn1SccBase_Trajectory& asnVal)
{
    result.speed = asnVal.speed;


    wrappers::geometry::Spline spline_intermediate;
    asn1SccWrappers_geometry_Spline_fromAsn1(spline_intermediate, asnVal.spline);
    Base_geometry_Spline_3__fromIntermediate(result.spline, spline_intermediate);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Trajectory_toAsn1(asn1SccBase_Trajectory& result, const base::Trajectory& baseObj)
{
    result.speed = baseObj.speed;


    wrappers::geometry::Spline spline_intermediate;
    Base_geometry_Spline_3__toIntermediate(spline_intermediate, baseObj.spline);
    asn1SccWrappers_geometry_Spline_toAsn1(result.spline, spline_intermediate);

}


