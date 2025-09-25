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
 *             File:  CtAp_OBCStsMgmt.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_OBCStsMgmt
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_OBCStsMgmt>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_OBCStsMgmt.h"


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
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDiErrDTC_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDiErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDiErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDiErrDTC_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDiErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDiErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDiErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDiErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_3: Boolean
 * boolean: Boolean (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
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
 * dt_OBCMgmt_OBCChrgStsErr: Record with elements
 *   OBCMgmt_MonStatOBCChrgStsErr of type Rte_DT_dt_OBCMgmt_OBCChrgStsErr_0
 *   OBCMgmt_MonResOBCChrgStsErr of type Rte_DT_dt_OBCMgmt_OBCChrgStsErr_1
 *   OBCMgmt_ErrStatOBCChrgStsErr of type Rte_DT_dt_OBCMgmt_OBCChrgStsErr_2
 *   OBCMgmt_ErrResOBCChrgStsErr of type Rte_DT_dt_OBCMgmt_OBCChrgStsErr_3
 * dt_OBCMgmt_OBCChrgStsErrDTC: Record with elements
 *   OBCMgmt_MonStatOBCChrgStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_0
 *   OBCMgmt_MonResOBCChrgStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_1
 *   OBCMgmt_ErrStatOBCChrgStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_2
 *   OBCMgmt_ErrResOBCChrgStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCChrgStsErrDTC_3
 * dt_OBCMgmt_OBCDchaStsErr: Record with elements
 *   OBCMgmt_MonStatOBCDchaStsErr of type Rte_DT_dt_OBCMgmt_OBCDchaStsErr_0
 *   OBCMgmt_MonResOBCDchaStsErr of type Rte_DT_dt_OBCMgmt_OBCDchaStsErr_1
 *   OBCMgmt_ErrStatOBCDchaStsErr of type Rte_DT_dt_OBCMgmt_OBCDchaStsErr_2
 *   OBCMgmt_ErrResOBCDchaStsErr of type Rte_DT_dt_OBCMgmt_OBCDchaStsErr_3
 * dt_OBCMgmt_OBCDchaStsErrDTC: Record with elements
 *   OBCMgmt_MonStatOBCDchaStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_0
 *   OBCMgmt_MonResOBCDchaStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_1
 *   OBCMgmt_ErrStatOBCDchaStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_2
 *   OBCMgmt_ErrResOBCDchaStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCDchaStsErrDTC_3
 * dt_OBCMgmt_OBCDiErr: Record with elements
 *   OBCMgmt_MonStatOBCDiErr of type Rte_DT_dt_OBCMgmt_OBCDiErr_0
 *   OBCMgmt_MonResOBCDiErr of type Rte_DT_dt_OBCMgmt_OBCDiErr_1
 *   OBCMgmt_ErrStatOBCDiErr of type Rte_DT_dt_OBCMgmt_OBCDiErr_2
 *   OBCMgmt_ErrResOBCDiErr of type Rte_DT_dt_OBCMgmt_OBCDiErr_3
 * dt_OBCMgmt_OBCDiErrDTC: Record with elements
 *   OBCMgmt_MonStatOBCDiErrDTC of type Rte_DT_dt_OBCMgmt_OBCDiErrDTC_0
 *   OBCMgmt_MonResOBCDiErrDTC of type Rte_DT_dt_OBCMgmt_OBCDiErrDTC_1
 *   OBCMgmt_ErrStatOBCDiErrDTC of type Rte_DT_dt_OBCMgmt_OBCDiErrDTC_2
 *   OBCMgmt_ErrResOBCDiErrDTC of type Rte_DT_dt_OBCMgmt_OBCDiErrDTC_3
 * dt_OBCMgmt_OBCPreheatStsErr: Record with elements
 *   OBCMgmt_MonStatOBCPreheatStsErr of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_0
 *   OBCMgmt_MonResOBCPreheatStsErr of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_1
 *   OBCMgmt_ErrStatOBCPreheatStsErr of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_2
 *   OBCMgmt_ErrResOBCPreheatStsErr of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_3
 * dt_OBCMgmt_OBCPreheatStsErrDTC: Record with elements
 *   OBCMgmt_MonStatOBCPreheatStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_0
 *   OBCMgmt_MonResOBCPreheatStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_1
 *   OBCMgmt_ErrStatOBCPreheatStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_2
 *   OBCMgmt_ErrResOBCPreheatStsErrDTC of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErrDTC_3
 *
 *********************************************************************************************************************/


#define CtAp_OBCStsMgmt_START_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_OBCStsMgmt_Cyclic_50ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCChrgStsErrDTC_Bus_tec_OBCMgmt_OBCChrgStsErrDTC_Bus(const dt_OBCMgmt_OBCChrgStsErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus(const dt_OBCMgmt_OBCChrgStsErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCDchaStsErrDTC_Bus_tec_OBCMgmt_OBCDchaStsErrDTC_Bus(const dt_OBCMgmt_OBCDchaStsErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus(const dt_OBCMgmt_OBCDchaStsErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCDiErrDTC_Bus_tec_OBCMgmt_OBCDiErrDTC_Bus(const dt_OBCMgmt_OBCDiErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus(const dt_OBCMgmt_OBCDiErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCPreheatStsErrDTC_Bus_tec_OBCMgmt_OBCPreheatStsErrDTC_Bus(const dt_OBCMgmt_OBCPreheatStsErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus(const dt_OBCMgmt_OBCPreheatStsErr *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_OBCStsMgmt_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_OBCStsMgmt_CODE) R_OBCStsMgmt_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_OBCStsMgmt_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_OBCStsMgmt_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_OBCStsMgmt_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_OBCStsMgmt_CODE) R_OBCStsMgmt_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_OBCStsMgmt_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_OBCStsMgmt_STOP_SEC_CODE
#include "CtAp_OBCStsMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
