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
 *             File:  Rte_Dcm.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <Dcm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_DCM_H
# define RTE_DCM_H

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

# include "Rte_Dcm_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d(Dcm_CommunicationModeType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_Major_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_Major_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_Minor_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_Minor_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_No_functional_content_change_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BSW_version_number_No_functional_content_change_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_BS_SOC_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_BS_SOC_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOH_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_SOH_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_T_BATT_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_T_BATT_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_VCU_BS_Hcurrent_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_BS_base_information4_VCU_BS_Hcurrent_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Battery_Voltage_Battery_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Battery_Voltage_Battery_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_Major_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_Major_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_Minor_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_Minor_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_No_functional_content_change_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Bootloader_version_number_No_functional_content_change_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Chargestatus_Chargestatus_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Chargestatus_Chargestatus_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Day_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Day_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Hour_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Hour_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Minute_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Minute_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Month_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Month_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Second_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Second_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Year_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Year_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Country_code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Country_code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_family_code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_family_code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Driver_Mode_Driver_Mode_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Driver_Mode_Driver_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Major_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Major_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Minor_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Minor_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Detail_Code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Detail_Code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Detail_Code_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Execution_Package_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Execution_Package_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Execution_Package_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Group_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Group_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Group_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Subgroup_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Subgroup_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_EcuIdentification_Subgroup_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Electronic_lock_state_Electronic_lock_state_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Electronic_lock_state_Electronic_lock_state_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Gear_Gear_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Gear_Gear_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Day_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Day_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Day_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Month_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Month_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Month_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Year_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Year_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Last_service_date_Year_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Detail_Code_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Detail_Code_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Execution_Package_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Execution_Package_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Group_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Group_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Subgroup_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Subgroup_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Configuration_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Configuration_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Configuration_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved3_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SOC_SOC_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SOC_SOC_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_Name_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_Name_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_index_number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_index_number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_Supplier_name_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_SerialNumber_Supplier_name_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Major_release_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Major_release_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_Total_Odometer_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_Total_Odometer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_HVStatus_VCU_HVStatus_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_HVStatus_VCU_HVStatus_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_S2_status_New_Bit_Field_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_S2_status_New_Bit_Field_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrealy1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrealy1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrelay2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrelay2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_State_Ignition_Switch_Signal_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_State_Ignition_Switch_Signal_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_speed_Vehicle_speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Vehicle_speed_Vehicle_speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level1_OEM_Key_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level1_OEM_Key_OEM_Key_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level2_OEM_Key_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level2_OEM_Key_OEM_Key_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level3_OEM_Key_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level3_OEM_Key_OEM_Key_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level4_OEM_Key_CRC_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Write_Level4_OEM_Key_OEM_Key_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_CheckCodingState_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_CheckCodingState_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_CheckProgrammingDependencies_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_CheckProgrammingDependencies_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_CheckProgrammingPreCondition_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_CheckProgrammingPreCondition_Out_programmingPreConditionListArrayType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_programmingPreConditionList, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Check_Memory_Start(Dcm_StartDataIn_Check_Memory_In_checksumType In_checksum, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Check_Memory_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Erase_Memory_Start(Dcm_StartDataIn_Erase_Memory_In_addressAndLengthFormatIdentifierType In_addressAndLengthFormatIdentifier, Dcm_StartDataIn_Erase_Memory_In_memoryAddressType In_memoryAddress, Dcm_StartDataIn_Erase_Memory_In_memorySizeType In_memorySize, Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Erase_Memory_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Erase_Mileage_Provisional_Parameter_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Erase_Mileage_Provisional_Parameter_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StartDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_StopDataOut_Turn_Off_HV_Turn_Off_Charging_Out_routineResultType, AUTOMATIC, RTE_DCM_APPL_VAR) Out_routineResult, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_2_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_2_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_3_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_3_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_4_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Unlocked_Level_4_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d Rte_Switch_Dcm_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d
#  define Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting
#  define Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl
#  define Rte_Switch_DcmEcuReset_DcmEcuReset Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Feedback_<p>_<m> (mode switch acknowledge)
 *********************************************************************************************************************/
#  define Rte_SwitchAck_DcmEcuReset_DcmEcuReset Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ConditionCheckRead Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ConditionCheckRead
#  define Rte_Call_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ReadData Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ReadData
#  define Rte_Call_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ConditionCheckRead Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ConditionCheckRead
#  define Rte_Call_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ReadData Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ReadData
#  define Rte_Call_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ConditionCheckRead Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ConditionCheckRead
#  define Rte_Call_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ReadData Rte_Call_Dcm_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ReadData
#  define Rte_Call_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ConditionCheckRead Rte_Call_Dcm_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ConditionCheckRead
#  define Rte_Call_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ReadData Rte_Call_Dcm_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ReadData
#  define Rte_Call_DataServices_BSW_version_number_Major_release_ConditionCheckRead Rte_Call_Dcm_DataServices_BSW_version_number_Major_release_ConditionCheckRead
#  define Rte_Call_DataServices_BSW_version_number_Major_release_ReadData Rte_Call_Dcm_DataServices_BSW_version_number_Major_release_ReadData
#  define Rte_Call_DataServices_BSW_version_number_Minor_release_ConditionCheckRead Rte_Call_Dcm_DataServices_BSW_version_number_Minor_release_ConditionCheckRead
#  define Rte_Call_DataServices_BSW_version_number_Minor_release_ReadData Rte_Call_Dcm_DataServices_BSW_version_number_Minor_release_ReadData
#  define Rte_Call_DataServices_BSW_version_number_No_functional_content_change_ConditionCheckRead Rte_Call_Dcm_DataServices_BSW_version_number_No_functional_content_change_ConditionCheckRead
#  define Rte_Call_DataServices_BSW_version_number_No_functional_content_change_ReadData Rte_Call_Dcm_DataServices_BSW_version_number_No_functional_content_change_ReadData
#  define Rte_Call_DataServices_BS_base_information4_BS_SOC_ConditionCheckRead Rte_Call_Dcm_DataServices_BS_base_information4_BS_SOC_ConditionCheckRead
#  define Rte_Call_DataServices_BS_base_information4_BS_SOC_ReadData Rte_Call_Dcm_DataServices_BS_base_information4_BS_SOC_ReadData
#  define Rte_Call_DataServices_BS_base_information4_SOF_V1_ConditionCheckRead Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V1_ConditionCheckRead
#  define Rte_Call_DataServices_BS_base_information4_SOF_V1_ReadData Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V1_ReadData
#  define Rte_Call_DataServices_BS_base_information4_SOF_V2_ConditionCheckRead Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V2_ConditionCheckRead
#  define Rte_Call_DataServices_BS_base_information4_SOF_V2_ReadData Rte_Call_Dcm_DataServices_BS_base_information4_SOF_V2_ReadData
#  define Rte_Call_DataServices_BS_base_information4_SOH_ConditionCheckRead Rte_Call_Dcm_DataServices_BS_base_information4_SOH_ConditionCheckRead
#  define Rte_Call_DataServices_BS_base_information4_SOH_ReadData Rte_Call_Dcm_DataServices_BS_base_information4_SOH_ReadData
#  define Rte_Call_DataServices_BS_base_information4_T_BATT_ConditionCheckRead Rte_Call_Dcm_DataServices_BS_base_information4_T_BATT_ConditionCheckRead
#  define Rte_Call_DataServices_BS_base_information4_T_BATT_ReadData Rte_Call_Dcm_DataServices_BS_base_information4_T_BATT_ReadData
#  define Rte_Call_DataServices_BS_base_information4_VCU_BS_Hcurrent_ConditionCheckRead Rte_Call_Dcm_DataServices_BS_base_information4_VCU_BS_Hcurrent_ConditionCheckRead
#  define Rte_Call_DataServices_BS_base_information4_VCU_BS_Hcurrent_ReadData Rte_Call_Dcm_DataServices_BS_base_information4_VCU_BS_Hcurrent_ReadData
#  define Rte_Call_DataServices_Battery_Voltage_Battery_Voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_Battery_Voltage_Battery_Voltage_ConditionCheckRead
#  define Rte_Call_DataServices_Battery_Voltage_Battery_Voltage_ReadData Rte_Call_Dcm_DataServices_Battery_Voltage_Battery_Voltage_ReadData
#  define Rte_Call_DataServices_Bootloader_version_number_Major_release_ConditionCheckRead Rte_Call_Dcm_DataServices_Bootloader_version_number_Major_release_ConditionCheckRead
#  define Rte_Call_DataServices_Bootloader_version_number_Major_release_ReadData Rte_Call_Dcm_DataServices_Bootloader_version_number_Major_release_ReadData
#  define Rte_Call_DataServices_Bootloader_version_number_Minor_release_ConditionCheckRead Rte_Call_Dcm_DataServices_Bootloader_version_number_Minor_release_ConditionCheckRead
#  define Rte_Call_DataServices_Bootloader_version_number_Minor_release_ReadData Rte_Call_Dcm_DataServices_Bootloader_version_number_Minor_release_ReadData
#  define Rte_Call_DataServices_Bootloader_version_number_No_functional_content_change_ConditionCheckRead Rte_Call_Dcm_DataServices_Bootloader_version_number_No_functional_content_change_ConditionCheckRead
#  define Rte_Call_DataServices_Bootloader_version_number_No_functional_content_change_ReadData Rte_Call_Dcm_DataServices_Bootloader_version_number_No_functional_content_change_ReadData
#  define Rte_Call_DataServices_Chargestatus_Chargestatus_ConditionCheckRead Rte_Call_Dcm_DataServices_Chargestatus_Chargestatus_ConditionCheckRead
#  define Rte_Call_DataServices_Chargestatus_Chargestatus_ReadData Rte_Call_Dcm_DataServices_Chargestatus_Chargestatus_ReadData
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ConditionCheckRead Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ConditionCheckRead
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ReadData Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ReadData
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_WriteData Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_WriteData
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ConditionCheckRead Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ConditionCheckRead
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ReadData Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ReadData
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_WriteData Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_WriteData
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ConditionCheckRead Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ConditionCheckRead
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ReadData Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ReadData
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_WriteData Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_WriteData
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ConditionCheckRead Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ConditionCheckRead
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ReadData Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ReadData
#  define Rte_Call_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_WriteData Rte_Call_Dcm_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_WriteData
#  define Rte_Call_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ConditionCheckRead Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ConditionCheckRead
#  define Rte_Call_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ReadData Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ReadData
#  define Rte_Call_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ConditionCheckRead Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ConditionCheckRead
#  define Rte_Call_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ReadData Rte_Call_Dcm_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ReadData
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Day_ConditionCheckRead Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Day_ConditionCheckRead
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Day_ReadData Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Day_ReadData
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Hour_ConditionCheckRead Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Hour_ConditionCheckRead
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Hour_ReadData Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Hour_ReadData
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Minute_ConditionCheckRead Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Minute_ConditionCheckRead
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Minute_ReadData Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Minute_ReadData
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Month_ConditionCheckRead Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Month_ConditionCheckRead
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Month_ReadData Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Month_ReadData
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Second_ConditionCheckRead Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Second_ConditionCheckRead
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Second_ReadData Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Second_ReadData
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Year_ConditionCheckRead Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Year_ConditionCheckRead
#  define Rte_Call_DataServices_Date_And_Time_Date_And_Time_Year_ReadData Rte_Call_Dcm_DataServices_Date_And_Time_Date_And_Time_Year_ReadData
#  define Rte_Call_DataServices_DevelopmentData_Country_code_ConditionCheckRead Rte_Call_Dcm_DataServices_DevelopmentData_Country_code_ConditionCheckRead
#  define Rte_Call_DataServices_DevelopmentData_Country_code_ReadData Rte_Call_Dcm_DataServices_DevelopmentData_Country_code_ReadData
#  define Rte_Call_DataServices_DevelopmentData_Supplier_code_ConditionCheckRead Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_code_ConditionCheckRead
#  define Rte_Call_DataServices_DevelopmentData_Supplier_code_ReadData Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_code_ReadData
#  define Rte_Call_DataServices_DevelopmentData_Supplier_family_code_ConditionCheckRead Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_family_code_ConditionCheckRead
#  define Rte_Call_DataServices_DevelopmentData_Supplier_family_code_ReadData Rte_Call_Dcm_DataServices_DevelopmentData_Supplier_family_code_ReadData
#  define Rte_Call_DataServices_Driver_Mode_Driver_Mode_ConditionCheckRead Rte_Call_Dcm_DataServices_Driver_Mode_Driver_Mode_ConditionCheckRead
#  define Rte_Call_DataServices_Driver_Mode_Driver_Mode_ReadData Rte_Call_Dcm_DataServices_Driver_Mode_Driver_Mode_ReadData
#  define Rte_Call_DataServices_ECU_application_software_ASW_version_number_Major_release_ConditionCheckRead Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Major_release_ConditionCheckRead
#  define Rte_Call_DataServices_ECU_application_software_ASW_version_number_Major_release_ReadData Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Major_release_ReadData
#  define Rte_Call_DataServices_ECU_application_software_ASW_version_number_Minor_release_ConditionCheckRead Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Minor_release_ConditionCheckRead
#  define Rte_Call_DataServices_ECU_application_software_ASW_version_number_Minor_release_ReadData Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_Minor_release_ReadData
#  define Rte_Call_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ConditionCheckRead Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ConditionCheckRead
#  define Rte_Call_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ReadData Rte_Call_Dcm_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ReadData
#  define Rte_Call_DataServices_EcuIdentification_Detail_Code_ConditionCheckRead Rte_Call_Dcm_DataServices_EcuIdentification_Detail_Code_ConditionCheckRead
#  define Rte_Call_DataServices_EcuIdentification_Detail_Code_ReadData Rte_Call_Dcm_DataServices_EcuIdentification_Detail_Code_ReadData
#  define Rte_Call_DataServices_EcuIdentification_Detail_Code_WriteData Rte_Call_Dcm_DataServices_EcuIdentification_Detail_Code_WriteData
#  define Rte_Call_DataServices_EcuIdentification_Execution_Package_ConditionCheckRead Rte_Call_Dcm_DataServices_EcuIdentification_Execution_Package_ConditionCheckRead
#  define Rte_Call_DataServices_EcuIdentification_Execution_Package_ReadData Rte_Call_Dcm_DataServices_EcuIdentification_Execution_Package_ReadData
#  define Rte_Call_DataServices_EcuIdentification_Execution_Package_WriteData Rte_Call_Dcm_DataServices_EcuIdentification_Execution_Package_WriteData
#  define Rte_Call_DataServices_EcuIdentification_Group_ConditionCheckRead Rte_Call_Dcm_DataServices_EcuIdentification_Group_ConditionCheckRead
#  define Rte_Call_DataServices_EcuIdentification_Group_ReadData Rte_Call_Dcm_DataServices_EcuIdentification_Group_ReadData
#  define Rte_Call_DataServices_EcuIdentification_Group_WriteData Rte_Call_Dcm_DataServices_EcuIdentification_Group_WriteData
#  define Rte_Call_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ConditionCheckRead Rte_Call_Dcm_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ConditionCheckRead
#  define Rte_Call_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ReadData Rte_Call_Dcm_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ReadData
#  define Rte_Call_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_WriteData Rte_Call_Dcm_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_WriteData
#  define Rte_Call_DataServices_EcuIdentification_Subgroup_ConditionCheckRead Rte_Call_Dcm_DataServices_EcuIdentification_Subgroup_ConditionCheckRead
#  define Rte_Call_DataServices_EcuIdentification_Subgroup_ReadData Rte_Call_Dcm_DataServices_EcuIdentification_Subgroup_ReadData
#  define Rte_Call_DataServices_EcuIdentification_Subgroup_WriteData Rte_Call_Dcm_DataServices_EcuIdentification_Subgroup_WriteData
#  define Rte_Call_DataServices_Electronic_lock_state_Electronic_lock_state_ConditionCheckRead Rte_Call_Dcm_DataServices_Electronic_lock_state_Electronic_lock_state_ConditionCheckRead
#  define Rte_Call_DataServices_Electronic_lock_state_Electronic_lock_state_ReadData Rte_Call_Dcm_DataServices_Electronic_lock_state_Electronic_lock_state_ReadData
#  define Rte_Call_DataServices_Gear_Gear_ConditionCheckRead Rte_Call_Dcm_DataServices_Gear_Gear_ConditionCheckRead
#  define Rte_Call_DataServices_Gear_Gear_ReadData Rte_Call_Dcm_DataServices_Gear_Gear_ReadData
#  define Rte_Call_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ConditionCheckRead Rte_Call_Dcm_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ConditionCheckRead
#  define Rte_Call_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ReadData Rte_Call_Dcm_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ReadData
#  define Rte_Call_DataServices_HV_part_work_mode_HV_part_work_mode1_ConditionCheckRead Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode1_ConditionCheckRead
#  define Rte_Call_DataServices_HV_part_work_mode_HV_part_work_mode1_ReadData Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode1_ReadData
#  define Rte_Call_DataServices_HV_part_work_mode_HV_part_work_mode2_ConditionCheckRead Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode2_ConditionCheckRead
#  define Rte_Call_DataServices_HV_part_work_mode_HV_part_work_mode2_ReadData Rte_Call_Dcm_DataServices_HV_part_work_mode_HV_part_work_mode2_ReadData
#  define Rte_Call_DataServices_Last_service_date_Day_ConditionCheckRead Rte_Call_Dcm_DataServices_Last_service_date_Day_ConditionCheckRead
#  define Rte_Call_DataServices_Last_service_date_Day_ReadData Rte_Call_Dcm_DataServices_Last_service_date_Day_ReadData
#  define Rte_Call_DataServices_Last_service_date_Day_WriteData Rte_Call_Dcm_DataServices_Last_service_date_Day_WriteData
#  define Rte_Call_DataServices_Last_service_date_Month_ConditionCheckRead Rte_Call_Dcm_DataServices_Last_service_date_Month_ConditionCheckRead
#  define Rte_Call_DataServices_Last_service_date_Month_ReadData Rte_Call_Dcm_DataServices_Last_service_date_Month_ReadData
#  define Rte_Call_DataServices_Last_service_date_Month_WriteData Rte_Call_Dcm_DataServices_Last_service_date_Month_WriteData
#  define Rte_Call_DataServices_Last_service_date_Year_ConditionCheckRead Rte_Call_Dcm_DataServices_Last_service_date_Year_ConditionCheckRead
#  define Rte_Call_DataServices_Last_service_date_Year_ReadData Rte_Call_Dcm_DataServices_Last_service_date_Year_ReadData
#  define Rte_Call_DataServices_Last_service_date_Year_WriteData Rte_Call_Dcm_DataServices_Last_service_date_Year_WriteData
#  define Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ConditionCheckRead Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ConditionCheckRead
#  define Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ReadData Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ReadData
#  define Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ConditionCheckRead Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ConditionCheckRead
#  define Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ReadData Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ReadData
#  define Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ConditionCheckRead Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ConditionCheckRead
#  define Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ReadData Rte_Call_Dcm_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ReadData
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Detail_Code_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Detail_Code_ConditionCheckRead
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Detail_Code_ReadData Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Detail_Code_ReadData
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Execution_Package_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Execution_Package_ConditionCheckRead
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Execution_Package_ReadData Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Execution_Package_ReadData
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Group_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Group_ConditionCheckRead
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Group_ReadData Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Group_ReadData
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ConditionCheckRead
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ReadData Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ReadData
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Subgroup_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Subgroup_ConditionCheckRead
#  define Rte_Call_DataServices_Read_ECU_Part_Number_Subgroup_ReadData Rte_Call_Dcm_DataServices_Read_ECU_Part_Number_Subgroup_ReadData
#  define Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ConditionCheckRead
#  define Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ReadData Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ReadData
#  define Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ConditionCheckRead
#  define Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ReadData Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ReadData
#  define Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ConditionCheckRead
#  define Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ReadData Rte_Call_Dcm_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ReadData
#  define Rte_Call_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ReadData Rte_Call_Dcm_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ReadData
#  define Rte_Call_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ReadData Rte_Call_Dcm_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ReadData
#  define Rte_Call_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ReadData Rte_Call_Dcm_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ReadData
#  define Rte_Call_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ReadData Rte_Call_Dcm_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ReadData
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ReadData Rte_Call_Dcm_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Configuration_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Configuration_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Configuration_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Configuration_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Configuration_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Configuration_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved1_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved1_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved2_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved2_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved3_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Reserved3_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_WriteData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ReadData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ReadData
#  define Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_WriteData Rte_Call_Dcm_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_WriteData
#  define Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ReadData Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ReadData
#  define Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_WriteData Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_WriteData
#  define Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ReadData Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ReadData
#  define Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_WriteData Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_WriteData
#  define Rte_Call_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ConditionCheckRead
#  define Rte_Call_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ReadData Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ReadData
#  define Rte_Call_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_WriteData Rte_Call_Dcm_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_WriteData
#  define Rte_Call_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ConditionCheckRead Rte_Call_Dcm_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ConditionCheckRead
#  define Rte_Call_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ReadData Rte_Call_Dcm_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ReadData
#  define Rte_Call_DataServices_SOC_SOC_ConditionCheckRead Rte_Call_Dcm_DataServices_SOC_SOC_ConditionCheckRead
#  define Rte_Call_DataServices_SOC_SOC_ReadData Rte_Call_Dcm_DataServices_SOC_SOC_ReadData
#  define Rte_Call_DataServices_SerialNumber_ECU_Name_ConditionCheckRead Rte_Call_Dcm_DataServices_SerialNumber_ECU_Name_ConditionCheckRead
#  define Rte_Call_DataServices_SerialNumber_ECU_Name_ReadData Rte_Call_Dcm_DataServices_SerialNumber_ECU_Name_ReadData
#  define Rte_Call_DataServices_SerialNumber_ECU_index_number_ConditionCheckRead Rte_Call_Dcm_DataServices_SerialNumber_ECU_index_number_ConditionCheckRead
#  define Rte_Call_DataServices_SerialNumber_ECU_index_number_ReadData Rte_Call_Dcm_DataServices_SerialNumber_ECU_index_number_ReadData
#  define Rte_Call_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ConditionCheckRead Rte_Call_Dcm_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ConditionCheckRead
#  define Rte_Call_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ReadData Rte_Call_Dcm_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ReadData
#  define Rte_Call_DataServices_SerialNumber_Supplier_name_ConditionCheckRead Rte_Call_Dcm_DataServices_SerialNumber_Supplier_name_ConditionCheckRead
#  define Rte_Call_DataServices_SerialNumber_Supplier_name_ReadData Rte_Call_Dcm_DataServices_SerialNumber_Supplier_name_ReadData
#  define Rte_Call_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ConditionCheckRead Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ConditionCheckRead
#  define Rte_Call_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ReadData Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ReadData
#  define Rte_Call_DataServices_Supplier_ECU_hardware_part_number_Major_release_ConditionCheckRead Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Major_release_ConditionCheckRead
#  define Rte_Call_DataServices_Supplier_ECU_hardware_part_number_Major_release_ReadData Rte_Call_Dcm_DataServices_Supplier_ECU_hardware_part_number_Major_release_ReadData
#  define Rte_Call_DataServices_Total_Odometer_Total_Odometer_ConditionCheckRead Rte_Call_Dcm_DataServices_Total_Odometer_Total_Odometer_ConditionCheckRead
#  define Rte_Call_DataServices_Total_Odometer_Total_Odometer_ReadData Rte_Call_Dcm_DataServices_Total_Odometer_Total_Odometer_ReadData
#  define Rte_Call_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ConditionCheckRead Rte_Call_Dcm_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ConditionCheckRead
#  define Rte_Call_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ReadData Rte_Call_Dcm_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ReadData
#  define Rte_Call_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_WriteData Rte_Call_Dcm_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_WriteData
#  define Rte_Call_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ReadData Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ReadData
#  define Rte_Call_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ReadData Rte_Call_Dcm_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ReadData
#  define Rte_Call_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ReadData Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ReadData
#  define Rte_Call_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ReadData Rte_Call_Dcm_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ReadData
#  define Rte_Call_DataServices_VCU_HVStatus_VCU_HVStatus_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_HVStatus_VCU_HVStatus_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_HVStatus_VCU_HVStatus_ReadData Rte_Call_Dcm_DataServices_VCU_HVStatus_VCU_HVStatus_ReadData
#  define Rte_Call_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ReadData Rte_Call_Dcm_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ReadData
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ReadData Rte_Call_Dcm_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ReadData
#  define Rte_Call_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ReadData Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ReadData
#  define Rte_Call_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ReadData Rte_Call_Dcm_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ReadData
#  define Rte_Call_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ReadData Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ReadData
#  define Rte_Call_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ReadData Rte_Call_Dcm_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ReadData
#  define Rte_Call_DataServices_VCU_control_S2_status_New_Bit_Field_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_control_S2_status_New_Bit_Field_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_control_S2_status_New_Bit_Field_ReadData Rte_Call_Dcm_DataServices_VCU_control_S2_status_New_Bit_Field_ReadData
#  define Rte_Call_DataServices_VCU_control_main_relay_Mainrealy1_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrealy1_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_control_main_relay_Mainrealy1_ReadData Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrealy1_ReadData
#  define Rte_Call_DataServices_VCU_control_main_relay_Mainrelay2_ConditionCheckRead Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrelay2_ConditionCheckRead
#  define Rte_Call_DataServices_VCU_control_main_relay_Mainrelay2_ReadData Rte_Call_Dcm_DataServices_VCU_control_main_relay_Mainrelay2_ReadData
#  define Rte_Call_DataServices_Vehicle_State_Ignition_Switch_Signal_ConditionCheckRead Rte_Call_Dcm_DataServices_Vehicle_State_Ignition_Switch_Signal_ConditionCheckRead
#  define Rte_Call_DataServices_Vehicle_State_Ignition_Switch_Signal_ReadData Rte_Call_Dcm_DataServices_Vehicle_State_Ignition_Switch_Signal_ReadData
#  define Rte_Call_DataServices_Vehicle_speed_Vehicle_speed_ConditionCheckRead Rte_Call_Dcm_DataServices_Vehicle_speed_Vehicle_speed_ConditionCheckRead
#  define Rte_Call_DataServices_Vehicle_speed_Vehicle_speed_ReadData Rte_Call_Dcm_DataServices_Vehicle_speed_Vehicle_speed_ReadData
#  define Rte_Call_DataServices_Write_Level1_OEM_Key_CRC_WriteData Rte_Call_Dcm_DataServices_Write_Level1_OEM_Key_CRC_WriteData
#  define Rte_Call_DataServices_Write_Level1_OEM_Key_OEM_Key_Value_WriteData Rte_Call_Dcm_DataServices_Write_Level1_OEM_Key_OEM_Key_Value_WriteData
#  define Rte_Call_DataServices_Write_Level2_OEM_Key_CRC_WriteData Rte_Call_Dcm_DataServices_Write_Level2_OEM_Key_CRC_WriteData
#  define Rte_Call_DataServices_Write_Level2_OEM_Key_OEM_Key_Value_WriteData Rte_Call_Dcm_DataServices_Write_Level2_OEM_Key_OEM_Key_Value_WriteData
#  define Rte_Call_DataServices_Write_Level3_OEM_Key_CRC_WriteData Rte_Call_Dcm_DataServices_Write_Level3_OEM_Key_CRC_WriteData
#  define Rte_Call_DataServices_Write_Level3_OEM_Key_OEM_Key_Value_WriteData Rte_Call_Dcm_DataServices_Write_Level3_OEM_Key_OEM_Key_Value_WriteData
#  define Rte_Call_DataServices_Write_Level4_OEM_Key_CRC_WriteData Rte_Call_Dcm_DataServices_Write_Level4_OEM_Key_CRC_WriteData
#  define Rte_Call_DataServices_Write_Level4_OEM_Key_OEM_Key_Value_WriteData Rte_Call_Dcm_DataServices_Write_Level4_OEM_Key_OEM_Key_Value_WriteData
#  define Rte_Call_RoutineServices_CheckCodingState_Start Rte_Call_Dcm_RoutineServices_CheckCodingState_Start
#  define Rte_Call_RoutineServices_CheckProgrammingDependencies_Start Rte_Call_Dcm_RoutineServices_CheckProgrammingDependencies_Start
#  define Rte_Call_RoutineServices_CheckProgrammingPreCondition_Start Rte_Call_Dcm_RoutineServices_CheckProgrammingPreCondition_Start
#  define Rte_Call_RoutineServices_Check_Memory_Start Rte_Call_Dcm_RoutineServices_Check_Memory_Start
#  define Rte_Call_RoutineServices_Erase_Memory_Start Rte_Call_Dcm_RoutineServices_Erase_Memory_Start
#  define Rte_Call_RoutineServices_Erase_Mileage_Provisional_Parameter_Start Rte_Call_Dcm_RoutineServices_Erase_Mileage_Provisional_Parameter_Start
#  define Rte_Call_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Start Rte_Call_Dcm_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Start
#  define Rte_Call_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Stop Rte_Call_Dcm_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Stop
#  define Rte_Call_SecurityAccess_UnlockedL1_CompareKey Rte_Call_Dcm_SecurityAccess_UnlockedL1_CompareKey
#  define Rte_Call_SecurityAccess_UnlockedL1_GetSeed Rte_Call_Dcm_SecurityAccess_UnlockedL1_GetSeed
#  define Rte_Call_SecurityAccess_Unlocked_Level_2_CompareKey Rte_Call_Dcm_SecurityAccess_Unlocked_Level_2_CompareKey
#  define Rte_Call_SecurityAccess_Unlocked_Level_2_GetSeed Rte_Call_Dcm_SecurityAccess_Unlocked_Level_2_GetSeed
#  define Rte_Call_SecurityAccess_Unlocked_Level_3_CompareKey Rte_Call_Dcm_SecurityAccess_Unlocked_Level_3_CompareKey
#  define Rte_Call_SecurityAccess_Unlocked_Level_3_GetSeed Rte_Call_Dcm_SecurityAccess_Unlocked_Level_3_GetSeed
#  define Rte_Call_SecurityAccess_Unlocked_Level_4_CompareKey Rte_Call_Dcm_SecurityAccess_Unlocked_Level_4_CompareKey
#  define Rte_Call_SecurityAccess_Unlocked_Level_4_GetSeed Rte_Call_Dcm_SecurityAccess_Unlocked_Level_4_GetSeed

# endif /* !defined(RTE_CORE) */


# define Dcm_START_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Dcm_MainFunction Dcm_MainFunction
#  define RTE_RUNNABLE_GetActiveProtocol Dcm_GetActiveProtocol
#  define RTE_RUNNABLE_GetRequestKind Dcm_GetRequestKind
#  define RTE_RUNNABLE_GetSecurityLevel Dcm_GetSecurityLevel
#  define RTE_RUNNABLE_GetSesCtrlType Dcm_GetSesCtrlType
#  define RTE_RUNNABLE_ResetToDefaultSession Dcm_ResetToDefaultSession
#  define RTE_RUNNABLE_SetActiveDiagnostic Dcm_SetActiveDiagnostic
# endif

FUNC(void, Dcm_CODE) Dcm_MainFunction(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetActiveProtocol(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetRequestKind(uint16 TesterSourceAddress, P2VAR(Dcm_RequestKindType, AUTOMATIC, RTE_DCM_APPL_VAR) RequestKind); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_ResetToDefaultSession(void); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_SetActiveDiagnostic(boolean active); /* PRQA S 1330, 3451, 0786, 3449, 0624 */ /* MD_Rte_1330, MD_Rte_3451, MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define Dcm_STOP_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DCMServices_E_NOT_OK (1U)

#  define RTE_E_DCMServices_E_OK (0U)

#  define RTE_E_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_E_NOT_OK (1U)

#  define RTE_E_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_E_NOT_OK (1U)

#  define RTE_E_DataServices_BSW_version_number_Major_release_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BSW_version_number_Major_release_E_NOT_OK (1U)

#  define RTE_E_DataServices_BSW_version_number_Minor_release_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BSW_version_number_Minor_release_E_NOT_OK (1U)

#  define RTE_E_DataServices_BSW_version_number_No_functional_content_change_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BSW_version_number_No_functional_content_change_E_NOT_OK (1U)

#  define RTE_E_DataServices_BS_base_information4_BS_SOC_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BS_base_information4_BS_SOC_E_NOT_OK (1U)

#  define RTE_E_DataServices_BS_base_information4_SOF_V1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BS_base_information4_SOF_V1_E_NOT_OK (1U)

#  define RTE_E_DataServices_BS_base_information4_SOF_V2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BS_base_information4_SOF_V2_E_NOT_OK (1U)

#  define RTE_E_DataServices_BS_base_information4_SOH_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BS_base_information4_SOH_E_NOT_OK (1U)

#  define RTE_E_DataServices_BS_base_information4_T_BATT_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BS_base_information4_T_BATT_E_NOT_OK (1U)

#  define RTE_E_DataServices_BS_base_information4_VCU_BS_Hcurrent_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_BS_base_information4_VCU_BS_Hcurrent_E_NOT_OK (1U)

#  define RTE_E_DataServices_Battery_Voltage_Battery_Voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Battery_Voltage_Battery_Voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_Bootloader_version_number_Major_release_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Bootloader_version_number_Major_release_E_NOT_OK (1U)

#  define RTE_E_DataServices_Bootloader_version_number_Minor_release_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Bootloader_version_number_Minor_release_E_NOT_OK (1U)

#  define RTE_E_DataServices_Bootloader_version_number_No_functional_content_change_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Bootloader_version_number_No_functional_content_change_E_NOT_OK (1U)

#  define RTE_E_DataServices_Chargestatus_Chargestatus_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Chargestatus_Chargestatus_E_NOT_OK (1U)

#  define RTE_E_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_E_NOT_OK (1U)

#  define RTE_E_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_E_NOT_OK (1U)

#  define RTE_E_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_E_NOT_OK (1U)

#  define RTE_E_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_E_NOT_OK (1U)

#  define RTE_E_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_E_NOT_OK (1U)

#  define RTE_E_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_E_NOT_OK (1U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Day_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Day_E_NOT_OK (1U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Hour_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Hour_E_NOT_OK (1U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Minute_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Minute_E_NOT_OK (1U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Month_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Month_E_NOT_OK (1U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Second_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Second_E_NOT_OK (1U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Year_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Date_And_Time_Date_And_Time_Year_E_NOT_OK (1U)

#  define RTE_E_DataServices_DevelopmentData_Country_code_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DevelopmentData_Country_code_E_NOT_OK (1U)

#  define RTE_E_DataServices_DevelopmentData_Supplier_code_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DevelopmentData_Supplier_code_E_NOT_OK (1U)

#  define RTE_E_DataServices_DevelopmentData_Supplier_family_code_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DevelopmentData_Supplier_family_code_E_NOT_OK (1U)

#  define RTE_E_DataServices_Driver_Mode_Driver_Mode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Driver_Mode_Driver_Mode_E_NOT_OK (1U)

#  define RTE_E_DataServices_ECU_application_software_ASW_version_number_Major_release_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_ECU_application_software_ASW_version_number_Major_release_E_NOT_OK (1U)

#  define RTE_E_DataServices_ECU_application_software_ASW_version_number_Minor_release_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_ECU_application_software_ASW_version_number_Minor_release_E_NOT_OK (1U)

#  define RTE_E_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_E_NOT_OK (1U)

#  define RTE_E_DataServices_EcuIdentification_Detail_Code_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_EcuIdentification_Detail_Code_E_NOT_OK (1U)

#  define RTE_E_DataServices_EcuIdentification_Execution_Package_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_EcuIdentification_Execution_Package_E_NOT_OK (1U)

#  define RTE_E_DataServices_EcuIdentification_Group_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_EcuIdentification_Group_E_NOT_OK (1U)

#  define RTE_E_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_E_NOT_OK (1U)

#  define RTE_E_DataServices_EcuIdentification_Subgroup_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_EcuIdentification_Subgroup_E_NOT_OK (1U)

#  define RTE_E_DataServices_Electronic_lock_state_Electronic_lock_state_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Electronic_lock_state_Electronic_lock_state_E_NOT_OK (1U)

#  define RTE_E_DataServices_Gear_Gear_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Gear_Gear_E_NOT_OK (1U)

#  define RTE_E_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_E_NOT_OK (1U)

#  define RTE_E_DataServices_HV_part_work_mode_HV_part_work_mode1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_HV_part_work_mode_HV_part_work_mode1_E_NOT_OK (1U)

#  define RTE_E_DataServices_HV_part_work_mode_HV_part_work_mode2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_HV_part_work_mode_HV_part_work_mode2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Last_service_date_Day_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Last_service_date_Day_E_NOT_OK (1U)

#  define RTE_E_DataServices_Last_service_date_Month_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Last_service_date_Month_E_NOT_OK (1U)

#  define RTE_E_DataServices_Last_service_date_Year_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Last_service_date_Year_E_NOT_OK (1U)

#  define RTE_E_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_E_NOT_OK (1U)

#  define RTE_E_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_E_NOT_OK (1U)

#  define RTE_E_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Detail_Code_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Detail_Code_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Execution_Package_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Execution_Package_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Group_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Group_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Subgroup_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_ECU_Part_Number_Subgroup_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Configuration_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Configuration_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Reserved1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Reserved1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Reserved2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Reserved2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Reserved3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Reserved3_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_E_NOT_OK (1U)

#  define RTE_E_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_E_NOT_OK (1U)

#  define RTE_E_DataServices_SOC_SOC_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_SOC_SOC_E_NOT_OK (1U)

#  define RTE_E_DataServices_SerialNumber_ECU_Name_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_SerialNumber_ECU_Name_E_NOT_OK (1U)

#  define RTE_E_DataServices_SerialNumber_ECU_index_number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_SerialNumber_ECU_index_number_E_NOT_OK (1U)

#  define RTE_E_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_E_NOT_OK (1U)

#  define RTE_E_DataServices_SerialNumber_Supplier_name_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_SerialNumber_Supplier_name_E_NOT_OK (1U)

#  define RTE_E_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_E_NOT_OK (1U)

#  define RTE_E_DataServices_Supplier_ECU_hardware_part_number_Major_release_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Supplier_ECU_hardware_part_number_Major_release_E_NOT_OK (1U)

#  define RTE_E_DataServices_Total_Odometer_Total_Odometer_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Total_Odometer_Total_Odometer_E_NOT_OK (1U)

#  define RTE_E_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_HVStatus_VCU_HVStatus_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_HVStatus_VCU_HVStatus_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_Torque_parameter_Torque_MinAllowed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_Torque_parameter_Torque_MinAllowed_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_control_S2_status_New_Bit_Field_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_control_S2_status_New_Bit_Field_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_control_main_relay_Mainrealy1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_control_main_relay_Mainrealy1_E_NOT_OK (1U)

#  define RTE_E_DataServices_VCU_control_main_relay_Mainrelay2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_VCU_control_main_relay_Mainrelay2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Vehicle_State_Ignition_Switch_Signal_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Vehicle_State_Ignition_Switch_Signal_E_NOT_OK (1U)

#  define RTE_E_DataServices_Vehicle_speed_Vehicle_speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Vehicle_speed_Vehicle_speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_Write_Level1_OEM_Key_CRC_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Write_Level1_OEM_Key_CRC_E_NOT_OK (1U)

#  define RTE_E_DataServices_Write_Level1_OEM_Key_OEM_Key_Value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Write_Level1_OEM_Key_OEM_Key_Value_E_NOT_OK (1U)

#  define RTE_E_DataServices_Write_Level2_OEM_Key_CRC_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Write_Level2_OEM_Key_CRC_E_NOT_OK (1U)

#  define RTE_E_DataServices_Write_Level2_OEM_Key_OEM_Key_Value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Write_Level2_OEM_Key_OEM_Key_Value_E_NOT_OK (1U)

#  define RTE_E_DataServices_Write_Level3_OEM_Key_CRC_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Write_Level3_OEM_Key_CRC_E_NOT_OK (1U)

#  define RTE_E_DataServices_Write_Level3_OEM_Key_OEM_Key_Value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Write_Level3_OEM_Key_OEM_Key_Value_E_NOT_OK (1U)

#  define RTE_E_DataServices_Write_Level4_OEM_Key_CRC_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Write_Level4_OEM_Key_CRC_E_NOT_OK (1U)

#  define RTE_E_DataServices_Write_Level4_OEM_Key_OEM_Key_Value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Write_Level4_OEM_Key_OEM_Key_Value_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_CheckCodingState_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_CheckCodingState_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_CheckCodingState_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_CheckProgrammingDependencies_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_CheckProgrammingDependencies_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_CheckProgrammingDependencies_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_CheckProgrammingPreCondition_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_CheckProgrammingPreCondition_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_CheckProgrammingPreCondition_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Check_Memory_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Check_Memory_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Check_Memory_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Erase_Memory_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Erase_Memory_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Erase_Memory_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Erase_Mileage_Provisional_Parameter_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Erase_Mileage_Provisional_Parameter_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Erase_Mileage_Provisional_Parameter_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Turn_Off_HV_Turn_Off_Charging_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Turn_Off_HV_Turn_Off_Charging_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Turn_Off_HV_Turn_Off_Charging_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_UnlockedL1_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_UnlockedL1_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_UnlockedL1_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_Unlocked_Level_2_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_Unlocked_Level_2_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_Unlocked_Level_2_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_Unlocked_Level_3_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_Unlocked_Level_3_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_Unlocked_Level_3_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_Unlocked_Level_4_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_Unlocked_Level_4_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_Unlocked_Level_4_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_DCM_H */

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

   MD_Rte_1330:  MISRA rule: Rule8.3
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
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
