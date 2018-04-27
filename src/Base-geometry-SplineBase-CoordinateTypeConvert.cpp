
#include "Base-geometry-SplineBase-CoordinateTypeConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_geometry_SplineBase_CoordinateType_fromAsn1(base::geometry::SplineBase::CoordinateType& result, const asn1SccBase_geometry_SplineBase_CoordinateType& asnVal)
{
    result = (base::geometry::SplineBase::CoordinateType) asnVal;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_geometry_SplineBase_CoordinateType_toAsn1(asn1SccBase_geometry_SplineBase_CoordinateType& result, const base::geometry::SplineBase::CoordinateType& baseObj)
{
    result = (asn1SccBase_geometry_SplineBase_CoordinateType) baseObj;

}


