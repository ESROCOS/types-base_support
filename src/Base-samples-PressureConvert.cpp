
#include "Base-samples-PressureConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_Pressure_fromAsn1(base::samples::Pressure& result, const asn1SccBase_samples_Pressure& asnVal)
{
    result.pascal = asnVal.pascal;

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_Pressure_toAsn1(asn1SccBase_samples_Pressure& result, const base::samples::Pressure& baseObj)
{
    result.pascal = baseObj.pascal;

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

}


