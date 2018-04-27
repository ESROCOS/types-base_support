/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_LASER_RANGE_ERRORS.
 */

#ifndef BASE_SAMPLES_LASER_RANGE_ERRORS_CONVERT
#define BASE_SAMPLES_LASER_RANGE_ERRORS_CONVERT

#include "baseTypes.h"
#include <base/samples/LaserScan.hpp>
#include <base/samples/LaserScan.hpp>



//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_LASER_RANGE_ERRORS_fromAsn1(base::samples::LASER_RANGE_ERRORS& result, const asn1SccBase_samples_LASER_RANGE_ERRORS& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_LASER_RANGE_ERRORS_toAsn1(asn1SccBase_samples_LASER_RANGE_ERRORS& result, const base::samples::LASER_RANGE_ERRORS& baseObj);


#endif //BASE_SAMPLES_LASER_RANGE_ERRORS_CONVERT