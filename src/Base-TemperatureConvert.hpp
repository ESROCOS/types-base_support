/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Temperature.
 */

#ifndef BASE_TEMPERATURE_CONVERT
#define BASE_TEMPERATURE_CONVERT

#include "baseTypes.h"
#include <base/Temperature.hpp>
#include <base/Temperature.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_Temperature_fromAsn1(base::Temperature& result, const asn1SccBase_Temperature& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Temperature_toAsn1(asn1SccBase_Temperature& result, const base::Temperature& baseObj);


#endif //BASE_TEMPERATURE_CONVERT