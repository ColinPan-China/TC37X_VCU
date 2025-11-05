/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup_rx.h
 ** Wed, 05-Nov-2025, 16:26:47
 **/

#ifndef E2EPW_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup_RX_H
#define E2EPW_CtAp_CANHandler_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup_RX_H
#include "Rte_Type.h"
#include "E2E_P01.h"

#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

/**********************************************************
 * Function name: E2EPW_Init_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup_rx ()
 * Description:   Initialize the E2Elib receiver-state.
 * Parameter:     None
 * Return value:  None
 * Remarks:       Call this function after an application or
 *                communication startup or reset and prior
 *                to any other E2EPW API-call.
 **********************************************************/
extern FUNC (void, CtAp_CANHandler_CODE) E2EPW_ReadInit_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup (void);

/**********************************************************
 * Function name: E2EPW_Get_ReceiverState_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup ()
 * Description:   Returns a pointer to the current E2Elib 
 * receiver-state.
 * Parameter:     None
 * Return value:  The current E2Elib receiver-status.
 * Remarks:       Can be used to manipulate the state.
 *                Use this function with care.
 **********************************************************/
extern FUNC_P2VAR ( E2E_P01CheckStateType
             , CtAp_CANHandler_VAR_NOINIT
             , CtAp_CANHandler_CODE
             )
    E2EPW_Get_CheckState_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup (void);

/**********************************************************
 * Function name: E2EPW_Read_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup (SG_ACU_02_SigGroup * AppData);
 * Description:   Reads data with Rte_Read_<p>_<o> (),
 *                checks it with E2Elib and returns the data
 *                and an error-code.
 * Parameter AppData:
 *                The data received by Rte_Read and checked
 *                by E2Elib.
 * Return value:  Error-code
 * Remarks:       None
 **********************************************************/
extern FUNC (uint32, CtAp_CANHandler_CODE) E2EPW_Read_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup
    ( P2VAR (SG_ACU_02_SigGroup, AUTOMATIC, CtAp_CANHandler_VAR_INIT) AppData);

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

#endif
/*  << EOF >>  */
