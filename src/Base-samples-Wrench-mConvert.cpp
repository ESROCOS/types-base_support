
#include "Base-samples-Wrench-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Base-TimeConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_Wrench_m_fromAsn1(base::samples::Wrench_m& result, const asn1SccBase_samples_Wrench_m& asnVal)
{
    asn1SccWrappers_Vector3d_fromAsn1(result.force, asnVal.force);

    asn1SccWrappers_Vector3d_fromAsn1(result.torque, asnVal.torque);

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_Wrench_m_toAsn1(asn1SccBase_samples_Wrench_m& result, const base::samples::Wrench_m& baseObj)
{
    asn1SccWrappers_Vector3d_toAsn1(result.force, baseObj.force);

    asn1SccWrappers_Vector3d_toAsn1(result.torque, baseObj.torque);

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

}


