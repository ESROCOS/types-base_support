
#include "Base-JointLimitRangeConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-JointStateConvert.hpp"
#include "Base-JointStateConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_JointLimitRange_fromAsn1(base::JointLimitRange& result, const asn1SccBase_JointLimitRange& asnVal)
{
    asn1SccBase_JointState_fromAsn1(result.min, asnVal.min);

    asn1SccBase_JointState_fromAsn1(result.max, asnVal.max);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_JointLimitRange_toAsn1(asn1SccBase_JointLimitRange& result, const base::JointLimitRange& baseObj)
{
    asn1SccBase_JointState_toAsn1(result.min, baseObj.min);

    asn1SccBase_JointState_toAsn1(result.max, baseObj.max);

}


