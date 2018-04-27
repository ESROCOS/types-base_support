
#include "Base-samples-BodyState-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "Base-TransformWithCovariance-mConvert.hpp"
#include "Base-TwistWithCovariance-mConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_BodyState_m_fromAsn1(base::samples::BodyState_m& result, const asn1SccBase_samples_BodyState_m& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    asn1SccBase_TransformWithCovariance_m_fromAsn1(result.pose, asnVal.pose);

    asn1SccBase_TwistWithCovariance_m_fromAsn1(result.velocity, asnVal.velocity);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_BodyState_m_toAsn1(asn1SccBase_samples_BodyState_m& result, const base::samples::BodyState_m& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    asn1SccBase_TransformWithCovariance_m_toAsn1(result.pose, baseObj.pose);

    asn1SccBase_TwistWithCovariance_m_toAsn1(result.velocity, baseObj.velocity);

}


