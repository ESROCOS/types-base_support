/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_commands_Speed6D.
 */

#ifndef BASE_COMMANDS_SPEED6D_CONVERT
#define BASE_COMMANDS_SPEED6D_CONVERT

#include "baseTypes.h"
#include <base/commands/Speed6D.hpp>
#include <base/commands/Speed6D.hpp>
#include <string.h>



//Conversion functions from asn1 to c++ type
void asn1SccBase_commands_Speed6D_fromAsn1(base::commands::Speed6D& result, const asn1SccBase_commands_Speed6D& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_commands_Speed6D_toAsn1(asn1SccBase_commands_Speed6D& result, const base::commands::Speed6D& baseObj);


#endif //BASE_COMMANDS_SPEED6D_CONVERT