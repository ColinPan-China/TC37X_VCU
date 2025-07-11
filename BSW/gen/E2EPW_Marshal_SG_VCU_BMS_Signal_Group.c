/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Marshal_SG_VCU_BMS_Signal_Group.c
 ** Fri, 11-Jul-2025, 16:03:42
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
#include "E2EPW_Marshal_SG_VCU_BMS_Signal_Group.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_Marshal_SG_VCU_BMS_Signal_Group
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ******************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SG_VCU_BMS_Signal_Group
    ( P2CONST (SG_VCU_BMS_Signal_Group, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_VAR) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal VCU_ActDriveMode */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_ActDriveMode);
    ppa[4]  = (src[0] << 3) & 0x38;

    /* packing signal VCU_ActiveEnergyProfile */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_ActiveEnergyProfile);
    ppa[5]  = (src[0] << 5) & 0xe0;

    /* packing signal VCU_ActiveRgnBrkProfile */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_ActiveRgnBrkProfile);
    ppa[5] |= (src[0] << 2) & 0x1c;

    /* packing signal VCU_BMS_Control_of_NegRelay */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_BMS_Control_of_NegRelay);
    ppa[6]  = (src[0] << 4) & 0x30;

    /* packing signal VCU_BMSTargetThermLevel */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_BMSTargetThermLevel);
    ppa[6] |= (src[0] << 6) & 0xc0;

    /* packing signal VCU_Chargestatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_Chargestatus);
    ppa[3]  = src[0] & 0x0f;

    /* packing signal VCU_DrvModSwitchWarn */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_DrvModSwitchWarn);
    ppa[4] |= src[0] & 0x07;

    /* packing signal VCU_HVStatus */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_HVStatus);
    ppa[3] |= (src[0] << 4) & 0xf0;

    /* packing signal VCU_IsomeasurmentSwitch */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_IsomeasurmentSwitch);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 6) & 0x40;

    /* packing signal VCU_LimitLevel */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_LimitLevel);
    ppa[4] |= (src[0] << 6) & 0xc0;

    /* packing signal VCU_RegenBrakeLightRequest */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_RegenBrakeLightRequest);
    ppa[5] |= src[0] & 0x01;

    /* packing signal VCU_RegenBrakeLightReqVld */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_RegenBrakeLightReqVld);
    ppa[5] |= (src[0] << 1) & 0x02;

    /* packing signal VCU_RequestedModeBMS */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VCU_RequestedModeBMS);
    ppa[2]  = (src[0] << 5) & 0xe0;

    /* fill unused areas */
    ppa[7]  = 0x00;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
