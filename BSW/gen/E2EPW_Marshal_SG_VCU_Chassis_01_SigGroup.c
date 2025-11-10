/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_VCU_Chassis_01_SigGroup.c
 ** Mon, 10-Nov-2025, 14:36:39
 **/

/******************************************************************
 * MISRA RULE 19.1 VIOLATION:
 * Error Message : Msg(4:5087) #include statements in a file
 *   should only be preceded by other preprocessor directives or
 *   comments.
 * Justification : Inclusion of MemMap.h is AUTOSAR specific.
 ******************************************************************/
/* PRQA S 5087 EOF */
/******************************************************************
 * MISRA RULE 11.4 VIOLATION:
 * Error Message : Msg(4:0310) Casting to different object pointer
 *   type.
 * Justification : Marshal code works on direct byte access for
 *   different application types.
 ******************************************************************/
/* PRQA S 0310 EOF */
/******************************************************************
 * MISRA RULE 10.1 VIOLATION:
 * Error Message : Msg(4:3757) Implicit conversion: int to unsigned
 *   char.
 * Justification : Marshal code generator ensures no loss of data
 *   during endianness conversion.
 ******************************************************************/
/* PRQA S 3757 EOF */

#include "Rte_CtAp_CANHandler.h"
#include "E2EPW_Marshal_SG_VCU_Chassis_01_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_VCU_Chassis_01_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_VCU_Chassis_01_SigGroup
    ( P2CONST (SG_VCU_Chassis_01_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal VCU_ADASOverride */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_ADASOverride);
    ppa[5]  = (src[0] << 4) & 0x10;

    /* packing signal VCU_APSTorqueRequestActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_APSTorqueRequestActive);
    ppa[5] |= (src[0] << 3) & 0x08;

    /* packing signal VCU_APSTorqueRequestAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_APSTorqueRequestAvailable);
    ppa[5] |= (src[0] << 2) & 0x04;

    /* packing signal VCU_BrakeCompensateWarn */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_BrakeCompensateWarn);
    ppa[7]  = (src[0] << 3) & 0x18;

    /* packing signal VCU_DecelerationReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_DecelerationReq);
    ppa[6]  = src[0];

    /* packing signal VCU_DecelerationReqactive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_DecelerationReqactive);
    ppa[5] |= src[0] & 0x01;

    /* packing signal VCU_DriverTorqueRequest */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_DriverTorqueRequest);
    ppa[4]  = (src[1] << 5) & 0xe0;
    ppa[4] |= (src[0] >> 3) & 0x1f;
    ppa[5] |= (src[0] << 5) & 0xe0;

    /* packing signal VCU_EnergyManagementWarn */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_EnergyManagementWarn);
    ppa[7] |= (src[0] << 1) & 0x06;

    /* packing signal VCU_RegenTorqueCap */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_RegenTorqueCap);
    ppa[2]  = src[1];
    ppa[3]  = src[0];

    /* packing signal VCU_RegenTorqueCapValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_RegenTorqueCapValid);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 7) & 0x80;

    /* packing signal VCU_RegStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_RegStatus);
    ppa[7] |= (src[0] << 5) & 0xe0;

    /* packing signal VCU_TorqueRequestActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_TorqueRequestActive);
    ppa[1] |= (src[0] << 4) & 0x10;

    /* packing signal VCU_TorqueRequestAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_TorqueRequestAvailable);
    ppa[1] |= (src[0] << 5) & 0x20;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
