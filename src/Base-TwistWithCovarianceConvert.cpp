
#include "Base-TwistWithCovarianceConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix6dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_TwistWithCovariance_fromAsn1(base::TwistWithCovariance& result, const asn1SccBase_TwistWithCovariance& asnVal)
{

    wrappers::Vector3d vel_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(vel_intermediate, asnVal.vel);
    Base_Vector3d_fromIntermediate(result.vel, vel_intermediate);


    wrappers::Vector3d rot_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(rot_intermediate, asnVal.rot);
    Base_Vector3d_fromIntermediate(result.rot, rot_intermediate);


    wrappers::Matrix6d cov_intermediate;
    asn1SccWrappers_Matrix6d_fromAsn1(cov_intermediate, asnVal.cov);
    Base_Matrix6d_fromIntermediate(result.cov, cov_intermediate);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_TwistWithCovariance_toAsn1(asn1SccBase_TwistWithCovariance& result, const base::TwistWithCovariance& baseObj)
{

    wrappers::Vector3d vel_intermediate;
    Base_Vector3d_toIntermediate(vel_intermediate, baseObj.vel);
    asn1SccWrappers_Vector3d_toAsn1(result.vel, vel_intermediate);


    wrappers::Vector3d rot_intermediate;
    Base_Vector3d_toIntermediate(rot_intermediate, baseObj.rot);
    asn1SccWrappers_Vector3d_toAsn1(result.rot, rot_intermediate);


    wrappers::Matrix6d cov_intermediate;
    Base_Matrix6d_toIntermediate(cov_intermediate, baseObj.cov);
    asn1SccWrappers_Matrix6d_toAsn1(result.cov, cov_intermediate);

}


