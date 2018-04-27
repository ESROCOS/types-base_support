/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint.
 */

#ifndef STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_WAYPOINT_CONVERT
#define STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_WAYPOINT_CONVERT

#include "baseTypes.h"

#include "Base-Waypoint-mConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint_fromAsn1(std::vector<base::Waypoint_m>& result, const T & asnVal,    asn1SccT_UInt32 length_numStd_orogen_typekits_mtype_std_vector_base_Waypoint=numStd_orogen_typekits_mtype_std_vector_base_Waypoint)
{

    for (int i = 0; i < length_numStd_orogen_typekits_mtype_std_vector_base_Waypoint; i++)
    {
        result[i] = asnVal.arr[i];
    }
}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint_toAsn1(T & result, const std::vector<base::Waypoint_m>& baseObj,    asn1SccT_UInt32 length_numStd_orogen_typekits_mtype_std_vector_base_Waypoint=numStd_orogen_typekits_mtype_std_vector_base_Waypoint)
{

    for (int i = 0; i < length_numStd_orogen_typekits_mtype_std_vector_base_Waypoint; i++)
    {
        result.arr[i] = baseObj[i];
    }
    result.nCount = length_numStd_orogen_typekits_mtype_std_vector_base_Waypoint
}


#endif //STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_WAYPOINT_CONVERT