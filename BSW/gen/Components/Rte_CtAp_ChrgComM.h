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
 *             File:  Rte_CtAp_ChrgComM.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ChrgComM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_CHRGCOMM_H
# define RTE_CTAP_CHRGCOMM_H

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

# include "Rte_CtAp_ChrgComM_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum;
extern VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum;
extern VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum;
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
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg (FALSE)
#  define Rte_InitValue_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V (0.0F)
#  define Rte_InitValue_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C (0)
#  define Rte_InitValue_RTE_R_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C (0)
#  define Rte_InitValue_RTE_R_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum (0U)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg (FALSE)
#  define Rte_InitValue_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo (FALSE)
#  define Rte_InitValue_RTE_R_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg (FALSE)
#  define Rte_InitValue_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV (0U)
#  define Rte_InitValue_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg (FALSE)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus(P2VAR(dt_ComM_BMSErrInfoTimeoutInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus(P2VAR(dt_ComM_BMSSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus(P2VAR(dt_ComM_DCCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(P2VAR(dt_ComM_EPTCANBusOffInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgComM_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus(P2VAR(dt_ComM_PODSts01TimeoutInfo, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCCSTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCMLTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCRMPrepdTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCRMTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCROPrepdTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCROTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCSDTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus(P2CONST(dt_DCChrMgmt_BEMRxCSTTmt, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus(P2CONST(dt_DCChrMgmt_DcPortTempErrLvl1, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus(P2CONST(dt_DCChrMgmt_DcPortTempErrLvl2, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus(P2CONST(dt_DCChrMgmt_DcPortTempSnsrErr, AUTOMATIC, RTE_CTAP_CHRGCOMM_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_DcChrgCmplSts_Enum_tec_ChrMgmt_DcChrgCmplSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A Rte_Read_CtAp_ChrgComM_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(data) (*(data) = Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus Rte_Read_CtAp_ChrgComM_RTE_R_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus
#  define Rte_Read_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C Rte_Read_CtAp_ChrgComM_RTE_R_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C Rte_Read_CtAp_ChrgComM_RTE_R_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V Rte_Read_CtAp_ChrgComM_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus Rte_Read_CtAp_ChrgComM_RTE_R_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_DcChrgnSts_Enum_tec_DCChrMgmt_DcChrgnSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg(data) (*(data) = Rte_CtAp_ChrgSeqCtrl_RTE_P_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo Rte_Read_CtAp_ChrgComM_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo

#  define Rte_Read_CtAp_ChrgComM_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(data) (*(data) = FALSE, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg Rte_Read_CtAp_ChrgComM_RTE_R_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg(data) (*(data) = Rte_CtAp_HVSfty_RTE_P_ErrMgmt_VCUHVILErr_Flg_tec_ErrMgmt_VCUHVILErr_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV Rte_Read_CtAp_ChrgComM_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV

#  define Rte_Read_CtAp_ChrgComM_RTE_R_IOAbs_CC2SigUDc_mV_tec_IOAbs_CC2SigUDc_mV(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED))
#  define Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg Rte_Read_CtAp_ChrgComM_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg
#  define Rte_Read_CtAp_ChrgComM_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(data) (*(data) = Rte_CtAp_LvBattMgmt_RTE_P_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_Bus_tec_DCChrMgmt_BEMRxCCSTmtDTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_Bus_tec_DCChrMgmt_BEMRxCCSTmtDTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_Bus_tec_DCChrMgmt_BEMRxCCSTmtDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_Bus_tec_DCChrMgmt_BEMRxCMLTmtDTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_Bus_tec_DCChrMgmt_BEMRxCMLTmtDTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_Bus_tec_DCChrMgmt_BEMRxCMLTmtDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMTmtDTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMTmtDTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMTmtDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCROTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROTmtDTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROTmtDTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROTmtDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSDTmtDTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSDTmtDTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSDTmtDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSTTmtDTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSTTmtDTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSTTmtDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BEMTxReqSts_Enum_tec_DCChrMgmt_BEMTxReqSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTTxReqSts_tec_DCChrMgmt_BSTTxReqSts = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcChrgrCpbyPassd_Flg_tec_DCChrMgmt_DcChrgrCpbyPassd_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl1DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl1DTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl1DTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl1DTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl2DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl2DTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl2DTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl2DTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_DcPortTempSnsrErrDTC_Bus_tec_DCChrMgmt_DcPortTempSnsrErrDTC_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErrDTC_Bus_tec_DCChrMgmt_DcPortTempSnsrErrDTC_Bus
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErrDTC_Bus_tec_DCChrMgmt_DcPortTempSnsrErrDTC_Bus(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus
#  define Rte_Write_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V
#  define Rte_Write_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V(data) (Rte_CtAp_ChrgComM_RTE_P_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_ChrgComM_START_SEC_CODE
# include "CtAp_ChrgComM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ChrgComM_Cyclic_50ms R_ChrgComM_Cyclic_50ms
#  define RTE_RUNNABLE_R_ChrgComM_Init R_ChrgComM_Init
# endif

FUNC(void, CtAp_ChrgComM_CODE) R_ChrgComM_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ChrgComM_CODE) R_ChrgComM_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ChrgComM_STOP_SEC_CODE
# include "CtAp_ChrgComM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_CHRGCOMM_H */

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
