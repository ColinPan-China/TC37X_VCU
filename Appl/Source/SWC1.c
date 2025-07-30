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
 *             File:  SWC1.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  SWC1
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <SWC1>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * BswM_ESH_RunRequest
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * ComM_ModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NvM_RequestResultType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NvM_ServiceIdType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_SWC1.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "vstdlib.h"
#include "NvM.h"
#include "Xcp.h"
#include "Mcu.h"
#include "Dio.h"
#include "ComM.h"
#include "Adc.h"
#include "Lin_17_AscLin.h"
#include "Adc_Sample.h"

#define NVM_TEST_FUNCTION (0u)
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
 * boolean: Boolean (standard type)
 * dtRef_VOID: DataReference
 * dtRef_const_VOID: DataReference
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * BswM_ESH_RunRequest: Enumeration of integer in interval [0...255] with enumerators
 *   RELEASED (0U)
 *   REQUESTED (1U)
 * ComM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 * NvM_ServiceIdType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_READ_BLOCK (6U)
 *   NVM_WRITE_BLOCK (7U)
 *   NVM_RESTORE_BLOCK_DEFAULTS (8U)
 *   NVM_ERASE_BLOCK (9U)
 *   NVM_INVALIDATE_NV_BLOCK (11U)
 *   NVM_READ_ALL (12U)
 *
 * Array Types:
 * ============
 * NvM_Array10Bytes: Array with 10 element(s) of type uint8
 * NvM_Array32Bytes: Array with 32 element(s) of type uint8
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_NvBlockNeed_UserData3_MirrorBlock(void)
 *     Returnvalue: uint8* is of type NvM_Array10Bytes
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint16 Rte_CData_CalibrationParameter(void)
 *   uint8 *Rte_CData_NvBlockNeed_UserData3_DefaultValue(void)
 *     Returnvalue: uint8* is of type NvM_Array10Bytes
 *
 *********************************************************************************************************************/


#define SWC1_START_SEC_CODE
#include "SWC1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NvSWC_NvMNotifyJobFinished_UserData1_JobFinished
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <NvSWC_NvMNotifyJobFinished_UserData1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NvSWC_NvMNotifyJobFinished_UserData1_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: NvSWC_NvMNotifyJobFinished_UserData1_JobFinished_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SWC1_CODE) NvSWC_NvMNotifyJobFinished_UserData1_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvSWC_NvMNotifyJobFinished_UserData1_JobFinished
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NvSWC_NvMNotifyJobFinished_UserData2_JobFinished
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <NvSWC_NvMNotifyJobFinished_UserData2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NvSWC_NvMNotifyJobFinished_UserData2_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: NvSWC_NvMNotifyJobFinished_UserData2_JobFinished_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SWC1_CODE) NvSWC_NvMNotifyJobFinished_UserData2_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: NvSWC_NvMNotifyJobFinished_UserData2_JobFinished
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SWC1_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Request_ESH_RunRequest_0_requestedMode(BswM_ESH_RunRequest data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SWC1_Init_doc
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SWC1_CODE) SWC1_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SWC1_Init
 *********************************************************************************************************************/
//  Rte_Write_Request_ESH_RunRequest_0_requestedMode(1);
//	Lin_17_AscLin_Init(&Lin_17_AscLin_Config);
//  Dio_WriteChannel(DioConf_DioChannel_DioChannel_P23_5_LIN_SLP,1);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SWC1_Runnable10ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_NvM_Data_IF_UserData1_Recv_Element_UserData1(uint8 *data)
 *     Argument data: uint8* is of type NvM_Array10Bytes
 *   Std_ReturnType Rte_Read_NvM_Data_IF_UserData2_Recv_Element_UserData2(uint8 *data)
 *     Argument data: uint8* is of type NvM_Array32Bytes
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_NvM_Data_IF_UserData1_Send_Element_UserData1(const uint8 *data)
 *     Argument data: uint8* is of type NvM_Array10Bytes
 *   Std_ReturnType Rte_Write_NvM_Data_IF_UserData2_Send_Element_UserData2(const uint8 *data)
 *     Argument data: uint8* is of type NvM_Array32Bytes
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_NvSWC_UserData2_NvMService_AC3_SRBS_SetRamBlockStatus(boolean RamBlockStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvSWC_NvMService_AC3_SRBS_E_NOT_OK
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_UserData3_ReadBlock(dtRef_VOID DstPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_UserData3_SetRamBlockStatus(boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_UserData3_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_KAMA_FP_EPT_0303_b67fd6a6_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_KAMA_FP_EPT_0303_b67fd6a6_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN00_984dfd9e_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN01_778f96a0_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_LIN01_778f96a0_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_TC37X_VCU_CAN00_b1b4f272_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_TC37X_VCU_CAN00_b1b4f272_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_TC37X_VCU_CAN01_5e76994c_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_TC37X_VCU_CAN01_5e76994c_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_TC37X_VCU_CAN03_5a834971_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_TC37X_VCU_CAN03_5a834971_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_TC37X_VCU_CAN12_74cffd8f_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_TC37X_VCU_CAN12_74cffd8f_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SWC1_Runnable10ms_doc
 *********************************************************************************************************************/
uint8 UserData1Rd[32];
uint8 UserData1Wr[32];
uint8 UserData1Cmd = 0;

uint8 UserData2Rd[32];
uint8 UserData2Wr[32];
uint8 UserData2Cmd = 0;

uint8 UserData3Rd[32];
uint8 UserData3Wr[32];
uint8 UserData3Cmd = 0;

uint8 XcpCnt = 0;

uint8 Sdu_Data[][8] =
{
{0xAA,0xBB,0xCC,0xDD,0xEE,0xFF,0xAA,0xBB},
{0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00}
};
Lin_PduType Lin_Pdu[] =
{
{0x80, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_TX, 8, Sdu_Data[0]},
{0xC1, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX, 8, Sdu_Data[1]},
{0xC2, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX, 8, Sdu_Data[1]}
};

uint8 DataRead[8];
volatile uint8 *SlaveSduPtr = DataRead;
void Lin_DemoFunction(void)
{
	Std_ReturnType Ret1;
	Std_ReturnType Ret2;
	Ret1 = Lin_17_AscLin_SendFrame(Lin_17_AscLinConf_LinChannel_LinChannel_LIN4, &Lin_Pdu[0]);
	 do
	 {
	 	Ret2 = Lin_17_AscLin_GetStatus(Lin_17_AscLinConf_LinChannel_LinChannel_LIN4,(uint8**)&SlaveSduPtr);
	 	if ((Ret1 != LIN_TX_BUSY) && (Ret1 != LIN_TX_OK))
	 	{
	 		break;
	 	}
	 }while(Ret2 != LIN_TX_OK );
}
uint16 ShutdownTimer = 0;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, SWC1_CODE) SWC1_Runnable10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SWC1_Runnable10ms
 *********************************************************************************************************************/
//  Lin_DemoFunction();
	if( IoHwGetKL15Level() == KL15_HIGH_LEVEL )//( Dio_ReadChannel(DioConf_DioChannel_DioChannel_P33_12_KL15) == 0 )  
  {
    ShutdownTimer = 0;
  }
  else
  {
    if( ShutdownTimer < 500 )
    {
      ShutdownTimer++;
    }
  }

  if( ShutdownTimer < 500 )
  {
    Rte_Call_UR_CN_TC37X_VCU_CAN00_b1b4f272_RequestComMode( COMM_FULL_COMMUNICATION );
    Rte_Call_UR_CN_TC37X_VCU_CAN01_5e76994c_RequestComMode( COMM_FULL_COMMUNICATION );
    Rte_Call_UR_CN_TC37X_VCU_CAN12_74cffd8f_RequestComMode(COMM_FULL_COMMUNICATION);

    Rte_Call_UR_CN_KAMA_FP_EPT_0303_b67fd6a6_RequestComMode(COMM_FULL_COMMUNICATION);
    Rte_Call_UR_CN_TC37X_VCU_CAN03_5a834971_RequestComMode(COMM_FULL_COMMUNICATION);

    Rte_Call_UR_CN_LIN00_984dfd9e_RequestComMode(COMM_FULL_COMMUNICATION);
    Rte_Call_UR_CN_LIN01_778f96a0_RequestComMode(COMM_FULL_COMMUNICATION);
  }
  else/* Mcu go shutdown */
  {
//    Dio_WriteChannel(DioConf_DioChannel_DioChannel_P23_5_LIN_SLP,0);
//    Dio_WriteChannel(DioConf_DioChannel_DioChannel_P10_8_KEY,0);

//    Tja1145_GoSleep();


    Rte_Call_UR_CN_TC37X_VCU_CAN00_b1b4f272_RequestComMode( COMM_NO_COMMUNICATION );
    Rte_Call_UR_CN_TC37X_VCU_CAN01_5e76994c_RequestComMode( COMM_NO_COMMUNICATION );
    Rte_Call_UR_CN_TC37X_VCU_CAN03_5a834971_RequestComMode(COMM_NO_COMMUNICATION);
    Rte_Call_UR_CN_TC37X_VCU_CAN12_74cffd8f_RequestComMode(COMM_NO_COMMUNICATION);
    Rte_Call_UR_CN_KAMA_FP_EPT_0303_b67fd6a6_RequestComMode( COMM_NO_COMMUNICATION );

    Rte_Call_UR_CN_LIN00_984dfd9e_RequestComMode(COMM_NO_COMMUNICATION);
    Rte_Call_UR_CN_LIN01_778f96a0_RequestComMode(COMM_NO_COMMUNICATION);
    Rte_Write_Request_ESH_RunRequest_0_requestedMode(0);
  }

  #if NVM_TEST_FUNCTION
  if(UserData1Cmd == 1)
  {
    VStdMemSet(UserData1Rd,0xFF,sizeof(UserData1Rd));
    Rte_Read_SWC1_NvM_Data_IF_UserData1_Recv_Element_UserData1(UserData1Rd);
    UserData1Cmd = 0;
  }

  if(UserData1Cmd == 2)
  {
    VStdMemSet(UserData1Wr,0xAA,sizeof(UserData1Wr));
    Rte_Write_SWC1_NvM_Data_IF_UserData1_Send_Element_UserData1(UserData1Wr);
    UserData1Cmd = 0;
    NvM_RequestResultType BlockStatus;
    /*NVM ReadAll*/
    NvM_WriteAll();
    do
    {
      Fls_17_Dmu_MainFunction();
      Fee_MainFunction();
      NvM_MainFunction();
      NvM_GetErrorStatus(NvMConf___MultiBlockRequest,&BlockStatus);
    } while ( NVM_REQ_PENDING == BlockStatus );
  }
  if(UserData1Cmd == 3)
  {
    VStdMemSet(UserData1Wr,0x00,sizeof(UserData1Wr));
    NvM_WriteBlock(NvMConf_NvMBlockDescriptor_NvM_SWC_NVBlockDescriptor_UserData1,UserData1Wr);
    UserData1Cmd = 0;
  } 

  if(UserData2Cmd == 1)
  {
    VStdMemSet(UserData2Rd,0xFF,sizeof(UserData2Rd));
    Rte_Read_NvM_Data_IF_UserData2_Recv_Element_UserData2(UserData2Rd);
    UserData2Cmd = 0;
  }

  if(UserData2Cmd == 2)
  {
    VStdMemSet(UserData2Wr,0x06,sizeof(UserData2Wr));
    Rte_Write_NvM_Data_IF_UserData2_Send_Element_UserData2(UserData2Wr);
//    NvM_SetRamBlockStatus(NvMConf_NvMBlockDescriptor_NvM_SWC_NVBlockDescriptor_UserData2,TRUE);
    Rte_Call_NvSWC_UserData2_NvMService_AC3_SRBS_SetRamBlockStatus(TRUE);
    UserData2Cmd = 0;
#if 0
    NvM_RequestResultType BlockStatus;
    /*NVM ReadAll*/
    NvM_WriteAll();
    do
    {
      Fls_17_Dmu_MainFunction();
      Fee_MainFunction();
      NvM_MainFunction();
      NvM_GetErrorStatus(NvMConf___MultiBlockRequest,&BlockStatus);
    } while ( NVM_REQ_PENDING == BlockStatus );
#endif
  }

  if(UserData3Cmd == 1)
  {
    VStdMemSet(UserData3Rd,0xFF,sizeof(UserData3Rd));
    Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_UserData3_ReadBlock(UserData3Rd);
    UserData3Cmd = 0;
  }
  if(UserData3Cmd == 2)
  {
    VStdMemSet(UserData3Wr,0x09,sizeof(UserData3Wr));
    Rte_Call_NvMService_AC3_SRBS_NvBlockNeed_UserData3_WriteBlock(UserData3Wr);
    UserData3Cmd = 0;
  }
  #endif

  XcpCnt++;
  Xcp_Event(XcpConf_XcpEventChannel_XcpEventChannel_10MS);
  if( XcpCnt == 2 )
  {
    XcpCnt = 0;
    Xcp_Event(XcpConf_XcpEventChannel_XcpEventChannel_20MS);
  }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define SWC1_STOP_SEC_CODE
#include "SWC1_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
