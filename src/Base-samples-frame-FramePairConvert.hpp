/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_frame_FramePair.
 */

#ifndef BASE_SAMPLES_FRAME_FRAMEPAIR_CONVERT
#define BASE_SAMPLES_FRAME_FRAMEPAIR_CONVERT

#include "baseTypes.h"
#include <base/samples/Frame.hpp>
#include <base/samples/Frame.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Base-samples-frame-FrameConvert.hpp"
#include "Base-samples-frame-FrameConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_frame_FramePair_fromAsn1(base::samples::frame::FramePair& result, const asn1SccBase_samples_frame_FramePair& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_frame_FramePair_toAsn1(asn1SccBase_samples_frame_FramePair& result, const base::samples::frame::FramePair& baseObj);


#endif //BASE_SAMPLES_FRAME_FRAMEPAIR_CONVERT
