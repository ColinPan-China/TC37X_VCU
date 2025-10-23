/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_DCM_FL_02_SigGroup.c
 ** Thu, 23-Oct-2025, 10:40:25
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
#include "E2EPW_Marshal_SG_DCM_FL_02_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_DCM_FL_02_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_DCM_FL_02_SigGroup
    ( P2CONST (SG_DCM_FL_02_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal DCM_FL_DoorFLSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_DoorFLSts);
    ppa[2]  = (src[0] << 7) & 0x80;

    /* packing signal DCM_FL_FRWndSwA */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_FRWndSwA);
    ppa[2] |= (src[0] << 4) & 0x70;

    /* packing signal DCM_FL_LeftMirrorHorizontalPos */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_LeftMirrorHorizontalPos);
    ppa[5]  = src[0];

    /* packing signal DCM_FL_LeftMirrorVerticalPos */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_LeftMirrorVerticalPos);
    ppa[6]  = src[0];

    /* packing signal DCM_FL_MirrorAutoFoldUnfoldSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_MirrorAutoFoldUnfoldSts);
    ppa[7]  = (src[0] << 6) & 0x40;

    /* packing signal DCM_FL_MirrorAutoTurnDownSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_MirrorAutoTurnDownSts);
    ppa[7] |= (src[0] << 7) & 0x80;

    /* packing signal DCM_FL_MirrorFold_UnfoldSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_MirrorFold_UnfoldSts);
    ppa[7] |= (src[0] << 4) & 0x10;

    /* packing signal DCM_FL_RearmirrorHeatingSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_RearmirrorHeatingSts);
    ppa[7] |= (src[0] << 5) & 0x20;

    /* packing signal DCM_FL_RLWndSwA */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_RLWndSwA);
    ppa[2] |= (src[0] << 1) & 0x0e;

    /* packing signal DCM_FL_RRWndSwA */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->DCM_FL_RRWndSwA);
    ppa[3]  = (src[0] << 5) & 0xe0;

    /* fill unused areas */
    ppa[1] &= 0x0f;
    ppa[4]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
