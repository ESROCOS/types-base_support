
#include "Base-samples-RigidBodyAccelerationConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_RigidBodyAcceleration_fromAsn1(base::samples::RigidBodyAcceleration& result, const asn1SccBase_samples_RigidBodyAcceleration& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);


    wrappers::Vector3d acceleration_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(acceleration_intermediate, asnVal.acceleration);
    Base_Vector3d_fromIntermediate(result.acceleration, acceleration_intermediate);


    wrappers::Matrix3d cov_acceleration_intermediate;
    asn1SccWrappers_Matrix3d_fromAsn1(cov_acceleration_intermediate, asnVal.cov_acceleration);
    Base_Matrix3d_fromIntermediate(result.cov_acceleration, cov_acceleration_intermediate);


    wrappers::Vector3d angular_acceleration_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(angular_acceleration_intermediate, asnVal.angular_acceleration);
    Base_Vector3d_fromIntermediate(result.angular_acceleration, angular_acceleration_intermediate);


    wrappers::Matrix3d cov_angular_acceleration_intermediate;
    asn1SccWrappers_Matrix3d_fromAsn1(cov_angular_acceleration_intermediate, asnVal.cov_angular_acceleration);
    Base_Matrix3d_fromIntermediate(result.cov_angular_acceleration, cov_angular_acceleration_intermediate);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_RigidBodyAcceleration_toAsn1(asn1SccBase_samples_RigidBodyAcceleration& result, const base::samples::RigidBodyAcceleration& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);


    wrappers::Vector3d acceleration_intermediate;
    Base_Vector3d_toIntermediate(acceleration_intermediate, baseObj.acceleration);
    asn1SccWrappers_Vector3d_toAsn1(result.acceleration, acceleration_intermediate);


    wrappers::Matrix3d cov_acceleration_intermediate;
    Base_Matrix3d_toIntermediate(cov_acceleration_intermediate, baseObj.cov_acceleration);
    asn1SccWrappers_Matrix3d_toAsn1(result.cov_acceleration, cov_acceleration_intermediate);


    wrappers::Vector3d angular_acceleration_intermediate;
    Base_Vector3d_toIntermediate(angular_acceleration_intermediate, baseObj.angular_acceleration);
    asn1SccWrappers_Vector3d_toAsn1(result.angular_acceleration, angular_acceleration_intermediate);


    wrappers::Matrix3d cov_angular_acceleration_intermediate;
    Base_Matrix3d_toIntermediate(cov_angular_acceleration_intermediate, baseObj.cov_angular_acceleration);
    asn1SccWrappers_Matrix3d_toAsn1(result.cov_angular_acceleration, cov_angular_acceleration_intermediate);

}


