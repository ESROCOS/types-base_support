
#include "Base-TransformWithCovarianceConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-QuaterniondConvert.hpp"
#include "Wrappers-Matrix6dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_TransformWithCovariance_fromAsn1(base::TransformWithCovariance& result, const asn1SccBase_TransformWithCovariance& asnVal)
{

    wrappers::Vector3d translation_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(translation_intermediate, asnVal.translation);
    Base_Vector3d_fromIntermediate(result.translation, translation_intermediate);


    wrappers::Quaterniond orientation_intermediate;
    asn1SccWrappers_Quaterniond_fromAsn1(orientation_intermediate, asnVal.orientation);
    Base_Quaterniond_fromIntermediate(result.orientation, orientation_intermediate);


    wrappers::Matrix6d cov_intermediate;
    asn1SccWrappers_Matrix6d_fromAsn1(cov_intermediate, asnVal.cov);
    Base_Matrix6d_fromIntermediate(result.cov, cov_intermediate);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_TransformWithCovariance_toAsn1(asn1SccBase_TransformWithCovariance& result, const base::TransformWithCovariance& baseObj)
{

    wrappers::Vector3d translation_intermediate;
    Base_Vector3d_toIntermediate(translation_intermediate, baseObj.translation);
    asn1SccWrappers_Vector3d_toAsn1(result.translation, translation_intermediate);


    wrappers::Quaterniond orientation_intermediate;
    Base_Quaterniond_toIntermediate(orientation_intermediate, baseObj.orientation);
    asn1SccWrappers_Quaterniond_toAsn1(result.orientation, orientation_intermediate);


    wrappers::Matrix6d cov_intermediate;
    Base_Matrix6d_toIntermediate(cov_intermediate, baseObj.cov);
    asn1SccWrappers_Matrix6d_toAsn1(result.cov, cov_intermediate);

}


