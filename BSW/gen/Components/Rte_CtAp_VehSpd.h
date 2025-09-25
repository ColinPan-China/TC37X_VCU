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
 *             File:  Rte_CtAp_VehSpd.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_VehSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_VEHSPD_H
# define RTE_CTAP_VEHSPD_H

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

# include "Rte_CtAp_VehSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg;
extern VAR(sint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg (FALSE)
#  define Rte_InitValue_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum (0U)
#  define Rte_InitValue_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph (0.0F)
#  define Rte_InitValue_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph (0.0F)
#  define Rte_InitValue_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg (FALSE)
#  define Rte_InitValue_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo (0.0F)
#  define Rte_InitValue_RTE_P_VotMot_TireRadiusReadInfo_tec_VotMot_TireRadiusReadInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph (0.0F)
#  define Rte_InitValue_RTE_R_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm (0)
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
#  define Rte_InitValue_RTE_R_DiagApp_TireRadiusInfo_tec_DiagApp_TireRadiusInfo (0U)
#  define Rte_InitValue_RTE_R_DiagApp_TireRadiusUpdateInfo_tec_DiagApp_TireRadiusUpdateInfo (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus(P2VAR(dt_ComM_IBSSts03CRCInfo, AUTOMATIC, RTE_CTAP_VEHSPD_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts03E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSPD_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehSpd_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus(P2VAR(dt_ComM_MCU01CRCInfo, AUTOMATIC, RTE_CTAP_VEHSPD_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_VehSpd_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_MCU01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_VEHSPD_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum
#  define Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum
#  define Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum
#  define Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum
#  define Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg
#  define Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph
#  define Rte_Read_CtAp_VehSpd_RTE_R_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus Rte_Read_CtAp_VehSpd_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus Rte_Read_CtAp_VehSpd_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg Rte_Read_CtAp_VehSpd_RTE_R_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg
#  define Rte_Read_CtAp_VehSpd_RTE_R_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm Rte_Read_CtAp_VehSpd_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm
#  define Rte_Read_CtAp_VehSpd_RTE_R_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg Rte_Read_CtAp_VehSpd_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg
#  define Rte_Read_CtAp_VehSpd_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_TireRadiusInfo_tec_DiagApp_TireRadiusInfo Rte_Read_CtAp_VehSpd_RTE_R_DiagApp_TireRadiusInfo_tec_DiagApp_TireRadiusInfo

#  define Rte_Read_CtAp_VehSpd_RTE_R_DiagApp_TireRadiusInfo_tec_DiagApp_TireRadiusInfo(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_DiagApp_TireRadiusUpdateInfo_tec_DiagApp_TireRadiusUpdateInfo Rte_Read_CtAp_VehSpd_RTE_R_DiagApp_TireRadiusUpdateInfo_tec_DiagApp_TireRadiusUpdateInfo

#  define Rte_Read_CtAp_VehSpd_RTE_R_DiagApp_TireRadiusUpdateInfo_tec_DiagApp_TireRadiusUpdateInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_VehSpd_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_VehSpd_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg
#  define Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg(data) (Rte_CtAp_VehSpd_RTE_P_VehMot_VehDirDif_Flg_tec_VehMot_VehDirDif_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum
#  define Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum(data) (Rte_CtAp_VehSpd_RTE_P_VehMot_VehDrvDir_Enum_tec_VehMot_VehDrvDir_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph
#  define Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(data) (Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
#  define Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(data) (Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg
#  define Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(data) (Rte_CtAp_VehSpd_RTE_P_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo
#  define Rte_Write_CtAp_VehSpd_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo(data) (Rte_CtAp_VehSpd_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VotMot_TireRadiusReadInfo_tec_VotMot_TireRadiusReadInfo Rte_Write_CtAp_VehSpd_RTE_P_VotMot_TireRadiusReadInfo_tec_VotMot_TireRadiusReadInfo
#  define Rte_Write_CtAp_VehSpd_RTE_P_VotMot_TireRadiusReadInfo_tec_VotMot_TireRadiusReadInfo(data) (RTE_E_OK)


# endif /* !defined(RTE_CORE) */


# define CtAp_VehSpd_START_SEC_CODE
# include "CtAp_VehSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_VehSpd_Cyclic_10ms R_VehSpd_Cyclic_10ms
#  define RTE_RUNNABLE_R_VehSpd_Init R_VehSpd_Init
# endif

FUNC(void, CtAp_VehSpd_CODE) R_VehSpd_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_VehSpd_CODE) R_VehSpd_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_VehSpd_STOP_SEC_CODE
# include "CtAp_VehSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_VEHSPD_H */

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
