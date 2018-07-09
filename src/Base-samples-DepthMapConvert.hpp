/*
 * Conversion functions for asn1SccBase_samples_DepthMap.
 */

#ifndef BASE_SAMPLES_DEPTHMAP_CONVERT
#define BASE_SAMPLES_DEPTHMAP_CONVERT

#include "baseTypes.h"
#include <base/samples/DepthMap.hpp>
#include <base/samples/DepthMap.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Base-TimeConvert.hpp"
#include "Base-samples-DepthMap-PROJECTION-TYPEConvert.hpp"
#include "Base-samples-DepthMap-PROJECTION-TYPEConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_DepthMap_fromAsn1(base::samples::DepthMap& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_DepthMap_timestamps=numBase_samples_DepthMap_timestamps,     asn1SccT_UInt32 length_numBase_samples_DepthMap_vertical_interval=numBase_samples_DepthMap_vertical_interval,     asn1SccT_UInt32 length_numBase_samples_DepthMap_horizontal_interval=numBase_samples_DepthMap_horizontal_interval,     asn1SccT_UInt32 length_numBase_samples_DepthMap_distances=numBase_samples_DepthMap_distances,     asn1SccT_UInt32 length_numBase_samples_DepthMap_remissions=numBase_samples_DepthMap_remissions)
{

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    result.timestamps.resize(asnVal.timestamps.nCount);
    for(int i = 0; i < asnVal.timestamps.nCount;i++)
    {
        asn1SccBase_Time_fromAsn1(result.timestamps[i], asnVal.timestamps.arr[i]);
    }

    asn1SccBase_samples_DepthMap_PROJECTION_TYPE_fromAsn1(result.vertical_projection, asnVal.vertical_projection);

    asn1SccBase_samples_DepthMap_PROJECTION_TYPE_fromAsn1(result.horizontal_projection, asnVal.horizontal_projection);

    result.vertical_interval.resize(asnVal.vertical_interval.nCount);
    for(int i = 0; i < asnVal.vertical_interval.nCount;i++)
    {
        result.vertical_interval[i] = asnVal.vertical_interval.arr[i];
    }

    result.horizontal_interval.resize(asnVal.horizontal_interval.nCount);
    for(int i = 0; i < asnVal.horizontal_interval.nCount;i++)
    {
        result.horizontal_interval[i] = asnVal.horizontal_interval.arr[i];
    }

    result.vertical_size = asnVal.vertical_size;

    result.horizontal_size = asnVal.horizontal_size;

    result.distances.resize(asnVal.distances.nCount);
    for(int i = 0; i < asnVal.distances.nCount;i++)
    {
        result.distances[i] = asnVal.distances.arr[i];
    }

    result.remissions.resize(asnVal.remissions.nCount);
    for(int i = 0; i < asnVal.remissions.nCount;i++)
    {
        result.remissions[i] = asnVal.remissions.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_DepthMap_toAsn1(T & result, const base::samples::DepthMap& baseObj,    asn1SccT_UInt32 length_numBase_samples_DepthMap_timestamps=numBase_samples_DepthMap_timestamps,     asn1SccT_UInt32 length_numBase_samples_DepthMap_vertical_interval=numBase_samples_DepthMap_vertical_interval,     asn1SccT_UInt32 length_numBase_samples_DepthMap_horizontal_interval=numBase_samples_DepthMap_horizontal_interval,     asn1SccT_UInt32 length_numBase_samples_DepthMap_distances=numBase_samples_DepthMap_distances,     asn1SccT_UInt32 length_numBase_samples_DepthMap_remissions=numBase_samples_DepthMap_remissions)
{


    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    if( baseObj.timestamps.size() > numBase_samples_DepthMap_timestamps)
    {
        fprintf(stderr, "WARNING:  truncated timestamps of asn1SccBase_samples_DepthMap to %lld elements.\n",numBase_samples_DepthMap_timestamps);
        result.timestamps.nCount = numBase_samples_DepthMap_timestamps;
    }
    else
    {
        result.timestamps.nCount = baseObj.timestamps.size();
    }

    for(int i = 0; i < result.timestamps.nCount;i++)
    {
        asn1SccBase_Time_toAsn1(result.timestamps.arr[i], baseObj.timestamps[i]);
    }


    asn1SccBase_samples_DepthMap_PROJECTION_TYPE_toAsn1(result.vertical_projection, baseObj.vertical_projection);


    asn1SccBase_samples_DepthMap_PROJECTION_TYPE_toAsn1(result.horizontal_projection, baseObj.horizontal_projection);

    if( baseObj.vertical_interval.size() > numBase_samples_DepthMap_vertical_interval)
    {
        fprintf(stderr, "WARNING:  truncated vertical_interval of asn1SccBase_samples_DepthMap to %lld elements.\n",numBase_samples_DepthMap_vertical_interval);
        result.vertical_interval.nCount = numBase_samples_DepthMap_vertical_interval;
    }
    else
    {
        result.vertical_interval.nCount = baseObj.vertical_interval.size();
    }

    for(int i = 0; i < result.vertical_interval.nCount ;i++)
    {
        result.vertical_interval.arr[i]= baseObj.vertical_interval[i];
    }

    if( baseObj.horizontal_interval.size() > numBase_samples_DepthMap_horizontal_interval)
    {
        fprintf(stderr, "WARNING:  truncated horizontal_interval of asn1SccBase_samples_DepthMap to %lld elements.\n",numBase_samples_DepthMap_horizontal_interval);
        result.horizontal_interval.nCount = numBase_samples_DepthMap_horizontal_interval;
    }
    else
    {
        result.horizontal_interval.nCount = baseObj.horizontal_interval.size();
    }

    for(int i = 0; i < result.horizontal_interval.nCount ;i++)
    {
        result.horizontal_interval.arr[i]= baseObj.horizontal_interval[i];
    }


    result.vertical_size = baseObj.vertical_size;


    result.horizontal_size = baseObj.horizontal_size;

    if( baseObj.distances.size() > numBase_samples_DepthMap_distances)
    {
        fprintf(stderr, "WARNING:  truncated distances of asn1SccBase_samples_DepthMap to %lld elements.\n",numBase_samples_DepthMap_distances);
        result.distances.nCount = numBase_samples_DepthMap_distances;
    }
    else
    {
        result.distances.nCount = baseObj.distances.size();
    }

    for(int i = 0; i < result.distances.nCount ;i++)
    {
        result.distances.arr[i]= baseObj.distances[i];
    }

    if( baseObj.remissions.size() > numBase_samples_DepthMap_remissions)
    {
        fprintf(stderr, "WARNING:  truncated remissions of asn1SccBase_samples_DepthMap to %lld elements.\n",numBase_samples_DepthMap_remissions);
        result.remissions.nCount = numBase_samples_DepthMap_remissions;
    }
    else
    {
        result.remissions.nCount = baseObj.remissions.size();
    }

    for(int i = 0; i < result.remissions.nCount ;i++)
    {
        result.remissions.arr[i]= baseObj.remissions[i];
    }

}


#endif //BASE_SAMPLES_DEPTHMAP_CONVERT
