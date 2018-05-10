/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE.
 */

#ifndef BASE_SAMPLES_DEPTHMAP_DEPTH_MEASUREMENT_STATE_CONVERT
#define BASE_SAMPLES_DEPTHMAP_DEPTH_MEASUREMENT_STATE_CONVERT

#include "baseTypes.h"
#include <base/samples/DepthMap.hpp>
#include <base/samples/DepthMap.hpp>
#include <string.h>
#include <stdio.h>



//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_fromAsn1(base::samples::DepthMap::DEPTH_MEASUREMENT_STATE& result, const asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_toAsn1(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE& result, const base::samples::DepthMap::DEPTH_MEASUREMENT_STATE& baseObj);


#endif //BASE_SAMPLES_DEPTHMAP_DEPTH_MEASUREMENT_STATE_CONVERT
