/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_IBS_WheelSpeed_02_SigGroup.c
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
#include "E2EPW_Marshal_SG_IBS_WheelSpeed_02_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_IBS_WheelSpeed_02_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_IBS_WheelSpeed_02_SigGroup
    ( P2CONST (SG_IBS_WheelSpeed_02_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal IBS_RLMovingDirection */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RLMovingDirection);
    ppa[5]  = (src[0] << 5) & 0x60;

    /* packing signal IBS_RLWheelSpeed */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RLWheelSpeed);
    ppa[5] |= src[1] & 0x1f;
    ppa[6]  = src[0];

    /* packing signal IBS_RLWheelSpeed_Fault */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RLWheelSpeed_Fault);
    ppa[5] |= (src[0] << 7) & 0x80;

    /* packing signal IBS_RRMovingDirection */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RRMovingDirection);
    ppa[2]  = (src[0] << 5) & 0x60;

    /* packing signal IBS_RRWheelSpeed */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RRWheelSpeed);
    ppa[2] |= src[1] & 0x1f;
    ppa[3]  = src[0];

    /* packing signal IBS_RRWheelSpeed_Fault */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RRWheelSpeed_Fault);
    ppa[2] |= (src[0] << 7) & 0x80;

    /* packing signal IBS_RLWheelPulseCounter */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RLWheelPulseCounter);
    ppa[7]  = src[0];

    /* packing signal IBS_RRWheelPulseCounter */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RRWheelPulseCounter);
    ppa[4]  = src[0];

    /* fill unused areas */
    ppa[1] &= 0x0f;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
