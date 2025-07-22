/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Com_SWC_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group_rx.h
 ** Tue, 22-Jul-2025, 14:39:21
 **/

#ifndef E2EPW_Com_SWC_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group_RX_H
#define E2EPW_Com_SWC_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group_RX_H
#include "Rte_Type.h"
#include "E2E_P01.h"

#define Com_SWC_START_SEC_CODE
#include "Com_SWC_MemMap.h"

/**********************************************************
 * Function name: E2EPW_Init_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group_rx ()
 * Description:   Initialize the E2Elib receiver-state.
 * Parameter:     None
 * Return value:  None
 * Remarks:       Call this function after an application or
 *                communication startup or reset and prior
 *                to any other E2EPW API-call.
 **********************************************************/
extern FUNC (void, Com_SWC_CODE) E2EPW_ReadInit_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group (void);

/**********************************************************
 * Function name: E2EPW_Get_ReceiverState_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group ()
 * Description:   Returns a pointer to the current E2Elib 
 * receiver-state.
 * Parameter:     None
 * Return value:  The current E2Elib receiver-status.
 * Remarks:       Can be used to manipulate the state.
 *                Use this function with care.
 **********************************************************/
extern FUNC_P2VAR ( E2E_P01CheckStateType
             , Com_SWC_VAR_NOINIT
             , Com_SWC_CODE
             )
    E2EPW_Get_CheckState_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group (void);

/**********************************************************
 * Function name: E2EPW_Read_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group (SG_IBS_Status_06_Signal_Group * AppData);
 * Description:   Reads data with Rte_Read_<p>_<o> (),
 *                checks it with E2Elib and returns the data
 *                and an error-code.
 * Parameter AppData:
 *                The data received by Rte_Read and checked
 *                by E2Elib.
 * Return value:  Error-code
 * Remarks:       None
 **********************************************************/
extern FUNC (uint32, Com_SWC_CODE) E2EPW_Read_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group
    ( P2VAR (SG_IBS_Status_06_Signal_Group, AUTOMATIC, Com_SWC_VAR_INIT) AppData);

#define Com_SWC_STOP_SEC_CODE
#include "Com_SWC_MemMap.h"

#endif
/*  << EOF >>  */
