
#include "Base-Pose2D-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector2dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_Pose2D_m_fromAsn1(base::Pose2D_m& result, const asn1SccBase_Pose2D_m& asnVal)
{
    asn1SccWrappers_Vector2d_fromAsn1(result.position, asnVal.position);

    result.orientation = asnVal.orientation;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Pose2D_m_toAsn1(asn1SccBase_Pose2D_m& result, const base::Pose2D_m& baseObj)
{
    asn1SccWrappers_Vector2d_toAsn1(result.position, baseObj.position);

    result.orientation = baseObj.orientation;

}


