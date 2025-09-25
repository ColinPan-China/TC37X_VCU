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
 *             File:  CtAp_ChrgPreHeat.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_ChrgPreHeat
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_ChrgPreHeat>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_ChrgPreHeat.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_0: Boolean
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_3: Boolean
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_0: Boolean
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_3: Boolean
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_0: Boolean
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_3: Boolean
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_0: Boolean
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_3: Boolean
 * Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_0: Boolean
 * Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_3: Boolean
 * Rte_DT_dt_ChrMgmt_PreheatIRChkErr_0: Boolean
 * Rte_DT_dt_ChrMgmt_PreheatIRChkErr_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_PreheatIRChkErr_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_PreheatIRChkErr_3: Boolean
 * Rte_DT_dt_ComM_CHCANBusOffDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_CHCANBusOffDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CHCANBusOffDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CHCANBusOffDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_CHCANBusOffInfo_0: Boolean
 * Rte_DT_dt_ComM_CHCANBusOffInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CHCANBusOffInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CHCANBusOffInfo_3: Boolean
 * Rte_DT_dt_ComM_DCCANBusOffDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCCANBusOffDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCCANBusOffDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCCANBusOffDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCCANBusOffInfo_0: Boolean
 * Rte_DT_dt_ComM_DCCANBusOffInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCCANBusOffInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCCANBusOffInfo_3: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_0: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ChrMgmt_AcPreheatUDcCtrlErr: Record with elements
 *   ChrMgmt_MonStatAcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_0
 *   ChrMgmt_MonResAcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_1
 *   ChrMgmt_ErrStatAcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_2
 *   ChrMgmt_ErrResAcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_3
 * dt_ChrMgmt_AcPreheatUDcCtrlErrDTC: Record with elements
 *   ChrMgmt_MonStatAcPreheatUDcCtrlErrDTC of type Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_0
 *   ChrMgmt_MonResAcPreheatUDcCtrlErrDTC of type Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_1
 *   ChrMgmt_ErrStatAcPreheatUDcCtrlErrDTC of type Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_2
 *   ChrMgmt_ErrResAcPreheatUDcCtrlErrDTC of type Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErrDTC_3
 * dt_ChrMgmt_DcPreheatUDcCtrlErr: Record with elements
 *   ChrMgmt_MonStatDcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_0
 *   ChrMgmt_MonResDcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_1
 *   ChrMgmt_ErrStatDcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_2
 *   ChrMgmt_ErrResDcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_3
 * dt_ChrMgmt_DcPreheatUDcCtrlErrDTC: Record with elements
 *   ChrMgmt_MonStatDcPreheatUDcCtrlErrDTC of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_0
 *   ChrMgmt_MonResDcPreheatUDcCtrlErrDTC of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_1
 *   ChrMgmt_ErrStatDcPreheatUDcCtrlErrDTC of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_2
 *   ChrMgmt_ErrResDcPreheatUDcCtrlErrDTC of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErrDTC_3
 * dt_ChrMgmt_PreheatIRChkErr: Record with elements
 *   ChrMgmt_MonStatPreheatIRChkErr of type Rte_DT_dt_ChrMgmt_PreheatIRChkErr_0
 *   ChrMgmt_MonResPreheatIRChkErr of type Rte_DT_dt_ChrMgmt_PreheatIRChkErr_1
 *   ChrMgmt_ErrStatPreheatIRChkErr of type Rte_DT_dt_ChrMgmt_PreheatIRChkErr_2
 *   ChrMgmt_ErrResPreheatIRChkErr of type Rte_DT_dt_ChrMgmt_PreheatIRChkErr_3
 * dt_ChrMgmt_PreheatIRChkErrDTC: Record with elements
 *   ChrMgmt_MonStatPreheatIRChkErrDTC of type Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_0
 *   ChrMgmt_MonResPreheatIRChkErrDTC of type Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_1
 *   ChrMgmt_ErrStatPreheatIRChkErrDTC of type Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_2
 *   ChrMgmt_ErrResPreheatIRChkErrDTC of type Rte_DT_dt_ChrMgmt_PreheatIRChkErrDTC_3
 * dt_ComM_CHCANBusOffDTCInfo: Record with elements
 *   ComM_MonStatCHCANBusOffDTCInfo of type Rte_DT_dt_ComM_CHCANBusOffDTCInfo_0
 *   ComM_MonResCHCANBusOffDTCInfo of type Rte_DT_dt_ComM_CHCANBusOffDTCInfo_1
 *   ComM_ErrStatCHCANBusOffDTCInfo of type Rte_DT_dt_ComM_CHCANBusOffDTCInfo_2
 *   ComM_ErrResCHCANBusOffDTCInfo of type Rte_DT_dt_ComM_CHCANBusOffDTCInfo_3
 * dt_ComM_CHCANBusOffInfo: Record with elements
 *   ComM_MonStatCHCANBusOffInfo of type Rte_DT_dt_ComM_CHCANBusOffInfo_0
 *   ComM_MonResCHCANBusOffInfo of type Rte_DT_dt_ComM_CHCANBusOffInfo_1
 *   ComM_ErrStatCHCANBusOffInfo of type Rte_DT_dt_ComM_CHCANBusOffInfo_2
 *   ComM_ErrResCHCANBusOffInfo of type Rte_DT_dt_ComM_CHCANBusOffInfo_3
 * dt_ComM_DCCANBusOffDTCInfo: Record with elements
 *   ComM_MonStatDCCANDTCBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffDTCInfo_0
 *   ComM_MonResDCCANDTCBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffDTCInfo_1
 *   ComM_ErrStatDCCANDTCBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffDTCInfo_2
 *   ComM_ErrResDCCANDTCBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffDTCInfo_3
 * dt_ComM_DCCANBusOffInfo: Record with elements
 *   ComM_MonStatDCCANBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffInfo_0
 *   ComM_MonResDCCANBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffInfo_1
 *   ComM_ErrStatDCCANBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffInfo_2
 *   ComM_ErrResDCCANBusOffInfo of type Rte_DT_dt_ComM_DCCANBusOffInfo_3
 * dt_ComM_EPTCANBusOffDTCInfo: Record with elements
 *   ComM_MonStatEPTCANBusOffDTCInfo of type Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_0
 *   ComM_MonResEPTCANBusOffDTCInfo of type Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_1
 *   ComM_ErrStatEPTCANBusOffDTCInfo of type Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_2
 *   ComM_ErrResEPTCANBusOffDTCInfo of type Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_3
 * dt_ComM_EPTCANBusOffInfo: Record with elements
 *   ComM_MonStatEPTCANBusOffInfo of type Rte_DT_dt_ComM_EPTCANBusOffInfo_0
 *   ComM_MonResEPTCANBusOffInfo of type Rte_DT_dt_ComM_EPTCANBusOffInfo_1
 *   ComM_ErrStatEPTCANBusOffInfo of type Rte_DT_dt_ComM_EPTCANBusOffInfo_2
 *   ComM_ErrResEPTCANBusOffInfo of type Rte_DT_dt_ComM_EPTCANBusOffInfo_3
 *
 *********************************************************************************************************************/


#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgPreHeat_Cyclic_50ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 50ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus(const dt_ChrMgmt_AcPreheatUDcCtrlErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus(const dt_ChrMgmt_AcPreheatUDcCtrlErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus(const dt_ChrMgmt_DcPreheatUDcCtrlErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus(const dt_ChrMgmt_DcPreheatUDcCtrlErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_PreheatIRChkErrDTC_Bus_tec_ChrMgmt_PreheatIRChkErrDTC_Bus(const dt_ChrMgmt_PreheatIRChkErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus(const dt_ChrMgmt_PreheatIRChkErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgPreHeat_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgPreHeat_CODE) R_ChrgPreHeat_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgPreHeat_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgPreHeat_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgPreHeat_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgPreHeat_CODE) R_ChrgPreHeat_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgPreHeat_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
