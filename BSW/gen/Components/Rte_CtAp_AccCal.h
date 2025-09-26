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
 *             File:  Rte_CtAp_AccCal.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_AccCal>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_ACCCAL_H
# define RTE_CTAP_ACCCAL_H

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

# include "Rte_CtAp_AccCal_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg (FALSE)
#  define Rte_InitValue_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q (0.0F)
#  define Rte_InitValue_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts (0U)
#  define Rte_InitValue_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q (0.0F)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts Rte_Read_CtAp_AccCal_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts
#  define Rte_Read_CtAp_AccCal_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q Rte_Read_CtAp_AccCal_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q
#  define Rte_Read_CtAp_AccCal_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_AccCal_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_AccCal_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_AccCal_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_AccCal_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph Rte_Read_CtAp_AccCal_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
#  define Rte_Read_CtAp_AccCal_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg Rte_Write_CtAp_AccCal_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg
#  define Rte_Write_CtAp_AccCal_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg(data) (Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg Rte_Write_CtAp_AccCal_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg
#  define Rte_Write_CtAp_AccCal_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg(data) (Rte_CtAp_AccCal_RTE_P_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q Rte_Write_CtAp_AccCal_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q
#  define Rte_Write_CtAp_AccCal_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q(data) (Rte_CtAp_AccCal_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_AccCal_START_SEC_CODE
# include "CtAp_AccCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_AccCal_Cyclic_10ms R_AccCal_Cyclic_10ms
#  define RTE_RUNNABLE_R_AccCal_Init R_AccCal_Init
# endif

FUNC(void, CtAp_AccCal_CODE) R_AccCal_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_AccCal_CODE) R_AccCal_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_AccCal_STOP_SEC_CODE
# include "CtAp_AccCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_ACCCAL_H */

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
