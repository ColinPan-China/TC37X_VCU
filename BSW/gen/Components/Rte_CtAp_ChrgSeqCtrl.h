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
 *             File:  Rte_CtAp_ChrgSeqCtrl.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ChrgSeqCtrl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_CHRGSEQCTRL_H
# define RTE_CTAP_CHRGSEQCTRL_H

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

# include "Rte_CtAp_ChrgSeqCtrl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_DCFCMgmt_RTE_P_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGSEQCTRL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus(P2CONST(dt_DCChrMgmt_IRMeasDiErr, AUTOMATIC, RTE_CTAP_CHRGSEQCTRL_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus(P2CONST(dt_DCChrMgmt_IRMeasEnaErr, AUTOMATIC, RTE_CTAP_CHRGSEQCTRL_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgAllwd_Flg_tec_ChrMgmt_DcChrgAllwd_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum(data) (*(data) = Rte_CtAp_ChrgPreHeat_RTE_P_ChrMgmt_PreheatSts_Enum_tec_ChrMgmt_PreheatSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A(data) (*(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg(data) (*(data) = Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum(data) (*(data) = Rte_CtAp_DCFCMgmt_RTE_P_HvMgmt_DCFCWrkModActSts_Enum_tec_HvMgmt_DCFCWrkModActSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_ChrgSeqCtrl_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_IRMeasDiErrDTC_Bus_tec_DCChrMgmt_IRMeasDiErrDTC_Bus Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErrDTC_Bus_tec_DCChrMgmt_IRMeasDiErrDTC_Bus
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErrDTC_Bus_tec_DCChrMgmt_IRMeasDiErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasDiErr_Bus_tec_DCChrMgmt_IRMeasDiErr_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_IRMeasEnaErrDTC_Bus_tec_DCChrMgmt_IRMeasEnaErrDTC_Bus Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErrDTC_Bus_tec_DCChrMgmt_IRMeasEnaErrDTC_Bus
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErrDTC_Bus_tec_DCChrMgmt_IRMeasEnaErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasEnaErr_Bus_tec_DCChrMgmt_IRMeasEnaErr_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg
#  define Rte_Write_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg(data) (Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_ChrgSeqCtrl_START_SEC_CODE
# include "CtAp_ChrgSeqCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ChrgSeqCtrl_Cyclic_50ms R_ChrgSeqCtrl_Cyclic_50ms
#  define RTE_RUNNABLE_R_ChrgSeqCtrl_Init R_ChrgSeqCtrl_Init
# endif

FUNC(void, CtAp_ChrgSeqCtrl_CODE) R_ChrgSeqCtrl_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ChrgSeqCtrl_CODE) R_ChrgSeqCtrl_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
# include "CtAp_ChrgSeqCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_CHRGSEQCTRL_H */

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
