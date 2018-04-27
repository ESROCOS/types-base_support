
#include "Base-samples-RigidBodyState-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "T-StringConvert.hpp"
#include "T-StringConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
#include "Wrappers-QuaterniondConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_RigidBodyState_m_fromAsn1(base::samples::RigidBodyState_m& result, const asn1SccBase_samples_RigidBodyState_m& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    asn1SccT_String_fromAsn1(result.sourceFrame, asnVal.sourceframe);

    asn1SccT_String_fromAsn1(result.targetFrame, asnVal.targetframe);

    asn1SccWrappers_Vector3d_fromAsn1(result.position, asnVal.position);

    asn1SccWrappers_Matrix3d_fromAsn1(result.cov_position, asnVal.cov_position);

    asn1SccWrappers_Quaterniond_fromAsn1(result.orientation, asnVal.orientation);

    asn1SccWrappers_Matrix3d_fromAsn1(result.cov_orientation, asnVal.cov_orientation);

    asn1SccWrappers_Vector3d_fromAsn1(result.velocity, asnVal.velocity);

    asn1SccWrappers_Matrix3d_fromAsn1(result.cov_velocity, asnVal.cov_velocity);

    asn1SccWrappers_Vector3d_fromAsn1(result.angular_velocity, asnVal.angular_velocity);

    asn1SccWrappers_Matrix3d_fromAsn1(result.cov_angular_velocity, asnVal.cov_angular_velocity);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_RigidBodyState_m_toAsn1(asn1SccBase_samples_RigidBodyState_m& result, const base::samples::RigidBodyState_m& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    asn1SccT_String_toAsn1(result.sourceframe, baseObj.sourceFrame);

    asn1SccT_String_toAsn1(result.targetframe, baseObj.targetFrame);

    asn1SccWrappers_Vector3d_toAsn1(result.position, baseObj.position);

    asn1SccWrappers_Matrix3d_toAsn1(result.cov_position, baseObj.cov_position);

    asn1SccWrappers_Quaterniond_toAsn1(result.orientation, baseObj.orientation);

    asn1SccWrappers_Matrix3d_toAsn1(result.cov_orientation, baseObj.cov_orientation);

    asn1SccWrappers_Vector3d_toAsn1(result.velocity, baseObj.velocity);

    asn1SccWrappers_Matrix3d_toAsn1(result.cov_velocity, baseObj.cov_velocity);

    asn1SccWrappers_Vector3d_toAsn1(result.angular_velocity, baseObj.angular_velocity);

    asn1SccWrappers_Matrix3d_toAsn1(result.cov_angular_velocity, baseObj.cov_angular_velocity);

}


