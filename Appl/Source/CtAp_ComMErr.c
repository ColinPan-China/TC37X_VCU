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
 *             File:  CtAp_ComMErr.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  CtAp_ComMErr
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <CtAp_ComMErr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CtAp_ComMErr.h"


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
 * Rte_DT_dt_ComM_ACU01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACU02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACU02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_ACU02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACU02TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ACUInfoTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_ACUInfoTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ACUInfoTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUDACRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUDACRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUDACRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUDACRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_APTCTCUTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_APTCTCUTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_APTCTCUTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_APTCTCUTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM05CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM05CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM05CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM05CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM06CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM06CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BCM06TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BCM06TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BCM06TimeoutInfo_3: Boolean
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
 * Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_BMSSts02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_BMSSts02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_BMSSts02TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_CGW01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_CGW01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_CGW01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_CGW01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_CGW01TimeoutInfo_3: Boolean
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
 * Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMFL02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFL02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFL02TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMFRTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMFRTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFRTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMFRTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMRLTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMRLTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRLTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRLTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_DCMRRTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_DCMRRTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRRTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_DCMRRTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_0: Boolean
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EPTCANBusOffInfo_3: Boolean
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSACCCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSACCCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSACCCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSACCCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_3: Boolean
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
 * Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts02CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts02CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_3: Boolean
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
 * Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts04CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts04CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts05CRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05CRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05CRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05CRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts05TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts05TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts05TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSTqCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSTqCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSTqCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSTqCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_3: Boolean
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
 * Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PODSts01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDCRCDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDCRCDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDCRCDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDCRCDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDCRCInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDCRCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDCRCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDCRCInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_PRNDTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_PRNDTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_PRNDTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_SGW16TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_SGW16TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW16TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW16TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_SGW17TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_SGW17TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW17TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGW17TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_SGWPT01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_SGWPT01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWPT01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWPT01TimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_SGWTimTimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_SGWTimTimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWTimTimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_SGWTimTimeoutInfo_3: Boolean
 * Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_0: Boolean
 * Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_3: Boolean
 * Rte_DT_dt_ComM_TCU01TimeoutInfo_0: Boolean
 * Rte_DT_dt_ComM_TCU01TimeoutInfo_1: Integer in interval [0...255]
 * Rte_DT_dt_ComM_TCU01TimeoutInfo_2: Integer in interval [0...255]
 * Rte_DT_dt_ComM_TCU01TimeoutInfo_3: Boolean
 * boolean: Boolean (standard type)
 *
 * Record Types:
 * =============
 * dt_ComM_ACU01CRCDTCInfo: Record with elements
 *   ComM_MonStatACU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU01CRCDTCInfo_0
 *   ComM_MonResACU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU01CRCDTCInfo_1
 *   ComM_ErrStatACU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU01CRCDTCInfo_2
 *   ComM_ErrResACU01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU01CRCDTCInfo_3
 * dt_ComM_ACU01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatACU01TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_0
 *   ComM_MonResACU01TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_1
 *   ComM_ErrStatACU01TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_2
 *   ComM_ErrResACU01TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU01TimeoutDTCInfo_3
 * dt_ComM_ACU02CRCDTCInfo: Record with elements
 *   ComM_MonStatACU02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU02CRCDTCInfo_0
 *   ComM_MonResACU02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU02CRCDTCInfo_1
 *   ComM_ErrStatACU02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU02CRCDTCInfo_2
 *   ComM_ErrResACU02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ACU02CRCDTCInfo_3
 * dt_ComM_ACU02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatACU02TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_0
 *   ComM_MonResACU02TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_1
 *   ComM_ErrStatACU02TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_2
 *   ComM_ErrResACU02TimeoutDTCInfo of type Rte_DT_dt_ComM_ACU02TimeoutDTCInfo_3
 * dt_ComM_ACU02TimeoutInfo: Record with elements
 *   ComM_MonStatACU02TimeoutInfo of type Rte_DT_dt_ComM_ACU02TimeoutInfo_0
 *   ComM_MonResACU02TimeoutInfo of type Rte_DT_dt_ComM_ACU02TimeoutInfo_1
 *   ComM_ErrStatACU02TimeoutInfo of type Rte_DT_dt_ComM_ACU02TimeoutInfo_2
 *   ComM_ErrResACU02TimeoutInfo of type Rte_DT_dt_ComM_ACU02TimeoutInfo_3
 * dt_ComM_ACUInfoCRCDTCInfo: Record with elements
 *   ComM_MonStatACUInfoCRCDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_0
 *   ComM_MonResACUInfoCRCDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_1
 *   ComM_ErrStatACUInfoCRCDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_2
 *   ComM_ErrResACUInfoCRCDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoCRCDTCInfo_3
 * dt_ComM_ACUInfoTimeoutDTCInfo: Record with elements
 *   ComM_MonStatACUInfoTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_0
 *   ComM_MonResACUInfoTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_1
 *   ComM_ErrStatACUInfoTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_2
 *   ComM_ErrResACUInfoTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutDTCInfo_3
 * dt_ComM_ACUInfoTimeoutInfo: Record with elements
 *   ComM_MonStatACUInfoTimeoutInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutInfo_0
 *   ComM_MonResACUInfoTimeoutInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutInfo_1
 *   ComM_ErrStatACUInfoTimeoutInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutInfo_2
 *   ComM_ErrResACUInfoTimeoutInfo of type Rte_DT_dt_ComM_ACUInfoTimeoutInfo_3
 * dt_ComM_ADCUACC02CRCDTCInfo: Record with elements
 *   ComM_MonStatADCUACC02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_0
 *   ComM_MonResADCUACC02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_1
 *   ComM_ErrStatADCUACC02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_2
 *   ComM_ErrResADCUACC02CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02CRCDTCInfo_3
 * dt_ComM_ADCUACC02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUACC02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_0
 *   ComM_MonResADCUACC02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_1
 *   ComM_ErrStatADCUACC02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_2
 *   ComM_ErrResADCUACC02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutDTCInfo_3
 * dt_ComM_ADCUACC02TimeoutInfo: Record with elements
 *   ComM_MonStatADCUACC02TimeoutInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_0
 *   ComM_MonResADCUACC02TimeoutInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_1
 *   ComM_ErrStatADCUACC02TimeoutInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_2
 *   ComM_ErrResADCUACC02TimeoutInfo of type Rte_DT_dt_ComM_ADCUACC02TimeoutInfo_3
 * dt_ComM_ADCUAEB01CRCDTCInfo: Record with elements
 *   ComM_MonStatADCUAEB01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_0
 *   ComM_MonResADCUAEB01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_1
 *   ComM_ErrStatADCUAEB01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_2
 *   ComM_ErrResADCUAEB01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01CRCDTCInfo_3
 * dt_ComM_ADCUAEB01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUAEB01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_0
 *   ComM_MonResADCUAEB01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_1
 *   ComM_ErrStatADCUAEB01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_2
 *   ComM_ErrResADCUAEB01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAEB01TimeoutDTCInfo_3
 * dt_ComM_ADCUAPS01CRCDTCInfo: Record with elements
 *   ComM_MonStatADCUAPS01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_0
 *   ComM_MonResADCUAPS01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_1
 *   ComM_ErrStatADCUAPS01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_2
 *   ComM_ErrResADCUAPS01CRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01CRCDTCInfo_3
 * dt_ComM_ADCUAPS01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUAPS01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_0
 *   ComM_MonResADCUAPS01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_1
 *   ComM_ErrStatADCUAPS01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_2
 *   ComM_ErrResADCUAPS01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUAPS01TimeoutDTCInfo_3
 * dt_ComM_ADCUBodyReqCRCDTCInfo: Record with elements
 *   ComM_MonStatADCUBodyReqCRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_0
 *   ComM_MonResADCUBodyReqCRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_1
 *   ComM_ErrStatADCUBodyReqCRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_2
 *   ComM_ErrResADCUBodyReqCRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqCRCDTCInfo_3
 * dt_ComM_ADCUBodyReqTimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUBodyReqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_0
 *   ComM_MonResADCUBodyReqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_1
 *   ComM_ErrStatADCUBodyReqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_2
 *   ComM_ErrResADCUBodyReqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUBodyReqTimeoutDTCInfo_3
 * dt_ComM_ADCUDACRCDTCInfo: Record with elements
 *   ComM_MonStatADCUDACRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDACRCDTCInfo_0
 *   ComM_MonResADCUDACRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDACRCDTCInfo_1
 *   ComM_ErrStatADCUDACRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDACRCDTCInfo_2
 *   ComM_ErrResADCUDACRCDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDACRCDTCInfo_3
 * dt_ComM_ADCUDATimeoutDTCInfo: Record with elements
 *   ComM_MonStatADCUDATimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_0
 *   ComM_MonResADCUDATimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_1
 *   ComM_ErrStatADCUDATimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_2
 *   ComM_ErrResADCUDATimeoutDTCErrorInfo of type Rte_DT_dt_ComM_ADCUDATimeoutDTCInfo_3
 * dt_ComM_APTCTCUTimeoutDTCInfo: Record with elements
 *   ComM_MonStatAPTCTCUTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_0
 *   ComM_MonResAPTCTCUTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_1
 *   ComM_ErrStatAPTCTCUTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_2
 *   ComM_ErrResAPTCTCUTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutDTCInfo_3
 * dt_ComM_APTCTCUTimeoutInfo: Record with elements
 *   ComM_MonStatAPTCTCUTimeoutInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutInfo_0
 *   ComM_MonResAPTCTCUTimeoutInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutInfo_1
 *   ComM_ErrStatAPTCTCUTimeoutInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutInfo_2
 *   ComM_ErrResAPTCTCUTimeoutInfo of type Rte_DT_dt_ComM_APTCTCUTimeoutInfo_3
 * dt_ComM_BCM05CRCDTCInfo: Record with elements
 *   ComM_MonStatBCM05CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM05CRCDTCInfo_0
 *   ComM_MonResBCM05CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM05CRCDTCInfo_1
 *   ComM_ErrStatBCM05CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM05CRCDTCInfo_2
 *   ComM_ErrResBCM05CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM05CRCDTCInfo_3
 * dt_ComM_BCM05TimeoutDTCInfo: Record with elements
 *   ComM_MonStatBCM05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_0
 *   ComM_MonResBCM05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_1
 *   ComM_ErrStatBCM05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_2
 *   ComM_ErrResBCM05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM05TimeoutDTCInfo_3
 * dt_ComM_BCM06CRCDTCInfo: Record with elements
 *   ComM_MonStatBCM06CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM06CRCDTCInfo_0
 *   ComM_MonResBCM06CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM06CRCDTCInfo_1
 *   ComM_ErrStatBCM06CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM06CRCDTCInfo_2
 *   ComM_ErrResBCM06CRCDTCErrorInfo of type Rte_DT_dt_ComM_BCM06CRCDTCInfo_3
 * dt_ComM_BCM06TimeoutDTCInfo: Record with elements
 *   ComM_MonStatBCM06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_0
 *   ComM_MonResBCM06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_1
 *   ComM_ErrStatBCM06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_2
 *   ComM_ErrResBCM06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BCM06TimeoutDTCInfo_3
 * dt_ComM_BCM06TimeoutInfo: Record with elements
 *   ComM_MonStatBCM06TimeoutInfo of type Rte_DT_dt_ComM_BCM06TimeoutInfo_0
 *   ComM_MonResBCM06TimeoutInfo of type Rte_DT_dt_ComM_BCM06TimeoutInfo_1
 *   ComM_ErrStatBCM06TimeoutInfo of type Rte_DT_dt_ComM_BCM06TimeoutInfo_2
 *   ComM_ErrResBCM06TimeoutInfo of type Rte_DT_dt_ComM_BCM06TimeoutInfo_3
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
 * dt_ComM_BMSSts02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatBMSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_0
 *   ComM_MonResBMSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_1
 *   ComM_ErrStatBMSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_2
 *   ComM_ErrResBMSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutDTCInfo_3
 * dt_ComM_BMSSts02TimeoutInfo: Record with elements
 *   ComM_MonStatBMSSts02TimeoutInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutInfo_0
 *   ComM_MonResBMSSts02TimeoutInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutInfo_1
 *   ComM_ErrStatBMSSts02TimeoutInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutInfo_2
 *   ComM_ErrResBMSSts02TimeoutInfo of type Rte_DT_dt_ComM_BMSSts02TimeoutInfo_3
 * dt_ComM_CGW01CRCDTCInfo: Record with elements
 *   ComM_MonStatCGW01CRCDTCErrorInfo of type Rte_DT_dt_ComM_CGW01CRCDTCInfo_0
 *   ComM_MonResCGW01CRCDTCErrorInfo of type Rte_DT_dt_ComM_CGW01CRCDTCInfo_1
 *   ComM_ErrStatCGW01CRCDTCErrorInfo of type Rte_DT_dt_ComM_CGW01CRCDTCInfo_2
 *   ComM_ErrResCGW01ACRCDTCErrorInfo of type Rte_DT_dt_ComM_CGW01CRCDTCInfo_3
 * dt_ComM_CGW01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatCGW01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_0
 *   ComM_MonResCGW01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_1
 *   ComM_ErrStatCGW01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_2
 *   ComM_ErrResCGW01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_CGW01TimeoutDTCInfo_3
 * dt_ComM_CGW01TimeoutInfo: Record with elements
 *   ComM_MonStatCGW01TimeoutInfo of type Rte_DT_dt_ComM_CGW01TimeoutInfo_0
 *   ComM_MonResCGW01TimeoutInfo of type Rte_DT_dt_ComM_CGW01TimeoutInfo_1
 *   ComM_ErrStatCGW01TimeoutInfo of type Rte_DT_dt_ComM_CGW01TimeoutInfo_2
 *   ComM_ErrResCGW01TimeoutInfo of type Rte_DT_dt_ComM_CGW01TimeoutInfo_3
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
 * dt_ComM_DCMFL02CRCDTCInfo: Record with elements
 *   ComM_MonStatDCMFL02CRCDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_0
 *   ComM_MonResDCMFL02CRCDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_1
 *   ComM_ErrStatDCMFL02CRCDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_2
 *   ComM_ErrResDCMFL02CRCDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02CRCDTCInfo_3
 * dt_ComM_DCMFL02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatDCMFL02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_0
 *   ComM_MonResDCMFL02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_1
 *   ComM_ErrStatDCMFL02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_2
 *   ComM_ErrResDCMFL02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutDTCInfo_3
 * dt_ComM_DCMFL02TimeoutInfo: Record with elements
 *   ComM_MonStatDCMFL02TimeoutInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutInfo_0
 *   ComM_MonResDCMFL02TimeoutInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutInfo_1
 *   ComM_ErrStatDCMFL02TimeoutInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutInfo_2
 *   ComM_ErrResDCMFL02TimeoutInfo of type Rte_DT_dt_ComM_DCMFL02TimeoutInfo_3
 * dt_ComM_DCMFRTimeoutDTCInfo: Record with elements
 *   ComM_MonStatDCMFRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_0
 *   ComM_MonResDCMFRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_1
 *   ComM_ErrStatDCMFRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_2
 *   ComM_ErrResDCMFRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMFRTimeoutDTCInfo_3
 * dt_ComM_DCMFRTimeoutInfo: Record with elements
 *   ComM_MonStatDCMFRTimeoutInfo of type Rte_DT_dt_ComM_DCMFRTimeoutInfo_0
 *   ComM_MonResDCMFRTimeoutInfo of type Rte_DT_dt_ComM_DCMFRTimeoutInfo_1
 *   ComM_ErrStatDCMFRTimeoutInfo of type Rte_DT_dt_ComM_DCMFRTimeoutInfo_2
 *   ComM_ErrResDCMFRTimeoutInfo of type Rte_DT_dt_ComM_DCMFRTimeoutInfo_3
 * dt_ComM_DCMRLTimeoutDTCInfo: Record with elements
 *   ComM_MonStatDCMRLTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_0
 *   ComM_MonResDCMRLTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_1
 *   ComM_ErrStatDCMRLTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_2
 *   ComM_ErrResDCMRLTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRLTimeoutDTCInfo_3
 * dt_ComM_DCMRLTimeoutInfo: Record with elements
 *   ComM_MonStatDCMRLTimeoutInfo of type Rte_DT_dt_ComM_DCMRLTimeoutInfo_0
 *   ComM_MonResDCMRLTimeoutInfo of type Rte_DT_dt_ComM_DCMRLTimeoutInfo_1
 *   ComM_ErrStatDCMRLTimeoutInfo of type Rte_DT_dt_ComM_DCMRLTimeoutInfo_2
 *   ComM_ErrResDCMRLTimeoutInfo of type Rte_DT_dt_ComM_DCMRLTimeoutInfo_3
 * dt_ComM_DCMRRTimeoutDTCInfo: Record with elements
 *   ComM_MonStatDCMRRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_0
 *   ComM_MonResDCMRRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_1
 *   ComM_ErrStatDCMRRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_2
 *   ComM_ErrResDCMRRTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_DCMRRTimeoutDTCInfo_3
 * dt_ComM_DCMRRTimeoutInfo: Record with elements
 *   ComM_MonStatDCMRRTimeoutInfo of type Rte_DT_dt_ComM_DCMRRTimeoutInfo_0
 *   ComM_MonResDCMRRTimeoutInfo of type Rte_DT_dt_ComM_DCMRRTimeoutInfo_1
 *   ComM_ErrStatDCMRRTimeoutInfo of type Rte_DT_dt_ComM_DCMRRTimeoutInfo_2
 *   ComM_ErrResDCMRRTimeoutInfo of type Rte_DT_dt_ComM_DCMRRTimeoutInfo_3
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
 * dt_ComM_EVCOMSts01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatEVCOMSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_0
 *   ComM_MonResEVCOMSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_1
 *   ComM_ErrStatEVCOMSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_2
 *   ComM_ErrResEVCOMSts01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutDTCInfo_3
 * dt_ComM_EVCOMSts01TimeoutInfo: Record with elements
 *   ComM_MonStatEVCOMSts01TimeoutInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_0
 *   ComM_MonResEVCOMSts01TimeoutInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_1
 *   ComM_ErrStatEVCOMSts01TimeoutInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_2
 *   ComM_ErrResEVCOMSts01TimeoutInfo of type Rte_DT_dt_ComM_EVCOMSts01TimeoutInfo_3
 * dt_ComM_IBSACCCRCDTCInfo: Record with elements
 *   ComM_MonStatIBSACCCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCDTCInfo_0
 *   ComM_MonResIBSACCCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCDTCInfo_1
 *   ComM_ErrStatIBSACCCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCDTCInfo_2
 *   ComM_ErrResIBSACCCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCDTCInfo_3
 * dt_ComM_IBSACCCRCInfo: Record with elements
 *   ComM_MonStatIBSACCCRCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCInfo_0
 *   ComM_MonResIBSACCCRCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCInfo_1
 *   ComM_ErrStatIBSACCCRCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCInfo_2
 *   ComM_ErrResIBSACCCRCErrorInfo of type Rte_DT_dt_ComM_IBSACCCRCInfo_3
 * dt_ComM_IBSACCE2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSACCE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_0
 *   ComM_MonResIBSACCE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_1
 *   ComM_ErrStatIBSACCE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_2
 *   ComM_ErrResIBSACCE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSACCE2ETimeoutInfo_3
 * dt_ComM_IBSACCTimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSACCTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_0
 *   ComM_MonResIBSACCTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_1
 *   ComM_ErrStatIBSACCTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_2
 *   ComM_ErrResIBSACCTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSACCTimeoutDTCInfo_3
 * dt_ComM_IBSAPSCRCDTCInfo: Record with elements
 *   ComM_MonStatIBSAPSCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_0
 *   ComM_MonResIBSAPSCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_1
 *   ComM_ErrStatIBSAPSCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_2
 *   ComM_ErrResIBSAPSCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSCRCDTCInfo_3
 * dt_ComM_IBSAPSTimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSAPSTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_0
 *   ComM_MonResIBSAPSTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_1
 *   ComM_ErrStatIBSAPSTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_2
 *   ComM_ErrResIBSAPSTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSAPSTimeoutDTCInfo_3
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
 * dt_ComM_IBSSts02CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_0
 *   ComM_MonResIBSSts02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_1
 *   ComM_ErrStatIBSSts02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_2
 *   ComM_ErrResIBSSts02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCDTCInfo_3
 * dt_ComM_IBSSts02CRCInfo: Record with elements
 *   ComM_MonStatIBSSts02CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCInfo_0
 *   ComM_MonResIBSSts02CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCInfo_1
 *   ComM_ErrStatIBSSts02CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCInfo_2
 *   ComM_ErrResIBSSts02CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts02CRCInfo_3
 * dt_ComM_IBSSts02E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts02E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_0
 *   ComM_MonResIBSSts02E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts02E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts02E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts02E2ETimeoutInfo_3
 * dt_ComM_IBSSts02TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_0
 *   ComM_MonResIBSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts02TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts02TimeoutDTCInfo_3
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
 * dt_ComM_IBSSts04CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts04CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_0
 *   ComM_MonResIBSSts04CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_1
 *   ComM_ErrStatIBSSts04CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_2
 *   ComM_ErrResIBSSts04CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCDTCInfo_3
 * dt_ComM_IBSSts04CRCInfo: Record with elements
 *   ComM_MonStatIBSSts04CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCInfo_0
 *   ComM_MonResIBSSts04CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCInfo_1
 *   ComM_ErrStatIBSSts04CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCInfo_2
 *   ComM_ErrResIBSSts04CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts04CRCInfo_3
 * dt_ComM_IBSSts04E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts04E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_0
 *   ComM_MonResIBSSts04E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts04E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts04E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts04E2ETimeoutInfo_3
 * dt_ComM_IBSSts04TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts04TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_0
 *   ComM_MonResIBSSts04TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts04TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts04TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts04TimeoutDTCInfo_3
 * dt_ComM_IBSSts05CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts05CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_0
 *   ComM_MonResIBSSts05CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_1
 *   ComM_ErrStatIBSSts05CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_2
 *   ComM_ErrResIBSSts05CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCDTCInfo_3
 * dt_ComM_IBSSts05CRCInfo: Record with elements
 *   ComM_MonStatIBSSts05CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCInfo_0
 *   ComM_MonResIBSSts05CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCInfo_1
 *   ComM_ErrStatIBSSts05CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCInfo_2
 *   ComM_ErrResIBSSts05CRCErrorInfo of type Rte_DT_dt_ComM_IBSSts05CRCInfo_3
 * dt_ComM_IBSSts05E2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts05E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_0
 *   ComM_MonResIBSSts05E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_1
 *   ComM_ErrStatIBSSts05E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_2
 *   ComM_ErrResIBSSts05E2ETimeoutInfo of type Rte_DT_dt_ComM_IBSSts05E2ETimeoutInfo_3
 * dt_ComM_IBSSts05TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_0
 *   ComM_MonResIBSSts05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts05TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutDTCInfo_3
 * dt_ComM_IBSSts05TimeoutInfo: Record with elements
 *   ComM_MonStatIBSSts05TimeoutInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutInfo_0
 *   ComM_MonResIBSSts05TimeoutInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutInfo_1
 *   ComM_ErrStatIBSSts05TimeoutInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutInfo_2
 *   ComM_ErrResIBSSts05TimeoutInfo of type Rte_DT_dt_ComM_IBSSts05TimeoutInfo_3
 * dt_ComM_IBSSts06CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSSts06CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_0
 *   ComM_MonResIBSSts06CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_1
 *   ComM_ErrStatIBSSts06CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_2
 *   ComM_ErrResIBSSts06CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06CRCDTCInfo_3
 * dt_ComM_IBSSts06TimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSSts06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_0
 *   ComM_MonResIBSSts06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_1
 *   ComM_ErrStatIBSSts06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_2
 *   ComM_ErrResIBSSts06TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSSts06TimeoutDTCInfo_3
 * dt_ComM_IBSTqCRCDTCInfo: Record with elements
 *   ComM_MonStatIBSTqCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCDTCInfo_0
 *   ComM_MonResIBSTqCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCDTCInfo_1
 *   ComM_ErrStatIBSTqCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCDTCInfo_2
 *   ComM_ErrResIBSTqCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCDTCInfo_3
 * dt_ComM_IBSTqCRCInfo: Record with elements
 *   ComM_MonStatIBSTqCRCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCInfo_0
 *   ComM_MonResIBSTqCRCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCInfo_1
 *   ComM_ErrStatIBSTqCRCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCInfo_2
 *   ComM_ErrResIBSTqCRCErrorInfo of type Rte_DT_dt_ComM_IBSTqCRCInfo_3
 * dt_ComM_IBSTqE2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSTqE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_0
 *   ComM_MonResIBSTqE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_1
 *   ComM_ErrStatIBSTqE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_2
 *   ComM_ErrResIBSTqE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSTqE2ETimeoutInfo_3
 * dt_ComM_IBSTqTimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSTqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_0
 *   ComM_MonResIBSTqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_1
 *   ComM_ErrStatIBSTqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_2
 *   ComM_ErrResIBSTqTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSTqTimeoutDTCInfo_3
 * dt_ComM_IBSVCUMotCtrlCRCDTCInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_0
 *   ComM_MonResIBSVCUMotCtrlCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_2
 *   ComM_ErrResIBSVCUMotCtrlCRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCDTCInfo_3
 * dt_ComM_IBSVCUMotCtrlCRCInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlCRCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_0
 *   ComM_MonResIBSVCUMotCtrlCRCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlCRCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_2
 *   ComM_ErrResIBSVCUMotCtrlCRCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlCRCInfo_3
 * dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_0
 *   ComM_MonResIBSVCUMotCtrlE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_2
 *   ComM_ErrResIBSVCUMotCtrlE2ETimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo_3
 * dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_0
 *   ComM_MonResIBSVCUMotCtrlTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_2
 *   ComM_ErrResIBSVCUMotCtrlTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo_3
 * dt_ComM_IBSVCUMotCtrlTimeoutInfo: Record with elements
 *   ComM_MonStatIBSVCUMotCtrlTimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_0
 *   ComM_MonResIBSVCUMotCtrlTimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_1
 *   ComM_ErrStatIBSVCUMotCtrlTimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_2
 *   ComM_ErrResIBSVCUMotCtrlTimeoutInfo of type Rte_DT_dt_ComM_IBSVCUMotCtrlTimeoutInfo_3
 * dt_ComM_IBSWhlSpd01CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSWhlSpd01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_0
 *   ComM_MonResIBSWhlSpd01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_1
 *   ComM_ErrStatIBSWhlSpd01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_2
 *   ComM_ErrResIBSWhlSpd01CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd01CRCDTCInfo_3
 * dt_ComM_IBSWhlSpd01TimeoutInfo: Record with elements
 *   ComM_MonStatIBSWhlSpd01TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_0
 *   ComM_MonResIBSWhlSpd01TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_1
 *   ComM_ErrStatIBSWhlSpd01TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_2
 *   ComM_ErrResIBSWhlSpd01TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd01TimeoutInfo_3
 * dt_ComM_IBSWhlSpd02CRCDTCInfo: Record with elements
 *   ComM_MonStatIBSWhlSpd02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_0
 *   ComM_MonResIBSWhlSpd02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_1
 *   ComM_ErrStatIBSWhlSpd02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_2
 *   ComM_ErrResIBSWhlSpd02CRCDTCErrorInfo of type Rte_DT_dt_ComM_IBSWhlSpd02CRCDTCInfo_3
 * dt_ComM_IBSWhlSpd02TimeoutInfo: Record with elements
 *   ComM_MonStatIBSWhlSpd02TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_0
 *   ComM_MonResIBSWhlSpd02TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_1
 *   ComM_ErrStatIBSWhlSpd02TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_2
 *   ComM_ErrResIBSWhlSpd02TimeoutInfo of type Rte_DT_dt_ComM_IBSWhlSpd02TimeoutInfo_3
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
 * dt_ComM_MCUFailrCodCRCDTCInfo: Record with elements
 *   ComM_MonStatMCUFailrCodCRCDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_0
 *   ComM_MonResMCUFailrCodCRCDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_1
 *   ComM_ErrStatMCUFailrCodCRCDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_2
 *   ComM_ErrResMCUFailrCodCRCDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCDTCInfo_3
 * dt_ComM_MCUFailrCodCRCInfo: Record with elements
 *   ComM_MonStatMCUFailrCodCRCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCInfo_0
 *   ComM_MonResMCUFailrCodCRCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCInfo_1
 *   ComM_ErrStatMCUFailrCodCRCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCInfo_2
 *   ComM_ErrResMCUFailrCodCRCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodCRCInfo_3
 * dt_ComM_MCUFailrCodE2ETimeoutInfo: Record with elements
 *   ComM_MonStatMCUFailrCodE2ETimeouInfo of type Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_0
 *   ComM_MonResMCUFailrCodE2ETimeoutInfo of type Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_1
 *   ComM_ErrStatMCUFailrCodE2ETimeoutInfo of type Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_2
 *   ComM_ErrResMCUFailrCodE2ETimeoutInfo of type Rte_DT_dt_ComM_MCUFailrCodE2ETimeoutInfo_3
 * dt_ComM_MCUFailrCodTimeoutDTCInfo: Record with elements
 *   ComM_MonStatMCUFailrCodTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_0
 *   ComM_MonResMCUFailrCodTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_1
 *   ComM_ErrStatMCUFailrCodTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_2
 *   ComM_ErrResMCUFailrCodTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_MCUFailrCodTimeoutDTCInfo_3
 * dt_ComM_PODDCDC01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatPODDCDC01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_0
 *   ComM_MonResPODDCDC01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_1
 *   ComM_ErrStatPODDCDC01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_2
 *   ComM_ErrResPODDCDC01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutDTCInfo_3
 * dt_ComM_PODDCDC01TimeoutInfo: Record with elements
 *   ComM_MonStatPODDCDC01TimeoutInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_0
 *   ComM_MonResPODDCDC01TimeoutInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_1
 *   ComM_ErrStatPODDCDC01TimeoutInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_2
 *   ComM_ErrResPODDCDC01TimeoutInfo of type Rte_DT_dt_ComM_PODDCDC01TimeoutInfo_3
 * dt_ComM_PODOBCChrgStatTimeoutDTCInfo: Record with elements
 *   ComM_MonStatPODOBCChrgStatTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_0
 *   ComM_MonResPODOBCChrgStatTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_1
 *   ComM_ErrStatPODOBCChrgStatTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_2
 *   ComM_ErrResPODOBCChrgStatTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutDTCInfo_3
 * dt_ComM_PODOBCChrgStatTimeoutInfo: Record with elements
 *   ComM_MonStatPODOBCChrgStatTimeoutInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_0
 *   ComM_MonResPODOBCChrgStatTimeoutInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_1
 *   ComM_ErrStatPODOBCChrgStatTimeoutInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_2
 *   ComM_ErrResPODOBCChrgStatTimeoutInfo of type Rte_DT_dt_ComM_PODOBCChrgStatTimeoutInfo_3
 * dt_ComM_PODSts01TimeoutInfo: Record with elements
 *   ComM_MonStatPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_0
 *   ComM_MonResPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_1
 *   ComM_ErrStatPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_2
 *   ComM_ErrResPODSts01TimeoutInfo of type Rte_DT_dt_ComM_PODSts01TimeoutInfo_3
 * dt_ComM_PRNDCRCDTCInfo: Record with elements
 *   ComM_MonStatPRNDCRCDTCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCDTCInfo_0
 *   ComM_MonResPRNDCRCDTCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCDTCInfo_1
 *   ComM_ErrStatPRNDCRCDTCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCDTCInfo_2
 *   ComM_ErrResPRNDCRCDTCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCDTCInfo_3
 * dt_ComM_PRNDCRCInfo: Record with elements
 *   ComM_MonStatPRNDCRCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCInfo_0
 *   ComM_MonResPRNDCRCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCInfo_1
 *   ComM_ErrStatPRNDCRCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCInfo_2
 *   ComM_ErrResPRNDCRCErrorInfo of type Rte_DT_dt_ComM_PRNDCRCInfo_3
 * dt_ComM_PRNDE2ETimeoutInfo: Record with elements
 *   ComM_MonStatPRNDE2ETimeoutInfo of type Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_0
 *   ComM_MonResPRNDE2ETimeoutInfo of type Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_1
 *   ComM_ErrStatPRNDE2ETimeoutInfo of type Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_2
 *   ComM_ErrResPRNDE2ETimeoutInfo of type Rte_DT_dt_ComM_PRNDE2ETimeoutInfo_3
 * dt_ComM_PRNDTimeoutDTCInfo: Record with elements
 *   ComM_MonStatPRNDTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_0
 *   ComM_MonResPRNDTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_1
 *   ComM_ErrStatPRNDTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_2
 *   ComM_ErrResPRNDTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_PRNDTimeoutDTCInfo_3
 * dt_ComM_PRNDTimeoutInfo: Record with elements
 *   ComM_MonStatPRNDTimeoutInfo of type Rte_DT_dt_ComM_PRNDTimeoutInfo_0
 *   ComM_MonResPRNDTimeoutInfo of type Rte_DT_dt_ComM_PRNDTimeoutInfo_1
 *   ComM_ErrStatPRNDTimeoutInfo of type Rte_DT_dt_ComM_PRNDTimeoutInfo_2
 *   ComM_ErrResPRNDTimeoutInfo of type Rte_DT_dt_ComM_PRNDTimeoutInfo_3
 * dt_ComM_SGW16TimeoutDTCInfo: Record with elements
 *   ComM_MonStatSGW16TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_0
 *   ComM_MonResSGW16TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_1
 *   ComM_ErrStatSGW16CTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_2
 *   ComM_ErrResSGW16TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW16TimeoutDTCInfo_3
 * dt_ComM_SGW16TimeoutInfo: Record with elements
 *   ComM_MonStatSGW16TimeoutInfo of type Rte_DT_dt_ComM_SGW16TimeoutInfo_0
 *   ComM_MonResSGW16TimeoutInfo of type Rte_DT_dt_ComM_SGW16TimeoutInfo_1
 *   ComM_ErrStatSGW16TimeoutInfo of type Rte_DT_dt_ComM_SGW16TimeoutInfo_2
 *   ComM_ErrResSGW16TimeoutInfo of type Rte_DT_dt_ComM_SGW16TimeoutInfo_3
 * dt_ComM_SGW17TimeoutDTCInfo: Record with elements
 *   ComM_MonStatSGW17TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_0
 *   ComM_MonResSGW17TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_1
 *   ComM_ErrStatSGW17TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_2
 *   ComM_ErrResSGW17TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGW17TimeoutDTCInfo_3
 * dt_ComM_SGW17TimeoutInfo: Record with elements
 *   ComM_MonStatSGW17TimeoutInfo of type Rte_DT_dt_ComM_SGW17TimeoutInfo_0
 *   ComM_MonResSGW17TimeoutInfo of type Rte_DT_dt_ComM_SGW17TimeoutInfo_1
 *   ComM_ErrStatSGW17TimeoutInfo of type Rte_DT_dt_ComM_SGW17TimeoutInfo_2
 *   ComM_ErrResSGW17TimeoutInfo of type Rte_DT_dt_ComM_SGW17TimeoutInfo_3
 * dt_ComM_SGWPT01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatSGWPT01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_0
 *   ComM_MonResSGWPT01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_1
 *   ComM_ErrStatSGWPT01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_2
 *   ComM_ErrResSGWPT01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutDTCInfo_3
 * dt_ComM_SGWPT01TimeoutInfo: Record with elements
 *   ComM_MonStatSGWPT01TimeoutInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutInfo_0
 *   ComM_MonResSGWPT01TimeoutInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutInfo_1
 *   ComM_ErrStatSGWPT01TimeoutInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutInfo_2
 *   ComM_ErrResSGWPT01TimeoutInfo of type Rte_DT_dt_ComM_SGWPT01TimeoutInfo_3
 * dt_ComM_SGWTimTimeoutDTCInfo: Record with elements
 *   ComM_MonStatSGWTimTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_0
 *   ComM_MonResSGWTimTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_1
 *   ComM_ErrStatSGWTimTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_2
 *   ComM_ErrResSGWTimTimeoutDTCErrorInfo of type Rte_DT_dt_ComM_SGWTimTimeoutDTCInfo_3
 * dt_ComM_SGWTimTimeoutInfo: Record with elements
 *   ComM_MonStatSGWTimTimeoutInfo of type Rte_DT_dt_ComM_SGWTimTimeoutInfo_0
 *   ComM_MonResSGWTimTimeoutInfo of type Rte_DT_dt_ComM_SGWTimTimeoutInfo_1
 *   ComM_ErrStatSGWTimTimeoutInfo of type Rte_DT_dt_ComM_SGWTimTimeoutInfo_2
 *   ComM_ErrResSGWTimTimeoutInfo of type Rte_DT_dt_ComM_SGWTimTimeoutInfo_3
 * dt_ComM_TCU01TimeoutDTCInfo: Record with elements
 *   ComM_MonStatTCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_0
 *   ComM_MonResTCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_1
 *   ComM_ErrStatTCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_2
 *   ComM_ErrResTCU01TimeoutDTCErrorInfo of type Rte_DT_dt_ComM_TCU01TimeoutDTCInfo_3
 * dt_ComM_TCU01TimeoutInfo: Record with elements
 *   ComM_MonStatTCU01TimeoutInfo of type Rte_DT_dt_ComM_TCU01TimeoutInfo_0
 *   ComM_MonResTCU01TimeoutInfo of type Rte_DT_dt_ComM_TCU01TimeoutInfo_1
 *   ComM_ErrStatTCU01TimeoutInfo of type Rte_DT_dt_ComM_TCU01TimeoutInfo_2
 *   ComM_ErrResTCU01TimeoutInfo of type Rte_DT_dt_ComM_TCU01TimeoutInfo_3
 *
 *********************************************************************************************************************/


#define CtAp_ComMErr_START_SEC_CODE
#include "CtAp_ComMErr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ComMErr_Cyclic_10ms
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
 *   Std_ReturnType Rte_Read_CHCAN_BusoffStatus_BusoffStatus(boolean *data)
 *   Std_ReturnType Rte_Read_PTCAN_BusoffStatus_BusoffStatus(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus(dt_ComM_ACU01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus(dt_ComM_ACU01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus(dt_ComM_ACU02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus(dt_ComM_ACU02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus(dt_ComM_ACUInfoCRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus(dt_ComM_ACUInfoTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus(dt_ComM_ACUInfoTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus(dt_ComM_ADCUACC02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus(dt_ComM_ADCUACC02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus(dt_ComM_ADCUACC02TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus(dt_ComM_ADCUAEB01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus(dt_ComM_ADCUAEB01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus(dt_ComM_ADCUAPS01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus(dt_ComM_ADCUAPS01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus(dt_ComM_ADCUBodyReqCRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus(dt_ComM_ADCUBodyReqTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus(dt_ComM_ADCUDACRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus(dt_ComM_ADCUDATimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus(dt_ComM_APTCTCUTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus(dt_ComM_APTCTCUTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus(dt_ComM_BCM05CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus(dt_ComM_BCM05TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus(dt_ComM_BCM06CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus(dt_ComM_BCM06TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus(dt_ComM_BCM06TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus(dt_ComM_BMSErrInfoTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus(dt_ComM_BMSSts01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus(dt_ComM_BMSSts01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus(dt_ComM_BMSSts01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus(dt_ComM_BMSSts02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus(dt_ComM_BMSSts02TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus(dt_ComM_CGW01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus(dt_ComM_CGW01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus(dt_ComM_CGW01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus(dt_ComM_DCMFL02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus(dt_ComM_DCMFL02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus(dt_ComM_DCMFL02TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus(dt_ComM_DCMFRTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus(dt_ComM_DCMFRTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus(dt_ComM_DCMRLTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus(dt_ComM_DCMRLTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus(dt_ComM_DCMRRTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus(dt_ComM_DCMRRTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus(dt_ComM_EVCOMSts01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus(dt_ComM_EVCOMSts01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus(dt_ComM_IBSACCCRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus(dt_ComM_IBSACCTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus(dt_ComM_IBSAPSCRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus(dt_ComM_IBSAPSTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus(dt_ComM_IBSSts01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus(dt_ComM_IBSSts01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus(dt_ComM_IBSSts02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus(dt_ComM_IBSSts02TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus(dt_ComM_IBSSts03CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus(dt_ComM_IBSSts03TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus(dt_ComM_IBSSts04CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus(dt_ComM_IBSSts04TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus(dt_ComM_IBSSts05CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus(dt_ComM_IBSSts05TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus(dt_ComM_IBSSts05TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus(dt_ComM_IBSSts06CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus(dt_ComM_IBSSts06TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus(dt_ComM_IBSTqCRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus(dt_ComM_IBSTqTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus(dt_ComM_IBSVCUMotCtrlCRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus(dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus(dt_ComM_IBSVCUMotCtrlTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus(dt_ComM_IBSWhlSpd01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus(dt_ComM_IBSWhlSpd01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus(dt_ComM_IBSWhlSpd02CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus(dt_ComM_IBSWhlSpd02TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus(dt_ComM_MCU01CRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus(dt_ComM_MCU01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus(dt_ComM_MCU01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus(dt_ComM_MCUFailrCodCRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus(dt_ComM_MCUFailrCodCRCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus(dt_ComM_MCUFailrCodE2ETimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus(dt_ComM_MCUFailrCodTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus(dt_ComM_PODDCDC01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus(dt_ComM_PODDCDC01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus(dt_ComM_PODOBCChrgStatTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus(dt_ComM_PODOBCChrgStatTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus(dt_ComM_PODSts01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus(dt_ComM_PRNDCRCDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus(dt_ComM_PRNDTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus(dt_ComM_PRNDTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus(dt_ComM_SGW16TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus(dt_ComM_SGW16TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus(dt_ComM_SGW17TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus(dt_ComM_SGW17TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus(dt_ComM_SGWPT01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus(dt_ComM_SGWPT01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus(dt_ComM_SGWTimTimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus(dt_ComM_SGWTimTimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus(dt_ComM_TCU01TimeoutDTCInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus(dt_ComM_TCU01TimeoutInfo *data)
 *   Std_ReturnType Rte_Read_RTE_R_DCCAN_BusoffStatus_BusoffStatus_BusoffStatus(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(boolean *data)
 *   Std_ReturnType Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffDTCInfo_Bus(const dt_ComM_CHCANBusOffDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(const dt_ComM_CHCANBusOffInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffDTCInfo_Bus(const dt_ComM_DCCANBusOffDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus(const dt_ComM_DCCANBusOffInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffDTCInfo_Bus(const dt_ComM_EPTCANBusOffDTCInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(const dt_ComM_EPTCANBusOffInfo *data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_ACUComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_ADCUComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_APTCComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_BCMComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_BMSComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_CGWComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_CHIBSComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCDCComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFLComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFRComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRLComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRRComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_EPTIBSComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_EVCOMComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_IVIComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_MCUComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_OBCComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_PRNDComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWCHComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_TCUComDTCFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg(boolean data)
 *   Std_ReturnType Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ComMErr_Cyclic_10ms_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ComMErr_CODE) R_ComMErr_Cyclic_10ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ComMErr_Cyclic_10ms
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: R_ComMErr_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ComMErr_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtAp_ComMErr_CODE) R_ComMErr_Init(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: R_ComMErr_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtAp_ComMErr_STOP_SEC_CODE
#include "CtAp_ComMErr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


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
