/**********************************************************************************************************************
 *  FILE REQUIRES USER MODIFICATIONS
 *  Template Scope: sections marked with Start and End comments
 *  -------------------------------------------------------------------------------------------------------------------
 *  This file includes template code that must be completed and/or adapted during BSW integration.
 *  The template code is incomplete and only intended for providing a signature and an empty implementation.
 *  It is neither intended nor qualified for use in series production without applying suitable quality measures.
 *  The template code must be completed as described in the instructions given within this file and/or in the.
 *  Technical Reference.
 *  The completed implementation must be tested with diligent care and must comply with all quality requirements which.
 *  are necessary according to the state of the art before its use.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  DIAG_SWC.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  DIAG_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <DIAG_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_DIAG_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Dem.h"
#include "Adc_Sample.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * NvM_Arry4Bytes: Array with 4 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_NvBlockNeed_AttemptCounter_MirrorBlock(void)
 *   uint8 *Rte_Pim_NvBlockNeed_DiagDID_00_MirrorBlock(void)
 *     Returnvalue: uint8* is of type NvM_Arry4Bytes
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint8 Rte_CData_NvBlockNeed_AttemptCounter_DefaultValue(void)
 *   uint8 *Rte_CData_NvBlockNeed_DiagDID_00_DefaultValue(void)
 *     Returnvalue: uint8* is of type NvM_Arry4Bytes
 *
 *********************************************************************************************************************/


#define DIAG_SWC_START_SEC_CODE
#include "DIAG_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DIAG_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DIAG_SWC_Init_doc
 *********************************************************************************************************************/
#define DEM_NVM_BLOCK_CALCULATED    (FALSE)

#if(DEM_NVM_BLOCK_CALCULATED)
uint8 len1 = 0;
uint8 len2 = 0;
uint8 len3 = 0;
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DIAG_SWC_CODE) DIAG_SWC_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DIAG_SWC_Init
 *********************************************************************************************************************/
//  Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
//  Rte_Call_OpCycle_OBDDrivingCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
//  Rte_Call_OpCycle_PowerCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
//  Rte_Call_OpCycle_WarmUpCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);

  #if(DEM_NVM_BLOCK_CALCULATED)
  len1 = sizeof( Dem_Cfg_PrimaryEntry_0 );
  len2 = sizeof( Dem_Cfg_StatusData );
  len3 = sizeof( Dem_Cfg_AdminData );
  #endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DTCMonitorRunnable_10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DTCMonitorRunnable_10ms_doc
 *********************************************************************************************************************/
uint8 DTC_FailCnt     = 0;
uint8 DTC_PassCnt     = 0;
uint8 DTC_Storage     = 0;
uint8 DTC_Status_0002 = 0;
uint8 DTC_Status_0003 = 0;
uint8 CurOpCycleSts   = 0;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DIAG_SWC_CODE) DTCMonitorRunnable_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DTCMonitorRunnable_10ms
 *********************************************************************************************************************/
#if 0
 if( IoHwGetKL15Level() == KL15_HIGH_LEVEL )//( Dio_ReadChannel(DioConf_DioChannel_DioChannel_P33_12_KL15) == 0 )  
  {
    Rte_Call_OpCycle_PowerCycle_GetOperationCycleState(&CurOpCycleSts);
    if( CurOpCycleSts != DEM_CYCLE_STATE_START )
    {
      Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
      Rte_Call_OpCycle_OBDDrivingCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
      Rte_Call_OpCycle_PowerCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
      Rte_Call_OpCycle_WarmUpCycle_SetOperationCycleState(DEM_CYCLE_STATE_START);
    }
  }
  else
  {
    Rte_Call_OpCycle_PowerCycle_GetOperationCycleState(&CurOpCycleSts);
    if( CurOpCycleSts != DEM_CYCLE_STATE_END )
    {
      Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(DEM_CYCLE_STATE_END);
      Rte_Call_OpCycle_OBDDrivingCycle_SetOperationCycleState(DEM_CYCLE_STATE_END);
      Rte_Call_OpCycle_PowerCycle_SetOperationCycleState(DEM_CYCLE_STATE_END);
      Rte_Call_OpCycle_WarmUpCycle_SetOperationCycleState(DEM_CYCLE_STATE_END);
    }
  }

 if(  DTC_FailCnt > 0 )
  {
    Rte_Call_Event_DTC_0x000002_SetEventStatus(DEM_EVENT_STATUS_FAILED);
    Rte_Call_Event_DTC_0x000003_SetEventStatus(DEM_EVENT_STATUS_FAILED);
//    DTC_FailCnt--;
  }
//  Dem_SetEventStatus( 4, 3 );

  if(  DTC_PassCnt > 0 )
  {
    Rte_Call_Event_DTC_0x000002_SetEventStatus(DEM_EVENT_STATUS_PASSED);
    Rte_Call_Event_DTC_0x000003_SetEventStatus(DEM_EVENT_STATUS_PASSED);
//    DTC_PassCnt--;
  }
  Rte_Call_Event_DTC_0x000002_GetEventStatus(&DTC_Status_0002);
  Rte_Call_Event_DTC_0x000003_GetEventStatus(&DTC_Status_0003);


  if( DTC_Storage > 0 )
  {
  }
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DIAG_SWC_STOP_SEC_CODE
#include "DIAG_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_DID_0xf1a1_F1A1_Data_ReadData_doc)  ********/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_DID_0xf1a1_F1A1_Data_ReadData)  *******/
  Data[0] = FrezeFram++;
  Data[1] = FrezeFram++;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:SecurityAccess_Level_3_CompareKey)  **************/
  uint16 keytmp = 0x00U; 
  keytmp = Key[0] + (Key[1]<<8);
  if( keytmp == 0x2728 )
  {
    return 0;
  }
  else
  {
    return 1;
  }

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:RoutineServices_Vcu_Roution_00_Start)  ***********/
  LED_In = In_New_Data_Object;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:RoutineServices_Vcu_Roution_00_RequestResults_doc)  ***/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:SecurityAccess_Level_3_GetSecurityAttemptCounter_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:RoutineServices_Vcu_Roution_00_Stop_doc)  *************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_DID_0xf1a0_F1A0_Data_ReadData)  *******/
  Data[0] = FrezeFram++;
  Data[1] = FrezeFram++;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:SecurityAccess_Level_3_GetSeed_doc)  ******************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:RoutineServices_Vcu_Roution_00_Start_doc)  ************/
uint16 LED_In = 0XFF;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_VCU_DID_00_DataRecord_WriteData)  ***/
  Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[0] = Data[0];
  Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[1] = Data[1];
  Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[2] = Data[2];
  Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[3] = Data[3];
  /* Write immediately*/
//  Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_WriteBlock(Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock);

  /* Write While NvM_WriteAll()*/
  Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_SetRamBlockStatus(TRUE);

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:DataServices_VCU_DID_00_DataRecord_ConditionCheckRead_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:DataServices_VCU_DID_00_DataRecord_ReadData_doc)  *****/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:SecurityAccess_Level_3_SetSecurityAttemptCounter)  */
  *Rte_Pim_NvBlockNeed_AttemptCounter_MirrorBlock() = AttemptCounter;
  Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_WriteBlock(Rte_Pim_NvBlockNeed_AttemptCounter_MirrorBlock());
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_DID_0xf1a2_F1A2_Data_ReadData_doc)  ********/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_DID_0xf1a2_F1A2_Data_ReadData)  *******/
  Data[0] = FrezeFram++;
  Data[1] = FrezeFram++;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_DID_0xf1a0_F1A0_Data_ReadData_doc)  ********/
uint8 FrezeFram = 0;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:CBReadData_DID_0xf1a3_F1A3_Data_ReadData_doc)  ********/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:RoutineServices_Vcu_Roution_00_Stop)  ************/
  LED_In = 0xFF;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_VCU_DID_00_DataRecord_ReadData)  ****/
  Data[0] = Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[0];
  Data[1] = Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[1];
  Data[2] = Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[2];
  Data[3] = Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock[3];
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:SecurityAccess_Level_3_GetSecurityAttemptCounter)  */
  *AttemptCounter = *Rte_Pim_NvBlockNeed_AttemptCounter_MirrorBlock();
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:DataServices_VCU_DID_00_DataRecord_ConditionCheckRead)  */

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:CBReadData_DID_0xf1a3_F1A3_Data_ReadData)  *******/
  Data[0] = FrezeFram++;
  Data[1] = FrezeFram++;
  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:DataServices_VCU_DID_00_DataRecord_WriteData_doc)  ****/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:SecurityAccess_Level_3_GetSeed)  *****************/
  *Seed = 0x27;

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:RoutineServices_Vcu_Roution_00_RequestResults)  **/

  return RTE_E_OK;

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:SecurityAccess_Level_3_SetSecurityAttemptCounter_doc)  */


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:SecurityAccess_Level_3_CompareKey_doc)  ***************/


/***  End of saved code  ************************************************************************************/
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

*/
