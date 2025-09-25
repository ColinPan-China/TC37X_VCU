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
 *             File:  Rte_CtAp_FltReactn.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_FltReactn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_FLTREACTN_H
# define RTE_CTAP_FLTREACTN_H

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

# include "Rte_CtAp_FltReactn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_BSW_FuSaHWErrorStatus_HWErrorStatus (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_DlyHvDwn_Flg_tec_ErrMgmt_DlyHvDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp (0U)
#  define Rte_InitValue_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_HvNormDwn_Flg_tec_ErrMgmt_HvNormDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp (0U)
#  define Rte_InitValue_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum (0U)
#  define Rte_InitValue_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSSts01Update_tec_ComM_BMSSts01Update (FALSE)
#  define Rte_InitValue_RTE_R_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update (FALSE)
#  define Rte_InitValue_RTE_R_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update (FALSE)
#  define Rte_InitValue_RTE_R_ComM_TCU01Update_tec_ComM_TCU01Update (FALSE)
#  define Rte_InitValue_RTE_R_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph (0.0F)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus(P2VAR(dt_ComM_BMSSts01CRCInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_BMSSts01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus(P2VAR(dt_ComM_MCUFailrCodCRCInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus(P2VAR(dt_ComM_MCUFailrCodE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(P2VAR(dt_ErrMgmt_VehHVIL, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_AccrPedlTqOverFltInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_CrpCtrlTqOverFltInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_FltReactn_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus(P2VAR(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus(P2CONST(dt_ErrMgmt_TorqCtrlErr, AUTOMATIC, RTE_CTAP_FLTREACTN_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_BSW_FuSaHWErrorStatus_HWErrorStatus Rte_Read_CtAp_FltReactn_BSW_FuSaHWErrorStatus_HWErrorStatus

#  define Rte_Read_CtAp_FltReactn_BSW_FuSaHWErrorStatus_HWErrorStatus(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg Rte_Read_CtAp_FltReactn_RTE_R_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg
#  define Rte_Read_CtAp_FltReactn_RTE_R_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg(data) (*(data) = Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg Rte_Read_CtAp_FltReactn_RTE_R_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg
#  define Rte_Read_CtAp_FltReactn_RTE_R_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg(data) (*(data) = Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_FltReactn_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_FltReactn_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum Rte_Read_CtAp_FltReactn_RTE_R_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate Rte_Read_CtAp_FltReactn_RTE_R_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_BMSSts01Update_tec_ComM_BMSSts01Update Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSSts01Update_tec_ComM_BMSSts01Update
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_BMSSts01Update_tec_ComM_BMSSts01Update(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum Rte_Read_CtAp_FltReactn_RTE_R_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus Rte_Read_CtAp_FltReactn_RTE_R_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum Rte_Read_CtAp_FltReactn_RTE_R_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update Rte_Read_CtAp_FltReactn_RTE_R_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update Rte_Read_CtAp_FltReactn_RTE_R_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_TCU01Update_tec_ComM_TCU01Update Rte_Read_CtAp_FltReactn_RTE_R_ComM_TCU01Update_tec_ComM_TCU01Update
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_TCU01Update_tec_ComM_TCU01Update(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum Rte_Read_CtAp_FltReactn_RTE_R_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum
#  define Rte_Read_CtAp_FltReactn_RTE_R_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus Rte_Read_CtAp_FltReactn_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus
#  define Rte_Read_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus Rte_Read_CtAp_FltReactn_RTE_R_FctSftyMon_AccrPedlTqOverFltInfo_Bus_tec_FctSftyMon_AccrPedlTqOverFltInfo_Bus
#  define Rte_Read_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus Rte_Read_CtAp_FltReactn_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus
#  define Rte_Read_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus Rte_Read_CtAp_FltReactn_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_FltReactn_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_FltReactn_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq Rte_Read_CtAp_FltReactn_RTE_R_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq
#  define Rte_Read_CtAp_FltReactn_RTE_R_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq(data) (*(data) = Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph Rte_Read_CtAp_FltReactn_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph
#  define Rte_Read_CtAp_FltReactn_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcStop_Flg_tec_ErrMgmt_AcStop_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcStop_Flg_tec_ErrMgmt_DcStop_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_DlyHvDwn_Flg_tec_ErrMgmt_DlyHvDwn_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DlyHvDwn_Flg_tec_ErrMgmt_DlyHvDwn_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_DlyHvDwn_Flg_tec_ErrMgmt_DlyHvDwn_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_Fobd2Hv_Flg_tec_ErrMgmt_Fobd2Hv_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_HvNormDwn_Flg_tec_ErrMgmt_HvNormDwn_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_HvNormDwn_Flg_tec_ErrMgmt_HvNormDwn_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_HvNormDwn_Flg_tec_ErrMgmt_HvNormDwn_Flg(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus
#  define Rte_Write_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_V2LStop_Flg_tec_ErrMgmt_V2LStop_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg
#  define Rte_Write_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg(data) (Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_FltReactn_START_SEC_CODE
# include "CtAp_FltReactn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_FltReactn_Cyclic_10ms R_FltReactn_Cyclic_10ms
#  define RTE_RUNNABLE_R_FltReactn_Init R_FltReactn_Init
# endif

FUNC(void, CtAp_FltReactn_CODE) R_FltReactn_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_FltReactn_CODE) R_FltReactn_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_FltReactn_STOP_SEC_CODE
# include "CtAp_FltReactn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_FLTREACTN_H */

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
