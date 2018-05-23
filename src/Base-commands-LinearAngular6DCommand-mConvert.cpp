
#include "Base-commands-LinearAngular6DCommand-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_commands_LinearAngular6DCommand_m_fromAsn1(base::commands::LinearAngular6DCommand_m& result, const asn1SccBase_commands_LinearAngular6DCommand_m& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    asn1SccWrappers_Vector3d_fromAsn1(result.linear, asnVal.linear);

    asn1SccWrappers_Vector3d_fromAsn1(result.angular, asnVal.angular);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_commands_LinearAngular6DCommand_m_toAsn1(asn1SccBase_commands_LinearAngular6DCommand_m& result, const base::commands::LinearAngular6DCommand_m& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    asn1SccWrappers_Vector3d_toAsn1(result.linear, baseObj.linear);

    asn1SccWrappers_Vector3d_toAsn1(result.angular, baseObj.angular);

}


