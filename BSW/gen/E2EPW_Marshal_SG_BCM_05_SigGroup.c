/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_BCM_05_SigGroup.c
 ** Wed, 05-Nov-2025, 16:26:47
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
#include "E2EPW_Marshal_SG_BCM_05_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_BCM_05_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_BCM_05_SigGroup
    ( P2CONST (SG_BCM_05_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal BCM_FLSeatBeltRemindReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_FLSeatBeltRemindReq);
    ppa[2]  = (src[0] << 2) & 0x0c;

    /* packing signal BCM_FRSeatBeltRemindReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_FRSeatBeltRemindReq);
    ppa[2] |= src[0] & 0x03;

    /* packing signal BCM_RLSeatBeltRemindReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_RLSeatBeltRemindReq);
    ppa[3]  = (src[0] << 6) & 0xc0;

    /* packing signal BCM_RRSeatBeltRemindReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_RRSeatBeltRemindReq);
    ppa[3] |= (src[0] << 4) & 0x30;

    /* packing signal BCM_AutoCloseWinFunSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_AutoCloseWinFunSts);
    ppa[4]  = (src[0] << 4) & 0x10;

    /* packing signal BCM_ChrgFlapLockSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_ChrgFlapLockSts);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 4) & 0x10;

    /* packing signal BCM_DomeLampAutoSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_DomeLampAutoSts);
    ppa[5]  = src[0] & 0x03;

    /* packing signal BCM_DomeLampBrightSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_DomeLampBrightSts);
    ppa[4] |= (src[0] << 5) & 0x20;

    /* packing signal BCM_FrontWiperModeSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_FrontWiperModeSts);
    ppa[5] |= (src[0] << 2) & 0x1c;

    /* packing signal BCM_GearTimesSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_GearTimesSts);
    ppa[1] |= (src[0] << 5) & 0xe0;

    /* packing signal BCM_KeyNotInCarRemind */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_KeyNotInCarRemind);
    ppa[2] |= (src[0] << 4) & 0x10;

    /* packing signal BCM_PuddleLiReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_PuddleLiReq);
    ppa[4] |= (src[0] << 6) & 0xc0;

    /* packing signal BCM_WelLightshowOnOffSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_WelLightshowOnOffSts);
    ppa[6]  = (src[0] << 2) & 0x0c;

    /* packing signal BCM_WiperServiceSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_WiperServiceSts);
    ppa[4] |= src[0] & 0x03;

    /* packing signal BCM_WiperWorkingSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->BCM_WiperWorkingSts);
    ppa[5] |= (src[0] << 5) & 0xe0;

    /* fill unused areas */
    ppa[7]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
