
#include "Wrappers-Matrix2dConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccWrappers_Matrix2d_fromAsn1(wrappers::Matrix<double,2,2>& result, const asn1SccWrappers_Matrix2d& asnVal)
{
    for(int i = 0; i < 4;i++)
    {
        result.data[i] = asnVal.data.arr[i];
    }

}

//Conversion functions from c++ type to asn1

void asn1SccWrappers_Matrix2d_toAsn1(asn1SccWrappers_Matrix2d& result, const wrappers::Matrix<double,2,2>& baseObj)
{
    result.data.nCount = 4;
    for(int i = 0; i < 4;i++)
    {
        result.data.arr[i] = baseObj.data[i];
    }

}


