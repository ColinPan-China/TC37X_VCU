/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_IBS_Status_06_Signal_Group.c
 ** Tue, 09-Sep-2025, 09:11:16
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

#include "Rte_Com_SWC.h"
#include "E2EPW_Marshal_SG_IBS_Status_06_Signal_Group.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_IBS_Status_06_Signal_Group
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_IBS_Status_06_Signal_Group
    ( P2CONST (SG_IBS_Status_06_Signal_Group, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal IBS_AVHSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_AVHSts);
    ppa[6]  = (src[0] << 6) & 0xc0;

    /* packing signal IBS_BrakeFluidWarning */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_BrakeFluidWarning);
    ppa[6] |= src[0] & 0x03;

    /* packing signal IBS_EPBFailureStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_EPBFailureStatus);
    ppa[7]  = (src[0] << 6) & 0xc0;

    /* packing signal IBS_ESClampdisplay */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_ESClampdisplay);
    ppa[6] |= (src[0] << 4) & 0x30;

    /* packing signal IBS_ESCOffSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_ESCOffSts);
    ppa[5]  = (src[0] << 5) & 0x20;

    /* packing signal IBS_FactoryMode */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_FactoryMode);
    ppa[5] |= src[0] & 0x01;

    /* packing signal IBS_HBAActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_HBAActive);
    ppa[5] |= (src[0] << 6) & 0x40;

    /* packing signal IBS_HDCSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_HDCSts);
    ppa[6] |= (src[0] << 2) & 0x0c;

    /* packing signal IBS_MaintenaceMode */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_MaintenaceMode);
    ppa[5] |= (src[0] << 2) & 0x04;

    /* packing signal IBS_RollerbenchMode */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RollerbenchMode);
    ppa[5] |= (src[0] << 1) & 0x02;

    /* packing signal IBS_RWUActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RWUActive);
    ppa[5] |= (src[0] << 4) & 0x10;

    /* packing signal IBS_RWUAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_RWUAvailable);
    ppa[5] |= (src[0] << 3) & 0x08;

    /* packing signal IBS_TireMonSysSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_TireMonSysSts);
    ppa[7] |= (src[0] << 5) & 0x20;

    /* packing signal IBS_TireWarnFrntLe */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_TireWarnFrntLe);
    ppa[7] |= (src[0] << 1) & 0x02;

    /* packing signal IBS_TireWarnFrntRi */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_TireWarnFrntRi);
    ppa[7] |= src[0] & 0x01;

    /* packing signal IBS_TireWarnReLe */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_TireWarnReLe);
    ppa[7] |= (src[0] << 3) & 0x08;

    /* packing signal IBS_TireWarnReRi */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_TireWarnReRi);
    ppa[7] |= (src[0] << 2) & 0x04;

    /* packing signal IBS_TPMS_ResetSts */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->IBS_TPMS_ResetSts);
    ppa[7] |= (src[0] << 4) & 0x10;

    /* fill unused areas */
    ppa[1] &= 0x0f;
    ppa[2]  = 0x00;
    ppa[3]  = 0x00;
    ppa[4]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
