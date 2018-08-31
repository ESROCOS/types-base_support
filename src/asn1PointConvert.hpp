/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Point (header).
 */

#ifndef ASN1POINTCONVERT_HPP
#define ASN1POINTCONVERT_HPP

#include "baseTypes.h"
#include "base/Eigen.hpp"

// Conversion functions
void Point_fromAsn1(base::Vector3d& result, const asn1SccPoint& asnVal);
void Point_toAsn1(asn1SccPoint& result, const base::Vector3d& baseObj);

#endif //ASN1POINTCONVERT_HPP
