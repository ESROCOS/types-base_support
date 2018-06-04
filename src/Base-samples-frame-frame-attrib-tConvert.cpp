
#include "Base-samples-frame-frame-attrib-tConvert.hpp"

#include "OpaqueConversion.hpp"

#include "T-StringConvert.hpp"
#include "T-StringConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_frame_frame_attrib_t_fromAsn1(base::samples::frame::frame_attrib_t& result, const asn1SccBase_samples_frame_frame_attrib_t& asnVal)
{
    asn1SccT_String_fromAsn1(result.data_, asnVal.data);

    asn1SccT_String_fromAsn1(result.name_, asnVal.name_val);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_frame_frame_attrib_t_toAsn1(asn1SccBase_samples_frame_frame_attrib_t& result, const base::samples::frame::frame_attrib_t& baseObj)
{
    asn1SccT_String_toAsn1(result.data, baseObj.data_);

    asn1SccT_String_toAsn1(result.name_val, baseObj.name_);

}


