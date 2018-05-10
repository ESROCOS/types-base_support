/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Pressure.
 */

#ifndef BASE_PRESSURE_CONVERT
#define BASE_PRESSURE_CONVERT

#include "baseTypes.h"
#include <base/Pressure.hpp>
#include <base/Pressure.hpp>
#include <string.h>
#include <stdio.h>



//Conversion functions from asn1 to c++ type
void asn1SccBase_Pressure_fromAsn1(base::Pressure& result, const asn1SccBase_Pressure& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Pressure_toAsn1(asn1SccBase_Pressure& result, const base::Pressure& baseObj);


#endif //BASE_PRESSURE_CONVERT
