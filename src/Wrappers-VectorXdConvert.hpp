/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccWrappers_VectorXd.
 */

#ifndef WRAPPERS_VECTORXD_CONVERT
#define WRAPPERS_VECTORXD_CONVERT

#include "baseTypes.h"
#include <base/wrappers/Eigen.hpp>
#include <base/wrappers/Eigen.hpp>
#include <string.h>
#include <stdio.h>


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccWrappers_VectorXd_fromAsn1(wrappers::VectorX<double>& result, const T & asnVal,    asn1SccT_UInt32 length_numWrappers_VectorXd_data=numWrappers_VectorXd_data)
{

    result.data.resize(asnVal.data.nCount);
    for(int i = 0; i < asnVal.data.nCount;i++)
    {
        result.data[i] = asnVal.data.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccWrappers_VectorXd_toAsn1(T & result, const wrappers::VectorX<double>& baseObj,    asn1SccT_UInt32 length_numWrappers_VectorXd_data=numWrappers_VectorXd_data)
{

    if( baseObj.data.size() > numWrappers_VectorXd_data)
    {
        fprintf(stderr, "WARNING:  truncated data of asn1SccWrappers_VectorXd to %lld elements.\n",numWrappers_VectorXd_data);
        result.data.nCount = numWrappers_VectorXd_data;
    }
    else
    {
        result.data.nCount = baseObj.data.size();
    }

    for(int i = 0; i < result.data.nCount ;i++)
    {
        result.data.arr[i]= baseObj.data[i];
    }

}


#endif //WRAPPERS_VECTORXD_CONVERT
