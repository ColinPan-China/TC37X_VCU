/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_CheckDeserial_SG_BCM_05_SigGroup.c
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

#include "Rte_CtAp_CANHandler.h"
#include "E2EPW_CheckDeserial_SG_BCM_05_SigGroup.h"

#define E2EPW_START_SEC_CODE_LIB
#include "MemMap.h"

/******************************************************************
 * Function name      : E2EPW_CheckDeserial_SG_BCM_05_SigGroup
 * Description        : Checks if the signals in the de-serialized
 *                      protected data element are in a valid
 *                      range, considering their bit length in the
 *                      protected pdu area.
 * Parameter pde (in) : pointer to protected data element
 * Return value       : 0                    deserial check passed
 *                      E2EPW_DESERIAL_ERR   deserial check failed
 * Remarks            : none
 ******************************************************************/
FUNC (uint8, E2EPW_CODE) E2EPW_CheckDeserial_SG_BCM_05_SigGroup
    ( P2CONST (SG_BCM_05_SigGroup, AUTOMATIC, E2EPW_APPL_DATA) pde )
{
    VAR (uint8, AUTOMATIC) ret = 0;

    if ((pde->BCM_FLSeatBeltRemindReq & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_FRSeatBeltRemindReq & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_RLSeatBeltRemindReq & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_RRSeatBeltRemindReq & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->MessageCounter_33A & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_AutoCloseWinFunSts & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_ChrgFlapLockSts & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_DomeLampAutoSts & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_DomeLampBrightSts & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_FrontWiperModeSts & 0xf8u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_GearTimesSts & 0xf8u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_KeyNotInCarRemind & 0xfeu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_PuddleLiReq & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_WelLightshowOnOffSts & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_WiperServiceSts & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->BCM_WiperWorkingSts & 0xf8u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    return ret;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "MemMap.h"

/*  << EOF >>  */
