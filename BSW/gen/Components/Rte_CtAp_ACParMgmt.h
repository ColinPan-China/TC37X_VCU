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
 *             File:  Rte_CtAp_ACParMgmt.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ACParMgmt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_ACPARMGMT_H
# define RTE_CTAP_ACPARMGMT_H

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

# include "Rte_CtAp_ACParMgmt_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw (0.0F)
#  define Rte_InitValue_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum Rte_Read_CtAp_ACParMgmt_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(data) (*(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw Rte_Read_CtAp_ACParMgmt_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw(data) (*(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw Rte_Read_CtAp_ACParMgmt_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw(data) (*(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw Rte_Read_CtAp_ACParMgmt_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw(data) (*(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg Rte_Read_CtAp_ACParMgmt_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_ACParMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_ACParMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum Rte_Read_CtAp_ACParMgmt_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
#  define Rte_Read_CtAp_ACParMgmt_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum(data) (*(data) = Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A Rte_Write_CtAp_ACParMgmt_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A
#  define Rte_Write_CtAp_ACParMgmt_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A(data) (Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A Rte_Write_CtAp_ACParMgmt_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A
#  define Rte_Write_CtAp_ACParMgmt_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A(data) (Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_ACParMgmt_START_SEC_CODE
# include "CtAp_ACParMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ACParMgmt_Cyclic_50ms R_ACParMgmt_Cyclic_50ms
#  define RTE_RUNNABLE_R_ACParMgmt_Init R_ACParMgmt_Init
# endif

FUNC(void, CtAp_ACParMgmt_CODE) R_ACParMgmt_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ACParMgmt_CODE) R_ACParMgmt_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ACParMgmt_STOP_SEC_CODE
# include "CtAp_ACParMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_ACPARMGMT_H */

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
