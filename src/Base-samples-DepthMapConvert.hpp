/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

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
    for(int i = 0; i < numBase_samples_DepthMap_timestamps;i++)
    {
        asn1SccBase_Time_fromAsn1(result.timestamps[i], asnVal.timestamps.arr[i]);
    }

    asn1SccBase_samples_DepthMap_PROJECTION_TYPE_fromAsn1(result.vertical_projection, asnVal.vertical_projection);

    asn1SccBase_samples_DepthMap_PROJECTION_TYPE_fromAsn1(result.horizontal_projection, asnVal.horizontal_projection);

    result.vertical_interval.resize(asnVal.vertical_interval.nCount);
    for(int i = 0; i < numBase_samples_DepthMap_vertical_interval;i++)
    {
        result.vertical_interval[i] = asnVal.vertical_interval.arr[i];
    }

    result.horizontal_interval.resize(asnVal.horizontal_interval.nCount);
    for(int i = 0; i < numBase_samples_DepthMap_horizontal_interval;i++)
    {
        result.horizontal_interval[i] = asnVal.horizontal_interval.arr[i];
    }

    result.vertical_size = asnVal.vertical_size;

    result.horizontal_size = asnVal.horizontal_size;

    result.distances.resize(asnVal.distances.nCount);
    for(int i = 0; i < numBase_samples_DepthMap_distances;i++)
    {
        result.distances[i] = asnVal.distances.arr[i];
    }

    result.remissions.resize(asnVal.remissions.nCount);
    for(int i = 0; i < numBase_samples_DepthMap_remissions;i++)
    {
        result.remissions[i] = asnVal.remissions.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_DepthMap_toAsn1(T & result, const base::samples::DepthMap& baseObj,    asn1SccT_UInt32 length_numBase_samples_DepthMap_timestamps=numBase_samples_DepthMap_timestamps,     asn1SccT_UInt32 length_numBase_samples_DepthMap_vertical_interval=numBase_samples_DepthMap_vertical_interval,     asn1SccT_UInt32 length_numBase_samples_DepthMap_horizontal_interval=numBase_samples_DepthMap_horizontal_interval,     asn1SccT_UInt32 length_numBase_samples_DepthMap_distances=numBase_samples_DepthMap_distances,     asn1SccT_UInt32 length_numBase_samples_DepthMap_remissions=numBase_samples_DepthMap_remissions)
{

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    for(int i = 0; i < numBase_samples_DepthMap_timestamps;i++)
    {
        asn1SccBase_Time_toAsn1(result.timestamps.arr[i], baseObj.timestamps[i]);
    }

    asn1SccBase_samples_DepthMap_PROJECTION_TYPE_toAsn1(result.vertical_projection, baseObj.vertical_projection);

    asn1SccBase_samples_DepthMap_PROJECTION_TYPE_toAsn1(result.horizontal_projection, baseObj.horizontal_projection);

    for(int i = 0; i < numBase_samples_DepthMap_vertical_interval;i++)
    {
        result.vertical_interval.arr[i]= baseObj.vertical_interval[i];
    }

    for(int i = 0; i < numBase_samples_DepthMap_horizontal_interval;i++)
    {
        result.horizontal_interval.arr[i]= baseObj.horizontal_interval[i];
    }

    result.vertical_size = baseObj.vertical_size;

    result.horizontal_size = baseObj.horizontal_size;

    for(int i = 0; i < numBase_samples_DepthMap_distances;i++)
    {
        result.distances.arr[i]= baseObj.distances[i];
    }

    for(int i = 0; i < numBase_samples_DepthMap_remissions;i++)
    {
        result.remissions.arr[i]= baseObj.remissions[i];
    }

}


#endif //BASE_SAMPLES_DEPTHMAP_CONVERT
