
#include "Base-LinearAngular6DCommandConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_LinearAngular6DCommand_fromAsn1(base::commands::LinearAngular6DCommand& result, const asn1SccBase_LinearAngular6DCommand& asnVal)
{
    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);


    wrappers::Vector3d linear_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(linear_intermediate, asnVal.linear);
    Base_Vector3d_fromIntermediate(result.linear, linear_intermediate);


    wrappers::Vector3d angular_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(angular_intermediate, asnVal.angular);
    Base_Vector3d_fromIntermediate(result.angular, angular_intermediate);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_LinearAngular6DCommand_toAsn1(asn1SccBase_LinearAngular6DCommand& result, const base::commands::LinearAngular6DCommand& baseObj)
{
    asn1SccBase_Time_toAsn1(result.time, baseObj.time);


    wrappers::Vector3d linear_intermediate;
    Base_Vector3d_toIntermediate(linear_intermediate, baseObj.linear);
    asn1SccWrappers_Vector3d_toAsn1(result.linear, linear_intermediate);


    wrappers::Vector3d angular_intermediate;
    Base_Vector3d_toIntermediate(angular_intermediate, baseObj.angular);
    asn1SccWrappers_Vector3d_toAsn1(result.angular, angular_intermediate);

}


