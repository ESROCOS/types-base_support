/*
 * Conversion functions for asn1SccBase_Angle.
 */

#ifndef BASE_ANGLE_CONVERT
#define BASE_ANGLE_CONVERT

#include "baseTypes.h"
#include <base/Angle.hpp>
#include <base/commands/Motion2D.hpp>
#include <string.h>
#include <stdio.h>


//Conversion functions from asn1 to c++ type
void asn1SccBase_Angle_fromAsn1(base::Angle& result, const asn1SccBase_Angle& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_Angle_toAsn1(asn1SccBase_Angle& result, const base::Angle& baseObj);


#endif //BASE_ANGLE_CONVERT
