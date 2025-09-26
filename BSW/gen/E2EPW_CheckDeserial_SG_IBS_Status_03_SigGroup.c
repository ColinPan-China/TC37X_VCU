/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_CheckDeserial_SG_IBS_Status_03_SigGroup.c
 ** Fri, 26-Sep-2025, 10:45:49
 **/

/******************************************************************
 * MISRA RULE 19.1 VIOLATION:
 * Error Message : Msg(4:5087) #include statements in a file
 *   should only be preceded by other preprocessor directives or
 *   comments.
 * Justification : Inclusion of MemMap.h is AUTOSAR specific.
 ******************************************************************/
/* PRQA S 5087 EOF */

#include "Rte_CtAp_CANHandler.h"
#include "E2EPW_CheckDeserial_SG_IBS_Status_03_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_CheckDeserial_SG_IBS_Status_03_SigGroup
 * Description        : Checks if the signals in the de-serialized
 *                      protected data element are in a valid
 *                      range, considering their bit length in the
 *                      protected pdu area.
 * Parameter pde (in) : pointer to protected data element
 * Return value       : 0                    deserial check passed
 *                      E2EPW_DESERIAL_ERR   deserial check failed
 * Remarks            : none
 ******************************************************************/
FUNC (uint8, E2EPW_CODE) E2EPW_CheckDeserial_SG_IBS_Status_03_SigGroup
    ( P2CONST (SG_IBS_Status_03_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde )
{
    VAR (uint8, AUTOMATIC) ret = 0;

    if ((pde->IBS_ABPActive & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_ABSActive & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_EBDActive & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_EBDFault & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_SystemStatus & 0xf8u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_TCSFault & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_VCU_DecelerationRequest_Available & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_VehicleSpeed & 0xe000u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->MessageCounter_0B4 & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_DTCFault & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_VehicleSpeedValid & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_ABPAvailable & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_ABSFault & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_EPBTextdisplay & 0xf8u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_VDCFault & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    return ret;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
