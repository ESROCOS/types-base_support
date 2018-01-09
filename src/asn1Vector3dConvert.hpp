/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Vector3d (header).
 */

#ifndef ASN1VECTOR3DCONVERT_HPP
#define ASN1VECTOR3DCONVERT_HPP

#include "baseTypes.h"
#include "base/Eigen.hpp"

// Conversion functions
void Vector3d_fromAsn1(base::Vector3d& result, const asn1SccVector3d& asnVal);
void Vector3d_toAsn1(asn1SccVector3d& result, const base::Vector3d& baseObj);

#endif //ASN1VECTOR3DCONVERT_HPP
