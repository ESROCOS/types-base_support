/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_IMUSensors.
 */

#ifndef BASE_SAMPLES_IMUSENSORS_CONVERT
#define BASE_SAMPLES_IMUSENSORS_CONVERT

#include "baseTypes.h"
#include <base/samples/IMUSensors.hpp>
#include <base/samples/IMUSensors.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_IMUSensors_fromAsn1(base::samples::IMUSensors& result, const asn1SccBase_samples_IMUSensors& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_IMUSensors_toAsn1(asn1SccBase_samples_IMUSensors& result, const base::samples::IMUSensors& baseObj);


#endif //BASE_SAMPLES_IMUSENSORS_CONVERT
