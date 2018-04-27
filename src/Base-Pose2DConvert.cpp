
#include "Base-Pose2DConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector2dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_Pose2D_fromAsn1(base::Pose2D& result, const asn1SccBase_Pose2D& asnVal)
{

    wrappers::Vector2d position_intermediate;
    asn1SccWrappers_Vector2d_fromAsn1(position_intermediate, asnVal.position);
    Base_Vector2d_fromIntermediate(result.position, position_intermediate);

    result.orientation = asnVal.orientation;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Pose2D_toAsn1(asn1SccBase_Pose2D& result, const base::Pose2D& baseObj)
{

    wrappers::Vector2d position_intermediate;
    Base_Vector2d_toIntermediate(position_intermediate, baseObj.position);
    asn1SccWrappers_Vector2d_toAsn1(result.position, position_intermediate);

    result.orientation = baseObj.orientation;

}


