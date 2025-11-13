/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_EPS_CONV_SigGroup.c
 ** Wed, 12-Nov-2025, 17:02:39
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
#include "E2EPW_Marshal_SG_EPS_CONV_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_EPS_CONV_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_EPS_CONV_SigGroup
    ( P2CONST (SG_EPS_CONV_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal EPS_ModeChangeEnable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->EPS_ModeChangeEnable);
    ppa[4]  = (src[0] << 4) & 0x10;

    /* packing signal EPS_ModeFb */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->EPS_ModeFb);
    ppa[4] |= (src[0] << 2) & 0x0c;

    /* packing signal EPS_SteeringGearAngle */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->EPS_SteeringGearAngle);
    ppa[5]  = src[1];
    ppa[6]  = src[0];

    /* packing signal EPS_SteeringGearAngleSpd */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->EPS_SteeringGearAngleSpd);
    ppa[2]  = src[1];
    ppa[3]  = src[0];

    /* packing signal EPS_SteeringGearAngleSpdValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->EPS_SteeringGearAngleSpdValid);
    ppa[4] |= (src[0] << 6) & 0x40;

    /* packing signal EPS_SteeringGearAngleValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->EPS_SteeringGearAngleValid);
    ppa[4] |= (src[0] << 7) & 0x80;

    /* packing signal EPS_TorsionBarTorque */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->EPS_TorsionBarTorque);
    ppa[7]  = src[0];

    /* packing signal EPS_TorsionBarTorqueValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->EPS_TorsionBarTorqueValid);
    ppa[4] |= (src[0] << 5) & 0x20;

    /* packing signal EPS_WarningLamp */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->EPS_WarningLamp);
    ppa[4] |= src[0] & 0x03;

    /* fill unused areas */
    ppa[1] &= 0x0f;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
