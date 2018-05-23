
#include "Base-PressureConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_Pressure_fromAsn1(base::Pressure& result, const asn1SccBase_Pressure& asnVal)
{
    result.pascal = asnVal.pascal;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Pressure_toAsn1(asn1SccBase_Pressure& result, const base::Pressure& baseObj)
{
    result.pascal = baseObj.pascal;

}


