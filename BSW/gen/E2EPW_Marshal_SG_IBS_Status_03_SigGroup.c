/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_IBS_Status_03_SigGroup.c
 ** Sat, 11-Oct-2025, 16:08:20
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
#include "E2EPW_Marshal_SG_IBS_Status_03_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_IBS_Status_03_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_IBS_Status_03_SigGroup
    ( P2CONST (SG_IBS_Status_03_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal IBS_ABPActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_ABPActive);
    ppa[4]  = src[0] & 0x01;

    /* packing signal IBS_ABSActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_ABSActive);
    ppa[4] |= (src[0] << 1) & 0x02;

    /* packing signal IBS_EBDActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_EBDActive);
    ppa[4] |= (src[0] << 5) & 0x20;

    /* packing signal IBS_EBDFault */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_EBDFault);
    ppa[4] |= (src[0] << 4) & 0x10;

    /* packing signal IBS_SystemStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_SystemStatus);
    ppa[3]  = src[0] & 0x07;

    /* packing signal IBS_TCSFault */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_TCSFault);
    ppa[4] |= (src[0] << 2) & 0x04;

    /* packing signal IBS_VCU_DecelerationRequest_Available */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_VCU_DecelerationRequest_Available);
    ppa[5]  = (src[0] << 2) & 0x3c;

    /* packing signal IBS_VehicleSpeed */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_VehicleSpeed);
    ppa[2]  = (src[1] << 3) & 0xf8;
    ppa[2] |= (src[0] >> 5) & 0x07;
    ppa[3] |= (src[0] << 3) & 0xf8;

    /* packing signal IBS_DTCFault */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_DTCFault);
    ppa[5] |= (src[0] << 6) & 0x40;

    /* packing signal IBS_VehicleSpeedValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_VehicleSpeedValid);
    ppa[4] |= (src[0] << 7) & 0x80;

    /* packing signal IBS_ABPAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_ABPAvailable);
    ppa[5] |= (src[0] << 7) & 0x80;

    /* packing signal IBS_ABSFault */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_ABSFault);
    ppa[4] |= (src[0] << 6) & 0x40;

    /* packing signal IBS_EPBTextdisplay */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_EPBTextdisplay);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 5) & 0xe0;

    /* packing signal IBS_VDCFault */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_VDCFault);
    ppa[4] |= (src[0] << 3) & 0x08;

    /* fill unused areas */
    ppa[6]  = 0x00;
    ppa[7]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
