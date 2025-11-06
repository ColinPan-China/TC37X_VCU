/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_CheckDeserial_SG_ADCU_AEB_01_SigGroup.c
 ** Thu, 06-Nov-2025, 14:48:13
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
#include "E2EPW_CheckDeserial_SG_ADCU_AEB_01_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_CheckDeserial_SG_ADCU_AEB_01_SigGroup
 * Description        : Checks if the signals in the de-serialized
 *                      protected data element are in a valid
 *                      range, considering their bit length in the
 *                      protected pdu area.
 * Parameter pde (in) : pointer to protected data element
 * Return value       : 0                    deserial check passed
 *                      E2EPW_DESERIAL_ERR   deserial check failed
 * Remarks            : none
 ******************************************************************/
FUNC (uint8, E2EPW_CODE) E2EPW_CheckDeserial_SG_ADCU_AEB_01_SigGroup
    ( P2CONST (SG_ADCU_AEB_01_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde )
{
    VAR (uint8, AUTOMATIC) ret = 0;

    if ((pde->ADCU_AEB_State & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->MessageCounter_0E2 & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ADCU_AEB_AWB_Level & 0xf8u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ADCU_AEB_AWB_Req & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ADCU_AEB_Decel_Cmd > 511) || (pde->ADCU_AEB_Decel_Cmd < -512))
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ADCU_AEB_Prefill_CMD & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ADCU_AEB_Stop_Req & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ADCU_AEBReq & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ADCU_AEBWarningSts & 0xf8u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ADCU_FCW_State & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    return ret;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
