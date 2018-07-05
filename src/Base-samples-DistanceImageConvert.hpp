/*
 * Conversion functions for asn1SccBase_samples_DistanceImage.
 */

#ifndef BASE_SAMPLES_DISTANCEIMAGE_CONVERT
#define BASE_SAMPLES_DISTANCEIMAGE_CONVERT

#include "baseTypes.h"
#include <base/samples/DistanceImage.hpp>
#include <base/samples/DistanceImage.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_DistanceImage_fromAsn1(base::samples::DistanceImage& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_DistanceImage_data=numBase_samples_DistanceImage_data)
{

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    result.width = asnVal.width;

    result.height = asnVal.height;

    result.scale_x = asnVal.scale_x;

    result.scale_y = asnVal.scale_y;

    result.center_x = asnVal.center_x;

    result.center_y = asnVal.center_y;

    result.data.resize(asnVal.data.nCount);
    for(int i = 0; i < asnVal.data.nCount;i++)
    {
        result.data[i] = asnVal.data.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_DistanceImage_toAsn1(T & result, const base::samples::DistanceImage& baseObj,    asn1SccT_UInt32 length_numBase_samples_DistanceImage_data=numBase_samples_DistanceImage_data)
{


    asn1SccBase_Time_toAsn1(result.time, baseObj.time);


    result.width = baseObj.width;


    result.height = baseObj.height;


    result.scale_x = baseObj.scale_x;


    result.scale_y = baseObj.scale_y;


    result.center_x = baseObj.center_x;


    result.center_y = baseObj.center_y;

    if( baseObj.data.size() > numBase_samples_DistanceImage_data)
    {
        fprintf(stderr, "WARNING:  truncated data of asn1SccBase_samples_DistanceImage to %lld elements.\n",numBase_samples_DistanceImage_data);
        result.data.nCount = numBase_samples_DistanceImage_data;
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


#endif //BASE_SAMPLES_DISTANCEIMAGE_CONVERT
