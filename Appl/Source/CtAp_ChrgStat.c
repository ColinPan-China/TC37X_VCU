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
 *             File:  CtAp_ChrgStat.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_ChrgStat
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_ChrgStat>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_ChrgStat.h"


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
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_0: Boolean
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_AcPreheatUDcCtrlErr_3: Boolean
 * Rte_DT_dt_ChrMgmt_CC2UDcDTC_0: Boolean
 * Rte_DT_dt_ChrMgmt_CC2UDcDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_CC2UDcDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_CC2UDcDTC_3: Boolean
 * Rte_DT_dt_ChrMgmt_CC2UDcErr_0: Boolean
 * Rte_DT_dt_ChrMgmt_CC2UDcErr_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_CC2UDcErr_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_CC2UDcErr_3: Boolean
 * Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_0: Boolean
 * Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_3: Boolean
 * Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_0: Boolean
 * Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_3: Boolean
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_0: Boolean
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_1: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_2: Integer in interval [0...255]
 * Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_3: Boolean
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
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_0: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_3: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_0: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_3: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErr_0: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErr_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErr_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasDiErr_3: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_0: Boolean
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_3: Boolean
 * Rte_DT_dt_Nv_ChrgStatInfo_0: Integer in interval [0...255]
 * Rte_DT_dt_Nv_ChrgStatInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_Nv_ChrgStatInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_Nv_ChrgStatInfo_3: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_CPStsJmpErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_CPStsJmpErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_CPStsJmpErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_CPStsJmpErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCChrgStsErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDchaStsErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDiErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCDiErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDiErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCDiErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_3: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtClsErr_0: Boolean
 * Rte_DT_dt_OBCMgmt_S2SwtClsErr_1: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtClsErr_2: Integer in interval [0...255]
 * Rte_DT_dt_OBCMgmt_S2SwtClsErr_3: Boolean
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
 * dt_ChrMgmt_CC2UDcDTC: Record with elements
 *   ChrMgmt_MonStatCC2UDcErrDTC of type Rte_DT_dt_ChrMgmt_CC2UDcDTC_0
 *   ChrMgmt_MonResCC2UDcErrDTC of type Rte_DT_dt_ChrMgmt_CC2UDcDTC_1
 *   ChrMgmt_ErrStatCC2UDcErrDTC of type Rte_DT_dt_ChrMgmt_CC2UDcDTC_2
 *   ChrMgmt_ErrResCC2UDcErrDTC of type Rte_DT_dt_ChrMgmt_CC2UDcDTC_3
 * dt_ChrMgmt_CC2UDcErr: Record with elements
 *   ChrMgmt_MonStatCC2UDcErr of type Rte_DT_dt_ChrMgmt_CC2UDcErr_0
 *   ChrMgmt_MonResCC2UDcErr of type Rte_DT_dt_ChrMgmt_CC2UDcErr_1
 *   ChrMgmt_ErrStatCC2UDcErr of type Rte_DT_dt_ChrMgmt_CC2UDcErr_2
 *   ChrMgmt_ErrResCC2UDcErr of type Rte_DT_dt_ChrMgmt_CC2UDcErr_3
 * dt_ChrMgmt_ChrgStsJmpErr: Record with elements
 *   ChrMgmt_MonStatChrgStsJmpErr of type Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_0
 *   ChrMgmt_MonResChrgStsJmpErr of type Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_1
 *   ChrMgmt_ErrStatChrgStsJmpErr of type Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_2
 *   ChrMgmt_ErrResChrgStsJmpErr of type Rte_DT_dt_ChrMgmt_ChrgStsJmpErr_3
 * dt_ChrMgmt_ChrgStsJmpErrDTC: Record with elements
 *   ChrMgmt_MonStatChrgStsJmpErrDTC of type Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_0
 *   ChrMgmt_MonResChrgStsJmpErrDTC of type Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_1
 *   ChrMgmt_ErrStatChrgStsJmpErrDTC of type Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_2
 *   ChrMgmt_ErrResChrgStsJmpErrDTC of type Rte_DT_dt_ChrMgmt_ChrgStsJmpErrDTC_3
 * dt_ChrMgmt_DcPreheatUDcCtrlErr: Record with elements
 *   ChrMgmt_MonStatDcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_0
 *   ChrMgmt_MonResDcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_1
 *   ChrMgmt_ErrStatDcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_2
 *   ChrMgmt_ErrResDcPreheatUDcCtrlErr of type Rte_DT_dt_ChrMgmt_DcPreheatUDcCtrlErr_3
 * dt_ChrMgmt_PreheatIRChkErr: Record with elements
 *   ChrMgmt_MonStatPreheatIRChkErr of type Rte_DT_dt_ChrMgmt_PreheatIRChkErr_0
 *   ChrMgmt_MonResPreheatIRChkErr of type Rte_DT_dt_ChrMgmt_PreheatIRChkErr_1
 *   ChrMgmt_ErrStatPreheatIRChkErr of type Rte_DT_dt_ChrMgmt_PreheatIRChkErr_2
 *   ChrMgmt_ErrResPreheatIRChkErr of type Rte_DT_dt_ChrMgmt_PreheatIRChkErr_3
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
 * dt_DCChrMgmt_DcPortTempErrLvl2: Record with elements
 *   DCChrMgmt_MonStatDcPortTempErrLvl2 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_0
 *   DCChrMgmt_MonResDcPortTempErrLvl2 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_1
 *   DCChrMgmt_ErrStatDcPortTempErrLvl2 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_2
 *   DCChrMgmt_ErrResDcPortTempErrLvl2 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_3
 * dt_DCChrMgmt_DcPortTempSnsrErr: Record with elements
 *   DCChrMgmt_MonStatDcPortTempSnsrErr of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_0
 *   DCChrMgmt_MonResDcPortTempSnsrErr of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_1
 *   DCChrMgmt_ErrStatDcPortTempSnsrErr of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_2
 *   DCChrMgmt_ErrResDcPortTempSnsrErr of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_3
 * dt_DCChrMgmt_IRMeasDiErr: Record with elements
 *   DCChrMgmt_MonStatIRMeasDiErr of type Rte_DT_dt_DCChrMgmt_IRMeasDiErr_0
 *   DCChrMgmt_MonResIRMeasDiErr of type Rte_DT_dt_DCChrMgmt_IRMeasDiErr_1
 *   DCChrMgmt_ErrStatIRMeasDiErr of type Rte_DT_dt_DCChrMgmt_IRMeasDiErr_2
 *   DCChrMgmt_ErrResIRMeasDiErr of type Rte_DT_dt_DCChrMgmt_IRMeasDiErr_3
 * dt_DCChrMgmt_IRMeasEnaErr: Record with elements
 *   DCChrMgmt_MonStatIRMeasEnaErr of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_0
 *   DCChrMgmt_MonResIRMeasEnaErr of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_1
 *   DCChrMgmt_ErrStatIRMeasEnaErr of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_2
 *   DCChrMgmt_ErrResIRMeasEnaErr of type Rte_DT_dt_DCChrMgmt_IRMeasEnaErr_3
 * dt_Nv_ChrgStatInfo: Record with elements
 *   ChrMgmt_ChrgTarSOC_pct of type Rte_DT_dt_Nv_ChrgStatInfo_0
 *   ChrMgmt_ChrgMemFlt_Flg of type Rte_DT_dt_Nv_ChrgStatInfo_1
 *   ChrMgmt_DchaAbortSOC_pct of type Rte_DT_dt_Nv_ChrgStatInfo_2
 *   ChrMgmt_FillAddress of type Rte_DT_dt_Nv_ChrgStatInfo_3
 * dt_OBCMgmt_CPStsJmpErr: Record with elements
 *   OBCMgmt_MonStatCPStsJmpErr of type Rte_DT_dt_OBCMgmt_CPStsJmpErr_0
 *   OBCMgmt_MonResCPStsJmpErr of type Rte_DT_dt_OBCMgmt_CPStsJmpErr_1
 *   OBCMgmt_ErrStatCPStsJmpErr of type Rte_DT_dt_OBCMgmt_CPStsJmpErr_2
 *   OBCMgmt_ErrResCPStsJmpErr of type Rte_DT_dt_OBCMgmt_CPStsJmpErr_3
 * dt_OBCMgmt_OBCChrgStsErr: Record with elements
 *   OBCMgmt_MonStatOBCChrgStsErr of type Rte_DT_dt_OBCMgmt_OBCChrgStsErr_0
 *   OBCMgmt_MonResOBCChrgStsErr of type Rte_DT_dt_OBCMgmt_OBCChrgStsErr_1
 *   OBCMgmt_ErrStatOBCChrgStsErr of type Rte_DT_dt_OBCMgmt_OBCChrgStsErr_2
 *   OBCMgmt_ErrResOBCChrgStsErr of type Rte_DT_dt_OBCMgmt_OBCChrgStsErr_3
 * dt_OBCMgmt_OBCDchaStsErr: Record with elements
 *   OBCMgmt_MonStatOBCDchaStsErr of type Rte_DT_dt_OBCMgmt_OBCDchaStsErr_0
 *   OBCMgmt_MonResOBCDchaStsErr of type Rte_DT_dt_OBCMgmt_OBCDchaStsErr_1
 *   OBCMgmt_ErrStatOBCDchaStsErr of type Rte_DT_dt_OBCMgmt_OBCDchaStsErr_2
 *   OBCMgmt_ErrResOBCDchaStsErr of type Rte_DT_dt_OBCMgmt_OBCDchaStsErr_3
 * dt_OBCMgmt_OBCDiErr: Record with elements
 *   OBCMgmt_MonStatOBCDiErr of type Rte_DT_dt_OBCMgmt_OBCDiErr_0
 *   OBCMgmt_MonResOBCDiErr of type Rte_DT_dt_OBCMgmt_OBCDiErr_1
 *   OBCMgmt_ErrStatOBCDiErr of type Rte_DT_dt_OBCMgmt_OBCDiErr_2
 *   OBCMgmt_ErrResOBCDiErr of type Rte_DT_dt_OBCMgmt_OBCDiErr_3
 * dt_OBCMgmt_OBCInpUDcLoErr: Record with elements
 *   OBCMgmt_MonStatOBCInpUDcLoErr of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_0
 *   OBCMgmt_MonResOBCInpUDcLoErr of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_1
 *   OBCMgmt_ErrStatOBCInpUDcLoErr of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_2
 *   OBCMgmt_ErrResOBCInpUDcLoErr of type Rte_DT_dt_OBCMgmt_OBCInpUDcLoErr_3
 * dt_OBCMgmt_OBCPreheatStsErr: Record with elements
 *   OBCMgmt_MonStatOBCPreheatStsErr of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_0
 *   OBCMgmt_MonResOBCPreheatStsErr of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_1
 *   OBCMgmt_ErrStatOBCPreheatStsErr of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_2
 *   OBCMgmt_ErrResOBCPreheatStsErr of type Rte_DT_dt_OBCMgmt_OBCPreheatStsErr_3
 * dt_OBCMgmt_S2SwtClsErr: Record with elements
 *   OBCMgmt_MonStatS2SwtClsErr of type Rte_DT_dt_OBCMgmt_S2SwtClsErr_0
 *   OBCMgmt_MonResS2SwtClsErr of type Rte_DT_dt_OBCMgmt_S2SwtClsErr_1
 *   OBCMgmt_ErrStatS2SwtClsErr of type Rte_DT_dt_OBCMgmt_S2SwtClsErr_2
 *   OBCMgmt_ErrResS2SwtClsErr of type Rte_DT_dt_OBCMgmt_S2SwtClsErr_3
 *
 *********************************************************************************************************************/


#define CtAp_ChrgStat_START_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgStat_Cyclic_50ms
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
 *   Std_ReturnType Rte_Read_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo(dt_Nv_ChrgStatInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus(dt_ChrMgmt_AcPreheatUDcCtrlErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus(dt_ChrMgmt_DcPreheatUDcCtrlErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus(dt_ChrMgmt_PreheatIRChkErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus(dt_DCChrMgmt_DcPortTempErrLvl2 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus(dt_DCChrMgmt_DcPortTempSnsrErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus(dt_DCChrMgmt_IRMeasDiErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus(dt_DCChrMgmt_IRMeasEnaErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_HvPwrOffReqChrgDwn_Flg_tec_HvMgmt_HvPwrOffReqChrgDwn_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_CPStsJmpErr_Bus_tec_OBCMgmt_CPStsJmpErr_Bus(dt_OBCMgmt_CPStsJmpErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus(dt_OBCMgmt_OBCChrgStsErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus(dt_OBCMgmt_OBCDchaStsErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus(dt_OBCMgmt_OBCDiErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_OBCInpUDcLoErr_Bus_tec_OBCMgmt_OBCInpUDcLoErr_Bus(dt_OBCMgmt_OBCInpUDcLoErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus(dt_OBCMgmt_OBCPreheatStsErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_OBCMgmt_S2SwtClsErr_Bus_tec_OBCMgmt_S2SwtClsErr_Bus(dt_OBCMgmt_S2SwtClsErr *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_UDS_PwrCutRequest_PwrCutRequest(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ChgMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec_ChrMgmt_CC2UDcErrDTC_Bus(const dt_ChrMgmt_CC2UDcDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_CC2UDcErr_Bus_tec_ChrMgmt_CC2UDcErr_Bus(const dt_ChrMgmt_CC2UDcErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus_tec_ChrMgmt_ChrgStsJmpErrDTC_Bus(const dt_ChrMgmt_ChrgStsJmpErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ChrgStsJmpErr_Bus_tec_ChrMgmt_ChrgStsJmpErr_Bus(const dt_ChrMgmt_ChrgStsJmpErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ReqHvRdy_Flg_tec_ChrMgmt_ReqHvRdy_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_RP_ChrgStatInfo_tec_ChrgStatInfo(const dt_Nv_ChrgStatInfo *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgStat_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgStat_CODE) R_ChrgStat_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgStat_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgStat_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgStat_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgStat_CODE) R_ChrgStat_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgStat_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_ChrgStat_STOP_SEC_CODE
#include "CtAp_ChrgStat_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
