
#include "Base-samples-Motion2DConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-AngleConvert.hpp"
#include "Base-TimeConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_Motion2D_fromAsn1(base::samples::Motion2D& result, const asn1SccBase_samples_Motion2D& asnVal)
{
    result.translation = asnVal.translation;

    result.rotation = asnVal.rotation;

    asn1SccBase_Angle_fromAsn1(result.heading, asnVal.heading);

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_Motion2D_toAsn1(asn1SccBase_samples_Motion2D& result, const base::samples::Motion2D& baseObj)
{
    result.translation = baseObj.translation;

    result.rotation = baseObj.rotation;

    asn1SccBase_Angle_toAsn1(result.heading, baseObj.heading);

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

}


