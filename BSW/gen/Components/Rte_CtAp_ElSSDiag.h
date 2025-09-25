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
 *             File:  Rte_CtAp_ElSSDiag.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ElSSDiag>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_ELSSDIAG_H
# define RTE_CTAP_ELSSDIAG_H

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

# include "Rte_CtAp_ElSSDiag_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_HWHandler_RTE_P_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg (FALSE)
#  define Rte_InitValue_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_LvMgmt_StayInRun_Flg_tec_LvMgmt_StayInRun_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo (FALSE)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_ELSSDIAG_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_ElSSDiag_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_ElSSDiag_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg Rte_Read_CtAp_ElSSDiag_RTE_R_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg(data) (*(data) = Rte_CtAp_HWHandler_RTE_P_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo Rte_Read_CtAp_ElSSDiag_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(data) (*(data) = Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_ElSSDiag_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg Rte_Read_CtAp_ElSSDiag_RTE_R_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg(data) (*(data) = Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_ElSSDiag_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg Rte_Read_CtAp_ElSSDiag_RTE_R_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg
#  define Rte_Read_CtAp_ElSSDiag_RTE_R_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_LvMgmt_ECUsDiagDTC_Bus_tec_LvMgmt_ECUsDiagDTC_Bus Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_ECUsDiagDTC_Bus_tec_LvMgmt_ECUsDiagDTC_Bus
#  define Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_ECUsDiagDTC_Bus_tec_LvMgmt_ECUsDiagDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg
#  define Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(data) (Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg
#  define Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg(data) (Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_LvMgmt_KL15eOffDTC_Bus_tec_LvMgmt_KL15eOffDTC_Bus Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15eOffDTC_Bus_tec_LvMgmt_KL15eOffDTC_Bus
#  define Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15eOffDTC_Bus_tec_LvMgmt_KL15eOffDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_KL15eOnDTC_Bus_tec_LvMgmt_KL15eOnDTC_Bus Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15eOnDTC_Bus_tec_LvMgmt_KL15eOnDTC_Bus
#  define Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_KL15eOnDTC_Bus_tec_LvMgmt_KL15eOnDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg
#  define Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg(data) (Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg
#  define Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg(data) (Rte_CtAp_ElSSDiag_RTE_P_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_LvMgmt_StayInRun_Flg_tec_LvMgmt_StayInRun_Flg Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_StayInRun_Flg_tec_LvMgmt_StayInRun_Flg
#  define Rte_Write_CtAp_ElSSDiag_RTE_P_LvMgmt_StayInRun_Flg_tec_LvMgmt_StayInRun_Flg(data) (RTE_E_OK)


# endif /* !defined(RTE_CORE) */


# define CtAp_ElSSDiag_START_SEC_CODE
# include "CtAp_ElSSDiag_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ElSSDiag_Cyclic_20ms R_ElSSDiag_Cyclic_20ms
#  define RTE_RUNNABLE_R_ElSSDiag_Init R_ElSSDiag_Init
# endif

FUNC(void, CtAp_ElSSDiag_CODE) R_ElSSDiag_Cyclic_20ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ElSSDiag_CODE) R_ElSSDiag_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ElSSDiag_STOP_SEC_CODE
# include "CtAp_ElSSDiag_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_ELSSDIAG_H */

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
