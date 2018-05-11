/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_Pointcloud.
 */

#ifndef BASE_SAMPLES_POINTCLOUD_CONVERT
#define BASE_SAMPLES_POINTCLOUD_CONVERT

#include "baseTypes.h"
#include <base/samples/Pointcloud.hpp>
#include <base/samples/Pointcloud.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Vector4dConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccBase_samples_Pointcloud_fromAsn1(base::samples::Pointcloud& result, const T & asnVal,    asn1SccT_UInt32 length_numBase_samples_Pointcloud_points=numBase_samples_Pointcloud_points,     asn1SccT_UInt32 length_numBase_samples_Pointcloud_colors=numBase_samples_Pointcloud_colors)
{

    asn1SccBase_Time_fromAsn1(result.time, asnVal.time);

    result.points.resize(asnVal.points.nCount);
    for(int i = 0; i < numBase_samples_Pointcloud_points;i++)
    {
		wrappers::Vector3d points_intermediate;
		asn1SccWrappers_Vector3d_fromAsn1(points_intermediate, asnVal.points.arr[i]);
		Base_Vector3d_fromIntermediate(result.points[i], points_intermediate);
    }

    result.colors.resize(asnVal.colors.nCount);
    for(int i = 0; i < numBase_samples_Pointcloud_colors;i++)
    {
		wrappers::Vector4d colors_intermediate;
		asn1SccWrappers_Vector4d_fromAsn1(colors_intermediate, asnVal.colors.arr[i]);
		Base_Vector4d_fromIntermediate(result.colors[i], colors_intermediate);
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccBase_samples_Pointcloud_toAsn1(T & result, const base::samples::Pointcloud& baseObj,    asn1SccT_UInt32 length_numBase_samples_Pointcloud_points=numBase_samples_Pointcloud_points,     asn1SccT_UInt32 length_numBase_samples_Pointcloud_colors=numBase_samples_Pointcloud_colors)
{

    asn1SccBase_Time_toAsn1(result.time, baseObj.time);

    for(int i = 0; i < numBase_samples_Pointcloud_points;i++)
    {
        asn1SccWrappers_Vector3d_toAsn1(result.points.arr[i], baseObj.points[i]);
    }

    for(int i = 0; i < numBase_samples_Pointcloud_colors;i++)
    {
        asn1SccWrappers_Vector4d_toAsn1(result.colors.arr[i], baseObj.colors[i]);
    }

}


#endif //BASE_SAMPLES_POINTCLOUD_CONVERT
