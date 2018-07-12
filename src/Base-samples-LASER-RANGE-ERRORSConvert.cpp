
#include "Base-samples-LASER-RANGE-ERRORSConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_LASER_RANGE_ERRORS_fromAsn1(base::samples::LASER_RANGE_ERRORS& result, const asn1SccBase_samples_LASER_RANGE_ERRORS& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccbase_samples_laser_range_errors_end_laser_range_errors:
            result = (base::samples::LASER_RANGE_ERRORS)6; 
            break;
        case asn1Sccbase_samples_laser_range_errors_max_range_error:
            result = (base::samples::LASER_RANGE_ERRORS)5; 
            break;
        case asn1Sccbase_samples_laser_range_errors_measurement_error:
            result = (base::samples::LASER_RANGE_ERRORS)3; 
            break;
        case asn1Sccbase_samples_laser_range_errors_other_range_errors:
            result = (base::samples::LASER_RANGE_ERRORS)4; 
            break;
        case asn1Sccbase_samples_laser_range_errors_too_far:
            result = (base::samples::LASER_RANGE_ERRORS)1; 
            break;
        case asn1Sccbase_samples_laser_range_errors_too_near:
            result = (base::samples::LASER_RANGE_ERRORS)2; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_LASER_RANGE_ERRORS_toAsn1(asn1SccBase_samples_LASER_RANGE_ERRORS& result, const base::samples::LASER_RANGE_ERRORS& baseObj)
{
    
    if(baseObj==6)
    {
        result = (asn1SccBase_samples_LASER_RANGE_ERRORS)asn1Sccbase_samples_laser_range_errors_end_laser_range_errors; 
    }
    else if(baseObj==5)
    {   
        result = (asn1SccBase_samples_LASER_RANGE_ERRORS)asn1Sccbase_samples_laser_range_errors_max_range_error; 
    }
    else if(baseObj==3)
    {   
        result = (asn1SccBase_samples_LASER_RANGE_ERRORS)asn1Sccbase_samples_laser_range_errors_measurement_error; 
    }
    else if(baseObj==4)
    {   
        result = (asn1SccBase_samples_LASER_RANGE_ERRORS)asn1Sccbase_samples_laser_range_errors_other_range_errors; 
    }
    else if(baseObj==1)
    {   
        result = (asn1SccBase_samples_LASER_RANGE_ERRORS)asn1Sccbase_samples_laser_range_errors_too_far; 
    }
    else if(baseObj==2)
    {   
        result = (asn1SccBase_samples_LASER_RANGE_ERRORS)asn1Sccbase_samples_laser_range_errors_too_near; 
    }
    

}


