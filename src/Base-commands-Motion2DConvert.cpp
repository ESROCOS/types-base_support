
#include "Base-commands-Motion2DConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-AngleConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_commands_Motion2D_fromAsn1(base::commands::Motion2D& result, const asn1SccBase_commands_Motion2D& asnVal)
{
    result.translation = asnVal.translation;

    result.rotation = asnVal.rotation;

    asn1SccBase_Angle_fromAsn1(result.heading, asnVal.heading);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_commands_Motion2D_toAsn1(asn1SccBase_commands_Motion2D& result, const base::commands::Motion2D& baseObj)
{
    result.translation = baseObj.translation;

    result.rotation = baseObj.rotation;

    asn1SccBase_Angle_toAsn1(result.heading, baseObj.heading);

}


