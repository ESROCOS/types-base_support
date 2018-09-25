
#include "Wrappers-AngleAxisdConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccWrappers_AngleAxisd_fromAsn1(wrappers::AngleAxis<double>& result, const asn1SccWrappers_AngleAxisd& asnVal)
{
    result.angle = asnVal.angle;

    for(int i = 0; i < 3;i++)
    {
        result.axis[i] = asnVal.axis.arr[i];
    }

}

//Conversion functions from c++ type to asn1

void asn1SccWrappers_AngleAxisd_toAsn1(asn1SccWrappers_AngleAxisd& result, const wrappers::AngleAxis<double>& baseObj)
{
    result.angle = baseObj.angle;

    result.axis.nCount = 3;
    for(int i = 0; i < 3;i++)
    {
        result.axis.arr[i] = baseObj.axis[i];
    }

}


