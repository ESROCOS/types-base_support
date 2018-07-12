
#include "Base-geometry-SplineBase-CoordinateTypeConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_geometry_SplineBase_CoordinateType_fromAsn1(base::geometry::SplineBase::CoordinateType& result, const asn1SccBase_geometry_SplineBase_CoordinateType& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccbase_geometry_splinebase_coordinatetype_derivative_to_next:
            result = (base::geometry::SplineBase::CoordinateType)3; 
            break;
        case asn1Sccbase_geometry_splinebase_coordinatetype_derivative_to_prior:
            result = (base::geometry::SplineBase::CoordinateType)4; 
            break;
        case asn1Sccbase_geometry_splinebase_coordinatetype_knuckle_point:
            result = (base::geometry::SplineBase::CoordinateType)2; 
            break;
        case asn1Sccbase_geometry_splinebase_coordinatetype_ordinary_point:
            result = (base::geometry::SplineBase::CoordinateType)1; 
            break;
        case asn1Sccbase_geometry_splinebase_coordinatetype_second_derivative_to_next:
            result = (base::geometry::SplineBase::CoordinateType)5; 
            break;
        case asn1Sccbase_geometry_splinebase_coordinatetype_second_derivative_to_prior:
            result = (base::geometry::SplineBase::CoordinateType)6; 
            break;
        case asn1Sccbase_geometry_splinebase_coordinatetype_tangent_point_for_next:
            result = (base::geometry::SplineBase::CoordinateType)13; 
            break;
        case asn1Sccbase_geometry_splinebase_coordinatetype_tangent_point_for_prior:
            result = (base::geometry::SplineBase::CoordinateType)14; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccBase_geometry_SplineBase_CoordinateType_toAsn1(asn1SccBase_geometry_SplineBase_CoordinateType& result, const base::geometry::SplineBase::CoordinateType& baseObj)
{
    
    if(baseObj==3)
    {
        result = (asn1SccBase_geometry_SplineBase_CoordinateType)asn1Sccbase_geometry_splinebase_coordinatetype_derivative_to_next; 
    }
    else if(baseObj==4)
    {   
        result = (asn1SccBase_geometry_SplineBase_CoordinateType)asn1Sccbase_geometry_splinebase_coordinatetype_derivative_to_prior; 
    }
    else if(baseObj==2)
    {   
        result = (asn1SccBase_geometry_SplineBase_CoordinateType)asn1Sccbase_geometry_splinebase_coordinatetype_knuckle_point; 
    }
    else if(baseObj==1)
    {   
        result = (asn1SccBase_geometry_SplineBase_CoordinateType)asn1Sccbase_geometry_splinebase_coordinatetype_ordinary_point; 
    }
    else if(baseObj==5)
    {   
        result = (asn1SccBase_geometry_SplineBase_CoordinateType)asn1Sccbase_geometry_splinebase_coordinatetype_second_derivative_to_next; 
    }
    else if(baseObj==6)
    {   
        result = (asn1SccBase_geometry_SplineBase_CoordinateType)asn1Sccbase_geometry_splinebase_coordinatetype_second_derivative_to_prior; 
    }
    else if(baseObj==13)
    {   
        result = (asn1SccBase_geometry_SplineBase_CoordinateType)asn1Sccbase_geometry_splinebase_coordinatetype_tangent_point_for_next; 
    }
    else if(baseObj==14)
    {   
        result = (asn1SccBase_geometry_SplineBase_CoordinateType)asn1Sccbase_geometry_splinebase_coordinatetype_tangent_point_for_prior; 
    }
    

}


