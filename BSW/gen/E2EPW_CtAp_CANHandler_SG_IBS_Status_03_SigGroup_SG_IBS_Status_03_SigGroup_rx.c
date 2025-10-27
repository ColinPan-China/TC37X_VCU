/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_rx.c
 ** Mon, 27-Oct-2025, 09:38:49
 **/

/**********************************************************
 * MISRA RULE 14.1 VIOLATION:
 * Error Message : Msg(4:1503) The function '<name>' is
 *   defined but is not used within this project.
 * Justification : Library functions
 **********************************************************/
/* PRQA S 1503 EOF */
/**********************************************************
 * MISRA RULE 19.1 VIOLATION:
 * Error Message : Msg(4:5087) #include statements in a
 *   file should only be preceded by other preprocessor
 *   directives or comments.
 * Justification : Inclusion of MemMap file is AUTOSAR
 *   specific
 **********************************************************/
/* PRQA S 5087 EOF */
/**********************************************************
 * MISRA VIOLATION: 'Metrics VOCF<=4' VIOLATION:
 * Code-structure based on by AUTOSAR 'Spec.of EndtoEnd
 * Communication Protection', R3.2.1 V1.2.0./
 * and '893.061.D_End-to-End Kommunikationsabsicherung_v1.5'
 **********************************************************/
#include "Rte_CtAp_CANHandler.h"
#include "E2EPW_Marshal_SG_IBS_Status_03_SigGroup.h"
#include "E2EPW_CheckDeserial_SG_IBS_Status_03_SigGroup.h"
#include "E2EPW_CtAp_CANHandler_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_rx.h"
#ifndef STATIC
    #define STATIC static
#endif

#define CtAp_CANHandler_START_SEC_VAR_INIT_UNSPECIFIED
#include "CtAp_CANHandler_MemMap.h"

STATIC VAR (E2E_P01CheckStateType, CtAp_CANHandler_VAR_INIT)
    StateVal_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup =
{
      0                        /* LastValidCounter */
    , 0                        /* MaxDeltaCounter  */
    , TRUE                     /* WaitForFirstData */
    , FALSE                    /* NewDataAvailable */
    , 0                        /* LostData */
    , E2E_P01STATUS_NONEWDATA  /* Status */
    , 0                        /* SyncCounter */
    , 0                        /* NoNewOrRepeatedCounter */
};

STATIC P2VAR ( E2E_P01CheckStateType
             , CtAp_CANHandler_VAR_INIT
             , CtAp_CANHandler_VAR_INIT
             )
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup =
        &StateVal_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup;

#define CtAp_CANHandler_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "CtAp_CANHandler_MemMap.h"

#define CtAp_CANHandler_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "CtAp_CANHandler_MemMap.h"
/**********************************************************
 * MISRA RULE 8.7 VIOLATION:
 * Error Message : Msg(4:3218) File scope static,
 * 'ppa_..', only accessed in one function.
 * Justification : Extracted from function for 
 *   MemMap (MemMap defines cannot be stacked).
 **********************************************************/
/* PRQA S 3218 2 */
STATIC VAR (uint8, CtAp_CANHandler_VAR_NOINIT)
    ppa_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_au8 [8];

#define CtAp_CANHandler_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "CtAp_CANHandler_MemMap.h"

#define CtAp_CANHandler_START_SEC_CONST_UNSPECIFIED
#include "CtAp_CANHandler_MemMap.h"
/**********************************************************
 * MISRA RULE 8.7 VIOLATION:
 * Error Message : Msg(4:3218) File scope static,
 * 'ConfigVal_..', only accessed in one function.
 * Justification : Extracted from function for 
 *   MemMap (MemMap defines cannot be stacked).
 **********************************************************/
/* PRQA S 3218 2 */
STATIC CONST (E2E_P01ConfigType, CtAp_CANHandler_CONST)
    ConfigVal_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup =
{
      8
    , 0
    , 180
    , 12
    , E2E_P01_DATAID_BOTH
    , 64
    , 2
    , 14
    , 1
};

#define CtAp_CANHandler_STOP_SEC_CONST_UNSPECIFIED
#include "CtAp_CANHandler_MemMap.h"

#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

/**********************************************************
 * Function name: E2EPW_Init_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_rx ()
 * Description:   Initialize the E2Elib receiver-state.
 * Parameter:     None
 * Return value:  None
 * Remarks:       Call this function after an application or
 *                communication startup or reset and prior
 *                to any other E2EPW API-call.
 **********************************************************/
FUNC (void, CtAp_CANHandler_CODE) E2EPW_ReadInit_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup (void)
{
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup = &StateVal_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup;
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->LastValidCounter = 0;
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->MaxDeltaCounter  = 0;
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->WaitForFirstData = TRUE;
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->NewDataAvailable = FALSE;
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->LostData         = 0;
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->Status           = E2E_P01STATUS_NONEWDATA;
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->SyncCounter      = 0;
    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->NoNewOrRepeatedDataCounter = 0;
}

/**********************************************************
 * Function name: E2EPW_Get_ReceiverState_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup ()
 * Description:   Returns a pointer to the current E2Elib 
 * receiver-state.
 * Parameter:     None
 * Return value:  The current E2Elib receiver-status.
 * Remarks:       Can be used to manipulate the state.
 *                Use this function with care.
 **********************************************************/
FUNC_P2VAR ( E2E_P01CheckStateType
           , CtAp_CANHandler_VAR_NOINIT
           , CtAp_CANHandler_CODE
           )
    E2EPW_Get_CheckState_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup (void)
{
    return State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup;
}

/**********************************************************
 * Function name: E2EPW_Read_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup (SG_IBS_Status_03_SigGroup * AppData);
 * Description:   Reads data with Rte_Read_<p>_<o> (),
 *                checks it with E2Elib and returns the data
 *                and an error-code.
 * Parameter AppData:
 *                The data received by Rte_Read and checked
 *                by E2Elib.
 * Return value:  Error-code
 * Remarks:       None
 **********************************************************/
FUNC (uint32, CtAp_CANHandler_CODE) E2EPW_Read_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup
    ( P2VAR (SG_IBS_Status_03_SigGroup, AUTOMATIC, CtAp_CANHandler_VAR_INIT) AppData)
{
    VAR (uint8, AUTOMATIC) ret_u8;
    VAR (uint8, AUTOMATIC) ret_rte_u8 = RTE_E_OK;

    VAR (uint32, AUTOMATIC) status_ok_u32 =
           (0<<31)                         /* Deserial-Check */
        |  ((E2E_P01STATUS_OK & 0x7F)<<24) /* ReceiverStatus */
        |  (E2E_E_OK<<16)                  /* Protection Wrapper */
        |  (RTE_E_OK<<8)                   /* Rte_Read */
        |  (E2E_E_OK);                     /* E2E_...Check */
    VAR (uint32, AUTOMATIC) status_u32 = status_ok_u32;

    P2CONST (E2E_P01ConfigType, AUTOMATIC, CtAp_CANHandler_CONST)
        Config_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup = &ConfigVal_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup;

    State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->NewDataAvailable =
        Rte_IsUpdated_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup ();

    if ((State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->NewDataAvailable != FALSE))
    {
        if (AppData == NULL_PTR)
        {
            ret_u8 = E2E_E_INPUTERR_NULL;
            status_u32 &= 0xFF00FFFFU;
            status_u32 |= (((uint32)ret_u8)<<16);
        }

        if (status_u32 == status_ok_u32)
        {
            /* Return-value of Rte_Read does not affect
               following workflow.
            */
            ret_rte_u8 = Rte_Read_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup (AppData);
        }

        if (status_u32 == status_ok_u32)
        {
            ret_u8 = E2EPW_CheckDeserial_SG_IBS_Status_03_SigGroup (AppData);
            status_u32 &= 0x7FFFFFFFU;
            status_u32 |= (((uint32)ret_u8)<<31);
        }

        if (status_u32 == status_ok_u32)
        {
            uint16 crcoffset_u16 = Config_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->CRCOffset >> 3u;
            uint16 cntoffset_u16 = Config_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->CounterOffset >> 3u;
            E2EPW_Marshal_SG_IBS_Status_03_SigGroup ( AppData, ppa_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_au8 );
/**********************************************************
 * MISRA RULE 1.2 VIOLATION:
 * Error Message : Msg(7:0505) [U] Dereferencing pointer
 *   value that is apparently NULL.
 * Justification : AppData is checked for NULL above.
 *   Value does not change from check to here
 **********************************************************/
/* PRQA S 505 1*/
            ppa_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_au8[crcoffset_u16]  = AppData->Checksum_0B4;
            ppa_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_au8[cntoffset_u16] &= (uint8)0xf0;
            ppa_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_au8[cntoffset_u16] |= AppData->MessageCounter_0B4;
        }
    }

    if (status_u32 == status_ok_u32)
    {
        ret_u8 = E2E_P01Check
                     ( Config_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup
                     , State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup
                     , ppa_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup_au8
                     );
        status_u32 &= 0x80FFFF00U;
        status_u32 |= ret_u8;
        status_u32 |= (uint32)(State_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup->Status<<24);
    }

    status_u32 &= 0xFFFF00FFU;
    status_u32 |= (((uint32)ret_rte_u8)<<8);

    return status_u32;
}

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/*  << EOF >>  */
