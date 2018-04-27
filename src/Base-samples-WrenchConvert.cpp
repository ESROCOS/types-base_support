
#include "Base-samples-WrenchConvert.hpp"

#include "OpaqueConversion.hpp"

#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Base-TimeConvert.hpp"
//Conversion functions from asn1 to c++ type



void asn1SccBase_samples_Wrench_fromAsn1(base::samples::Wrench& result, const asn1SccBase_samples_Wrench& asnVal)
{

    wrappers::Vector3d force_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(force_intermediate, asnVal.force);
    Base_Vector3d_fromIntermediate(result.force, force_intermediate);


    wrappers::Vector3d torque_intermediate;
    asn1SccWrappers_Vector3d_fromAsn1(torque_intermediate, asnVal.torque);
    Base_Vector3d_fromIntermediate(result.torque, torque_intermediate);

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

}

//Conversion functions from c++ type to asn1

void asn1SccBase_samples_Wrench_toAsn1(asn1SccBase_samples_Wrench& result, const base::samples::Wrench& baseObj)
{

    wrappers::Vector3d force_intermediate;
    Base_Vector3d_toIntermediate(force_intermediate, baseObj.force);
    asn1SccWrappers_Vector3d_toAsn1(result.force, force_intermediate);


    wrappers::Vector3d torque_intermediate;
    Base_Vector3d_toIntermediate(torque_intermediate, baseObj.torque);
    asn1SccWrappers_Vector3d_toAsn1(result.torque, torque_intermediate);

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

}


