/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Conversion functions for asn1SccBase_samples_RigidBodyState_m.
 */

#ifndef BASE_SAMPLES_RIGIDBODYSTATE_M_CONVERT
#define BASE_SAMPLES_RIGIDBODYSTATE_M_CONVERT

#include "baseTypes.h"
#include <base/m_types/base_samples_RigidBodyState.hpp>
#include <base/m_types/base_samples_RigidBodyState.hpp>
#include <string.h>
#include <stdio.h>

#include "Base-TimeConvert.hpp"
#include "T-StringConvert.hpp"
#include "T-StringConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
#include "Wrappers-QuaterniondConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"
#include "Wrappers-Vector3dConvert.hpp"
#include "Wrappers-Matrix3dConvert.hpp"

//Conversion functions from asn1 to c++ type
void asn1SccBase_samples_RigidBodyState_m_fromAsn1(base::samples::RigidBodyState_m& result, const asn1SccBase_samples_RigidBodyState_m& asnVal);

//Conversion functions from C++ to Asn1 type
void asn1SccBase_samples_RigidBodyState_m_toAsn1(asn1SccBase_samples_RigidBodyState_m& result, const base::samples::RigidBodyState_m& baseObj);


#endif //BASE_SAMPLES_RIGIDBODYSTATE_M_CONVERT
