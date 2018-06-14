/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_DepthMap_UNIT_AXIS.
 */

#ifndef BASE_SAMPLES_DEPTHMAP_UNIT_AXIS_CONVERT
#define BASE_SAMPLES_DEPTHMAP_UNIT_AXIS_CONVERT

#include "baseTypes.h"
#include <base/samples/DepthMap.hpp>
#include <base/samples/DepthMap.hpp>
#include <string.h>
#include <stdio.h>


//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_DepthMap_UNIT_AXIS_fromAsn1(base::samples::DepthMap::UNIT_AXIS& result, const asn1SccBase_samples_DepthMap_UNIT_AXIS& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_DepthMap_UNIT_AXIS_toAsn1(asn1SccBase_samples_DepthMap_UNIT_AXIS& result, const base::samples::DepthMap::UNIT_AXIS& baseObj);


#endif //BASE_SAMPLES_DEPTHMAP_UNIT_AXIS_CONVERT
