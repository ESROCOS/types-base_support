
#include "Base-samples-DepthMap-UNIT-AXISConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_DepthMap_UNIT_AXIS_fromAsn1(base::samples::DepthMap::UNIT_AXIS& result, const asn1SccBase_samples_DepthMap_UNIT_AXIS& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccbase_samples_depthmap_unit_axis_unit_x:
            result = (base::samples::DepthMap::UNIT_AXIS)0; 
            break;
        case asn1Sccbase_samples_depthmap_unit_axis_unit_y:
            result = (base::samples::DepthMap::UNIT_AXIS)1; 
            break;
        case asn1Sccbase_samples_depthmap_unit_axis_unit_z:
            result = (base::samples::DepthMap::UNIT_AXIS)2; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_DepthMap_UNIT_AXIS_toAsn1(asn1SccBase_samples_DepthMap_UNIT_AXIS& result, const base::samples::DepthMap::UNIT_AXIS& baseObj)
{
    
    if(baseObj==0)
    {
        result = (asn1SccBase_samples_DepthMap_UNIT_AXIS)asn1Sccbase_samples_depthmap_unit_axis_unit_x; 
    }
    else if(baseObj==1)
    {   
        result = (asn1SccBase_samples_DepthMap_UNIT_AXIS)asn1Sccbase_samples_depthmap_unit_axis_unit_y; 
    }
    else if(baseObj==2)
    {   
        result = (asn1SccBase_samples_DepthMap_UNIT_AXIS)asn1Sccbase_samples_depthmap_unit_axis_unit_z; 
    }
    

}


