
#include "Base-TemperatureConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_Temperature_fromAsn1(base::Temperature& result, const asn1SccBase_Temperature& asnVal)
{
    result.kelvin = asnVal.kelvin;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Temperature_toAsn1(asn1SccBase_Temperature& result, const base::Temperature& baseObj)
{
    result.kelvin = baseObj.kelvin;

}


