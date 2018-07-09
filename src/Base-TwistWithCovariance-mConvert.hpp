/*
 * Conversion functions for asn1SccBase_TwistWithCovariance_m.
 */

#ifndef BASE_TWISTWITHCOVARIANCE_M_CONVERT
#define BASE_TWISTWITHCOVARIANCE_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_TwistWithCovariance.hpp>
#include <base/m_types/base_TwistWithCovariance.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix6dConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_TwistWithCovariance_m_fromAsn1(base::TwistWithCovariance_m& result, const asn1SccBase_TwistWithCovariance_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_TwistWithCovariance_m_toAsn1(asn1SccBase_TwistWithCovariance_m& result, const base::TwistWithCovariance_m& baseObj);


#endif //BASE_TWISTWITHCOVARIANCE_M_CONVERT
