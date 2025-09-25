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
 *             File:  Rte_CtAp_DrvTorqCoor.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_DrvTorqCoor>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_DRVTORQCOOR_H
# define RTE_CTAP_DRVTORQCOOR_H

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

# include "Rte_CtAp_DrvTorqCoor_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm Rte_Read_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm(data) (*(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsDesTq_Nm_tec_ChassisMgmt_IBSApsDesTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm Rte_Read_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm(data) (*(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcDesTq_Nm_tec_ChassisMgmt_IBSVlcDesTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(data) (*(data) = Rte_CtAp_AccrPedlDrv_RTE_P_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg(data) (*(data) = Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnActv_Flg_tec_ChassisMgmt_BrkRgnActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm(data) (*(data) = Rte_CtAp_BrkMgmt_RTE_P_ChassisMgmt_BrkRgnTq_Nm_tec_ChassisMgmt_BrkRgnTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm(data) (*(data) = Rte_CtAp_CrpCtrl_RTE_P_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg(data) (*(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg(data) (*(data) = Rte_CtAp_DrvAsscCtrl_RTE_P_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_DrvTorqCoor_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm Rte_Read_CtAp_DrvTorqCoor_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm
#  define Rte_Read_CtAp_DrvTorqCoor_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm(data) (*(data) = Rte_CtAp_SpdLmt_RTE_P_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm Rte_Write_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm
#  define Rte_Write_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm(data) (Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvCoorrDesTq_Nm_tec_ChassisMgmt_DrvCoorrDesTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg Rte_Write_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg
#  define Rte_Write_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg(data) (Rte_CtAp_DrvTorqCoor_RTE_P_ChassisMgmt_DrvDmdHiPrio_Flg_tec_ChassisMgmt_DrvDmdHiPrio_Flg = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_DrvTorqCoor_START_SEC_CODE
# include "CtAp_DrvTorqCoor_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_DrvTorqCoor_Cyclic_10ms R_DrvTorqCoor_Cyclic_10ms
#  define RTE_RUNNABLE_R_DrvTorqCoor_Init R_DrvTorqCoor_Init
# endif

FUNC(void, CtAp_DrvTorqCoor_CODE) R_DrvTorqCoor_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_DrvTorqCoor_CODE) R_DrvTorqCoor_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_DrvTorqCoor_STOP_SEC_CODE
# include "CtAp_DrvTorqCoor_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_DRVTORQCOOR_H */

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
