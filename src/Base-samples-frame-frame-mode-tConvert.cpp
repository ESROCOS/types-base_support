
#include "Base-samples-frame-frame-mode-tConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_frame_frame_mode_t_fromAsn1(base::samples::frame::frame_mode_t& result, const asn1SccBase_samples_frame_frame_mode_t& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccbase_samples_frame_frame_mode_t_compressed_modes:
            result = (base::samples::frame::frame_mode_t)256; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_bayer:
            result = (base::samples::frame::frame_mode_t)128; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_bayer_bggr:
            result = (base::samples::frame::frame_mode_t)131; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_bayer_gbrg:
            result = (base::samples::frame::frame_mode_t)132; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_bayer_grbg:
            result = (base::samples::frame::frame_mode_t)130; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_bayer_rggb:
            result = (base::samples::frame::frame_mode_t)129; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_bgr:
            result = (base::samples::frame::frame_mode_t)4; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_grayscale:
            result = (base::samples::frame::frame_mode_t)1; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_jpeg:
            result = (base::samples::frame::frame_mode_t)258; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_pjpg:
            result = (base::samples::frame::frame_mode_t)257; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_png:
            result = (base::samples::frame::frame_mode_t)259; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_rgb:
            result = (base::samples::frame::frame_mode_t)2; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_rgb32:
            result = (base::samples::frame::frame_mode_t)5; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_undefined:
            result = (base::samples::frame::frame_mode_t)0; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_mode_uyvy:
            result = (base::samples::frame::frame_mode_t)3; 
            break;
        case asn1Sccbase_samples_frame_frame_mode_t_raw_modes:
            result = (base::samples::frame::frame_mode_t)128; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_frame_frame_mode_t_toAsn1(asn1SccBase_samples_frame_frame_mode_t& result, const base::samples::frame::frame_mode_t& baseObj)
{
    
    if(baseObj==256)
    {
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_compressed_modes; 
    }
    else if(baseObj==128)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_bayer; 
    }
    else if(baseObj==131)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_bayer_bggr; 
    }
    else if(baseObj==132)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_bayer_gbrg; 
    }
    else if(baseObj==130)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_bayer_grbg; 
    }
    else if(baseObj==129)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_bayer_rggb; 
    }
    else if(baseObj==4)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_bgr; 
    }
    else if(baseObj==1)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_grayscale; 
    }
    else if(baseObj==258)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_jpeg; 
    }
    else if(baseObj==257)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_pjpg; 
    }
    else if(baseObj==259)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_png; 
    }
    else if(baseObj==2)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_rgb; 
    }
    else if(baseObj==5)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_rgb32; 
    }
    else if(baseObj==0)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_undefined; 
    }
    else if(baseObj==3)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_mode_uyvy; 
    }
    else if(baseObj==128)
    {   
        result = (asn1SccBase_samples_frame_frame_mode_t)asn1Sccbase_samples_frame_frame_mode_t_raw_modes; 
    }
    

}


