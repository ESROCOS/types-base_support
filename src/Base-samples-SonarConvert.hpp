/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_Sonar.
 */

#ifndef BASE_SAMPLES_SONAR_CONVERT
#define BASE_SAMPLES_SONAR_CONVERT

#include "baseTypes.h"
#include <base/samples/Sonar.hpp>
#include <base/samples/Sonar.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Base-TimeConvert.hpp"
#include "Base-TimeConvert.hpp"
#include "Base-AngleConvert.hpp"
#include "Base-AngleConvert.hpp"
#include "Base-AngleConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_Sonar_fromAsn1(base::samples::Sonar& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_Sonar_timestamps=numBase_samples_Sonar_timestamps,     asn1SccT_UInt32 length_numBase_samples_Sonar_bearings=numBase_samples_Sonar_bearings,     asn1SccT_UInt32 length_numBase_samples_Sonar_bins=numBase_samples_Sonar_bins)
{

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    result.timestamps.resize(asnVal.timestamps.nCount);
    for(int i = 0; i < asnVal.timestamps.nCount;i++)
    {
        asn1SccBase_Time_fromAsn1(result.timestamps[i], asnVal.timestamps.arr[i]);
    }

    asn1SccBase_Time_fromAsn1(result.bin_duration, asnVal.bin_duration);

    asn1SccBase_Angle_fromAsn1(result.beam_width, asnVal.beam_width);

    asn1SccBase_Angle_fromAsn1(result.beam_height, asnVal.beam_height);

    result.bearings.resize(asnVal.bearings.nCount);
    for(int i = 0; i < asnVal.bearings.nCount;i++)
    {
        asn1SccBase_Angle_fromAsn1(result.bearings[i], asnVal.bearings.arr[i]);
    }

    result.speed_of_sound = asnVal.speed_of_sound;

    result.bin_count = asnVal.bin_count;

    result.beam_count = asnVal.beam_count;

    result.bins.resize(asnVal.bins.nCount);
    for(int i = 0; i < asnVal.bins.nCount;i++)
    {
        result.bins[i] = asnVal.bins.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_Sonar_toAsn1(T & result, const base::samples::Sonar& baseObj,    asn1SccT_UInt32 length_numBase_samples_Sonar_timestamps=numBase_samples_Sonar_timestamps,     asn1SccT_UInt32 length_numBase_samples_Sonar_bearings=numBase_samples_Sonar_bearings,     asn1SccT_UInt32 length_numBase_samples_Sonar_bins=numBase_samples_Sonar_bins)
{


    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    if( baseObj.timestamps.size() > numBase_samples_Sonar_timestamps)
    {
        fprintf(stderr, "WARNING:  truncated timestamps of asn1SccBase_samples_Sonar to %lld elements.\n",numBase_samples_Sonar_timestamps);
        result.timestamps.nCount = numBase_samples_Sonar_timestamps;
    }
    else
    {
        result.timestamps.nCount = baseObj.timestamps.size();
    }

    for(int i = 0; i < result.timestamps.nCount;i++)
    {
        asn1SccBase_Time_toAsn1(result.timestamps.arr[i], baseObj.timestamps[i]);
    }


    asn1SccBase_Time_toAsn1(result.bin_duration, baseObj.bin_duration);


    asn1SccBase_Angle_toAsn1(result.beam_width, baseObj.beam_width);


    asn1SccBase_Angle_toAsn1(result.beam_height, baseObj.beam_height);

    if( baseObj.bearings.size() > numBase_samples_Sonar_bearings)
    {
        fprintf(stderr, "WARNING:  truncated bearings of asn1SccBase_samples_Sonar to %lld elements.\n",numBase_samples_Sonar_bearings);
        result.bearings.nCount = numBase_samples_Sonar_bearings;
    }
    else
    {
        result.bearings.nCount = baseObj.bearings.size();
    }

    for(int i = 0; i < result.bearings.nCount;i++)
    {
        asn1SccBase_Angle_toAsn1(result.bearings.arr[i], baseObj.bearings[i]);
    }


    result.speed_of_sound = baseObj.speed_of_sound;


    result.bin_count = baseObj.bin_count;


    result.beam_count = baseObj.beam_count;

    if( baseObj.bins.size() > numBase_samples_Sonar_bins)
    {
        fprintf(stderr, "WARNING:  truncated bins of asn1SccBase_samples_Sonar to %lld elements.\n",numBase_samples_Sonar_bins);
        result.bins.nCount = numBase_samples_Sonar_bins;
    }
    else
    {
        result.bins.nCount = baseObj.bins.size();
    }

    for(int i = 0; i < result.bins.nCount ;i++)
    {
        result.bins.arr[i]= baseObj.bins[i];
    }

}


#endif //BASE_SAMPLES_SONAR_CONVERT
