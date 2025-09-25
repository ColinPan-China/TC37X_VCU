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
 *             File:  Rte_CtAp_TorqCoor.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_TorqCoor>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_TORQCOOR_H
# define RTE_CTAP_TORQCOOR_H

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

# include "Rte_CtAp_TorqCoor_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqCoor_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqCrossZr_RTE_P_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm Rte_Read_CtAp_TorqCoor_RTE_R_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm
#  define Rte_Read_CtAp_TorqCoor_RTE_R_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm(data) (*(data) = Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesIncTq_Nm_tec_ChassisMgmt_IBSDesIncTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm Rte_Read_CtAp_TorqCoor_RTE_R_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm
#  define Rte_Read_CtAp_TorqCoor_RTE_R_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm(data) (*(data) = Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSDesRednTq_Nm_tec_ChassisMgmt_IBSDesRednTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg Rte_Read_CtAp_TorqCoor_RTE_R_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg
#  define Rte_Read_CtAp_TorqCoor_RTE_R_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg(data) (*(data) = Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvIncTqActv_Flg_tec_ChassisMgmt_IBSIntvIncTqActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg Rte_Read_CtAp_TorqCoor_RTE_R_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg
#  define Rte_Read_CtAp_TorqCoor_RTE_R_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg(data) (*(data) = Rte_CtAp_VehStabyCtrl_RTE_P_ChassisMgmt_IBSIntvRednTqActv_Flg_tec_ChassisMgmt_IBSIntvRednTqActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_TorqCoor_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_TorqCoor_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm Rte_Read_CtAp_TorqCoor_RTE_R_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm
#  define Rte_Read_CtAp_TorqCoor_RTE_R_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm(data) (*(data) = Rte_CtAp_TorqCrossZr_RTE_P_TorqPahMgmt_DesFildTq_Nm_tec_TorqPahMgmt_DesFildTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm Rte_Read_CtAp_TorqCoor_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
#  define Rte_Read_CtAp_TorqCoor_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm(data) (*(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm Rte_Read_CtAp_TorqCoor_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
#  define Rte_Read_CtAp_TorqCoor_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(data) (*(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph Rte_Read_CtAp_TorqCoor_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
#  define Rte_Read_CtAp_TorqCoor_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm Rte_Write_CtAp_TorqCoor_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm
#  define Rte_Write_CtAp_TorqCoor_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm(data) (Rte_CtAp_TorqCoor_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_TorqCoor_START_SEC_CODE
# include "CtAp_TorqCoor_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_TorqCoor_Cyclic_10ms R_TorqCoor_Cyclic_10ms
#  define RTE_RUNNABLE_R_TorqCoor_Init R_TorqCoor_Init
# endif

FUNC(void, CtAp_TorqCoor_CODE) R_TorqCoor_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_TorqCoor_CODE) R_TorqCoor_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_TorqCoor_STOP_SEC_CODE
# include "CtAp_TorqCoor_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_TORQCOOR_H */

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
