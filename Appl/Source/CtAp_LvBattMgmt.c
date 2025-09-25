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
 *             File:  CtAp_LvBattMgmt.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_LvBattMgmt
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_LvBattMgmt>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_LvBattMgmt.h"


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
 * Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_0: Boolean
 * Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_3: Boolean
 * Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_0: Boolean
 * Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_3: Boolean
 * Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_0: Boolean
 * Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_3: Boolean
 * Rte_DT_dt_LvMgmt_BSBattTempHiDTC_0: Boolean
 * Rte_DT_dt_LvMgmt_BSBattTempHiDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattTempHiDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattTempHiDTC_3: Boolean
 * Rte_DT_dt_LvMgmt_BSBattTempLoDTC_0: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattTempLoDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattTempLoDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattTempLoDTC_3: Boolean
 * Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_0: Boolean
 * Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_3: Boolean
 * Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_0: Boolean
 * Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_3: Boolean
 * Rte_DT_dt_LvMgmt_BSRespErrDTC_0: Boolean
 * Rte_DT_dt_LvMgmt_BSRespErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSRespErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_BSRespErrDTC_3: Boolean
 * Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_0: Boolean
 * Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_3: Boolean
 * Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_0: Boolean
 * Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_LvMgmt_BSBattChrgIDcHiDTC: Record with elements
 *   LvMgmt_MonStatBSBattChrgIDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_0
 *   LvMgmt_MonResBSBattChrgIDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_1
 *   LvMgmt_ErrStatBSBattChrgIDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_2
 *   LvMgmt_ErrResBSBattChrgIDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattChrgIDcHiDTC_3
 * dt_LvMgmt_BSBattIDcHiDTC: Record with elements
 *   LvMgmt_MonStatBSBattIDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_0
 *   LvMgmt_MonResBSBattIDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_1
 *   LvMgmt_ErrStatBSBattIDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_2
 *   LvMgmt_ErrResBSBattIDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattIDcHiDTC_3
 * dt_LvMgmt_BSBattSOCLoDTC: Record with elements
 *   LvMgmt_MonStatBSBattSOCLoDTC of type Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_0
 *   LvMgmt_MonResBSBattSOCLoDTC of type Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_1
 *   LvMgmt_ErrStatBSBattSOCLoDTC of type Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_2
 *   LvMgmt_ErrResBSBattSOCLoDTC of type Rte_DT_dt_LvMgmt_BSBattSOCLoDTC_3
 * dt_LvMgmt_BSBattTempHiDTC: Record with elements
 *   LvMgmt_MonStatBSBattTempHiDTC of type Rte_DT_dt_LvMgmt_BSBattTempHiDTC_0
 *   LvMgmt_MonResBSBattTempHiDTC of type Rte_DT_dt_LvMgmt_BSBattTempHiDTC_1
 *   LvMgmt_ErrStatBSBattTempHiDTC of type Rte_DT_dt_LvMgmt_BSBattTempHiDTC_2
 *   LvMgmt_ErrResBSBattTempHiDTC of type Rte_DT_dt_LvMgmt_BSBattTempHiDTC_3
 * dt_LvMgmt_BSBattTempLoDTC: Record with elements
 *   LvMgmt_MonStatBSBattTempLoDTC of type Rte_DT_dt_LvMgmt_BSBattTempLoDTC_0
 *   LvMgmt_MonResBSBattTempLoDTC of type Rte_DT_dt_LvMgmt_BSBattTempLoDTC_1
 *   LvMgmt_ErrStatBSBattTempLoDTC of type Rte_DT_dt_LvMgmt_BSBattTempLoDTC_2
 *   LvMgmt_ErrResBSBattTempLoDTC of type Rte_DT_dt_LvMgmt_BSBattTempLoDTC_3
 * dt_LvMgmt_BSBattUDcHiDTC: Record with elements
 *   LvMgmt_MonStatBSBattUDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_0
 *   LvMgmt_MonResBSBattUDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_1
 *   LvMgmt_ErrStatBSBattUDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_2
 *   LvMgmt_ErrResBSBattUDcHiDTC of type Rte_DT_dt_LvMgmt_BSBattUDcHiDTC_3
 * dt_LvMgmt_BSBattUDcLoDTC: Record with elements
 *   LvMgmt_MonStatBSBattUDcLoDTC of type Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_0
 *   LvMgmt_MonResBSBattUDcLoDTC of type Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_1
 *   LvMgmt_ErrStatBSBattUDcLoDTC of type Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_2
 *   LvMgmt_ErrResBSBattUDcLoDTC of type Rte_DT_dt_LvMgmt_BSBattUDcLoDTC_3
 * dt_LvMgmt_BSRespErrDTC: Record with elements
 *   LvMgmt_MonStatBSRespErrDTC of type Rte_DT_dt_LvMgmt_BSRespErrDTC_0
 *   LvMgmt_MonResBSRespErrDTC of type Rte_DT_dt_LvMgmt_BSRespErrDTC_1
 *   LvMgmt_ErrStatBSRespErrDTC of type Rte_DT_dt_LvMgmt_BSRespErrDTC_2
 *   LvMgmt_ErrResBSRespErrDTC of type Rte_DT_dt_LvMgmt_BSRespErrDTC_3
 * dt_LvMgmt_LvSysLoUdcDTC: Record with elements
 *   LvMgmt_MonStatLvSysLoUDcDTC of type Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_0
 *   LvMgmt_MonResLvSysLoUDcDTC of type Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_1
 *   LvMgmt_ErrStatLvSysLoUDcDTC of type Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_2
 *   LvMgmt_ErrResLvSysLoUDcDTC of type Rte_DT_dt_LvMgmt_LvSysLoUdcDTC_3
 * dt_LvMgmt_LvSysOvrUdcDTC: Record with elements
 *   LvMgmt_MonStatLvSysOvrUDcDTC of type Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_0
 *   LvMgmt_MonResLvSysOvrUDcDTC of type Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_1
 *   LvMgmt_ErrStatLvSysOvrUDcDTC of type Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_2
 *   LvMgmt_ErrResLvSysOvrUDcDTC of type Rte_DT_dt_LvMgmt_LvSysOvrUdcDTC_3
 *
 *********************************************************************************************************************/


#define CtAp_LvBattMgmt_START_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_LvBattMgmt_Cyclic_20ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 20ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BS01_IsUpdated_tec_ComM_BS01_IsUpdated(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBattIDcInfo_tec_ComM_BSBattIDcInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBattSOHInfo_tec_ComM_BSBattSOHInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSBattTempInfo_tec_ComM_BSBattTempInfo(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSComFtonNet_tec_ComM_BSComFtonNet(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BSNodComFailrInfo_tec_ComM_BSNodComFailrInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_BSBattChrgIDcHiDTC_Bus_tec_LvMgmt_BSBattChrgIDcHiDTC_Bus(const dt_LvMgmt_BSBattChrgIDcHiDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_BSBattIDcHiDTC_Bus_tec_LvMgmt_BSBattIDcHiDTC_Bus(const dt_LvMgmt_BSBattIDcHiDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_BSBattSOCLoDTC_Bus_tec_LvMgmt_BSBattSOCLoDTC_Bus(const dt_LvMgmt_BSBattSOCLoDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_BSBattTempHiDTC_Bus_tec_LvMgmt_BSBattTempHiDTC_Bus(const dt_LvMgmt_BSBattTempHiDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_BSBattTempLoDTC_Bus_tec_LvMgmt_BSBattTempLoDTC_Bus(const dt_LvMgmt_BSBattTempLoDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_BSBattUDcHiDTC_Bus_tec_LvMgmt_BSBattUDcHiDTC_Bus(const dt_LvMgmt_BSBattUDcHiDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_BSBattUDcLoDTC_Bus_tec_LvMgmt_BSBattUDcLoDTC_Bus(const dt_LvMgmt_BSBattUDcLoDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_BSRespErrDTC_Bus_tec_LvMgmt_BSRespErrDTC_Bus(const dt_LvMgmt_BSRespErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_LvSysLoUdcDTC_Bus_tec_LvMgmt_LvSysLoUdcDTC_Bus(const dt_LvMgmt_LvSysLoUdcDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_LvSysOvrUdcDTC_Bus_tec_LvMgmt_LvSysOvrUdcDTC_Bus(const dt_LvMgmt_LvSysOvrUdcDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_LvBattMgmt_Cyclic_20ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_LvBattMgmt_CODE) R_LvBattMgmt_Cyclic_20ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_LvBattMgmt_Cyclic_20ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_LvBattMgmt_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_LvBattMgmt_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_LvBattMgmt_CODE) R_LvBattMgmt_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_LvBattMgmt_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_LvBattMgmt_STOP_SEC_CODE
#include "CtAp_LvBattMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
