/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_RigidBodyState.
 */

#ifndef BASE_SAMPLES_RIGIDBODYSTATE_CONVERT
#define BASE_SAMPLES_RIGIDBODYSTATE_CONVERT

#include "baseTypes.h"
#include <base/samples/RigidBodyState.hpp>
#include <base/samples/RigidBodyState.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_RigidBodyState_fromAsn1(base::samples::RigidBodyState& result, const asn1SccBase_samples_RigidBodyState& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_RigidBodyState_toAsn1(asn1SccBase_samples_RigidBodyState& result, const base::samples::RigidBodyState& baseObj);


#endif //BASE_SAMPLES_RIGIDBODYSTATE_CONVERT