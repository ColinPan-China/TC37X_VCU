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
 *            Module: Com
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Lcfg.c
 *   Generation Time: 2024-11-28 15:38:53
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"
#include "Com_Timer.h"
#include "Com_TxModeHdlr.h"
#include "Com_LLIf.h"
#include "Com_MainFunctions.h"

#include "Rte_Cbk.h"
#include "Appl_Cbk.h"

#include "SchM_Com.h"

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

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
  Com_ActivatableRxComIPdus
**********************************************************************************************************************/
/** 
  \var    Com_ActivatableRxComIPdus
  \brief  Contains all Rx ComIPdu's with assigned ComIPduGroup
  \details
  Element                                     Description
  PartitionsActivatableRxComIPdusStructIdx    the index of the 1:1 relation pointing to Com_PartitionsActivatableRxComIPdusStruct
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ActivatableRxComIPdusType, COM_CONST) Com_ActivatableRxComIPdus[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionsActivatableRxComIPdusStructIdx */
  { /*     0 */                                       0u },
  { /*     1 */                                       0u },
  { /*     2 */                                       0u },
  { /*     3 */                                       0u },
  { /*     4 */                                       0u },
  { /*     5 */                                       0u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ActivatableTxComIPdus
**********************************************************************************************************************/
/** 
  \var    Com_ActivatableTxComIPdus
  \brief  Contains all Tx ComIPdu's with assigned ComIPduGroup
  \details
  Element                                     Description
  PartitionsActivatableTxComIPdusStructIdx    the index of the 1:1 relation pointing to Com_PartitionsActivatableTxComIPdusStruct
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ActivatableTxComIPdusType, COM_CONST) Com_ActivatableTxComIPdus[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionsActivatableTxComIPdusStructIdx */
  { /*     0 */                                       0u },
  { /*     1 */                                       0u },
  { /*     2 */                                       0u },
  { /*     3 */                                       0u },
  { /*     4 */                                       0u },
  { /*     5 */                                       0u }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CbkRxTOutFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_CbkRxTOutFuncPtr
  \brief  Function pointer table containing configured Rx timeout notifications for signals and signal groups.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComCbkRxTOutType, COM_CONST) Com_CbkRxTOutFuncPtr[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     CbkRxTOutFuncPtr                                                             Referable Keys */
  /*     0 */ Com_Msg200h_Timeout_Notification                                        ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     1 */ Rte_COMCbkRxTOut_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     2 */ Rte_COMCbkRxTOut_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     3 */ Rte_COMCbkRxTOut_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     4 */ Com_Msg201h_Timeout_Notification                                        ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     5 */ Rte_COMCbkRxTOut_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     6 */ Rte_COMCbkRxTOut_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     7 */ Rte_COMCbkRxTOut_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx    /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueSInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueSInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (SINT16)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueSInt16Type, COM_CONST) Com_ConstValueSInt16[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueSInt16      Referable Keys */
  /*     0 */                 0   /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig0_oVcuRxMsg3_oTC37X_VCU_CAN01_28190d1d_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig1_oVcuRxMsg3_oTC37X_VCU_CAN01_4b1ed439_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig2_oVcuRxMsg3_oTC37X_VCU_CAN01_ee16bf55_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig3_oVcuRxMsg3_oTC37X_VCU_CAN01_8d116671_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig0_oVcuRxMsg4_oTC37X_VCU_CAN01_36b8b0fb_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig1_oVcuRxMsg4_oTC37X_VCU_CAN01_55bf69df_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig2_oVcuRxMsg4_oTC37X_VCU_CAN01_f0b702b3_RxInitValue, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig3_oVcuRxMsg4_oTC37X_VCU_CAN01_93b0db97_RxInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt8      Referable Keys */
  /*     0 */            0x00u   /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_Sig0_oVcu_Lin0_RxMsg1_oLIN00_1b3066fe_RxInitValue, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_Sig1_oVcu_Lin0_RxMsg1_oLIN00_bebbf6f0_RxInitValue, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig0_oVcu_Lin0_RxMsg2_oLIN00_d11e4405_RxInitValue, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig1_oVcu_Lin0_RxMsg2_oLIN00_7495d40b_RxInitValue, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg1_oLIN00_cff765bb_RxInitValue, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg2_oLIN00_41786258_RxInitValue, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg1_oLIN00_6a7cf5b5_RxInitValue, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg2_oLIN00_e4f3f256_RxInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_MainFunctionRxStruct
**********************************************************************************************************************/
/** 
  \var    Com_MainFunctionRxStruct
  \details
  Element                              Description
  RxTOutInfoOfMainFunctionRxIndUsed    TRUE, if the 0:n relation has 1 relation pointing to Com_RxTOutInfoOfMainFunctionRxInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_MainFunctionRxStructType, COM_CONST) Com_MainFunctionRxStruct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxTOutInfoOfMainFunctionRxIndUsed        Referable Keys */
  { /*     0 */                              TRUE }   /* [ComMainFunctionRx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_MainFunctionTxStruct
**********************************************************************************************************************/
/** 
  \var    Com_MainFunctionTxStruct
  \details
  Element                             Description
  TxPduInfoOfMainFunctionTxIndUsed    TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInfoOfMainFunctionTxInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_MainFunctionTxStructType, COM_CONST) Com_MainFunctionTxStruct[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxPduInfoOfMainFunctionTxIndUsed        Referable Keys */
  { /*     0 */                             TRUE }   /* [ComMainFunctionTx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_PduGrpVector
**********************************************************************************************************************/
/** 
  \var    Com_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_PduGrpVectorType, COM_CONST) Com_PduGrpVector[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     PduGrpVector      Referable Keys */
  /*     0 */         0x02u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*     1 */         0x01u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  /*     2 */         0x08u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*     3 */         0x10u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*     4 */         0x04u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     5 */         0x20u   /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                   Description
  InitValueUsed             TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BufferIdx                 the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64,Com_RxSigBufferFloat32,Com_RxSigBufferFloat64
  ByteLength                Byte length of the signal or group signal.
  InitValueIdx              the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  RxPduInfoIdx              the index of the 1:1 relation pointing to Com_RxPduInfo
  RxTOutInfoIdx             the index of the 0:1 relation pointing to Com_RxTOutInfo
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[24] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitValueUsed  ApplType                           BitLength  BitPosition  BufferIdx  ByteLength  InitValueIdx  RxPduInfoIdx  RxTOutInfoIdx                       StartByteInPduPosition        Referable Keys */
  { /*     0 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,          0u,        0u,         2u,           0u,           0u,                                 0u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*     1 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,        1u,         2u,           0u,           0u,                                 0u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*     2 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         32u,        2u,         2u,           0u,           0u,                                 0u,                     4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*     3 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         48u,        3u,         2u,           0u,           0u,                                 0u,                     6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*     4 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,          0u,        4u,         2u,           0u,           1u,                                 1u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*     5 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,        5u,         2u,           0u,           1u,                                 1u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*     6 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         32u,        6u,         2u,           0u,           1u,                                 1u,                     4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*     7 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         48u,        7u,         2u,           0u,           1u,                                 1u,                     6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*     8 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,          0u,        8u,         2u,           0u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig0_oVcuRxMsg3_oTC37X_VCU_CAN01_28190d1d_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*     9 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,        9u,         2u,           0u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig1_oVcuRxMsg3_oTC37X_VCU_CAN01_4b1ed439_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    10 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         32u,       10u,         2u,           0u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig2_oVcuRxMsg3_oTC37X_VCU_CAN01_ee16bf55_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    11 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         48u,       11u,         2u,           0u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig3_oVcuRxMsg3_oTC37X_VCU_CAN01_8d116671_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    12 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,          0u,       12u,         2u,           0u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig0_oVcuRxMsg4_oTC37X_VCU_CAN01_36b8b0fb_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    13 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,       13u,         2u,           0u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig1_oVcuRxMsg4_oTC37X_VCU_CAN01_55bf69df_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    14 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         32u,       14u,         2u,           0u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig2_oVcuRxMsg4_oTC37X_VCU_CAN01_f0b702b3_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    15 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         48u,       15u,         2u,           0u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig3_oVcuRxMsg4_oTC37X_VCU_CAN01_93b0db97_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    16 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,        0u,         1u,           0u,           4u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_Sig0_oVcu_Lin0_RxMsg1_oLIN00_1b3066fe_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  { /*    17 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,        1u,         1u,           0u,           4u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_Sig1_oVcu_Lin0_RxMsg1_oLIN00_bebbf6f0_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  { /*    18 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,        2u,         1u,           0u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig0_oVcu_Lin0_RxMsg2_oLIN00_d11e4405_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  { /*    19 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,        3u,         1u,           0u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig1_oVcu_Lin0_RxMsg2_oLIN00_7495d40b_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  { /*    20 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,        4u,         1u,           0u,           4u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg1_oLIN00_cff765bb_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  { /*    21 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,        5u,         1u,           0u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg2_oLIN00_41786258_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  { /*    22 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,        6u,         1u,           0u,           4u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg1_oLIN00_6a7cf5b5_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  { /*    23 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         32u,        7u,         1u,           0u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4u }   /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg2_oLIN00_e4f3f256_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxAccessInfoIndType, COM_CONST) Com_RxAccessInfoInd[24] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxAccessInfoInd      Referable Keys */
  /*     0 */               0u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     1 */               1u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     2 */               2u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     3 */               3u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     4 */               4u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     5 */               5u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     6 */               6u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     7 */               7u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     8 */               8u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*     9 */               9u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    10 */              10u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    11 */              11u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    12 */              12u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    13 */              13u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    14 */              14u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    15 */              15u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    16 */              16u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  /*    17 */              17u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  /*    18 */              20u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  /*    19 */              22u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  /*    20 */              18u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  /*    21 */              19u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  /*    22 */              21u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  /*    23 */              23u   /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxCbkFuncPtr
**********************************************************************************************************************/
/** 
  \var    Com_RxCbkFuncPtr
  \brief  Function pointer table containing configured notification and invalid notifications function pointer for signals and signal groups.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(ComRxCbkType, COM_CONST) Com_RxCbkFuncPtr[8] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxCbkFuncPtr                                                           Referable Keys */
  /*     0 */ Rte_COMCbk_VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_RxAck] */
  /*     1 */ Rte_COMCbk_VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_RxAck] */
  /*     2 */ Rte_COMCbk_VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_RxAck] */
  /*     3 */ Rte_COMCbk_VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_RxAck] */
  /*     4 */ Rte_COMCbk_VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_RxAck] */
  /*     5 */ Rte_COMCbk_VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_RxAck] */
  /*     6 */ Rte_COMCbk_VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx ,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_RxAck] */
  /*     7 */ Rte_COMCbk_VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx    /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_RxAck] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                     Description
  MainFunctionRxStructUsed    TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_MainFunctionRxStruct
  RxTOutInfoUsed              TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxTOutInfo
  PartitionsRxStructIdx       the index of the 1:1 relation pointing to Com_PartitionsRxStruct
  PduGrpVectorStartIdx        the start index of the 0:n relation pointing to Com_PduGrpVector
  RxDefPduBufferStartIdx      the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxSigInfoEndIdx             the end index of the 0:n relation pointing to Com_RxSigInfo
  RxSigInfoStartIdx           the start index of the 0:n relation pointing to Com_RxSigInfo
  RxTOutInfoIndEndIdx         the end index of the 0:n relation pointing to Com_RxTOutInfoInd
  RxTOutInfoIndStartIdx       the start index of the 0:n relation pointing to Com_RxTOutInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MainFunctionRxStructUsed  RxTOutInfoUsed  PartitionsRxStructIdx  PduGrpVectorStartIdx  RxDefPduBufferStartIdx  RxSigInfoEndIdx  RxSigInfoStartIdx  RxTOutInfoIndEndIdx                    RxTOutInfoIndStartIdx                          Referable Keys */
  { /*     0 */                     TRUE,           TRUE,                    0u,                   4u,                     0u,              4u,                0u,                                    1u,                                      0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Rx_a08bac39, ComMainFunctionRx] */
  { /*     1 */                     TRUE,           TRUE,                    0u,                   4u,                     8u,              8u,                4u,                                    2u,                                      1u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Rx_a08bac39, ComMainFunctionRx] */
  { /*     2 */                     TRUE,          FALSE,                    0u,                   3u,                    16u,             12u,                8u, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, ComMainFunctionRx] */
  { /*     3 */                     TRUE,          FALSE,                    0u,                   3u,                    24u,             16u,               12u, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, ComMainFunctionRx] */
  { /*     4 */                     TRUE,          FALSE,                    0u,                   1u,                    32u,             20u,               16u, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  { /*     5 */                     TRUE,          FALSE,                    0u,                   1u,                    40u,             24u,               20u, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals.
  \details
  Element               Description
  RxTOutInfoUsed        TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_RxTOutInfo
  RxAccessInfoIdx       the index of the 1:1 relation pointing to Com_RxAccessInfo
  RxCbkFuncPtrAckIdx    the index of the 0:1 relation pointing to Com_RxCbkFuncPtr
  RxTOutInfoIdx         the index of the 0:1 relation pointing to Com_RxTOutInfo
  SignalProcessing  
  ValidDlc              Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[24] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxTOutInfoUsed  RxAccessInfoIdx  RxCbkFuncPtrAckIdx                    RxTOutInfoIdx                    SignalProcessing                          ValidDlc        Referable Keys */
  { /*     0 */           TRUE,              0u,                                   0u,                              0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*     1 */           TRUE,              1u,                                   1u,                              0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*     2 */           TRUE,              2u,                                   2u,                              0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*     3 */           TRUE,              3u,                                   3u,                              0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*     4 */           TRUE,              4u,                                   4u,                              1u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*     5 */           TRUE,              5u,                                   5u,                              1u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*     6 */           TRUE,              6u,                                   6u,                              1u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*     7 */           TRUE,              7u,                                   7u,                              1u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*     8 */          FALSE,              8u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*     9 */          FALSE,              9u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    10 */          FALSE,             10u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    11 */          FALSE,             11u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    12 */          FALSE,             12u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    13 */          FALSE,             13u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    14 */          FALSE,             14u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    15 */          FALSE,             15u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    16 */          FALSE,             16u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  { /*    17 */          FALSE,             17u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  { /*    18 */          FALSE,             20u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  { /*    19 */          FALSE,             22u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  { /*    20 */          FALSE,             18u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  { /*    21 */          FALSE,             19u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  { /*    22 */          FALSE,             21u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  { /*    23 */          FALSE,             23u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5u }   /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTOutInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxTOutInfo
  \brief  Contains all relevant information for signal based and I-PDu based Rx deadline monitoring.
  \details
  Element                        Description
  CbkRxTOutFuncPtrIndStartIdx    the start index of the 0:n relation pointing to Com_CbkRxTOutFuncPtrInd
  FirstFactor                    Timeout factor for first deadline monitoring.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxTOutInfoType, COM_CONST) Com_RxTOutInfo[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    CbkRxTOutFuncPtrIndStartIdx  FirstFactor        Referable Keys */
  { /*     0 */                          0u,        201u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_RxPduBased, ComMainFunctionRx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx] */
  { /*     1 */                          4u,        201u }   /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_RxPduBased, ComMainFunctionRx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeFalse
**********************************************************************************************************************/
/** 
  \var    Com_TxModeFalse
  \brief  Contains all relevant information for transmission mode false.
  \details
  Element       Description
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeFalseType, COM_CONST) Com_TxModeFalse[2] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TimePeriod        Referable Keys */
  { /*     0 */         0u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  { /*     1 */        50u }   /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element           Description
  InitMode          Initial transmission mode selector of the Tx I-PDU.
  TxModeFalseIdx    the index of the 1:1 relation pointing to Com_TxModeFalse
  TxModeTrueIdx     the index of the 1:1 relation pointing to Com_TxModeTrue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitMode  TxModeFalseIdx  TxModeTrueIdx        Referable Keys */
  { /*     0 */     TRUE,             1u,            2u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  { /*     1 */     TRUE,             1u,            2u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*     2 */     TRUE,             1u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*     3 */     TRUE,             1u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*     4 */     TRUE,             0u,            0u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  { /*     5 */     TRUE,             0u,            0u }   /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element       Description
  TimeOffset    Initial time offset factor for cyclic transmission.
  TimePeriod    Cycle time factor.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TimeOffset  TimePeriod        Referable Keys */
  { /*     0 */         1u,         0u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  { /*     1 */        11u,        50u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*     2 */         1u,        50u }   /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                   Description
  TxBufferUsed              TRUE, if the 0:n relation has 1 relation pointing to Com_TxBuffer
  PartitionsTxStructIdx     the index of the 1:1 relation pointing to Com_PartitionsTxStruct
  PduGrpVectorStartIdx      the start index of the 0:n relation pointing to Com_PduGrpVector
  TxBufferLength            the number of relations pointing to Com_TxBuffer
  TxPduInitValueEndIdx      the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx    the start index of the 0:n relation pointing to Com_TxPduInitValue
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[6] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxBufferUsed  PartitionsTxStructIdx  PduGrpVectorStartIdx  TxBufferLength  TxPduInitValueEndIdx  TxPduInitValueStartIdx        Referable Keys */
  { /*     0 */         TRUE,                    0u,                   5u,             8u,                   8u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  { /*     1 */         TRUE,                    0u,                   5u,             8u,                  16u,                     8u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  { /*     2 */         TRUE,                    0u,                   2u,             8u,                  24u,                    16u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*     3 */         TRUE,                    0u,                   2u,             8u,                  32u,                    24u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*     4 */         TRUE,                    0u,                   0u,             8u,                  40u,                    32u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  { /*     5 */         TRUE,                    0u,                   0u,             8u,                  48u,                    40u }   /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[48] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPduInitValue      Referable Keys */
  /*     0 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     1 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     2 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     3 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     4 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     5 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     6 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     7 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     8 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     9 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    10 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    11 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    12 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    13 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    14 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    15 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    16 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    17 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    18 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    19 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    20 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    21 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    22 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    23 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    24 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*    25 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*    26 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*    27 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*    28 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*    29 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*    30 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*    31 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*    32 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    33 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    34 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    35 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    36 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    37 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    38 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    39 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    40 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*    41 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*    42 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*    43 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*    44 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*    45 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*    46 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*    47 */           0xFFu   /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element                   Description
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  ByteLength                Byte length of the signal or group signal.
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxBufferEndIdx            the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx          the start index of the 0:n relation pointing to Com_TxBuffer
  TxPduInfoIdx              the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[24] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ApplType                        BitLength  BitPosition  ByteLength  StartByteInPduPosition  TxBufferEndIdx  TxBufferStartIdx  TxPduInfoIdx        Referable Keys */
  { /*     0 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,         2u,                     0u,             2u,               0u,           0u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig0_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_77707e8c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  { /*     1 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,         2u,                     2u,             4u,               2u,           0u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig1_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_86aa7b26_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  { /*     2 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,         2u,                     4u,             6u,               4u,           0u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig2_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_4fb57399_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  { /*     3 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,         2u,                     6u,             8u,               6u,           0u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig3_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_be6f7633_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  { /*     4 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,         2u,                     0u,            10u,               8u,           1u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig0_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_c7979c8e_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*     5 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,         2u,                     2u,            12u,              10u,           1u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig1_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_364d9924_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*     6 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,         2u,                     4u,            14u,              12u,           1u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig2_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_ff52919b_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*     7 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,         2u,                     6u,            16u,              14u,           1u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig3_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_0e889431_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*     8 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,         2u,                     0u,            18u,              16u,           2u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*     9 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,         2u,                     2u,            20u,              18u,           2u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*    10 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,         2u,                     4u,            22u,              20u,           2u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*    11 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,         2u,                     6u,            24u,              22u,           2u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*    12 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,         2u,                     0u,            26u,              24u,           3u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*    13 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,         2u,                     2u,            28u,              26u,           3u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*    14 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,         2u,                     4u,            30u,              28u,           3u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*    15 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,         2u,                     6u,            32u,              30u,           3u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*    16 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         1u,                     0u,            33u,              32u,           4u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_Sig0_oVcu_Lin0_TxMsg1_oLIN00_7702c350_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  { /*    17 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,         1u,                     1u,            34u,              33u,           4u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_Sig1_oVcu_Lin0_TxMsg1_oLIN00_d289535e_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  { /*    18 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,         1u,                     2u,            35u,              34u,           4u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_Sig2_oVcu_Lin0_TxMsg1_oLIN00_e764e50d_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  { /*    19 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,         1u,                     3u,            36u,              35u,           4u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_Sig3_oVcu_Lin0_TxMsg1_oLIN00_42ef7503_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  { /*    20 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          0u,         1u,                     0u,            41u,              40u,           5u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_Sig0_oVcu_Lin0_TxMsg2_oLIN00_bd2ce1ab_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  { /*    21 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,         1u,                     1u,            42u,              41u,           5u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_Sig1_oVcu_Lin0_TxMsg2_oLIN00_18a771a5_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  { /*    22 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,         1u,                     2u,            43u,              42u,           5u },  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_Sig2_oVcu_Lin0_TxMsg2_oLIN00_2d4ac7f6_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  { /*    23 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,         1u,                     3u,            44u,              43u,           5u }   /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_Sig3_oVcu_Lin0_TxMsg2_oLIN00_88c157f8_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CurrentTxModeUType, COM_VAR_NOINIT) Com_CurrentTxMode;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CycleTimeCntUType, COM_VAR_NOINIT) Com_CycleTimeCnt;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_CyclicSendRequestUType, COM_VAR_NOINIT) Com_CyclicSendRequest;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized = FALSE;  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredFctPtrCache
**********************************************************************************************************************/
/** 
  \var    Com_RxDeferredFctPtrCache
  \brief  Cache for deferred Rx (invalid) notification.
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxDeferredFctPtrCacheUType, COM_VAR_NOINIT) Com_RxDeferredFctPtrCache;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMainFunctionRx] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxIPduGroupISRLockCounterUType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [noPartition] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxMainFunctionProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxMainFunctionProcessingISRLockCounterUType, COM_VAR_NOINIT) Com_RxMainFunctionProcessingISRLockCounter;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMainFunctionRx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduDmState
**********************************************************************************************************************/
/** 
  \var    Com_RxPduDmState
  \brief  Rx I-PDU based deadline monitoring state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxPduDmStateType, COM_VAR_NOINIT) Com_RxPduDmState[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_RxPduBased, ComMainFunctionRx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_RxPduBased, ComMainFunctionRx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Rx_a08bac39, ComMainFunctionRx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Rx_a08bac39, ComMainFunctionRx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, ComMainFunctionRx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, ComMainFunctionRx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_oLIN00_537f3cf2_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_oLIN00_ddf03b11_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferSInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferSInt16
  \brief  Rx Signal and Group Signal Buffer. (SINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferSInt16Type, COM_VAR_NOINIT) Com_RxSigBufferSInt16[16];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx_RxSignalBufferRouting] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx_RxSignalBufferRouting] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx_RxSignalBufferRouting] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx_RxSignalBufferRouting] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig0_oVcuRxMsg3_oTC37X_VCU_CAN01_28190d1d_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig0_oVcuRxMsg3_oTC37X_VCU_CAN01_28190d1d_Rx_RxSignalBufferRouting] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig1_oVcuRxMsg3_oTC37X_VCU_CAN01_4b1ed439_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig1_oVcuRxMsg3_oTC37X_VCU_CAN01_4b1ed439_Rx_RxSignalBufferRouting] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig2_oVcuRxMsg3_oTC37X_VCU_CAN01_ee16bf55_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig2_oVcuRxMsg3_oTC37X_VCU_CAN01_ee16bf55_Rx_RxSignalBufferRouting] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig3_oVcuRxMsg3_oTC37X_VCU_CAN01_8d116671_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig3_oVcuRxMsg3_oTC37X_VCU_CAN01_8d116671_Rx_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig0_oVcuRxMsg4_oTC37X_VCU_CAN01_36b8b0fb_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig0_oVcuRxMsg4_oTC37X_VCU_CAN01_36b8b0fb_Rx_RxSignalBufferRouting] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig1_oVcuRxMsg4_oTC37X_VCU_CAN01_55bf69df_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig1_oVcuRxMsg4_oTC37X_VCU_CAN01_55bf69df_Rx_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig2_oVcuRxMsg4_oTC37X_VCU_CAN01_f0b702b3_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig2_oVcuRxMsg4_oTC37X_VCU_CAN01_f0b702b3_Rx_RxSignalBufferRouting] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig3_oVcuRxMsg4_oTC37X_VCU_CAN01_93b0db97_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig3_oVcuRxMsg4_oTC37X_VCU_CAN01_93b0db97_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt8Type, COM_VAR_NOINIT) Com_RxSigBufferUInt8[8];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_Sig0_oVcu_Lin0_RxMsg1_oLIN00_1b3066fe_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_Sig0_oVcu_Lin0_RxMsg1_oLIN00_1b3066fe_Rx_RxSignalBufferRouting] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_Sig1_oVcu_Lin0_RxMsg1_oLIN00_bebbf6f0_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg1_Sig1_oVcu_Lin0_RxMsg1_oLIN00_bebbf6f0_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig0_oVcu_Lin0_RxMsg2_oLIN00_d11e4405_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig0_oVcu_Lin0_RxMsg2_oLIN00_d11e4405_Rx_RxSignalBufferRouting] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig1_oVcu_Lin0_RxMsg2_oLIN00_7495d40b_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig1_oVcu_Lin0_RxMsg2_oLIN00_7495d40b_Rx_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg1_oLIN00_cff765bb_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg1_oLIN00_cff765bb_Rx_RxSignalBufferRouting] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg2_oLIN00_41786258_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig2_oVcu_Lin0_RxMsg2_oLIN00_41786258_Rx_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg1_oLIN00_6a7cf5b5_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg1_oLIN00_6a7cf5b5_Rx_RxSignalBufferRouting] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg2_oLIN00_e4f3f256_Rx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_RxMsg2_Sig3_oVcu_Lin0_RxMsg2_oLIN00_e4f3f256_Rx_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxTOutCnt
**********************************************************************************************************************/
/** 
  \var    Com_RxTOutCnt
  \brief  This array holds timeout counters for all Rx timeout objects.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxTOutCntType, COM_VAR_NOINIT) Com_RxTOutCnt[2];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_RxPduBased, ComMainFunctionRx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_RxPduBased, ComMainFunctionRx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TransmitRequestUType, COM_VAR_NOINIT) Com_TransmitRequest;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[48];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig0_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_77707e8c_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig0_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_77707e8c_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig1_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_86aa7b26_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig1_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_86aa7b26_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig2_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_4fb57399_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig2_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_4fb57399_Tx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig3_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_be6f7633_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig3_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_be6f7633_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig0_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_c7979c8e_Tx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig0_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_c7979c8e_Tx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig1_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_364d9924_Tx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig1_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_364d9924_Tx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig2_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_ff52919b_Tx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig2_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_ff52919b_Tx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig3_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_0e889431_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig3_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_0e889431_Tx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_Sig0_oVcu_Lin0_TxMsg1_oLIN00_7702c350_Tx] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_Sig1_oVcu_Lin0_TxMsg1_oLIN00_d289535e_Tx] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_Sig2_oVcu_Lin0_TxMsg1_oLIN00_e764e50d_Tx] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_Sig3_oVcu_Lin0_TxMsg1_oLIN00_42ef7503_Tx] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_Sig0_oVcu_Lin0_TxMsg2_oLIN00_bd2ce1ab_Tx] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_Sig1_oVcu_Lin0_TxMsg2_oLIN00_18a771a5_Tx] */
  /*    42 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_Sig2_oVcu_Lin0_TxMsg2_oLIN00_2d4ac7f6_Tx] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx, /ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_Sig3_oVcu_Lin0_TxMsg2_oLIN00_88c157f8_Tx] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxIPduGroupISRLockCounterUType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [noPartition] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxProcessingISRLockCounterUType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;  /* PRQA S 0759, 1514, 1533 */  /* MD_CSL_Union, MD_CSL_ObjectOnlyAccessedOnce, MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [ComMainFunctionTx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[6];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg1_oLIN00_f39ae32f_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/Vcu_Lin0_TxMsg2_oLIN00_7d15e4cc_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/






#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * Com_MainFunctionRx_ComMainFunctionRx
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call Com_MainFunctionRx with the id referencing this main function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionRx_ComMainFunctionRx(void)
{
#if ((COM_EXISTS_DEFERRED_SIGNALPROCESSINGOFRXPDUINFO == STD_ON)||(COM_RXTOUTINFO == STD_ON))
  Com_MainFunctionRxStructIterType id = 0;
  Com_MainFunctionRxInternal(id);
#endif
}

/**********************************************************************************************************************
 * Com_MainFunctionTx_ComMainFunctionTx
 *********************************************************************************************************************/
 /*!
 * \internal
 * - call Com_MainFunctionTx with the id referencing this main function.
 * \endinternal
 *********************************************************************************************************************/
FUNC(void, COM_CODE) Com_MainFunctionTx_ComMainFunctionTx(void)
{
#if (COM_TXMODEINFO == STD_ON)
  Com_MainFunctionTxStructIterType id = 0;
  Com_MainFunctionTxInternal(id);
#endif
}

#define COM_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */   /* MD_MSR_MemMap */

/**********************************************************************************************************************
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/

