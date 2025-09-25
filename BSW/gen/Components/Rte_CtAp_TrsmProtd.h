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
 *             File:  Rte_CtAp_TrsmProtd.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_TrsmProtd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_TRSMPROTD_H
# define RTE_CTAP_TRSMPROTD_H

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

# include "Rte_CtAp_TrsmProtd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv (FALSE)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph (0.0F)
#  define Rte_InitValue_RTE_R_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum
#  define Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum
#  define Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg
#  define Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph
#  define Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum
#  define Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg
#  define Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph
#  define Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg
#  define Rte_Read_CtAp_TrsmProtd_RTE_R_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_TrsmProtd_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_TrsmProtd_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv Rte_Write_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv
#  define Rte_Write_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv(data) (Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_MotDftlProtnActv_tec_TorqPahMgmt_MotDftlProtnActv = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm Rte_Write_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm
#  define Rte_Write_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm(data) (Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMaxTq_Nm_tec_TorqPahMgmt_TramProtdLmtMaxTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm Rte_Write_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm
#  define Rte_Write_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm(data) (Rte_CtAp_TrsmProtd_RTE_P_TorqPahMgmt_TramProtdLimMinTq_Nm_tec_TorqPahMgmt_TramProtdLmtMinTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_TrsmProtd_START_SEC_CODE
# include "CtAp_TrsmProtd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_TrsmProtd_Cyclic_10ms R_TrsmProtd_Cyclic_10ms
#  define RTE_RUNNABLE_R_TrsmProtd_Init R_TrsmProtd_Init
# endif

FUNC(void, CtAp_TrsmProtd_CODE) R_TrsmProtd_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_TrsmProtd_CODE) R_TrsmProtd_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_TrsmProtd_STOP_SEC_CODE
# include "CtAp_TrsmProtd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_TRSMPROTD_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
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
