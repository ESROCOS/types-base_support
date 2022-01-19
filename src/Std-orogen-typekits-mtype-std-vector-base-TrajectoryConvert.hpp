/*
 * Conversion functions for asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory.
 */

#ifndef STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_TRAJECTORY_CONVERT
#define STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_TRAJECTORY_CONVERT

#include "baseTypes.h"
#include <c++/10/bits/stl_vector.h>
#include <vector>
#include <base/m_types/base_Trajectory.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-Trajectory-mConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory_fromAsn1(std::vector<base::Trajectory_m>& result, const T & asnVal,    asn1SccT_UInt32 length_numStd_orogen_typekits_mtype_std_vector_base_Trajectory=numStd_orogen_typekits_mtype_std_vector_base_Trajectory)
{

    result.resize(asnVal.nCount);
    for (int i = 0; i < asnVal.nCount; i++)
    {
		asn1SccBase_Trajectory_m_fromAsn1(result[i], asnVal.arr[i]);
    }
}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory_toAsn1(T & result, const std::vector<base::Trajectory_m>& baseObj,    asn1SccT_UInt32 length_numStd_orogen_typekits_mtype_std_vector_base_Trajectory=numStd_orogen_typekits_mtype_std_vector_base_Trajectory)
{

    if( baseObj.size() > length_numStd_orogen_typekits_mtype_std_vector_base_Trajectory)
    {
        fprintf(stderr, "WARNING:  truncated asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory to %lld elements.\n",length_numStd_orogen_typekits_mtype_std_vector_base_Trajectory);
        result.nCount = length_numStd_orogen_typekits_mtype_std_vector_base_Trajectory;
    }
    else
        result.nCount = baseObj.size();
    for (int i = 0; i < result.nCount; i++)
    {
		asn1SccBase_Trajectory_m_toAsn1(result.arr[i], baseObj[i]);
    }
}


#endif //STD_OROGEN_TYPEKITS_MTYPE_STD_VECTOR_BASE_TRAJECTORY_CONVERT
