
#include "Base-Wrench-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_Wrench_m_fromAsn1(base::Wrench_m& result, const asn1SccBase_Wrench_m& asnVal)
{
    asn1SccWrappers_Vector3d_fromAsn1(result.force, asnVal.force);

    asn1SccWrappers_Vector3d_fromAsn1(result.torque, asnVal.torque);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Wrench_m_toAsn1(asn1SccBase_Wrench_m& result, const base::Wrench_m& baseObj)
{
    asn1SccWrappers_Vector3d_toAsn1(result.force, baseObj.force);

    asn1SccWrappers_Vector3d_toAsn1(result.torque, baseObj.torque);

}


