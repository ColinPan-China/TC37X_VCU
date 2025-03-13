/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Dcm
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dcm_Lcfg.c
 *   Generation Time: 2025-03-12 16:51:24
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/



#define DCM_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
                                                                                                                                                     /* PRQA S 1533 EOF */ /* MD_Dcm_ObjectOnlyAccessedOnce */
#include "Dcm.h"
#include "Rte_Dcm.h"
#include "Det.h"
#include "Dcm_Int.h"
#include "PduR_Dcm.h"
#include "ComM_Dcm.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON) || \
    (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON)
# if defined(NVM_VENDOR_ID)
#  if (NVM_VENDOR_ID == 30u)
/* Only Vector NvM supports this feature up to now */
#   define Dcm_GetDcmNvMBlockId(blockId)                             (uint16)(NvM_GetDcmBlockId(blockId))                                            /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
#  endif
# endif

/* Default NvM handle offset */
# if !defined(Dcm_GetDcmNvMBlockId)
#  define Dcm_GetDcmNvMBlockId(blockId)                              (uint16)(blockId)                                                               /* PRQA S 3453 */ /* QAC 7.0:  A function could probably be used instead of this function-like macro */ /* Macro is more efficient! */
# endif
#endif

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION DECLARATIONS
 *********************************************************************************************************************/
#define DCM_START_SEC_CALLOUT_CODE
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  Dcm_DidMgr_F300_ReadData()
 ***********************************************************************************************************************/
/*! \brief         Read the DynDID.
 *  \details       -
 *  \param[in]     DID            The assigned Did
 *  \param[in]     opStatus       The operation status
 *  \param[in,out] pDataContext   Pointer to the data context
 *  \return        E_OK           Read operation succeeded
 *  \return        DCM_E_PENDING  Read operation not yet finished
 *  \return        E_NOT_OK       Read operation failed
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F300_ReadData(
  uint16 DID,
  Dcm_OpStatusType opStatus,
  Dcm_DiagDataContextPtrType pDataContext
  );
/***********************************************************************************************************************
 *  Dcm_DidMgr_F300_ReadDataLength()
 ***********************************************************************************************************************/
/*! \brief         Read the length of a DynDID.
 *  \details       -
 *  \param[in]     opStatus    The operation status
 *  \param[out]    dataLength  Concrete length of the DynDID
 *  \return        E_OK        Operation is always successful
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F300_ReadDataLength(
  Dcm_OpStatusType opStatus,
  P2VAR(Dcm_DidMgrDidLengthType, AUTOMATIC, DCM_VAR_NOINIT) dataLength
  );
/***********************************************************************************************************************
 *  Dcm_RidMgr_0105_Start()
 ***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0105_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_RidMgrRidLengthPtrType DataLength,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_RidMgr_0105_Stop()
 ***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0105_Stop(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_RidMgrRidLengthPtrType DataLength,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_RidMgr_0105_RequestResults()
 ***********************************************************************************************************************/
/*! \brief         Wraps RIDs execution interface.
 *  \details       Converts uint8 arrays to other signal types required by the RID execution interface and vice versa.
 *  \param[in]     OpStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier
 *  \param[in,out] DataLength         IN: Concrete length of the dynamic request signal
 *                                    OUT: Concrete length of the dynamic response Signal
 *  \param[out]    ErrorCode          Negative response code
 *  \return        E_OK               The operation is finished
 *  \return        DCM_E_PENDING      The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  Forces a RCR-RP response
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        E_NOT_OK           The operation has failed. A concrete NRC shall be set, otherwise the DCM sends NRC
 *                                    0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0105_RequestResults(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_RidMgrRidLengthPtrType DataLength,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
 ***********************************************************************************************************************/
/*! \brief         Dummy post-processor
 *  \details       This post-processor is called for diagnostic services which do not require any post processing.
 *  \param[in]     pContext  Pointer to the context
 *  \param[in]     status    The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(
  Dcm_ContextPtrType pContext,
  Dcm_ConfirmationStatusType status
  );
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
 ***********************************************************************************************************************/
/*! \brief         Realizes a dummy paged buffer updater.
 *  \details       This function is never called.
 *  \param[in]     pContext      Pointer to the context
 *  \param[in]     opStatus      The operation status
 *  \param[in,out] pDataContext  Pointer to the data context
 *  \param[out]    ErrorCode     Negative response code
 *  \return        E_NOT_OK      Operation failed. Take the NRC from ErrorCode. Do not call again
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(
  Dcm_ContextPtrType pContext,
  Dcm_OpStatusType opStatus,
  Dcm_DiagDataContextPtrType pDataContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
 ***********************************************************************************************************************/
/*! \brief         Dummy service cancellation.
 *  \details       -
 *  \param[in]     pContext      Pointer to the context
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(
  Dcm_ContextPtrType pContext
  );
/***********************************************************************************************************************
 *  Dcm_SubSvcWrapper_DcmService_HardReset()
 ***********************************************************************************************************************/
/*! \brief         Wraps a specific externally implemented sub-service-processor.
 *  \details       Encapsulates the internally used pContext parameter.
 *  \param[in]     pContext              Pointer to the context
 *  \param[in]     opStatus              The operation status
 *  \param[in,out] pMsgContext           Message-related information for one diagnostic protocol identifier
 *                                       The pointers in pMsgContext points behind the sub-function.
 *  \param[out]    ErrorCode             Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_OK              Job processing finished, send positive response
 *  \return        DCM_E_PENDING         Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP     (Vendor extension) Forces a RCR-RP response.
 *                                       The call out will called again once the response is sent. The OpStatus
 *                                       parameter will contain the transmission result
 *  \return        DCM_E_PROCESSINGDONE  (Vendor extension) Can be returned instead of calling Dcm_ProcessingDone() for
 *                                       the current pMsgContext.
 *                                       Saves application code and stack usage.
 *  \return        DCM_E_STOP_REPEATER   Stops the repeater proxy
 *  \return        DCM_E_NOT_OK          Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SubSvcWrapper_DcmService_HardReset(
  Dcm_ContextPtrType pContext,
  Dcm_OpStatusType opStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_Svc27_Dummy_GetSecurityAttemptCounter()
 ***********************************************************************************************************************/
/*! \brief         Gets attempt counter.
 *  \details       Once DCM is initialized, DCM requests this function per security level to get the stored
 *                 attempt-counter value prior last power-down/reset event. The concrete name of the callout is defined
 *                 by the configuration parameter
 *                 /Dcm/DcmConfigSet/DcmDsp/DcmDspSecurity/DcmDspSecurityRow/DcmDspSecurityGetAttemptCounterFnc.
 *  \param[in]     OpStatus        The operation status
 *  \param[out]    AttemptCounter  Attempt counter value
 *  \return        E_OK            The operation is finished
 *  \return        E_NOT_OK        The operation has failed
 *  \return        DCM_E_PENDING   The operation is not yet finished
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Svc27_Dummy_GetSecurityAttemptCounter(
  Dcm_OpStatusType OpStatus,
  P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) AttemptCounter
  );
/***********************************************************************************************************************
 *  Dcm_Svc27_Dummy_SetSecurityAttemptCounter()
 ***********************************************************************************************************************/
/*! \brief         Sets attempt counter.
 *  \details       Each time the corresponding security level counter value is changes, DCM will first notify the
 *                 application calling this API to store the new value prior giving any result to the diagnostic client.
 *                 The concrete name of the callout is defined by the configuration parameter
 *                 /Dcm/DcmConfigSet/DcmDsp/DcmDspSecurity/DcmDspSecurityRow/DcmDspSecuritySetAttemptCounterFnc.
 *  \param[in]     OpStatus        The operation status
 *  \param[in]     AttemptCounter  Attempt counter value
 *  \return        E_OK            The operation is finished
 *  \return        E_NOT_OK        The operation has failed
 *  \return        DCM_E_PENDING   The operation is not yet finished
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
 ***********************************************************************************************************************/
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Svc27_Dummy_SetSecurityAttemptCounter(
  Dcm_OpStatusType OpStatus,
  uint8 AttemptCounter
  );
#define DCM_STOP_SEC_CALLOUT_CODE
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  LOCAL DATA DECLARATIONS
 *********************************************************************************************************************/
#define DCM_START_SEC_VAR_NO_INIT_8
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*! DCM protocol descriptor */
DCM_LOCAL VAR(Dcm_MsgItemType, DCM_VAR_NOINIT) Dcm_CfgNetBuffer_000[50];
#define DCM_STOP_SEC_VAR_NO_INIT_8
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CONST_8
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*! TxPduId to DCM connection map */
CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[1]=
{
    0u
};
/*! Map of DCM relevant network handles */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetConnComMChannelMap[1]=
{
    0u
};
/*! Service 0x28 list of channels for the all-comm-channel parameter */
CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetComCtrlChannelListAll[2]=
{
   1u
  , 0u
};
/*! Look up table of all supported ALFIDs */
CONST(uint8, DCM_CONST) Dcm_CfgMemMgrAlfidLookUpTable[17]=
{
   16u
  ,0x11u
  ,0x12u
  ,0x13u
  ,0x14u
  ,0x21u
  ,0x22u
  ,0x23u
  ,0x24u
  ,0x31u
  ,0x32u
  ,0x33u
  ,0x34u
  ,0x41u
  ,0x42u
  ,0x43u
  ,0x44u
};
/*! Look up table of DCM service identifiers */
CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[16]=
{
   15u
  ,0x10u
  ,0x11u
  ,0x14u
  ,0x19u
  ,0x22u
  ,0x23u
  ,0x27u
  ,0x28u
  ,0x2Cu
  ,0x2Eu
  ,0x2Fu
  ,0x31u
  ,0x3Du
  ,0x3Eu
  ,0x85u
};
/*! Service 0x10 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x11 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x03u
};
/*! Service 0x19 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc19SubFuncLookUpTable[15]=
{
   14u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x04u
  ,0x06u
  ,0x07u
  ,0x08u
  ,0x09u
  ,0x0Au
  ,0x0Bu
  ,0x0Cu
  ,0x0Du
  ,0x0Eu
  ,0x14u
};
/*! Service 0x27 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[5]=
{
   4u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x04u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubFuncLookUpTable[5]=
{
   4u
  ,0x00u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28MessageTypeLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x28 network ID lookup */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubNetIdLookUp[3]=
{
   2u
  ,0x00u
  ,0x0Fu
};
/*! Service 0x2C look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc2CSubFuncLookUpTable[4]=
{
   3u
  ,0x01u
  ,0x02u
  ,0x03u
};
/*! Service 0x3E look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc3ESubFuncLookUpTable[2]=
{
   1u
  ,0x00u
};
/*! Look up table of service 0x85 */
CONST(uint8, DCM_CONST) Dcm_CfgSvc85SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x02u
};
#define DCM_STOP_SEC_CONST_8
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CONST_16
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*! DID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[19]=
{
   18u
  ,0x0100u
  ,0x0101u
  ,0x0200u
  ,0x0300u
  ,0x0400u
  ,0x1024u
  ,0xF180u
  ,0xF187u
  ,0xF189u
  ,0xF18Cu
  ,0xF190u
  ,0xF193u
  ,0xF194u
  ,0xF1A0u
  ,0xF1A1u
  ,0xF1A2u
  ,0xF1A3u
  ,0xF300u
};
/*! RID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[3]=
{
   2u
  ,0x0100u
  ,0x0105u
};
#define DCM_STOP_SEC_CONST_16
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/*! DCM buffer descriptor */
CONST(Dcm_CfgNetBufferInfoType, DCM_CONST) Dcm_CfgNetBufferInfo[1]=
{
   { Dcm_CfgNetBuffer_000,  50u}
};
/*! DCM protocol switch notifications */
CONST(Dcm_CfgNetProtocolNotificationInfoType, DCM_CONST) Dcm_CfgNetProtocolNotificationInfo[1]=
{
   { NULL_PTR}
};
/*! RxPduId map */
CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[2]=
{
   { TRUE, 0u}
  ,{ FALSE, 0u}
};
/*! DCM connection descriptor */
CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[1]=
{
   { 0x0000u,PduRConf_PduRSrcPdu_PduRSrcPdu_1a8748e9, 0u,0u,0x00u,0x00u, 0u}
};
/*! DCM protocol descriptor */
CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1]=
{
   { {        0u,       0u},4095u, 3u, 0u,TRUE,0u,DemConf_DemClient_DemClient, 0u}
};
/*! Map of all relevant for DCM network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[1]=
{
   ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8
};
/*! Look up table of DCM relevant network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2]=
{
   1u
  ,ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8
};
/*! Diagnostic service execution conditions */
CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[3]=
{
   { { 0x07u,0x07u}}
  ,{ { 0x06u,0x07u}}
  ,{ { 0x04u,0x07u}}
};
/*! Session state properties */
CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[3]=
{
   { {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION,0x01u}
  ,{ {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION,0x02u}
  ,{ {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION,0x03u}
};
/*! Security Access state properties */
CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[2]=
{
   { 1000u,   0u,FALSE, 3u,0x01u} /* SecLvl: UnlockedL1 */
  ,{ 1000u,   0u,FALSE, 3u,0x02u} /* SecLvl: Level_3 */
};
/*! Session state change notification(s) */
CONST(Dcm_CfgStateNotificationInfoType, DCM_CONST) Dcm_CfgStateSessionNotificationInfo[1]=
{
   { NULL_PTR}
};
/*! Security state change notification(s) */
CONST(Dcm_CfgStateNotificationInfoType, DCM_CONST) Dcm_CfgStateSecurityNotificationInfo[1]=
{
   { NULL_PTR}
};
/*! DID ranges look up */
CONST(Dcm_CfgDidMgrDidRangeType, DCM_CONST) Dcm_CfgDidMgrDidRanges[1]=
{
   {    0u,   0u}
};
/*! DID ranges to DID info map */
CONST(Dcm_CfgDidMgrDidInfoRefType, DCM_CONST) Dcm_CfgDidMgrRangeDidInfoRefs[1]=
{
   0u /* dummy initializer */
};
/*! DID properties */
CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[18]=
{
   {   10u,  10u,  10u,   0u,   0u,0x03u} /* DID: 0x0100 */
  ,{    2u,   2u,   2u,   2u,   0u,0x03u} /* DID: 0x0101 */
  ,{    1u,   1u,   1u,   4u,   0u,0x03u} /* DID: 0x0200 */
  ,{    4u,   4u,   4u,   6u,   0u,0x05u} /* DID: 0x0300 */
  ,{    2u,   2u,   2u,   8u,   0u,0x01u} /* DID: 0x0400 */
  ,{    4u,   4u,   4u,   9u,   0u,0x03u} /* DID: 0x1024 */
  ,{    5u,   5u,   5u,  11u,   0u,0x03u} /* DID: 0xF180 */
  ,{    4u,   4u,   4u,  13u,   0u,0x03u} /* DID: 0xF187 */
  ,{   13u,  13u,  13u,  15u,   0u,0x03u} /* DID: 0xF189 */
  ,{    4u,   4u,   4u,  17u,   0u,0x03u} /* DID: 0xF18C */
  ,{   17u,  17u,  17u,  19u,   0u,0x03u} /* DID: 0xF190 */
  ,{    4u,   4u,   4u,  21u,   0u,0x03u} /* DID: 0xF193 */
  ,{    1u,   1u,   1u,  23u,   0u,0x03u} /* DID: 0xF194 */
  ,{    2u,   2u,   2u,  25u,   0u,0x03u} /* DID: 0xF1A0 */
  ,{    2u,   2u,   2u,  27u,   0u,0x03u} /* DID: 0xF1A1 */
  ,{    2u,   2u,   2u,  29u,   0u,0x03u} /* DID: 0xF1A2 */
  ,{    2u,   2u,   2u,  31u,   0u,0x03u} /* DID: 0xF1A3 */
  ,{    0u,  50u,   0u,  33u,   0u,0x11u} /* DID: 0xF300 */
};
/*! DID operation properties */
CONST(Dcm_CfgDidMgrDidOpInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpInfo[35]=
{
   {    0u,   0u,0x05u} /* DID: 0x0100 */
  ,{    0u,   2u,0x01u} /* DID: 0x0100 */
  ,{    0u,   3u,0x05u} /* DID: 0x0101 */
  ,{    0u,   5u,0x01u} /* DID: 0x0101 */
  ,{    0u,   6u,0x05u} /* DID: 0x0200 */
  ,{    0u,   8u,0x01u} /* DID: 0x0200 */
  ,{    0u,   9u,0x01u} /* DID: 0x0300 */
  ,{    2u,  10u,0x0Fu} /* DID: 0x0300 */
  ,{    0u,  14u,0x05u} /* DID: 0x0400 */
  ,{    0u,  16u,0x05u} /* DID: 0x1024 */
  ,{    0u,  18u,0x01u} /* DID: 0x1024 */
  ,{    0u,  19u,0x05u} /* DID: 0xF180 */
  ,{    0u,  21u,0x01u} /* DID: 0xF180 */
  ,{    0u,  22u,0x05u} /* DID: 0xF187 */
  ,{    0u,  24u,0x01u} /* DID: 0xF187 */
  ,{    0u,  25u,0x05u} /* DID: 0xF189 */
  ,{    0u,  27u,0x01u} /* DID: 0xF189 */
  ,{    0u,  28u,0x05u} /* DID: 0xF18C */
  ,{    0u,  30u,0x01u} /* DID: 0xF18C */
  ,{    0u,  31u,0x05u} /* DID: 0xF190 */
  ,{    0u,  33u,0x01u} /* DID: 0xF190 */
  ,{    0u,  34u,0x05u} /* DID: 0xF193 */
  ,{    0u,  36u,0x01u} /* DID: 0xF193 */
  ,{    0u,  37u,0x05u} /* DID: 0xF194 */
  ,{    0u,  39u,0x01u} /* DID: 0xF194 */
  ,{    0u,  40u,0x05u} /* DID: 0xF1A0 */
  ,{    0u,  42u,0x01u} /* DID: 0xF1A0 */
  ,{    0u,  43u,0x05u} /* DID: 0xF1A1 */
  ,{    0u,  45u,0x01u} /* DID: 0xF1A1 */
  ,{    0u,  46u,0x05u} /* DID: 0xF1A2 */
  ,{    0u,  48u,0x01u} /* DID: 0xF1A2 */
  ,{    0u,  49u,0x05u} /* DID: 0xF1A3 */
  ,{    0u,  51u,0x01u} /* DID: 0xF1A3 */
  ,{    0u,  52u,0x03u} /* DID: 0xF300 */
  ,{    0u,  54u,0x00u} /* DID: 0xF300 */
};
/*! DID operation classes */
CONST(Dcm_CfgDidMgrDidOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpClassInfo[55]=
{
   {  0u}
  ,{  5u}
  ,{ 10u}
  ,{ 15u}
  ,{ 16u}
  ,{ 17u}
  ,{ 18u}
  ,{ 19u}
  ,{ 20u}
  ,{ 21u}
  ,{ 22u}
  ,{ 23u}
  ,{ 24u}
  ,{ 25u}
  ,{ 26u}
  ,{ 27u}
  ,{ 28u}
  ,{ 29u}
  ,{ 30u}
  ,{ 31u}
  ,{ 33u}
  ,{ 35u}
  ,{ 37u}
  ,{ 38u}
  ,{ 39u}
  ,{ 40u}
  ,{ 41u}
  ,{ 42u}
  ,{ 43u}
  ,{ 44u}
  ,{ 45u}
  ,{ 46u}
  ,{ 47u}
  ,{ 48u}
  ,{ 49u}
  ,{ 50u}
  ,{ 51u}
  ,{ 52u}
  ,{ 53u}
  ,{ 54u}
  ,{ 55u}
  ,{ 56u}
  ,{ 57u}
  ,{ 58u}
  ,{ 59u}
  ,{ 60u}
  ,{ 61u}
  ,{ 62u}
  ,{ 63u}
  ,{ 64u}
  ,{ 65u}
  ,{ 66u}
  ,{ 67u}
  ,{ 68u}
  ,{ 69u}
};
/*! DID signal operation classes */
CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[69]=
{
   { ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_OperatingSystemVersion_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0100 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_CanDriverVersion_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0100 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_NmVersion_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0100 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_DiagnosticModuleVersion_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0100 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_TransportLayerVersion_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0100 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_OperatingSystemVersion_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_CanDriverVersion_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_NmVersion_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_DiagnosticModuleVersion_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_TransportLayerVersion_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0100 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_OperatingSystemVersion_WriteData)),   2u,   2u,0x1002u} /* DID: 0x0100 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_CanDriverVersion_WriteData)),   2u,   2u,0x1002u} /* DID: 0x0100 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_NmVersion_WriteData)),   2u,   2u,0x1002u} /* DID: 0x0100 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_DiagnosticModuleVersion_WriteData)),   2u,   2u,0x1002u} /* DID: 0x0100 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_TransportLayerVersion_WriteData)),   2u,   2u,0x1002u} /* DID: 0x0100 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DataDiagnosticIdentifier_DDI_DataDiagnosticIdentifier_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0101 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DataDiagnosticIdentifier_DDI_DataDiagnosticIdentifier_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0101 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DataDiagnosticIdentifier_DDI_DataDiagnosticIdentifier_WriteData)),   2u,   2u,0x1002u} /* DID: 0x0101 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0200_Data_ReadData)),   1u,   1u,0x0002u} /* DID: 0x0200 */                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0200_Data_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0200 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0200_Data_WriteData)),   1u,   1u,0x1002u} /* DID: 0x0200 */                                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0300_DID_Data_ReadData)),   4u,   4u,0x0002u} /* DID: 0x0300 */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0300_DID_Data_ReturnControlToECU)),   4u,   4u,0x2003u} /* DID: 0x0300 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0300_DID_Data_ResetToDefault)),   4u,   4u,0x2003u} /* DID: 0x0300 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0300_DID_Data_FreezeCurrentState)),   4u,   4u,0x2003u} /* DID: 0x0300 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0300_DID_Data_ShortTermAdjustment)),   4u,   4u,0x2004u} /* DID: 0x0300 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0400_DID_Data_ReadData)),   2u,   2u,0x0002u} /* DID: 0x0400 */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0x0400_DID_Data_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x0400 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_DID_00_DataRecord_ReadData)),   4u,   4u,0x0002u} /* DID: 0x1024 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_DID_00_DataRecord_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1024 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_DID_00_DataRecord_WriteData)),   4u,   4u,0x1002u} /* DID: 0x1024 */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Boot_Software_NumberOfModules_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF180 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Boot_Software_Boot_Software_Identification_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF180 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Boot_Software_NumberOfModules_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF180 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Boot_Software_Boot_Software_Identification_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF180 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Boot_Software_NumberOfModules_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF180 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Boot_Software_Boot_Software_Identification_WriteData)),   4u,   4u,0x1002u} /* DID: 0xF180 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Spare_Part_Number_Spare_Part_Number_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF187 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Spare_Part_Number_Spare_Part_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF187 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Spare_Part_Number_Spare_Part_Number_WriteData)),   4u,   4u,0x1002u} /* DID: 0xF187 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Part_Number_ReadData)),  13u,  13u,0x0002u} /* DID: 0xF189 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Part_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF189 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Part_Number_WriteData)),  13u,  13u,0x1002u} /* DID: 0xF189 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_SerialNumber_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF18C */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_SerialNumber_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18C */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_SerialNumber_WriteData)),   4u,   4u,0x1002u} /* DID: 0xF18C */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Identification_VIN_ReadData)),  17u,  17u,0x0002u} /* DID: 0xF190 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Identification_VIN_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF190 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_Identification_VIN_WriteData)),  17u,  17u,0x1002u} /* DID: 0xF190 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hardware_Version_Hardware_Version_Number_ReadData)),   4u,   4u,0x0002u} /* DID: 0xF193 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hardware_Version_Hardware_Version_Number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF193 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Hardware_Version_Hardware_Version_Number_WriteData)),   4u,   4u,0x1002u} /* DID: 0xF193 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF194_1_New_Data_Object_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF194 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF194_1_New_Data_Object_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF194 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF194_1_New_Data_Object_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF194 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A0_F1A0_Data_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF1A0 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A0_F1A0_Data_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A0 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A0_F1A0_Data_WriteData)),   2u,   2u,0x1002u} /* DID: 0xF1A0 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A1_F1A1_Data_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF1A1 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A1_F1A1_Data_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A1 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A1_F1A1_Data_WriteData)),   2u,   2u,0x1002u} /* DID: 0xF1A1 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A2_F1A2_Data_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF1A2 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A2_F1A2_Data_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A2 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A2_F1A2_Data_WriteData)),   2u,   2u,0x1002u} /* DID: 0xF1A2 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A3_F1A3_Data_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF1A3 */                            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A3_F1A3_Data_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A3 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DID_0xF1A3_F1A3_Data_WriteData)),   2u,   2u,0x1002u} /* DID: 0xF1A3 */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_F300_ReadData)),   0u,   0u,0x0007u} /* DID: 0xF300 */                                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Dcm_DidMgr_F300_ReadDataLength)),   0u,   0u,0x0102u} /* DID: 0xF300 */                                                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! IO control DID operation properties */
CONST(Dcm_CfgDidMgrOpInfoIoControlType, DCM_CONST) Dcm_CfgDidMgrOpInfoIoControl[1]=
{
   {   10u,   2u, 0u, 0u} /* DID: 0x0300 */
};
/*! Dynamically Defined DID operation properties */
CONST(Dcm_CfgDidMgrOpInfoDefineType, DCM_CONST) Dcm_CfgDidMgrOpInfoDefine[1]=
{
   {  0u, 5u} /* DID: 0xF300 */
};
/*! Bridge for combined DID operation properties */
CONST(Dcm_CfgDidMgrOpInfoCombinedType, DCM_CONST) Dcm_CfgDidMgrOpInfoCombined[1]=
{
   {    0u,   0u} /* DID: 0x0300 */
};
/*! RID properties */
CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[2]=
{
   {    0u,   1u,0x01u, 0u} /* RID: 0x0100 */
  ,{    1u,   1u,0x07u, 0u} /* RID: 0x0105 */
};
/*! RID operation properties */
CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[4]=
{
   { ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_New_Routine_Control_Start)),   0u,   0u,   0u,   0u, 0u, 0u} /* RID: 0x0100 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0105_Start)),   2u,   2u,   2u,   2u, 9u, 0u} /* RID: 0x0105 */                                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0105_Stop)),   2u,   2u,   2u,   2u, 9u, 0u} /* RID: 0x0105 */                                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0105_RequestResults)),   0u,   0u,   2u,   2u, 9u, 0u} /* RID: 0x0105 */                                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Properties of the MIDs */
CONST(Dcm_CfgMemMgrMemIdInfoType, DCM_CONST) Dcm_CfgMemMgrMidInfo[1]=
{
   { Dcm_CfgMemMgrMemMap,   1u}
};
/*! Properties of the memory map of a specific MID */
CONST(Dcm_CfgMemMgrMemMapInfoType, DCM_CONST) Dcm_CfgMemMgrMemMap[1]=
{
   { {    1u,   1u},0x00000000u,0xFFFFFFFEUL}
};
/*! DCM service initializers */
CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[4]=
{
   Dcm_Service27Init
  ,Dcm_Service2CInit
  ,Dcm_Service2FInit
  ,NULL_PTR /* end marker */
};
/*! DCM service properties */
CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[16]=
{
   { Dcm_Service10Processor,0x01u, 1u,   1u,   2u, 0u, 0u} /* SID: 0x10 */
  ,{ Dcm_Service11Processor,0x01u, 1u,   3u,   4u, 0u, 0u} /* SID: 0x11 */
  ,{ Dcm_Service14Processor,0x00u, 3u,   0u,   0u, 0u, 1u} /* SID: 0x14 */
  ,{ Dcm_Service19Processor,0x01u, 1u,   5u,   0u, 2u, 2u} /* SID: 0x19 */
  ,{ Dcm_Service22Processor,0x00u, 2u,   0u,   0u, 0u, 3u} /* SID: 0x22 */
  ,{ Dcm_Service23Processor,0x00u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x23 */
  ,{ Dcm_Service27Processor,0x03u, 1u,   6u,   0u, 0u, 0u} /* SID: 0x27 */
  ,{ Dcm_Service28Processor,0x01u, 1u,   7u,   0u, 0u, 0u} /* SID: 0x28 */
  ,{ Dcm_Service2CProcessor,0x01u, 1u,   8u,   0u, 0u, 0u} /* SID: 0x2C */
  ,{ Dcm_Service2EProcessor,0x00u, 3u,   0u,   0u, 0u, 4u} /* SID: 0x2E */
  ,{ Dcm_Service2FProcessor,0x00u, 3u,   9u,   0u, 0u, 5u} /* SID: 0x2F */
  ,{ Dcm_Service31Processor,0x01u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x31 */
  ,{ Dcm_Service3DProcessor,0x00u, 4u,   0u,   0u, 0u, 0u} /* SID: 0x3D */
  ,{ Dcm_Service3EProcessor,0x01u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x3E */
  ,{ Dcm_Service85Processor,0x01u, 1u,  10u,   0u, 0u, 6u} /* SID: 0x85 */
  ,{ Dcm_RepeaterDeadEnd,0x00u, 0u,   0u,   0u, 0u, 0u} /* Dcm_RepeaterDeadEnd */
};
/*! Indirection from diag service info to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[15]=
{
      0u /* SID: 0x10 */
  ,   0u /* SID: 0x11 */
  ,   0u /* SID: 0x14 */
  ,   0u /* SID: 0x19 */
  ,   0u /* SID: 0x22 */
  ,   0u /* SID: 0x23 */
  ,   1u /* SID: 0x27 */
  ,   1u /* SID: 0x28 */
  ,   0u /* SID: 0x2C */
  ,   0u /* SID: 0x2E */
  ,   2u /* SID: 0x2F */
  ,   1u /* SID: 0x31 */
  ,   0u /* SID: 0x3D */
  ,   0u /* SID: 0x3E */
  ,   0u /* SID: 0x85 */
};
/*! DCM service post processors */
CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[11]=
{
   Dcm_ServiceNoPostProcessor
  ,Dcm_Service10PostProcessor
  ,Dcm_Service10FastPostProcessor
  ,Dcm_Service11PostProcessor
  ,Dcm_Service11FastPostProcessor
  ,Dcm_Service19PostProcessor
  ,Dcm_Service27PostProcessor
  ,Dcm_Service28PostProcessor
  ,Dcm_Service2CPostProcessor
  ,Dcm_Service2FPostProcessor
  ,Dcm_Service85PostProcessor
};
/*! DCM service paged buffer updater */
CONST(Dcm_DiagSvcUpdateFuncType, DCM_CONST) Dcm_CfgDiagSvcUpdaters[3]=
{
   Dcm_ServiceNoUpdater
  ,Dcm_PagedBufferDataPadding
  ,Dcm_Service19Updater
};
/*! DCM service paged buffer canceller */
CONST(Dcm_DiagSvcCancelFuncType, DCM_CONST) Dcm_CfgDiagSvcCancellers[7]=
{
   Dcm_ServiceNoCancel
  ,Dcm_Service14Cancel
  ,Dcm_Service19Cancel
  ,Dcm_Service22Cancel
  ,Dcm_Service2ECancel
  ,Dcm_Service2FCancel
  ,Dcm_Service85Cancel
};
/*! OEM notification functions */
CONST(Dcm_CfgDiagNotificationInfoType, DCM_CONST) Dcm_CfgDiagOemNotificationInfo[1]=
{
   { NULL_PTR,NULL_PTR}
};
/*! System supplier notification functions */
CONST(Dcm_CfgDiagNotificationInfoType, DCM_CONST) Dcm_CfgDiagSysNotificationInfo[1]=
{
   { NULL_PTR,NULL_PTR}
};
/*! DCM service to protocol map */
CONST(Dcm_CfgDiagSvc2ProtMapMemType, DCM_CONST) Dcm_CfgDiagSvcId2ProtMap[15]=
{
   0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
  ,0x01u
};
/*! Service 0x10 sub-service properties table  */
CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[3]=
{
   { { 50u, 500u}} /* Session ID: 0x01 */
  ,{ { 50u, 500u}} /* Session ID: 0x02 */
  ,{ { 50u, 500u}} /* Session ID: 0x03 */
};
/*! Indirection from service 0x10 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[3]=
{
      0u /* Session ID: 0x01 */
  ,   0u /* Session ID: 0x02 */
  ,   0u /* Session ID: 0x03 */
};
/*! Service 0x11 sub-service properties table  */
CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[2]=
{
   { Dcm_SubSvcWrapper_DcmService_HardReset} /* SF: 0x01 */
  ,{ Dcm_Service11_03Processor} /* SF: 0x03 */
};
/*! Indirection from service 0x11 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[2]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x03 */
};
/*! Service 0x19 sub-service properties table  */
CONST(Dcm_CfgSvc19SubFuncInfoType, DCM_CONST) Dcm_CfgSvc19SubFuncInfo[14]=
{
   { Dcm_Service19_01Processor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service19_02Processor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service19_03Processor, 1u} /* SF: 0x03 */
  ,{ Dcm_Service19_04Processor, 5u} /* SF: 0x04 */
  ,{ Dcm_Service19_06Processor, 5u} /* SF: 0x06 */
  ,{ Dcm_Service19_07Processor, 3u} /* SF: 0x07 */
  ,{ Dcm_Service19_08Processor, 3u} /* SF: 0x08 */
  ,{ Dcm_Service19_09Processor, 4u} /* SF: 0x09 */
  ,{ Dcm_Service19_0AProcessor, 1u} /* SF: 0x0A */
  ,{ Dcm_Service19_0BProcessor, 1u} /* SF: 0x0B */
  ,{ Dcm_Service19_0CProcessor, 1u} /* SF: 0x0C */
  ,{ Dcm_Service19_0DProcessor, 1u} /* SF: 0x0D */
  ,{ Dcm_Service19_0EProcessor, 1u} /* SF: 0x0E */
  ,{ Dcm_Service19_14Processor, 1u} /* SF: 0x14 */
};
/*! Indirection from service 0x19 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc19SubFuncExecPrecondTable[14]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x02 */
  ,   0u /* SF: 0x03 */
  ,   0u /* SF: 0x04 */
  ,   0u /* SF: 0x06 */
  ,   0u /* SF: 0x07 */
  ,   0u /* SF: 0x08 */
  ,   0u /* SF: 0x09 */
  ,   0u /* SF: 0x0A */
  ,   0u /* SF: 0x0B */
  ,   0u /* SF: 0x0C */
  ,   0u /* SF: 0x0D */
  ,   0u /* SF: 0x0E */
  ,   0u /* SF: 0x14 */
};
/*! Service 0x27 sub-service properties table  */
CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[4]=
{
   {    1u} /* SF: 0x01 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{    5u} /* SF: 0x02 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{    3u} /* SF: 0x03 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{    3u} /* SF: 0x04 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Service 0x27 security level properties table  */
CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[2]=
{
   { ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_UnlockedL1_GetSeed)),Rte_Call_SecurityAccess_UnlockedL1_CompareKey,Dcm_Svc27_Dummy_GetSecurityAttemptCounter,Dcm_Svc27_Dummy_SetSecurityAttemptCounter,   4u, 0u} /* SecLvl: UnlockedL1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_Level_3_GetSeed)),Rte_Call_SecurityAccess_Level_3_CompareKey,Rte_Call_SecurityAccess_Level_3_GetSecurityAttemptCounter,Rte_Call_SecurityAccess_Level_3_SetSecurityAttemptCounter,   2u, 1u} /* SecLvl: Level_3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Indirection from service 0x27 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[4]=
{
      1u /* SF: 0x01 */
  ,   1u /* SF: 0x02 */
  ,   1u /* SF: 0x03 */
  ,   1u /* SF: 0x04 */
};
/*! Service 0x28 sub-service properties table  */
CONST(Dcm_CfgSvc28SubFuncInfoType, DCM_CONST) Dcm_CfgSvc28SubFuncInfo[4]=
{
   { Dcm_Service28_XXProcessor, 2u} /* SF: 0x00 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x03 */
};
/*! Indirection from service 0x28 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc28SubFuncExecPrecondTable[4]=
{
      1u /* SF: 0x00 */
  ,   1u /* SF: 0x01 */
  ,   1u /* SF: 0x02 */
  ,   1u /* SF: 0x03 */
};
/*! Service 0x28 network ID to ComM channel map */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgSvc28SubNetIdMap[2]=
{
   DCM_SVC_28_NETWORK_ALL
  ,DCM_SVC_28_NETWORK_CURRENT
};
/*! Service 0x2C sub-service properties table  */
CONST(Dcm_CfgSvc2CSubFuncInfoType, DCM_CONST) Dcm_CfgSvc2CSubFuncInfo[3]=
{
   { Dcm_Service2C_01Processor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service2C_02Processor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service2C_03Processor, 0u} /* SF: 0x03 */
};
/*! Indirection from service 0x2C sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc2CSubFuncExecPrecondTable[3]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x02 */
  ,   0u /* SF: 0x03 */
};
/*! Indirection from service 0x3E sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1]=
{
      0u /* SF: 0x00 */
};
/*! Indirection from service 0x85 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[2]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x02 */
};
/*! DCM service 0x85 properties */
CONST(Dcm_CfgSvc85SubFuncInfoType, DCM_CONST) Dcm_CfgSvc85SubFuncInfo[2]=
{
   { Dem_EnableDTCSetting,RTE_MODE_DcmControlDtcSetting_ENABLEDTCSETTING} /* SF: 0x01 */
  ,{ Dem_DisableDTCSetting,RTE_MODE_DcmControlDtcSetting_DISABLEDTCSETTING} /* SF: 0x02 */
};
#define DCM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
#define DCM_START_SEC_CALLOUT_CODE
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  Dcm_DidMgr_F300_ReadData()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_DidMgr<DynDID>Read<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F300_ReadData(
  uint16 DID,
  Dcm_OpStatusType opStatus,
  Dcm_DiagDataContextPtrType pDataContext
  )
{
  DCM_IGNORE_UNREF_PARAM(DID);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return Dcm_Svc2CDefMgrRead(0u, opStatus, pDataContext);  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_DidMgr_F300_ReadDataLength()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_DidMgr<DynDID>Read<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DidMgr_F300_ReadDataLength(
  Dcm_OpStatusType opStatus,
  P2VAR(Dcm_DidMgrDidLengthType, AUTOMATIC, DCM_VAR_NOINIT) dataLength
  )
{
  DCM_IGNORE_UNREF_PARAM(opStatus);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return Dcm_Svc2CDefMgrReadDataLength(0u, dataLength);  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0105_Start()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0105_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_RidMgrRidLengthPtrType DataLength,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_NegativeResponseCodePtrType ErrorCode  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  )
{
  uint16 dataInIn_New_Data_Object;
  uint16 dataOutOut_New_Data_Object;
  Std_ReturnType stdReturn;

  dataInIn_New_Data_Object = ((uint16)(Dcm_UtiMake16Bit(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 0u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 1u))));  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */

  DCM_IGNORE_UNREF_PARAM(DataLength);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */

  stdReturn = Rte_Call_RoutineServices_Vcu_Roution_00_Start(
                dataInIn_New_Data_Object,
                OpStatus,
                &dataOutOut_New_Data_Object,
                ErrorCode
                );  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ 
  if (E_OK == stdReturn)
  {
    {
      Dcm_UtiSetResDataAsU8Rel(pMsgContext, 0u, Dcm_UtiGetHiByte(dataOutOut_New_Data_Object));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_UtiSetResDataAsU8Rel(pMsgContext, 1u, Dcm_UtiGetLoByte(dataOutOut_New_Data_Object));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
  }
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0105_Stop()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0105_Stop(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_RidMgrRidLengthPtrType DataLength,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_NegativeResponseCodePtrType ErrorCode  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  )
{
  uint16 dataInIn_New_Data_Object;
  uint16 dataOutOut_New_Data_Object;
  Std_ReturnType stdReturn;

  dataInIn_New_Data_Object = ((uint16)(Dcm_UtiMake16Bit(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 0u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 1u))));  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */

  DCM_IGNORE_UNREF_PARAM(DataLength);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */

  stdReturn = Rte_Call_RoutineServices_Vcu_Roution_00_Stop(
                dataInIn_New_Data_Object,
                OpStatus,
                &dataOutOut_New_Data_Object,
                ErrorCode
                );  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ 
  if (E_OK == stdReturn)
  {
    {
      Dcm_UtiSetResDataAsU8Rel(pMsgContext, 0u, Dcm_UtiGetHiByte(dataOutOut_New_Data_Object));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_UtiSetResDataAsU8Rel(pMsgContext, 1u, Dcm_UtiGetLoByte(dataOutOut_New_Data_Object));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
  }
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_0105_RequestResults()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0105_RequestResults(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_RidMgrRidLengthPtrType DataLength,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_NegativeResponseCodePtrType ErrorCode  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  )
{
  uint16 dataOutOut_New_Data_Object;
  Std_ReturnType stdReturn;

  DCM_IGNORE_UNREF_PARAM(DataLength);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */

  stdReturn = Rte_Call_RoutineServices_Vcu_Roution_00_RequestResults(
                OpStatus,
                &dataOutOut_New_Data_Object,
                ErrorCode
                );  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ 
  if (E_OK == stdReturn)
  {
    {
      Dcm_UtiSetResDataAsU8Rel(pMsgContext, 0u, Dcm_UtiGetHiByte(dataOutOut_New_Data_Object));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
      Dcm_UtiSetResDataAsU8Rel(pMsgContext, 1u, Dcm_UtiGetLoByte(dataOutOut_New_Data_Object));  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
    }
  }
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoPostProcessor()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoPostProcessor() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoPostProcessor(
  Dcm_ContextPtrType pContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_ConfirmationStatusType status
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  DCM_IGNORE_UNREF_PARAM(status);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoUpdater()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoUpdater() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_ServiceNoUpdater(
  Dcm_ContextPtrType pContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_OpStatusType opStatus,
  Dcm_DiagDataContextPtrType pDataContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_NegativeResponseCodePtrType ErrorCode  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  DCM_IGNORE_UNREF_PARAM(opStatus);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  DCM_IGNORE_UNREF_PARAM(pDataContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  DCM_IGNORE_UNREF_PARAM(ErrorCode);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return E_NOT_OK;
}
/***********************************************************************************************************************
 *  Dcm_ServiceNoCancel()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_ServiceNoCancel() */
DCM_LOCAL FUNC(void, DCM_CALLOUT_CODE) Dcm_ServiceNoCancel(
  Dcm_ContextPtrType pContext  /* PRQA S 3673 */ /* MD_Dcm_Design_3673 */
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  /* nothing to do */
}
/***********************************************************************************************************************
 *  Dcm_SubSvcWrapper_DcmService_HardReset()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_SubSvcWrapper_<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SubSvcWrapper_DcmService_HardReset(
  Dcm_ContextPtrType pContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_OpStatusType opStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return DcmService_HardReset(opStatus, pMsgContext, ErrorCode);  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_Svc27_Dummy_GetSecurityAttemptCounter()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_Svc27_Dummy_GetSecurityAttemptCounter() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Svc27_Dummy_GetSecurityAttemptCounter(
  Dcm_OpStatusType OpStatus,
  P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) AttemptCounter
  )
{
  DCM_IGNORE_UNREF_PARAM(OpStatus);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  *AttemptCounter =  0u; /* Set counter always to zero */  /* SBSW_DCM_GEN_PARAM_PTR_WRITE */
  return E_OK;
}
/***********************************************************************************************************************
 *  Dcm_Svc27_Dummy_SetSecurityAttemptCounter()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_Svc27_Dummy_SetSecurityAttemptCounter() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Svc27_Dummy_SetSecurityAttemptCounter(
  Dcm_OpStatusType OpStatus, 
  uint8 AttemptCounter
  )
{
  DCM_IGNORE_UNREF_PARAM(OpStatus);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  DCM_IGNORE_UNREF_PARAM(AttemptCounter);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return E_OK;
}
#define DCM_STOP_SEC_CALLOUT_CODE
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  END OF FILE: Dcm_Lcfg.c
 *********************************************************************************************************************/

