/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Time_Resolution.
 */

#ifndef BASE_TIME_RESOLUTION_CONVERT
#define BASE_TIME_RESOLUTION_CONVERT

#include "baseTypes.h"
#include <base/Time.hpp>
#include <base/Time.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_Time_Resolution_fromAsn1(base::Time::Resolution& result, const asn1SccBase_Time_Resolution& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Time_Resolution_toAsn1(asn1SccBase_Time_Resolution& result, const base::Time::Resolution& baseObj);


#endif //BASE_TIME_RESOLUTION_CONVERT