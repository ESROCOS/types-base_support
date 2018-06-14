/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_TimeStamped_Base_commands_Motion2D.
 */

#ifndef BASE_TIMESTAMPED_BASE_COMMANDS_MOTION2D_CONVERT
#define BASE_TIMESTAMPED_BASE_COMMANDS_MOTION2D_CONVERT

#include "baseTypes.h"
#include <base/templates/TimeStamped.hpp>
#include <base/samples/CommandSamples.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-AngleConvert.hpp"
#include "Base-TimeConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_TimeStamped_Base_commands_Motion2D_fromAsn1(base::TimeStamped<base::commands::Motion2D>& result, const asn1SccBase_TimeStamped_Base_commands_Motion2D& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_TimeStamped_Base_commands_Motion2D_toAsn1(asn1SccBase_TimeStamped_Base_commands_Motion2D& result, const base::TimeStamped<base::commands::Motion2D>& baseObj);


#endif //BASE_TIMESTAMPED_BASE_COMMANDS_MOTION2D_CONVERT
