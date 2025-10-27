/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup_tx.h
 ** Mon, 27-Oct-2025, 09:38:49
 **/

#ifndef E2EPW_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup_TX_H
#define E2EPW_CtAp_CANHandler_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup_TX_H

#include "Rte_Type.h"
#include "E2E_P01.h"

#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

/**********************************************************
 * Function name: E2EPW_Init_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup_tx ()
 * Description:   Initialize the E2Elib transmission-state.
 * Parameter:     None
 * Return value:  None
 * Remarks:       Call this function after an application or
 *                communication startup or reset and prior
 *                to any other E2EPW API-call.
 **********************************************************/
extern FUNC (void, CtAp_CANHandler_CODE) E2EPW_WriteInit_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup (void);

/**********************************************************
 * Function name: E2EPW_Get_SenderState_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup ()
 * Description:   Returns a pointer to the current E2Elib
 *                transmission-state.
 * Parameter:     None
 * Return value:  The current E2Elib transmission-status
 * Remarks:       Can be used to manipulate the state.
 *                Use this function with care.
 **********************************************************/
extern FUNC_P2VAR ( E2E_P01ProtectStateType
                  , CtAp_CANHandler_VAR_NOINIT
                  , CtAp_CANHandler_CODE
                  )
    E2EPW_Get_ProtectState_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup (void);

/**********************************************************
 * Function name: E2EPW_Write_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup (SG_VCU_IBS_01_SigGroup *  AppData);
 * Description:   Protects data with E2Elib, transmits it
 *                with Rte_Write_<p>_<o> and return an
 *                error-code.
 *   Parameter AppData:
 *                The data to be protected and transmitted.
 * Return value:  Error-code
 * Remarks:       None
 **********************************************************/
extern FUNC (uint32, CtAp_CANHandler_CODE) E2EPW_Write_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup
    (P2VAR (SG_VCU_IBS_01_SigGroup, AUTOMATIC, CtAp_CANHandler_VAR_INIT) AppData);

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

#endif
/*  << EOF >>  */
