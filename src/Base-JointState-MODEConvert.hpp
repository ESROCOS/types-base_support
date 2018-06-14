/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_JointState_MODE.
 */

#ifndef BASE_JOINTSTATE_MODE_CONVERT
#define BASE_JOINTSTATE_MODE_CONVERT

#include "baseTypes.h"
#include <base/JointState.hpp>
#include <base/JointState.hpp>
#include <string.h>
#include <stdio.h>


//Conversion functions from asn1 to c++ type
void asn1SccBase_JointState_MODE_fromAsn1(base::JointState::MODE& result, const asn1SccBase_JointState_MODE& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_JointState_MODE_toAsn1(asn1SccBase_JointState_MODE& result, const base::JointState::MODE& baseObj);


#endif //BASE_JOINTSTATE_MODE_CONVERT
