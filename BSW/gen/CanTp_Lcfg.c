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
 *            Module: CanTp
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: CanTp_Lcfg.c
 *   Generation Time: 2025-09-12 10:25:40
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#define CANTP_LCFG_SOURCE

/* -----------------------------------------------------------------------------
    &&&~ Include files
 ----------------------------------------------------------------------------- */

#include "CanTp_Lcfg.h"
#if (CANTP_LOLAYER_CANIF == STD_ON)
# include "CanIf.h"
#endif
#include "PduR_CanTp.h"

/* -----------------------------------------------------------------------------
    &&&~ Data definitions
 ----------------------------------------------------------------------------- */



/**********************************************************************************************************************
 *  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CanTp_RxPduMap
**********************************************************************************************************************/
/** 
  \var    CanTp_RxPduMap
  \details
  Element                Description
  RxSduCfgIndEndIdx      the end index of the 0:n relation pointing to CanTp_RxSduCfgInd
  RxSduCfgIndStartIdx    the start index of the 0:n relation pointing to CanTp_RxSduCfgInd
  TxSduCfgIndEndIdx      the end index of the 0:n relation pointing to CanTp_TxSduCfgInd
  TxSduCfgIndStartIdx    the start index of the 0:n relation pointing to CanTp_TxSduCfgInd
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxPduMapType, CANTP_CONST) CanTp_RxPduMap[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxSduCfgIndEndIdx  RxSduCfgIndStartIdx  TxSduCfgIndEndIdx                     TxSduCfgIndStartIdx                    */
  { /*     0 */                1u,                  0u, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*     1 */                2u,                  1u,                                   1u,                                     0u },
  { /*     2 */                3u,                  2u,                                   2u,                                     1u },
  { /*     3 */                4u,                  3u, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*     4 */                5u,                  4u, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP },
  { /*     5 */                6u,                  5u, CANTP_NO_TXSDUCFGINDENDIDXOFRXPDUMAP, CANTP_NO_TXSDUCFGINDSTARTIDXOFRXPDUMAP }
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduCfg
  \details
  Element                     Description
  LoLayerTxFcPduId        
  PduRRxSduId             
  RxPduId                 
  TxFcPduConfirmationPduId
  NAr                     
  NCr                     
  RxTaType                
  STmin                   
  TxSduCfgIdx                 the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxSduCfgType, CANTP_CONST) CanTp_RxSduCfg[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    LoLayerTxFcPduId                                                                           PduRRxSduId                              RxPduId                                     TxFcPduConfirmationPduId                        NAr  NCr   RxTaType                             STmin  TxSduCfgIdx                           Comment                            Referable Keys */
  { /*     0 */ CANTP_INVALID_HDL                                                                        , PduRConf_PduRSrcPdu_PduRSrcPdu_d6323ebe, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_4e4f92b2, CANTP_INVALID_HDL                             , 11u,  11u, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG,    0u, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_09d1a149] */  /* [CanTpRxNSdu_09d1a149, 3] */
  { /*     1 */ CANTP_INVALID_HDL                                                                        , PduRConf_PduRSrcPdu_PduRSrcPdu_c012a7a4, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_8a537d14, CANTP_INVALID_HDL                             , 11u,  11u, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG,    0u, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_1de5980a] */  /* [CanTpRxNSdu_1de5980a, 0] */
  { /*     2 */ CanIfConf_CanIfTxPduCfg_DiagResp_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_56f96c78_Tx, PduRConf_PduRSrcPdu_PduRSrcPdu_1a5e9c8c, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_fb36dff5, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_fb36dff5, 21u, 101u,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20u,                             0u },  /* [CanTpRxNSdu_ba12c012] */  /* [CanTpRxNSdu_ba12c012, 1] */
  { /*     3 */ CANTP_INVALID_HDL                                                                        , PduRConf_PduRSrcPdu_PduRSrcPdu_f4a18b15, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_0b84ecc7, CANTP_INVALID_HDL                             , 11u,  11u, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG,    0u, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_3169c424] */  /* [CanTpRxNSdu_3169c424, 4] */
  { /*     4 */ CANTP_INVALID_HDL                                                                        , PduRConf_PduRSrcPdu_PduRSrcPdu_d73377b4, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_822169b4, CANTP_INVALID_HDL                             , 11u,  11u, CANTP_FUNCTIONAL_RXTATYPEOFRXSDUCFG,    0u, CANTP_NO_TXSDUCFGIDXOFRXSDUCFG },  /* [CanTpRxNSdu_7765ad4f] */  /* [CanTpRxNSdu_7765ad4f, 5] */
  { /*     5 */ CanIfConf_CanIfTxPduCfg_DiagResp_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_81d5a184_Tx    , PduRConf_PduRSrcPdu_PduRSrcPdu_65a4ed4d, CanTpConf_CanTpRxNPdu_CanTpRxNPdu_16e98237, CanTpConf_CanTpTxFcNPdu_CanTpTxFcNPdu_16e98237, 21u, 101u,   CANTP_PHYSICAL_RXTATYPEOFRXSDUCFG,   20u,                             1u }   /* [CanTpRxNSdu_a047006e] */  /* [CanTpRxNSdu_a047006e, 2] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduCfgInd
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduCfgInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxSduCfgIndType, CANTP_CONST) CanTp_RxSduCfgInd[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxSduCfgInd      Referable Keys */
  /*     0 */           1u,  /* [0] */
  /*     1 */           2u,  /* [1] */
  /*     2 */           5u,  /* [2] */
  /*     3 */           0u,  /* [3] */
  /*     4 */           3u,  /* [4] */
  /*     5 */           4u   /* [5] */
};
#define CANTP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_RxSduSnv2Hdl
  \details
  Element        Description
  RxSduCfgIdx    the index of the 0:1 relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_RxSduSnv2HdlType, CANTP_CONST) CanTp_RxSduSnv2Hdl[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxSduCfgIdx        Comment */
  { /*     0 */          0u },  /* [CanTpRxNSdu_09d1a149] */
  { /*     1 */          1u },  /* [CanTpRxNSdu_1de5980a] */
  { /*     2 */          2u },  /* [CanTpRxNSdu_ba12c012] */
  { /*     3 */          3u },  /* [CanTpRxNSdu_3169c424] */
  { /*     4 */          4u },  /* [CanTpRxNSdu_7765ad4f] */
  { /*     5 */          5u }   /* [CanTpRxNSdu_a047006e] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduCfg
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduCfg
  \details
  Element                   Description
  LoLayerTxPduId        
  PduRTxSduId           
  RxFcPduId             
  TxPduConfirmationPduId
  RxSduCfgIdx               the index of the 0:1 relation pointing to CanTp_RxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxSduCfgType, CANTP_CONST) CanTp_TxSduCfg[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    LoLayerTxPduId                                                                             PduRTxSduId                                                                          RxFcPduId                                       TxPduConfirmationPduId                      RxSduCfgIdx        Comment                            Referable Keys */
  { /*     0 */ CanIfConf_CanIfTxPduCfg_DiagResp_VCU_OBD_Tp_oATOM_CAN_Matrix_PT_V600_20250211_56f96c78_Tx, PduRConf_PduRDestPdu_DiagResp_VCU_OBD_oATOM_CAN_Matrix_PT_V600_20250211_e13d53cd_Tx, CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_d9cc0b07, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_d9cc0b07,          2u },  /* [CanTpTxNSdu_ba12c012] */  /* [CanTpTxNSdu_ba12c012, 1] */
  { /*     1 */ CanIfConf_CanIfTxPduCfg_DiagResp_VCU_Tp_oATOM_CAN_Matrix_PT_V600_20250211_81d5a184_Tx    , PduRConf_PduRDestPdu_DiagResp_VCU_oATOM_CAN_Matrix_PT_V600_20250211_1dcc985c_Tx    , CanTpConf_CanTpRxFcNPdu_CanTpRxFcNPdu_341356c5, CanTpConf_CanTpTxNPdu_CanTpTxNPdu_341356c5,          5u }   /* [CanTpTxNSdu_a047006e] */  /* [CanTpTxNSdu_a047006e, 2] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduCfgInd
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduCfgInd
  \brief  the indexes of the 1:1 sorted relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxSduCfgIndType, CANTP_CONST) CanTp_TxSduCfgInd[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxSduCfgInd      Referable Keys */
  /*     0 */           0u,  /* [1] */
  /*     1 */           1u   /* [2] */
};
#define CANTP_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSduSnv2Hdl
**********************************************************************************************************************/
/** 
  \var    CanTp_TxSduSnv2Hdl
  \details
  Element        Description
  TxSduCfgIdx    the index of the 0:1 relation pointing to CanTp_TxSduCfg
*/ 
#define CANTP_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(CanTp_TxSduSnv2HdlType, CANTP_CONST) CanTp_TxSduSnv2Hdl[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxSduCfgIdx        Comment */
  { /*     0 */          0u },  /* [CanTpTxNSdu_ba12c012] */
  { /*     1 */          1u }   /* [CanTpTxNSdu_a047006e] */
};
#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_CalcBS
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_CalcBSType, CANTP_VAR_NOINIT) CanTp_CalcBS[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_RxState
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_RxStateType, CANTP_VAR_NOINIT) CanTp_RxState[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxSemaphores
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_TxSemaphoreType, CANTP_VAR_NOINIT) CanTp_TxSemaphores[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  CanTp_TxState
**********************************************************************************************************************/
#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(CanTp_TxStateType, CANTP_VAR_NOINIT) CanTp_TxState[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
 * FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/




