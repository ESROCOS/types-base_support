
#include "Base-samples-frame-FramePairConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "Base-samples-frame-FrameConvert.hpp"
#include "Base-samples-frame-FrameConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_frame_FramePair_fromAsn1(base::samples::frame::FramePair& result, const asn1SccBase_samples_frame_FramePair& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    asn1SccBase_samples_frame_Frame_fromAsn1(result.first, asnVal.first);

    asn1SccBase_samples_frame_Frame_fromAsn1(result.second, asnVal.second);

    result.id = asnVal.id;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_frame_FramePair_toAsn1(asn1SccBase_samples_frame_FramePair& result, const base::samples::frame::FramePair& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    asn1SccBase_samples_frame_Frame_toAsn1(result.first, baseObj.first);

    asn1SccBase_samples_frame_Frame_toAsn1(result.second, baseObj.second);

    result.id = baseObj.id;

}


