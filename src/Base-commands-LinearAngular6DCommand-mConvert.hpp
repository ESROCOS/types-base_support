/*
 * Conversion functions for asn1SccBase_commands_LinearAngular6DCommand_m.
 */

#ifndef BASE_COMMANDS_LINEARANGULAR6DCOMMAND_M_CONVERT
#define BASE_COMMANDS_LINEARANGULAR6DCOMMAND_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_commands_LinearAngular6DCommand.hpp>
#include <base/m_types/base_commands_LinearAngular6DCommand.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_commands_LinearAngular6DCommand_m_fromAsn1(base::commands::LinearAngular6DCommand_m& result, const asn1SccBase_commands_LinearAngular6DCommand_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_commands_LinearAngular6DCommand_m_toAsn1(asn1SccBase_commands_LinearAngular6DCommand_m& result, const base::commands::LinearAngular6DCommand_m& baseObj);


#endif //BASE_COMMANDS_LINEARANGULAR6DCOMMAND_M_CONVERT
