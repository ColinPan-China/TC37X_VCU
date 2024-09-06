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
 *             File:  Rte_Hook.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Header file containing definitions for VFB tracing
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Names of available VFB-Trace-Hooks
 **********************************************************************************************************************
 *
 * Not configured:
 *
 *  Rte_CallHook_SWC1_UR_CN_TC37X_VCU_CAN00_b1b4f272_RequestComMode_Return
 *  Rte_CallHook_SWC1_UR_CN_TC37X_VCU_CAN00_b1b4f272_RequestComMode_Start
 *  Rte_ComHookRxTOut_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx
 *  Rte_ComHookRxTOut_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx
 *  Rte_ComHookRxTOut_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx
 *  Rte_ComHookRxTOut_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx
 *  Rte_ComHookRxTOut_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx
 *  Rte_ComHookRxTOut_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx
 *  Rte_ComHookRxTOut_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx
 *  Rte_ComHookRxTOut_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx
 *  Rte_ComHookRx_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx
 *  Rte_ComHookRx_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx
 *  Rte_ComHookRx_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx
 *  Rte_ComHookRx_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx
 *  Rte_ComHookRx_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx
 *  Rte_ComHookRx_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx
 *  Rte_ComHookRx_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx
 *  Rte_ComHookRx_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx
 *  Rte_ComHook_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx_SigRx
 *  Rte_ComHook_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx_SigRx
 *  Rte_ComHook_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx_SigRx
 *  Rte_ComHook_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx_SigRx
 *  Rte_ComHook_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx_SigRx
 *  Rte_ComHook_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx_SigRx
 *  Rte_ComHook_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx_SigRx
 *  Rte_ComHook_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx_SigRx
 *  Rte_ComHook_VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx_SigTx
 *  Rte_ComHook_VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx_SigTx
 *  Rte_ComHook_VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx_SigTx
 *  Rte_ComHook_VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx_SigTx
 *  Rte_ComHook_VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx_SigTx
 *  Rte_ComHook_VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx_SigTx
 *  Rte_ComHook_VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx_SigTx
 *  Rte_ComHook_VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx_SigTx
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start
 *  Rte_ReadHook_Com_SWC_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0_Return
 *  Rte_ReadHook_Com_SWC_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0_Start
 *  Rte_ReadHook_Com_SWC_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1_Return
 *  Rte_ReadHook_Com_SWC_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1_Start
 *  Rte_ReadHook_Com_SWC_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2_Return
 *  Rte_ReadHook_Com_SWC_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2_Start
 *  Rte_ReadHook_Com_SWC_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3_Return
 *  Rte_ReadHook_Com_SWC_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3_Start
 *  Rte_ReadHook_Com_SWC_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0_Return
 *  Rte_ReadHook_Com_SWC_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0_Start
 *  Rte_ReadHook_Com_SWC_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1_Return
 *  Rte_ReadHook_Com_SWC_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1_Start
 *  Rte_ReadHook_Com_SWC_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2_Return
 *  Rte_ReadHook_Com_SWC_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2_Start
 *  Rte_ReadHook_Com_SWC_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3_Return
 *  Rte_ReadHook_Com_SWC_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3_Start
 *  Rte_Runnable_BswM_BswM_MainFunction_Return
 *  Rte_Runnable_BswM_BswM_MainFunction_Start
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Return
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Start
 *  Rte_Runnable_ComM_GetCurrentComMode_Return
 *  Rte_Runnable_ComM_GetCurrentComMode_Start
 *  Rte_Runnable_ComM_GetInhibitionStatus_Return
 *  Rte_Runnable_ComM_GetInhibitionStatus_Start
 *  Rte_Runnable_ComM_GetMaxComMode_Return
 *  Rte_Runnable_ComM_GetMaxComMode_Start
 *  Rte_Runnable_ComM_GetRequestedComMode_Return
 *  Rte_Runnable_ComM_GetRequestedComMode_Start
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Return
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Start
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Return
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Start
 *  Rte_Runnable_ComM_PreventWakeUp_Return
 *  Rte_Runnable_ComM_PreventWakeUp_Start
 *  Rte_Runnable_ComM_ReadInhibitCounter_Return
 *  Rte_Runnable_ComM_ReadInhibitCounter_Start
 *  Rte_Runnable_ComM_RequestComMode_Return
 *  Rte_Runnable_ComM_RequestComMode_Start
 *  Rte_Runnable_ComM_ResetInhibitCounter_Return
 *  Rte_Runnable_ComM_ResetInhibitCounter_Start
 *  Rte_Runnable_ComM_SetECUGroupClassification_Return
 *  Rte_Runnable_ComM_SetECUGroupClassification_Start
 *  Rte_Runnable_Com_SWC_Com_Runnable_2ms_Return
 *  Rte_Runnable_Com_SWC_Com_Runnable_2ms_Start
 *  Rte_Runnable_Com_SWC_Rte_Msg200h_Rx_Notification_Return
 *  Rte_Runnable_Com_SWC_Rte_Msg200h_Rx_Notification_Start
 *  Rte_Runnable_Com_SWC_Rte_Msg201h_Rx_Notification_Return
 *  Rte_Runnable_Com_SWC_Rte_Msg201h_Rx_Notification_Start
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Return
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Start
 *  Rte_Runnable_EcuM_GetBootTarget_Return
 *  Rte_Runnable_EcuM_GetBootTarget_Start
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Start
 *  Rte_Runnable_EcuM_GetShutdownCause_Return
 *  Rte_Runnable_EcuM_GetShutdownCause_Start
 *  Rte_Runnable_EcuM_GetShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetShutdownTarget_Start
 *  Rte_Runnable_EcuM_SelectBootTarget_Return
 *  Rte_Runnable_EcuM_SelectBootTarget_Start
 *  Rte_Runnable_EcuM_SelectShutdownCause_Return
 *  Rte_Runnable_EcuM_SelectShutdownCause_Start
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Return
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Start
 *  Rte_Runnable_Os_OsCore0_swc_GetCounterValue_Return
 *  Rte_Runnable_Os_OsCore0_swc_GetCounterValue_Start
 *  Rte_Runnable_Os_OsCore0_swc_GetElapsedValue_Return
 *  Rte_Runnable_Os_OsCore0_swc_GetElapsedValue_Start
 *  Rte_Runnable_PowerMng_SWC_Led_Runnable1000ms_Return
 *  Rte_Runnable_PowerMng_SWC_Led_Runnable1000ms_Start
 *  Rte_Runnable_PowerMng_SWC_PowerMng_SWC_Init_Return
 *  Rte_Runnable_PowerMng_SWC_PowerMng_SWC_Init_Start
 *  Rte_Runnable_SWC1_SWC1_Init_Return
 *  Rte_Runnable_SWC1_SWC1_Init_Start
 *  Rte_Runnable_SWC1_SWC1_Runnable10ms_Return
 *  Rte_Runnable_SWC1_SWC1_Runnable10ms_Start
 *  Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return
 *  Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start
 *  Rte_Task_Activate
 *  Rte_Task_Dispatch
 *  Rte_Task_SetEvent
 *  Rte_Task_Terminate
 *  Rte_Task_WaitEvent
 *  Rte_Task_WaitEventRet
 *  Rte_WriteHook_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0_Return
 *  Rte_WriteHook_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0_Start
 *  Rte_WriteHook_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1_Return
 *  Rte_WriteHook_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1_Start
 *  Rte_WriteHook_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2_Return
 *  Rte_WriteHook_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2_Start
 *  Rte_WriteHook_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3_Return
 *  Rte_WriteHook_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3_Start
 *  Rte_WriteHook_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0_Return
 *  Rte_WriteHook_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0_Start
 *  Rte_WriteHook_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1_Return
 *  Rte_WriteHook_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1_Start
 *  Rte_WriteHook_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2_Return
 *  Rte_WriteHook_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2_Start
 *  Rte_WriteHook_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3_Return
 *  Rte_WriteHook_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3_Start
 *  Rte_WriteHook_SWC1_Request_ESH_RunRequest_0_requestedMode_Return
 *  Rte_WriteHook_SWC1_Request_ESH_RunRequest_0_requestedMode_Start
 *  SchM_EnterHook_BswM_BSWM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_BswM_BSWM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_4_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_4_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_5_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_5_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_6_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_6_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_7_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_7_Start
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_4_Return
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_4_Start
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_5_Return
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_5_Start
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_6_Return
 *  SchM_EnterHook_CanNm_CANNM_EXCLUSIVE_AREA_6_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_4_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_4_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_5_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_5_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_6_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_6_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_4_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_4_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_5_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_5_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_6_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_6_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_7_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_7_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_4_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_4_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_5_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_5_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_6_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_6_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_7_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_7_Start
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_BOTH_Return
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_BOTH_Start
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_RX_Return
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_RX_Start
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_TX_Return
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_TX_Start
 *  SchM_EnterHook_Det_DET_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Det_DET_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_McalLib_CpuEndInit_Return
 *  SchM_EnterHook_McalLib_CpuEndInit_Start
 *  SchM_EnterHook_McalLib_PeripheralEndInit_Return
 *  SchM_EnterHook_McalLib_PeripheralEndInit_Start
 *  SchM_EnterHook_McalLib_SafetyEndInit_Return
 *  SchM_EnterHook_McalLib_SafetyEndInit_Start
 *  SchM_EnterHook_McalLib_StmTimerResolution_Return
 *  SchM_EnterHook_McalLib_StmTimerResolution_Start
 *  SchM_EnterHook_Mcu_AtomAgcReg_Return
 *  SchM_EnterHook_Mcu_AtomAgcReg_Start
 *  SchM_EnterHook_Mcu_TomTgcReg_Return
 *  SchM_EnterHook_Mcu_TomTgcReg_Start
 *  SchM_EnterHook_Nm_NM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Nm_NM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Nm_NM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_Nm_NM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_Nm_NM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_Nm_NM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_Nm_NM_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_Nm_NM_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_PduR_PDUR_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_PduR_PDUR_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_BswM_BSWM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_BswM_BSWM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_4_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_4_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_5_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_5_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_6_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_6_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_7_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_7_Start
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_4_Return
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_4_Start
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_5_Return
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_5_Start
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_6_Return
 *  SchM_ExitHook_CanNm_CANNM_EXCLUSIVE_AREA_6_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_4_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_4_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_5_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_5_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_6_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_6_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_4_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_4_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_5_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_5_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_6_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_6_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_7_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_7_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_4_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_4_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_5_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_5_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_6_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_6_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_7_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_7_Start
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_BOTH_Return
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_BOTH_Start
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_RX_Return
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_RX_Start
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_TX_Return
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_TX_Start
 *  SchM_ExitHook_Det_DET_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Det_DET_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_McalLib_CpuEndInit_Return
 *  SchM_ExitHook_McalLib_CpuEndInit_Start
 *  SchM_ExitHook_McalLib_PeripheralEndInit_Return
 *  SchM_ExitHook_McalLib_PeripheralEndInit_Start
 *  SchM_ExitHook_McalLib_SafetyEndInit_Return
 *  SchM_ExitHook_McalLib_SafetyEndInit_Start
 *  SchM_ExitHook_McalLib_StmTimerResolution_Return
 *  SchM_ExitHook_McalLib_StmTimerResolution_Start
 *  SchM_ExitHook_Mcu_AtomAgcReg_Return
 *  SchM_ExitHook_Mcu_AtomAgcReg_Start
 *  SchM_ExitHook_Mcu_TomTgcReg_Return
 *  SchM_ExitHook_Mcu_TomTgcReg_Start
 *  SchM_ExitHook_Nm_NM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Nm_NM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Nm_NM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_Nm_NM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_Nm_NM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_Nm_NM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_Nm_NM_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_Nm_NM_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_PduR_PDUR_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_PduR_PDUR_EXCLUSIVE_AREA_0_Start
 *  SchM_Schedulable_BswM_BswM_MainFunction_Return
 *  SchM_Schedulable_BswM_BswM_MainFunction_Start
 *  SchM_Schedulable_CanNm_CanNm_MainFunction_Return
 *  SchM_Schedulable_CanNm_CanNm_MainFunction_Start
 *  SchM_Schedulable_CanSM_CanSM_MainFunction_Return
 *  SchM_Schedulable_CanSM_CanSM_MainFunction_Start
 *  SchM_Schedulable_Can_Can_MainFunction_BusOff_Return
 *  SchM_Schedulable_Can_Can_MainFunction_BusOff_Start
 *  SchM_Schedulable_Can_Can_MainFunction_Mode_Return
 *  SchM_Schedulable_Can_Can_MainFunction_Mode_Start
 *  SchM_Schedulable_Can_Can_MainFunction_Wakeup_Return
 *  SchM_Schedulable_Can_Can_MainFunction_Wakeup_Start
 *  SchM_Schedulable_ComM_ComM_MainFunction_0_Return
 *  SchM_Schedulable_ComM_ComM_MainFunction_0_Start
 *  SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx_Return
 *  SchM_Schedulable_Com_Com_MainFunctionRx_ComMainFunctionRx_Start
 *  SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx_Return
 *  SchM_Schedulable_Com_Com_MainFunctionTx_ComMainFunctionTx_Start
 *  SchM_Schedulable_EcuM_EcuM_MainFunction_Return
 *  SchM_Schedulable_EcuM_EcuM_MainFunction_Start
 *
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_HOOK_H
# define RTE_HOOK_H

# include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_Dir1.1, MD_Rte_Os */

# include "Rte_Type.h"
# include "Rte_Cfg.h"

# ifndef RTE_VFB_TRACE
#  define RTE_VFB_TRACE (0)
# endif

#endif /* RTE_HOOK_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
