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
 *             File:  Rte_CtAp_TorqLmt.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_TorqLmt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_TORQLMT_H
# define RTE_CTAP_TORQLMT_H

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

# include "Rte_CtAp_TorqLmt_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V;
extern VAR(sint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm (0)
#  define Rte_InitValue_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw (0.0F)
#  define Rte_InitValue_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq (FALSE)
#  define Rte_InitValue_RTE_R_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv (FALSE)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm (0.0F)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_TorqLmt_RTE_R_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus(P2VAR(dt_ErrMgmt_TorqCtrlErr, AUTOMATIC, RTE_CTAP_TORQLMT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V
#  define Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm
#  define Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm
#  define Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm
#  define Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm
#  define Rte_Read_CtAp_TorqLmt_RTE_R_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw Rte_Read_CtAp_TorqLmt_RTE_R_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw
#  define Rte_Read_CtAp_TorqLmt_RTE_R_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw(data) (*(data) = Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUDrvPwrLmt_Kw_tec_EgyMgmt_MCUDrvPwrLmt_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw Rte_Read_CtAp_TorqLmt_RTE_R_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw
#  define Rte_Read_CtAp_TorqLmt_RTE_R_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw(data) (*(data) = Rte_CtAp_PwrLim_RTE_P_EgyMgmt_MCUFbPwrLmt_Kw_tec_EgyMgmt_MCUFbPwrLmt_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg Rte_Read_CtAp_TorqLmt_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg
#  define Rte_Read_CtAp_TorqLmt_RTE_R_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_FobdEgyRcov_Flg_tec_ErrMgmt_FobdEgyRcov_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus Rte_Read_CtAp_TorqLmt_RTE_R_ErrMgmt_TorqCtrlErr_Bus_tec_ErrMgmt_TorqCtrlErr_Bus
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_TorqLmt_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_TorqLmt_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq Rte_Read_CtAp_TorqLmt_RTE_R_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq
#  define Rte_Read_CtAp_TorqLmt_RTE_R_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_TarGearPInhbTq_tec_FctSftyMon_TarGearPInhbTq, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum Rte_Read_CtAp_TorqLmt_RTE_R_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum
#  define Rte_Read_CtAp_TorqLmt_RTE_R_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum(data) (*(data) = Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv Rte_Read_CtAp_TorqLmt_RTE_R_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv
#  define Rte_Read_CtAp_TorqLmt_RTE_R_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv(data) (*(data) = Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm Rte_Read_CtAp_TorqLmt_RTE_R_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm
#  define Rte_Read_CtAp_TorqLmt_RTE_R_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm(data) (*(data) = Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm Rte_Read_CtAp_TorqLmt_RTE_R_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm
#  define Rte_Read_CtAp_TorqLmt_RTE_R_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm(data) (*(data) = Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm Rte_Write_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm
#  define Rte_Write_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm(data) (Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm Rte_Write_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm
#  define Rte_Write_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm(data) (Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm Rte_Write_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
#  define Rte_Write_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm(data) (Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm Rte_Write_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
#  define Rte_Write_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(data) (Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_TorqLmt_START_SEC_CODE
# include "CtAp_TorqLmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_TorqLmt_Cyclic_10ms R_TorqLmt_Cyclic_10ms
#  define RTE_RUNNABLE_R_TorqLmt_Init R_TorqLmt_Init
# endif

FUNC(void, CtAp_TorqLmt_CODE) R_TorqLmt_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_TorqLmt_CODE) R_TorqLmt_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_TorqLmt_STOP_SEC_CODE
# include "CtAp_TorqLmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_TORQLMT_H */

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
