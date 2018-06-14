/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_BodyState_m.
 */

#ifndef BASE_SAMPLES_BODYSTATE_M_CONVERT
#define BASE_SAMPLES_BODYSTATE_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_samples_BodyState.hpp>
#include <base/m_types/base_samples_BodyState.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Base-TransformWithCovariance-mConvert.hpp"
#include "Base-TwistWithCovariance-mConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_BodyState_m_fromAsn1(base::samples::BodyState_m& result, const asn1SccBase_samples_BodyState_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_BodyState_m_toAsn1(asn1SccBase_samples_BodyState_m& result, const base::samples::BodyState_m& baseObj);


#endif //BASE_SAMPLES_BODYSTATE_M_CONVERT
