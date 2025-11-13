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
 *             File:  Rte_CtAp_PdlAlys.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_PdlAlys>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_PDLALYS_H
# define RTE_CTAP_PDLALYS_H

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

# include "Rte_CtAp_PdlAlys_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_IoHwAb_SWC_IF_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo;
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_IoHwAb_SWC_IF_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo;
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_IoHwAb_SWC_IF_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV;
extern VAR(uint16, RTE_VAR_INIT_NOCACHE) Rte_IoHwAb_SWC_IF_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV;

#  define RTE_STOP_SEC_VAR_NOCACHE_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo (0.0F)
#  define Rte_InitValue_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg (FALSE)
#  define Rte_InitValue_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg (FALSE)
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
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo (0U)
#  define Rte_InitValue_RTE_R_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo (0U)
#  define Rte_InitValue_RTE_R_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV (0U)
#  define Rte_InitValue_RTE_R_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus(P2VAR(dt_ComM_IBSSts01CRCInfo, AUTOMATIC, RTE_CTAP_PDLALYS_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_IBSSts01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_PDLALYS_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg
#  define Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg
#  define Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg
#  define Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum
#  define Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg
#  define Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg
#  define Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus Rte_Read_CtAp_PdlAlys_RTE_R_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg Rte_Read_CtAp_PdlAlys_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg
#  define Rte_Read_CtAp_PdlAlys_RTE_R_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg(data) (*(data) = Rte_CtAp_ComMErr_RTE_P_ComM_NodComFailr_tec_ComM_CHIBSNodComFailr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_PdlAlys_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_PdlAlys_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo Rte_Read_CtAp_PdlAlys_RTE_R_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo
#  define Rte_Read_CtAp_PdlAlys_RTE_R_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo(data) (*(data) = Rte_IoHwAb_SWC_IF_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo Rte_Read_CtAp_PdlAlys_RTE_R_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo
#  define Rte_Read_CtAp_PdlAlys_RTE_R_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo(data) (*(data) = Rte_IoHwAb_SWC_IF_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV Rte_Read_CtAp_PdlAlys_RTE_R_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV
#  define Rte_Read_CtAp_PdlAlys_RTE_R_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV(data) (*(data) = Rte_IoHwAb_SWC_IF_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV Rte_Read_CtAp_PdlAlys_RTE_R_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV
#  define Rte_Read_CtAp_PdlAlys_RTE_R_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV(data) (*(data) = Rte_IoHwAb_SWC_IF_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_PdlAlys_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_PdlAlys_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo(data) (Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct(data) (Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlPosn_pct_tec_ChassisMgmt_AccrPedlPosn_pct = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(data) (Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1HiDTCInfo(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt1LoDTCInfo(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2HiDTCInfo(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo_tec_ChassisMgmt_AccrPedlSplyVolt2LoDTCInfo(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw1HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1HiDTC_Bus Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURaw1HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1HiDTC_Bus
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURaw1HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1HiDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw1LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1LoDTC_Bus Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURaw1LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1LoDTC_Bus
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURaw1LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw1LoDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw2HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2HiDTC_Bus Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURaw2HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2HiDTC_Bus
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURaw2HiDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2HiDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlURaw2LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2LoDTC_Bus Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURaw2LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2LoDTC_Bus
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURaw2LoDTC_Bus_tec_ChassisMgmt_AccrPedlURaw2LoDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlURawDifDTC_Bus_tec_ChassisMgmt_AccrPedlURawDifDTC_Bus Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURawDifDTC_Bus_tec_ChassisMgmt_AccrPedlURawDifDTC_Bus
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlURawDifDTC_Bus_tec_ChassisMgmt_AccrPedlURawDifDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg(data) (Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg(data) (Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_ErrResBrkPedlFlt_Flg_tec_ChassisMgmt_ErrResBrkPedlFlt_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg
#  define Rte_Write_CtAp_PdlAlys_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg(data) (Rte_CtAp_PdlAlys_RTE_P_ChassisMgmt_LimpHomeSts_Flg_tec_ChassisMgmt_LimpHomeSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum Rte_Write_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum
#  define Rte_Write_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(data) (Rte_CtAp_PdlAlys_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_PdlAlys_START_SEC_CODE
# include "CtAp_PdlAlys_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_PdlAlys_Cyclic_10ms R_PdlAlys_Cyclic_10ms
#  define RTE_RUNNABLE_R_PdlAlys_Init R_PdlAlys_Init
# endif

FUNC(void, CtAp_PdlAlys_CODE) R_PdlAlys_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_PdlAlys_CODE) R_PdlAlys_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_PdlAlys_STOP_SEC_CODE
# include "CtAp_PdlAlys_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_PDLALYS_H */

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
