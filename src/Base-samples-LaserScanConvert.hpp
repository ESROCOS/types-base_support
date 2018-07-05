/*
 * Conversion functions for asn1SccBase_samples_LaserScan.
 */

#ifndef BASE_SAMPLES_LASERSCAN_CONVERT
#define BASE_SAMPLES_LASERSCAN_CONVERT

#include "baseTypes.h"
#include <base/samples/LaserScan.hpp>
#include <base/samples/LaserScan.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_LaserScan_fromAsn1(base::samples::LaserScan& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_LaserScan_ranges=numBase_samples_LaserScan_ranges,     asn1SccT_UInt32 length_numBase_samples_LaserScan_remission=numBase_samples_LaserScan_remission)
{

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    result.start_angle = asnVal.start_angle;

    result.angular_resolution = asnVal.angular_resolution;

    result.speed = asnVal.speed;

    result.ranges.resize(asnVal.ranges.nCount);
    for(int i = 0; i < asnVal.ranges.nCount;i++)
    {
        result.ranges[i] = asnVal.ranges.arr[i];
    }

    result.minRange = asnVal.minrange;

    result.maxRange = asnVal.maxrange;

    result.remission.resize(asnVal.remission.nCount);
    for(int i = 0; i < asnVal.remission.nCount;i++)
    {
        result.remission[i] = asnVal.remission.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_LaserScan_toAsn1(T & result, const base::samples::LaserScan& baseObj,    asn1SccT_UInt32 length_numBase_samples_LaserScan_ranges=numBase_samples_LaserScan_ranges,     asn1SccT_UInt32 length_numBase_samples_LaserScan_remission=numBase_samples_LaserScan_remission)
{


    asn1SccBase_Time_toAsn1(result.time, baseObj.time);


    result.start_angle = baseObj.start_angle;


    result.angular_resolution = baseObj.angular_resolution;


    result.speed = baseObj.speed;

    if( baseObj.ranges.size() > numBase_samples_LaserScan_ranges)
    {
        fprintf(stderr, "WARNING:  truncated ranges of asn1SccBase_samples_LaserScan to %lld elements.\n",numBase_samples_LaserScan_ranges);
        result.ranges.nCount = numBase_samples_LaserScan_ranges;
    }
    else
    {
        result.ranges.nCount = baseObj.ranges.size();
    }

    for(int i = 0; i < result.ranges.nCount ;i++)
    {
        result.ranges.arr[i]= baseObj.ranges[i];
    }


    result.minrange = baseObj.minRange;


    result.maxrange = baseObj.maxRange;

    if( baseObj.remission.size() > numBase_samples_LaserScan_remission)
    {
        fprintf(stderr, "WARNING:  truncated remission of asn1SccBase_samples_LaserScan to %lld elements.\n",numBase_samples_LaserScan_remission);
        result.remission.nCount = numBase_samples_LaserScan_remission;
    }
    else
    {
        result.remission.nCount = baseObj.remission.size();
    }

    for(int i = 0; i < result.remission.nCount ;i++)
    {
        result.remission.arr[i]= baseObj.remission[i];
    }

}


#endif //BASE_SAMPLES_LASERSCAN_CONVERT
