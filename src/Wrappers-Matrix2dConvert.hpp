/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccWrappers_Matrix2d.
 */

#ifndef WRAPPERS_MATRIX2D_CONVERT
#define WRAPPERS_MATRIX2D_CONVERT

#include "baseTypes.h"
#include <base/wrappers/Eigen.hpp>
#include <base/wrappers/Eigen.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccWrappers_Matrix2d_fromAsn1(wrappers::Matrix<double,2,2>& result, const asn1SccWrappers_Matrix2d& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccWrappers_Matrix2d_toAsn1(asn1SccWrappers_Matrix2d& result, const wrappers::Matrix<double,2,2>& baseObj);


#endif //WRAPPERS_MATRIX2D_CONVERT