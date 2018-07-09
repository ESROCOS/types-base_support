/*
 * Conversion functions for asn1SccBase_JointTransform_m.
 */

#ifndef BASE_JOINTTRANSFORM_M_CONVERT
#define BASE_JOINTTRANSFORM_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_JointTransform.hpp>
#include <base/m_types/base_JointTransform.hpp>
#include <string.h>
#include <stdio.h>

#include "T-StringConvert.hpp"
#include "T-StringConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_JointTransform_m_fromAsn1(base::JointTransform_m& result, const asn1SccBase_JointTransform_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_JointTransform_m_toAsn1(asn1SccBase_JointTransform_m& result, const base::JointTransform_m& baseObj);


#endif //BASE_JOINTTRANSFORM_M_CONVERT
