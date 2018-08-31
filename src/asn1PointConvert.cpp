/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1Point (implementation).
 */

#include "asn1PointConvert.hpp"
#include <cmath>

void Point_fromAsn1(base::Vector3d& result, const asn1SccPoint& asnVal)
{
    for (int i = 0; i < 3; i++)
    {
        result[i] = asnVal.arr[i];
        result[3] = 0;
    }
}

void Point_toAsn1(asn1SccPoint& result, const base::Vector3d& baseObj)
{
    for (int i = 0; i < 3; i++)
    {
        result.arr[i] = baseObj[i];
    }
}

