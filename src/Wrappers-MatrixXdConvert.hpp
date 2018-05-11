/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccWrappers_MatrixXd.
 */

#ifndef WRAPPERS_MATRIXXD_CONVERT
#define WRAPPERS_MATRIXXD_CONVERT

#include "baseTypes.h"
#include <base/wrappers/Eigen.hpp>
#include <base/wrappers/Eigen.hpp>
#include <string.h>
#include <stdio.h>



//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccWrappers_MatrixXd_fromAsn1(wrappers::MatrixX<double>& result, const T & asnVal,    asn1SccT_UInt32 length_numWrappers_MatrixXd_data=numWrappers_MatrixXd_data)
{

    result.rows = asnVal.rows;

    result.cols = asnVal.cols;

    result.data.resize(asnVal.data.nCount);
    for(int i = 0; i < asnVal.data.nCount;i++)
    {
        result.data[i] = asnVal.data.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccWrappers_MatrixXd_toAsn1(T & result, const wrappers::MatrixX<double>& baseObj,    asn1SccT_UInt32 length_numWrappers_MatrixXd_data=numWrappers_MatrixXd_data)
{


    result.rows = baseObj.rows;


    result.cols = baseObj.cols;

    if( baseObj.data.size() > numWrappers_MatrixXd_data)
    {
        fprintf(stderr, "WARNING:  truncated data of asn1SccWrappers_MatrixXd to %lld elements.\n",numWrappers_MatrixXd_data);
        result.data.nCount = numWrappers_MatrixXd_data;
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


#endif //WRAPPERS_MATRIXXD_CONVERT
