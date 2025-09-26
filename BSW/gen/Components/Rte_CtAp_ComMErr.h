/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_CtAp_ComMErr.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ComMErr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_COMMERR_H
# define RTE_CTAP_COMMERR_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtAp_ComMErr_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CHCAN_BusoffStatus_BusoffStatus (FALSE)
#  define Rte_InitValue_PTCAN_BusoffStatus_BusoffStatus (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_ACUComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_ADCUComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_APTCComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_BCMComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_BMSComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_CGWComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_CHIBSComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_DCDCComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFLComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFRComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRLComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRRComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_EPTIBSComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_EVCOMComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_IVIComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_MCUComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_OBCComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_PRNDComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWCHComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_ComDTCFailr_tec_ComM_TCUComDTCFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCCAN_BusoffStatus_BusoffStatus_BusoffStatus (FALSE)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus(P2VAR(dt_ComM_ACU01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ACU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus(P2VAR(dt_ComM_ACU02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ACU02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus(P2VAR(dt_ComM_ACUInfoCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus(P2VAR(dt_ComM_ACUInfoTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus(P2VAR(dt_ComM_ACUInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUACC02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUACC02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus(P2VAR(dt_ComM_ADCUACC02TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUAEB01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUAEB01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUAPS01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUAPS01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUBodyReqCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUBodyReqTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus(P2VAR(dt_ComM_ADCUDACRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus(P2VAR(dt_ComM_ADCUDATimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus(P2VAR(dt_ComM_APTCTCUTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus(P2VAR(dt_ComM_APTCTCUTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus(P2VAR(dt_ComM_BCM05CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus(P2VAR(dt_ComM_BCM05TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus(P2VAR(dt_ComM_BCM06CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus(P2VAR(dt_ComM_BCM06TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus(P2VAR(dt_ComM_BCM06TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus(P2VAR(dt_ComM_BMSErrInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus(P2VAR(dt_ComM_BMSSts01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_BMSSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus(P2VAR(dt_ComM_BMSSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_BMSSts02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus(P2VAR(dt_ComM_BMSSts02TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus(P2VAR(dt_ComM_CGW01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_CGW01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus(P2VAR(dt_ComM_CGW01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus(P2VAR(dt_ComM_DCMFL02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_DCMFL02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus(P2VAR(dt_ComM_DCMFL02TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus(P2VAR(dt_ComM_DCMFRTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus(P2VAR(dt_ComM_DCMFRTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus(P2VAR(dt_ComM_DCMRLTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus(P2VAR(dt_ComM_DCMRLTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus(P2VAR(dt_ComM_DCMRRTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus(P2VAR(dt_ComM_DCMRRTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_EVCOMSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus(P2VAR(dt_ComM_EVCOMSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus(P2VAR(dt_ComM_IBSACCCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSACCTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus(P2VAR(dt_ComM_IBSAPSCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSAPSTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts02TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts03CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts03TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts04CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts04TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts05CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts05TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts05TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSSts06CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSSts06TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus(P2VAR(dt_ComM_IBSTqCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSTqTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSWhlSpd01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSWhlSpd01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus(P2VAR(dt_ComM_IBSWhlSpd02CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus(P2VAR(dt_ComM_IBSWhlSpd02TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus(P2VAR(dt_ComM_MCU01CRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_MCU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus(P2VAR(dt_ComM_MCU01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus(P2VAR(dt_ComM_MCUFailrCodCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus(P2VAR(dt_ComM_MCUFailrCodCRCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus(P2VAR(dt_ComM_MCUFailrCodE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus(P2VAR(dt_ComM_MCUFailrCodTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_PODDCDC01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus(P2VAR(dt_ComM_PODDCDC01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus(P2VAR(dt_ComM_PODOBCChrgStatTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus(P2VAR(dt_ComM_PODOBCChrgStatTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus(P2VAR(dt_ComM_PODSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus(P2VAR(dt_ComM_PRNDCRCDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus(P2VAR(dt_ComM_PRNDTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus(P2VAR(dt_ComM_PRNDTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus(P2VAR(dt_ComM_SGW16TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus(P2VAR(dt_ComM_SGW16TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus(P2VAR(dt_ComM_SGW17TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus(P2VAR(dt_ComM_SGW17TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_SGWPT01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus(P2VAR(dt_ComM_SGWPT01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus(P2VAR(dt_ComM_SGWTimTimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus(P2VAR(dt_ComM_SGWTimTimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus(P2VAR(dt_ComM_TCU01TimeoutDTCInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ComMErr_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus(P2VAR(dt_ComM_TCU01TimeoutInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(P2CONST(dt_ComM_CHCANBusOffInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus(P2CONST(dt_ComM_DCCANBusOffInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2CONST(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_COMMERR_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_CHCAN_BusoffStatus_BusoffStatus Rte_Read_CtAp_ComMErr_CHCAN_BusoffStatus_BusoffStatus

#  define Rte_Read_CtAp_ComMErr_CHCAN_BusoffStatus_BusoffStatus(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_PTCAN_BusoffStatus_BusoffStatus Rte_Read_CtAp_ComMErr_PTCAN_BusoffStatus_BusoffStatus

#  define Rte_Read_CtAp_ComMErr_PTCAN_BusoffStatus_BusoffStatus(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWPT01MsgErrInfo_Bus_tec_ComM_SGWPT01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus
#  define Rte_Read_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus Rte_Read_CtAp_ComMErr_RTE_R_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_DCCAN_BusoffStatus_BusoffStatus_BusoffStatus Rte_Read_CtAp_ComMErr_RTE_R_DCCAN_BusoffStatus_BusoffStatus_BusoffStatus

#  define Rte_Read_CtAp_ComMErr_RTE_R_DCCAN_BusoffStatus_BusoffStatus_BusoffStatus(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_ComMErr_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_ComMErr_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_ComMErr_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_ComMErr_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffDTCInfo_Bus Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffDTCInfo_Bus
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffDTCInfo_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus
#  define Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffDTCInfo_Bus Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffDTCInfo_Bus
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffDTCInfo_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus
#  define Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffDTCInfo_Bus Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffDTCInfo_Bus
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffDTCInfo_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Write_CtAp_ComMErr_RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_ACUComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_ACUComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_ACUComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_ADCUComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_ADCUComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_ADCUComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_APTCComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_APTCComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_APTCComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_BCMComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_BCMComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_BCMComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_BMSComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_BMSComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_BMSComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_CGWComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_CGWComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_CGWComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_CHIBSComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_CHIBSComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_CHIBSComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCDCComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCDCComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCDCComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFLComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFLComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFLComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFRComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFRComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMFRComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRLComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRLComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRLComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRRComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRRComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_DCMRRComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_EPTIBSComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_EPTIBSComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_EPTIBSComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_EVCOMComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_EVCOMComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_EVCOMComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_IVIComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_IVIComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_IVIComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_MCUComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_MCUComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_MCUComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_OBCComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_OBCComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_OBCComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_PRNDComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_PRNDComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_PRNDComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWCHComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWCHComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWCHComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_SGWComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_ComDTCFailr_tec_ComM_TCUComDTCFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_TCUComDTCFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_ComDTCFailr_tec_ComM_TCUComDTCFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg
#  define Rte_Write_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg(data) (Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_ComMErr_START_SEC_CODE
# include "CtAp_ComMErr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ComMErr_Cyclic_10ms R_ComMErr_Cyclic_10ms
#  define RTE_RUNNABLE_R_ComMErr_Init R_ComMErr_Init
# endif

FUNC(void, CtAp_ComMErr_CODE) R_ComMErr_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ComMErr_CODE) R_ComMErr_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ComMErr_STOP_SEC_CODE
# include "CtAp_ComMErr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_COMMERR_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
