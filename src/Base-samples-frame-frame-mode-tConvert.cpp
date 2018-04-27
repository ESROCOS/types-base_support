
#include "Base-samples-frame-frame-mode-tConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_frame_frame_mode_t_fromAsn1(base::samples::frame::frame_mode_t& result, const asn1SccBase_samples_frame_frame_mode_t& asnVal)
{
    result = (base::samples::frame::frame_mode_t) asnVal;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_frame_frame_mode_t_toAsn1(asn1SccBase_samples_frame_frame_mode_t& result, const base::samples::frame::frame_mode_t& baseObj)
{
    result = (asn1SccBase_samples_frame_frame_mode_t) baseObj;

}


