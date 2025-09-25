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
 *             File:  CtAp_ChrgComM.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_ChrgComM
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_ChrgComM>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_ChrgComM.h"


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
 * Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts01CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts01TimeoutInfo_3: Boolean
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
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_0: Boolean
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_3: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_0: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_3: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_0: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_3: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_0: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_3: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_0: Boolean
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_1: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_2: Integer in interval [0...255]
 * Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_3: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Record Types:
 * =============
 * dt_ComM_BMSErrInfoTimeoutInfo: Record with elements
 *   ComM_MonStatBMSErrInfoTimeoutInfo of type Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_0
 *   ComM_MonResBMSErrInfoTimeoutInfo of type Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_1
 *   ComM_ErrStatBMSErrInfoTimeoutInfo of type Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_2
 *   ComM_ErrResBMSErrInfoTimeoutInfo of type Rte_DT_dt_ComM_BMSErrInfoTimeoutInfo_3
 * dt_ComM_BMSSts01CRCDTCInfo: Record with elements
 *   ComM_MonStatBMSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_0
 *   ComM_MonResBMSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_1
 *   ComM_ErrStatBMSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_2
 *   ComM_ErrResBMSSts01CRCDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCDTCInfo_3
 * dt_ComM_BMSSts01CRCInfo: Record with elements
 *   ComM_MonStatBMSSts01CRCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCInfo_0
 *   ComM_MonResBMSSts01CRCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCInfo_1
 *   ComM_ErrStatBMSSts01CRCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCInfo_2
 *   ComM_ErrResBMSSts01CRCErrorInfo of type Rte_DT_dt_ComM_BMSSts01CRCInfo_3
 * dt_ComM_BMSSts01E2ETimeoutInfo: Record with elements
 *   ComM_MonStatBMSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_0
 *   ComM_MonResBMSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_1
 *   ComM_ErrStatBMSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_2
 *   ComM_ErrResBMSSts01E2ETimeoutInfo of type Rte_DT_dt_ComM_BMSSts01E2ETimeoutInfo_3
 * dt_ComM_BMSSts01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatBMSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_0
 *   ComM_MonResBMSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_1
 *   ComM_ErrStatBMSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_2
 *   ComM_ErrResBMSSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutDTCInfo_3
 * dt_ComM_BMSSts01TimeoutInfo: Record with elements
 *   ComM_MonStatBMSSts01TimeoutInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutInfo_0
 *   ComM_MonResBMSSts01TimeoutInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutInfo_1
 *   ComM_ErrStatBMSSts01TimeoutInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutInfo_2
 *   ComM_ErrResBMSSts01TimeoutInfo of type Rte_DT_dt_ComM_BMSSts01TimeoutInfo_3
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
 * dt_ComM_PODSts01TimeoutInfo: Record with elements
 *   ComM_MonStatPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_0
 *   ComM_MonResPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_1
 *   ComM_ErrStatPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_2
 *   ComM_ErrResPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_3
 * dt_DCChrMgmt_BEMRxCCSTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCCSTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_0
 *   DCChrMgmt_MonResBEMRxCCSTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_1
 *   DCChrMgmt_ErrStatBEMRxCCSTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_2
 *   DCChrMgmt_ErrResBEMRxCCSTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmt_3
 * dt_DCChrMgmt_BEMRxCCSTmtDTC: Record with elements
 *   DCChrMgmt_MonStatBEMRxCCSTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_0
 *   DCChrMgmt_MonResBEMRxCCSTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_1
 *   DCChrMgmt_ErrStatBEMRxCCSTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_2
 *   DCChrMgmt_ErrResBEMRxCCSTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCCSTmtDTC_3
 * dt_DCChrMgmt_BEMRxCMLTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCMLTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_0
 *   DCChrMgmt_MonResBEMRxCMLTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_1
 *   DCChrMgmt_ErrStatBEMRxCMLTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_2
 *   DCChrMgmt_ErrResBEMRxCMLTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmt_3
 * dt_DCChrMgmt_BEMRxCMLTmtDTC: Record with elements
 *   DCChrMgmt_MonStatBEMRxCMLTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_0
 *   DCChrMgmt_MonResBEMRxCMLTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_1
 *   DCChrMgmt_ErrStatBEMRxCMLTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_2
 *   DCChrMgmt_ErrResBEMRxCMLTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCMLTmtDTC_3
 * dt_DCChrMgmt_BEMRxCRMPrepdTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCRMPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_0
 *   DCChrMgmt_MonResBEMRxCRMPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_1
 *   DCChrMgmt_ErrStatBEMRxCRMPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_2
 *   DCChrMgmt_ErrResBEMRxCRMPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmt_3
 * dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC: Record with elements
 *   DCChrMgmt_MonStatBEMRxCRMPrepdTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_0
 *   DCChrMgmt_MonResBEMRxCRMPrepdTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_1
 *   DCChrMgmt_ErrStatBEMRxCRMPrepdTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_2
 *   DCChrMgmt_ErrResBEMRxCRMPrepdTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC_3
 * dt_DCChrMgmt_BEMRxCRMTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCRMTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_0
 *   DCChrMgmt_MonResBEMRxCRMTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_1
 *   DCChrMgmt_ErrStatBEMRxCRMTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_2
 *   DCChrMgmt_ErrResBEMRxCRMTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmt_3
 * dt_DCChrMgmt_BEMRxCRMTmtDTC: Record with elements
 *   DCChrMgmt_MonStatBEMRxCRMTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_0
 *   DCChrMgmt_MonResBEMRxCRMTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_1
 *   DCChrMgmt_ErrStatBEMRxCRMTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_2
 *   DCChrMgmt_ErrResBEMRxCRMTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCRMTmtDTC_3
 * dt_DCChrMgmt_BEMRxCROPrepdTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCROPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_0
 *   DCChrMgmt_MonResBEMRxCROPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_1
 *   DCChrMgmt_ErrStatBEMRxCROPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_2
 *   DCChrMgmt_ErrResBEMRxCROPrepdTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmt_3
 * dt_DCChrMgmt_BEMRxCROPrepdTmtDTC: Record with elements
 *   DCChrMgmt_MonStatBEMRxCROPrepdTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_0
 *   DCChrMgmt_MonResBEMRxCROPrepdTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_1
 *   DCChrMgmt_ErrStatBEMRxCROPrepdTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_2
 *   DCChrMgmt_ErrResBEMRxCROPrepdTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCROPrepdTmtDTC_3
 * dt_DCChrMgmt_BEMRxCROTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCROTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_0
 *   DCChrMgmt_MonResBEMRxCROTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_1
 *   DCChrMgmt_ErrStatBEMRxCROTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_2
 *   DCChrMgmt_ErrResBEMRxCROTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmt_3
 * dt_DCChrMgmt_BEMRxCROTmtDTC: Record with elements
 *   DCChrMgmt_MonStatBEMRxCROTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_0
 *   DCChrMgmt_MonResBEMRxCROTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_1
 *   DCChrMgmt_ErrStatBEMRxCROTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_2
 *   DCChrMgmt_ErrResBEMRxCROTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCROTmtDTC_3
 * dt_DCChrMgmt_BEMRxCSDTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCSDTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_0
 *   DCChrMgmt_MonResBEMRxCSDTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_1
 *   DCChrMgmt_ErrStatBEMRxCSDTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_2
 *   DCChrMgmt_ErrResBEMRxCSDTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmt_3
 * dt_DCChrMgmt_BEMRxCSDTmtDTC: Record with elements
 *   DCChrMgmt_MonStatBEMRxCSDTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_0
 *   DCChrMgmt_MonResBEMRxCSDTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_1
 *   DCChrMgmt_ErrStatBEMRxCSDTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_2
 *   DCChrMgmt_ErrResBEMRxCSDTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCSDTmtDTC_3
 * dt_DCChrMgmt_BEMRxCSTTmt: Record with elements
 *   DCChrMgmt_MonStatBEMRxCSTTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_0
 *   DCChrMgmt_MonResBEMRxCSTTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_1
 *   DCChrMgmt_ErrStatBEMRxCSTTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_2
 *   DCChrMgmt_ErrResBEMRxCSTTmt of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmt_3
 * dt_DCChrMgmt_BEMRxCSTTmtDTC: Record with elements
 *   DCChrMgmt_MonStatBEMRxCSTTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_0
 *   DCChrMgmt_MonResBEMRxCSTTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_1
 *   DCChrMgmt_ErrStatBEMRxCSTTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_2
 *   DCChrMgmt_ErrResBEMRxCSTTmtDTC of type Rte_DT_dt_DCChrMgmt_BEMRxCSTTmtDTC_3
 * dt_DCChrMgmt_DcPortTempErrLvl1: Record with elements
 *   DCChrMgmt_MonStatDcPortTempErrLvl1 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_0
 *   DCChrMgmt_MonResDcPortTempErrLvl1 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_1
 *   DCChrMgmt_ErrStatDcPortTempErrLvl1 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_2
 *   DCChrMgmt_ErrResDcPortTempErrLvl1 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1_3
 * dt_DCChrMgmt_DcPortTempErrLvl1DTC: Record with elements
 *   DCChrMgmt_MonStatDcPortTempErrLvl1DTC of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_0
 *   DCChrMgmt_MonResDcPortTempErrLvl1DTC of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_1
 *   DCChrMgmt_ErrStatDcPortTempErrLvl1DTC of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_2
 *   DCChrMgmt_ErrResDcPortTempErrLvl1DTC of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl1DTC_3
 * dt_DCChrMgmt_DcPortTempErrLvl2: Record with elements
 *   DCChrMgmt_MonStatDcPortTempErrLvl2 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_0
 *   DCChrMgmt_MonResDcPortTempErrLvl2 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_1
 *   DCChrMgmt_ErrStatDcPortTempErrLvl2 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_2
 *   DCChrMgmt_ErrResDcPortTempErrLvl2 of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2_3
 * dt_DCChrMgmt_DcPortTempErrLvl2DTC: Record with elements
 *   DCChrMgmt_MonStatDcPortTempErrLvl2DTC of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_0
 *   DCChrMgmt_MonResDcPortTempErrLvl2DTC of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_1
 *   DCChrMgmt_ErrStatDcPortTempErrLvl2DTC of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_2
 *   DCChrMgmt_ErrResDcPortTempErrLvl2DTC of type Rte_DT_dt_DCChrMgmt_DcPortTempErrLvl2DTC_3
 * dt_DCChrMgmt_DcPortTempSnsrErr: Record with elements
 *   DCChrMgmt_MonStatDcPortTempSnsrErr of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_0
 *   DCChrMgmt_MonResDcPortTempSnsrErr of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_1
 *   DCChrMgmt_ErrStatDcPortTempSnsrErr of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_2
 *   DCChrMgmt_ErrResDcPortTempSnsrErr of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErr_3
 * dt_DCChrMgmt_DcPortTempSnsrErrDTC: Record with elements
 *   DCChrMgmt_MonStatDcPortTempSnsrErrDTC of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_0
 *   DCChrMgmt_MonResDcPortTempSnsrErrDTC of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_1
 *   DCChrMgmt_ErrStatDcPortTempSnsrErrDTC of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_2
 *   DCChrMgmt_ErrResDcPortTempSnsrErrDTC of type Rte_DT_dt_DCChrMgmt_DcPortTempSnsrErrDTC_3
 *
 *********************************************************************************************************************/


#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgComM_Cyclic_50ms
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
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus(dt_ComM_BMSErrInfoTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus(dt_ComM_BMSSts01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus(dt_ComM_DCCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C(sint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C(sint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(float32 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus(dt_ComM_PODSts01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum(uint8 *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV(uint16 *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_Bus_tec_DCChrMgmt_BEMRxCCSTmtDTC_Bus(const dt_DCChrMgmt_BEMRxCCSTmtDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus(const dt_DCChrMgmt_BEMRxCCSTmt *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_Bus_tec_DCChrMgmt_BEMRxCMLTmtDTC_Bus(const dt_DCChrMgmt_BEMRxCMLTmtDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus(const dt_DCChrMgmt_BEMRxCMLTmt *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus(const dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus(const dt_DCChrMgmt_BEMRxCRMPrepdTmt *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMTmtDTC_Bus(const dt_DCChrMgmt_BEMRxCRMTmtDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus(const dt_DCChrMgmt_BEMRxCRMTmt *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus(const dt_DCChrMgmt_BEMRxCROPrepdTmtDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus(const dt_DCChrMgmt_BEMRxCROPrepdTmt *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCROTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROTmtDTC_Bus(const dt_DCChrMgmt_BEMRxCROTmtDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus(const dt_DCChrMgmt_BEMRxCROTmt *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSDTmtDTC_Bus(const dt_DCChrMgmt_BEMRxCSDTmtDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus(const dt_DCChrMgmt_BEMRxCSDTmt *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSTTmtDTC_Bus(const dt_DCChrMgmt_BEMRxCSTTmtDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus(const dt_DCChrMgmt_BEMRxCSTTmt *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum(uint8 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl1DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl1DTC_Bus(const dt_DCChrMgmt_DcPortTempErrLvl1DTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus(const dt_DCChrMgmt_DcPortTempErrLvl1 *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl2DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl2DTC_Bus(const dt_DCChrMgmt_DcPortTempErrLvl2DTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus(const dt_DCChrMgmt_DcPortTempErrLvl2 *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcPortTempSnsrErrDTC_Bus_tec_DCChrMgmt_DcPortTempSnsrErrDTC_Bus(const dt_DCChrMgmt_DcPortTempSnsrErrDTC *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus(const dt_DCChrMgmt_DcPortTempSnsrErr *data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A(float32 data)
 *   Std_ReturnType Rte_Write_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgComM_Cyclic_50ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgComM_CODE) R_ChrgComM_Cyclic_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgComM_Cyclic_50ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ChrgComM_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgComM_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ChrgComM_CODE) R_ChrgComM_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ChrgComM_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
