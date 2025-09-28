/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_ADCU_AEB_01_SigGroup.c
 ** Sun, 28-Sep-2025, 16:49:46
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
#include "E2EPW_Marshal_SG_ADCU_AEB_01_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_ADCU_AEB_01_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_ADCU_AEB_01_SigGroup
    ( P2CONST (SG_ADCU_AEB_01_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal ADCU_AEB_State */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->ADCU_AEB_State);
    ppa[2]  = (src[0] << 1) & 0x06;

    /* packing signal ADCU_AEB_AWB_Level */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->ADCU_AEB_AWB_Level);
    ppa[5]  = (src[0] << 1) & 0x0e;

    /* packing signal ADCU_AEB_AWB_Req */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->ADCU_AEB_AWB_Req);
    ppa[6]  = (src[0] << 6) & 0x40;

    /* packing signal ADCU_AEB_Decel_Cmd */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->ADCU_AEB_Decel_Cmd);
    ppa[4]  = (src[1] << 6) & 0xc0;
    ppa[4] |= (src[0] >> 2) & 0x3f;
    ppa[5] |= (src[0] << 6) & 0xc0;

    /* packing signal ADCU_AEB_Prefill_CMD */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->ADCU_AEB_Prefill_CMD);
    ppa[6] |= (src[0] << 7) & 0x80;

    /* packing signal ADCU_AEB_Stop_Req */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->ADCU_AEB_Stop_Req);
    ppa[6] |= (src[0] << 5) & 0x20;

    /* packing signal ADCU_AEBReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->ADCU_AEBReq);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 7) & 0x80;

    /* packing signal ADCU_AEBWarningSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->ADCU_AEBWarningSts);
    ppa[6] |= src[0] & 0x07;

    /* packing signal ADCU_FCW_State */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->ADCU_FCW_State);
    ppa[2] |= (src[0] << 3) & 0x18;

    /* fill unused areas */
    ppa[3]  = 0x00;
    ppa[7]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
