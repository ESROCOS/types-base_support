/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_TwistWithCovariance.
 */

#ifndef BASE_TWISTWITHCOVARIANCE_CONVERT
#define BASE_TWISTWITHCOVARIANCE_CONVERT

#include "baseTypes.h"
#include <base/TwistWithCovariance.hpp>
#include <base/TwistWithCovariance.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix6dConvert.hpp"


//Conversion functions from asn1 to c++ type
void asn1SccBase_TwistWithCovariance_fromAsn1(base::TwistWithCovariance& result, const asn1SccBase_TwistWithCovariance& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_TwistWithCovariance_toAsn1(asn1SccBase_TwistWithCovariance& result, const base::TwistWithCovariance& baseObj);


#endif //BASE_TWISTWITHCOVARIANCE_CONVERT
