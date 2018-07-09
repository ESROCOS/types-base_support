/*
 * Conversion functions for asn1SccBase_samples_Pointcloud_m.
 */

#ifndef BASE_SAMPLES_POINTCLOUD_M_CONVERT
#define BASE_SAMPLES_POINTCLOUD_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_samples_Pointcloud.hpp>
#include <base/m_types/base_samples_Pointcloud.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector4dConvert.hpp"

//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_Pointcloud_m_fromAsn1(base::samples::Pointcloud_m& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_Pointcloud_m_points=numBase_samples_Pointcloud_m_points,     asn1SccT_UInt32 length_numBase_samples_Pointcloud_m_colors=numBase_samples_Pointcloud_m_colors)
{

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    result.points.resize(asnVal.points.nCount);
    for(int i = 0; i < asnVal.points.nCount;i++)
    {
        asn1SccWrappers_Vector3d_fromAsn1(result.points[i], asnVal.points.arr[i]);
    }

    result.colors.resize(asnVal.colors.nCount);
    for(int i = 0; i < asnVal.colors.nCount;i++)
    {
        asn1SccWrappers_Vector4d_fromAsn1(result.colors[i], asnVal.colors.arr[i]);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_Pointcloud_m_toAsn1(T & result, const base::samples::Pointcloud_m& baseObj,    asn1SccT_UInt32 length_numBase_samples_Pointcloud_m_points=numBase_samples_Pointcloud_m_points,     asn1SccT_UInt32 length_numBase_samples_Pointcloud_m_colors=numBase_samples_Pointcloud_m_colors)
{


    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    if( baseObj.points.size() > numBase_samples_Pointcloud_m_points)
    {
        fprintf(stderr, "WARNING:  truncated points of asn1SccBase_samples_Pointcloud_m to %lld elements.\n",numBase_samples_Pointcloud_m_points);
        result.points.nCount = numBase_samples_Pointcloud_m_points;
    }
    else
    {
        result.points.nCount = baseObj.points.size();
    }

    for(int i = 0; i < result.points.nCount;i++)
    {
        asn1SccWrappers_Vector3d_toAsn1(result.points.arr[i], baseObj.points[i]);
    }

    if( baseObj.colors.size() > numBase_samples_Pointcloud_m_colors)
    {
        fprintf(stderr, "WARNING:  truncated colors of asn1SccBase_samples_Pointcloud_m to %lld elements.\n",numBase_samples_Pointcloud_m_colors);
        result.colors.nCount = numBase_samples_Pointcloud_m_colors;
    }
    else
    {
        result.colors.nCount = baseObj.colors.size();
    }

    for(int i = 0; i < result.colors.nCount;i++)
    {
        asn1SccWrappers_Vector4d_toAsn1(result.colors.arr[i], baseObj.colors[i]);
    }

}


#endif //BASE_SAMPLES_POINTCLOUD_M_CONVERT
