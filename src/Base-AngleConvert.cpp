
#include "Base-AngleConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_Angle_fromAsn1(base::Angle& result, const asn1SccBase_Angle& asnVal)
{
    result.rad = asnVal.rad;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Angle_toAsn1(asn1SccBase_Angle& result, const base::Angle& baseObj)
{
    result.rad = baseObj.rad;

}


