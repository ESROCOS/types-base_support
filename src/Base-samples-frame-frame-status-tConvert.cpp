
#include "Base-samples-frame-frame-status-tConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_frame_frame_status_t_fromAsn1(base::samples::frame::frame_status_t& result, const asn1SccBase_samples_frame_frame_status_t& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccbase_samples_frame_frame_status_t_status_empty:
            result = (base::samples::frame::frame_status_t)0; 
            break;
        case asn1Sccbase_samples_frame_frame_status_t_status_invalid:
            result = (base::samples::frame::frame_status_t)2; 
            break;
        case asn1Sccbase_samples_frame_frame_status_t_status_valid:
            result = (base::samples::frame::frame_status_t)1; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_frame_frame_status_t_toAsn1(asn1SccBase_samples_frame_frame_status_t& result, const base::samples::frame::frame_status_t& baseObj)
{
    
    if(baseObj==0)
    {
        result = (asn1SccBase_samples_frame_frame_status_t)asn1Sccbase_samples_frame_frame_status_t_status_empty; 
    }
    else if(baseObj==2)
    {   
        result = (asn1SccBase_samples_frame_frame_status_t)asn1Sccbase_samples_frame_frame_status_t_status_invalid; 
    }
    else if(baseObj==1)
    {   
        result = (asn1SccBase_samples_frame_frame_status_t)asn1Sccbase_samples_frame_frame_status_t_status_valid; 
    }
    

}


