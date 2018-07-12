
#include "Base-samples-DepthMap-DEPTH-MEASUREMENT-STATEConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_fromAsn1(base::samples::DepthMap::DEPTH_MEASUREMENT_STATE& result, const asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccbase_samples_depthmap_depth_measurement_state_measurement_error:
            result = (base::samples::DepthMap::DEPTH_MEASUREMENT_STATE)3; 
            break;
        case asn1Sccbase_samples_depthmap_depth_measurement_state_too_far:
            result = (base::samples::DepthMap::DEPTH_MEASUREMENT_STATE)1; 
            break;
        case asn1Sccbase_samples_depthmap_depth_measurement_state_too_near:
            result = (base::samples::DepthMap::DEPTH_MEASUREMENT_STATE)2; 
            break;
        case asn1Sccbase_samples_depthmap_depth_measurement_state_valid_measurement:
            result = (base::samples::DepthMap::DEPTH_MEASUREMENT_STATE)0; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE_toAsn1(asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE& result, const base::samples::DepthMap::DEPTH_MEASUREMENT_STATE& baseObj)
{
    
    if(baseObj==3)
    {
        result = (asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE)asn1Sccbase_samples_depthmap_depth_measurement_state_measurement_error; 
    }
    else if(baseObj==1)
    {   
        result = (asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE)asn1Sccbase_samples_depthmap_depth_measurement_state_too_far; 
    }
    else if(baseObj==2)
    {   
        result = (asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE)asn1Sccbase_samples_depthmap_depth_measurement_state_too_near; 
    }
    else if(baseObj==0)
    {   
        result = (asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE)asn1Sccbase_samples_depthmap_depth_measurement_state_valid_measurement; 
    }
    

}


