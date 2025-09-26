/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_BMS_status_01_SigGroup.c
 ** Fri, 26-Sep-2025, 10:45:49
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
#include "E2EPW_Marshal_SG_BMS_status_01_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_BMS_status_01_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_BMS_status_01_SigGroup
    ( P2CONST (SG_BMS_status_01_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal BMS_ChargeStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_ChargeStatus);
    ppa[3]  = (src[0] << 1) & 0x0e;

    /* packing signal BMS_ErrorIsolationSingleLow */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_ErrorIsolationSingleLow);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 6) & 0xc0;

    /* packing signal BMS_ErrorLevel */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_ErrorLevel);
    ppa[4]  = src[0] & 0x0f;

    /* packing signal BMS_HVinterlockState */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_HVinterlockState);
    ppa[2]  = (src[0] << 2) & 0x04;

    /* packing signal BMS_InsulationDetectionStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_InsulationDetectionStatus);
    ppa[2] |= (src[0] << 3) & 0x08;

    /* packing signal BMS_PreCharge */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_PreCharge);
    ppa[3] |= (src[0] << 6) & 0xc0;

    /* packing signal BMS_SOH */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_SOH);
    ppa[5]  = src[0];

    /* packing signal BMS_SysRegInsulationValue */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_SysRegInsulationValue);
    ppa[6]  = src[1];
    ppa[7]  = src[0];

    /* packing signal BMS_ThrmlRunawayFault */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_ThrmlRunawayFault);
    ppa[2] |= src[0] & 0x01;

    /* packing signal BMS_WorkMode */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_WorkMode);
    ppa[2] |= (src[0] << 5) & 0xe0;

    /* packing signal BMS_BalancingStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_BalancingStatus);
    ppa[2] |= (src[0] << 4) & 0x10;

    /* packing signal BMS_RunHeatStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BMS_RunHeatStatus);
    ppa[4] |= (src[0] << 5) & 0xe0;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
