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
 *             File:  Rte_CtAp_DrvAsscCtrl.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_DrvAsscCtrl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_DRVASSCCTRL_H
# define RTE_CTAP_DRVASSCCTRL_H

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

# include "Rte_CtAp_DrvAsscCtrl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSApsReqTqVld_Flg_tec_ComM_IBSApsReqTqVld_Flg (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph (0.0F)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus(P2VAR(dt_ComM_IBSACCCRCInfo, AUTOMATIC, RTE_CTAP_DRVASSCCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSACCE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_DRVASSCCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus(P2VAR(dt_ComM_IBSTqCRCInfo, AUTOMATIC, RTE_CTAP_DRVASSCCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSTqE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_DRVASSCCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(data) (*(data) = Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(data) (*(data) = Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(data) (*(data) = Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSApsReqTqVld_Flg_tec_ComM_IBSApsReqTqVld_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSApsReqTqVld_Flg_tec_ComM_IBSApsReqTqVld_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSApsReqTqVld_Flg_tec_ComM_IBSApsReqTqVld_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_DrvAsscCtrl_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv5_Flg_tec_ErrMgmt_VehSpdLimErrLv5_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_VehSpdLimErrLv6_Flg_tec_ErrMgmt_VehSpdLimErrLv6_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_DrvAsscCtrl_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(data) (*(data) = Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_DrvAsscCtrl_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph Rte_Read_CtAp_DrvAsscCtrl_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
#  define Rte_Read_CtAp_DrvAsscCtrl_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg(data) (Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSApsCtrlDesTqOverFltDTCInfo_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm(data) (Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg(data) (Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg(data) (Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus_tec_ChassisMgmt_IBSVlcCtrlDesTqOverFltDTCInfo_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm(data) (Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg(data) (Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg(data) (Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo(data) (Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo
#  define Rte_Write_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo(data) (Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_DrvAsscCtrl_START_SEC_CODE
# include "CtAp_DrvAsscCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_DrvAsscCtrl_Cyclic_10ms R_DrvAsscCtrl_Cyclic_10ms
#  define RTE_RUNNABLE_R_DrvAsscCtrl_Init R_DrvAsscCtrl_Init
# endif

FUNC(void, CtAp_DrvAsscCtrl_CODE) R_DrvAsscCtrl_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_DrvAsscCtrl_CODE) R_DrvAsscCtrl_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_DrvAsscCtrl_STOP_SEC_CODE
# include "CtAp_DrvAsscCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_DRVASSCCTRL_H */

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
