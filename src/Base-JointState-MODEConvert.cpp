
#include "Base-JointState-MODEConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_JointState_MODE_fromAsn1(base::JointState::MODE& result, const asn1SccBase_JointState_MODE& asnVal)
{
    result = (base::JointState::MODE) asnVal;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_JointState_MODE_toAsn1(asn1SccBase_JointState_MODE& result, const base::JointState::MODE& baseObj)
{
    result = (asn1SccBase_JointState_MODE) baseObj;

}


