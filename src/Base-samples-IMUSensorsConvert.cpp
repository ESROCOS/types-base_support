
#include "Base-samples-IMUSensorsConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_IMUSensors_fromAsn1(base::samples::IMUSensors& result, const asn1SccBase_samples_IMUSensors& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);


    wrappers::Vector3d acc_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(acc_intermediate, asnVal.acc);
    Base_Vector3d_fromIntermediate(result.acc, acc_intermediate);


    wrappers::Vector3d gyro_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(gyro_intermediate, asnVal.gyro);
    Base_Vector3d_fromIntermediate(result.gyro, gyro_intermediate);


    wrappers::Vector3d mag_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(mag_intermediate, asnVal.mag);
    Base_Vector3d_fromIntermediate(result.mag, mag_intermediate);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_IMUSensors_toAsn1(asn1SccBase_samples_IMUSensors& result, const base::samples::IMUSensors& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);


    wrappers::Vector3d acc_intermediate;
    Base_Vector3d_toIntermediate(acc_intermediate, baseObj.acc);
    asn1SccWrappers_Vector3d_toAsn1(result.acc, acc_intermediate);


    wrappers::Vector3d gyro_intermediate;
    Base_Vector3d_toIntermediate(gyro_intermediate, baseObj.gyro);
    asn1SccWrappers_Vector3d_toAsn1(result.gyro, gyro_intermediate);


    wrappers::Vector3d mag_intermediate;
    Base_Vector3d_toIntermediate(mag_intermediate, baseObj.mag);
    asn1SccWrappers_Vector3d_toAsn1(result.mag, mag_intermediate);

}


