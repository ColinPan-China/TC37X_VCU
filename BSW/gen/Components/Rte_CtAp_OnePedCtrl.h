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
 *             File:  Rte_CtAp_OnePedCtrl.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_OnePedCtrl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_ONEPEDCTRL_H
# define RTE_CTAP_ONEPEDCTRL_H

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

# include "Rte_CtAp_OnePedCtrl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ResEst_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ResEst_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_OnePedCtrl_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus(P2VAR(dt_FctSftyMon_DesVehDecelSpdOverFltInfo, AUTOMATIC, RTE_CTAP_ONEPEDCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm Rte_Read_CtAp_OnePedCtrl_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(data) (*(data) = Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo Rte_Read_CtAp_OnePedCtrl_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(data) (*(data) = Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg(data) (*(data) = Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkCmpDecelReqActv_Flg_tec_ChassisMgmt_BrkCmpDecelReqActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum Rte_Read_CtAp_OnePedCtrl_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(data) (*(data) = Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_OnePedCtrl_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus Rte_Read_CtAp_OnePedCtrl_RTE_R_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus_tec_FctSftyMon_DesVehDecelSpdOverFltInfo_Bus
#  define Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum Rte_Read_CtAp_OnePedCtrl_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(data) (*(data) = Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_OnePedCtrl_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm Rte_Read_CtAp_OnePedCtrl_RTE_R_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm(data) (*(data) = Rte_CtAp_ResEst_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm Rte_Read_CtAp_OnePedCtrl_RTE_R_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm(data) (*(data) = Rte_CtAp_ResEst_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg Rte_Read_CtAp_OnePedCtrl_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
#  define Rte_Read_CtAp_OnePedCtrl_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q Rte_Write_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q
#  define Rte_Write_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q(data) (Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg Rte_Write_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg
#  define Rte_Write_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg(data) (Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg Rte_Write_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg
#  define Rte_Write_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg(data) (Rte_CtAp_OnePedCtrl_RTE_P_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_OnePedCtrl_START_SEC_CODE
# include "CtAp_OnePedCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_OnePedCtrl_Cyclic_10ms R_OnePedCtrl_Cyclic_10ms
#  define RTE_RUNNABLE_R_OnePedCtrl_Init R_OnePedCtrl_Init
# endif

FUNC(void, CtAp_OnePedCtrl_CODE) R_OnePedCtrl_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_OnePedCtrl_CODE) R_OnePedCtrl_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_OnePedCtrl_STOP_SEC_CODE
# include "CtAp_OnePedCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_ONEPEDCTRL_H */

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
