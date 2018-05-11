/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccWrappers_geometry_Spline.
 */

#ifndef WRAPPERS_GEOMETRY_SPLINE_CONVERT
#define WRAPPERS_GEOMETRY_SPLINE_CONVERT

#include "baseTypes.h"
#include <base/wrappers/geometry/Spline.hpp>
#include <base/wrappers/geometry/Spline.hpp>
#include <string.h>
#include <stdio.h>

#include "Wrappers-geometry-SplineTypeConvert.hpp"


//Conversion functions from asn1 to c++ type

template <typename T>
void asn1SccWrappers_geometry_Spline_fromAsn1(wrappers::geometry::Spline& result, const T & asnVal,    asn1SccT_UInt32 length_numWrappers_geometry_Spline_knots=numWrappers_geometry_Spline_knots,     asn1SccT_UInt32 length_numWrappers_geometry_Spline_vertices=numWrappers_geometry_Spline_vertices)
{

    result.geometric_resolution = asnVal.geometric_resolution;

    result.dimension = asnVal.dimension;

    result.curve_order = asnVal.curve_order;

    asn1SccWrappers_geometry_SplineType_fromAsn1(result.kind, asnVal.kind);

    result.knots.resize(asnVal.knots.nCount);
    for(int i = 0; i < asnVal.knots.nCount;i++)
    {
        result.knots[i] = asnVal.knots.arr[i];
    }

    result.vertices.resize(asnVal.vertices.nCount);
    for(int i = 0; i < asnVal.vertices.nCount;i++)
    {
        result.vertices[i] = asnVal.vertices.arr[i];
    }

}

//Conversion functions from C++ to Asn1 type

template <typename T>
void asn1SccWrappers_geometry_Spline_toAsn1(T & result, const wrappers::geometry::Spline& baseObj,    asn1SccT_UInt32 length_numWrappers_geometry_Spline_knots=numWrappers_geometry_Spline_knots,     asn1SccT_UInt32 length_numWrappers_geometry_Spline_vertices=numWrappers_geometry_Spline_vertices)
{


    result.geometric_resolution = baseObj.geometric_resolution;


    result.dimension = baseObj.dimension;


    result.curve_order = baseObj.curve_order;


    asn1SccWrappers_geometry_SplineType_toAsn1(result.kind, baseObj.kind);

    if( baseObj.knots.size() > numWrappers_geometry_Spline_knots)
    {
        fprintf(stderr, "WARNING:  truncated knots of asn1SccWrappers_geometry_Spline to %lld elements.\n",numWrappers_geometry_Spline_knots);
        result.knots.nCount = numWrappers_geometry_Spline_knots;
    }
    else
    {
        result.knots.nCount = baseObj.knots.size();
    }

    for(int i = 0; i < result.knots.nCount ;i++)
    {
        result.knots.arr[i]= baseObj.knots[i];
    }

    if( baseObj.vertices.size() > numWrappers_geometry_Spline_vertices)
    {
        fprintf(stderr, "WARNING:  truncated vertices of asn1SccWrappers_geometry_Spline to %lld elements.\n",numWrappers_geometry_Spline_vertices);
        result.vertices.nCount = numWrappers_geometry_Spline_vertices;
    }
    else
    {
        result.vertices.nCount = baseObj.vertices.size();
    }

    for(int i = 0; i < result.vertices.nCount ;i++)
    {
        result.vertices.arr[i]= baseObj.vertices[i];
    }

}


#endif //WRAPPERS_GEOMETRY_SPLINE_CONVERT
