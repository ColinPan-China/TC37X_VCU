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
 *   Generation Time: 2025-09-12 10:25:41
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
 *  Dcm_RidMgr_0202_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0202_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_RidMgrRidLengthPtrType DataLength,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_RidMgr_FF00_Start()
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_FF00_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_RidMgrRidLengthPtrType DataLength,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_SvcWrapper_Dcm_DiagnosticService_0x01()
 ***********************************************************************************************************************/
/*! \brief         Wraps a specific externally implemented service-processor.
 *  \details       Encapsulates the internally used pContext parameter.
 *  \param[in]     pContext              Pointer to the context
 *  \param[in]     opStatus              The operation status
 *  \param[in,out] pMsgContext           Message-related information for one diagnostic protocol identifier
 *                                       The pointers in pMsgContext points behind the SID.
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SvcWrapper_Dcm_DiagnosticService_0x01(
  Dcm_ContextPtrType pContext,
  Dcm_OpStatusType opStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_SvcWrapper_Dcm_DiagnosticService_0x09()
 ***********************************************************************************************************************/
/*! \brief         Wraps a specific externally implemented service-processor.
 *  \details       Encapsulates the internally used pContext parameter.
 *  \param[in]     pContext              Pointer to the context
 *  \param[in]     opStatus              The operation status
 *  \param[in,out] pMsgContext           Message-related information for one diagnostic protocol identifier
 *                                       The pointers in pMsgContext points behind the SID.
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SvcWrapper_Dcm_DiagnosticService_0x09(
  Dcm_ContextPtrType pContext,
  Dcm_OpStatusType opStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  );
/***********************************************************************************************************************
 *  Dcm_SvcWrapper_Dcm_DiagnosticService_0x38()
 ***********************************************************************************************************************/
/*! \brief         Wraps a specific externally implemented service-processor.
 *  \details       Encapsulates the internally used pContext parameter.
 *  \param[in]     pContext              Pointer to the context
 *  \param[in]     opStatus              The operation status
 *  \param[in,out] pMsgContext           Message-related information for one diagnostic protocol identifier
 *                                       The pointers in pMsgContext points behind the SID.
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
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SvcWrapper_Dcm_DiagnosticService_0x38(
  Dcm_ContextPtrType pContext,
  Dcm_OpStatusType opStatus,
  Dcm_MsgContextPtrType pMsgContext,
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
CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[2]=
{
    1u
  , 0u
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
  , 1u
};
/*! Look up table of all supported transfer ALFIDs */
CONST(uint8, DCM_CONST) Dcm_CfgFblMgrTransferAlfidLookUpTable[17]=
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
/*! Look up table of all supported transfer MIDs */
CONST(uint8, DCM_CONST) Dcm_CfgFblMgrTransferMidLookUpTable[1]=
{
   0u
};
/*! Look up table of DCM service identifiers */
CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[18]=
{
   17u
  ,0x01u
  ,0x09u
  ,0x10u
  ,0x11u
  ,0x14u
  ,0x19u
  ,0x22u
  ,0x27u
  ,0x28u
  ,0x2Eu
  ,0x31u
  ,0x34u
  ,0x36u
  ,0x37u
  ,0x38u
  ,0x3Eu
  ,0x85u
};
/*! Service 0x10 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[5]=
{
   4u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x41u
};
/*! Service 0x11 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[3]=
{
   2u
  ,0x01u
  ,0x03u
};
/*! Service 0x19 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc19SubFuncLookUpTable[7]=
{
   6u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x04u
  ,0x06u
  ,0x0Au
};
/*! Service 0x27 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[9]=
{
   8u
  ,0x01u
  ,0x02u
  ,0x03u
  ,0x04u
  ,0x05u
  ,0x06u
  ,0x07u
  ,0x08u
};
/*! Service 0x28 look up table  */
CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubFuncLookUpTable[3]=
{
   2u
  ,0x00u
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
CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[51]=
{
   50u
  ,0x016Cu
  ,0x1D01u
  ,0x1D02u
  ,0x1D03u
  ,0x1D04u
  ,0x1D05u
  ,0x1D06u
  ,0x1D07u
  ,0x1D08u
  ,0x1D09u
  ,0x1D10u
  ,0x1D11u
  ,0x1D12u
  ,0x1D13u
  ,0x1D14u
  ,0x1D15u
  ,0x1D19u
  ,0x1D20u
  ,0x1D21u
  ,0xF010u
  ,0xF011u
  ,0xF012u
  ,0xF013u
  ,0xF014u
  ,0xF015u
  ,0xF016u
  ,0xF017u
  ,0xF020u
  ,0xF021u
  ,0xF101u
  ,0xF102u
  ,0xF104u
  ,0xF108u
  ,0xF10Au
  ,0xF10Fu
  ,0xF186u
  ,0xF187u
  ,0xF18Au
  ,0xF18Bu
  ,0xF18Cu
  ,0xF190u
  ,0xF192u
  ,0xF1A0u
  ,0xF1A1u
  ,0xF1A2u
  ,0xF1A3u
  ,0xF1A4u
  ,0xF1A5u
  ,0xF1A6u
  ,0xF1A7u
};
/*! RID look up table  */
CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[8]=
{
   7u
  ,0x0102u
  ,0x0202u
  ,0x0203u
  ,0x9D00u
  ,0xF000u
  ,0xFF00u
  ,0xFF01u
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
CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[6]=
{
   { TRUE, 1u}
  ,{ TRUE, 1u}
  ,{ TRUE, 1u}
  ,{ FALSE, 1u}
  ,{ TRUE, 0u}
  ,{ FALSE, 0u}
};
/*! DCM connection descriptor */
CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[2]=
{
   { 0x000Bu,PduRConf_PduRSrcPdu_PduRSrcPdu_59ef7a2a, 0u,0u,0x00u,0x00u, 0u}
  ,{ 0x000Au,PduRConf_PduRSrcPdu_PduRSrcPdu_d836fcb2, 0u,0u,0x00u,0x00u, 0u}
};
/*! DCM protocol descriptor */
CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1]=
{
   { {        0u,       0u},4095u, 3u, 0u,TRUE,0u,DemConf_DemClient_DemClient, 0u}
};
/*! Map of all relevant for DCM network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[2]=
{
   ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d
  ,ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8
};
/*! Look up table of DCM relevant network handles */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2]=
{
   1u
  ,ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d
};
/*! Diagnostic service execution conditions */
CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[15]=
{
   { { 0x0Du,0x1Fu}}
  ,{ { 0x0Fu,0x1Fu}}
  ,{ { 0x06u,0x1Fu}}
  ,{ { 0x0Cu,0x1Fu}}
  ,{ { 0x0Eu,0x1Fu}}
  ,{ { 0x04u,0x1Fu}}
  ,{ { 0x0Cu,0x1Eu}}
  ,{ { 0x02u,0x10u}}
  ,{ { 0x04u,0x04u}}
  ,{ { 0x04u,0x02u}}
  ,{ { 0x04u,0x08u}}
  ,{ { 0x04u,0x10u}}
  ,{ { 0x04u,0x06u}}
  ,{ { 0x08u,0x08u}}
  ,{ { 0x04u,0x16u}}
};
/*! Session state properties */
CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[4]=
{
   { {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_DEFAULT_SESSION,0x01u}
  ,{ {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_PROGRAMMING_SESSION,0x02u}
  ,{ {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_EXTENDED_SESSION,0x03u}
  ,{ {        5u,     500u},RTE_MODE_DcmDiagnosticSessionControl_Coding_Session,0x41u}
};
/*! Security Access state properties */
CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[4]=
{
   { 1000u,   0u,FALSE, 3u,0x01u} /* SecLvl: UnlockedL1 */
  ,{ 1000u,   0u,FALSE, 3u,0x02u} /* SecLvl: Unlocked_Level_2 */
  ,{ 1000u,   0u,FALSE, 3u,0x03u} /* SecLvl: Unlocked_Level_3 */
  ,{ 1000u,   0u,FALSE, 3u,0x04u} /* SecLvl: Unlocked_Level_4 */
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
CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[50]=
{
   {    1u,   1u,   1u,   0u,   0u,0x01u} /* DID: 0x016C */
  ,{    8u,   8u,   8u,   1u,   0u,0x01u} /* DID: 0x1D01 */
  ,{    8u,   8u,   8u,   2u,   0u,0x01u} /* DID: 0x1D02 */
  ,{    1u,   1u,   1u,   3u,   0u,0x01u} /* DID: 0x1D03 */
  ,{    6u,   6u,   6u,   4u,   0u,0x01u} /* DID: 0x1D04 */
  ,{    8u,   8u,   8u,   5u,   0u,0x01u} /* DID: 0x1D05 */
  ,{    1u,   1u,   1u,   6u,   0u,0x01u} /* DID: 0x1D06 */
  ,{    1u,   1u,   1u,   7u,   0u,0x01u} /* DID: 0x1D07 */
  ,{    1u,   1u,   1u,   8u,   0u,0x01u} /* DID: 0x1D08 */
  ,{    1u,   1u,   1u,   9u,   0u,0x01u} /* DID: 0x1D09 */
  ,{    6u,   6u,   6u,  10u,   0u,0x01u} /* DID: 0x1D10 */
  ,{    2u,   2u,   2u,  11u,   0u,0x01u} /* DID: 0x1D11 */
  ,{    3u,   3u,   3u,  12u,   0u,0x01u} /* DID: 0x1D12 */
  ,{    2u,   2u,   2u,  13u,   0u,0x01u} /* DID: 0x1D13 */
  ,{    2u,   2u,   2u,  14u,   0u,0x01u} /* DID: 0x1D14 */
  ,{    5u,   5u,   5u,  15u,   0u,0x01u} /* DID: 0x1D15 */
  ,{    3u,   3u,   3u,  16u,   0u,0x01u} /* DID: 0x1D19 */
  ,{    3u,   3u,   3u,  17u,   0u,0x03u} /* DID: 0x1D20 */
  ,{    7u,   7u,   7u,  19u,   0u,0x01u} /* DID: 0x1D21 */
  ,{   17u,  17u,  17u,  20u,   0u,0x02u} /* DID: 0xF010 */
  ,{    1u,   1u,   1u,  21u,   0u,0x01u} /* DID: 0xF011 */
  ,{   17u,  17u,  17u,  22u,   0u,0x02u} /* DID: 0xF012 */
  ,{    1u,   1u,   1u,  23u,   0u,0x01u} /* DID: 0xF013 */
  ,{   17u,  17u,  17u,  24u,   0u,0x02u} /* DID: 0xF014 */
  ,{    1u,   1u,   1u,  25u,   0u,0x01u} /* DID: 0xF015 */
  ,{   17u,  17u,  17u,  26u,   0u,0x02u} /* DID: 0xF016 */
  ,{    1u,   1u,   1u,  27u,   0u,0x01u} /* DID: 0xF017 */
  ,{   22u,  22u,  22u,  28u,   0u,0x01u} /* DID: 0xF020 */
  ,{   22u,  22u,  22u,  29u,   0u,0x01u} /* DID: 0xF021 */
  ,{    3u,   3u,   3u,  30u,   0u,0x01u} /* DID: 0xF101 */
  ,{   15u,  15u,  15u,  31u,   0u,0x03u} /* DID: 0xF102 */
  ,{    3u,   3u,   3u,  33u,   0u,0x01u} /* DID: 0xF104 */
  ,{   16u,  16u,  16u,  34u,   0u,0x03u} /* DID: 0xF108 */
  ,{   30u,  30u,  30u,  36u,   0u,0x03u} /* DID: 0xF10A */
  ,{    3u,   3u,   3u,  38u,   0u,0x03u} /* DID: 0xF10F */
  ,{    1u,   1u,   1u,  40u,   0u,0x01u} /* DID: 0xF186 */
  ,{   15u,  15u,  15u,  41u,   0u,0x01u} /* DID: 0xF187 */
  ,{    6u,   6u,   6u,  42u,   0u,0x01u} /* DID: 0xF18A */
  ,{    3u,   3u,   3u,  43u,   0u,0x01u} /* DID: 0xF18B */
  ,{   20u,  20u,  20u,  44u,   0u,0x01u} /* DID: 0xF18C */
  ,{   17u,  17u,  17u,  45u,   0u,0x03u} /* DID: 0xF190 */
  ,{    2u,   2u,   2u,  47u,   0u,0x01u} /* DID: 0xF192 */
  ,{    1u,   1u,   1u,  48u,   0u,0x01u} /* DID: 0xF1A0 */
  ,{    2u,   2u,   2u,  49u,   0u,0x01u} /* DID: 0xF1A1 */
  ,{    3u,   3u,   3u,  50u,   0u,0x01u} /* DID: 0xF1A2 */
  ,{    2u,   2u,   2u,  51u,   0u,0x01u} /* DID: 0xF1A3 */
  ,{    6u,   6u,   6u,  52u,   0u,0x01u} /* DID: 0xF1A4 */
  ,{    1u,   1u,   1u,  53u,   0u,0x01u} /* DID: 0xF1A5 */
  ,{    2u,   2u,   2u,  54u,   0u,0x01u} /* DID: 0xF1A6 */
  ,{    1u,   1u,   1u,  55u,   0u,0x01u} /* DID: 0xF1A7 */
};
/*! DID operation properties */
CONST(Dcm_CfgDidMgrDidOpInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpInfo[56]=
{
   {    0u,   0u,0x05u} /* DID: 0x016C */
  ,{    0u,   2u,0x05u} /* DID: 0x1D01 */
  ,{    0u,   4u,0x05u} /* DID: 0x1D02 */
  ,{    0u,   6u,0x05u} /* DID: 0x1D03 */
  ,{    0u,   8u,0x05u} /* DID: 0x1D04 */
  ,{    0u,  10u,0x05u} /* DID: 0x1D05 */
  ,{    0u,  12u,0x05u} /* DID: 0x1D06 */
  ,{    0u,  14u,0x05u} /* DID: 0x1D07 */
  ,{    0u,  16u,0x05u} /* DID: 0x1D08 */
  ,{    0u,  18u,0x05u} /* DID: 0x1D09 */
  ,{    0u,  20u,0x05u} /* DID: 0x1D10 */
  ,{    0u,  22u,0x05u} /* DID: 0x1D11 */
  ,{    0u,  24u,0x05u} /* DID: 0x1D12 */
  ,{    0u,  26u,0x05u} /* DID: 0x1D13 */
  ,{    0u,  28u,0x05u} /* DID: 0x1D14 */
  ,{    0u,  30u,0x05u} /* DID: 0x1D15 */
  ,{    0u,  32u,0x05u} /* DID: 0x1D19 */
  ,{    0u,  34u,0x05u} /* DID: 0x1D20 */
  ,{    8u,  36u,0x01u} /* DID: 0x1D20 */
  ,{    0u,  37u,0x05u} /* DID: 0x1D21 */
  ,{    9u,  39u,0x01u} /* DID: 0xF010 */
  ,{    0u,  40u,0x05u} /* DID: 0xF011 */
  ,{    8u,  42u,0x01u} /* DID: 0xF012 */
  ,{    0u,  43u,0x05u} /* DID: 0xF013 */
  ,{   10u,  45u,0x01u} /* DID: 0xF014 */
  ,{    0u,  46u,0x05u} /* DID: 0xF015 */
  ,{   11u,  48u,0x01u} /* DID: 0xF016 */
  ,{    0u,  49u,0x05u} /* DID: 0xF017 */
  ,{    0u,  51u,0x05u} /* DID: 0xF020 */
  ,{    0u,  53u,0x05u} /* DID: 0xF021 */
  ,{    0u,  55u,0x05u} /* DID: 0xF101 */
  ,{    0u,  57u,0x05u} /* DID: 0xF102 */
  ,{   12u,  59u,0x01u} /* DID: 0xF102 */
  ,{    0u,  60u,0x05u} /* DID: 0xF104 */
  ,{    0u,  62u,0x05u} /* DID: 0xF108 */
  ,{   13u,  64u,0x01u} /* DID: 0xF108 */
  ,{    0u,  65u,0x05u} /* DID: 0xF10A */
  ,{   13u,  67u,0x01u} /* DID: 0xF10A */
  ,{    0u,  68u,0x05u} /* DID: 0xF10F */
  ,{    9u,  70u,0x01u} /* DID: 0xF10F */
  ,{    1u,  71u,0x05u} /* DID: 0xF186 */
  ,{    0u,  73u,0x05u} /* DID: 0xF187 */
  ,{    0u,  75u,0x05u} /* DID: 0xF18A */
  ,{    0u,  77u,0x05u} /* DID: 0xF18B */
  ,{    0u,  79u,0x05u} /* DID: 0xF18C */
  ,{    0u,  81u,0x05u} /* DID: 0xF190 */
  ,{   12u,  83u,0x01u} /* DID: 0xF190 */
  ,{    0u,  84u,0x05u} /* DID: 0xF192 */
  ,{    0u,  86u,0x05u} /* DID: 0xF1A0 */
  ,{    0u,  88u,0x05u} /* DID: 0xF1A1 */
  ,{    0u,  90u,0x05u} /* DID: 0xF1A2 */
  ,{    0u,  92u,0x05u} /* DID: 0xF1A3 */
  ,{    0u,  94u,0x05u} /* DID: 0xF1A4 */
  ,{    0u,  96u,0x05u} /* DID: 0xF1A5 */
  ,{    0u,  98u,0x05u} /* DID: 0xF1A6 */
  ,{    0u, 100u,0x05u} /* DID: 0xF1A7 */
};
/*! DID operation classes */
CONST(Dcm_CfgDidMgrDidOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrDidOpClassInfo[103]=
{
   {  0u}
  ,{  1u}
  ,{  2u}
  ,{  6u}
  ,{ 10u}
  ,{ 14u}
  ,{ 18u}
  ,{ 19u}
  ,{ 20u}
  ,{ 24u}
  ,{ 28u}
  ,{ 32u}
  ,{ 36u}
  ,{ 37u}
  ,{ 38u}
  ,{ 39u}
  ,{ 40u}
  ,{ 41u}
  ,{ 42u}
  ,{ 43u}
  ,{ 44u}
  ,{ 47u}
  ,{ 50u}
  ,{ 52u}
  ,{ 54u}
  ,{ 57u}
  ,{ 60u}
  ,{ 62u}
  ,{ 64u}
  ,{ 66u}
  ,{ 68u}
  ,{ 73u}
  ,{ 78u}
  ,{ 81u}
  ,{ 84u}
  ,{ 85u}
  ,{ 86u}
  ,{ 87u}
  ,{ 93u}
  ,{ 99u}
  ,{ 101u}
  ,{ 102u}
  ,{ 103u}
  ,{ 105u}
  ,{ 106u}
  ,{ 107u}
  ,{ 109u}
  ,{ 110u}
  ,{ 111u}
  ,{ 113u}
  ,{ 114u}
  ,{ 115u}
  ,{ 136u}
  ,{ 157u}
  ,{ 178u}
  ,{ 199u}
  ,{ 202u}
  ,{ 205u}
  ,{ 210u}
  ,{ 215u}
  ,{ 220u}
  ,{ 223u}
  ,{ 226u}
  ,{ 242u}
  ,{ 258u}
  ,{ 274u}
  ,{ 278u}
  ,{ 282u}
  ,{ 286u}
  ,{ 289u}
  ,{ 292u}
  ,{ 295u}
  ,{ 296u}
  ,{ 297u}
  ,{ 302u}
  ,{ 307u}
  ,{ 310u}
  ,{ 313u}
  ,{ 316u}
  ,{ 319u}
  ,{ 323u}
  ,{ 327u}
  ,{ 330u}
  ,{ 333u}
  ,{ 336u}
  ,{ 338u}
  ,{ 340u}
  ,{ 341u}
  ,{ 342u}
  ,{ 343u}
  ,{ 344u}
  ,{ 345u}
  ,{ 346u}
  ,{ 347u}
  ,{ 348u}
  ,{ 354u}
  ,{ 360u}
  ,{ 361u}
  ,{ 362u}
  ,{ 363u}
  ,{ 364u}
  ,{ 365u}
  ,{ 366u}
};
/*! DID signal operation classes */
CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[366]=
{
   { ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ReadData)),   1u,   1u,0x0002u} /* DID: 0x016C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_HV_Status_and_Charging_Status_HV_status_and_charging_status_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x016C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D01 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D01 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D01 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D01 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_AccPealparameter_VCU_VehicleSpeed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D01 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_1_voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D01 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_AccPealparameter_Accelerator_pedal_sensor_2_voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D01 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_AccPealparameter_VCU_AccelerationPedal_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D01 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D02 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D02 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D02 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D02 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_Torque_parameter_VCU_MCUDesiredTorque_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D02 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_Torque_parameter_Torque_MinAllowed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D02 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_Torque_parameter_Torque_MaxAllowed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D02 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_Torque_parameter_VCU_RegenTorqueCap_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D02 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Driver_Mode_Driver_Mode_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D03 */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Driver_Mode_Driver_Mode_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D03 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D04 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_TCUPowerAllowed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DCDCPowerLimit_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_MCUPowerLimit_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter1_VCU_DisChgPowerLimit_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D04 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D05 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D05 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D05 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D05 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AC_charging_parameter_POD_OBC_InputACVoltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D05 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AC_charging_parameter_VCU_OBC_ChargeCurrentCommand_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D05 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeCurrent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D05 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_AC_charging_parameter_POD_OBC_OutputDCChargeVoltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D05 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Chargestatus_Chargestatus_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D06 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Chargestatus_Chargestatus_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D06 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Electronic_lock_state_Electronic_lock_state_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D07 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Electronic_lock_state_Electronic_lock_state_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D07 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D08 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_HV_InterLock_PWM_pfrequency_VCU_HVIL_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D08 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_control_S2_status_New_Bit_Field_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D09 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_control_S2_status_New_Bit_Field_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D09 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D10 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D10 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D10 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_BMSDisChgPowerLimit_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D10 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_MCUFeedbackPowerLimit_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D10 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter2_BMSChgPowerLimit_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D10 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_control_main_relay_Mainrealy1_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D11 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_control_main_relay_Mainrelay2_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D11 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_control_main_relay_Mainrealy1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D11 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_control_main_relay_Mainrelay2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D11 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D12 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D12 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D12 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D12 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D12 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_PWT_vehicle_fault_PWT_ErrorLevel3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D12 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D13 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D13 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DC_Charging_port_Temperature_POD_DCInletTempA_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D13 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DC_Charging_port_Temperature_POD_DCInletTempB_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D13 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_HV_part_work_mode_HV_part_work_mode1_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D14 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_HV_part_work_mode_HV_part_work_mode2_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D14 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_HV_part_work_mode_HV_part_work_mode1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D14 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_HV_part_work_mode_HV_part_work_mode2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D14 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D15 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D15 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D15 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D15 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D15 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_DCDCPower_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D15 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_ACSystemPower_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D15 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_PackPTCPower_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D15 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_MCUPower_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D15 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_PowerMaxAllowed_parameter3_V2LPower_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D15 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BSW_version_number_Major_release_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D19 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BSW_version_number_Minor_release_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D19 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BSW_version_number_No_functional_content_change_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D19 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BSW_version_number_Major_release_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D19 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BSW_version_number_Minor_release_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D19 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BSW_version_number_No_functional_content_change_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D19 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ReadData)),   3u,   3u,0x0002u} /* DID: 0x1D20 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D20 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Total_Odometer_VCU_Total_Odometer_VCU_WriteData)),   3u,   3u,0x1002u} /* DID: 0x1D20 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_BS_SOC_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D21 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_VCU_BS_Hcurrent_ReadData)),   2u,   2u,0x0002u} /* DID: 0x1D21 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_T_BATT_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D21 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_SOF_V1_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D21 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_SOF_V2_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D21 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_SOH_ReadData)),   1u,   1u,0x0002u} /* DID: 0x1D21 */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_BS_SOC_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D21 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_VCU_BS_Hcurrent_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D21 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_T_BATT_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D21 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_SOF_V1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D21 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_SOF_V2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D21 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_BS_base_information4_SOH_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0x1D21 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Write_Level1_OEM_Key_OEM_Key_Value_WriteData)),  16u,  16u,0x1002u} /* DID: 0xF010 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Write_Level1_OEM_Key_CRC_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF010 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF011 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Level1_OEM_Key_written_status_Read_Level1_OEM_Key_rewrite_counter_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF011 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Write_Level2_OEM_Key_OEM_Key_Value_WriteData)),  16u,  16u,0x1002u} /* DID: 0xF012 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Write_Level2_OEM_Key_CRC_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF012 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF013 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Level2_OEM_Key_written_status_Read_Level2_OEM_Key_rewrite_counter_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF013 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Write_Level3_OEM_Key_OEM_Key_Value_WriteData)),  16u,  16u,0x1002u} /* DID: 0xF014 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Write_Level3_OEM_Key_CRC_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF014 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF015 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Level3_OEM_Key_written_status_Read_Level3_OEM_Key_rewrite_counter_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF015 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Write_Level4_OEM_Key_OEM_Key_Value_WriteData)),  16u,  16u,0x1002u} /* DID: 0xF016 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Write_Level4_OEM_Key_CRC_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF016 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF017 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Level4_OEM_Key_written_status_Read_Level4_OEM_Key_rewrite_counter_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF017 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Year_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Month_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Event_occurance_time_Day_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Software_configuration_inte_Software_configuration_integrity_check_fa_B04CEA39_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF020 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Year_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Month_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Event_occurance_time_Day_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Vehicle_Security_related_events_Brute_Force_UDS_0x27_servic_Brute_Force_UDS_0x27_service_Event_occurr_0DEE2FAA_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF021 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bootloader_version_number_Major_release_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF101 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bootloader_version_number_Minor_release_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF101 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bootloader_version_number_No_functional_content_change_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF101 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bootloader_version_number_Major_release_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF101 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bootloader_version_number_Minor_release_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF101 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Bootloader_version_number_No_functional_content_change_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF101 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ReadData)),   6u,   6u,0x0002u} /* DID: 0xF102 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Group_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF102 */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Subgroup_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF102 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Detail_Code_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF102 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Execution_Package_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF102 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF102 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Group_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF102 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Subgroup_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF102 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Detail_Code_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF102 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Execution_Package_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF102 */   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Specific_Vehicle_Code_WMI_WriteData)),   6u,   6u,0x1002u} /* DID: 0xF102 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Group_WriteData)),   2u,   2u,0x1002u} /* DID: 0xF102 */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Subgroup_WriteData)),   2u,   2u,0x1002u} /* DID: 0xF102 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Detail_Code_WriteData)),   3u,   3u,0x1002u} /* DID: 0xF102 */                  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_EcuIdentification_Execution_Package_WriteData)),   2u,   2u,0x1002u} /* DID: 0xF102 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_ECU_application_software_ASW_version_number_Major_release_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF104 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_ECU_application_software_ASW_version_number_Minor_release_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF104 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF104 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_ECU_application_software_ASW_version_number_Major_release_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF104 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_ECU_application_software_ASW_version_number_Minor_release_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF104 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_ECU_application_software_ASW_version_number_No_functional_content_change_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF104 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Configuration_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF108 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Configuration_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved1_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved2_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved3_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_0_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Version_Byte_1_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_0_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_1_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_2_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_3_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_4_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_5_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Short_VIN_High_Byte_7_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_0_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_Format_Byte_High_Byte_1_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Configuration_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved1_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved2_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_Reserved3_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_coding_data_string_CDS_CDS_CRC_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF108 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ReadData)),  27u,  27u,0x0002u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_1_YY_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_2_MM_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_codingDate_byte_3_DD_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Coding_for_CDS_fingerprint_repairShopCodeorTesterSerialNumber_byte_1_27_MSB_WriteData)),  27u,  27u,0x1002u} /* DID: 0xF10A */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Last_service_date_Year_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF10F */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Last_service_date_Month_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF10F */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Last_service_date_Day_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF10F */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Last_service_date_Year_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF10F */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Last_service_date_Month_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF10F */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Last_service_date_Day_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF10F */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Last_service_date_Year_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF10F */                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Last_service_date_Month_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF10F */                        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Last_service_date_Day_WriteData)),   1u,   1u,0x1002u} /* DID: 0xF10F */                          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF186 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_active_diagnostic_session_Active_diagnostic_session_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF186 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ReadData)),   6u,   6u,0x0002u} /* DID: 0xF187 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Group_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF187 */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Subgroup_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF187 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Detail_Code_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF187 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Execution_Package_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF187 */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Specific_Vehicle_Code_WMI_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF187 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Group_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF187 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Subgroup_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF187 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Detail_Code_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF187 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_Part_Number_Execution_Package_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF187 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_Country_code_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF18A */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_Supplier_family_code_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF18A */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_Supplier_code_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF18A */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_Country_code_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18A */          /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_Supplier_family_code_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18A */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_DevelopmentData_Supplier_code_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18A */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF18B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF18B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF18B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Year_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Month_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_ECU_manufacturing_date_ECU_Manufacturing_Date_Day_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18B */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_ECU_Name_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF18C */                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_Supplier_name_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF18C */                      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ReadData)),   6u,   6u,0x0002u} /* DID: 0xF18C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_ECU_index_number_ReadData)),   6u,   6u,0x0002u} /* DID: 0xF18C */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_ECU_Name_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18C */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_Supplier_name_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18C */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_ECU_production_date_in_DD_MM_YY_format_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18C */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SerialNumber_ECU_index_number_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF18C */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ReadData)),   5u,   5u,0x0002u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ReadData)),   9u,   9u,0x0002u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_complete_VIN_World_Manufacturers_Identification_WriteData)),   3u,   3u,0x1002u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Description_Section_WriteData)),   5u,   5u,0x1002u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Read_Write_complete_VIN_Vehicle_Identification_Section_WriteData)),   9u,   9u,0x1002u} /* DID: 0xF190 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Supplier_ECU_hardware_part_number_Major_release_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Supplier_ECU_hardware_part_number_Major_release_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Supplier_ECU_hardware_part_number_Changes_in_electronic_components_level_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF192 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_State_Ignition_Switch_Signal_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1A0 */            /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_State_Ignition_Switch_Signal_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A0 */  /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Battery_Voltage_Battery_Voltage_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF1A1 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Battery_Voltage_Battery_Voltage_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A1 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Total_Odometer_Total_Odometer_ReadData)),   3u,   3u,0x0002u} /* DID: 0xF1A2 */                   /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Total_Odometer_Total_Odometer_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A2 */         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_speed_Vehicle_speed_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF1A3 */                     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Vehicle_speed_Vehicle_speed_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A3 */           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Second_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1A4 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Minute_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1A4 */              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Hour_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1A4 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Day_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1A4 */                 /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Month_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1A4 */               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Year_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1A4 */                /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Second_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A4 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Minute_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A4 */    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Hour_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A4 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Day_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A4 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Month_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A4 */     /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Date_And_Time_Date_And_Time_Year_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A4 */      /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_HVStatus_VCU_HVStatus_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1A5 */                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_VCU_HVStatus_VCU_HVStatus_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A5 */             /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SOC_SOC_ReadData)),   2u,   2u,0x0002u} /* DID: 0xF1A6 */                                         /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_SOC_SOC_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A6 */                               /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Gear_Gear_ReadData)),   1u,   1u,0x0002u} /* DID: 0xF1A7 */                                       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_DidMgrOpFuncType)(Rte_Call_DataServices_Gear_Gear_ConditionCheckRead)),   0u,   0u,0x0201u} /* DID: 0xF1A7 */                             /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! RID properties */
CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[7]=
{
   {    0u,  13u,0x01u, 0u} /* RID: 0x0102 */
  ,{    1u,   7u,0x01u, 0u} /* RID: 0x0202 */
  ,{    2u,   5u,0x01u, 0u} /* RID: 0x0203 */
  ,{    3u,  12u,0x01u, 0u} /* RID: 0x9D00 */
  ,{    4u,  14u,0x03u, 0u} /* RID: 0xF000 */
  ,{    6u,   7u,0x01u, 0u} /* RID: 0xFF00 */
  ,{    7u,   7u,0x01u, 0u} /* RID: 0xFF01 */
};
/*! RID operation properties */
CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[8]=
{
   { ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_CheckCodingState_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x0102 */                    /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_0202_Start)),   4u,   4u,   1u,   1u, 9u, 0u} /* RID: 0x0202 */                                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_CheckProgrammingPreCondition_Start)),   0u,   0u,   5u,   5u, 3u, 0u} /* RID: 0x0203 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Erase_Mileage_Provisional_Parameter_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0x9D00 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0xF000 */       /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_Turn_Off_HV_Turn_Off_Charging_Stop)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0xF000 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Dcm_RidMgr_FF00_Start)),   9u,   9u,   1u,   1u, 9u, 0u} /* RID: 0xFF00 */                                              /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_RidMgrOpFuncType)(Rte_Call_RoutineServices_CheckProgrammingDependencies_Start)),   0u,   0u,   1u,   1u, 3u, 0u} /* RID: 0xFF01 */        /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! DCM service initializers */
CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[2]=
{
   Dcm_Service27Init
  ,NULL_PTR /* end marker */
};
/*! DCM service properties */
CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[18]=
{
   { Dcm_SvcWrapper_Dcm_DiagnosticService_0x01,0x00u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x01 */
  ,{ Dcm_SvcWrapper_Dcm_DiagnosticService_0x09,0x00u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x09 */
  ,{ Dcm_Service10Processor,0x01u, 1u,   1u,   2u, 0u, 0u} /* SID: 0x10 */
  ,{ Dcm_Service11Processor,0x01u, 1u,   3u,   4u, 0u, 0u} /* SID: 0x11 */
  ,{ Dcm_Service14Processor,0x00u, 3u,   0u,   0u, 0u, 1u} /* SID: 0x14 */
  ,{ Dcm_Service19Processor,0x01u, 1u,   5u,   0u, 2u, 2u} /* SID: 0x19 */
  ,{ Dcm_Service22Processor,0x00u, 2u,   0u,   0u, 0u, 3u} /* SID: 0x22 */
  ,{ Dcm_Service27Processor,0x03u, 1u,   6u,   0u, 0u, 0u} /* SID: 0x27 */
  ,{ Dcm_Service28Processor,0x01u, 1u,   7u,   0u, 0u, 0u} /* SID: 0x28 */
  ,{ Dcm_Service2EProcessor,0x00u, 3u,   0u,   0u, 0u, 4u} /* SID: 0x2E */
  ,{ Dcm_Service31Processor,0x01u, 3u,   0u,   0u, 0u, 0u} /* SID: 0x31 */
  ,{ Dcm_Service34Processor,0x00u, 4u,   0u,   0u, 0u, 0u} /* SID: 0x34 */
  ,{ Dcm_Service36Processor,0x00u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x36 */
  ,{ Dcm_Service37Processor,0x00u, 0u,   0u,   0u, 0u, 0u} /* SID: 0x37 */
  ,{ Dcm_SvcWrapper_Dcm_DiagnosticService_0x38,0x00u, 0u,   0u,   0u, 0u, 0u} /* SID: 0x38 */
  ,{ Dcm_Service3EProcessor,0x01u, 1u,   0u,   0u, 0u, 0u} /* SID: 0x3E */
  ,{ Dcm_Service85Processor,0x01u, 1u,   8u,   0u, 0u, 5u} /* SID: 0x85 */
  ,{ Dcm_RepeaterDeadEnd,0x00u, 0u,   0u,   0u, 0u, 0u} /* Dcm_RepeaterDeadEnd */
};
/*! Indirection from diag service info to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[17]=
{
      0u /* SID: 0x01 */
  ,   0u /* SID: 0x09 */
  ,   1u /* SID: 0x10 */
  ,   4u /* SID: 0x11 */
  ,   0u /* SID: 0x14 */
  ,   0u /* SID: 0x19 */
  ,   1u /* SID: 0x22 */
  ,   4u /* SID: 0x27 */
  ,   3u /* SID: 0x28 */
  ,   6u /* SID: 0x2E */
  ,   4u /* SID: 0x31 */
  ,   7u /* SID: 0x34 */
  ,   7u /* SID: 0x36 */
  ,   7u /* SID: 0x37 */
  ,   7u /* SID: 0x38 */
  ,   1u /* SID: 0x3E */
  ,   3u /* SID: 0x85 */
};
/*! DCM service post processors */
CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[9]=
{
   Dcm_ServiceNoPostProcessor
  ,Dcm_Service10PostProcessor
  ,Dcm_Service10FastPostProcessor
  ,Dcm_Service11PostProcessor
  ,Dcm_Service11FastPostProcessor
  ,Dcm_Service19PostProcessor
  ,Dcm_Service27PostProcessor
  ,Dcm_Service28PostProcessor
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
CONST(Dcm_DiagSvcCancelFuncType, DCM_CONST) Dcm_CfgDiagSvcCancellers[6]=
{
   Dcm_ServiceNoCancel
  ,Dcm_Service14Cancel
  ,Dcm_Service19Cancel
  ,Dcm_Service22Cancel
  ,Dcm_Service2ECancel
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
CONST(Dcm_CfgDiagSvc2ProtMapMemType, DCM_CONST) Dcm_CfgDiagSvcId2ProtMap[17]=
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
  ,0x01u
  ,0x01u
};
/*! Service 0x10 sub-service properties table  */
CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[4]=
{
   { { 50u, 500u}} /* Session ID: 0x01 */
  ,{ { 50u, 500u}} /* Session ID: 0x02 */
  ,{ { 50u, 500u}} /* Session ID: 0x03 */
  ,{ { 50u, 500u}} /* Session ID: 0x41 */
};
/*! Indirection from service 0x10 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[4]=
{
      1u /* Session ID: 0x01 */
  ,   2u /* Session ID: 0x02 */
  ,   0u /* Session ID: 0x03 */
  ,   3u /* Session ID: 0x41 */
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
      4u /* SF: 0x01 */
  ,   4u /* SF: 0x03 */
};
/*! Service 0x19 sub-service properties table  */
CONST(Dcm_CfgSvc19SubFuncInfoType, DCM_CONST) Dcm_CfgSvc19SubFuncInfo[6]=
{
   { Dcm_Service19_01Processor, 2u} /* SF: 0x01 */
  ,{ Dcm_Service19_02Processor, 2u} /* SF: 0x02 */
  ,{ Dcm_Service19_03Processor, 1u} /* SF: 0x03 */
  ,{ Dcm_Service19_04Processor, 5u} /* SF: 0x04 */
  ,{ Dcm_Service19_06Processor, 5u} /* SF: 0x06 */
  ,{ Dcm_Service19_0AProcessor, 1u} /* SF: 0x0A */
};
/*! Indirection from service 0x19 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc19SubFuncExecPrecondTable[6]=
{
      0u /* SF: 0x01 */
  ,   0u /* SF: 0x02 */
  ,   0u /* SF: 0x03 */
  ,   0u /* SF: 0x04 */
  ,   0u /* SF: 0x06 */
  ,   0u /* SF: 0x0A */
};
/*! Service 0x27 sub-service properties table  */
CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[8]=
{
   {    1u} /* SF: 0x01 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{   17u} /* SF: 0x02 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{    1u} /* SF: 0x03 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{   17u} /* SF: 0x04 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{    1u} /* SF: 0x05 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{   17u} /* SF: 0x06 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{    1u} /* SF: 0x07 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{   17u} /* SF: 0x08 */                                                                                                                           /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Service 0x27 security level properties table  */
CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[4]=
{
   { ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_UnlockedL1_GetSeed)),Rte_Call_SecurityAccess_UnlockedL1_CompareKey,  16u, 0u} /* SecLvl: UnlockedL1 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_Unlocked_Level_2_GetSeed)),Rte_Call_SecurityAccess_Unlocked_Level_2_CompareKey,  16u, 0u} /* SecLvl: Unlocked_Level_2 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_Unlocked_Level_3_GetSeed)),Rte_Call_SecurityAccess_Unlocked_Level_3_CompareKey,  16u, 0u} /* SecLvl: Unlocked_Level_3 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
  ,{ ((Dcm_Svc27GetSeedFuncType)(Rte_Call_SecurityAccess_Unlocked_Level_4_GetSeed)),Rte_Call_SecurityAccess_Unlocked_Level_4_CompareKey,  16u, 0u} /* SecLvl: Unlocked_Level_4 */ /* PRQA S 0313 */ /* MD_Dcm_0313 */
};
/*! Indirection from service 0x27 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[8]=
{
      5u /* SF: 0x01 */
  ,   5u /* SF: 0x02 */
  ,   5u /* SF: 0x03 */
  ,   5u /* SF: 0x04 */
  ,   3u /* SF: 0x05 */
  ,   3u /* SF: 0x06 */
  ,   2u /* SF: 0x07 */
  ,   2u /* SF: 0x08 */
};
/*! Service 0x28 sub-service properties table  */
CONST(Dcm_CfgSvc28SubFuncInfoType, DCM_CONST) Dcm_CfgSvc28SubFuncInfo[2]=
{
   { Dcm_Service28_XXProcessor, 2u} /* SF: 0x00 */
  ,{ Dcm_Service28_XXProcessor, 2u} /* SF: 0x03 */
};
/*! Indirection from service 0x28 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc28SubFuncExecPrecondTable[2]=
{
      3u /* SF: 0x00 */
  ,   3u /* SF: 0x03 */
};
/*! Service 0x28 network ID to ComM channel map */
CONST(NetworkHandleType, DCM_CONST) Dcm_CfgSvc28SubNetIdMap[2]=
{
   DCM_SVC_28_NETWORK_ALL
  ,DCM_SVC_28_NETWORK_CURRENT
};
/*! Indirection from service 0x3E sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1]=
{
      1u /* SF: 0x00 */
};
/*! Indirection from service 0x85 sub functions to execution pre conditions */
CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[2]=
{
      3u /* SF: 0x01 */
  ,   3u /* SF: 0x02 */
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
#define DCM_START_SEC_CODE
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  Dcm_ModeOnComControlModeChange()
***********************************************************************************************************************/
/* Implements CDD Dcm_ModeOnComControlModeChange() */
FUNC(void, DCM_CODE) Dcm_ModeOnComControlModeChange(NetworkHandleType channelId, Dcm_CommunicationModeType mode)
{
  switch(channelId)
  {
    case ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d:
      ((void)(Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d_DcmCommunicationControl_ComMConf_ComMChannel_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d(mode)));
      break;
    case ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8:
      ((void)(Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8_DcmCommunicationControl_ComMConf_ComMChannel_CN_TC37X_VCU_CAN00_07b6c9c8(mode)));
      break;
    default: /* Just exit the switch case */
      break;
  }
}
#define DCM_STOP_SEC_CODE
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */

#define DCM_START_SEC_CALLOUT_CODE
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */
/***********************************************************************************************************************
 *  Dcm_RidMgr_0202_Start()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_0202_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_RidMgrRidLengthPtrType DataLength,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_NegativeResponseCodePtrType ErrorCode  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  )
{
  uint32 dataInIn_checksum;
  Std_ReturnType stdReturn;

  dataInIn_checksum = ((uint32)(Dcm_UtiMake32Bit(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 0u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 1u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 2u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 3u))));  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */

  DCM_IGNORE_UNREF_PARAM(DataLength);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */

  stdReturn = Rte_Call_RoutineServices_Check_Memory_Start(
                dataInIn_checksum,
                OpStatus,
                Dcm_UtiGetResDataRel(pMsgContext, 0u),  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */ /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                ErrorCode
                );  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ 
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_RidMgr_FF00_Start()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_RidMgr<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RidMgr_FF00_Start(
  Dcm_OpStatusType OpStatus,
  Dcm_MsgContextPtrType pMsgContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_RidMgrRidLengthPtrType DataLength,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_NegativeResponseCodePtrType ErrorCode  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  )
{
  uint8 dataInIn_addressAndLengthFormatIdentifier;
  uint32 dataInIn_memoryAddress;
  uint32 dataInIn_memorySize;
  Std_ReturnType stdReturn;

  dataInIn_addressAndLengthFormatIdentifier = ((uint8)(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 0u)));  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */

  dataInIn_memoryAddress = ((uint32)(Dcm_UtiMake32Bit(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 1u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 2u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 3u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 4u))));  

  dataInIn_memorySize = ((uint32)(Dcm_UtiMake32Bit(Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 5u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 6u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 7u), Dcm_UtiGetReqDataAsU8Rel(pMsgContext, 8u))));  

  DCM_IGNORE_UNREF_PARAM(DataLength);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */

  stdReturn = Rte_Call_RoutineServices_Erase_Memory_Start(
                dataInIn_addressAndLengthFormatIdentifier,
                dataInIn_memoryAddress,
                dataInIn_memorySize,
                OpStatus,
                Dcm_UtiGetResDataRel(pMsgContext, 0u),  /* PRQA S 2985 */ /* MD_Dcm_Redundant_2985 */ /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
                ErrorCode
                );  /* SBSW_DCM_GEN_COMB_PARAM_PTR_FORWARD */ 
  return stdReturn;
}
/***********************************************************************************************************************
 *  Dcm_SvcWrapper_Dcm_DiagnosticService_0x01()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_SvcWrapper_<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SvcWrapper_Dcm_DiagnosticService_0x01(
  Dcm_ContextPtrType pContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_OpStatusType opStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return Dcm_DiagnosticService_0x01(opStatus, pMsgContext, ErrorCode);  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_SvcWrapper_Dcm_DiagnosticService_0x09()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_SvcWrapper_<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SvcWrapper_Dcm_DiagnosticService_0x09(
  Dcm_ContextPtrType pContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_OpStatusType opStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return Dcm_DiagnosticService_0x09(opStatus, pMsgContext, ErrorCode);  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
}
/***********************************************************************************************************************
 *  Dcm_SvcWrapper_Dcm_DiagnosticService_0x38()
 ***********************************************************************************************************************/
/* Implements CDD Dcm_SvcWrapper_<XXX>() */
DCM_LOCAL FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SvcWrapper_Dcm_DiagnosticService_0x38(
  Dcm_ContextPtrType pContext,  /* PRQA S 3673 */ /* MD_Dcm_APIStd_3673 */
  Dcm_OpStatusType opStatus,
  Dcm_MsgContextPtrType pMsgContext,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
{
  DCM_IGNORE_UNREF_PARAM(pContext);  /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  return Dcm_DiagnosticService_0x38(opStatus, pMsgContext, ErrorCode);  /* SBSW_DCM_GEN_PARAM_PTR_FORWARD */
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
#define DCM_STOP_SEC_CALLOUT_CODE
#include "MemMap.h"                                                                                                                                  /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *  END OF FILE: Dcm_Lcfg.c
 *********************************************************************************************************************/

