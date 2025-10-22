/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_MCU_01_SigGroup.c
 ** Wed, 22-Oct-2025, 17:28:27
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
#include "E2EPW_Marshal_SG_MCU_01_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_MCU_01_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_MCU_01_SigGroup
    ( P2CONST (SG_MCU_01_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal MCU_ActTrqValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->MCU_ActTrqValid);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 4) & 0x10;

    /* packing signal MCU_ActualSpeed */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->MCU_ActualSpeed);
    ppa[6]  = src[1];
    ppa[7]  = src[0];

    /* packing signal MCU_ActualSpeedValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->MCU_ActualSpeedValid);
    ppa[1] |= (src[0] << 5) & 0x20;

    /* packing signal MCU_ActualTorque */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->MCU_ActualTorque);
    ppa[2]  = (src[1] << 5) & 0xe0;
    ppa[2] |= (src[0] >> 3) & 0x1f;
    ppa[3]  = (src[0] << 5) & 0xe0;

    /* packing signal MCU_IsCurr */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->MCU_IsCurr);
    ppa[4]  = src[1] & 0x07;
    ppa[5]  = src[0];

    /* packing signal MCU_UdcCurr */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->MCU_UdcCurr);
    ppa[3] |= (src[1] << 3) & 0x18;
    ppa[3] |= (src[0] >> 5) & 0x07;
    ppa[4] |= (src[0] << 3) & 0xf8;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
