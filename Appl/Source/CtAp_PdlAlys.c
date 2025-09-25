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
 *             File:  CtAp_PdlAlys.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_PdlAlys
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_PdlAlys>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_PdlAlys.h"


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
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_0: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_3: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_0: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_3: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_0: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_3: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_0: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_3: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_0: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_3: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_0: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_3: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_0: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_3: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_0: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_3: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_0: Boolean
 * Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_1: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_2: Integer in interval [0...255]
 * Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_3: Boolean
 * Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts01CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts01CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo: Record with elements
 *   ChassisMgmt_MonStatAccrPedlSplyVolt1HiInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_0
 *   ChassisMgmt_MonResAccrPedlSplyVolt1HiInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_1
 *   ChassisMgmt_ErrStatAccrPedlSplyVolt1HiInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_2
 *   ChassisMgmt_ErrResAccrPedlSplyVolt1HiInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_3
 * dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo: Record with elements
 *   ChassisMgmt_MonStatAccrPedlSplyVolt1LoInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_0
 *   ChassisMgmt_MonResAccrPedlSplyVolt1LoInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_1
 *   ChassisMgmt_ErrStatAccrPedlSplyVolt1LoInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_2
 *   ChassisMgmt_ErrResAccrPedlSplyVolt1LoInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_3
 * dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo: Record with elements
 *   ChassisMgmt_MonStatAccrPedlSplyVolt2HiInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_0
 *   ChassisMgmt_MonResAccrPedlSplyVolt2HiInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_1
 *   ChassisMgmt_ErrStatAccrPedlSplyVolt2HiInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_2
 *   ChassisMgmt_ErrResAccrPedlSplyVolt2HiInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_3
 * dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo: Record with elements
 *   ChassisMgmt_MonStatAccrPedlSplyVolt2LoInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_0
 *   ChassisMgmt_MonResAccrPedlSplyVolt2LoInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_1
 *   ChassisMgmt_ErrStatAccrPedlSplyVolt2LoInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_2
 *   ChassisMgmt_ErrResAccrPedlSplyVolt2LoInfo of type Rte_DT_dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_3
 * dt_ChassisMgmt_AccrPedlURaw1Hi: Record with elements
 *   ChassisMgmt_MonStatAccrPedlURaw1Hi of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_0
 *   ChassisMgmt_MonResAccrPedlURaw1Hi of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_1
 *   ChassisMgmt_ErrStatAccrPedlURaw1Hi of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_2
 *   ChassisMgmt_ErrResAccrPedlURaw1Hi of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Hi_3
 * dt_ChassisMgmt_AccrPedlURaw1Lo: Record with elements
 *   ChassisMgmt_MonStatAccrPedlURaw1Lo of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_0
 *   ChassisMgmt_MonResAccrPedlURaw1Lo of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_1
 *   ChassisMgmt_ErrStatAccrPedlURaw1Lo of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_2
 *   ChassisMgmt_ErrResAccrPedlURaw1Lo of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw1Lo_3
 * dt_ChassisMgmt_AccrPedlURaw2Hi: Record with elements
 *   ChassisMgmt_MonStatAccrPedlURaw2Hi of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_0
 *   ChassisMgmt_MonResAccrPedlURaw2Hi of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_1
 *   ChassisMgmt_ErrStatAccrPedlURaw2Hi of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_2
 *   ChassisMgmt_ErrResAccrPedlURaw2Hi of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Hi_3
 * dt_ChassisMgmt_AccrPedlURaw2Lo: Record with elements
 *   ChassisMgmt_MonStatAccrPedlURaw2Lo of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_0
 *   ChassisMgmt_MonResAccrPedlURaw2Lo of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_1
 *   ChassisMgmt_ErrStatAccrPedlURaw2Lo of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_2
 *   ChassisMgmt_ErrResAccrPedlURaw2Lo of type Rte_DT_dt_ChassisMgmt_AccrPedlURaw2Lo_3
 * dt_ChassisMgmt_AccrPedlURawDif: Record with elements
 *   ChassisMgmt_MonStatAccrPedlURawDif of type Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_0
 *   ChassisMgmt_MonResAccrPedlURawDif of type Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_1
 *   ChassisMgmt_ErrStatAccrPedlURawDif of type Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_2
 *   ChassisMgmt_ErrResAccrPedlURawDif of type Rte_DT_dt_ChassisMgmt_AccrPedlURawDif_3
 * dt_ComM_IBSSts01CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_0
 *   ComM_MonResIBSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_1
 *   ComM_ErrStatIBSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_2
 *   ComM_ErrResIBSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCDTCInfo_3
 * dt_ComM_IBSSts01CRCInfo: Record with elements
 *   ComM_MonStatIBSSts01CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCInfo_0
 *   ComM_MonResIBSSts01CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCInfo_1
 *   ComM_ErrStatIBSSts01CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCInfo_2
 *   ComM_ErrResIBSSts01CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts01CRCInfo_3
 * dt_ComM_IBSSts01E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_0
 *   ComM_MonResIBSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts01E2ETimeoutInfo_3
 * dt_ComM_IBSSts01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_0
 *   ComM_MonResIBSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts01TimeoutDTCInfo_3
 *
 *********************************************************************************************************************/


#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_PdlAlys_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus(dt_ComM_IBSSts01CRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus(dt_ComM_IBSSts01E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo(const dt_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo(const dt_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo(const dt_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo(const dt_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw1HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1HiDTC_Bus(const dt_ChassisMgmt_AccrPedlURaw1Hi *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw1LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1LoDTC_Bus(const dt_ChassisMgmt_AccrPedlURaw1Lo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw2HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2HiDTC_Bus(const dt_ChassisMgmt_AccrPedlURaw2Hi *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw2LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2LoDTC_Bus(const dt_ChassisMgmt_AccrPedlURaw2Lo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlURawDifDTC_Bus_tec_ChassisMgmt_AccrPedlURawDifDTC_Bus(const dt_ChassisMgmt_AccrPedlURawDif *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_PdlAlys_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_PdlAlys_CODE) R_PdlAlys_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_PdlAlys_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_PdlAlys_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_PdlAlys_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_PdlAlys_CODE) R_PdlAlys_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_PdlAlys_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
