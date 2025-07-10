/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 2.0.1)
 ** Module: E2EPW_Com_SWC_SG_VCU_BMS_Signal_Group_SG_VCU_BMS_Signal_Group_tx.h
 ** Thu, 10-Jul-2025, 15:23:39
 **/

#ifndef E2EPW_Com_SWC_SG_VCU_BMS_Signal_Group_SG_VCU_BMS_Signal_Group_TX_H
#define E2EPW_Com_SWC_SG_VCU_BMS_Signal_Group_SG_VCU_BMS_Signal_Group_TX_H

#include "Rte_Type.h"
#include "E2E_P01.h"

#define Com_SWC_START_SEC_CODE
#include "Com_SWC_MemMap.h"

/**********************************************************
 * Function name: E2EPW_Init_SG_VCU_BMS_Signal_Group_SG_VCU_BMS_Signal_Group_tx ()
 * Description:   Initialize the E2Elib transmission-state.
 * Parameter:     None
 * Return value:  None
 * Remarks:       Call this function after an application or
 *                communication startup or reset and prior
 *                to any other E2EPW API-call.
 **********************************************************/
extern FUNC (void, Com_SWC_CODE) E2EPW_WriteInit_SG_VCU_BMS_Signal_Group_SG_VCU_BMS_Signal_Group (void);

/**********************************************************
 * Function name: E2EPW_Get_SenderState_SG_VCU_BMS_Signal_Group_SG_VCU_BMS_Signal_Group ()
 * Description:   Returns a pointer to the current E2Elib
 *                transmission-state.
 * Parameter:     None
 * Return value:  The current E2Elib transmission-status
 * Remarks:       Can be used to manipulate the state.
 *                Use this function with care.
 **********************************************************/
extern FUNC_P2VAR ( E2E_P01ProtectStateType
                  , Com_SWC_VAR_NOINIT
                  , Com_SWC_CODE
                  )
    E2EPW_Get_ProtectState_SG_VCU_BMS_Signal_Group_SG_VCU_BMS_Signal_Group (void);

/**********************************************************
 * Function name: E2EPW_Write_SG_VCU_BMS_Signal_Group_SG_VCU_BMS_Signal_Group (SG_VCU_BMS_Signal_Group *  AppData);
 * Description:   Protects data with E2Elib, transmits it
 *                with Rte_Write_<p>_<o> and return an
 *                error-code.
 *   Parameter AppData:
 *                The data to be protected and transmitted.
 * Return value:  Error-code
 * Remarks:       None
 **********************************************************/
extern FUNC (uint32, Com_SWC_CODE) E2EPW_Write_SG_VCU_BMS_Signal_Group_SG_VCU_BMS_Signal_Group
    (P2VAR (SG_VCU_BMS_Signal_Group, AUTOMATIC, Com_SWC_VAR_INIT) AppData);

#define Com_SWC_STOP_SEC_CODE
#include "Com_SWC_MemMap.h"

#endif
/*  << EOF >>  */
