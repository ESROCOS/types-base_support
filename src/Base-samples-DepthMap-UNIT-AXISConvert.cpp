
#include "Base-samples-DepthMap-UNIT-AXISConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_DepthMap_UNIT_AXIS_fromAsn1(base::samples::DepthMap::UNIT_AXIS& result, const asn1SccBase_samples_DepthMap_UNIT_AXIS& asnVal)
{
    result = (base::samples::DepthMap::UNIT_AXIS) asnVal;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_DepthMap_UNIT_AXIS_toAsn1(asn1SccBase_samples_DepthMap_UNIT_AXIS& result, const base::samples::DepthMap::UNIT_AXIS& baseObj)
{
    result = (asn1SccBase_samples_DepthMap_UNIT_AXIS) baseObj;

}


