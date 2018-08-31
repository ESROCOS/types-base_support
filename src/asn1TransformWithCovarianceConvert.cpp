/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1TransformWithCovariance (implementation).
 */

#include "asn1TransformWithCovarianceConvert.hpp"
#include "asn1Matrix6dConvert.hpp"
#include "asn1OrientationConvert.hpp"
#include "asn1Vector3dConvert.hpp"

void TransformWithCovariance_fromAsn1(base::TransformWithCovariance& result, const asn1SccTransformWithCovariance& asnVal)
{
    Vector3d_fromAsn1(result.translation, asnVal.data.translation);
    Orientation_fromAsn1(result.orientation, asnVal.data.orientation);
    Matrix6d_fromAsn1(result.cov, asnVal.data.cov);
}


void TransformWithCovariance_toAsn1(asn1SccTransformWithCovariance& result, const base::TransformWithCovariance& baseObj)
{
    Vector3d_toAsn1(result.data.translation, baseObj.translation);
    Orientation_toAsn1(result.data.orientation, baseObj.orientation);
    Matrix6d_toAsn1(result.data.cov, baseObj.cov);
}


