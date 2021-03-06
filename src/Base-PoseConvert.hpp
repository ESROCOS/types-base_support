/*
 * Conversion functions for asn1SccBase_Pose.
 */

#ifndef BASE_POSE_CONVERT
#define BASE_POSE_CONVERT

#include "baseTypes.h"
#include <base/Pose.hpp>
#include <base/Pose.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-QuaterniondConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_Pose_fromAsn1(base::Pose& result, const asn1SccBase_Pose& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Pose_toAsn1(asn1SccBase_Pose& result, const base::Pose& baseObj);


#endif //BASE_POSE_CONVERT
