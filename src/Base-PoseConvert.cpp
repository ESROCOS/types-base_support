
#include "Base-PoseConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-QuaterniondConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_Pose_fromAsn1(base::Pose& result, const asn1SccBase_Pose& asnVal)
{

    wrappers::Vector3d position_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(position_intermediate, asnVal.position);
    Base_Vector3d_fromIntermediate(result.position, position_intermediate);


    wrappers::Quaterniond orientation_intermediate;
    asn1SccWrappers_Quaterniond_fromAsn1(orientation_intermediate, asnVal.orientation);
    Base_Quaterniond_fromIntermediate(result.orientation, orientation_intermediate);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_Pose_toAsn1(asn1SccBase_Pose& result, const base::Pose& baseObj)
{

    wrappers::Vector3d position_intermediate;
    Base_Vector3d_toIntermediate(position_intermediate, baseObj.position);
    asn1SccWrappers_Vector3d_toAsn1(result.position, position_intermediate);


    wrappers::Quaterniond orientation_intermediate;
    Base_Quaterniond_toIntermediate(orientation_intermediate, baseObj.orientation);
    asn1SccWrappers_Quaterniond_toAsn1(result.orientation, orientation_intermediate);

}


