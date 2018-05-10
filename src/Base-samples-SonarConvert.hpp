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


    for(int i = 0; i < numBase_samples_Sonar_timestamps;i++)
    {
        asn1SccBase_Time_fromAsn1(result.timestamps[i], asnVal.timestamps.arr[i]);
    }

    asn1SccBase_Time_fromAsn1(result.bin_duration, asnVal.bin_duration);

    asn1SccBase_Angle_fromAsn1(result.beam_width, asnVal.beam_width);

    asn1SccBase_Angle_fromAsn1(result.beam_height, asnVal.beam_height);


    for(int i = 0; i < numBase_samples_Sonar_bearings;i++)
    {
        asn1SccBase_Angle_fromAsn1(result.bearings[i], asnVal.bearings.arr[i]);
    }

    result.speed_of_sound = asnVal.speed_of_sound;

    result.bin_count = asnVal.bin_count;

    result.beam_count = asnVal.beam_count;

    for(int i = 0; i < numBase_samples_Sonar_bins;i++)
    {
        result.bins[i] = asnVal.bins.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_Sonar_toAsn1(T & result, const base::samples::Sonar& baseObj,    asn1SccT_UInt32 length_numBase_samples_Sonar_timestamps=numBase_samples_Sonar_timestamps,     asn1SccT_UInt32 length_numBase_samples_Sonar_bearings=numBase_samples_Sonar_bearings,     asn1SccT_UInt32 length_numBase_samples_Sonar_bins=numBase_samples_Sonar_bins)
{

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    for(int i = 0; i < numBase_samples_Sonar_timestamps;i++)
    {
        asn1SccBase_Time_toAsn1(result.timestamps.arr[i], baseObj.timestamps[i]);
    }

    asn1SccBase_Time_toAsn1(result.bin_duration, baseObj.bin_duration);

    asn1SccBase_Angle_toAsn1(result.beam_width, baseObj.beam_width);

    asn1SccBase_Angle_toAsn1(result.beam_height, baseObj.beam_height);

    for(int i = 0; i < numBase_samples_Sonar_bearings;i++)
    {
        asn1SccBase_Angle_toAsn1(result.bearings.arr[i], baseObj.bearings[i]);
    }

    result.speed_of_sound = baseObj.speed_of_sound;

    result.bin_count = baseObj.bin_count;

    result.beam_count = baseObj.beam_count;

    for(int i = 0; i < numBase_samples_Sonar_bins;i++)
    {
        result.bins.arr[i]= baseObj.bins[i];
    }

}


#endif //BASE_SAMPLES_SONAR_CONVERT
