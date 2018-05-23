
#include "Base-JointTransformConvert.hpp"

#include "OpaqueConversion.hpp"

#include "T-StringConvert.hpp"
#include "T-StringConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_JointTransform_fromAsn1(base::JointTransform& result, const asn1SccBase_JointTransform& asnVal)
{
    asn1SccT_String_fromAsn1(result.sourceFrame, asnVal.sourceframe);

    asn1SccT_String_fromAsn1(result.targetFrame, asnVal.targetframe);


    wrappers::Vector3d rotationAxis_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(rotationAxis_intermediate, asnVal.rotationaxis);
    Base_Vector3d_fromIntermediate(result.rotationAxis, rotationAxis_intermediate);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_JointTransform_toAsn1(asn1SccBase_JointTransform& result, const base::JointTransform& baseObj)
{
    asn1SccT_String_toAsn1(result.sourceframe, baseObj.sourceFrame);

    asn1SccT_String_toAsn1(result.targetframe, baseObj.targetFrame);


    wrappers::Vector3d rotationAxis_intermediate;
    Base_Vector3d_toIntermediate(rotationAxis_intermediate, baseObj.rotationAxis);
    asn1SccWrappers_Vector3d_toAsn1(result.rotationaxis, rotationAxis_intermediate);

}


