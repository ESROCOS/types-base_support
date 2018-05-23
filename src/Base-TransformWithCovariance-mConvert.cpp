
#include "Base-TransformWithCovariance-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-QuaterniondConvert.hpp"
#include "Wrappers-Matrix6dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_TransformWithCovariance_m_fromAsn1(base::TransformWithCovariance_m& result, const asn1SccBase_TransformWithCovariance_m& asnVal)
{
    asn1SccWrappers_Vector3d_fromAsn1(result.translation, asnVal.translation);

    asn1SccWrappers_Quaterniond_fromAsn1(result.orientation, asnVal.orientation);

    asn1SccWrappers_Matrix6d_fromAsn1(result.cov, asnVal.cov);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_TransformWithCovariance_m_toAsn1(asn1SccBase_TransformWithCovariance_m& result, const base::TransformWithCovariance_m& baseObj)
{
    asn1SccWrappers_Vector3d_toAsn1(result.translation, baseObj.translation);

    asn1SccWrappers_Quaterniond_toAsn1(result.orientation, baseObj.orientation);

    asn1SccWrappers_Matrix6d_toAsn1(result.cov, baseObj.cov);

}


