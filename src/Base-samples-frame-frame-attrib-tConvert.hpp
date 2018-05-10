/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_frame_frame_attrib_t.
 */

#ifndef BASE_SAMPLES_FRAME_FRAME_ATTRIB_T_CONVERT
#define BASE_SAMPLES_FRAME_FRAME_ATTRIB_T_CONVERT

#include "baseTypes.h"
#include <base/samples/Frame.hpp>
#include <base/samples/Frame.hpp>
#include <string.h>



//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_frame_frame_attrib_t_fromAsn1(base::samples::frame::frame_attrib_t& result, const asn1SccBase_samples_frame_frame_attrib_t& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_frame_frame_attrib_t_toAsn1(asn1SccBase_samples_frame_frame_attrib_t& result, const base::samples::frame::frame_attrib_t& baseObj);


#endif //BASE_SAMPLES_FRAME_FRAME_ATTRIB_T_CONVERT