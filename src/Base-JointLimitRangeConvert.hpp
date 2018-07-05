/*
 * Conversion functions for asn1SccBase_JointLimitRange.
 */

#ifndef BASE_JOINTLIMITRANGE_CONVERT
#define BASE_JOINTLIMITRANGE_CONVERT

#include "baseTypes.h"
#include <base/JointLimitRange.hpp>
#include <base/JointLimits.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-JointStateConvert.hpp"
#include "Base-JointStateConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_JointLimitRange_fromAsn1(base::JointLimitRange& result, const asn1SccBase_JointLimitRange& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_JointLimitRange_toAsn1(asn1SccBase_JointLimitRange& result, const base::JointLimitRange& baseObj);


#endif //BASE_JOINTLIMITRANGE_CONVERT
