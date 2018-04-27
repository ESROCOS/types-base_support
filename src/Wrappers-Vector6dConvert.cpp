
#include "Wrappers-Vector6dConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccWrappers_Vector6d_fromAsn1(wrappers::Matrix<double,6,1>& result, const asn1SccWrappers_Vector6d& asnVal)
{
    for(int i = 0; i < 6;i++)
    {
        result.data[i] = asnVal.data.arr[i];
    }

}

//Conversion functions from c++ type to asn1

void asn1SccWrappers_Vector6d_toAsn1(asn1SccWrappers_Vector6d& result, const wrappers::Matrix<double,6,1>& baseObj)
{
    for(int i = 0; i < 6;i++)
    {
        result.data.arr[i] = baseObj.data[i];
    }

}


