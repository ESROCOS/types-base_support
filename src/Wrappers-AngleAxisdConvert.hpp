/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccWrappers_AngleAxisd.
 */

#ifndef WRAPPERS_ANGLEAXISD_CONVERT
#define WRAPPERS_ANGLEAXISD_CONVERT

#include "baseTypes.h"
#include <base/wrappers/Eigen.hpp>
#include <base/wrappers/Eigen.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccWrappers_AngleAxisd_fromAsn1(wrappers::AngleAxis<double>& result, const asn1SccWrappers_AngleAxisd& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccWrappers_AngleAxisd_toAsn1(asn1SccWrappers_AngleAxisd& result, const wrappers::AngleAxis<double>& baseObj);


#endif //WRAPPERS_ANGLEAXISD_CONVERT