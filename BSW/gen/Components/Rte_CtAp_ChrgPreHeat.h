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
 *             File:  Rte_CtAp_ChrgPreHeat.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ChrgPreHeat>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_CHRGPREHEAT_H
# define RTE_CTAP_CHRGPREHEAT_H

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

# include "Rte_CtAp_ChrgPreHeat_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V;
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff (FALSE)
#  define Rte_InitValue_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo (0U)
#  define Rte_InitValue_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg (FALSE)
#  define Rte_InitValue_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum (0U)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGPREHEAT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus(P2CONST(dt_ChrMgmt_AcPreheatUDcCtrlErr, AUTOMATIC, RTE_CTAP_CHRGPREHEAT_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus(P2CONST(dt_ChrMgmt_DcPreheatUDcCtrlErr, AUTOMATIC, RTE_CTAP_CHRGPREHEAT_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus(P2CONST(dt_ChrMgmt_PreheatIRChkErr, AUTOMATIC, RTE_CTAP_CHRGPREHEAT_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_ChrgPreHeat_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg Rte_Read_CtAp_ChrgPreHeat_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_AcPause_Flg_tec_ErrMgmt_AcPause_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg Rte_Read_CtAp_ChrgPreHeat_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_DcPause_Flg_tec_ErrMgmt_DcPause_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum(data) (*(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum(data) (*(data) = Rte_CtAp_DCDCMgmt_RTE_P_HvMgmt_DCDCWrkModActSts_Enum_tec_HvMgmt_DCDCWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum(data) (*(data) = Rte_CtAp_TCUMgmt_RTE_P_HvMgmt_TCUWrkModActSts_Enum_tec_HvMgmt_TCUWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_ChrgPreHeat_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum Rte_Read_CtAp_ChrgPreHeat_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum
#  define Rte_Read_CtAp_ChrgPreHeat_RTE_R_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum(data) (*(data) = Rte_CtAp_OBCStsMgmt_RTE_P_OBCMgmt_AcChrgnSts_Enum_tec_OBCMgmt_AcChrgnSts_Enum, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus
#  define Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_AcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_AcPreheatUDcCtrlErr_Bus
#  define Rte_Write_RTE_P_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus
#  define Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_DcPreheatUDcCtrlErr_Bus_tec_ChrMgmt_DcPreheatUDcCtrlErr_Bus
#  define Rte_Write_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg
#  define Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg(data) (Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PckPTCAllwbl_Flg_tec_ChrMgmt_PckPTCAllwbl_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum
#  define Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum(data) (Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_PreheatIRChkErrDTC_Bus_tec_ChrMgmt_PreheatIRChkErrDTC_Bus Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErrDTC_Bus_tec_ChrMgmt_PreheatIRChkErrDTC_Bus
#  define Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErrDTC_Bus_tec_ChrMgmt_PreheatIRChkErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatIRChkErr_Bus_tec_ChrMgmt_PreheatIRChkErr_Bus
#  define Rte_Write_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg
#  define Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg(data) (Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatPODDiReq_Flg_tec_ChrMgmt_PreheatPODDiReq_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff
#  define Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff(data) (Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatReqHvOff_tec_ChrMgmt_PreheatReqHvOff = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
#  define Rte_Write_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(data) (Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_ChrgPreHeat_START_SEC_CODE
# include "CtAp_ChrgPreHeat_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ChrgPreHeat_Cyclic_50ms R_ChrgPreHeat_Cyclic_50ms
#  define RTE_RUNNABLE_R_ChrgPreHeat_Init R_ChrgPreHeat_Init
# endif

FUNC(void, CtAp_ChrgPreHeat_CODE) R_ChrgPreHeat_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ChrgPreHeat_CODE) R_ChrgPreHeat_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ChrgPreHeat_STOP_SEC_CODE
# include "CtAp_ChrgPreHeat_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_CHRGPREHEAT_H */

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
