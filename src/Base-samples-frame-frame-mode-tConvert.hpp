/*
 * Conversion functions for asn1SccBase_samples_frame_frame_mode_t.
 */

#ifndef BASE_SAMPLES_FRAME_FRAME_MODE_T_CONVERT
#define BASE_SAMPLES_FRAME_FRAME_MODE_T_CONVERT

#include "baseTypes.h"
#include <base/samples/Frame.hpp>
#include <base/samples/Frame.hpp>
#include <string.h>
#include <stdio.h>


//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_frame_frame_mode_t_fromAsn1(base::samples::frame::frame_mode_t& result, const asn1SccBase_samples_frame_frame_mode_t& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_frame_frame_mode_t_toAsn1(asn1SccBase_samples_frame_frame_mode_t& result, const base::samples::frame::frame_mode_t& baseObj);


#endif //BASE_SAMPLES_FRAME_FRAME_MODE_T_CONVERT
