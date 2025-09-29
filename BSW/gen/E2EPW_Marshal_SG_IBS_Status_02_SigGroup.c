/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_IBS_Status_02_SigGroup.c
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
#include "E2EPW_Marshal_SG_IBS_Status_02_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_IBS_Status_02_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_IBS_Status_02_SigGroup
    ( P2CONST (SG_IBS_Status_02_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal IBS_AEBActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_AEBActive);
    ppa[3]  = (src[0] << 2) & 0x04;

    /* packing signal IBS_EPBFailureLamp */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_EPBFailureLamp);
    ppa[2]  = (src[0] << 6) & 0xc0;

    /* packing signal IBS_EPBFunctionLamp */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_EPBFunctionLamp);
    ppa[4]  = (src[0] << 2) & 0x0c;

    /* packing signal IBS_EPBworkingSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_EPBworkingSts);
    ppa[2] |= (src[0] << 1) & 0x0e;

    /* packing signal IBS_TCSActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_TCSActive);
    ppa[3] |= (src[0] << 7) & 0x80;

    /* packing signal IBS_VDCActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_VDCActive);
    ppa[3] |= (src[0] << 6) & 0x40;

    /* packing signal IBS_EPBControllerSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_EPBControllerSts);
    ppa[5]  = (src[0] << 6) & 0xc0;

    /* packing signal IBS_AEBAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_AEBAvailable);
    ppa[4] |= (src[0] << 1) & 0x02;

    /* packing signal IBS_AVHAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_AVHAvailable);
    ppa[4] |= (src[0] << 7) & 0x80;

    /* packing signal IBS_AWBActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_AWBActive);
    ppa[4] |= (src[0] << 4) & 0x10;

    /* packing signal IBS_AWBAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_AWBAvailable);
    ppa[4] |= src[0] & 0x01;

    /* packing signal IBS_BrakeLightRequest */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_BrakeLightRequest);
    ppa[2] |= (src[0] << 4) & 0x30;

    /* packing signal IBS_HazWarnReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_HazWarnReq);
    ppa[4] |= (src[0] << 5) & 0x60;

    /* packing signal IBS_HDCAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_HDCAvailable);
    ppa[3] |= (src[0] << 3) & 0x08;

    /* packing signal IBS_HHCActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_HHCActive);
    ppa[3] |= (src[0] << 1) & 0x02;

    /* packing signal IBS_HHCAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_HHCAvailable);
    ppa[3] |= src[0] & 0x01;

    /* fill unused areas */
    ppa[1] &= 0x0f;
    ppa[6]  = 0x00;
    ppa[7]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
