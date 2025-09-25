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
 *             File:  Rte_CtAp_ResEst.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ResEst>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_RESEST_H
# define RTE_CTAP_RESEST_H

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

# include "Rte_CtAp_ResEst_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ResEst_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ResEst_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccCal_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_VehSpd_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_VehMot_AcclrPrpCurr_mps2q_tec_VehMot_AcclrPrpCurr_mps2q (0.0F)
#  define Rte_InitValue_RTE_P_VehMot_AcclrPrpMax_mps2q_tec_VehMot_AcclrPrpMax_mps2q (0.0F)
#  define Rte_InitValue_RTE_P_VehMot_AcclrPrpMin_mps2q_tec_VehMot_AcclrPrpMin_mps2q (0.0F)
#  define Rte_InitValue_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts (0U)
#  define Rte_InitValue_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph (0.0F)
#  define Rte_InitValue_RTE_R_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum Rte_Read_CtAp_ResEst_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
#  define Rte_Read_CtAp_ResEst_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(data) (*(data) = Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm Rte_Read_CtAp_ResEst_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm
#  define Rte_Read_CtAp_ResEst_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts Rte_Read_CtAp_ResEst_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts
#  define Rte_Read_CtAp_ResEst_RTE_R_ComM_YRSAxSts_tec_ComM_YRSAxSts(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q Rte_Read_CtAp_ResEst_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q
#  define Rte_Read_CtAp_ResEst_RTE_R_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm Rte_Read_CtAp_ResEst_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm
#  define Rte_Read_CtAp_ResEst_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm(data) (*(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm Rte_Read_CtAp_ResEst_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm
#  define Rte_Read_CtAp_ResEst_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(data) (*(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm Rte_Read_CtAp_ResEst_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm
#  define Rte_Read_CtAp_ResEst_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm(data) (*(data) = Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph
#  define Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q
#  define Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q(data) (*(data) = Rte_CtAp_AccCal_RTE_P_VehMot_VehSpdAcclr_mps2q_tec_VehMot_VehSpdAcclr_mps2q, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg
#  define Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
#  define Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo
#  define Rte_Read_CtAp_ResEst_RTE_R_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo(data) (*(data) = Rte_CtAp_VehSpd_RTE_P_VehMot_VehTirRdInfo_tec_VehMot_VehTirRdInfo, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm Rte_Write_CtAp_ResEst_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm
#  define Rte_Write_CtAp_ResEst_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm(data) (Rte_CtAp_ResEst_RTE_P_VehMot_Acclr2Tq_Nm_tec_VehMot_Acclr2Tq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_VehMot_AcclrPrpCurr_mps2q_tec_VehMot_AcclrPrpCurr_mps2q Rte_Write_CtAp_ResEst_RTE_P_VehMot_AcclrPrpCurr_mps2q_tec_VehMot_AcclrPrpCurr_mps2q
#  define Rte_Write_CtAp_ResEst_RTE_P_VehMot_AcclrPrpCurr_mps2q_tec_VehMot_AcclrPrpCurr_mps2q(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_VehMot_AcclrPrpMax_mps2q_tec_VehMot_AcclrPrpMax_mps2q Rte_Write_CtAp_ResEst_RTE_P_VehMot_AcclrPrpMax_mps2q_tec_VehMot_AcclrPrpMax_mps2q
#  define Rte_Write_CtAp_ResEst_RTE_P_VehMot_AcclrPrpMax_mps2q_tec_VehMot_AcclrPrpMax_mps2q(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_VehMot_AcclrPrpMin_mps2q_tec_VehMot_AcclrPrpMin_mps2q Rte_Write_CtAp_ResEst_RTE_P_VehMot_AcclrPrpMin_mps2q_tec_VehMot_AcclrPrpMin_mps2q
#  define Rte_Write_CtAp_ResEst_RTE_P_VehMot_AcclrPrpMin_mps2q_tec_VehMot_AcclrPrpMin_mps2q(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm Rte_Write_CtAp_ResEst_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm
#  define Rte_Write_CtAp_ResEst_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm(data) (Rte_CtAp_ResEst_RTE_P_VehMot_VehDragTq_Nm_tec_VehMot_VehDragTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_ResEst_START_SEC_CODE
# include "CtAp_ResEst_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ResEst_Cyclic_10ms R_ResEst_Cyclic_10ms
#  define RTE_RUNNABLE_R_ResEst_Init R_ResEst_Init
# endif

FUNC(void, CtAp_ResEst_CODE) R_ResEst_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ResEst_CODE) R_ResEst_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ResEst_STOP_SEC_CODE
# include "CtAp_ResEst_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_RESEST_H */

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
