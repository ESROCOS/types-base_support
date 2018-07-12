
#include "Base-JointState-MODEConvert.hpp"

#include "OpaqueConversion.hpp"

//Conversion functions from asn1 to c++ type



void asn1SccBase_JointState_MODE_fromAsn1(base::JointState::MODE& result, const asn1SccBase_JointState_MODE& asnVal)
{
    switch(asnVal)
    {
        case asn1Sccbase_jointstate_mode_acceleration:
            result = (base::JointState::MODE)4; 
            break;
        case asn1Sccbase_jointstate_mode_effort:
            result = (base::JointState::MODE)2; 
            break;
        case asn1Sccbase_jointstate_mode_position:
            result = (base::JointState::MODE)0; 
            break;
        case asn1Sccbase_jointstate_mode_raw:
            result = (base::JointState::MODE)3; 
            break;
        case asn1Sccbase_jointstate_mode_speed:
            result = (base::JointState::MODE)1; 
            break;
        case asn1Sccbase_jointstate_mode_unset:
            result = (base::JointState::MODE)5; 
            break;
    }

}

//Conversion functions from c++ type to asn1

void asn1SccBase_JointState_MODE_toAsn1(asn1SccBase_JointState_MODE& result, const base::JointState::MODE& baseObj)
{
    
    if(baseObj==4)
    {
        result = (asn1SccBase_JointState_MODE)asn1Sccbase_jointstate_mode_acceleration; 
    }
    else if(baseObj==2)
    {   
        result = (asn1SccBase_JointState_MODE)asn1Sccbase_jointstate_mode_effort; 
    }
    else if(baseObj==0)
    {   
        result = (asn1SccBase_JointState_MODE)asn1Sccbase_jointstate_mode_position; 
    }
    else if(baseObj==3)
    {   
        result = (asn1SccBase_JointState_MODE)asn1Sccbase_jointstate_mode_raw; 
    }
    else if(baseObj==1)
    {   
        result = (asn1SccBase_JointState_MODE)asn1Sccbase_jointstate_mode_speed; 
    }
    else if(baseObj==5)
    {   
        result = (asn1SccBase_JointState_MODE)asn1Sccbase_jointstate_mode_unset; 
    }
    

}


