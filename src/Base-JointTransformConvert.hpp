/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_JointTransform.
 */

#ifndef BASE_JOINTTRANSFORM_CONVERT
#define BASE_JOINTTRANSFORM_CONVERT

#include "baseTypes.h"
#include <base/JointTransform.hpp>
#include <base/JointTransform.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_JointTransform_fromAsn1(base::JointTransform& result, const asn1SccBase_JointTransform& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_JointTransform_toAsn1(asn1SccBase_JointTransform& result, const base::JointTransform& baseObj);


#endif //BASE_JOINTTRANSFORM_CONVERT