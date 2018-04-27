
#include "Wrappers-Matrix4dConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccWrappers_Matrix4d_fromAsn1(wrappers::Matrix<double,4,4>& result, const asn1SccWrappers_Matrix4d& asnVal)
{
    for(int i = 0; i < 16;i++)
    {
        result.data[i] = asnVal.data.arr[i];
    }

}

//Conversion functions from c++ type to asn1

void asn1SccWrappers_Matrix4d_toAsn1(asn1SccWrappers_Matrix4d& result, const wrappers::Matrix<double,4,4>& baseObj)
{
    for(int i = 0; i < 16;i++)
    {
        result.data.arr[i] = baseObj.data[i];
    }

}


