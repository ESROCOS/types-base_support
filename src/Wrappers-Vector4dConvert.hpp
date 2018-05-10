/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccWrappers_Vector4d.
 */

#ifndef WRAPPERS_VECTOR4D_CONVERT
#define WRAPPERS_VECTOR4D_CONVERT

#include "baseTypes.h"
#include <base/wrappers/Eigen.hpp>
#include <base/wrappers/Eigen.hpp>
#include <string.h>



//Conversion functions from asn1 to c++ type
void asn1SccWrappers_Vector4d_fromAsn1(wrappers::Matrix<double,4,1>& result, const asn1SccWrappers_Vector4d& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccWrappers_Vector4d_toAsn1(asn1SccWrappers_Vector4d& result, const wrappers::Matrix<double,4,1>& baseObj);


#endif //WRAPPERS_VECTOR4D_CONVERT