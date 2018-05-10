/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_commands_Motion2D.
 */

#ifndef BASE_COMMANDS_MOTION2D_CONVERT
#define BASE_COMMANDS_MOTION2D_CONVERT

#include "baseTypes.h"
#include <base/commands/Motion2D.hpp>
#include <base/commands/Motion2D.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-AngleConvert.hpp"


//Conversion functions from asn1 to c++ type
void asn1SccBase_commands_Motion2D_fromAsn1(base::commands::Motion2D& result, const asn1SccBase_commands_Motion2D& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_commands_Motion2D_toAsn1(asn1SccBase_commands_Motion2D& result, const base::commands::Motion2D& baseObj);


#endif //BASE_COMMANDS_MOTION2D_CONVERT
