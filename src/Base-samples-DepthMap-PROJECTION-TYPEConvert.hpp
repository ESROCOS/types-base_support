/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_DepthMap_PROJECTION_TYPE.
 */

#ifndef BASE_SAMPLES_DEPTHMAP_PROJECTION_TYPE_CONVERT
#define BASE_SAMPLES_DEPTHMAP_PROJECTION_TYPE_CONVERT

#include "baseTypes.h"
#include <base/samples/DepthMap.hpp>
#include <base/samples/DepthMap.hpp>
#include <string.h>



//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_DepthMap_PROJECTION_TYPE_fromAsn1(base::samples::DepthMap::PROJECTION_TYPE& result, const asn1SccBase_samples_DepthMap_PROJECTION_TYPE& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_DepthMap_PROJECTION_TYPE_toAsn1(asn1SccBase_samples_DepthMap_PROJECTION_TYPE& result, const base::samples::DepthMap::PROJECTION_TYPE& baseObj);


#endif //BASE_SAMPLES_DEPTHMAP_PROJECTION_TYPE_CONVERT