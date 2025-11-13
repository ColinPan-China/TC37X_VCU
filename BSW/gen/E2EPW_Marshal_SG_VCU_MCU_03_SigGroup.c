/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_VCU_MCU_03_SigGroup.c
 ** Wed, 12-Nov-2025, 17:02:39
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
#include "E2EPW_Marshal_SG_VCU_MCU_03_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_VCU_MCU_03_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_VCU_MCU_03_SigGroup
    ( P2CONST (SG_VCU_MCU_03_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal VCU_ActualGear */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_ActualGear);
    ppa[4]  = src[0] & 0x07;

    /* packing signal VCU_BrakepedalStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_BrakepedalStatus);
    ppa[5]  = (src[0] << 6) & 0xc0;

    /* packing signal VCU_KL15eOn */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_KL15eOn);
    ppa[4] |= (src[0] << 7) & 0x80;

    /* packing signal VCU_MCUDesiredTorque */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_MCUDesiredTorque);
    ppa[2]  = (src[1] << 5) & 0xe0;
    ppa[2] |= (src[0] >> 3) & 0x1f;
    ppa[3]  = (src[0] << 5) & 0xe0;

    /* packing signal VCU_MCUSurgeDamperState */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_MCUSurgeDamperState);
    ppa[4] |= (src[0] << 4) & 0x30;

    /* packing signal VCU_PWTErrorLevel */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_PWTErrorLevel);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 4) & 0xf0;

    /* packing signal VCU_RequestedModeMCU */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_RequestedModeMCU);
    ppa[5] |= src[0] & 0x0f;

    /* packing signal VCU_TCSActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_TCSActive);
    ppa[4] |= (src[0] << 6) & 0x40;

    /* packing signal VCU_TrqThresholdDampgCtl */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_TrqThresholdDampgCtl);
    ppa[6]  = src[0];

    /* fill unused areas */
    ppa[7]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
