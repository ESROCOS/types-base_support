/*
 * Conversion functions for asn1SccBase_samples_RigidBodyAcceleration.
 */

#ifndef BASE_SAMPLES_RIGIDBODYACCELERATION_CONVERT
#define BASE_SAMPLES_RIGIDBODYACCELERATION_CONVERT

#include "baseTypes.h"
#include <base/samples/RigidBodyAcceleration.hpp>
#include <base/samples/RigidBodyAcceleration.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_RigidBodyAcceleration_fromAsn1(base::samples::RigidBodyAcceleration& result, const asn1SccBase_samples_RigidBodyAcceleration& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_RigidBodyAcceleration_toAsn1(asn1SccBase_samples_RigidBodyAcceleration& result, const base::samples::RigidBodyAcceleration& baseObj);


#endif //BASE_SAMPLES_RIGIDBODYACCELERATION_CONVERT
