/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_VCU_AccPedal_SigGroup.c
 ** Tue, 11-Nov-2025, 10:13:14
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
#include "E2EPW_Marshal_SG_VCU_AccPedal_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_VCU_AccPedal_SigGroup
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_VCU_AccPedal_SigGroup
    ( P2CONST (SG_VCU_AccPedal_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal VCU_AccelerationPedal */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_AccelerationPedal);
    ppa[2]  = (src[1] << 6) & 0xc0;
    ppa[2] |= (src[0] >> 2) & 0x3f;
    ppa[3]  = (src[0] << 6) & 0xc0;

    /* packing signal VCU_AccelerationPedalValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_AccelerationPedalValid);
    ppa[3] |= (src[0] << 5) & 0x20;

    /* packing signal VCU_EPBReq */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_EPBReq);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 5) & 0x60;

    /* packing signal VCU_Kickdown */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_Kickdown);
    ppa[7]  = src[0] & 0x01;

    /* packing signal VCU_TargetGear */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_TargetGear);
    ppa[5]  = (src[0] << 1) & 0x0e;

    /* packing signal VCU_VehicleSpeed */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_VehicleSpeed);
    ppa[6]  = (src[1] << 3) & 0xf8;
    ppa[6] |= (src[0] >> 5) & 0x07;
    ppa[7] |= (src[0] << 3) & 0xf8;

    /* packing signal VCU_VehicleSpeedValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_VehicleSpeedValid);
    ppa[1] |= (src[0] << 7) & 0x80;

    /* packing signal VCU_VLCTorqueRequestActive */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_VLCTorqueRequestActive);
    ppa[7] |= (src[0] << 1) & 0x02;

    /* packing signal VCU_VLCTorqueRequestAvailable */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_VLCTorqueRequestAvailable);
    ppa[7] |= (src[0] << 2) & 0x04;

    /* packing signal VCU_VirtualACPedal */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_VirtualACPedal);
    ppa[3] |= src[1] & 0x03;
    ppa[4]  = src[0];

    /* packing signal VCU_VirtualACPedalValid */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_VirtualACPedalValid);
    ppa[3] |= (src[0] << 2) & 0x04;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
