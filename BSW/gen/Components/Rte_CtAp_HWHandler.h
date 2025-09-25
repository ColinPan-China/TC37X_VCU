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
 *             File:  Rte_CtAp_HWHandler.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_HWHandler>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_HWHANDLER_H
# define RTE_CTAP_HWHANDLER_H

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

# include "Rte_CtAp_HWHandler_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo;
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo;
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV;
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V;
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo (0U)
#  define Rte_InitValue_RTE_P_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo (0U)
#  define Rte_InitValue_RTE_P_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV (0U)
#  define Rte_InitValue_RTE_P_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV (0U)
#  define Rte_InitValue_RTE_P_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV (0U)
#  define Rte_InitValue_RTE_P_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz (0U)
#  define Rte_InitValue_RTE_P_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg (FALSE)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz Rte_Read_CtAp_HWHandler_RTE_R_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz
#  define Rte_Read_CtAp_HWHandler_RTE_R_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz(data) (*(data) = Rte_CtAp_HVSfty_RTE_P_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg Rte_Read_CtAp_HWHandler_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg
#  define Rte_Read_CtAp_HWHandler_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg(data) (*(data) = Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo
#  define Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo(data) (Rte_CtAp_HWHandler_RTE_P_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo
#  define Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo(data) (Rte_CtAp_HWHandler_RTE_P_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV
#  define Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV(data) (Rte_CtAp_HWHandler_RTE_P_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV
#  define Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV(data) (Rte_CtAp_HWHandler_RTE_P_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V
#  define Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V(data) (Rte_CtAp_HWHandler_RTE_P_IOAbs_BSBattUDc_V_tec_IOAbs_BSBattUDc_V = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV
#  define Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV(data) (Rte_CtAp_HWHandler_RTE_P_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz
#  define Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz(data) (Rte_CtAp_HWHandler_RTE_P_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg
#  define Rte_Write_CtAp_HWHandler_RTE_P_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg(data) (Rte_CtAp_HWHandler_RTE_P_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_HWHandler_START_SEC_CODE
# include "CtAp_HWHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_HWHandler_Cyclic_10ms R_HWHandler_Cyclic_10ms
#  define RTE_RUNNABLE_R_HWHandler_Init R_HWHandler_Init
# endif

FUNC(void, CtAp_HWHandler_CODE) R_HWHandler_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_HWHandler_CODE) R_HWHandler_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_HWHandler_STOP_SEC_CODE
# include "CtAp_HWHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_HWHANDLER_H */

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
