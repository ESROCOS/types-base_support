
#include "Base-Time-ResolutionConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_Time_Resolution_fromAsn1(base::Time::Resolution& result, const asn1SccBase_Time_Resolution& asnVal)
{
    result = (base::Time::Resolution) asnVal;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Time_Resolution_toAsn1(asn1SccBase_Time_Resolution& result, const base::Time::Resolution& baseObj)
{
    result = (asn1SccBase_Time_Resolution) baseObj;

}


