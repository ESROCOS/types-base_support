
#include "Base-TwistWithCovariance-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix6dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_TwistWithCovariance_m_fromAsn1(base::TwistWithCovariance_m& result, const asn1SccBase_TwistWithCovariance_m& asnVal)
{
    asn1SccWrappers_Vector3d_fromAsn1(result.vel, asnVal.vel);

    asn1SccWrappers_Vector3d_fromAsn1(result.rot, asnVal.rot);

    asn1SccWrappers_Matrix6d_fromAsn1(result.cov, asnVal.cov);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_TwistWithCovariance_m_toAsn1(asn1SccBase_TwistWithCovariance_m& result, const base::TwistWithCovariance_m& baseObj)
{
    asn1SccWrappers_Vector3d_toAsn1(result.vel, baseObj.vel);

    asn1SccWrappers_Vector3d_toAsn1(result.rot, baseObj.rot);

    asn1SccWrappers_Matrix6d_toAsn1(result.cov, baseObj.cov);

}


