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
 *             File:  CtAp_VehSpd.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_VehSpd
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_VehSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_VehSpd.h"


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
 * Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts03CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts03CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCU01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_MCU01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCU01TimeoutInfo_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * sint16: Integer in interval [-32768...32767] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ComM_IBSSts03CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts03CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_0
 *   ComM_MonResIBSSts03CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_1
 *   ComM_ErrStatIBSSts03CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_2
 *   ComM_ErrResIBSSts03CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCDTCInfo_3
 * dt_ComM_IBSSts03CRCInfo: Record with elements
 *   ComM_MonStatIBSSts03CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCInfo_0
 *   ComM_MonResIBSSts03CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCInfo_1
 *   ComM_ErrStatIBSSts03CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCInfo_2
 *   ComM_ErrResIBSSts03CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts03CRCInfo_3
 * dt_ComM_IBSSts03E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts03E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_0
 *   ComM_MonResIBSSts03E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts03E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts03E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts03E2ETimeoutInfo_3
 * dt_ComM_IBSSts03TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts03TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_0
 *   ComM_MonResIBSSts03TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts03TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts03TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts03TimeoutDTCInfo_3
 * dt_ComM_MCU01CRCDTCInfo: Record with elements
 *   ComM_MonStatMCU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCDTCInfo_0
 *   ComM_MonResMCU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCDTCInfo_1
 *   ComM_ErrStatMCU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCDTCInfo_2
 *   ComM_ErrResMCU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCDTCInfo_3
 * dt_ComM_MCU01CRCInfo: Record with elements
 *   ComM_MonStatMCU01CRCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCInfo_0
 *   ComM_MonResMCU01CRCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCInfo_1
 *   ComM_ErrStatMCU01CRCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCInfo_2
 *   ComM_ErrResMCU01CRCErrorInfo of type Rte_DT_dt_ComM_MCU01CRCInfo_3
 * dt_ComM_MCU01E2ETimeoutInfo: Record with elements
 *   ComM_MonStatMCU01E2ETimeoutInfo of type Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_0
 *   ComM_MonResMCU01E2ETimeoutInfo of type Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_1
 *   ComM_ErrStatMCU01E2ETimeoutInfo of type Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_2
 *   ComM_ErrResMCU01E2ETimeoutInfo of type Rte_DT_dt_ComM_MCU01E2ETimeoutInfo_3
 * dt_ComM_MCU01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatMCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_0
 *   ComM_MonResMCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_1
 *   ComM_ErrStatMCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_2
 *   ComM_ErrResMCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCU01TimeoutDTCInfo_3
 * dt_ComM_MCU01TimeoutInfo: Record with elements
 *   ComM_MonStatMCU01TimeoutInfo of type Rte_DT_dt_ComM_MCU01TimeoutInfo_0
 *   ComM_MonResMCU01TimeoutInfo of type Rte_DT_dt_ComM_MCU01TimeoutInfo_1
 *   ComM_ErrStatMCU01TimeoutInfo of type Rte_DT_dt_ComM_MCU01TimeoutInfo_2
 *   ComM_ErrResMCU01TimeoutInfo of type Rte_DT_dt_ComM_MCU01TimeoutInfo_3
 *
 *********************************************************************************************************************/


#define CtAp_VehSpd_START_SEC_CODE
#include "CtAp_VehSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_VehSpd_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus(dt_ComM_IBSSts03CRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus(dt_ComM_IBSSts03E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus(dt_ComM_MCU01CRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus(dt_ComM_MCU01E2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(sint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_TireRadiusInfo_tec_DiagApp_TireRadiusInfo(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_TireRadiusUpdateInfo_tec_DiagApp_TireRadiusUpdateInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_VotMot_TireRadiusReadInfo_tec_VotMot_TireRadiusReadInfo(uint8 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_VehSpd_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_VehSpd_CODE) R_VehSpd_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_VehSpd_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_VehSpd_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_VehSpd_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_VehSpd_CODE) R_VehSpd_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_VehSpd_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_VehSpd_STOP_SEC_CODE
#include "CtAp_VehSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
