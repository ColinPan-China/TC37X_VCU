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
 *             File:  Rte_Type.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Header file containing user defined AUTOSAR types and RTE structures
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_TYPE_H
# define RTE_TYPE_H

# include "Rte.h"
# ifdef RTE_CORE
/**********************************************************************************************************************
 * Type definitions for mode management
 *********************************************************************************************************************/
typedef EventMaskType Rte_EventMaskType;
# endif /* defined(RTE_CORE) */

/* PRQA S 1039 EOF */ /* MD_Rte_1039 */

/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Checksum_0BC
typedef uint8 Checksum_0BC;

# define Rte_TypeDef_Checksum_0D1
typedef uint8 Checksum_0D1;

# define Rte_TypeDef_ECC_PMP2_SpdSet
typedef uint8 ECC_PMP2_SpdSet;

# define Rte_TypeDef_ECC_PMP3_SpdSet
typedef uint8 ECC_PMP3_SpdSet;

# define Rte_TypeDef_EXT10_Valid
typedef uint16 EXT10_Valid;

# define Rte_TypeDef_EXT11_Valid
typedef uint16 EXT11_Valid;

# define Rte_TypeDef_EXT12_Valid
typedef uint16 EXT12_Valid;

# define Rte_TypeDef_EXT13_Valid
typedef uint16 EXT13_Valid;

# define Rte_TypeDef_EXT14_Valid
typedef uint16 EXT14_Valid;

# define Rte_TypeDef_EXT15_Valid
typedef uint16 EXT15_Valid;

# define Rte_TypeDef_EXT16_Valid
typedef uint16 EXT16_Valid;

# define Rte_TypeDef_EXT1_Valid
typedef uint16 EXT1_Valid;

# define Rte_TypeDef_EXT2_Valid
typedef uint16 EXT2_Valid;

# define Rte_TypeDef_EXT3_Valid
typedef uint16 EXT3_Valid;

# define Rte_TypeDef_EXT4_Valid
typedef uint16 EXT4_Valid;

# define Rte_TypeDef_EXT5_Valid
typedef uint16 EXT5_Valid;

# define Rte_TypeDef_EXT6_Valid
typedef uint16 EXT6_Valid;

# define Rte_TypeDef_EXT7_Valid
typedef uint16 EXT7_Valid;

# define Rte_TypeDef_EXT8_Valid
typedef uint16 EXT8_Valid;

# define Rte_TypeDef_EXT9_Valid
typedef uint16 EXT9_Valid;

# define Rte_TypeDef_EXT_A_IN1
typedef sint16 EXT_A_IN1;

# define Rte_TypeDef_EXT_A_IN10
typedef sint16 EXT_A_IN10;

# define Rte_TypeDef_EXT_A_IN11
typedef sint16 EXT_A_IN11;

# define Rte_TypeDef_EXT_A_IN12
typedef sint16 EXT_A_IN12;

# define Rte_TypeDef_EXT_A_IN13
typedef sint16 EXT_A_IN13;

# define Rte_TypeDef_EXT_A_IN14
typedef sint16 EXT_A_IN14;

# define Rte_TypeDef_EXT_A_IN15
typedef sint16 EXT_A_IN15;

# define Rte_TypeDef_EXT_A_IN16
typedef sint16 EXT_A_IN16;

# define Rte_TypeDef_EXT_A_IN2
typedef sint16 EXT_A_IN2;

# define Rte_TypeDef_EXT_A_IN3
typedef sint16 EXT_A_IN3;

# define Rte_TypeDef_EXT_A_IN4
typedef sint16 EXT_A_IN4;

# define Rte_TypeDef_EXT_A_IN5
typedef sint16 EXT_A_IN5;

# define Rte_TypeDef_EXT_A_IN6
typedef sint16 EXT_A_IN6;

# define Rte_TypeDef_EXT_A_IN7
typedef sint16 EXT_A_IN7;

# define Rte_TypeDef_EXT_A_IN8
typedef sint16 EXT_A_IN8;

# define Rte_TypeDef_EXT_A_IN9
typedef sint16 EXT_A_IN9;

# define Rte_TypeDef_IBS_AVHSts
typedef uint8 IBS_AVHSts;

# define Rte_TypeDef_IBS_BrakeFluidWarning
typedef uint8 IBS_BrakeFluidWarning;

# define Rte_TypeDef_IBS_EPBFailureStatus
typedef uint8 IBS_EPBFailureStatus;

# define Rte_TypeDef_IBS_ESCOffSts
typedef boolean IBS_ESCOffSts;

# define Rte_TypeDef_IBS_ESClampdisplay
typedef uint8 IBS_ESClampdisplay;

# define Rte_TypeDef_IBS_FactoryMode
typedef boolean IBS_FactoryMode;

# define Rte_TypeDef_IBS_HBAActive
typedef boolean IBS_HBAActive;

# define Rte_TypeDef_IBS_HDCSts
typedef uint8 IBS_HDCSts;

# define Rte_TypeDef_IBS_MaintenaceMode
typedef boolean IBS_MaintenaceMode;

# define Rte_TypeDef_IBS_RWUActive
typedef boolean IBS_RWUActive;

# define Rte_TypeDef_IBS_RWUAvailable
typedef boolean IBS_RWUAvailable;

# define Rte_TypeDef_IBS_RollerbenchMode
typedef boolean IBS_RollerbenchMode;

# define Rte_TypeDef_IBS_TPMS_ResetSts
typedef boolean IBS_TPMS_ResetSts;

# define Rte_TypeDef_IBS_TireMonSysSts
typedef boolean IBS_TireMonSysSts;

# define Rte_TypeDef_IBS_TireWarnFrntLe
typedef boolean IBS_TireWarnFrntLe;

# define Rte_TypeDef_IBS_TireWarnFrntRi
typedef boolean IBS_TireWarnFrntRi;

# define Rte_TypeDef_IBS_TireWarnReLe
typedef boolean IBS_TireWarnReLe;

# define Rte_TypeDef_IBS_TireWarnReRi
typedef boolean IBS_TireWarnReRi;

# define Rte_TypeDef_MessageCounter_0BC
typedef uint8 MessageCounter_0BC;

# define Rte_TypeDef_MessageCounter_0D1
typedef uint8 MessageCounter_0D1;

# define Rte_TypeDef_VCU_ActDriveMode
typedef uint8 VCU_ActDriveMode;

# define Rte_TypeDef_VCU_ActiveEnergyProfile
typedef uint8 VCU_ActiveEnergyProfile;

# define Rte_TypeDef_VCU_ActiveRgnBrkProfile
typedef uint8 VCU_ActiveRgnBrkProfile;

# define Rte_TypeDef_VCU_BMSTargetThermLevel
typedef uint8 VCU_BMSTargetThermLevel;

# define Rte_TypeDef_VCU_BMS_Control_of_NegRelay
typedef uint8 VCU_BMS_Control_of_NegRelay;

# define Rte_TypeDef_VCU_Chargestatus
typedef uint8 VCU_Chargestatus;

# define Rte_TypeDef_VCU_DrvModSwitchWarn
typedef uint8 VCU_DrvModSwitchWarn;

# define Rte_TypeDef_VCU_HVStatus
typedef uint8 VCU_HVStatus;

# define Rte_TypeDef_VCU_IsomeasurmentSwitch
typedef boolean VCU_IsomeasurmentSwitch;

# define Rte_TypeDef_VCU_LimitLevel
typedef uint8 VCU_LimitLevel;

# define Rte_TypeDef_VCU_RegenBrakeLightReqVld
typedef boolean VCU_RegenBrakeLightReqVld;

# define Rte_TypeDef_VCU_RegenBrakeLightRequest
typedef boolean VCU_RegenBrakeLightRequest;

# define Rte_TypeDef_VCU_RequestedModeBMS
typedef uint8 VCU_RequestedModeBMS;

# define Rte_TypeDef_VcuRxMsg1_Sig0
typedef sint16 VcuRxMsg1_Sig0;

# define Rte_TypeDef_VcuRxMsg1_Sig1
typedef sint16 VcuRxMsg1_Sig1;

# define Rte_TypeDef_VcuRxMsg1_Sig2
typedef sint16 VcuRxMsg1_Sig2;

# define Rte_TypeDef_VcuRxMsg1_Sig3
typedef sint16 VcuRxMsg1_Sig3;

# define Rte_TypeDef_VcuRxMsg2_Sig0
typedef sint16 VcuRxMsg2_Sig0;

# define Rte_TypeDef_VcuRxMsg2_Sig1
typedef sint16 VcuRxMsg2_Sig1;

# define Rte_TypeDef_VcuRxMsg2_Sig2
typedef sint16 VcuRxMsg2_Sig2;

# define Rte_TypeDef_VcuRxMsg2_Sig3
typedef sint16 VcuRxMsg2_Sig3;

# define Rte_TypeDef_VcuTxMsg1_Sig0
typedef sint16 VcuTxMsg1_Sig0;

# define Rte_TypeDef_VcuTxMsg1_Sig1
typedef sint16 VcuTxMsg1_Sig1;

# define Rte_TypeDef_VcuTxMsg1_Sig2
typedef sint16 VcuTxMsg1_Sig2;

# define Rte_TypeDef_VcuTxMsg1_Sig3
typedef sint16 VcuTxMsg1_Sig3;

# define Rte_TypeDef_VcuTxMsg2_Sig0
typedef sint16 VcuTxMsg2_Sig0;

# define Rte_TypeDef_VcuTxMsg2_Sig1
typedef sint16 VcuTxMsg2_Sig1;

# define Rte_TypeDef_VcuTxMsg2_Sig2
typedef sint16 VcuTxMsg2_Sig2;

# define Rte_TypeDef_VcuTxMsg2_Sig3
typedef sint16 VcuTxMsg2_Sig3;

# define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

# define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

# define Rte_TypeDef_DataArrayType_uint8_2
typedef uint8 DataArrayType_uint8_2[2];

# define Rte_TypeDef_Dcm_Data13ByteType
typedef uint8 Dcm_Data13ByteType[13];

# define Rte_TypeDef_Dcm_Data17ByteType
typedef uint8 Dcm_Data17ByteType[17];

# define Rte_TypeDef_Dcm_Data1ByteType
typedef uint8 Dcm_Data1ByteType[1];

# define Rte_TypeDef_Dcm_Data2ByteType
typedef uint8 Dcm_Data2ByteType[2];

# define Rte_TypeDef_Dcm_Data4ByteType
typedef uint8 Dcm_Data4ByteType[4];

# define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[2];

# define Rte_TypeDef_IDT_Arry8Bytes
typedef uint8 IDT_Arry8Bytes[8];

# define Rte_TypeDef_NvM_Array10Bytes
typedef uint8 NvM_Array10Bytes[10];

# define Rte_TypeDef_NvM_Array32Bytes
typedef uint8 NvM_Array32Bytes[32];

# define Rte_TypeDef_NvM_Arry4Bytes
typedef uint8 NvM_Arry4Bytes[4];

# define Rte_TypeDef_SG_IBS_Status_06_Signal_Group
typedef struct
{
  Checksum_0BC Checksum_0BC;
  IBS_AVHSts IBS_AVHSts;
  IBS_BrakeFluidWarning IBS_BrakeFluidWarning;
  IBS_EPBFailureStatus IBS_EPBFailureStatus;
  IBS_ESClampdisplay IBS_ESClampdisplay;
  IBS_ESCOffSts IBS_ESCOffSts;
  IBS_FactoryMode IBS_FactoryMode;
  IBS_HBAActive IBS_HBAActive;
  IBS_HDCSts IBS_HDCSts;
  IBS_MaintenaceMode IBS_MaintenaceMode;
  IBS_RollerbenchMode IBS_RollerbenchMode;
  IBS_RWUActive IBS_RWUActive;
  IBS_RWUAvailable IBS_RWUAvailable;
  IBS_TireMonSysSts IBS_TireMonSysSts;
  IBS_TireWarnFrntLe IBS_TireWarnFrntLe;
  IBS_TireWarnFrntRi IBS_TireWarnFrntRi;
  IBS_TireWarnReLe IBS_TireWarnReLe;
  IBS_TireWarnReRi IBS_TireWarnReRi;
  IBS_TPMS_ResetSts IBS_TPMS_ResetSts;
  MessageCounter_0BC MessageCounter_0BC;
} SG_IBS_Status_06_Signal_Group;

# define Rte_TypeDef_SG_VCU_BMS_Signal_Group
typedef struct
{
  Checksum_0D1 Checksum_0D1;
  MessageCounter_0D1 MessageCounter_0D1;
  VCU_ActDriveMode VCU_ActDriveMode;
  VCU_ActiveEnergyProfile VCU_ActiveEnergyProfile;
  VCU_ActiveRgnBrkProfile VCU_ActiveRgnBrkProfile;
  VCU_BMS_Control_of_NegRelay VCU_BMS_Control_of_NegRelay;
  VCU_BMSTargetThermLevel VCU_BMSTargetThermLevel;
  VCU_Chargestatus VCU_Chargestatus;
  VCU_DrvModSwitchWarn VCU_DrvModSwitchWarn;
  VCU_HVStatus VCU_HVStatus;
  VCU_IsomeasurmentSwitch VCU_IsomeasurmentSwitch;
  VCU_LimitLevel VCU_LimitLevel;
  VCU_RegenBrakeLightRequest VCU_RegenBrakeLightRequest;
  VCU_RegenBrakeLightReqVld VCU_RegenBrakeLightReqVld;
  VCU_RequestedModeBMS VCU_RequestedModeBMS;
} SG_VCU_BMS_Signal_Group;

# define Rte_TypeDef_BswM_ESH_Mode
typedef uint8 BswM_ESH_Mode;

# define Rte_TypeDef_BswM_ESH_RunRequest
typedef uint8 BswM_ESH_RunRequest;

# define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

# define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

# define Rte_TypeDef_ComM_UserHandleType
typedef uint16 ComM_UserHandleType;

# define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

# define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

# define Rte_TypeDef_Dcm_ControlDtcSettingType
typedef uint8 Dcm_ControlDtcSettingType;

# define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

# define Rte_TypeDef_Dcm_EcuResetType
typedef uint8 Dcm_EcuResetType;

# define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

# define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

# define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

# define Rte_TypeDef_Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType
typedef uint16 Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType;

# define Rte_TypeDef_Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectType
typedef Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType Dcm_RequestDataOut_Vcu_Roution_00_Out_New_Data_ObjectType;

# define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

# define Rte_TypeDef_Dcm_SecLevelType
typedef uint8 Dcm_SecLevelType;

# define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

# define Rte_TypeDef_Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType
typedef uint16 Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectType
typedef Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType Dcm_StartDataIn_Vcu_Roution_00_In_New_Data_ObjectType;

# define Rte_TypeDef_Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType
typedef uint16 Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType;

# define Rte_TypeDef_Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectType
typedef Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType Dcm_StartDataOut_Vcu_Roution_00_Out_New_Data_ObjectType;

# define Rte_TypeDef_Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType
typedef uint16 Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType;

# define Rte_TypeDef_Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectType
typedef Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectPrimitiveType Dcm_StopDataIn_Vcu_Roution_00_In_New_Data_ObjectType;

# define Rte_TypeDef_Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType
typedef uint16 Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType;

# define Rte_TypeDef_Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectType
typedef Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectPrimitiveType Dcm_StopDataOut_Vcu_Roution_00_Out_New_Data_ObjectType;

# define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

# define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

# define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

# define Rte_TypeDef_Dem_DTCOriginType
typedef uint16 Dem_DTCOriginType;

# define Rte_TypeDef_Dem_DTCSeverityType
typedef uint8 Dem_DTCSeverityType;

# define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

# define Rte_TypeDef_Dem_DTRControlType
typedef uint8 Dem_DTRControlType;

# define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

# define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

# define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

# define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

# define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

# define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

# define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

# define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

# define Rte_TypeDef_Dem_IumprReadinessGroupType
typedef uint8 Dem_IumprReadinessGroupType;

# define Rte_TypeDef_Dem_MonitorStatusType
typedef uint8 Dem_MonitorStatusType;

# define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

# define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

# define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

# define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

# define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

# define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

# define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

# define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

# define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

# define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

# define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

# endif


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(IDT_Arry8Bytes, RTE_CONST) Rte_C_IDT_Arry8Bytes_0;

extern CONST(NvM_Array10Bytes, RTE_CONST) Rte_C_NvM_Array10Bytes_0;

extern CONST(NvM_Array32Bytes, RTE_CONST) Rte_C_NvM_Array32Bytes_0;

extern CONST(SG_IBS_Status_06_Signal_Group, RTE_CONST) Rte_C_SG_IBS_Status_06_Signal_Group_0;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * IOC Init Constant value definitions
 *********************************************************************************************************************/

# define Rte_IocInitValue_Core1App_SWC_P_Arry8Bytes_DEP_Arry8Bytes Rte_C_IDT_Arry8Bytes_0

# include "Rte_DataHandleType.h"

# ifdef RTE_MICROSAR_PIM_EXPORT


/**********************************************************************************************************************
 * Calibration component and SW-C local calibration parameters
 *********************************************************************************************************************/

#  define RTE_START_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(uint16, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_SWC1_CalibrationParameter;
extern CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_DIAG_SWC_NvBlockNeed_AttemptCounter_DefaultValue;
extern CONST(NvM_Arry4Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_DIAG_SWC_NvBlockNeed_DID_F193_DefaultValue;
extern CONST(NvM_Arry4Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_DefaultValue;
extern CONST(NvM_Array10Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_NvM_SWC_NVBlockDescriptor_UserData1_ROM_NVBlockDescriptor_UserData1;
extern CONST(NvM_Array32Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_NvM_SWC_NVBlockDescriptor_UserData2_ROM_NVBlockDescriptor_UserData2;
extern CONST(NvM_Array10Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_SWC1_NvBlockNeed_UserData3_DefaultValue;

#  define RTE_STOP_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_DIAG_SWC_NvBlockNeed_AttemptCounter_MirrorBlock;
extern VAR(NvM_Arry4Bytes, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_DIAG_SWC_NvBlockNeed_DID_F193_MirrorBlock;
extern VAR(NvM_Arry4Bytes, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_MirrorBlock;
extern VAR(NvM_Array10Bytes, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_SWC1_NvBlockNeed_UserData3_MirrorBlock;

#  define RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# endif

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned int Rte_BitType;
/**********************************************************************************************************************
 * type and extern declarations of RTE internal variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte Init State Variable
 *********************************************************************************************************************/

# define RTE_STATE_UNINIT     (0U)
# define RTE_STATE_SCHM_START (1U)
# define RTE_STATE_SCHM_INIT  (2U)
# define RTE_STATE_INIT       (3U)

# define RTE_START_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState; /* PRQA S 3408 */ /* MD_Rte_3408 */
extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_StartTiming_InitState; /* PRQA S 0850, 3408 */ /* MD_MSR_MacroArgumentEmpty, MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_SystemApplication_OsCore0_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define RTE_START_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState_1; /* PRQA S 3408 */ /* MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define RTE_START_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState_2; /* PRQA S 3408 */ /* MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_NOCACHE_ZERO_INIT_8BIT
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef RTE_CORE

/**********************************************************************************************************************
 * Calibration Parameters (SW-C local and calibration component calibration parameters)
 *********************************************************************************************************************/

#  define RTE_START_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(uint16, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_SWC1_CalibrationParameter; /* PRQA S 3408 */ /* MD_Rte_3408 */
extern CONST(uint8, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_DIAG_SWC_NvBlockNeed_AttemptCounter_DefaultValue; /* PRQA S 3408 */ /* MD_Rte_3408 */
extern CONST(NvM_Arry4Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_DIAG_SWC_NvBlockNeed_DID_F193_DefaultValue; /* PRQA S 3408 */ /* MD_Rte_3408 */
extern CONST(NvM_Arry4Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_DIAG_SWC_NvBlockNeed_DiagDID_00_DefaultValue; /* PRQA S 3408 */ /* MD_Rte_3408 */
extern CONST(NvM_Array10Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_NvM_SWC_NVBlockDescriptor_UserData1_ROM_NVBlockDescriptor_UserData1; /* PRQA S 3408 */ /* MD_Rte_3408 */
extern CONST(NvM_Array32Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_NvM_SWC_NVBlockDescriptor_UserData2_ROM_NVBlockDescriptor_UserData2; /* PRQA S 3408 */ /* MD_Rte_3408 */
extern CONST(NvM_Array10Bytes, RTE_CONST_DEFAULT_RTE_CDATA_GROUP) Rte_SWC1_NvBlockNeed_UserData3_DefaultValue; /* PRQA S 3408 */ /* MD_Rte_3408 */

#  define RTE_STOP_SEC_CONST_DEFAULT_RTE_CDATA_GROUP_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(NvM_Array10Bytes, RTE_VAR_INIT) Rte_NvM_SWC_NVBlockDescriptor_UserData1; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(NvM_Array32Bytes, RTE_VAR_INIT) Rte_NvM_SWC_NVBlockDescriptor_UserData2; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */
extern VAR(BswM_ESH_RunRequest, RTE_VAR_INIT) Rte_SWC1_Request_ESH_RunRequest_0_requestedMode; /* PRQA S 3408, 1504 */ /* MD_Rte_3408, MD_MSR_Rule8.7 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

typedef struct
{
  Rte_BitType Rte_RxTimeout_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx : 1;
  Rte_BitType Rte_RxTimeout_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx : 1;
  Rte_BitType Rte_RxTimeout_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx : 1;
  Rte_BitType Rte_RxTimeout_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx : 1;
  Rte_BitType Rte_RxTimeout_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx : 1;
  Rte_BitType Rte_RxTimeout_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx : 1;
  Rte_BitType Rte_RxTimeout_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx : 1;
  Rte_BitType Rte_RxTimeout_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx : 1;
} Rte_SystemApplication_OsCore0_RxTimeoutFlagsType;

#  define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_SystemApplication_OsCore0_RxTimeoutFlagsType, RTE_VAR_ZERO_INIT) Rte_SystemApplication_OsCore0_RxTimeoutFlags;

#  define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/


#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(BswM_ESH_Mode, RTE_VAR_INIT) Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode;

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# endif /* defined(RTE_CORE) */

/**********************************************************************************************************************
 * extern declaration of RTE Update Flags for optimized macro implementation
 *********************************************************************************************************************/
typedef struct
{
  Rte_BitType Rte_RxUpdate_Com_SWC_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group : 1;
  Rte_BitType Rte_RxUpdate_Com_SWC_SG_IBS_Status_06_Signal_Group_SG_IBS_Status_06_Signal_Group_Sender : 1;
} Rte_SystemApplication_OsCore0_RxUpdateFlagsType;

# define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(Rte_SystemApplication_OsCore0_RxUpdateFlagsType, RTE_VAR_ZERO_INIT) Rte_SystemApplication_OsCore0_RxUpdateFlags;

# define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#endif /* RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1039:  MISRA rule: Rule1.2
     Reason:     Same macro and function names are required to meet AUTOSAR spec.
     Risk:       No functional risk. Macro will be undefined before function definition.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: Rule8.4
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

*/
