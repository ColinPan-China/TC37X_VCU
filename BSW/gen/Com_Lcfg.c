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
 *   Generation Time: 2025-01-03 11:03:38
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
CONST(Com_ActivatableRxComIPdusType, COM_CONST) Com_ActivatableRxComIPdus[12] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionsActivatableRxComIPdusStructIdx */
  { /*     0 */                                       0u },
  { /*     1 */                                       0u },
  { /*     2 */                                       0u },
  { /*     3 */                                       0u },
  { /*     4 */                                       0u },
  { /*     5 */                                       0u },
  { /*     6 */                                       0u },
  { /*     7 */                                       0u },
  { /*     8 */                                       0u },
  { /*     9 */                                       0u },
  { /*    10 */                                       0u },
  { /*    11 */                                       0u }
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
CONST(Com_ActivatableTxComIPdusType, COM_CONST) Com_ActivatableTxComIPdus[18] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    PartitionsActivatableTxComIPdusStructIdx */
  { /*     0 */                                       0u },
  { /*     1 */                                       0u },
  { /*     2 */                                       0u },
  { /*     3 */                                       0u },
  { /*     4 */                                       0u },
  { /*     5 */                                       0u },
  { /*     6 */                                       0u },
  { /*     7 */                                       0u },
  { /*     8 */                                       0u },
  { /*     9 */                                       0u },
  { /*    10 */                                       0u },
  { /*    11 */                                       0u },
  { /*    12 */                                       0u },
  { /*    13 */                                       0u },
  { /*    14 */                                       0u },
  { /*    15 */                                       0u },
  { /*    16 */                                       0u },
  { /*    17 */                                       0u }
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
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[1] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt16      Referable Keys */
  /*     0 */           0x0000u   /* [/ActiveEcuC/Com/ComConfig/Act_Pos_sta_oSVA_VCU_STD_oLIN00_642c9ffa_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV1_CurrentPosition_oEXV_1_VCU_oLIN00_6daec86f_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_CurrentPosition_oEXV_2_VCU_oLIN00_91e32486_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_Pos_oEXV2_Status_oLIN00_da80603b_RxInitValue] */
};
#define COM_STOP_SEC_CONST_16BIT
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
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[3] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     ConstValueUInt8      Referable Keys */
  /*     0 */            0x03u,  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_On_Rq_oTCU_HVCH_Cmd_oLIN00_9f442eaf_TxInvValue] */
  /*     1 */            0x32u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_DutyCycle_oHVCH_Rsp01_oLIN00_ad1e6a22_RxInitValue] */
  /*     2 */            0x00u   /* [/ActiveEcuC/Com/ComConfig/Blockage_Fault_STA_oSVA_VCU_STD_oLIN00_6c89246f_RxInitValue, /ActiveEcuC/Com/ComConfig/Breakage_Fault_STA_oSVA_VCU_STD_oLIN00_a3ac9cf8_RxInitValue, /ActiveEcuC/Com/ComConfig/Calibration_sta_oSVA_VCU_STD_oLIN00_dcb4af08_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV1_CurrentInitState_oEXV_1_VCU_oLIN00_beca31e2_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV1_FaultState_oEXV_1_VCU_oLIN00_72ff14f0_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV1_ResponseError_oEXV_1_VCU_oLIN00_cbce9ad1_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV1_RunState_oEXV_1_VCU_oLIN00_f0dc555f_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV1_TemperatureWarn_oEXV_1_VCU_oLIN00_a3317e4b_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV1_VoltageState_oEXV_1_VCU_oLIN00_31bbfd77_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_CurrentInitState_oEXV_2_VCU_oLIN00_adb498ec_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_FaultState_oEXV_2_VCU_oLIN00_41c0e318_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_Fault_Stat_oEXV2_Status_oLIN00_ab6350b6_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_OvrTemp_Warn_oEXV2_Status_oLIN00_ba77659e_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_ResponseError_oEXV_2_VCU_oLIN00_e747f934_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_RunState_oEXV_2_VCU_oLIN00_859c8088_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_Run_Stat_oEXV2_Status_oLIN00_0e992e12_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_TemperatureWarn_oEXV_2_VCU_oLIN00_5f7c92a2_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_Volt_Stat_oEXV2_Status_oLIN00_c8727eb0_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_VoltageState_oEXV_2_VCU_oLIN00_8f3a2738_RxInitValue, /ActiveEcuC/Com/ComConfig/EXV2_curInit_Stat_oEXV2_Status_oLIN00_b0ace0f5_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_CurrSens_Flt_oHVCH_Rsp01_oLIN00_09f7bc74_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_ExtPwrSup_Flt_oHVCH_Rsp01_oLIN00_28926933_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_HV_DC_curr_oHVCH_Rsp01_oLIN00_f613e39d_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_HV_Voltage_Valid_oHVCH_Rsp01_oLIN00_2914831e_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_HV_voltage_oHVCH_Rsp01_oLIN00_3d3da318_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_IntelTemp_oHVCH_Rsp02_oLIN00_2b487110_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_InternalPCBTemp_oHVCH_Rsp01_oLIN00_398b53e8_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_LIN_Flt_oHVCH_Rsp01_oLIN00_9aaa25bf_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_MediumTemp_oHVCH_Rsp01_oLIN00_a3387de4_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_Off_ShrtCurr_oHVCH_Rsp01_oLIN00_bf58ab45_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_RsErr_oHVCH_Rsp01_oLIN00_527b0f8f_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_Status_oHVCH_Rsp01_oLIN00_60afdc75_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_TempLim_oHVCH_Rsp01_oLIN00_d22e6add_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_TempSens_Flt_oHVCH_Rsp01_oLIN00_66cb2c71_RxInitValue, /ActiveEcuC/Com/ComConfig/HVCH_defectHeaterCircuits_oHVCH_Rsp01_oLIN00_61948e74_RxInitValue, /ActiveEcuC/Com/ComConfig/LIN_Resp_Error_sta_oSVA_VCU_STD_oLIN00_47f7ca93_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP2_PumpDryRunningSta_oPMP2_Sts_oLIN00_3e217a22_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP2_PumpInputVolt_oPMP2_Sts_oLIN00_1fa0a533_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP2_PumpMotorSta_oPMP2_Sts_oLIN00_d6d3ab88_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP2_PumpPowerSta_oPMP2_Sts_oLIN00_1d0f1319_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP2_PumpTempSta_oPMP2_Sts_oLIN00_81f2fa55_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP2_RESP_ERROR_oPMP2_Sts_oLIN00_67b666eb_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP2_RealRPM_oPMP2_Sts_oLIN00_86d75572_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP3_PumpDryRunningSta_oPMP3_Sts_oLIN00_30f4e2d8_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP3_PumpInputVolt_oPMP3_Sts_oLIN00_75dfecf6_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP3_PumpMotorSta_oPMP3_Sts_oLIN00_43910f36_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP3_PumpPowerSta_oPMP3_Sts_oLIN00_884db7a7_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP3_PumpTempSta_oPMP3_Sts_oLIN00_26375532_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP3_RESP_ERROR_oPMP3_Sts_oLIN00_9f14f3a0_RxInitValue, /ActiveEcuC/Com/ComConfig/PMP3_RealRPM_oPMP3_Sts_oLIN00_fa6fbf8a_RxInitValue, /ActiveEcuC/Com/ComConfig/RsErr_EXV2_oEXV2_Status_oLIN00_5c35655a_RxInitValue] */
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
  /*     0 */         0x08u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*     1 */         0x10u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*     2 */         0x04u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*     3 */         0x20u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     4 */         0x01u,  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx, /ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx, /ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx, /ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx, /ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx, /ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*     5 */         0x02u   /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
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
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
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
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[72] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitValueUsed  ApplType                           BitLength  BitPosition  BufferIdx  BusAcc                              ByteLength  InitValueIdx  RxPduInfoIdx  RxTOutInfoIdx                       StartByteInPduPosition        Referable Keys */
  { /*     0 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       12u,          8u,        0u, COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         1u,           0u,           7u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/Act_Pos_sta_oSVA_VCU_STD_oLIN00_642c9ffa_Rx, /ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*     1 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          2u,        0u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           7u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/Blockage_Fault_STA_oSVA_VCU_STD_oLIN00_6c89246f_Rx, /ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*     2 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          3u,        1u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           7u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/Breakage_Fault_STA_oSVA_VCU_STD_oLIN00_a3ac9cf8_Rx, /ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*     3 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          0u,        2u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           7u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/Calibration_sta_oSVA_VCU_STD_oLIN00_dcb4af08_Rx, /ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*     4 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          1u,        3u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           1u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV1_CurrentInitState_oEXV_1_VCU_oLIN00_beca31e2_Rx, /ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*     5 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,        1u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           1u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/EXV1_CurrentPosition_oEXV_1_VCU_oLIN00_6daec86f_Rx, /ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*     6 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          4u,        4u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           1u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV1_FaultState_oEXV_1_VCU_oLIN00_72ff14f0_Rx, /ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*     7 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          0u,        5u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           1u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV1_ResponseError_oEXV_1_VCU_oLIN00_cbce9ad1_Rx, /ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*     8 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          3u,        6u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           1u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV1_RunState_oEXV_1_VCU_oLIN00_f0dc555f_Rx, /ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*     9 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         10u,        7u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           1u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/EXV1_TemperatureWarn_oEXV_1_VCU_oLIN00_a3317e4b_Rx, /ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*    10 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          8u,        8u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           1u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/EXV1_VoltageState_oEXV_1_VCU_oLIN00_31bbfd77_Rx, /ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*    11 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          1u,        9u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_CurrentInitState_oEXV_2_VCU_oLIN00_adb498ec_Rx, /ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    12 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,        2u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_CurrentPosition_oEXV_2_VCU_oLIN00_91e32486_Rx, /ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    13 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          4u,       10u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_FaultState_oEXV_2_VCU_oLIN00_41c0e318_Rx, /ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    14 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        4u,          8u,       11u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           0u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Fault_Stat_oEXV2_Status_oLIN00_ab6350b6_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*    15 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         14u,       12u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           0u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_OvrTemp_Warn_oEXV2_Status_oLIN00_ba77659e_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*    16 */          TRUE, COM_UINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,        3u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           0u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Pos_oEXV2_Status_oLIN00_da80603b_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*    17 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          0u,       13u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_ResponseError_oEXV_2_VCU_oLIN00_e747f934_Rx, /ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    18 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          3u,       14u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_RunState_oEXV_2_VCU_oLIN00_859c8088_Rx, /ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    19 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          4u,       15u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           0u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Run_Stat_oEXV2_Status_oLIN00_0e992e12_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*    20 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         10u,       16u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_TemperatureWarn_oEXV_2_VCU_oLIN00_5f7c92a2_Rx, /ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    21 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         12u,       17u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           0u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Volt_Stat_oEXV2_Status_oLIN00_c8727eb0_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*    22 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          8u,       18u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           2u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_VoltageState_oEXV_2_VCU_oLIN00_8f3a2738_Rx, /ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    23 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          2u,       19u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           0u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_curInit_Stat_oEXV2_Status_oLIN00_b0ace0f5_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*    24 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        5u,         56u,       20u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     7u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_CurrSens_Flt_oHVCH_Rsp01_oLIN00_09f7bc74_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    25 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,       21u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           1u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_DutyCycle_oHVCH_Rsp01_oLIN00_ad1e6a22_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    26 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         45u,       22u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_ExtPwrSup_Flt_oHVCH_Rsp01_oLIN00_28926933_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    27 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,       23u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_HV_DC_curr_oHVCH_Rsp01_oLIN00_f613e39d_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    28 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,         40u,       24u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_HV_Voltage_Valid_oHVCH_Rsp01_oLIN00_2914831e_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    29 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,       25u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_HV_voltage_oHVCH_Rsp01_oLIN00_3d3da318_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    30 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          0u,       26u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           4u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_IntelTemp_oHVCH_Rsp02_oLIN00_2b487110_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx] */
  { /*    31 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         48u,       27u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_InternalPCBTemp_oHVCH_Rsp01_oLIN00_398b53e8_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    32 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         44u,       28u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_LIN_Flt_oHVCH_Rsp01_oLIN00_9aaa25bf_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    33 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         16u,       29u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_MediumTemp_oHVCH_Rsp01_oLIN00_a3387de4_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    34 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         46u,       30u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Off_ShrtCurr_oHVCH_Rsp01_oLIN00_bf58ab45_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    35 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         61u,       31u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     7u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_RsErr_oHVCH_Rsp01_oLIN00_527b0f8f_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    36 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         32u,       32u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Status_oHVCH_Rsp01_oLIN00_60afdc75_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    37 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         43u,       33u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_TempLim_oHVCH_Rsp01_oLIN00_d22e6add_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    38 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         42u,       34u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     5u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_TempSens_Flt_oHVCH_Rsp01_oLIN00_66cb2c71_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    39 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        3u,         35u,       35u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           3u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_defectHeaterCircuits_oHVCH_Rsp01_oLIN00_61948e74_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    40 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,         32u,       36u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           7u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4u },  /* [/ActiveEcuC/Com/ComConfig/LIN_Resp_Error_sta_oSVA_VCU_STD_oLIN00_47f7ca93_Rx, /ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*    41 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          3u,       37u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpDryRunningSta_oPMP2_Sts_oLIN00_3e217a22_Rx, /ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    42 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,       38u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpInputVolt_oPMP2_Sts_oLIN00_1fa0a533_Rx, /ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    43 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          1u,       39u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpMotorSta_oPMP2_Sts_oLIN00_d6d3ab88_Rx, /ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    44 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          4u,       40u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpPowerSta_oPMP2_Sts_oLIN00_1d0f1319_Rx, /ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    45 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          6u,       41u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpTempSta_oPMP2_Sts_oLIN00_81f2fa55_Rx, /ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    46 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          0u,       42u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_RESP_ERROR_oPMP2_Sts_oLIN00_67b666eb_Rx, /ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    47 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,       43u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           5u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_RealRPM_oPMP2_Sts_oLIN00_86d75572_Rx, /ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    48 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          3u,       44u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           6u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpDryRunningSta_oPMP3_Sts_oLIN00_30f4e2d8_Rx, /ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    49 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,          8u,       45u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           6u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     1u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpInputVolt_oPMP3_Sts_oLIN00_75dfecf6_Rx, /ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
    /* Index    InitValueUsed  ApplType                           BitLength  BitPosition  BufferIdx  BusAcc                              ByteLength  InitValueIdx  RxPduInfoIdx  RxTOutInfoIdx                       StartByteInPduPosition        Referable Keys */
  { /*    50 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          1u,       46u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           6u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpMotorSta_oPMP3_Sts_oLIN00_43910f36_Rx, /ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    51 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          4u,       47u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           6u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpPowerSta_oPMP3_Sts_oLIN00_884db7a7_Rx, /ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    52 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        2u,          6u,       48u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           6u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpTempSta_oPMP3_Sts_oLIN00_26375532_Rx, /ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    53 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          0u,       49u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           6u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_RESP_ERROR_oPMP3_Sts_oLIN00_9f14f3a0_Rx, /ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    54 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        8u,         24u,       50u,      COM_BYTE_BUSACCOFRXACCESSINFO,         1u,           2u,           6u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     3u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_RealRPM_oPMP3_Sts_oLIN00_fa6fbf8a_Rx, /ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    55 */          TRUE,  COM_UINT8_APPLTYPEOFRXACCESSINFO,        1u,          0u,       51u,      COM_NBIT_BUSACCOFRXACCESSINFO,         0u,           2u,           0u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/RsErr_EXV2_oEXV2_Status_oLIN00_5c35655a_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*    56 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,          0u,        0u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           8u,                                 0u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig0_oVcuRxMsg1_oTC37X_VCU_CAN00_13cef464_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*    57 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,        1u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           8u,                                 0u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig1_oVcuRxMsg1_oTC37X_VCU_CAN00_70c92d40_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*    58 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         32u,        2u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           8u,                                 0u,                     4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig2_oVcuRxMsg1_oTC37X_VCU_CAN00_d5c1462c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*    59 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         48u,        3u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           8u,                                 0u,                     6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_Sig3_oVcuRxMsg1_oTC37X_VCU_CAN00_b6c69f08_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*    60 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,          0u,        4u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           9u,                                 1u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig0_oVcuRxMsg2_oTC37X_VCU_CAN00_94ceda5c_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*    61 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,        5u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           9u,                                 1u,                     2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig1_oVcuRxMsg2_oTC37X_VCU_CAN00_f7c90378_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*    62 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         32u,        6u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           9u,                                 1u,                     4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig2_oVcuRxMsg2_oTC37X_VCU_CAN00_52c16814_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*    63 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         48u,        7u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,           9u,                                 1u,                     6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_Sig3_oVcuRxMsg2_oTC37X_VCU_CAN00_31c6b130_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*    64 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,          0u,        8u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,          10u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig0_oVcuRxMsg3_oTC37X_VCU_CAN01_28190d1d_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    65 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,        9u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,          10u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig1_oVcuRxMsg3_oTC37X_VCU_CAN01_4b1ed439_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    66 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         32u,       10u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,          10u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig2_oVcuRxMsg3_oTC37X_VCU_CAN01_ee16bf55_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    67 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         48u,       11u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,          10u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_Sig3_oVcuRxMsg3_oTC37X_VCU_CAN01_8d116671_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    68 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,          0u,       12u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,          11u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig0_oVcuRxMsg4_oTC37X_VCU_CAN01_36b8b0fb_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    69 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         16u,       13u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,          11u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig1_oVcuRxMsg4_oTC37X_VCU_CAN01_55bf69df_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    70 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         32u,       14u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,          11u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig2_oVcuRxMsg4_oTC37X_VCU_CAN01_f0b702b3_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    71 */          TRUE, COM_SINT16_APPLTYPEOFRXACCESSINFO,       16u,         48u,       15u,     COM_NBYTE_BUSACCOFRXACCESSINFO,         2u,           0u,          11u, COM_NO_RXTOUTINFOIDXOFRXACCESSINFO,                     6u }   /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_Sig3_oVcuRxMsg4_oTC37X_VCU_CAN01_93b0db97_Rx, /ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
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
CONST(Com_RxAccessInfoIndType, COM_CONST) Com_RxAccessInfoInd[72] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     RxAccessInfoInd      Referable Keys */
  /*     0 */              14u,  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     1 */              15u,  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     2 */              16u,  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     3 */              19u,  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     4 */              21u,  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     5 */              23u,  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     6 */              55u,  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     7 */               4u,  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*     8 */               5u,  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*     9 */               6u,  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*    10 */               7u,  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*    11 */               8u,  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*    12 */               9u,  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*    13 */              10u,  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*    14 */              11u,  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*    15 */              12u,  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*    16 */              13u,  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*    17 */              17u,  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*    18 */              18u,  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*    19 */              20u,  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*    20 */              22u,  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*    21 */              24u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    22 */              25u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    23 */              26u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    24 */              27u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    25 */              28u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    26 */              29u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    27 */              31u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    28 */              32u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    29 */              33u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    30 */              34u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    31 */              35u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    32 */              36u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    33 */              37u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    34 */              38u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    35 */              39u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    36 */              30u,  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx] */
  /*    37 */              41u,  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*    38 */              42u,  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*    39 */              43u,  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*    40 */              44u,  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*    41 */              45u,  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*    42 */              46u,  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*    43 */              47u,  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*    44 */              48u,  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*    45 */              49u,  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*    46 */              50u,  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*    47 */              51u,  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*    48 */              52u,  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*    49 */              53u,  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /* Index     RxAccessInfoInd      Referable Keys */
  /*    50 */              54u,  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*    51 */               0u,  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*    52 */               1u,  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*    53 */               2u,  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*    54 */               3u,  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*    55 */              40u,  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*    56 */              56u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*    57 */              57u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*    58 */              58u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*    59 */              59u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*    60 */              60u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*    61 */              61u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*    62 */              62u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*    63 */              63u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*    64 */              64u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    65 */              65u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    66 */              66u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    67 */              67u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    68 */              68u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    69 */              69u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    70 */              70u,  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    71 */              71u   /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
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
  RxTOutInfoIdx               the index of the 0:1 relation pointing to Com_RxTOutInfo
  RxTOutInfoIndEndIdx         the end index of the 0:n relation pointing to Com_RxTOutInfoInd
  RxTOutInfoIndStartIdx       the start index of the 0:n relation pointing to Com_RxTOutInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[12] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    MainFunctionRxStructUsed  RxTOutInfoUsed  PartitionsRxStructIdx  PduGrpVectorStartIdx  RxDefPduBufferStartIdx  RxSigInfoEndIdx  RxSigInfoStartIdx  RxTOutInfoIdx                    RxTOutInfoIndEndIdx                    RxTOutInfoIndStartIdx                          Referable Keys */
  { /*     0 */                     TRUE,          FALSE,                    0u,                   4u,                     0u,              7u,                0u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  { /*     1 */                     TRUE,          FALSE,                    0u,                   4u,                     8u,             14u,                7u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  { /*     2 */                     TRUE,          FALSE,                    0u,                   4u,                    16u,             21u,               14u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  { /*     3 */                     TRUE,          FALSE,                    0u,                   4u,                    24u,             36u,               21u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  { /*     4 */                     TRUE,          FALSE,                    0u,                   4u,                    32u,             37u,               36u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  { /*     5 */                     TRUE,          FALSE,                    0u,                   4u,                    40u,             44u,               37u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  { /*     6 */                     TRUE,          FALSE,                    0u,                   4u,                    48u,             51u,               44u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  { /*     7 */                     TRUE,          FALSE,                    0u,                   4u,                    56u,             56u,               51u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  { /*     8 */                     TRUE,           TRUE,                    0u,                   2u,                    64u,             60u,               56u,                              0u,                                    1u,                                      0u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Rx_a08bac39, ComMainFunctionRx] */
  { /*     9 */                     TRUE,           TRUE,                    0u,                   2u,                    72u,             64u,               60u,                              1u,                                    2u,                                      1u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Rx_a08bac39, ComMainFunctionRx] */
  { /*    10 */                     TRUE,          FALSE,                    0u,                   1u,                    80u,             68u,               64u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, ComMainFunctionRx] */
  { /*    11 */                     TRUE,          FALSE,                    0u,                   1u,                    88u,             72u,               68u, COM_NO_RXTOUTINFOIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDENDIDXOFRXPDUINFO, COM_NO_RXTOUTINFOINDSTARTIDXOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, ComMainFunctionRx] */
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
CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[72] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    RxTOutInfoUsed  RxAccessInfoIdx  RxCbkFuncPtrAckIdx                    RxTOutInfoIdx                    SignalProcessing                          ValidDlc        Referable Keys */
  { /*     0 */          FALSE,             14u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*     1 */          FALSE,             15u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*     2 */          FALSE,             16u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*     3 */          FALSE,             19u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*     4 */          FALSE,             21u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*     5 */          FALSE,             23u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*     6 */          FALSE,             55u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  { /*     7 */          FALSE,              4u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*     8 */          FALSE,              5u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*     9 */          FALSE,              6u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*    10 */          FALSE,              7u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*    11 */          FALSE,              8u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*    12 */          FALSE,              9u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*    13 */          FALSE,             10u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  { /*    14 */          FALSE,             11u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    15 */          FALSE,             12u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    16 */          FALSE,             13u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    17 */          FALSE,             17u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    18 */          FALSE,             18u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    19 */          FALSE,             20u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    20 */          FALSE,             22u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  { /*    21 */          FALSE,             24u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    22 */          FALSE,             25u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    23 */          FALSE,             26u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    24 */          FALSE,             27u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    25 */          FALSE,             28u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    26 */          FALSE,             29u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    27 */          FALSE,             31u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    28 */          FALSE,             32u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    29 */          FALSE,             33u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    30 */          FALSE,             34u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    31 */          FALSE,             35u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    32 */          FALSE,             36u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    33 */          FALSE,             37u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    34 */          FALSE,             38u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    35 */          FALSE,             39u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  { /*    36 */          FALSE,             30u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx] */
  { /*    37 */          FALSE,             41u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    38 */          FALSE,             42u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    39 */          FALSE,             43u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    40 */          FALSE,             44u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    41 */          FALSE,             45u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    42 */          FALSE,             46u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    43 */          FALSE,             47u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  { /*    44 */          FALSE,             48u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    45 */          FALSE,             49u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    46 */          FALSE,             50u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    47 */          FALSE,             51u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    48 */          FALSE,             52u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    49 */          FALSE,             53u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
    /* Index    RxTOutInfoUsed  RxAccessInfoIdx  RxCbkFuncPtrAckIdx                    RxTOutInfoIdx                    SignalProcessing                          ValidDlc        Referable Keys */
  { /*    50 */          FALSE,             54u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  { /*    51 */          FALSE,              0u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3u },  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*    52 */          FALSE,              1u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*    53 */          FALSE,              2u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*    54 */          FALSE,              3u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1u },  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*    55 */          FALSE,             40u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5u },  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  { /*    56 */           TRUE,             56u,                                   0u,                              0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*    57 */           TRUE,             57u,                                   1u,                              0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*    58 */           TRUE,             58u,                                   2u,                              0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*    59 */           TRUE,             59u,                                   3u,                              0u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  { /*    60 */           TRUE,             60u,                                   4u,                              1u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*    61 */           TRUE,             61u,                                   5u,                              1u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*    62 */           TRUE,             62u,                                   6u,                              1u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*    63 */           TRUE,             63u,                                   7u,                              1u, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  { /*    64 */          FALSE,             64u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    65 */          FALSE,             65u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    66 */          FALSE,             66u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    67 */          FALSE,             67u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  { /*    68 */          FALSE,             68u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    69 */          FALSE,             69u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    70 */          FALSE,             70u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6u },  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  { /*    71 */          FALSE,             71u, COM_NO_RXCBKFUNCPTRACKIDXOFRXSIGINFO, COM_NO_RXTOUTINFOIDXOFRXSIGINFO, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8u }   /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
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
  { /*     0 */        50u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*     1 */         0u }   /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
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
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[18] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    InitMode  TxModeFalseIdx  TxModeTrueIdx        Referable Keys */
  { /*     0 */     TRUE,             1u,            2u },  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  { /*     1 */     TRUE,             1u,            2u },  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  { /*     2 */     TRUE,             1u,            2u },  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  { /*     3 */     TRUE,             1u,            2u },  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  { /*     4 */     TRUE,             1u,            2u },  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  { /*     5 */     TRUE,             1u,            2u },  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  { /*     6 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  { /*     7 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*     8 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  { /*     9 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  { /*    10 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  { /*    11 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  { /*    12 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  { /*    13 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  { /*    14 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  { /*    15 */     TRUE,             0u,            1u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  { /*    16 */     TRUE,             0u,            0u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*    17 */     TRUE,             0u,            0u }   /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
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
  { /*     0 */        11u,        50u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*     1 */         1u,        50u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  { /*     2 */         1u,         0u }   /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
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
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[18] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    TxBufferUsed  PartitionsTxStructIdx  PduGrpVectorStartIdx  TxBufferLength  TxPduInitValueEndIdx  TxPduInitValueStartIdx        Referable Keys */
  { /*     0 */         TRUE,                    0u,                   5u,             8u,                   8u,                     0u },  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  { /*     1 */         TRUE,                    0u,                   5u,             8u,                  16u,                     8u },  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  { /*     2 */         TRUE,                    0u,                   5u,             4u,                  20u,                    16u },  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  { /*     3 */         TRUE,                    0u,                   5u,             8u,                  28u,                    20u },  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  { /*     4 */         TRUE,                    0u,                   5u,             8u,                  36u,                    28u },  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  { /*     5 */         TRUE,                    0u,                   5u,             8u,                  44u,                    36u },  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  { /*     6 */         TRUE,                    0u,                   3u,             8u,                  52u,                    44u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  { /*     7 */         TRUE,                    0u,                   3u,             8u,                  60u,                    52u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  { /*     8 */         TRUE,                    0u,                   0u,             8u,                  68u,                    60u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*     9 */         TRUE,                    0u,                   0u,             8u,                  76u,                    68u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*    10 */         TRUE,                    0u,                   0u,             8u,                  84u,                    76u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*    11 */         TRUE,                    0u,                   0u,             8u,                  92u,                    84u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*    12 */         TRUE,                    0u,                   0u,             8u,                 100u,                    92u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*    13 */         TRUE,                    0u,                   0u,             8u,                 108u,                   100u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*    14 */         TRUE,                    0u,                   0u,             8u,                 116u,                   108u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*    15 */         TRUE,                    0u,                   0u,             8u,                 124u,                   116u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*    16 */         TRUE,                    0u,                   0u,             8u,                 132u,                   124u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  { /*    17 */         TRUE,                    0u,                   0u,             8u,                 140u,                   132u }   /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
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
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[140] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index     TxPduInitValue      Referable Keys */
  /*     0 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     1 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     2 */           0xFEu,  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     3 */           0xF8u,  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     4 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     5 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     6 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     7 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     8 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*     9 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*    10 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*    11 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*    12 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*    13 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*    14 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*    15 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*    16 */           0x80u,  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  /*    17 */           0xFCu,  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  /*    18 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  /*    19 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  /*    20 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    21 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    22 */           0xFEu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    23 */           0xF8u,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    24 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    25 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    26 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    27 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    28 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    29 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    30 */           0xFEu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    31 */           0xF8u,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    32 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    33 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    34 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    35 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    36 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    37 */           0xFEu,  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    38 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    39 */           0xF0u,  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    40 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    41 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    42 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    43 */           0xFFu,  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    44 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*    45 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*    46 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*    47 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*    48 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*    49 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /* Index     TxPduInitValue      Referable Keys */
  /*    50 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*    51 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*    52 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    53 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    54 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    55 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    56 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    57 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    58 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    59 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*    60 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*    61 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*    62 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*    63 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*    64 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*    65 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*    66 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*    67 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*    68 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    69 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    70 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    71 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    72 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    73 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    74 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    75 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    76 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    77 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    78 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    79 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    80 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    81 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    82 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    83 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    84 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    85 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    86 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    87 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    88 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    89 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    90 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    91 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    92 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    93 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    94 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    95 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    96 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    97 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    98 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    99 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /* Index     TxPduInitValue      Referable Keys */
  /*   100 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*   101 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*   102 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*   103 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*   104 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*   105 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*   106 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*   107 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*   108 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*   109 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*   110 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*   111 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*   112 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*   113 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*   114 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*   115 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*   116 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*   117 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*   118 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*   119 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*   120 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*   121 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*   122 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*   123 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*   124 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*   125 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*   126 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*   127 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*   128 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*   129 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*   130 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*   131 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*   132 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*   133 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*   134 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*   135 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*   136 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*   137 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*   138 */           0x00u,  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  /*   139 */           0x00u   /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
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
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                Byte length of the signal or group signal.
  InvValueIdx               the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64,Com_ConstValueFloat32,Com_ConstValueFloat64
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxBufferEndIdx            the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx          the start index of the 0:n relation pointing to Com_TxBuffer
  TxPduInfoIdx              the index of the 1:1 relation pointing to Com_TxPduInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[65] = {  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
    /* Index    ApplType                        BitLength  BitPosition  BusAcc                           ByteLength  InvValueIdx                    StartByteInPduPosition  TxBufferEndIdx  TxBufferStartIdx  TxPduInfoIdx        Referable Keys */
  { /*     0 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        1u,          8u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     1u,            38u,              37u,           5u },  /* [/ActiveEcuC/Com/ComConfig/Calibration_cmd_oVCU_SVA_CMD_oLIN00_6732180a_Tx, /ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  { /*     1 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,          8u,      COM_BYTE_BUSACCOFTXSIGINFO,         1u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     1u,            10u,               9u,           1u },  /* [/ActiveEcuC/Com/ComConfig/ECC_PMP2_SpdSet_oPMP_Cmd_oLIN00_8cabc4b7_Tx, /ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  { /*     2 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,      COM_BYTE_BUSACCOFTXSIGINFO,         1u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            11u,              10u,           1u },  /* [/ActiveEcuC/Com/ComConfig/ECC_PMP3_SpdSet_oPMP_Cmd_oLIN00_0d8ea190_Tx, /ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  { /*     3 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        3u,         24u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     3u,             4u,               3u,           0u },  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_Cmd_Init_Rq_oEDCU_EXV2_oLIN00_0144aec9_Tx, /ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  { /*     4 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        1u,         16u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,             3u,               2u,           0u },  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_Cmd_Move_Enbl_oEDCU_EXV2_oLIN00_d6797517_Tx, /ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  { /*     5 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,             2u,               0u,           0u },  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_Cmd_Set_Rq_oEDCU_EXV2_oLIN00_66e5876a_Tx, /ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  { /*     6 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            64u,              62u,           8u },  /* [/ActiveEcuC/Com/ComConfig/EXT1_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_caf787ea_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  { /*     7 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,            68u,              66u,           8u },  /* [/ActiveEcuC/Com/ComConfig/EXT2_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_9096b88a_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  { /*     8 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            72u,              70u,           9u },  /* [/ActiveEcuC/Com/ComConfig/EXT3_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_fae072f7_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  { /*     9 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,            76u,              74u,           9u },  /* [/ActiveEcuC/Com/ComConfig/EXT4_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_ced21b28_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  { /*    10 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            80u,              78u,          10u },  /* [/ActiveEcuC/Com/ComConfig/EXT5_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_a170bad6_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  { /*    11 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,            84u,              82u,          10u },  /* [/ActiveEcuC/Com/ComConfig/EXT6_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_fb1185b6_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  { /*    12 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            88u,              86u,          11u },  /* [/ActiveEcuC/Com/ComConfig/EXT7_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_9acf98cd_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  { /*    13 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,            92u,              90u,          11u },  /* [/ActiveEcuC/Com/ComConfig/EXT8_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_725b5c6c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  { /*    14 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            96u,              94u,          12u },  /* [/ActiveEcuC/Com/ComConfig/EXT9_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_1df9fd92_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  { /*    15 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,           100u,              98u,          12u },  /* [/ActiveEcuC/Com/ComConfig/EXT10_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_ba532916_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  { /*    16 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,           104u,             102u,          13u },  /* [/ActiveEcuC/Com/ComConfig/EXT11_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_d025e36b_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  { /*    17 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,           108u,             106u,          13u },  /* [/ActiveEcuC/Com/ComConfig/EXT12_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_8a44dc0b_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  { /*    18 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,           112u,             110u,          14u },  /* [/ActiveEcuC/Com/ComConfig/EXT13_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_e5e67df5_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  { /*    19 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,           116u,             114u,          14u },  /* [/ActiveEcuC/Com/ComConfig/EXT14_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_d1d4142a_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  { /*    20 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,           120u,             118u,          15u },  /* [/ActiveEcuC/Com/ComConfig/EXT15_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_a75ba75d_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  { /*    21 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,           124u,             122u,          15u },  /* [/ActiveEcuC/Com/ComConfig/EXT16_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_fd3a983d_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  { /*    22 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            62u,              60u,           8u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN1_oVcuTxIoMsg1_oTC37X_VCU_CAN00_37348eff_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  { /*    23 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,            66u,              64u,           8u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN2_oVcuTxIoMsg1_oTC37X_VCU_CAN00_241cb78c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  { /*    24 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            70u,              68u,           9u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN3_oVcuTxIoMsg2_oTC37X_VCU_CAN00_c07d823f_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  { /*    25 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,            74u,              72u,           9u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN4_oVcuTxIoMsg2_oTC37X_VCU_CAN00_e8ca1808_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  { /*    26 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            78u,              76u,          10u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN5_oVcuTxIoMsg3_oTC37X_VCU_CAN00_097f4638_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  { /*    27 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,            82u,              80u,          10u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN6_oVcuTxIoMsg3_oTC37X_VCU_CAN00_1a577f4b_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  { /*    28 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            86u,              84u,          11u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN7_oVcuTxIoMsg4_oTC37X_VCU_CAN00_f59e9dfe_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  { /*    29 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,            90u,              88u,          11u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN8_oVcuTxIoMsg4_oTC37X_VCU_CAN00_aa164141_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  { /*    30 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            94u,              92u,          12u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN9_oVcuTxIoMsg5_oTC37X_VCU_CAN00_4ba31f71_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  { /*    31 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,            98u,              96u,          12u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN10_oVcuTxIoMsg5_oTC37X_VCU_CAN00_83e5b725_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  { /*    32 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,           102u,             100u,          13u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN11_oVcuTxIoMsg6_oTC37X_VCU_CAN00_67848296_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  { /*    33 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,           106u,             104u,          13u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN12_oVcuTxIoMsg6_oTC37X_VCU_CAN00_74acbbe5_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  { /*    34 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,           110u,             108u,          14u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN13_oVcuTxIoMsg7_oTC37X_VCU_CAN00_9519e5d5_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  { /*    35 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,           114u,             112u,          14u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN14_oVcuTxIoMsg7_oTC37X_VCU_CAN00_bdae7fe2_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  { /*    36 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,           118u,             116u,          15u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN15_oVcuTxIoMsg8_oTC37X_VCU_CAN00_4536335b_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  { /*    37 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,           122u,             120u,          15u },  /* [/ActiveEcuC/Com/ComConfig/EXT_A_IN16_oVcuTxIoMsg8_oTC37X_VCU_CAN00_561e0a28_Tx, /ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  { /*    38 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         16u,      COM_BYTE_BUSACCOFTXSIGINFO,         1u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            19u,              18u,           2u },  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCHMaxPowerLimit_oTCU_HVCH_Cmd_oLIN00_4bc53e0b_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  { /*    39 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        2u,          8u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u,                            0u,                     1u,            18u,              17u,           2u },  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_On_Rq_oTCU_HVCH_Cmd_oLIN00_9f442eaf_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  { /*    40 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        8u,         24u,      COM_BYTE_BUSACCOFTXSIGINFO,         1u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     3u,            20u,              19u,           2u },  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_TmaxLim_output_oTCU_HVCH_Cmd_oLIN00_5e45d521_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  { /*    41 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        7u,          0u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            17u,              16u,           2u },  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_heating_rq_oTCU_HVCH_Cmd_oLIN00_5e3a32b2_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  { /*    42 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        1u,         16u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            23u,              22u,           3u },  /* [/ActiveEcuC/Com/ComConfig/TMM_EXV1_EnableRequest_oVCU_EXV_1_oLIN00_d988d266_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  { /*    43 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            22u,              20u,           3u },  /* [/ActiveEcuC/Com/ComConfig/TMM_EXV1_PositionRequest_oVCU_EXV_1_oLIN00_cbd2de27_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  { /*    44 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        3u,         24u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     3u,            24u,              23u,           3u },  /* [/ActiveEcuC/Com/ComConfig/TMM_EXV1_initRequest_oVCU_EXV_1_oLIN00_082350ea_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  { /*    45 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        1u,         16u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            31u,              30u,           4u },  /* [/ActiveEcuC/Com/ComConfig/TMM_EXV2_EnableRequest_oVCU_EXV_2_oLIN00_0c106490_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  { /*    46 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            30u,              28u,           4u },  /* [/ActiveEcuC/Com/ComConfig/TMM_EXV2_PositionRequest_oVCU_EXV_2_oLIN00_ce8ee7dd_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  { /*    47 */  COM_UINT8_APPLTYPEOFTXSIGINFO,        3u,         24u,      COM_NBIT_BUSACCOFTXSIGINFO,         0u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     3u,            32u,              31u,           4u },  /* [/ActiveEcuC/Com/ComConfig/TMM_EXV2_initRequest_oVCU_EXV_2_oLIN00_95846e7a_Tx, /ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  { /*    48 */ COM_UINT16_APPLTYPEOFTXSIGINFO,       12u,         16u, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         1u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            40u,              38u,           5u },  /* [/ActiveEcuC/Com/ComConfig/Target_Pos_cmd_oVCU_SVA_CMD_oLIN00_b87f26ef_Tx, /ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  { /*    49 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            46u,              44u,           6u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig0_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_77707e8c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
    /* Index    ApplType                        BitLength  BitPosition  BusAcc                           ByteLength  InvValueIdx                    StartByteInPduPosition  TxBufferEndIdx  TxBufferStartIdx  TxPduInfoIdx        Referable Keys */
  { /*    50 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            48u,              46u,           6u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig1_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_86aa7b26_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  { /*    51 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,            50u,              48u,           6u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig2_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_4fb57399_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  { /*    52 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,            52u,              50u,           6u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig3_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_be6f7633_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  { /*    53 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,            54u,              52u,           7u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig0_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_c7979c8e_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*    54 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,            56u,              54u,           7u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig1_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_364d9924_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*    55 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,            58u,              56u,           7u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig2_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_ff52919b_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*    56 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,            60u,              58u,           7u },  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig3_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_0e889431_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  { /*    57 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,           126u,             124u,          16u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*    58 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,           128u,             126u,          16u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*    59 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,           130u,             128u,          16u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*    60 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,           132u,             130u,          16u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  { /*    61 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,          0u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     0u,           134u,             132u,          17u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*    62 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         16u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     2u,           136u,             134u,          17u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*    63 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         32u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     4u,           138u,             136u,          17u },  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
  { /*    64 */ COM_SINT16_APPLTYPEOFTXSIGINFO,       16u,         48u,     COM_NBYTE_BUSACCOFTXSIGINFO,         2u, COM_NO_INVVALUEIDXOFTXSIGINFO,                     6u,           140u,             138u,          17u }   /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */
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
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */

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
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */

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
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */

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
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */

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
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    87 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx] */
  /*    88 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */
  /*    95 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx] */

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
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[12];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_Status_oLIN00_d5e93929_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/EXV_1_VCU_oLIN00_69d4ef5f_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/EXV_2_VCU_oLIN00_1e4a3daf_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp01_oLIN00_a6e33eef_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Rsp02_oLIN00_286c390c_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_Sts_oLIN00_cab90b6b_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_Sts_oLIN00_511c4704_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/SVA_VCU_STD_oLIN00_4526aa1c_Rx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Rx_4b9dfc53, ComMainFunctionRx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg1_oTC37X_VCU_CAN00_78805594_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Rx_a08bac39, ComMainFunctionRx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg2_oTC37X_VCU_CAN00_920688f6_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Rx_a08bac39, ComMainFunctionRx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg3_oTC37X_VCU_CAN01_0a530e81_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, ComMainFunctionRx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuRxMsg4_oTC37X_VCU_CAN01_eb7d04e5_Rx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Rx_1837cb5c, ComMainFunctionRx] */

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
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_MemMap */
/*lint -restore */
VAR(Com_RxSigBufferUInt16Type, COM_VAR_NOINIT) Com_RxSigBufferUInt16[4];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/Act_Pos_sta_oSVA_VCU_STD_oLIN00_642c9ffa_Rx, /ActiveEcuC/Com/ComConfig/Act_Pos_sta_oSVA_VCU_STD_oLIN00_642c9ffa_Rx_RxSignalBufferRouting] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/EXV1_CurrentPosition_oEXV_1_VCU_oLIN00_6daec86f_Rx, /ActiveEcuC/Com/ComConfig/EXV1_CurrentPosition_oEXV_1_VCU_oLIN00_6daec86f_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_CurrentPosition_oEXV_2_VCU_oLIN00_91e32486_Rx, /ActiveEcuC/Com/ComConfig/EXV2_CurrentPosition_oEXV_2_VCU_oLIN00_91e32486_Rx_RxSignalBufferRouting] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_Pos_oEXV2_Status_oLIN00_da80603b_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Pos_oEXV2_Status_oLIN00_da80603b_Rx_RxSignalBufferRouting] */

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
VAR(Com_RxSigBufferUInt8Type, COM_VAR_NOINIT) Com_RxSigBufferUInt8[52];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/Blockage_Fault_STA_oSVA_VCU_STD_oLIN00_6c89246f_Rx, /ActiveEcuC/Com/ComConfig/Blockage_Fault_STA_oSVA_VCU_STD_oLIN00_6c89246f_Rx_RxSignalBufferRouting] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/Breakage_Fault_STA_oSVA_VCU_STD_oLIN00_a3ac9cf8_Rx, /ActiveEcuC/Com/ComConfig/Breakage_Fault_STA_oSVA_VCU_STD_oLIN00_a3ac9cf8_Rx_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/Calibration_sta_oSVA_VCU_STD_oLIN00_dcb4af08_Rx, /ActiveEcuC/Com/ComConfig/Calibration_sta_oSVA_VCU_STD_oLIN00_dcb4af08_Rx_RxSignalBufferRouting] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/EXV1_CurrentInitState_oEXV_1_VCU_oLIN00_beca31e2_Rx, /ActiveEcuC/Com/ComConfig/EXV1_CurrentInitState_oEXV_1_VCU_oLIN00_beca31e2_Rx_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/EXV1_FaultState_oEXV_1_VCU_oLIN00_72ff14f0_Rx, /ActiveEcuC/Com/ComConfig/EXV1_FaultState_oEXV_1_VCU_oLIN00_72ff14f0_Rx_RxSignalBufferRouting] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/EXV1_ResponseError_oEXV_1_VCU_oLIN00_cbce9ad1_Rx, /ActiveEcuC/Com/ComConfig/EXV1_ResponseError_oEXV_1_VCU_oLIN00_cbce9ad1_Rx_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/EXV1_RunState_oEXV_1_VCU_oLIN00_f0dc555f_Rx, /ActiveEcuC/Com/ComConfig/EXV1_RunState_oEXV_1_VCU_oLIN00_f0dc555f_Rx_RxSignalBufferRouting] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/EXV1_TemperatureWarn_oEXV_1_VCU_oLIN00_a3317e4b_Rx, /ActiveEcuC/Com/ComConfig/EXV1_TemperatureWarn_oEXV_1_VCU_oLIN00_a3317e4b_Rx_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/EXV1_VoltageState_oEXV_1_VCU_oLIN00_31bbfd77_Rx, /ActiveEcuC/Com/ComConfig/EXV1_VoltageState_oEXV_1_VCU_oLIN00_31bbfd77_Rx_RxSignalBufferRouting] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_CurrentInitState_oEXV_2_VCU_oLIN00_adb498ec_Rx, /ActiveEcuC/Com/ComConfig/EXV2_CurrentInitState_oEXV_2_VCU_oLIN00_adb498ec_Rx_RxSignalBufferRouting] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_FaultState_oEXV_2_VCU_oLIN00_41c0e318_Rx, /ActiveEcuC/Com/ComConfig/EXV2_FaultState_oEXV_2_VCU_oLIN00_41c0e318_Rx_RxSignalBufferRouting] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_Fault_Stat_oEXV2_Status_oLIN00_ab6350b6_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Fault_Stat_oEXV2_Status_oLIN00_ab6350b6_Rx_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_OvrTemp_Warn_oEXV2_Status_oLIN00_ba77659e_Rx, /ActiveEcuC/Com/ComConfig/EXV2_OvrTemp_Warn_oEXV2_Status_oLIN00_ba77659e_Rx_RxSignalBufferRouting] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_ResponseError_oEXV_2_VCU_oLIN00_e747f934_Rx, /ActiveEcuC/Com/ComConfig/EXV2_ResponseError_oEXV_2_VCU_oLIN00_e747f934_Rx_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_RunState_oEXV_2_VCU_oLIN00_859c8088_Rx, /ActiveEcuC/Com/ComConfig/EXV2_RunState_oEXV_2_VCU_oLIN00_859c8088_Rx_RxSignalBufferRouting] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_Run_Stat_oEXV2_Status_oLIN00_0e992e12_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Run_Stat_oEXV2_Status_oLIN00_0e992e12_Rx_RxSignalBufferRouting] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_TemperatureWarn_oEXV_2_VCU_oLIN00_5f7c92a2_Rx, /ActiveEcuC/Com/ComConfig/EXV2_TemperatureWarn_oEXV_2_VCU_oLIN00_5f7c92a2_Rx_RxSignalBufferRouting] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_Volt_Stat_oEXV2_Status_oLIN00_c8727eb0_Rx, /ActiveEcuC/Com/ComConfig/EXV2_Volt_Stat_oEXV2_Status_oLIN00_c8727eb0_Rx_RxSignalBufferRouting] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_VoltageState_oEXV_2_VCU_oLIN00_8f3a2738_Rx, /ActiveEcuC/Com/ComConfig/EXV2_VoltageState_oEXV_2_VCU_oLIN00_8f3a2738_Rx_RxSignalBufferRouting] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/EXV2_curInit_Stat_oEXV2_Status_oLIN00_b0ace0f5_Rx, /ActiveEcuC/Com/ComConfig/EXV2_curInit_Stat_oEXV2_Status_oLIN00_b0ace0f5_Rx_RxSignalBufferRouting] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_CurrSens_Flt_oHVCH_Rsp01_oLIN00_09f7bc74_Rx, /ActiveEcuC/Com/ComConfig/HVCH_CurrSens_Flt_oHVCH_Rsp01_oLIN00_09f7bc74_Rx_RxSignalBufferRouting] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_DutyCycle_oHVCH_Rsp01_oLIN00_ad1e6a22_Rx, /ActiveEcuC/Com/ComConfig/HVCH_DutyCycle_oHVCH_Rsp01_oLIN00_ad1e6a22_Rx_RxSignalBufferRouting] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_ExtPwrSup_Flt_oHVCH_Rsp01_oLIN00_28926933_Rx, /ActiveEcuC/Com/ComConfig/HVCH_ExtPwrSup_Flt_oHVCH_Rsp01_oLIN00_28926933_Rx_RxSignalBufferRouting] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_HV_DC_curr_oHVCH_Rsp01_oLIN00_f613e39d_Rx, /ActiveEcuC/Com/ComConfig/HVCH_HV_DC_curr_oHVCH_Rsp01_oLIN00_f613e39d_Rx_RxSignalBufferRouting] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_HV_Voltage_Valid_oHVCH_Rsp01_oLIN00_2914831e_Rx, /ActiveEcuC/Com/ComConfig/HVCH_HV_Voltage_Valid_oHVCH_Rsp01_oLIN00_2914831e_Rx_RxSignalBufferRouting] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_HV_voltage_oHVCH_Rsp01_oLIN00_3d3da318_Rx, /ActiveEcuC/Com/ComConfig/HVCH_HV_voltage_oHVCH_Rsp01_oLIN00_3d3da318_Rx_RxSignalBufferRouting] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_IntelTemp_oHVCH_Rsp02_oLIN00_2b487110_Rx, /ActiveEcuC/Com/ComConfig/HVCH_IntelTemp_oHVCH_Rsp02_oLIN00_2b487110_Rx_RxSignalBufferRouting] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_InternalPCBTemp_oHVCH_Rsp01_oLIN00_398b53e8_Rx, /ActiveEcuC/Com/ComConfig/HVCH_InternalPCBTemp_oHVCH_Rsp01_oLIN00_398b53e8_Rx_RxSignalBufferRouting] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_LIN_Flt_oHVCH_Rsp01_oLIN00_9aaa25bf_Rx, /ActiveEcuC/Com/ComConfig/HVCH_LIN_Flt_oHVCH_Rsp01_oLIN00_9aaa25bf_Rx_RxSignalBufferRouting] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_MediumTemp_oHVCH_Rsp01_oLIN00_a3387de4_Rx, /ActiveEcuC/Com/ComConfig/HVCH_MediumTemp_oHVCH_Rsp01_oLIN00_a3387de4_Rx_RxSignalBufferRouting] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Off_ShrtCurr_oHVCH_Rsp01_oLIN00_bf58ab45_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Off_ShrtCurr_oHVCH_Rsp01_oLIN00_bf58ab45_Rx_RxSignalBufferRouting] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_RsErr_oHVCH_Rsp01_oLIN00_527b0f8f_Rx, /ActiveEcuC/Com/ComConfig/HVCH_RsErr_oHVCH_Rsp01_oLIN00_527b0f8f_Rx_RxSignalBufferRouting] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_Status_oHVCH_Rsp01_oLIN00_60afdc75_Rx, /ActiveEcuC/Com/ComConfig/HVCH_Status_oHVCH_Rsp01_oLIN00_60afdc75_Rx_RxSignalBufferRouting] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_TempLim_oHVCH_Rsp01_oLIN00_d22e6add_Rx, /ActiveEcuC/Com/ComConfig/HVCH_TempLim_oHVCH_Rsp01_oLIN00_d22e6add_Rx_RxSignalBufferRouting] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_TempSens_Flt_oHVCH_Rsp01_oLIN00_66cb2c71_Rx, /ActiveEcuC/Com/ComConfig/HVCH_TempSens_Flt_oHVCH_Rsp01_oLIN00_66cb2c71_Rx_RxSignalBufferRouting] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/HVCH_defectHeaterCircuits_oHVCH_Rsp01_oLIN00_61948e74_Rx, /ActiveEcuC/Com/ComConfig/HVCH_defectHeaterCircuits_oHVCH_Rsp01_oLIN00_61948e74_Rx_RxSignalBufferRouting] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/LIN_Resp_Error_sta_oSVA_VCU_STD_oLIN00_47f7ca93_Rx, /ActiveEcuC/Com/ComConfig/LIN_Resp_Error_sta_oSVA_VCU_STD_oLIN00_47f7ca93_Rx_RxSignalBufferRouting] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpDryRunningSta_oPMP2_Sts_oLIN00_3e217a22_Rx, /ActiveEcuC/Com/ComConfig/PMP2_PumpDryRunningSta_oPMP2_Sts_oLIN00_3e217a22_Rx_RxSignalBufferRouting] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpInputVolt_oPMP2_Sts_oLIN00_1fa0a533_Rx, /ActiveEcuC/Com/ComConfig/PMP2_PumpInputVolt_oPMP2_Sts_oLIN00_1fa0a533_Rx_RxSignalBufferRouting] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpMotorSta_oPMP2_Sts_oLIN00_d6d3ab88_Rx, /ActiveEcuC/Com/ComConfig/PMP2_PumpMotorSta_oPMP2_Sts_oLIN00_d6d3ab88_Rx_RxSignalBufferRouting] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpPowerSta_oPMP2_Sts_oLIN00_1d0f1319_Rx, /ActiveEcuC/Com/ComConfig/PMP2_PumpPowerSta_oPMP2_Sts_oLIN00_1d0f1319_Rx_RxSignalBufferRouting] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_PumpTempSta_oPMP2_Sts_oLIN00_81f2fa55_Rx, /ActiveEcuC/Com/ComConfig/PMP2_PumpTempSta_oPMP2_Sts_oLIN00_81f2fa55_Rx_RxSignalBufferRouting] */
  /*    42 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_RESP_ERROR_oPMP2_Sts_oLIN00_67b666eb_Rx, /ActiveEcuC/Com/ComConfig/PMP2_RESP_ERROR_oPMP2_Sts_oLIN00_67b666eb_Rx_RxSignalBufferRouting] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/PMP2_RealRPM_oPMP2_Sts_oLIN00_86d75572_Rx, /ActiveEcuC/Com/ComConfig/PMP2_RealRPM_oPMP2_Sts_oLIN00_86d75572_Rx_RxSignalBufferRouting] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpDryRunningSta_oPMP3_Sts_oLIN00_30f4e2d8_Rx, /ActiveEcuC/Com/ComConfig/PMP3_PumpDryRunningSta_oPMP3_Sts_oLIN00_30f4e2d8_Rx_RxSignalBufferRouting] */
  /*    45 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpInputVolt_oPMP3_Sts_oLIN00_75dfecf6_Rx, /ActiveEcuC/Com/ComConfig/PMP3_PumpInputVolt_oPMP3_Sts_oLIN00_75dfecf6_Rx_RxSignalBufferRouting] */
  /*    46 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpMotorSta_oPMP3_Sts_oLIN00_43910f36_Rx, /ActiveEcuC/Com/ComConfig/PMP3_PumpMotorSta_oPMP3_Sts_oLIN00_43910f36_Rx_RxSignalBufferRouting] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpPowerSta_oPMP3_Sts_oLIN00_884db7a7_Rx, /ActiveEcuC/Com/ComConfig/PMP3_PumpPowerSta_oPMP3_Sts_oLIN00_884db7a7_Rx_RxSignalBufferRouting] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_PumpTempSta_oPMP3_Sts_oLIN00_26375532_Rx, /ActiveEcuC/Com/ComConfig/PMP3_PumpTempSta_oPMP3_Sts_oLIN00_26375532_Rx_RxSignalBufferRouting] */
  /*    49 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_RESP_ERROR_oPMP3_Sts_oLIN00_9f14f3a0_Rx, /ActiveEcuC/Com/ComConfig/PMP3_RESP_ERROR_oPMP3_Sts_oLIN00_9f14f3a0_Rx_RxSignalBufferRouting] */
  /* Index        Referable Keys */
  /*    50 */  /* [/ActiveEcuC/Com/ComConfig/PMP3_RealRPM_oPMP3_Sts_oLIN00_fa6fbf8a_Rx, /ActiveEcuC/Com/ComConfig/PMP3_RealRPM_oPMP3_Sts_oLIN00_fa6fbf8a_Rx_RxSignalBufferRouting] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/RsErr_EXV2_oEXV2_Status_oLIN00_5c35655a_Rx, /ActiveEcuC/Com/ComConfig/RsErr_EXV2_oEXV2_Status_oLIN00_5c35655a_Rx_RxSignalBufferRouting] */

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
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx] */

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
VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[140];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/EDCU_EXV2_Cmd_Set_Rq_oEDCU_EXV2_oLIN00_66e5876a_Tx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/EDCU_EXV2_Cmd_Set_Rq_oEDCU_EXV2_oLIN00_66e5876a_Tx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/EDCU_EXV2_Cmd_Move_Enbl_oEDCU_EXV2_oLIN00_d6797517_Tx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/EDCU_EXV2_Cmd_Init_Rq_oEDCU_EXV2_oLIN00_0144aec9_Tx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx, /ActiveEcuC/Com/ComConfig/ECC_PMP2_SpdSet_oPMP_Cmd_oLIN00_8cabc4b7_Tx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx, /ActiveEcuC/Com/ComConfig/ECC_PMP3_SpdSet_oPMP_Cmd_oLIN00_0d8ea190_Tx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_heating_rq_oTCU_HVCH_Cmd_oLIN00_5e3a32b2_Tx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_On_Rq_oTCU_HVCH_Cmd_oLIN00_9f442eaf_Tx] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCHMaxPowerLimit_oTCU_HVCH_Cmd_oLIN00_4bc53e0b_Tx] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/TCU_HVCH_TmaxLim_output_oTCU_HVCH_Cmd_oLIN00_5e45d521_Tx] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/TMM_EXV1_PositionRequest_oVCU_EXV_1_oLIN00_cbd2de27_Tx] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/TMM_EXV1_PositionRequest_oVCU_EXV_1_oLIN00_cbd2de27_Tx] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/TMM_EXV1_EnableRequest_oVCU_EXV_1_oLIN00_d988d266_Tx] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/TMM_EXV1_initRequest_oVCU_EXV_1_oLIN00_082350ea_Tx] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/TMM_EXV2_PositionRequest_oVCU_EXV_2_oLIN00_ce8ee7dd_Tx] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/TMM_EXV2_PositionRequest_oVCU_EXV_2_oLIN00_ce8ee7dd_Tx] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/TMM_EXV2_EnableRequest_oVCU_EXV_2_oLIN00_0c106490_Tx] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/TMM_EXV2_initRequest_oVCU_EXV_2_oLIN00_95846e7a_Tx] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx, /ActiveEcuC/Com/ComConfig/Calibration_cmd_oVCU_SVA_CMD_oLIN00_6732180a_Tx] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx, /ActiveEcuC/Com/ComConfig/Target_Pos_cmd_oVCU_SVA_CMD_oLIN00_b87f26ef_Tx] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx, /ActiveEcuC/Com/ComConfig/Target_Pos_cmd_oVCU_SVA_CMD_oLIN00_b87f26ef_Tx] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*   ... */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig0_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_77707e8c_Tx] */
  /*    45 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig0_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_77707e8c_Tx] */
  /*    46 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig1_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_86aa7b26_Tx] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig1_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_86aa7b26_Tx] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig2_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_4fb57399_Tx] */
  /*    49 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig2_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_4fb57399_Tx] */
  /*    50 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig3_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_be6f7633_Tx] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_Sig3_oVcuAdcTxMsg1_oTC37X_VCU_CAN01_be6f7633_Tx] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig0_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_c7979c8e_Tx] */
  /*    53 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig0_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_c7979c8e_Tx] */
  /*    54 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig1_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_364d9924_Tx] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig1_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_364d9924_Tx] */
  /* Index        Referable Keys */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig2_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_ff52919b_Tx] */
  /*    57 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig2_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_ff52919b_Tx] */
  /*    58 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig3_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_0e889431_Tx] */
  /*    59 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_Sig3_oVcuAdcTxMsg2_oTC37X_VCU_CAN01_0e889431_Tx] */
  /*    60 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN1_oVcuTxIoMsg1_oTC37X_VCU_CAN00_37348eff_Tx] */
  /*    61 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN1_oVcuTxIoMsg1_oTC37X_VCU_CAN00_37348eff_Tx] */
  /*    62 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/EXT1_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_caf787ea_Tx] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/EXT1_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_caf787ea_Tx] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN2_oVcuTxIoMsg1_oTC37X_VCU_CAN00_241cb78c_Tx] */
  /*    65 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN2_oVcuTxIoMsg1_oTC37X_VCU_CAN00_241cb78c_Tx] */
  /*    66 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/EXT2_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_9096b88a_Tx] */
  /*    67 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/EXT2_Valid_oVcuTxIoMsg1_oTC37X_VCU_CAN00_9096b88a_Tx] */
  /*    68 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN3_oVcuTxIoMsg2_oTC37X_VCU_CAN00_c07d823f_Tx] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN3_oVcuTxIoMsg2_oTC37X_VCU_CAN00_c07d823f_Tx] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/EXT3_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_fae072f7_Tx] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/EXT3_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_fae072f7_Tx] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN4_oVcuTxIoMsg2_oTC37X_VCU_CAN00_e8ca1808_Tx] */
  /*    73 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN4_oVcuTxIoMsg2_oTC37X_VCU_CAN00_e8ca1808_Tx] */
  /*    74 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/EXT4_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_ced21b28_Tx] */
  /*    75 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/EXT4_Valid_oVcuTxIoMsg2_oTC37X_VCU_CAN00_ced21b28_Tx] */
  /*    76 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN5_oVcuTxIoMsg3_oTC37X_VCU_CAN00_097f4638_Tx] */
  /*    77 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN5_oVcuTxIoMsg3_oTC37X_VCU_CAN00_097f4638_Tx] */
  /*    78 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/EXT5_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_a170bad6_Tx] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/EXT5_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_a170bad6_Tx] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN6_oVcuTxIoMsg3_oTC37X_VCU_CAN00_1a577f4b_Tx] */
  /*    81 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN6_oVcuTxIoMsg3_oTC37X_VCU_CAN00_1a577f4b_Tx] */
  /*    82 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/EXT6_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_fb1185b6_Tx] */
  /*    83 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/EXT6_Valid_oVcuTxIoMsg3_oTC37X_VCU_CAN00_fb1185b6_Tx] */
  /*    84 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN7_oVcuTxIoMsg4_oTC37X_VCU_CAN00_f59e9dfe_Tx] */
  /*    85 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN7_oVcuTxIoMsg4_oTC37X_VCU_CAN00_f59e9dfe_Tx] */
  /*    86 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/EXT7_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_9acf98cd_Tx] */
  /*    87 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/EXT7_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_9acf98cd_Tx] */
  /*    88 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN8_oVcuTxIoMsg4_oTC37X_VCU_CAN00_aa164141_Tx] */
  /*    89 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN8_oVcuTxIoMsg4_oTC37X_VCU_CAN00_aa164141_Tx] */
  /*    90 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/EXT8_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_725b5c6c_Tx] */
  /*    91 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/EXT8_Valid_oVcuTxIoMsg4_oTC37X_VCU_CAN00_725b5c6c_Tx] */
  /*    92 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN9_oVcuTxIoMsg5_oTC37X_VCU_CAN00_4ba31f71_Tx] */
  /*    93 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN9_oVcuTxIoMsg5_oTC37X_VCU_CAN00_4ba31f71_Tx] */
  /*    94 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/EXT9_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_1df9fd92_Tx] */
  /*    95 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/EXT9_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_1df9fd92_Tx] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN10_oVcuTxIoMsg5_oTC37X_VCU_CAN00_83e5b725_Tx] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN10_oVcuTxIoMsg5_oTC37X_VCU_CAN00_83e5b725_Tx] */
  /*    98 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/EXT10_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_ba532916_Tx] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/EXT10_Valid_oVcuTxIoMsg5_oTC37X_VCU_CAN00_ba532916_Tx] */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN11_oVcuTxIoMsg6_oTC37X_VCU_CAN00_67848296_Tx] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN11_oVcuTxIoMsg6_oTC37X_VCU_CAN00_67848296_Tx] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/EXT11_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_d025e36b_Tx] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/EXT11_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_d025e36b_Tx] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN12_oVcuTxIoMsg6_oTC37X_VCU_CAN00_74acbbe5_Tx] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN12_oVcuTxIoMsg6_oTC37X_VCU_CAN00_74acbbe5_Tx] */
  /* Index        Referable Keys */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/EXT12_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_8a44dc0b_Tx] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/EXT12_Valid_oVcuTxIoMsg6_oTC37X_VCU_CAN00_8a44dc0b_Tx] */
  /*   108 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN13_oVcuTxIoMsg7_oTC37X_VCU_CAN00_9519e5d5_Tx] */
  /*   109 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN13_oVcuTxIoMsg7_oTC37X_VCU_CAN00_9519e5d5_Tx] */
  /*   110 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/EXT13_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_e5e67df5_Tx] */
  /*   111 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/EXT13_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_e5e67df5_Tx] */
  /*   112 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN14_oVcuTxIoMsg7_oTC37X_VCU_CAN00_bdae7fe2_Tx] */
  /*   113 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN14_oVcuTxIoMsg7_oTC37X_VCU_CAN00_bdae7fe2_Tx] */
  /*   114 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/EXT14_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_d1d4142a_Tx] */
  /*   115 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/EXT14_Valid_oVcuTxIoMsg7_oTC37X_VCU_CAN00_d1d4142a_Tx] */
  /*   116 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN15_oVcuTxIoMsg8_oTC37X_VCU_CAN00_4536335b_Tx] */
  /*   117 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN15_oVcuTxIoMsg8_oTC37X_VCU_CAN00_4536335b_Tx] */
  /*   118 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/EXT15_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_a75ba75d_Tx] */
  /*   119 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/EXT15_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_a75ba75d_Tx] */
  /*   120 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN16_oVcuTxIoMsg8_oTC37X_VCU_CAN00_561e0a28_Tx] */
  /*   121 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/EXT_A_IN16_oVcuTxIoMsg8_oTC37X_VCU_CAN00_561e0a28_Tx] */
  /*   122 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/EXT16_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_fd3a983d_Tx] */
  /*   123 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/EXT16_Valid_oVcuTxIoMsg8_oTC37X_VCU_CAN00_fd3a983d_Tx] */
  /*   124 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx] */
  /*   125 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig0_oVcuTxMsg1_oTC37X_VCU_CAN00_8243b9a9_Tx] */
  /*   126 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx] */
  /*   127 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig1_oVcuTxMsg1_oTC37X_VCU_CAN00_e144608d_Tx] */
  /*   128 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx] */
  /*   129 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig2_oVcuTxMsg1_oTC37X_VCU_CAN00_444c0be1_Tx] */
  /*   130 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx] */
  /*   131 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg1_Sig3_oVcuTxMsg1_oTC37X_VCU_CAN00_274bd2c5_Tx] */
  /*   132 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx] */
  /*   133 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig0_oVcuTxMsg2_oTC37X_VCU_CAN00_05439791_Tx] */
  /*   134 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx] */
  /*   135 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig1_oVcuTxMsg2_oTC37X_VCU_CAN00_66444eb5_Tx] */
  /*   136 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx] */
  /*   137 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig2_oVcuTxMsg2_oTC37X_VCU_CAN00_c34c25d9_Tx] */
  /*   138 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx] */
  /*   139 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VcuTxMsg2_Sig3_oVcuTxMsg2_oTC37X_VCU_CAN00_a04bfcfd_Tx] */

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
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[18];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */

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
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[18];  /* PRQA S 1514, 1533 */  /* MD_CSL_ObjectOnlyAccessedOnce */
  /* Index        Referable Keys */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/EDCU_EXV2_oLIN00_1f8750a5_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/PMP_Cmd_oLIN00_3912b28b_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/TCU_HVCH_Cmd_oLIN00_385d5651_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_1_oLIN00_50eec975_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/VCU_EXV_2_oLIN00_de61ce96_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/VCU_SVA_CMD_oLIN00_756d14f6_Tx, /ActiveEcuC/Com/ComConfig/VCU_oLIN00_Tx_1dc75bd5, ComMainFunctionTx] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg1_oTC37X_VCU_CAN01_fda515ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/VcuAdcTxMsg2_oTC37X_VCU_CAN01_1723c88c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN01_Tx_4e6d6cda, ComMainFunctionTx] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg1_oTC37X_VCU_CAN00_54884add_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg2_oTC37X_VCU_CAN00_be0e97bf_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg3_oTC37X_VCU_CAN00_515c215e_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg4_oTC37X_VCU_CAN00_b0722b3a_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg5_oTC37X_VCU_CAN00_5f209ddb_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg6_oTC37X_VCU_CAN00_b5a640b9_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg7_oTC37X_VCU_CAN00_5af4f658_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxIoMsg8_oTC37X_VCU_CAN00_ac8b5230_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg1_oTC37X_VCU_CAN00_954a27ee_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/VcuTxMsg2_oTC37X_VCU_CAN00_7fccfa8c_Tx, /ActiveEcuC/Com/ComConfig/VCU_oTC37X_VCU_CAN00_Tx_f6d10bbf, ComMainFunctionTx] */

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

