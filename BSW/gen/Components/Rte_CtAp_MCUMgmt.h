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
 *             File:  Rte_CtAp_MCUMgmt.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_MCUMgmt>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_MCUMGMT_H
# define RTE_CTAP_MCUMGMT_H

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

# include "Rte_CtAp_MCUMgmt_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum (0U)
#  define Rte_InitValue_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_ACUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_ADCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_APTCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_CGWNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCDCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMFLNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMFRNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMRLNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_DCMRRNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_EPTIBSNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_EVCOMNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_IVINodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_OBCNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_PRNDNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_SGWCHNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_SGWNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_NodComFailr_tec_ComM_TCUNodComFailr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq (0U)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg (FALSE)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg (FALSE)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_MCUMGMT_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_MCUMgmt_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_MCUUDc_V_tec_ComM_MCUUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_BCMNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_MCUNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_MCUMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_MCUMgmt_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg Rte_Read_CtAp_MCUMgmt_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_EmgyHvDwn_Flg_tec_ErrMgmt_EmgyHvDwn_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg Rte_Read_CtAp_MCUMgmt_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg(data) (*(data) = Rte_CtAp_FltReactn_RTE_P_ErrMgmt_HvDwn_Flg_tec_ErrMgmt_HvDwn_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_MCUMgmt_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum Rte_Read_CtAp_MCUMgmt_RTE_R_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum(data) (*(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg Rte_Read_CtAp_MCUMgmt_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg(data) (*(data) = Rte_CtAp_BMSMgmt_RTE_P_HvMgmt_HvPwrOnReq_Flg_tec_HvMgmt_HvPwrOnReq_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_MCUMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_MCUMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_MCUMgmt_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_HvMgmt_MCUClsFltDTC_Bus_tec_HvMgmt_MCUClsFltDTC_Bus Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUClsFltDTC_Bus_tec_HvMgmt_MCUClsFltDTC_Bus
#  define Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUClsFltDTC_Bus_tec_HvMgmt_MCUClsFltDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_MCUEnaFltDTC_Bus_tec_HvMgmt_MCUEnaFltDTC_Bus Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUEnaFltDTC_Bus_tec_HvMgmt_MCUEnaFltDTC_Bus
#  define Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUEnaFltDTC_Bus_tec_HvMgmt_MCUEnaFltDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_MCURdyFltDTCOne_Bus_tec_HvMgmt_MCURdyFltDTCOne_Bus Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFltDTCOne_Bus_tec_HvMgmt_MCURdyFltDTCOne_Bus
#  define Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFltDTCOne_Bus_tec_HvMgmt_MCURdyFltDTCOne_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_MCURdyFltDTCTwo_Bus_tec_HvMgmt_MCURdyFltDTCTwo_Bus Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFltDTCTwo_Bus_tec_HvMgmt_MCURdyFltDTCTwo_Bus
#  define Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFltDTCTwo_Bus_tec_HvMgmt_MCURdyFltDTCTwo_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_MCURdyFltDTC_Bus_tec_HvMgmt_MCURdyFltDTC_Bus Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFltDTC_Bus_tec_HvMgmt_MCURdyFltDTC_Bus
#  define Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFltDTC_Bus_tec_HvMgmt_MCURdyFltDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg
#  define Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg(data) (Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCURdyFlt_Flg_tec_HvMgmt_MCURdyFlt_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum
#  define Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum(data) (Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum
#  define Rte_Write_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum(data) (Rte_CtAp_MCUMgmt_RTE_P_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_MCUMgmt_START_SEC_CODE
# include "CtAp_MCUMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_MCUMgmt_Cyclic_20ms R_MCUMgmt_Cyclic_20ms
#  define RTE_RUNNABLE_R_MCUMgmt_Init R_MCUMgmt_Init
# endif

FUNC(void, CtAp_MCUMgmt_CODE) R_MCUMgmt_Cyclic_20ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_MCUMgmt_CODE) R_MCUMgmt_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_MCUMgmt_STOP_SEC_CODE
# include "CtAp_MCUMgmt_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_MCUMGMT_H */

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
