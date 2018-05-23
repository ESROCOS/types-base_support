
#include "Base-samples-LASER-RANGE-ERRORSConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_LASER_RANGE_ERRORS_fromAsn1(base::samples::LASER_RANGE_ERRORS& result, const asn1SccBase_samples_LASER_RANGE_ERRORS& asnVal)
{
    result = (base::samples::LASER_RANGE_ERRORS) asnVal;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_LASER_RANGE_ERRORS_toAsn1(asn1SccBase_samples_LASER_RANGE_ERRORS& result, const base::samples::LASER_RANGE_ERRORS& baseObj)
{
    result = (asn1SccBase_samples_LASER_RANGE_ERRORS) baseObj;

}


