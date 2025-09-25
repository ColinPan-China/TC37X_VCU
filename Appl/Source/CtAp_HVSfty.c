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
 *             File:  CtAp_HVSfty.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_HVSfty
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_HVSfty>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_HVSfty.h"


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
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_0: Boolean
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_3: Boolean
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_0: Boolean
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_3: Boolean
 * Rte_DT_dt_ErrMgmt_InslaFlt_0: Boolean
 * Rte_DT_dt_ErrMgmt_InslaFlt_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_InslaFlt_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_InslaFlt_3: Boolean
 * Rte_DT_dt_ErrMgmt_VCUHVILDTC_0: Boolean
 * Rte_DT_dt_ErrMgmt_VCUHVILDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_VCUHVILDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_VCUHVILDTC_3: Boolean
 * Rte_DT_dt_ErrMgmt_VehHVIL_0: Boolean
 * Rte_DT_dt_ErrMgmt_VehHVIL_1: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_VehHVIL_2: Integer in interval [0...255]
 * Rte_DT_dt_ErrMgmt_VehHVIL_3: Boolean
 * boolean: Boolean (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ErrMgmt_DrvMotTempOvrLamp: Record with elements
 *   ErrMgmt_MonStatMCUTempOvr of type Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_0
 *   ErrMgmt_MonResMCUTempOvr of type Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_1
 *   ErrMgmt_ErrStatMCUTempOvr of type Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_2
 *   ErrMgmt_ErrResMCUTempOvr of type Rte_DT_dt_ErrMgmt_DrvMotTempOvrLamp_3
 * dt_ErrMgmt_HvBattTempOvrLamp: Record with elements
 *   ErrMgmt_MonStatBMSTempOvr of type Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_0
 *   ErrMgmt_MonResBMSTempOvr of type Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_1
 *   ErrMgmt_ErrStatBMSTempOvr of type Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_2
 *   ErrMgmt_ErrResBMSTempOvr of type Rte_DT_dt_ErrMgmt_HvBattTempOvrLamp_3
 * dt_ErrMgmt_InslaFlt: Record with elements
 *   ErrMgmt_MonStatVehHVInsla of type Rte_DT_dt_ErrMgmt_InslaFlt_0
 *   ErrMgmt_MonResVehHVInsla of type Rte_DT_dt_ErrMgmt_InslaFlt_1
 *   ErrMgmt_ErrStatVehHVInsla of type Rte_DT_dt_ErrMgmt_InslaFlt_2
 *   ErrMgmt_ErrResVehHVInsla of type Rte_DT_dt_ErrMgmt_InslaFlt_3
 * dt_ErrMgmt_VCUHVILDTC: Record with elements
 *   ErrMgmt_MonStatVCUHVIL of type Rte_DT_dt_ErrMgmt_VCUHVILDTC_0
 *   ErrMgmt_MonResVCUHVIL of type Rte_DT_dt_ErrMgmt_VCUHVILDTC_1
 *   ErrMgmt_ErrStatVCUHVIL of type Rte_DT_dt_ErrMgmt_VCUHVILDTC_2
 *   ErrMgmt_ErrResVCUHVIL of type Rte_DT_dt_ErrMgmt_VCUHVILDTC_3
 * dt_ErrMgmt_VehHVIL: Record with elements
 *   ErrMgmt_MonStatVehHVIL of type Rte_DT_dt_ErrMgmt_VehHVIL_0
 *   ErrMgmt_MonResVehHVIL of type Rte_DT_dt_ErrMgmt_VehHVIL_1
 *   ErrMgmt_ErrStatVehHVIL of type Rte_DT_dt_ErrMgmt_VehHVIL_2
 *   ErrMgmt_ErrResVehHVIL of type Rte_DT_dt_ErrMgmt_VehHVIL_3
 *
 *********************************************************************************************************************/


#define CtAp_HVSfty_START_SEC_CODE
#include "CtAp_HVSfty_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_HVSfty_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus(const dt_ErrMgmt_DrvMotTempOvrLamp *data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus(const dt_ErrMgmt_HvBattTempOvrLamp *data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus(const dt_ErrMgmt_InslaFlt *data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_VCUHVILDTC_Bus_tec_ErrMgmt_VCUHVILDTC_Bus(const dt_ErrMgmt_VCUHVILDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(const dt_ErrMgmt_VehHVIL *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_HVSfty_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_HVSfty_CODE) R_HVSfty_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_HVSfty_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_HVSfty_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_HVSfty_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_HVSfty_CODE) R_HVSfty_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_HVSfty_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_HVSfty_STOP_SEC_CODE
#include "CtAp_HVSfty_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
