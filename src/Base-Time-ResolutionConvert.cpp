
#include "Base-Time-ResolutionConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_Time_Resolution_fromAsn1(base::Time::Resolution& result, const asn1SccBase_Time_Resolution& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccbase_time_resolution_microseconds:
            result = (base::Time::Resolution)1000000; 
            break;
        case asn1Sccbase_time_resolution_milliseconds:
            result = (base::Time::Resolution)1000; 
            break;
        case asn1Sccbase_time_resolution_seconds:
            result = (base::Time::Resolution)1; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Time_Resolution_toAsn1(asn1SccBase_Time_Resolution& result, const base::Time::Resolution& baseObj)
{
    
    if(baseObj==1000000)
    {
        result = (asn1SccBase_Time_Resolution)asn1Sccbase_time_resolution_microseconds; 
    }
    else if(baseObj==1000)
    {   
        result = (asn1SccBase_Time_Resolution)asn1Sccbase_time_resolution_milliseconds; 
    }
    else if(baseObj==1)
    {   
        result = (asn1SccBase_Time_Resolution)asn1Sccbase_time_resolution_seconds; 
    }
    

}


