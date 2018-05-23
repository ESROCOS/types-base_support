
#include "Base-Trajectory-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-geometry-SplineConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_Trajectory_m_fromAsn1(base::Trajectory_m& result, const asn1SccBase_Trajectory_m& asnVal)
{
    result.speed = asnVal.speed;

    asn1SccWrappers_geometry_Spline_fromAsn1(result.spline, asnVal.spline);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Trajectory_m_toAsn1(asn1SccBase_Trajectory_m& result, const base::Trajectory_m& baseObj)
{
    result.speed = baseObj.speed;

    asn1SccWrappers_geometry_Spline_toAsn1(result.spline, baseObj.spline);

}


