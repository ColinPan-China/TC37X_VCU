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
 *             File:  Rte_SWC1.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <SWC1>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_SWC1_H
# define RTE_SWC1_H

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

# include "Rte_SWC1_Type.h"
# include "Rte_DataHandleType.h"
# include "NvM.h" /* PRQA S 3451 */ /* MD_Rte_3451_NvM */

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(BswM_ESH_RunRequest, RTE_VAR_NOINIT) Rte_SWC1_Request_ESH_RunRequest_0_requestedMode;

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC1_NvM_Data_IF_UserData1_Recv_Element_UserData1(P2VAR(uint8, AUTOMATIC, RTE_SWC1_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC1_NvM_Data_IF_UserData2_Recv_Element_UserData2(P2VAR(uint8, AUTOMATIC, RTE_SWC1_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC1_NvM_Data_IF_UserData1_Send_Element_UserData1(P2CONST(uint8, AUTOMATIC, RTE_SWC1_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC1_NvM_Data_IF_UserData2_Send_Element_UserData2(P2CONST(uint8, AUTOMATIC, RTE_SWC1_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_NvM_Data_IF_UserData1_Recv_Element_UserData1 Rte_Read_SWC1_NvM_Data_IF_UserData1_Recv_Element_UserData1
#  define Rte_Read_NvM_Data_IF_UserData2_Recv_Element_UserData2 Rte_Read_SWC1_NvM_Data_IF_UserData2_Recv_Element_UserData2


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_NvM_Data_IF_UserData1_Send_Element_UserData1 Rte_Write_SWC1_NvM_Data_IF_UserData1_Send_Element_UserData1
#  define Rte_Write_NvM_Data_IF_UserData2_Send_Element_UserData2 Rte_Write_SWC1_NvM_Data_IF_UserData2_Send_Element_UserData2
#  define Rte_Write_Request_ESH_RunRequest_0_requestedMode Rte_Write_SWC1_Request_ESH_RunRequest_0_requestedMode
#  define Rte_Write_SWC1_Request_ESH_RunRequest_0_requestedMode(data) (Rte_SWC1_Request_ESH_RunRequest_0_requestedMode = (data), ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_COMM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_COMM_APPL_CODE) ComM_GetCurrentComMode(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_COMM_APPL_CODE) ComM_RequestComMode(ComM_UserHandleType parg0, ComM_ModeType ComMode); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_COMM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_ReadBlock(NvM_BlockIdType parg0, dtRef_VOID DstPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_SetRamBlockStatus(NvM_BlockIdType parg0, boolean RamBlockStatus); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_WriteBlock(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

#  define RTE_STOP_SEC_NVM_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_NVM_SWC_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#  define RTE_STOP_SEC_NVM_SWC_APPL_CODE
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_UserData3_ReadBlock(arg1) (NvM_ReadBlock((NvM_BlockIdType)10, arg1))
#  define Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_UserData3_SetRamBlockStatus(arg1) (NvM_SetRamBlockStatus((NvM_BlockIdType)10, arg1))
#  define Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_UserData3_WriteBlock(arg1) (NvM_WriteBlock((NvM_BlockIdType)10, arg1))
#  define Rte_Call_NvSWC_UserData2_NvMService_AC3_SRBS_SetRamBlockStatus(arg1) (NvM_SetRamBlockStatus(NvMConf_NvMBlockDescriptor_NvM_SWC_NVBlockDescriptor_UserData2, arg1))
#  define Rte_Call_UR_CN_KAMA_FP_EPT_0303_b67fd6a6_GetCurrentComMode(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_UR_CN_KAMA_FP_EPT_0303_b67fd6a6_RequestComMode(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_UR_CN_LIN00_984dfd9e_RequestComMode(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_UR_CN_LIN01_778f96a0_GetCurrentComMode(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_UR_CN_LIN01_778f96a0_RequestComMode(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_UR_CN_TC37X_VCU_CAN01_5e76994c_GetCurrentComMode(arg1) (ComM_GetCurrentComMode((ComM_UserHandleType)3, arg1))
#  define Rte_Call_UR_CN_TC37X_VCU_CAN01_5e76994c_RequestComMode(arg1) (ComM_RequestComMode((ComM_UserHandleType)3, arg1))
#  define Rte_Call_UR_CN_TC37X_VCU_CAN03_5a834971_GetCurrentComMode(arg1) (RTE_E_UNCONNECTED)
#  define Rte_Call_UR_CN_TC37X_VCU_CAN03_5a834971_RequestComMode(arg1) (RTE_E_UNCONNECTED)

/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT

#   define RTE_START_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(uint16, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_SWC1_CalibrationParameter;
extern CONST(NvM_Array10Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_SWC1_NvBlockNeed_UserData3_DefaultValue;

#   define RTE_STOP_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  endif

#  define Rte_CData_CalibrationParameter() (Rte_SWC1_CalibrationParameter)

#  define Rte_CData_NvBlockNeed_UserData3_DefaultValue() (&(Rte_SWC1_NvBlockNeed_UserData3_DefaultValue[0]))

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(NvM_Array10Bytes, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_SWC1_NvBlockNeed_UserData3_MirrorBlock;

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#   include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  endif

/* PRQA S 3453 L1 */ /* MD_MSR_FctLikeMacro */
#  define Rte_Pim_NvBlockNeed_UserData3_MirrorBlock() (&((*RtePim_NvBlockNeed_UserData3_MirrorBlock())[0]))
#  define RtePim_NvBlockNeed_UserData3_MirrorBlock() \
  (&Rte_SWC1_NvBlockNeed_UserData3_MirrorBlock)
/* PRQA L:L1 */


# endif /* !defined(RTE_CORE) */


# define SWC1_START_SEC_CODE
# include "SWC1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_NvSWC_NvMNotifyJobFinished_UserData1_JobFinished NvSWC_NvMNotifyJobFinished_UserData1_JobFinished
#  define RTE_RUNNABLE_NvSWC_NvMNotifyJobFinished_UserData2_JobFinished NvSWC_NvMNotifyJobFinished_UserData2_JobFinished
#  define RTE_RUNNABLE_SWC1_Init SWC1_Init
#  define RTE_RUNNABLE_SWC1_Runnable10ms SWC1_Runnable10ms
# endif

FUNC(void, SWC1_CODE) NvSWC_NvMNotifyJobFinished_UserData1_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(void, SWC1_CODE) NvSWC_NvMNotifyJobFinished_UserData2_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(void, SWC1_CODE) SWC1_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, SWC1_CODE) SWC1_Runnable10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define SWC1_STOP_SEC_CODE
# include "SWC1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_ComM_UserRequest_E_MODE_LIMITATION (2U)

#  define RTE_E_ComM_UserRequest_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

#  define RTE_E_NvSWC_NvMService_AC3_SRBS_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_SWC1_H */

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

   MD_Rte_3451_NvM:  MISRA rule: Rule8.5
     Reason:     NvM functions are declared by the RTE and also by the NvM.
     Risk:       No functional risk.
     Prevention: Not required.

*/
