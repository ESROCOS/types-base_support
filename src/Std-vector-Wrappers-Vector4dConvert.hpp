/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccStd_vector_Wrappers_Vector4d.
 */

#ifndef STD_VECTOR_WRAPPERS_VECTOR4D_CONVERT
#define STD_VECTOR_WRAPPERS_VECTOR4D_CONVERT

#include "baseTypes.h"
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector4dConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccStd_vector_Wrappers_Vector4d_fromAsn1(std::vector<wrappers::Matrix<double,4,1>>& result, const T & asnVal,    asn1SccT_UInt32 length_numStd_vector_Wrappers_Vector4d=numStd_vector_Wrappers_Vector4d)
{

    for (int i = 0; i < length_numStd_vector_Wrappers_Vector4d; i++)
    {
		asn1SccWrappers_Vector4d_fromAsn1(result[i], asnVal.arr[i]);
    }
}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccStd_vector_Wrappers_Vector4d_toAsn1(T & result, const std::vector<wrappers::Matrix<double,4,1>>& baseObj,    asn1SccT_UInt32 length_numStd_vector_Wrappers_Vector4d=numStd_vector_Wrappers_Vector4d)
{

    for (int i = 0; i < length_numStd_vector_Wrappers_Vector4d; i++)
    {
        result.arr[i] = baseObj[i];
    }
    result.nCount = length_numStd_vector_Wrappers_Vector4d;
}


#endif //STD_VECTOR_WRAPPERS_VECTOR4D_CONVERT
