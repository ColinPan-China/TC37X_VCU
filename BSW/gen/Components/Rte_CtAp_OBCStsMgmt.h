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
 *             File:  Rte_CtAp_OBCStsMgmt.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_OBCStsMgmt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_OBCSTSMGMT_H
# define RTE_CTAP_OBCSTSMGMT_H

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

# include "Rte_CtAp_OBCStsMgmt_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum (0U)
#  define Rte_InitValue_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum (0U)
#  define Rte_InitValue_RTE_R_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum (0U)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_OBCStsMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus(P2CONST(dt_OBCMgmt_OBCChrgStsErr, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus(P2CONST(dt_OBCMgmt_OBCDchaStsErr, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus(P2CONST(dt_OBCMgmt_OBCDiErr, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus(P2CONST(dt_OBCMgmt_OBCPreheatStsErr, AUTOMATIC, RTE_CTAP_OBCSTSMGMT_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_KeepWrm_Flg_tec_ChrMgmt_KeepWrm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCCtrlMdlSts_Enum_tec_ChrMgmt_OBCCtrlMdlSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_OBCEnaAllwd_Flg_tec_ChrMgmt_OBCEnaAllwd_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(data) (*(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_OBCStsMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct Rte_Read_CtAp_OBCStsMgmt_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum Rte_Read_CtAp_OBCStsMgmt_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum Rte_Read_CtAp_OBCStsMgmt_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_OBCStsMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_OBCStsMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum Rte_Read_CtAp_OBCStsMgmt_RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum(data) (*(data) = Rte_CtAp_EmMgmt_RTE_P_OBCMgmt_ElectcLockCtrlSts_Enum_tec_OBCMgmt_ElectcLockCtrlSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum Rte_Read_CtAp_OBCStsMgmt_RTE_R_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum
#  define Rte_Read_CtAp_OBCStsMgmt_RTE_R_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum(data) (*(data) = Rte_CtAp_S2Mgmt_RTE_P_OBCMgmt_S2SwtCtrlSts_Enum_tec_OBCMgmt_S2SwtCtrlSts_Enum, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
#  define Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum(data) (Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_OBCMgmt_OBCChrgStsErrDTC_Bus_tec_OBCMgmt_OBCChrgStsErrDTC_Bus Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErrDTC_Bus_tec_OBCMgmt_OBCChrgStsErrDTC_Bus
#  define Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErrDTC_Bus_tec_OBCMgmt_OBCChrgStsErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCChrgStsErr_Bus_tec_OBCMgmt_OBCChrgStsErr_Bus
#  define Rte_Write_RTE_P_OBCMgmt_OBCDchaStsErrDTC_Bus_tec_OBCMgmt_OBCDchaStsErrDTC_Bus Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErrDTC_Bus_tec_OBCMgmt_OBCDchaStsErrDTC_Bus
#  define Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErrDTC_Bus_tec_OBCMgmt_OBCDchaStsErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDchaStsErr_Bus_tec_OBCMgmt_OBCDchaStsErr_Bus
#  define Rte_Write_RTE_P_OBCMgmt_OBCDiErrDTC_Bus_tec_OBCMgmt_OBCDiErrDTC_Bus Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErrDTC_Bus_tec_OBCMgmt_OBCDiErrDTC_Bus
#  define Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErrDTC_Bus_tec_OBCMgmt_OBCDiErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCDiErr_Bus_tec_OBCMgmt_OBCDiErr_Bus
#  define Rte_Write_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum
#  define Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum(data) (Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_OBCMgmt_OBCPreheatStsErrDTC_Bus_tec_OBCMgmt_OBCPreheatStsErrDTC_Bus Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErrDTC_Bus_tec_OBCMgmt_OBCPreheatStsErrDTC_Bus
#  define Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErrDTC_Bus_tec_OBCMgmt_OBCPreheatStsErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus Rte_Write_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_OBCPreheatStsErr_Bus_tec_OBCMgmt_OBCPreheatStsErr_Bus


# endif /* !defined(RTE_CORE) */


# define CtAp_OBCStsMgmt_START_SEC_CODE
# include "CtAp_OBCStsMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_OBCStsMgmt_Cyclic_50ms R_OBCStsMgmt_Cyclic_50ms
#  define RTE_RUNNABLE_R_OBCStsMgmt_Init R_OBCStsMgmt_Init
# endif

FUNC(void, CtAp_OBCStsMgmt_CODE) R_OBCStsMgmt_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_OBCStsMgmt_CODE) R_OBCStsMgmt_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_OBCStsMgmt_STOP_SEC_CODE
# include "CtAp_OBCStsMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_OBCSTSMGMT_H */

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
