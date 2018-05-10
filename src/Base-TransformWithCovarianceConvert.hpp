/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_TransformWithCovariance.
 */

#ifndef BASE_TRANSFORMWITHCOVARIANCE_CONVERT
#define BASE_TRANSFORMWITHCOVARIANCE_CONVERT

#include "baseTypes.h"
#include <base/TransformWithCovariance.hpp>
#include <base/TransformWithCovariance.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-QuaterniondConvert.hpp"
#include "Wrappers-Matrix6dConvert.hpp"


//Conversion functions from asn1 to c++ type
void asn1SccBase_TransformWithCovariance_fromAsn1(base::TransformWithCovariance& result, const asn1SccBase_TransformWithCovariance& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_TransformWithCovariance_toAsn1(asn1SccBase_TransformWithCovariance& result, const base::TransformWithCovariance& baseObj);


#endif //BASE_TRANSFORMWITHCOVARIANCE_CONVERT
