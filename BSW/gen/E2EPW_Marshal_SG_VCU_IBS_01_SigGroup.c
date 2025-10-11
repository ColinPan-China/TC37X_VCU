/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_VCU_IBS_01_SigGroup.c
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
#include "E2EPW_Marshal_SG_VCU_IBS_01_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_VCU_IBS_01_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_VCU_IBS_01_SigGroup
    ( P2CONST (SG_VCU_IBS_01_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal VCU_MotorActualTorque */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_MotorActualTorque);
    ppa[4]  = (src[1] << 5) & 0xe0;
    ppa[4] |= (src[0] >> 3) & 0x1f;
    ppa[5]  = (src[0] << 5) & 0xe0;

    /* packing signal VCU_MotorActualTorqueValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_MotorActualTorqueValid);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 6) & 0x40;

    /* packing signal VCU_OPStandstillReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_OPStandstillReq);
    ppa[5] |= (src[0] << 1) & 0x06;

    /* packing signal VCU_WheelTrqACT */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_WheelTrqACT);
    ppa[6]  = src[1];
    ppa[7]  = src[0];

    /* packing signal VCU_WheelTrqACTValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_WheelTrqACTValid);
    ppa[5] |= src[0] & 0x01;

    /* fill unused areas */
    ppa[2]  = 0x00;
    ppa[3]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
