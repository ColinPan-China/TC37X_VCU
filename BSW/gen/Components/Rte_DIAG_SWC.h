/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_DIAG_SWC.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <DIAG_SWC>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_DIAG_SWC_H
# define RTE_DIAG_SWC_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_DIAG_SWC_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DEMMASTER_0_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_DEMMASTER_0_APPL_CODE) Dem_GetOperationCycleState(uint8 parg0, P2VAR(Dem_OperationCycleStateType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) CycleState); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_DEMMASTER_0_APPL_CODE) Dem_SetOperationCycleState(uint8 parg0, Dem_OperationCycleStateType CycleState); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_DEMMASTER_0_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_DEMSATELLITE_0_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_DEMSATELLITE_0_APPL_CODE) Dem_GetEventUdsStatus(Dem_EventIdType parg0, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) UDSStatusByte); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_DEMSATELLITE_0_APPL_CODE) Dem_SetEventStatus(Dem_EventIdType parg0, Dem_EventStatusType EventStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_DEMSATELLITE_0_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_ReadBlock(NvM_BlockIdType parg0, dtRef_VOID DstPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_WriteBlock(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVM_APPL_VAR) ErrorStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define Rte_Call_Event_DTC_0x000002_GetEventStatus(arg1) (Dem_GetEventUdsStatus((Dem_EventIdType)1, arg1))
#  define Rte_Call_Event_DTC_0x000002_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)1, arg1))
#  define Rte_Call_Event_DTC_0x000003_GetEventStatus(arg1) (Dem_GetEventUdsStatus((Dem_EventIdType)2, arg1))
#  define Rte_Call_Event_DTC_0x000003_SetEventStatus(arg1) (Dem_SetEventStatus((Dem_EventIdType)2, arg1))
#  define Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_ReadBlock(arg1) (NvM_ReadBlock((NvM_BlockIdType)11, arg1))
#  define Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_SetRamBlockStatus(arg1) (NvM_SetRamBlockStatus((NvM_BlockIdType)11, arg1))
#  define Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_AttemptCounter_WriteBlock(arg1) (NvM_WriteBlock((NvM_BlockIdType)11, arg1))
#  define Rte_Call_OpCycle_IgnitionCycle_GetOperationCycleState(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_OpCycle_IgnitionCycle_SetOperationCycleState(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_OpCycle_OBDDrivingCycle_GetOperationCycleState(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_OpCycle_OBDDrivingCycle_SetOperationCycleState(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_OpCycle_PowerCycle_GetOperationCycleState(arg1) (Dem_GetOperationCycleState((uint8)0, arg1))
#  define Rte_Call_OpCycle_PowerCycle_SetOperationCycleState(arg1) (Dem_SetOperationCycleState((uint8)0, arg1))
#  define Rte_Call_OpCycle_WarmUpCycle_GetOperationCycleState(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_OpCycle_WarmUpCycle_SetOperationCycleState(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_GetErrorStatus(arg1) (NvM_GetErrorStatus((NvM_BlockIdType)10, arg1))
#  define Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_ReadBlock(arg1) (NvM_ReadBlock((NvM_BlockIdType)10, arg1))
#  define Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_SetRamBlockStatus(arg1) (NvM_SetRamBlockStatus((NvM_BlockIdType)10, arg1))
#  define Rte_Call_PS_DIAG_SWC_NvBlockNeed_DiagDID_00_WriteBlock(arg1) (NvM_WriteBlock((NvM_BlockIdType)10, arg1))

/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT

#   define RTE_START_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_DIAG_SWC_NvBlockNeed_AttemptCounter_DefaultValue;
extern CONST(NvM_Arry4Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_DefaultValue;

#   define RTE_STOP_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  endif

#  define Rte_CData_NvBlockNeed_AttemptCounter_DefaultValue() (Rte_DIAG_SWC_NvBlockNeed_AttemptCounter_DefaultValue)

#  define Rte_CData_NvBlockNeed_DiagDID_00_DefaultValue() (&(Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_DefaultValue[0]))

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_DIAG_SWC_NvBlockNeed_AttemptCounter_MirrorBlock;
extern VAR(NvM_Arry4Bytes, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock;

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  endif

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Pim_NvBlockNeed_AttemptCounter_MirrorBlock() \
  (&Rte_DIAG_SWC_NvBlockNeed_AttemptCounter_MirrorBlock)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Pim_NvBlockNeed_DiagDID_00_MirrorBlock() (&((*RtePim_NvBlockNeed_DiagDID_00_MirrorBlock())[0]))
#  define RtePim_NvBlockNeed_DiagDID_00_MirrorBlock() \
  (&Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock)
/* PRQA L:L1 */


# endif /* !defined(RTE_CORE) */


# define DIAG_SWC_START_SEC_CODE
# include "DIAG_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CBReadData_DID_0xf1a0_F1A0_Data_ReadData CBReadData_DID_0xf1a0_F1A0_Data_ReadData
#  define RTE_RUNNABLE_CBReadData_DID_0xf1a1_F1A1_Data_ReadData CBReadData_DID_0xf1a1_F1A1_Data_ReadData
#  define RTE_RUNNABLE_CBReadData_DID_0xf1a2_F1A2_Data_ReadData CBReadData_DID_0xf1a2_F1A2_Data_ReadData
#  define RTE_RUNNABLE_CBReadData_DID_0xf1a3_F1A3_Data_ReadData CBReadData_DID_0xf1a3_F1A3_Data_ReadData
#  define RTE_RUNNABLE_DIAG_SWC_Init DIAG_SWC_Init
#  define RTE_RUNNABLE_DTCMonitorRunnable_10ms DTCMonitorRunnable_10ms
#  define RTE_RUNNABLE_DataServices_VCU_DID_00_DataRecord_ConditionCheckRead DataServices_VCU_DID_00_DataRecord_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_VCU_DID_00_DataRecord_ReadData DataServices_VCU_DID_00_DataRecord_ReadData
#  define RTE_RUNNABLE_DataServices_VCU_DID_00_DataRecord_WriteData DataServices_VCU_DID_00_DataRecord_WriteData
#  define RTE_RUNNABLE_RoutineServices_Vcu_Roution_00_RequestResults RoutineServices_Vcu_Roution_00_RequestResults
#  define RTE_RUNNABLE_RoutineServices_Vcu_Roution_00_Start RoutineServices_Vcu_Roution_00_Start
#  define RTE_RUNNABLE_RoutineServices_Vcu_Roution_00_Stop RoutineServices_Vcu_Roution_00_Stop
#  define RTE_RUNNABLE_SecurityAccess_Level_3_CompareKey SecurityAccess_Level_3_CompareKey
#  define RTE_RUNNABLE_SecurityAccess_Level_3_GetSecurityAttemptCounter SecurityAccess_Level_3_GetSecurityAttemptCounter
#  define RTE_RUNNABLE_SecurityAccess_Level_3_GetSeed SecurityAccess_Level_3_GetSeed
#  define RTE_RUNNABLE_SecurityAccess_Level_3_SetSecurityAttemptCounter SecurityAccess_Level_3_SetSecurityAttemptCounter
# endif

FUNC(Std_ReturnType, DIAG_SWC_CODE) CBReadData_DID_0xf1a0_F1A0_Data_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) CBReadData_DID_0xf1a1_F1A1_Data_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) CBReadData_DID_0xf1a2_F1A2_Data_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) CBReadData_DID_0xf1a3_F1A3_Data_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(void, DIAG_SWC_CODE) DIAG_SWC_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, DIAG_SWC_CODE) DTCMonitorRunnable_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) DataServices_VCU_DID_00_DataRecord_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) DataServices_VCU_DID_00_DataRecord_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) DataServices_VCU_DID_00_DataRecord_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) RoutineServices_Vcu_Roution_00_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Out_New_Data_Object, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) RoutineServices_Vcu_Roution_00_Start(Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectType In_New_Data_Object, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Out_New_Data_Object, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) RoutineServices_Vcu_Roution_00_Stop(Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectType In_New_Data_Object, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Out_New_Data_Object, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) SecurityAccess_Level_3_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) SecurityAccess_Level_3_GetSecurityAttemptCounter(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) AttemptCounter); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) SecurityAccess_Level_3_GetSeed(P2CONST(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_DATA) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAG_SWC_APPL_VAR) ErrorCode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, DIAG_SWC_CODE) SecurityAccess_Level_3_SetSecurityAttemptCounter(Dcm_OpStatusType OpStatus, uint8 AttemptCounter); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define DIAG_SWC_STOP_SEC_CODE
# include "DIAG_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CSDataServices_DID_0xf1a0_F1A0_Data_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xf1a1_F1A1_Data_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xf1a2_F1A2_Data_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xf1a3_F1A3_Data_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_DID_00_DataRecord_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_DID_00_DataRecord_E_NOT_OK (1U)

#  define RTE_E_DiagnosticMonitor_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

#  define RTE_E_OperationCycle_E_NOT_OK (1U)

#  define RTE_E_OperationCycle_E_OK (0U)

#  define RTE_E_RoutineServices_Vcu_Roution_00_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Vcu_Roution_00_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Vcu_Roution_00_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_Level_3_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_Level_3_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_Level_3_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_DIAG_SWC_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
