/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_SonarBeam.
 */

#ifndef BASE_SAMPLES_SONARBEAM_CONVERT
#define BASE_SAMPLES_SONARBEAM_CONVERT

#include "baseTypes.h"
#include <string.h>

#include "Base-TimeConvert.hpp"
#include "Base-AngleConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_SonarBeam_fromAsn1(base::samples::SonarBeam& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_SonarBeam_beam=numBase_samples_SonarBeam_beam)
{

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    asn1SccBase_Angle_fromAsn1(result.bearing, asnVal.bearing);

    result.sampling_interval = asnVal.sampling_interval;

    result.speed_of_sound = asnVal.speed_of_sound;

    result.beamwidth_horizontal = asnVal.beamwidth_horizontal;

    result.beamwidth_vertical = asnVal.beamwidth_vertical;

    for(int i = 0; i < numBase_samples_SonarBeam_beam;i++)
    {
        result.beam[i] = asnVal.beam.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_SonarBeam_toAsn1(T & result, const base::samples::SonarBeam& baseObj,    asn1SccT_UInt32 length_numBase_samples_SonarBeam_beam=numBase_samples_SonarBeam_beam)
{

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    asn1SccBase_Angle_toAsn1(result.bearing, baseObj.bearing);

    result.sampling_interval = baseObj.sampling_interval;

    result.speed_of_sound = baseObj.speed_of_sound;

    result.beamwidth_horizontal = baseObj.beamwidth_horizontal;

    result.beamwidth_vertical = baseObj.beamwidth_vertical;

    for(int i = 0; i < numBase_samples_SonarBeam_beam;i++)
    {
        result.beam.arr[i]= baseObj.beam[i];
    }

}


#endif //BASE_SAMPLES_SONARBEAM_CONVERT