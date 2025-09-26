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
 *             File:  Rte_CtAp_CrpCtrl.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_CrpCtrl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_CRPCTRL_H
# define RTE_CTAP_CRPCTRL_H

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

# include "Rte_CtAp_CrpCtrl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg;
extern VAR(sint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_SlopEst_RTE_P_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod (0U)
#  define Rte_InitValue_RTE_R_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg (0.0F)
#  define Rte_InitValue_RTE_R_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm (0)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph (0.0F)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_CrpCtrl_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus(P2VAR(dt_FctSftyMon_CrpCtrlTqOverFltInfo, AUTOMATIC, RTE_CTAP_CRPCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm Rte_Read_CtAp_CrpCtrl_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(data) (*(data) = Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum Rte_Read_CtAp_CrpCtrl_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(data) (*(data) = Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg Rte_Read_CtAp_CrpCtrl_RTE_R_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg(data) (*(data) = Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_CrpCtrl_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus Rte_Read_CtAp_CrpCtrl_RTE_R_FctSftyMon_CrpCtrlTqOverFltInfo_Bus_tec_FctSftyMon_CrpCtrlTqOverFltInfo_Bus
#  define Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum Rte_Read_CtAp_CrpCtrl_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(data) (*(data) = Rte_CtAp_DrvMod_RTE_P_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_CrpCtrl_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm Rte_Read_CtAp_CrpCtrl_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm(data) (*(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm Rte_Read_CtAp_CrpCtrl_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(data) (*(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct Rte_Read_CtAp_CrpCtrl_RTE_R_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct(data) (*(data) = Rte_CtAp_SlopEst_RTE_P_VehMot_SlopGrd_pct_tec_VehMot_SlopGrd_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg Rte_Read_CtAp_CrpCtrl_RTE_R_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_CrpCtrl_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph Rte_Read_CtAp_CrpCtrl_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
#  define Rte_Read_CtAp_CrpCtrl_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm Rte_Write_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm
#  define Rte_Write_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm(data) (Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts Rte_Write_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts
#  define Rte_Write_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts(data) (Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlSts_tec_ChassisMgmt_CrpCtrlSts = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_CrpCtrl_START_SEC_CODE
# include "CtAp_CrpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_CrpCtrl_Cyclic_10ms R_CrpCtrl_Cyclic_10ms
#  define RTE_RUNNABLE_R_CrpCtrl_Init R_CrpCtrl_Init
# endif

FUNC(void, CtAp_CrpCtrl_CODE) R_CrpCtrl_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_CrpCtrl_CODE) R_CrpCtrl_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_CrpCtrl_STOP_SEC_CODE
# include "CtAp_CrpCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_CRPCTRL_H */

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
