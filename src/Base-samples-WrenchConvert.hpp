/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_Wrench.
 */

#ifndef BASE_SAMPLES_WRENCH_CONVERT
#define BASE_SAMPLES_WRENCH_CONVERT

#include "baseTypes.h"
#include <base/samples/Wrench.hpp>
#include <base/samples/Wrench.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_Wrench_fromAsn1(base::samples::Wrench& result, const asn1SccBase_samples_Wrench& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_Wrench_toAsn1(asn1SccBase_samples_Wrench& result, const base::samples::Wrench& baseObj);


#endif //BASE_SAMPLES_WRENCH_CONVERT