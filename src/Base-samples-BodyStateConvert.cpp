
#include "Base-samples-BodyStateConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "Base-TransformWithCovarianceConvert.hpp"
#include "Base-TwistWithCovarianceConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_BodyState_fromAsn1(base::samples::BodyState& result, const asn1SccBase_samples_BodyState& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    asn1SccBase_TransformWithCovariance_fromAsn1(result.pose, asnVal.pose);

    asn1SccBase_TwistWithCovariance_fromAsn1(result.velocity, asnVal.velocity);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_BodyState_toAsn1(asn1SccBase_samples_BodyState& result, const base::samples::BodyState& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    asn1SccBase_TransformWithCovariance_toAsn1(result.pose, baseObj.pose);

    asn1SccBase_TwistWithCovariance_toAsn1(result.velocity, baseObj.velocity);

}


