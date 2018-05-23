/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_BodyState.
 */

#ifndef BASE_SAMPLES_BODYSTATE_CONVERT
#define BASE_SAMPLES_BODYSTATE_CONVERT

#include "baseTypes.h"
#include <base/samples/BodyState.hpp>
#include <base/samples/BodyState.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Base-TransformWithCovarianceConvert.hpp"
#include "Base-TwistWithCovarianceConvert.hpp"


//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_BodyState_fromAsn1(base::samples::BodyState& result, const asn1SccBase_samples_BodyState& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_BodyState_toAsn1(asn1SccBase_samples_BodyState& result, const base::samples::BodyState& baseObj);


#endif //BASE_SAMPLES_BODYSTATE_CONVERT
