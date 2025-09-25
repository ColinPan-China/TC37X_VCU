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
 *             File:  CtAp_S2Mgmt.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_S2Mgmt
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_S2Mgmt>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_S2Mgmt.h"


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
 * Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_0: Boolean
 * Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_3: Boolean
 * Rte_DT_dt_OBCMgmt_CPStsJmpErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_CPStsJmpErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_CPStsJmpErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_CPStsJmpErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_0: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_3: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtClsErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtClsErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtClsErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtClsErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_0: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_3: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtOpenErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtOpenErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtOpenErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtOpenErr_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
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
 * dt_OBCMgmt_CPStsJmpErr: Record with elements
 *   OBCMgmt_MonStatCPStsJmpErr of type Rte_DT_dt_OBCMgmt_CPStsJmpErr_0
 *   OBCMgmt_MonResCPStsJmpErr of type Rte_DT_dt_OBCMgmt_CPStsJmpErr_1
 *   OBCMgmt_ErrStatCPStsJmpErr of type Rte_DT_dt_OBCMgmt_CPStsJmpErr_2
 *   OBCMgmt_ErrResCPStsJmpErr of type Rte_DT_dt_OBCMgmt_CPStsJmpErr_3
 * dt_OBCMgmt_CPStsJmpErrDTC: Record with elements
 *   OBCMgmt_MonStatCPStsJmpErrDTC of type Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_0
 *   OBCMgmt_MonResCPStsJmpErrDTC of type Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_1
 *   OBCMgmt_ErrStatCPStsJmpErrDTC of type Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_2
 *   OBCMgmt_ErrResCPStsJmpErrDTC of type Rte_DT_dt_OBCMgmt_CPStsJmpErrDTC_3
 * dt_OBCMgmt_OBCInpUDcLoErr: Record with elements
 *   OBCMgmt_MonStatOBCInpUDcLoErr of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_0
 *   OBCMgmt_MonResOBCInpUDcLoErr of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_1
 *   OBCMgmt_ErrStatOBCInpUDcLoErr of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_2
 *   OBCMgmt_ErrResOBCInpUDcLoErr of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_3
 * dt_OBCMgmt_OBCInpUDcLoErrDTC: Record with elements
 *   OBCMgmt_MonStatOBCInpUDcLoErrDTC of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_0
 *   OBCMgmt_MonResOBCInpUDcLoErrDTC of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_1
 *   OBCMgmt_ErrStatOBCInpUDcLoErrDTC of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_2
 *   OBCMgmt_ErrResOBCInpUDcLoErrDTC of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErrDTC_3
 * dt_OBCMgmt_S2SwtClsErr: Record with elements
 *   OBCMgmt_MonStatS2SwtClsErr of type Rte_DT_dt_OBCMgmt_S2SwtClsErr_0
 *   OBCMgmt_MonResS2SwtClsErr of type Rte_DT_dt_OBCMgmt_S2SwtClsErr_1
 *   OBCMgmt_ErrStatS2SwtClsErr of type Rte_DT_dt_OBCMgmt_S2SwtClsErr_2
 *   OBCMgmt_ErrResS2SwtClsErr of type Rte_DT_dt_OBCMgmt_S2SwtClsErr_3
 * dt_OBCMgmt_S2SwtClsErrDTC: Record with elements
 *   OBCMgmt_MonStatS2SwtClsErrDTC of type Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_0
 *   OBCMgmt_MonResS2SwtClsErrDTC of type Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_1
 *   OBCMgmt_ErrStatS2SwtClsErrDTC of type Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_2
 *   OBCMgmt_ErrResS2SwtClsErrDTC of type Rte_DT_dt_OBCMgmt_S2SwtClsErrDTC_3
 * dt_OBCMgmt_S2SwtOpenErr: Record with elements
 *   OBCMgmt_MonStatS2SwtOpenErr of type Rte_DT_dt_OBCMgmt_S2SwtOpenErr_0
 *   OBCMgmt_MonResS2SwtOpenErr of type Rte_DT_dt_OBCMgmt_S2SwtOpenErr_1
 *   OBCMgmt_ErrStatS2SwtOpenErr of type Rte_DT_dt_OBCMgmt_S2SwtOpenErr_2
 *   OBCMgmt_ErrResS2SwtOpenErr of type Rte_DT_dt_OBCMgmt_S2SwtOpenErr_3
 * dt_OBCMgmt_S2SwtOpenErrDTC: Record with elements
 *   OBCMgmt_MonStatS2SwtOpenErrDTC of type Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_0
 *   OBCMgmt_MonResS2SwtOpenErrDTC of type Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_1
 *   OBCMgmt_ErrStatS2SwtOpenErrDTC of type Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_2
 *   OBCMgmt_ErrResS2SwtOpenErrDTC of type Rte_DT_dt_OBCMgmt_S2SwtOpenErrDTC_3
 *
 *********************************************************************************************************************/


#define CtAp_S2Mgmt_START_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_S2Mgmt_Cyclic_50ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_CPStsJmpErrDTC_Bus_tec_OBCMgmt_CPStsJmpErrDTC_Bus(const dt_OBCMgmt_CPStsJmpErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus(const dt_OBCMgmt_CPStsJmpErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCInpUDcLoErrDTC_Bus_tec_OBCMgmt_OBCInpUDcLoErrDTC_Bus(const dt_OBCMgmt_OBCInpUDcLoErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus(const dt_OBCMgmt_OBCInpUDcLoErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_S2SwtClsErrDTC_Bus_tec_OBCMgmt_S2SwtClsErrDTC_Bus(const dt_OBCMgmt_S2SwtClsErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus(const dt_OBCMgmt_S2SwtClsErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_S2SwtOpenErrDTC_Bus_tec_OBCMgmt_S2SwtOpenErrDTC_Bus(const dt_OBCMgmt_S2SwtOpenErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_OBCMgmt_S2SwtOpenErr_Bus_tec_OBCMgmt_S2SwtOpenErr_Bus(const dt_OBCMgmt_S2SwtOpenErr *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_S2Mgmt_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_S2Mgmt_CODE) R_S2Mgmt_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_S2Mgmt_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_S2Mgmt_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_S2Mgmt_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_S2Mgmt_CODE) R_S2Mgmt_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_S2Mgmt_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_S2Mgmt_STOP_SEC_CODE
#include "CtAp_S2Mgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
