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
 *            Module: LinIf
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: LinIf_Lcfg.c
 *   Generation Time: 2025-09-18 10:37:20
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#define LINIF_LCFG_SOURCE

/**********************************************************************************************************************
 *  MISRA
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  Includes
 *********************************************************************************************************************/

#include "LinIf.h"
#include "PduR_LinIf.h"
#include "LinSM_Cbk.h"
#include "LinIf_LinTrcv.h"


/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA PROTOTYPES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL DATA
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
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  LinIf_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    LinIf_ChannelConfig
  \details
  Element                         Description
  ChannelFuncCallCycle            Channel function call cycle
  FrameLengthDelayListEndIdx      the end index of the 0:n relation pointing to LinIf_FrameLengthDelayList
  FrameLengthDelayListStartIdx    the start index of the 0:n relation pointing to LinIf_FrameLengthDelayList
  FrameListEndIdx                 the end index of the 1:n relation pointing to LinIf_FrameList
  FrameListStartIdx               the start index of the 1:n relation pointing to LinIf_FrameList
  LoadBalancingOffset             Load balancing offset in ticks
  NodeChannelConfigIdx            the index of the 1:1 relation pointing to one of LinIf_MasterChannelConfig,LinIf_SlaveChannelConfig
  NodeChannelDataIdx              the index of the 1:1 relation pointing to one of LinIf_MasterChannelData,LinIf_SlaveChannelData
  NodeType                        LIN channel node type
  StartupState                    Startup state of channel: 0 : sleep 1 : operational state
  TimeBase                        Channel time base
  WakeupDelayExternal             External wakeup delay in ticks
  WakeupDelayInternal             Internal wakeup delay in ticks
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_ChannelConfigType, LINIF_CONST) LinIf_ChannelConfig[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ChannelFuncCallCycle  FrameLengthDelayListEndIdx  FrameLengthDelayListStartIdx  FrameListEndIdx  FrameListStartIdx  LoadBalancingOffset  NodeChannelConfigIdx  NodeChannelDataIdx  NodeType                      StartupState  TimeBase  WakeupDelayExternal  WakeupDelayInternal */
  { /*     0 */                   1u,                         8u,                           0u,              8u,                0u,                  1u,                   0u,                 0u, LinIf_ChannelNodeType_Master,           0u,       5u,                 20u,                 20u },
  { /*     1 */                   1u,                        16u,                           8u,             14u,                8u,                  1u,                   1u,                 1u, LinIf_ChannelNodeType_Master,           0u,       5u,                 20u,                 20u },
  { /*     2 */                   1u,                        24u,                          16u,             20u,               14u,                  1u,                   2u,                 2u, LinIf_ChannelNodeType_Master,           0u,       5u,                 20u,                 20u }
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_ChannelIndTable
**********************************************************************************************************************/
/** 
  \var    LinIf_ChannelIndTable
  \details
  Element               Description
  LinChannelIndex       LIN Driver channel index
  SystemChannelIndex    ComM (System) channel index
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_ChannelIndTableType, LINIF_CONST) LinIf_ChannelIndTable[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    LinChannelIndex                                     SystemChannelIndex                                   */
  { /*     0 */ 0 /* LinConf_LinChannel_CN_ATOM_HWLIN1_64cfd50f */, 5 /* ComMConf_ComMChannel_CN_ATOM_HWLIN1_64cfd50f */ },
  { /*     1 */ 1 /* LinConf_LinChannel_CN_ATOM_HWLIN3_8ac1b423 */, 6 /* ComMConf_ComMChannel_CN_ATOM_HWLIN3_8ac1b423 */ },
  { /*     2 */ 2 /* LinConf_LinChannel_CN_ATOM_HWLIN4_14a52180 */, 7 /* ComMConf_ComMChannel_CN_ATOM_HWLIN4_14a52180 */ }
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_Entry
**********************************************************************************************************************/
/** 
  \var    LinIf_Entry
  \details
  Element                 Description
  DelayInTimebaseTicks
  FrameListIdx            the index of the 1:1 relation pointing to LinIf_FrameList
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_EntryType, LINIF_CONST) LinIf_Entry[16] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    DelayInTimebaseTicks  FrameListIdx        Comment                                      Referable Keys */
  { /*     0 */                   3u,           6u },  /* [FT_MasterReq_856151e5_Tx]       */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/DiagRequestSchedule_72b11ad9] */
  { /*     1 */                   3u,           7u },  /* [FT_SlaveResp_2d662851_Rx]       */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/DiagResponseSchedule_f0e03ba7] */
  { /*     2 */                   2u,           4u },  /* [FT_BS_01_1dba27cc_Rx]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/VCU_LIN_Schedule_fbca640b] */
  { /*     3 */                   2u,           5u },  /* [FT_BS_02_84b37676_Rx]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/VCU_LIN_Schedule_fbca640b] */
  { /*     4 */                   2u,           3u },  /* [FT_BS_03_f3b446e0_Rx]           */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/VCU_LIN_Schedule_fbca640b] */
  { /*     5 */                   2u,           0u },  /* [FT_VCU_BS_01_030651ac_Tx]       */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/VCU_LIN_Schedule_fbca640b] */
  { /*     6 */                   2u,           1u },  /* [FT_VCU_01_dc99513c_Tx]          */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/VCU_LIN_Schedule_fbca640b] */
  { /*     7 */                  16u,           2u },  /* [FT_FRC_01_f7bde5d6_Rx]          */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/VCU_LIN_Schedule_fbca640b] */
  { /*     8 */                   4u,           9u },  /* [FT_Vcu_Lin3_TxMsg1_48c3f5d9_Tx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/Vcu_Lin3_Schedule_a1d48d3a] */
  { /*     9 */                   4u,           8u },  /* [FT_Vcu_Lin3_TxMsg2_d1caa463_Tx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/Vcu_Lin3_Schedule_a1d48d3a] */
  { /*    10 */                   4u,          10u },  /* [FT_Vcu_Lin3_RxMsg1_9e9a16c4_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/Vcu_Lin3_Schedule_a1d48d3a] */
  { /*    11 */                   4u,          11u },  /* [FT_Vcu_Lin3_RxMsg2_0793477e_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/Vcu_Lin3_Schedule_a1d48d3a] */
  { /*    12 */                   4u,          14u },  /* [FT_Vcu_Lin0_TxMsg1_081c0e92_Tx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/Vcu_Lin0_Schedule_7bfb014e] */
  { /*    13 */                   4u,          15u },  /* [FT_Vcu_Lin0_TxMsg2_91155f28_Tx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/Vcu_Lin0_Schedule_7bfb014e] */
  { /*    14 */                   4u,          16u },  /* [FT_Vcu_Lin0_RxMsg1_de45ed8f_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/Vcu_Lin0_Schedule_7bfb014e] */
  { /*    15 */                   4u,          17u }   /* [FT_Vcu_Lin0_RxMsg2_474cbc35_Rx] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/Vcu_Lin0_Schedule_7bfb014e] */
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_FrameLengthDelayList
**********************************************************************************************************************/
/** 
  \var    LinIf_FrameLengthDelayList
  \details
  Element             Description
  FrameLengthDelay
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_FrameLengthDelayListType, LINIF_CONST) LinIf_FrameLengthDelayList[24] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    FrameLengthDelay        Comment                      Referable Keys */
  { /*     0 */               1u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     1 */               1u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     2 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     3 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     4 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     5 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     6 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     7 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     8 */               1u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*     9 */               1u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*    10 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*    11 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*    12 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*    13 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*    14 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*    15 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*    16 */               1u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
  { /*    17 */               1u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
  { /*    18 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
  { /*    19 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
  { /*    20 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
  { /*    21 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
  { /*    22 */               2u },  /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
  { /*    23 */               2u }   /* [Bitrate: 19200] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_FrameList
**********************************************************************************************************************/
/** 
  \var    LinIf_FrameList
  \details
  Element         Description
  PduId           Upper layer PduId
  FrameType       UNCONDITIONAL : 0 MRF : 1 SRF : 2 EVENT_TRIGGERED : 4 SPORADIC : 5 ASSIGN : 6 UNASSIGN : 7 ASSIGN_NAD : 8 FREE : 9 CONDITIONAL : 10 ASSIGN_FRAME_ID_RANGE : 11 SAVE_CONFIGURATION : 12
  Length          Frame length in bytes
  Pid             Protected Identifier
  ChecksumType    CLASSIC ENHANCED
  Direction       TX RX S2S
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_FrameListType, LINIF_CONST) LinIf_FrameList[20] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PduId                                                          FrameType  Length  Pid    ChecksumType     Direction                   Referable Keys */
  { /*     0 */ PduRConf_PduRDestPdu_VCU_BS_01_oATOM_HWLIN1_bc28519d_Tx      ,        0u,     8u, 0x39u, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_TX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/FT_VCU_BS_01_030651ac_Tx] */
  { /*     1 */ PduRConf_PduRDestPdu_VCU_01_oATOM_HWLIN1_3376b4d2_Tx         ,        0u,     8u, 0x25u, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_TX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/FT_VCU_01_dc99513c_Tx] */
  { /*     2 */ PduRConf_PduRSrcPdu_PduRSrcPdu_4642eaf1                      ,        0u,     8u, 0x2Bu, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/FT_FRC_01_f7bde5d6_Rx] */
  { /*     3 */ PduRConf_PduRSrcPdu_PduRSrcPdu_f46aae86                      ,        0u,     8u, 0x76u, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/FT_BS_03_f3b446e0_Rx] */
  { /*     4 */ PduRConf_PduRSrcPdu_PduRSrcPdu_10a80227                      ,        0u,     8u, 0xB4u, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/FT_BS_01_1dba27cc_Rx] */
  { /*     5 */ PduRConf_PduRSrcPdu_PduRSrcPdu_78487954                      ,        0u,     8u, 0xF5u, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/FT_BS_02_84b37676_Rx] */
  { /*     6 */ 0                                                            ,        1u,     8u, 0x3Cu, LIN_CLASSIC_CS , LIN_FRAMERESPONSE_TX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/FT_MasterReq_856151e5_Tx] */
  { /*     7 */ 0                                                            ,        2u,     8u, 0x7Du, LIN_CLASSIC_CS , LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5/FT_SlaveResp_2d662851_Rx] */
  { /*     8 */ PduRConf_PduRDestPdu_Vcu_Lin3_TxMsg2_oATOM_HWLIN3_32a8c13b_Tx,        0u,     8u, 0x1Fu, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_TX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/FT_Vcu_Lin3_TxMsg2_d1caa463_Tx] */
  { /*     9 */ PduRConf_PduRDestPdu_Vcu_Lin3_TxMsg1_oATOM_HWLIN3_b97bff22_Tx,        0u,     8u, 0x5Eu, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_TX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/FT_Vcu_Lin3_TxMsg1_48c3f5d9_Tx] */
  { /*    10 */ PduRConf_PduRSrcPdu_PduRSrcPdu_f06d7ac9                      ,        0u,     8u, 0x20u, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/FT_Vcu_Lin3_RxMsg1_9e9a16c4_Rx] */
  { /*    11 */ PduRConf_PduRSrcPdu_PduRSrcPdu_48bc0539                      ,        0u,     8u, 0x61u, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/FT_Vcu_Lin3_RxMsg2_0793477e_Rx] */
  { /*    12 */ 0                                                            ,        1u,     8u, 0x3Cu, LIN_CLASSIC_CS , LIN_FRAMERESPONSE_TX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/FT_MasterReq_f1d55714_Tx] */
  { /*    13 */ 0                                                            ,        2u,     8u, 0x7Du, LIN_CLASSIC_CS , LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde/FT_SlaveResp_59d22ea0_Rx] */
  { /*    14 */ PduRConf_PduRDestPdu_Vcu_Lin0_TxMsg1_oATOM_HWLIN4_7afddfb2_Tx,        0u,     8u, 0x5Eu, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_TX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/FT_Vcu_Lin0_TxMsg1_081c0e92_Tx] */
  { /*    15 */ PduRConf_PduRDestPdu_Vcu_Lin0_TxMsg2_oATOM_HWLIN4_f12ee1ab_Tx,        0u,     8u, 0x1Fu, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_TX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/FT_Vcu_Lin0_TxMsg2_91155f28_Tx] */
  { /*    16 */ PduRConf_PduRSrcPdu_PduRSrcPdu_7f13441e                      ,        0u,     8u, 0x20u, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/FT_Vcu_Lin0_RxMsg1_de45ed8f_Rx] */
  { /*    17 */ PduRConf_PduRSrcPdu_PduRSrcPdu_f972fecd                      ,        0u,     8u, 0x61u, LIN_ENHANCED_CS, LIN_FRAMERESPONSE_RX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/FT_Vcu_Lin0_RxMsg2_474cbc35_Rx] */
  { /*    18 */ 0                                                            ,        1u,     8u, 0x3Cu, LIN_CLASSIC_CS , LIN_FRAMERESPONSE_TX },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/FT_MasterReq_bbebdc5f_Tx] */
  { /*    19 */ 0                                                            ,        2u,     8u, 0x7Du, LIN_CLASSIC_CS , LIN_FRAMERESPONSE_RX }   /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66, /ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66/FT_SlaveResp_13eca5eb_Rx] */
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_LinIfToLinTrcvChannel
**********************************************************************************************************************/
/** 
  \var    LinIf_LinIfToLinTrcvChannel
  \details
  Element        Description
  TrcvChannel
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_LinIfToLinTrcvChannelType, LINIF_CONST) LinIf_LinIfToLinTrcvChannel[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TrcvChannel                                                                                      */
  { /*     0 */ 0 /* LinIfConf_LinIfChannel_CHNL_a1e6ddd5 -> LinTrcvConf_LinTrcvChannel_LinTrcvChannel_HWLIN1 */ },
  { /*     1 */                  255 /* LinIfConf_LinIfChannel_CHNL_ec2e7cde not used by transceiver channel. */ },
  { /*     2 */                  255 /* LinIfConf_LinIfChannel_CHNL_f12b4c66 not used by transceiver channel. */ }
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_LinIfToLinTrcvNr
**********************************************************************************************************************/
/** 
  \var    LinIf_LinIfToLinTrcvNr
  \details
  Element    Description
  TrcvNr 
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_LinIfToLinTrcvNrType, LINIF_CONST) LinIf_LinIfToLinTrcvNr[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TrcvNr                                                                 */
  { /*     0 */     0 /* LinIfConf_LinIfChannel_CHNL_a1e6ddd5 -> LinTrcv_30_Tle7259 */ },
  { /*     1 */ 255 /* LinIfConf_LinIfChannel_CHNL_ec2e7cde not used by transceiver */ },
  { /*     2 */ 255 /* LinIfConf_LinIfChannel_CHNL_f12b4c66 not used by transceiver */ }
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_LinTrcv_CheckWakeupFct
**********************************************************************************************************************/
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_LinTrcv_CheckWakeupFctType, LINIF_CONST) LinIf_LinTrcv_CheckWakeupFct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     LinTrcv_CheckWakeupFct          */
  /*     0 */ LinTrcv_30_Tle7259_CheckWakeup 
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_LinTrcv_GetBusWuReasonFct
**********************************************************************************************************************/
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_LinTrcv_GetBusWuReasonFctType, LINIF_CONST) LinIf_LinTrcv_GetBusWuReasonFct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     LinTrcv_GetBusWuReasonFct          */
  /*     0 */ LinTrcv_30_Tle7259_GetBusWuReason 
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_LinTrcv_GetOpModeFct
**********************************************************************************************************************/
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_LinTrcv_GetOpModeFctType, LINIF_CONST) LinIf_LinTrcv_GetOpModeFct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     LinTrcv_GetOpModeFct          */
  /*     0 */ LinTrcv_30_Tle7259_GetOpMode 
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_LinTrcv_SetOpModeFct
**********************************************************************************************************************/
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_LinTrcv_SetOpModeFctType, LINIF_CONST) LinIf_LinTrcv_SetOpModeFct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     LinTrcv_SetOpModeFct          */
  /*     0 */ LinTrcv_30_Tle7259_SetOpMode 
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_LinTrcv_SetWakeupModeFct
**********************************************************************************************************************/
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_LinTrcv_SetWakeupModeFctType, LINIF_CONST) LinIf_LinTrcv_SetWakeupModeFct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     LinTrcv_SetWakeupModeFct          */
  /*     0 */ LinTrcv_30_Tle7259_SetWakeupMode 
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_MasterChannelConfig
**********************************************************************************************************************/
/** 
  \var    LinIf_MasterChannelConfig
  \details
  Element                         Description
  ScheduleChangeBeforeSlotEnd     Point of schedule table change. True = after maximum frame time, False = at end of schedule slot.
  NumberOfSchedules               Number of schedule tables
  ScheduleTableListIndEndIdx      the end index of the 0:n relation pointing to LinIf_ScheduleTableListInd
  ScheduleTableListIndStartIdx    the start index of the 0:n relation pointing to LinIf_ScheduleTableListInd
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_MasterChannelConfigType, LINIF_CONST) LinIf_MasterChannelConfig[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ScheduleChangeBeforeSlotEnd  NumberOfSchedules  ScheduleTableListIndEndIdx  ScheduleTableListIndStartIdx        Referable Keys */
  { /*     0 */                       FALSE,                3u,                         4u,                           0u },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     1 */                       FALSE,                1u,                         6u,                           4u },  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*     2 */                       FALSE,                1u,                         8u,                           6u }   /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_ScheduleTableList
**********************************************************************************************************************/
/** 
  \var    LinIf_ScheduleTableList
  \details
  Element                    Description
  EntryEndIdx                the end index of the 0:n relation pointing to LinIf_Entry
  EntryStartIdx              the start index of the 0:n relation pointing to LinIf_Entry
  NumberOfScheduleEntries    number of entries
  ResumePosition             CONTINUE_AT_IT_POINT : 0 START_FROM_BEGINNING : 1
  RunMode                    RUN_CONTINUOUS : 0 RUN_ONCE : 1
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_ScheduleTableListType, LINIF_CONST) LinIf_ScheduleTableList[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    EntryEndIdx                              EntryStartIdx                              NumberOfScheduleEntries  ResumePosition  RunMode        Comment                                     Referable Keys */
  { /*     0 */ LINIF_NO_ENTRYENDIDXOFSCHEDULETABLELIST, LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST,                   0x00u,          0x00u,   0x00u },  /* [NULLSchedule_CHNL_a1e6ddd5]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     1 */                                      1u,                                        0u,                   0x01u,          0x01u,   0x00u },  /* [DiagRequestSchedule_72b11ad9]  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     2 */                                      2u,                                        1u,                   0x01u,          0x01u,   0x00u },  /* [DiagResponseSchedule_f0e03ba7] */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     3 */                                      8u,                                        2u,                   0x06u,          0x01u,   0x00u },  /* [VCU_LIN_Schedule_fbca640b]     */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  { /*     4 */ LINIF_NO_ENTRYENDIDXOFSCHEDULETABLELIST, LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST,                   0x00u,          0x00u,   0x00u },  /* [NULLSchedule_CHNL_ec2e7cde]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*     5 */                                     12u,                                        8u,                   0x04u,          0x01u,   0x00u },  /* [Vcu_Lin3_Schedule_a1d48d3a]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  { /*     6 */ LINIF_NO_ENTRYENDIDXOFSCHEDULETABLELIST, LINIF_NO_ENTRYSTARTIDXOFSCHEDULETABLELIST,                   0x00u,          0x00u,   0x00u },  /* [NULLSchedule]                  */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
  { /*     7 */                                     16u,                                       12u,                   0x04u,          0x01u,   0x00u }   /* [Vcu_Lin0_Schedule_7bfb014e]    */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_ScheduleTableListInd
**********************************************************************************************************************/
/** 
  \var    LinIf_ScheduleTableListInd
  \brief  the indexes of the 1:1 sorted relation pointing to LinIf_ScheduleTableList
*/ 
#define LINIF_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_ScheduleTableListIndType, LINIF_CONST) LinIf_ScheduleTableListInd[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ScheduleTableListInd      Referable Keys */
  /*     0 */                    0u,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  /*     1 */                    1u,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  /*     2 */                    2u,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  /*     3 */                    3u,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  /*     4 */                    4u,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  /*     5 */                    5u,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  /*     6 */                    6u,  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
  /*     7 */                    7u   /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */
};
#define LINIF_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_SystemToLinIfChannel
**********************************************************************************************************************/
/** 
  \var    LinIf_SystemToLinIfChannel
  \details
  Element              Description
  LinIfChannelIndex
*/ 
#define LINIF_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(LinIf_SystemToLinIfChannelType, LINIF_CONST) LinIf_SystemToLinIfChannel[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    LinIfChannelIndex                                                                             */
  { /*     0 */                                                             255U /* 0xFF -> No Lin channel */ },
  { /*     1 */                                                             255U /* 0xFF -> No Lin channel */ },
  { /*     2 */                                                             255U /* 0xFF -> No Lin channel */ },
  { /*     3 */                                                             255U /* 0xFF -> No Lin channel */ },
  { /*     4 */                                                             255U /* 0xFF -> No Lin channel */ },
  { /*     5 */ 0U /* ComMConf_ComMChannel_CN_ATOM_HWLIN1_64cfd50f -> LinIfConf_LinIfChannel_CHNL_a1e6ddd5 */ },
  { /*     6 */ 1U /* ComMConf_ComMChannel_CN_ATOM_HWLIN3_8ac1b423 -> LinIfConf_LinIfChannel_CHNL_ec2e7cde */ },
  { /*     7 */ 2U /* ComMConf_ComMChannel_CN_ATOM_HWLIN4_14a52180 -> LinIfConf_LinIfChannel_CHNL_f12b4c66 */ }
};
#define LINIF_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_ChannelData
**********************************************************************************************************************/
#define LINIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinIf_ChannelDataUType, LINIF_VAR_NOINIT) LinIf_ChannelData;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */  /* Data structure per LinIf channel */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  /*     1 */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  /*     2 */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */

#define LINIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  LinIf_MasterChannelData
**********************************************************************************************************************/
#define LINIF_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(LinIf_MasterChannelDataUType, LINIF_VAR_NOINIT) LinIf_MasterChannelData;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */  /* Data structure per LinIf Master channel */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_a1e6ddd5] */
  /*     1 */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_ec2e7cde] */
  /*     2 */  /* [/ActiveEcuC/LinIf/LinIfGlobalConfig/CHNL_f12b4c66] */

#define LINIF_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/






