
#include "Base-commands-Speed6DConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_commands_Speed6D_fromAsn1(base::commands::Speed6D& result, const asn1SccBase_commands_Speed6D& asnVal)
{
    result.surge = asnVal.surge;

    result.sway = asnVal.sway;

    result.heave = asnVal.heave;

    result.roll = asnVal.roll;

    result.pitch = asnVal.pitch;

    result.yaw = asnVal.yaw;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_commands_Speed6D_toAsn1(asn1SccBase_commands_Speed6D& result, const base::commands::Speed6D& baseObj)
{
    result.surge = baseObj.surge;

    result.sway = baseObj.sway;

    result.heave = baseObj.heave;

    result.roll = baseObj.roll;

    result.pitch = baseObj.pitch;

    result.yaw = baseObj.yaw;

}


