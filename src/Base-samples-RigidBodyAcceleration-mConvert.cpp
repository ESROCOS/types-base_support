
#include "Base-samples-RigidBodyAcceleration-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_RigidBodyAcceleration_m_fromAsn1(base::samples::RigidBodyAcceleration_m& result, const asn1SccBase_samples_RigidBodyAcceleration_m& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    asn1SccWrappers_Vector3d_fromAsn1(result.acceleration, asnVal.acceleration);

    asn1SccWrappers_Matrix3d_fromAsn1(result.cov_acceleration, asnVal.cov_acceleration);

    asn1SccWrappers_Vector3d_fromAsn1(result.angular_acceleration, asnVal.angular_acceleration);

    asn1SccWrappers_Matrix3d_fromAsn1(result.cov_angular_acceleration, asnVal.cov_angular_acceleration);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_RigidBodyAcceleration_m_toAsn1(asn1SccBase_samples_RigidBodyAcceleration_m& result, const base::samples::RigidBodyAcceleration_m& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    asn1SccWrappers_Vector3d_toAsn1(result.acceleration, baseObj.acceleration);

    asn1SccWrappers_Matrix3d_toAsn1(result.cov_acceleration, baseObj.cov_acceleration);

    asn1SccWrappers_Vector3d_toAsn1(result.angular_acceleration, baseObj.angular_acceleration);

    asn1SccWrappers_Matrix3d_toAsn1(result.cov_angular_acceleration, baseObj.cov_angular_acceleration);

}


