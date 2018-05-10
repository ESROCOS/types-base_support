/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_Wrench_m.
 */

#ifndef BASE_WRENCH_M_CONVERT
#define BASE_WRENCH_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_Wrench.hpp>
#include <base/m_types/base_Wrench.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"


//Conversion functions from asn1 to c++ type
void asn1SccBase_Wrench_m_fromAsn1(base::Wrench_m& result, const asn1SccBase_Wrench_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Wrench_m_toAsn1(asn1SccBase_Wrench_m& result, const base::Wrench_m& baseObj);


#endif //BASE_WRENCH_M_CONVERT
