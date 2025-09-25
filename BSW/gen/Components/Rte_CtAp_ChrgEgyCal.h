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
 *             File:  Rte_CtAp_ChrgEgyCal.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ChrgEgyCal>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_CHRGEGYCAL_H
# define RTE_CTAP_CHRGEGYCAL_H

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

# include "Rte_CtAp_ChrgEgyCal_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore2_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChrMgmt_BattSideSngChrgEgy_kWh_tec_ChrMgmt_BattSideSngChrgEgy_kWh (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_DcChrgrSideSngChrgEgy_kWh_tec_ChrMgmt_DcChrgrSideSngChrgEgy_kWh (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_OBCSideSngChrgEgy_kWh_tec_ChrMgmt_OBCSideSngChrgEgy_kWh (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_PODSideSngChrgEgy_kWh_tec_ChrMgmt_PODSideSngChrgEgy_kWh (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A (0.0F)
#  define Rte_InitValue_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V (0.0F)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw (0.0F)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo(P2VAR(dt_Nv_ChrgEgyCalInfo, AUTOMATIC, RTE_CTAP_CHRGEGYCAL_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo(P2CONST(dt_Nv_ChrgEgyCalInfo, AUTOMATIC, RTE_CTAP_CHRGEGYCAL_APPL_DATA) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo Rte_Read_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_ChrgEgyCal_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw Rte_Read_CtAp_ChrgEgyCal_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw(data) (*(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw Rte_Read_CtAp_ChrgEgyCal_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw(data) (*(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw Rte_Read_CtAp_ChrgEgyCal_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw
#  define Rte_Read_CtAp_ChrgEgyCal_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw(data) (*(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChrMgmt_BattSideSngChrgEgy_kWh_tec_ChrMgmt_BattSideSngChrgEgy_kWh Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_BattSideSngChrgEgy_kWh_tec_ChrMgmt_BattSideSngChrgEgy_kWh
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_BattSideSngChrgEgy_kWh_tec_ChrMgmt_BattSideSngChrgEgy_kWh(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW(data) (Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_DcChrgrSideSngChrgEgy_kWh_tec_ChrMgmt_DcChrgrSideSngChrgEgy_kWh Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_DcChrgrSideSngChrgEgy_kWh_tec_ChrMgmt_DcChrgrSideSngChrgEgy_kWh
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_DcChrgrSideSngChrgEgy_kWh_tec_ChrMgmt_DcChrgrSideSngChrgEgy_kWh(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_OBCSideSngChrgEgy_kWh_tec_ChrMgmt_OBCSideSngChrgEgy_kWh Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngChrgEgy_kWh_tec_ChrMgmt_OBCSideSngChrgEgy_kWh
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngChrgEgy_kWh_tec_ChrMgmt_OBCSideSngChrgEgy_kWh(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh(data) (Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_PODSideSngChrgEgy_kWh_tec_ChrMgmt_PODSideSngChrgEgy_kWh Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_PODSideSngChrgEgy_kWh_tec_ChrMgmt_PODSideSngChrgEgy_kWh
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_PODSideSngChrgEgy_kWh_tec_ChrMgmt_PODSideSngChrgEgy_kWh(data) (RTE_E_OK)
#  define Rte_Write_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh(data) (Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(data) (Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A(data) (Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUCalcdPODInitIDc_A_tec_ChrMgmt_VCUCalcdPODInitIDc_A = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A(data) (Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V
#  define Rte_Write_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V(data) (Rte_CtAp_ChrgEgyCal_RTE_P_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo Rte_Write_CtAp_ChrgEgyCal_RTE_RP_ChrgEgyCalInfo_tec_ChrgEgyCalInfo


# endif /* !defined(RTE_CORE) */


# define CtAp_ChrgEgyCal_START_SEC_CODE
# include "CtAp_ChrgEgyCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ChrgEgyCal_Cyclic_50ms R_ChrgEgyCal_Cyclic_50ms
#  define RTE_RUNNABLE_R_ChrgEgyCal_Init R_ChrgEgyCal_Init
# endif

FUNC(void, CtAp_ChrgEgyCal_CODE) R_ChrgEgyCal_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ChrgEgyCal_CODE) R_ChrgEgyCal_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ChrgEgyCal_STOP_SEC_CODE
# include "CtAp_ChrgEgyCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_CHRGEGYCAL_H */

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
