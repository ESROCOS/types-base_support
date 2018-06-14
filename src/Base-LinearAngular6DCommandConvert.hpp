/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_LinearAngular6DCommand.
 */

#ifndef BASE_LINEARANGULAR6DCOMMAND_CONVERT
#define BASE_LINEARANGULAR6DCOMMAND_CONVERT

#include "baseTypes.h"
#include <base/commands/LinearAngular6DCommand.hpp>
#include <base/commands/LinearAngular6DCommand.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_LinearAngular6DCommand_fromAsn1(base::commands::LinearAngular6DCommand& result, const asn1SccBase_LinearAngular6DCommand& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_LinearAngular6DCommand_toAsn1(asn1SccBase_LinearAngular6DCommand& result, const base::commands::LinearAngular6DCommand& baseObj);


#endif //BASE_LINEARANGULAR6DCOMMAND_CONVERT
