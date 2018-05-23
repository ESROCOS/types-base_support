/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_TransformWithCovariance_m.
 */

#ifndef BASE_TRANSFORMWITHCOVARIANCE_M_CONVERT
#define BASE_TRANSFORMWITHCOVARIANCE_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_TransformWithCovariance.hpp>
#include <base/m_types/base_TransformWithCovariance.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-QuaterniondConvert.hpp"
#include "Wrappers-Matrix6dConvert.hpp"


//Conversion functions from asn1 to c++ type
void asn1SccBase_TransformWithCovariance_m_fromAsn1(base::TransformWithCovariance_m& result, const asn1SccBase_TransformWithCovariance_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_TransformWithCovariance_m_toAsn1(asn1SccBase_TransformWithCovariance_m& result, const base::TransformWithCovariance_m& baseObj);


#endif //BASE_TRANSFORMWITHCOVARIANCE_M_CONVERT
