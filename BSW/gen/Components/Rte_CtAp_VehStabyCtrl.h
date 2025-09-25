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
 *             File:  Rte_CtAp_VehStabyCtrl.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_VehStabyCtrl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_VEHSTABYCTRL_H
# define RTE_CTAP_VEHSTABYCTRL_H

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

# include "Rte_CtAp_VehStabyCtrl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus(P2VAR(dt_ComM_IBSSts02CRCInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts02E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus(P2VAR(dt_ComM_IBSSts04CRCInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts04E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlCRCInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSTABYCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm Rte_Read_CtAp_VehStabyCtrl_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(data) (*(data) = Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg Rte_Read_CtAp_VehStabyCtrl_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DlyGrdtZeroTq_Flg_tec_ErrMgmt_DlyGrdtZeroTq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg Rte_Read_CtAp_VehStabyCtrl_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_GrdtZeroTq_Flg_tec_ErrMgmt_GrdtZeroTq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg Rte_Read_CtAp_VehStabyCtrl_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_ImdtZeroTq_Flg_tec_ErrMgmt_ImdtZeroTq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_VehStabyCtrl_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_VehStabyCtrl_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_VehStabyCtrl_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm
#  define Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm(data) (Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm
#  define Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm(data) (Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg
#  define Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg(data) (Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg
#  define Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg(data) (Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv
#  define Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv(data) (Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg
#  define Rte_Write_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg(data) (Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_VehStabyCtrl_START_SEC_CODE
# include "CtAp_VehStabyCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_VehStabyCtrl_Cyclic_10ms R_VehStabyCtrl_Cyclic_10ms
#  define RTE_RUNNABLE_R_VehStabyCtrl_Init R_VehStabyCtrl_Init
# endif

FUNC(void, CtAp_VehStabyCtrl_CODE) R_VehStabyCtrl_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_VehStabyCtrl_CODE) R_VehStabyCtrl_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_VehStabyCtrl_STOP_SEC_CODE
# include "CtAp_VehStabyCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_VEHSTABYCTRL_H */

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
