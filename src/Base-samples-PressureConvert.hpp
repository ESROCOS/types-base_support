/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_Pressure.
 */

#ifndef BASE_SAMPLES_PRESSURE_CONVERT
#define BASE_SAMPLES_PRESSURE_CONVERT

#include "baseTypes.h"
#include <base/samples/Pressure.hpp>
#include <base/samples/Pressure.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"


//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_Pressure_fromAsn1(base::samples::Pressure& result, const asn1SccBase_samples_Pressure& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_Pressure_toAsn1(asn1SccBase_samples_Pressure& result, const base::samples::Pressure& baseObj);


#endif //BASE_SAMPLES_PRESSURE_CONVERT
