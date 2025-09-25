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
 *             File:  CtAp_ChrgEgyCal.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_ChrgEgyCal
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_ChrgEgyCal>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_ChrgEgyCal.h"


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
 * Rte_DT_dt_Nv_ChrgEgyCalInfo_0: Integer in interval [0...4294967295]
 * Rte_DT_dt_Nv_ChrgEgyCalInfo_1: Integer in interval [0...4294967295]
 * Rte_DT_dt_Nv_ChrgEgyCalInfo_2: Integer in interval [0...4294967295]
 * Rte_DT_dt_Nv_ChrgEgyCalInfo_3: Integer in interval [0...4294967295]
 * Rte_DT_dt_Nv_ChrgEgyCalInfo_4: Integer in interval [0...4294967295]
 * Rte_DT_dt_Nv_ChrgEgyCalInfo_5: Integer in interval [0...4294967295]
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_Nv_ChrgEgyCalInfo: Record with elements
 *   ChrMgmt_OBCSideTotDchaEgy_Wh of type Rte_DT_dt_Nv_ChrgEgyCalInfo_0
 *   ChrMgmt_PODSideTotChrgEgy_Wh of type Rte_DT_dt_Nv_ChrgEgyCalInfo_1
 *   ChrMgmt_BattSideTotChrgEgy_Wh of type Rte_DT_dt_Nv_ChrgEgyCalInfo_2
 *   ChrMgmt_DCChrgrSideTotChrgEgy_Wh of type Rte_DT_dt_Nv_ChrgEgyCalInfo_3
 *   ChrMgmt_OBCSideTotChrgEgy_Wh of type Rte_DT_dt_Nv_ChrgEgyCalInfo_4
 *   ChrMgmt_BattChrgCnt_Tms of type Rte_DT_dt_Nv_ChrgEgyCalInfo_5
 *
 *********************************************************************************************************************/


#define CtAp_ChrgEgyCal_START_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgEgyCal_Cyclic_50ms
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
 *   Std_ReturnType Rte_Read_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo(dt_Nv_ChrgEgyCalInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_BattSideSngChrgEgy_kWh_tec_ChrMgmt_BattSideSngChrgEgy_kWh(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_DcChrgrSideSngChrgEgy_kWh_tec_ChrMgmt_DcChrgrSideSngChrgEgy_kWh(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_OBCSideSngChrgEgy_kWh_tec_ChrMgmt_OBCSideSngChrgEgy_kWh(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_PODSideSngChrgEgy_kWh_tec_ChrMgmt_PODSideSngChrgEgy_kWh(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo(const dt_Nv_ChrgEgyCalInfo *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgEgyCal_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgEgyCal_CODE) R_ChrgEgyCal_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgEgyCal_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgEgyCal_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgEgyCal_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgEgyCal_CODE) R_ChrgEgyCal_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgEgyCal_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_ChrgEgyCal_STOP_SEC_CODE
#include "CtAp_ChrgEgyCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
