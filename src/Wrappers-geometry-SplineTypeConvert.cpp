
#include "Wrappers-geometry-SplineTypeConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccWrappers_geometry_SplineType_fromAsn1(wrappers::geometry::SplineType& result, const asn1SccWrappers_geometry_SplineType& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccwrappers_geometry_splinetype_degenerate:
            result = (wrappers::geometry::SplineType)0; 
            break;
        case asn1Sccwrappers_geometry_splinetype_polynomial_bezier:
            result = (wrappers::geometry::SplineType)3; 
            break;
        case asn1Sccwrappers_geometry_splinetype_polynomial_bspline:
            result = (wrappers::geometry::SplineType)1; 
            break;
        case asn1Sccwrappers_geometry_splinetype_rational_bezier:
            result = (wrappers::geometry::SplineType)4; 
            break;
        case asn1Sccwrappers_geometry_splinetype_rational_bspline:
            result = (wrappers::geometry::SplineType)2; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccWrappers_geometry_SplineType_toAsn1(asn1SccWrappers_geometry_SplineType& result, const wrappers::geometry::SplineType& baseObj)
{
    
    if(baseObj==0)
    {
        result = (asn1SccWrappers_geometry_SplineType)asn1Sccwrappers_geometry_splinetype_degenerate; 
    }
    else if(baseObj==3)
    {   
        result = (asn1SccWrappers_geometry_SplineType)asn1Sccwrappers_geometry_splinetype_polynomial_bezier; 
    }
    else if(baseObj==1)
    {   
        result = (asn1SccWrappers_geometry_SplineType)asn1Sccwrappers_geometry_splinetype_polynomial_bspline; 
    }
    else if(baseObj==4)
    {   
        result = (asn1SccWrappers_geometry_SplineType)asn1Sccwrappers_geometry_splinetype_rational_bezier; 
    }
    else if(baseObj==2)
    {   
        result = (asn1SccWrappers_geometry_SplineType)asn1Sccwrappers_geometry_splinetype_rational_bspline; 
    }
    

}


