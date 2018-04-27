
#include "Base-samples-IMUSensors-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_IMUSensors_m_fromAsn1(base::samples::IMUSensors_m& result, const asn1SccBase_samples_IMUSensors_m& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    asn1SccWrappers_Vector3d_fromAsn1(result.acc, asnVal.acc);

    asn1SccWrappers_Vector3d_fromAsn1(result.gyro, asnVal.gyro);

    asn1SccWrappers_Vector3d_fromAsn1(result.mag, asnVal.mag);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_IMUSensors_m_toAsn1(asn1SccBase_samples_IMUSensors_m& result, const base::samples::IMUSensors_m& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    asn1SccWrappers_Vector3d_toAsn1(result.acc, baseObj.acc);

    asn1SccWrappers_Vector3d_toAsn1(result.gyro, baseObj.gyro);

    asn1SccWrappers_Vector3d_toAsn1(result.mag, baseObj.mag);

}


