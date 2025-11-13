/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_VCU_HMIsignals_01_SigGroup.c
 ** Thu, 13-Nov-2025, 13:27:49
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
#include "E2EPW_Marshal_SG_VCU_HMIsignals_01_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_VCU_HMIsignals_01_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_VCU_HMIsignals_01_SigGroup
    ( P2CONST (SG_VCU_HMIsignals_01_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal VCU_CriSysFailure */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_CriSysFailure);
    ppa[3]  = src[0] & 0x03;

    /* packing signal VCU_DCDCFail */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_DCDCFail);
    ppa[2]  = (src[0] << 5) & 0x20;

    /* packing signal VCU_DriveMotOvrTemp */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_DriveMotOvrTemp);
    ppa[2] |= (src[0] << 6) & 0x40;

    /* packing signal VCU_HVBatCriFail */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_HVBatCriFail);
    ppa[3] |= (src[0] << 4) & 0x30;

    /* packing signal VCU_HVBatOvrTemp */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_HVBatOvrTemp);
    ppa[2] |= (src[0] << 3) & 0x08;

    /* packing signal VCU_HVILError */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_HVILError);
    ppa[2] |= (src[0] << 2) & 0x04;

    /* packing signal VCU_HVInsulResFault */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_HVInsulResFault);
    ppa[2] |= (src[0] << 1) & 0x02;

    /* packing signal VCU_InvldGearSel */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_InvldGearSel);
    ppa[6]  = src[0] & 0x0f;

    /* packing signal VCU_LimpHome */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_LimpHome);
    ppa[2] |= src[0] & 0x01;

    /* packing signal VCU_PlugStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_PlugStatus);
    ppa[6] |= (src[0] << 5) & 0xe0;

    /* packing signal VCU_ReachLimitStd */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_ReachLimitStd);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 7) & 0x80;

    /* packing signal VCU_MileagelowRemind */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_MileagelowRemind);
    ppa[7]  = (src[0] << 5) & 0x20;

    /* fill unused areas */
    ppa[4]  = 0x00;
    ppa[5]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
