
#include "Base-WaypointConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_Waypoint_fromAsn1(base::Waypoint& result, const asn1SccBase_Waypoint& asnVal)
{

    wrappers::Vector3d position_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(position_intermediate, asnVal.position);
    Base_Vector3d_fromIntermediate(result.position, position_intermediate);

    result.heading = asnVal.heading;

    result.tol_position = asnVal.tol_position;

    result.tol_heading = asnVal.tol_heading;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Waypoint_toAsn1(asn1SccBase_Waypoint& result, const base::Waypoint& baseObj)
{

    wrappers::Vector3d position_intermediate;
    Base_Vector3d_toIntermediate(position_intermediate, baseObj.position);
    asn1SccWrappers_Vector3d_toAsn1(result.position, position_intermediate);

    result.heading = baseObj.heading;

    result.tol_position = baseObj.tol_position;

    result.tol_heading = baseObj.tol_heading;

}


