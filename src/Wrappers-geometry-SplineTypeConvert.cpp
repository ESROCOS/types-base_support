
#include "Wrappers-geometry-SplineTypeConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccWrappers_geometry_SplineType_fromAsn1(wrappers::geometry::SplineType& result, const asn1SccWrappers_geometry_SplineType& asnVal)
{
    result = (wrappers::geometry::SplineType) asnVal;

}

//Conversion functions from c++ type to asn1

void asn1SccWrappers_geometry_SplineType_toAsn1(asn1SccWrappers_geometry_SplineType& result, const wrappers::geometry::SplineType& baseObj)
{
    result = (asn1SccWrappers_geometry_SplineType) baseObj;

}


