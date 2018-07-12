
#include "Base-samples-DepthMap-PROJECTION-TYPEConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_DepthMap_PROJECTION_TYPE_fromAsn1(base::samples::DepthMap::PROJECTION_TYPE& result, const asn1SccBase_samples_DepthMap_PROJECTION_TYPE& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccbase_samples_depthmap_projection_type_planar:
            result = (base::samples::DepthMap::PROJECTION_TYPE)1; 
            break;
        case asn1Sccbase_samples_depthmap_projection_type_polar:
            result = (base::samples::DepthMap::PROJECTION_TYPE)0; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_DepthMap_PROJECTION_TYPE_toAsn1(asn1SccBase_samples_DepthMap_PROJECTION_TYPE& result, const base::samples::DepthMap::PROJECTION_TYPE& baseObj)
{
    
    if(baseObj==1)
    {
        result = (asn1SccBase_samples_DepthMap_PROJECTION_TYPE)asn1Sccbase_samples_depthmap_projection_type_planar; 
    }
    else if(baseObj==0)
    {   
        result = (asn1SccBase_samples_DepthMap_PROJECTION_TYPE)asn1Sccbase_samples_depthmap_projection_type_polar; 
    }
    

}


