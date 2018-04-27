
#include "Base-samples-DepthMap-PROJECTION-TYPEConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_DepthMap_PROJECTION_TYPE_fromAsn1(base::samples::DepthMap::PROJECTION_TYPE& result, const asn1SccBase_samples_DepthMap_PROJECTION_TYPE& asnVal)
{
    result = (base::samples::DepthMap::PROJECTION_TYPE) asnVal;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_DepthMap_PROJECTION_TYPE_toAsn1(asn1SccBase_samples_DepthMap_PROJECTION_TYPE& result, const base::samples::DepthMap::PROJECTION_TYPE& baseObj)
{
    result = (asn1SccBase_samples_DepthMap_PROJECTION_TYPE) baseObj;

}


