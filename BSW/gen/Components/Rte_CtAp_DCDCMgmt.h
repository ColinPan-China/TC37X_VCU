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
 *             File:  Rte_CtAp_DCDCMgmt.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_DCDCMgmt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_DCDCMGMT_H
# define RTE_CTAP_DCDCMGMT_H

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

# include "Rte_CtAp_DCDCMgmt_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum (0U)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_DCDCMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_DCDCMGMT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg Rte_Read_CtAp_DCDCMgmt_RTE_R_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg
#  define Rte_Read_CtAp_DCDCMgmt_RTE_R_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg(data) (*(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V Rte_Read_CtAp_DCDCMgmt_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V
#  define Rte_Read_CtAp_DCDCMgmt_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_DCDCMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V Rte_Read_CtAp_DCDCMgmt_RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V
#  define Rte_Read_CtAp_DCDCMgmt_RTE_R_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum Rte_Read_CtAp_DCDCMgmt_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum
#  define Rte_Read_CtAp_DCDCMgmt_RTE_R_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_DCDCMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_DCDCMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg Rte_Read_CtAp_DCDCMgmt_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg
#  define Rte_Read_CtAp_DCDCMgmt_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg(data) (*(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum Rte_Read_CtAp_DCDCMgmt_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum
#  define Rte_Read_CtAp_DCDCMgmt_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum(data) (*(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_DCDCMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_DCDCMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_DCDCMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_DCDCMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V
#  define Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V(data) (Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_tec_HvMgmt_DCDCEnaFltDTC_Bus Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_tec_HvMgmt_DCDCEnaFltDTC_Bus
#  define Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCEnaFltDTC_Bus_tec_HvMgmt_DCDCEnaFltDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_DCDCStopFltDTC_Bus_tec_HvMgmt_DCDCStopFltDTC_Bus Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCStopFltDTC_Bus_tec_HvMgmt_DCDCStopFltDTC_Bus
#  define Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCStopFltDTC_Bus_tec_HvMgmt_DCDCStopFltDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum
#  define Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum(data) (Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum
#  define Rte_Write_CtAp_DCDCMgmt_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum(data) (Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_DCDCMgmt_START_SEC_CODE
# include "CtAp_DCDCMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_DCDCMgmt_Cyclic_20ms R_DCDCMgmt_Cyclic_20ms
#  define RTE_RUNNABLE_R_DCDCMgmt_Init R_DCDCMgmt_Init
# endif

FUNC(void, CtAp_DCDCMgmt_CODE) R_DCDCMgmt_Cyclic_20ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_DCDCMgmt_CODE) R_DCDCMgmt_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_DCDCMgmt_STOP_SEC_CODE
# include "CtAp_DCDCMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_DCDCMGMT_H */

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
