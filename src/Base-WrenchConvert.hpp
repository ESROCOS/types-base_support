/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Wrench.
 */

#ifndef BASE_WRENCH_CONVERT
#define BASE_WRENCH_CONVERT

#include "baseTypes.h"
#include <base/Wrench.hpp>
#include <base/Wrench.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"


//Conversion functions from asn1 to c++ type
void asn1SccBase_Wrench_fromAsn1(base::Wrench& result, const asn1SccBase_Wrench& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Wrench_toAsn1(asn1SccBase_Wrench& result, const base::Wrench& baseObj);


#endif //BASE_WRENCH_CONVERT
