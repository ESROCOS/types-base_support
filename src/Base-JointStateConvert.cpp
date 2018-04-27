
#include "Base-JointStateConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_JointState_fromAsn1(base::JointState& result, const asn1SccBase_JointState& asnVal)
{
    result.position = asnVal.position;

    result.speed = asnVal.speed;

    result.effort = asnVal.effort;

    result.raw = asnVal.raw;

    result.acceleration = asnVal.acceleration;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_JointState_toAsn1(asn1SccBase_JointState& result, const base::JointState& baseObj)
{
    result.position = baseObj.position;

    result.speed = baseObj.speed;

    result.effort = baseObj.effort;

    result.raw = baseObj.raw;

    result.acceleration = baseObj.acceleration;

}


