/*
 * Conversion functions for asn1SccWrappers_Matrix4d.
 */

#ifndef WRAPPERS_MATRIX4D_CONVERT
#define WRAPPERS_MATRIX4D_CONVERT

#include "baseTypes.h"
#include <base/wrappers/Eigen.hpp>
#include <base/wrappers/Eigen.hpp>
#include <string.h>
#include <stdio.h>


//Conversion functions from asn1 to c++ type
void asn1SccWrappers_Matrix4d_fromAsn1(wrappers::Matrix<double,4,4>& result, const asn1SccWrappers_Matrix4d& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccWrappers_Matrix4d_toAsn1(asn1SccWrappers_Matrix4d& result, const wrappers::Matrix<double,4,4>& baseObj);


#endif //WRAPPERS_MATRIX4D_CONVERT
