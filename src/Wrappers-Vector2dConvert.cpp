
#include "Wrappers-Vector2dConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccWrappers_Vector2d_fromAsn1(wrappers::Matrix<double,2,1>& result, const asn1SccWrappers_Vector2d& asnVal)
{
    for(int i = 0; i < 2;i++)
    {
        result.data[i] = asnVal.data.arr[i];
    }

}

//Conversion functions from c++ type to asn1

void asn1SccWrappers_Vector2d_toAsn1(asn1SccWrappers_Vector2d& result, const wrappers::Matrix<double,2,1>& baseObj)
{
    result.data.nCount = 2;
    for(int i = 0; i < 2;i++)
    {
        result.data.arr[i] = baseObj.data[i];
    }

}


