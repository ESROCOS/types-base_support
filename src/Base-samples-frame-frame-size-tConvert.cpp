
#include "Base-samples-frame-frame-size-tConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_frame_frame_size_t_fromAsn1(base::samples::frame::frame_size_t& result, const asn1SccBase_samples_frame_frame_size_t& asnVal)
{
    result.width = asnVal.width;

    result.height = asnVal.height;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_frame_frame_size_t_toAsn1(asn1SccBase_samples_frame_frame_size_t& result, const base::samples::frame::frame_size_t& baseObj)
{
    result.width = baseObj.width;

    result.height = baseObj.height;

}


