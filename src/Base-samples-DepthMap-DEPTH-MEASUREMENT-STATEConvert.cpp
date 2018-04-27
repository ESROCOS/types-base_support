
#include "Base-samples-DepthMap-DEPTH-MEASUREMENT-STATEConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_fromAsn1(base::samples::DepthMap::DEPTH_MEASUREMENT_STATE& result, const asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE& asnVal)
{
    result = (base::samples::DepthMap::DEPTH_MEASUREMENT_STATE) asnVal;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_toAsn1(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE& result, const base::samples::DepthMap::DEPTH_MEASUREMENT_STATE& baseObj)
{
    result = (asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE) baseObj;

}


