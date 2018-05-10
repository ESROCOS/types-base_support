/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_Pointcloud_m.
 */

#ifndef BASE_SAMPLES_POINTCLOUD_M_CONVERT
#define BASE_SAMPLES_POINTCLOUD_M_CONVERT

#include "baseTypes.h"
#include <string.h>

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector4dConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_Pointcloud_m_fromAsn1(base::samples::Pointcloud_m& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_Pointcloud_m_points=numBase_samples_Pointcloud_m_points,     asn1SccT_UInt32 length_numBase_samples_Pointcloud_m_colors=numBase_samples_Pointcloud_m_colors)
{

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    for(int i = 0; i < numBase_samples_Pointcloud_m_points;i++)
    {
        asn1SccWrappers_Vector3d_fromAsn1(result.points[i], asnVal.points.arr[i]);
    }

    for(int i = 0; i < numBase_samples_Pointcloud_m_colors;i++)
    {
        asn1SccWrappers_Vector4d_fromAsn1(result.colors[i], asnVal.colors.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_Pointcloud_m_toAsn1(T & result, const base::samples::Pointcloud_m& baseObj,    asn1SccT_UInt32 length_numBase_samples_Pointcloud_m_points=numBase_samples_Pointcloud_m_points,     asn1SccT_UInt32 length_numBase_samples_Pointcloud_m_colors=numBase_samples_Pointcloud_m_colors)
{

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    for(int i = 0; i < numBase_samples_Pointcloud_m_points;i++)
    {
        asn1SccWrappers_Vector3d_toAsn1(result.points.arr[i], baseObj.points[i]);
    }

    for(int i = 0; i < numBase_samples_Pointcloud_m_colors;i++)
    {
        asn1SccWrappers_Vector4d_toAsn1(result.colors.arr[i], baseObj.colors[i]);
    }

}


#endif //BASE_SAMPLES_POINTCLOUD_M_CONVERT