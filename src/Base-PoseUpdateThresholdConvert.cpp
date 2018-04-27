
#include "Base-PoseUpdateThresholdConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_PoseUpdateThreshold_fromAsn1(base::PoseUpdateThreshold& result, const asn1SccBase_PoseUpdateThreshold& asnVal)
{
    result.distance = asnVal.distance;

    result.angle = asnVal.angle;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_PoseUpdateThreshold_toAsn1(asn1SccBase_PoseUpdateThreshold& result, const base::PoseUpdateThreshold& baseObj)
{
    result.distance = baseObj.distance;

    result.angle = baseObj.angle;

}


