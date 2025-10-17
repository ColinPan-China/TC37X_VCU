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
 *             File:  Rte_Cbk.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Callback header file
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CBK_H
# define RTE_CBK_H

# include "Com.h"


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * COM Callbacks for Rx Indication
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) Rte_COMCbk_CCS_OutputCurrent_oCCS_oJ1939_bms_d187cc6a_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CCS_OutputVoltage_oCCS_oJ1939_bms_e8aa6018_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CEM_BatteryChargeRequireTimeout_oCEM_oJ1939_bms_5fb156f4_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CHM_ProtocolVersion_oCHM_oJ1939_bms_0a8dbb13_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CML_OutpuVoltageMax_oCML_oJ1939_bms_5dd5d6c5_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CML_OutputCurrentMax_oCML_oJ1939_bms_a474b4e9_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CML_OutputCurrentMin_oCML_oJ1939_bms_03403490_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CML_OutputVoltageMin_oCML_oJ1939_bms_13582707_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CRM_RecognitionResult_oCRM_oJ1939_bms_dd9063d0_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CRO_ChargerReady_oCRO_oJ1939_bms_5ed7a56d_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CSD_ChargerNo_oCSD_oJ1939_bms_26864bff_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CST_AbortAchiveCondition_oCST_oJ1939_bms_ed49cd8a_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_CTS_Year_oCTS_oJ1939_bms_66f2efa9_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_FRC_ComFtonNet_oFRC_01_oATOM_HWLIN1_9657f14b_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_FRC_Vl_OV_oFRC_01_oATOM_HWLIN1_0d56a8b4_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_FRC_Vl_UV_oFRC_01_oATOM_HWLIN1_e10bbe37_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_IBATT_QUIESCENT_oBS_01_oATOM_HWLIN1_4bd68518_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_I_BATT_oBS_01_oATOM_HWLIN1_194c0d33_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_I_RANGE_oBS_01_oATOM_HWLIN1_5f69a46a_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_Resp_Error_oBS_01_oATOM_HWLIN1_f35fadbf_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_ACU_01_SigGroup_oACU_01_oATOM_CANFD_Matrix_CH_V600_202502_0a16dd9e_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_ACU_02_SigGroup_oACU_02_oATOM_CANFD_Matrix_CH_V600_202502_3b90e790_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_ACU_info_SigGroup_oACU_info_oATOM_CANFD_Matrix_CH_V600_202502_5b63ef23_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_ACC_02_SigGroup_oADCU_ACC_02_oATOM_CANFD_Matrix_CH_V600_202502_1e479296_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_AEB_01_SigGroup_oADCU_AEB_01_oATOM_CANFD_Matrix_CH_V600_202502_50a93e3a_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_APS_01_SigGroup_oADCU_APS_01_oATOM_CANFD_Matrix_CH_V600_202502_c590572d_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_APS_02_SigGroup_oADCU_APS_02_oATOM_CANFD_Matrix_CH_V600_202502_67bc1f98_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_ADCU_DA_SigGroup_oADCU_DA_oATOM_CANFD_Matrix_CH_V600_202502_4133b6dd_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_APTC_TCU_SigGroup_oAPTC_TCU_oATOM_CAN_Matrix_PT_V600_20250211_467c0275_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BCM_05_SigGroup_oBCM_05_oATOM_CAN_Matrix_PT_V600_20250211_46c76b05_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BCM_06_SigGroup_oBCM_06_oATOM_CAN_Matrix_PT_V600_20250211_7741510b_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_BatInfor_01_SigGroup_oBMS_BatInfor_01_oATOM_CAN_Matrix_PT_V600_20250211_4fef2501_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_BatInfor_02_SigGroup_oBMS_BatInfor_02_oATOM_CAN_Matrix_PT_V600_20250211_426bcc59_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_BatInfor_03_SigGroup_oBMS_BatInfor_03_oATOM_CAN_Matrix_PT_V600_20250211_f03896ae_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_CellTemp_SigGroup_oBMS_CellTemp_oATOM_CAN_Matrix_PT_V600_20250211_591a267a_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_CellVoltage_SigGroup_oBMS_CellVoltage_oATOM_CAN_Matrix_PT_V600_20250211_e26ec140_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_Charge_01_SigGroup_oBMS_Charge_01_oATOM_CAN_Matrix_PT_V600_20250211_216177cb_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_Charge_02_SigGroup_oBMS_Charge_02_oATOM_CAN_Matrix_PT_V600_20250211_116647c1_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_Charge_03_SigGroup_oBMS_Charge_03_oATOM_CAN_Matrix_PT_V600_20250211_b7b455f8_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_DIRelayState_SigGroup_oBMS_DIRelayState_oATOM_CAN_Matrix_PT_V600_20250211_ca554d8c_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_ErrorInfo_SigGroup_oBMS_ErrorInfo_oATOM_CAN_Matrix_PT_V600_20250211_0728f72e_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_PRO_SigGroup_oBMS_PRO_oATOM_CAN_Matrix_PT_V600_20250211_21a267c0_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_TCU_SigGroup_oBMS_TCU_oATOM_CAN_Matrix_PT_V600_20250211_541a46a3_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_VersionInfor_SigGroup_oBMS_VersionInfor_oATOM_CAN_Matrix_PT_V600_20250211_3c7841d8_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_status_01_SigGroup_oBMS_status_01_oATOM_CAN_Matrix_PT_V600_20250211_2f7ddbcd_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_status_02_SigGroup_oBMS_status_02_oATOM_CAN_Matrix_PT_V600_20250211_1f7aebc7_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_status_03_SigGroup_oBMS_status_03_oATOM_CAN_Matrix_PT_V600_20250211_b9a8f9fe_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_BMS_status_04_SigGroup_oBMS_status_04_oATOM_CAN_Matrix_PT_V600_20250211_7f748bd3_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_01_SigGroup_oCGW_01_oATOM_CAN_Matrix_PT_V600_20250211_9280de14_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_02_SigGroup_oCGW_02_oATOM_CAN_Matrix_PT_V600_20250211_a306e41a_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_VIN1_SigGroup_oCGW_VIN1_oATOM_CAN_Matrix_PT_V600_20250211_49910b51_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_VIN2_SigGroup_oCGW_VIN2_oATOM_CAN_Matrix_PT_V600_20250211_c0accf92_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_CGW_VIN3VER_SigGroup_oCGW_VIN3VER_oATOM_CAN_Matrix_PT_V600_20250211_7600cd71_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_FL_02_SigGroup_oDCM_FL_02_oATOM_CAN_Matrix_PT_V600_20250211_46147686_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_FR_02_SigGroup_oDCM_FR_02_oATOM_CAN_Matrix_PT_V600_20250211_f609c275_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_FR_SigGroup_oDCM_FR_oATOM_CAN_Matrix_PT_V600_20250211_eb540c93_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_RL_SigGroup_oDCM_RL_oATOM_CAN_Matrix_PT_V600_20250211_a6554e24_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_DCM_RR_SigGroup_oDCM_RR_oATOM_CAN_Matrix_PT_V600_20250211_9219ec09_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_EPS_CONV_SigGroup_oEPS_CONV_oATOM_CANFD_Matrix_CH_V600_202502_42428757_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_EVCOM_State_01_SigGroup_oEVCOM_State_01_oATOM_CAN_Matrix_PT_V600_20250211_16f3767b_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_ACC_SigGroup_oIBS_ACC_oATOM_CANFD_Matrix_CH_V600_202502_c31bc8ab_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_APS_SigGroup_oIBS_APS_oATOM_CANFD_Matrix_CH_V600_202502_91bbe9ec_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_01_SigGroup_oIBS_Status_01_oATOM_CANFD_Matrix_CH_V600_202502_bdf732ba_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_02_SigGroup_oIBS_Status_02_oATOM_CANFD_Matrix_CH_V600_202502_8df002b0_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_03_SigGroup_oIBS_Status_03_oATOM_CANFD_Matrix_CH_V600_202502_2b221089_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_04_SigGroup_oIBS_Status_04_oATOM_CANFD_Matrix_CH_V600_202502_edfe62a4_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_05_SigGroup_oIBS_Status_05_oATOM_CAN_Matrix_PT_V600_20250211_7471090c_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Status_06_SigGroup_oIBS_Status_06_oATOM_CANFD_Matrix_CH_V600_202502_7b2b4097_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_Torque_SigGroup_oIBS_Torque_oATOM_CANFD_Matrix_CH_V600_202502_5a2dd5ad_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_VCU_MotorControl_SigGroup_oIBS_VCU_MotorControl_oATOM_CANFD_Matrix_CH_V600_202502_9a811a5b_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_WheelSpeed_01_SigGroup_oIBS_WheelSpeed_01_oATOM_CANFD_Matrix_CH_V600_202502_5773aa13_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IBS_WheelSpeed_02_SigGroup_oIBS_WheelSpeed_02_oATOM_CANFD_Matrix_CH_V600_202502_2d752b6e_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IVI_01_SigGroup_oIVI_01_oATOM_CAN_Matrix_PT_V600_20250211_284cc0c2_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IVI_03_SigGroup_oIVI_03_oATOM_CAN_Matrix_PT_V600_20250211_bf981109_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_IVI_OdometerInfor_SigGroup_oIVI_OdometerInfor_oATOM_CAN_Matrix_PT_V600_20250211_3516238b_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_01_SigGroup_oMCU_01_oATOM_CAN_Matrix_PT_V600_20250211_3844bc9f_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_02_SigGroup_oMCU_02_oATOM_CAN_Matrix_PT_V600_20250211_09c28691_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_DeratingStatus_SigGroup_oMCU_DeratingStatus_oATOM_CAN_Matrix_PT_V600_20250211_c60bf9ce_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_FailureCode_SigGroup_oMCU_FailureCode_oATOM_CAN_Matrix_PT_V600_20250211_bf11f7cf_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_Temperature_01_SigGroup_oMCU_Temperature_01_oATOM_CAN_Matrix_PT_V600_20250211_9ee5905c_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_MCU_Temperature_02_SigGroup_oMCU_Temperature_02_oATOM_CAN_Matrix_PT_V600_20250211_5f18debb_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_DCDC_01_SigGroup_oPOD_DCDC_01_oATOM_CAN_Matrix_PT_V600_20250211_c0cfae4d_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_DCDC_02_SigGroup_oPOD_DCDC_02_oATOM_CAN_Matrix_PT_V600_20250211_62e3e6f8_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_OBC_CHRGSTATION_SigGroup_oPOD_OBC_CHRGSTATION_oATOM_CAN_Matrix_PT_V600_20250211_4d87b474_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_OBC_STATUS_02_SigGroup_oPOD_OBC_STATUS_02_oATOM_CAN_Matrix_PT_V600_20250211_49c67a09_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_OBC_STATUS_03_SigGroup_oPOD_OBC_STATUS_03_oATOM_CAN_Matrix_PT_V600_20250211_d6eb071d_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_OBC_STATUS_04_SigGroup_oPOD_OBC_STATUS_04_oATOM_CAN_Matrix_PT_V600_20250211_bdcb78f3_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_Status_01_SigGroup_oPOD_Status_01_oATOM_CAN_Matrix_PT_V600_20250211_880c9d5a_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_POD_Status_02_SigGroup_oPOD_Status_02_oATOM_CAN_Matrix_PT_V600_20250211_b80bad50_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_PRND_SigGroup_oPRND_oATOM_CAN_Matrix_PT_V600_20250211_ddf34a23_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_01_SigGroup_oSGW_01_oATOM_CAN_Matrix_PT_V600_20250211_37bbfdeb_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_04_SigGroup_oSGW_04_oATOM_CAN_Matrix_PT_V600_20250211_6531b3f9_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_16_SigGroup_oSGW_16_oATOM_CAN_Matrix_PT_V600_20250211_194d06e6_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_17_SigGroup_oSGW_17_oATOM_CANFD_Matrix_CH_V600_202502_804294b2_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_FVSynchronization_01_SigGrou_oSGW_FVSynchronization_01_oATOM_CAN_Matrix_PT_V600_20250211_0d3cf875_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_IBS_01_SigGroup_oSGW_IBS_01_oATOM_CAN_Matrix_PT_V600_20250211_0dec95d0_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_PT_01_SigGroup_oSGW_PT_01_oATOM_CAN_Matrix_PT_V600_20250211_d1f7f071_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_Time_SigGroup_oSGW_Time_oATOM_CAN_Matrix_PT_V600_20250211_0ca37593_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_SGW_VCU_01_SigGroup_oSGW_VCU_01_oATOM_CAN_Matrix_PT_V600_20250211_899d317b_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_TCU_01_SigGroup_oTCU_01_oATOM_CAN_Matrix_PT_V600_20250211_95b4cd9c_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SG_TCU_02_SigGroup_oTCU_02_oATOM_CAN_Matrix_PT_V600_20250211_a432f792_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SOC_oBS_02_oATOM_HWLIN1_5cc1cc8b_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SOF_V1_oBS_02_oATOM_HWLIN1_92563dee_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SOF_V2_oBS_02_oATOM_HWLIN1_e948bf0d_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_SOH_oBS_02_oATOM_HWLIN1_022d471e_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_T_BATT_oBS_01_oATOM_HWLIN1_2bbe4bbe_Rx(void);
FUNC(void, RTE_CODE) Rte_COMCbk_U_BATT_oBS_01_oATOM_HWLIN1_cca3ed29_Rx(void);

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#endif /* RTE_CBK_H */
