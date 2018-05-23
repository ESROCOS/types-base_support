
#include "Base-JointTransform-mConvert.hpp"

#include "OpaqueConversion.hpp"

#include "T-StringConvert.hpp"
#include "T-StringConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_JointTransform_m_fromAsn1(base::JointTransform_m& result, const asn1SccBase_JointTransform_m& asnVal)
{
    asn1SccT_String_fromAsn1(result.sourceFrame, asnVal.sourceframe);

    asn1SccT_String_fromAsn1(result.targetFrame, asnVal.targetframe);

    asn1SccWrappers_Vector3d_fromAsn1(result.rotationAxis, asnVal.rotationaxis);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_JointTransform_m_toAsn1(asn1SccBase_JointTransform_m& result, const base::JointTransform_m& baseObj)
{
    asn1SccT_String_toAsn1(result.sourceframe, baseObj.sourceFrame);

    asn1SccT_String_toAsn1(result.targetframe, baseObj.targetFrame);

    asn1SccWrappers_Vector3d_toAsn1(result.rotationaxis, baseObj.rotationAxis);

}


