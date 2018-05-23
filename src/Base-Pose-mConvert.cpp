
#include "Base-Pose-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-QuaterniondConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_Pose_m_fromAsn1(base::Pose_m& result, const asn1SccBase_Pose_m& asnVal)
{
    asn1SccWrappers_Vector3d_fromAsn1(result.position, asnVal.position);

    asn1SccWrappers_Quaterniond_fromAsn1(result.orientation, asnVal.orientation);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Pose_m_toAsn1(asn1SccBase_Pose_m& result, const base::Pose_m& baseObj)
{
    asn1SccWrappers_Vector3d_toAsn1(result.position, baseObj.position);

    asn1SccWrappers_Quaterniond_toAsn1(result.orientation, baseObj.orientation);

}


