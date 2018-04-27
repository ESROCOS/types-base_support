
#include "Base-Waypoint-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_Waypoint_m_fromAsn1(base::Waypoint_m& result, const asn1SccBase_Waypoint_m& asnVal)
{
    asn1SccWrappers_Vector3d_fromAsn1(result.position, asnVal.position);

    result.heading = asnVal.heading;

    result.tol_position = asnVal.tol_position;

    result.tol_heading = asnVal.tol_heading;

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Waypoint_m_toAsn1(asn1SccBase_Waypoint_m& result, const base::Waypoint_m& baseObj)
{
    asn1SccWrappers_Vector3d_toAsn1(result.position, baseObj.position);

    result.heading = baseObj.heading;

    result.tol_position = baseObj.tol_position;

    result.tol_heading = baseObj.tol_heading;

}


