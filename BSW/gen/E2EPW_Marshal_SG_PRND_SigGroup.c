/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_PRND_SigGroup.c
 ** Mon, 29-Sep-2025, 15:02:46
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
#include "E2EPW_Marshal_SG_PRND_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_PRND_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_PRND_SigGroup
    ( P2CONST (SG_PRND_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal PRND_Pbutton */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->PRND_Pbutton);
    ppa[2]  = (src[0] << 4) & 0x30;

    /* packing signal PRND_Pbutton_FaultSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->PRND_Pbutton_FaultSts);
    ppa[2] |= (src[0] << 3) & 0x08;

    /* packing signal PRND_RNDbutton */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->PRND_RNDbutton);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 5) & 0xe0;

    /* packing signal PRND_RNDbutton_FaultSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->PRND_RNDbutton_FaultSts);
    ppa[2] |= (src[0] << 2) & 0x04;

    /* fill unused areas */
    ppa[3]  = 0x00;
    ppa[4]  = 0x00;
    ppa[5]  = 0x00;
    ppa[6]  = 0x00;
    ppa[7]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
