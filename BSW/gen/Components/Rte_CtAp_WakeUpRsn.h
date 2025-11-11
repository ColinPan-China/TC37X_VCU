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
 *             File:  Rte_CtAp_WakeUpRsn.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_WakeUpRsn>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_WAKEUPRSN_H
# define RTE_CTAP_WAKEUPRSN_H

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

# include "Rte_CtAp_WakeUpRsn_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT_NOCACHE) Rte_IoHwAb_SWC_Ecu_KeyWakeStatus_Keywake;

#  define RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo (0U)
#  define Rte_InitValue_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BMSAWB_tec_ComM_BMSAWB (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BMSPNC15_tec_ComM_BMSPNC15 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWAWB_tec_ComM_CGWAWB (FALSE)
#  define Rte_InitValue_RTE_R_ComM_CGWPNC15_tec_ComM_CGWPNC15 (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NMStatusInfo_tec_ComM_NMStatusInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum (0U)
#  define Rte_InitValue_RTE_R_DiagApp_StayInRunReqInfo_tec_DiagApp_StayInRunReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_Ecu_AccWakeStatus_Accwake (FALSE)
#  define Rte_InitValue_RTE_R_Ecu_CHCANWakeStatus_CHCANwake (FALSE)
#  define Rte_InitValue_RTE_R_Ecu_KeyWakeStatus_Keywake (FALSE)
#  define Rte_InitValue_RTE_R_Ecu_LinWakeStatus_Linwake (FALSE)
#  define Rte_InitValue_RTE_R_Ecu_PTCANWakeStatus_PTCANwake (FALSE)
#  define Rte_InitValue_RTE_R_Ecu_SelfWakeStatus_SelfWake_tec_Ecu_SelfWakeStatus_SelfWake (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_WakeUpRsn_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg Rte_Read_CtAp_WakeUpRsn_RTE_R_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg
#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ReqLvActv_Flg_tec_ChrMgmt_ReqLvActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSAWB_tec_ComM_BMSAWB Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_BMSAWB_tec_ComM_BMSAWB

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_BMSAWB_tec_ComM_BMSAWB(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ComM_BMSPNC15_tec_ComM_BMSPNC15 Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_BMSPNC15_tec_ComM_BMSPNC15

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_BMSPNC15_tec_ComM_BMSPNC15(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ComM_CGWAWB_tec_ComM_CGWAWB Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_CGWAWB_tec_ComM_CGWAWB

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_CGWAWB_tec_ComM_CGWAWB(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ComM_CGWPNC15_tec_ComM_CGWPNC15 Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_CGWPNC15_tec_ComM_CGWPNC15

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_CGWPNC15_tec_ComM_CGWPNC15(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum
#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum
#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_StayInRunReqInfo_tec_DiagApp_StayInRunReqInfo Rte_Read_CtAp_WakeUpRsn_RTE_R_DiagApp_StayInRunReqInfo_tec_DiagApp_StayInRunReqInfo

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_DiagApp_StayInRunReqInfo_tec_DiagApp_StayInRunReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_Ecu_AccWakeStatus_Accwake Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_AccWakeStatus_Accwake

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_AccWakeStatus_Accwake(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_Ecu_CHCANWakeStatus_CHCANwake Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_CHCANWakeStatus_CHCANwake

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_CHCANWakeStatus_CHCANwake(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_Ecu_KeyWakeStatus_Keywake Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_KeyWakeStatus_Keywake
#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_KeyWakeStatus_Keywake(data) (*(data) = Rte_IoHwAb_SWC_Ecu_KeyWakeStatus_Keywake, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_Ecu_LinWakeStatus_Linwake Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_LinWakeStatus_Linwake

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_LinWakeStatus_Linwake(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_Ecu_PTCANWakeStatus_PTCANwake Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_PTCANWakeStatus_PTCANwake

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_PTCANWakeStatus_PTCANwake(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_Ecu_SelfWakeStatus_SelfWake_tec_Ecu_SelfWakeStatus_SelfWake Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_SelfWakeStatus_SelfWake_tec_Ecu_SelfWakeStatus_SelfWake

#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_Ecu_SelfWakeStatus_SelfWake_tec_Ecu_SelfWakeStatus_SelfWake(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_WakeUpRsn_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_WakeUpRsn_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo Rte_Write_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo
#  define Rte_Write_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(data) (Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg Rte_Write_CtAp_WakeUpRsn_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg
#  define Rte_Write_CtAp_WakeUpRsn_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg(data) (Rte_CtAp_WakeUpRsn_RTE_P_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_WakeUpRsn_START_SEC_CODE
# include "CtAp_WakeUpRsn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_WakeUpRsn_Cyclic_10ms R_WakeUpRsn_Cyclic_10ms
#  define RTE_RUNNABLE_R_WakeUpRsn_Init R_WakeUpRsn_Init
# endif

FUNC(void, CtAp_WakeUpRsn_CODE) R_WakeUpRsn_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_WakeUpRsn_CODE) R_WakeUpRsn_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_WakeUpRsn_STOP_SEC_CODE
# include "CtAp_WakeUpRsn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_WAKEUPRSN_H */

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
