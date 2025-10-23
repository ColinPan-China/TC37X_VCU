/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_CheckDeserial_SG_IBS_Status_06_SigGroup.c
 ** Thu, 23-Oct-2025, 10:40:26
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
#include "E2EPW_CheckDeserial_SG_IBS_Status_06_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_CheckDeserial_SG_IBS_Status_06_SigGroup
 * Description        : Checks if the signals in the de-serialized
 *                      protected data element are in a valid
 *                      range, considering their bit length in the
 *                      protected pdu area.
 * Parameter pde (in) : pointer to protected data element
 * Return value       : 0                    deserial check passed
 *                      E2EPW_DESERIAL_ERR   deserial check failed
 * Remarks            : none
 ******************************************************************/
FUNC (uint8, E2EPW_CODE) E2EPW_CheckDeserial_SG_IBS_Status_06_SigGroup
    ( P2CONST (SG_IBS_Status_06_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde )
{
    VAR (uint8, AUTOMATIC) ret = 0;

    if ((pde->IBS_AVHSts & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_BrakeFluidWarning & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_ESCOffSts & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_HDCSts & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_RollerbenchMode & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_RWUActive & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->MessageCounter_0BC & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_EPBFailureStatus & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_ESClampdisplay & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_FactoryMode & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_HBAActive & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_MaintenaceMode & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_RWUAvailable & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_TireMonSysSts & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_TireWarnFrntLe & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_TireWarnFrntRi & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_TireWarnReLe & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_TireWarnReRi & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->IBS_TPMS_ResetSts & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    return ret;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
