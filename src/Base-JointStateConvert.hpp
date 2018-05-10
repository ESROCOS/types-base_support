/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_JointState.
 */

#ifndef BASE_JOINTSTATE_CONVERT
#define BASE_JOINTSTATE_CONVERT

#include "baseTypes.h"
#include <base/JointState.hpp>
#include <base/JointState.hpp>
#include <string.h>



//Conversion functions from asn1 to c++ type
void asn1SccBase_JointState_fromAsn1(base::JointState& result, const asn1SccBase_JointState& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_JointState_toAsn1(asn1SccBase_JointState& result, const base::JointState& baseObj);


#endif //BASE_JOINTSTATE_CONVERT