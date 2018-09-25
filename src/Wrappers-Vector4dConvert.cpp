
#include "Wrappers-Vector4dConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccWrappers_Vector4d_fromAsn1(wrappers::Matrix<double,4,1>& result, const asn1SccWrappers_Vector4d& asnVal)
{
    for(int i = 0; i < 4;i++)
    {
        result.data[i] = asnVal.data.arr[i];
    }

}

//Conversion functions from c++ type to asn1

void asn1SccWrappers_Vector4d_toAsn1(asn1SccWrappers_Vector4d& result, const wrappers::Matrix<double,4,1>& baseObj)
{
    result.data.nCount = 4;
    for(int i = 0; i < 4;i++)
    {
        result.data.arr[i] = baseObj.data[i];
    }

}


