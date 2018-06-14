/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccWrappers_Matrix6d.
 */

#ifndef WRAPPERS_MATRIX6D_CONVERT
#define WRAPPERS_MATRIX6D_CONVERT

#include "baseTypes.h"
#include <base/wrappers/Eigen.hpp>
#include <base/wrappers/Eigen.hpp>
#include <string.h>
#include <stdio.h>


//Conversion functions from asn1 to c++ type
void asn1SccWrappers_Matrix6d_fromAsn1(wrappers::Matrix<double,6,6>& result, const asn1SccWrappers_Matrix6d& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccWrappers_Matrix6d_toAsn1(asn1SccWrappers_Matrix6d& result, const wrappers::Matrix<double,6,6>& baseObj);


#endif //WRAPPERS_MATRIX6D_CONVERT
