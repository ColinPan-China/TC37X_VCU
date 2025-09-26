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
 *             File:  Rte_CtAp_ChrgSdl.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_ChrgSdl>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_CHRGSDL_H
# define RTE_CTAP_CHRGSDL_H

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

# include "Rte_CtAp_ChrgSdl_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min;
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min;
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah;
extern VAR(uint16, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min;
extern VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C;
extern VAR(sint8, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_ChrgMod_RTE_P_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min (0U)
#  define Rte_InitValue_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum (0U)
#  define Rte_InitValue_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct (0U)
#  define Rte_InitValue_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah (0.0F)
#  define Rte_InitValue_RTE_R_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min (0U)
#  define Rte_InitValue_RTE_R_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C (0)
#  define Rte_InitValue_RTE_R_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C (0)
#  define Rte_InitValue_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A (0.0F)
#  define Rte_InitValue_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum (0U)
#  define Rte_InitValue_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw (0.0F)
#  define Rte_InitValue_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw (0.0F)
#  define Rte_InitValue_RTE_R_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A (0.0F)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum Rte_Read_CtAp_ChrgSdl_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct Rte_Read_CtAp_ChrgSdl_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct(data) (*(data) = Rte_CtAp_ChrgStat_RTE_P_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A(data) (*(data) = Rte_CtAp_DCComM_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum Rte_Read_CtAp_ChrgSdl_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum(data) (*(data) = Rte_CtAp_ChrgMod_RTE_P_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw Rte_Read_CtAp_ChrgSdl_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw(data) (*(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_ACSysPwrCnsCalcn_Kw_tec_EgyMgmt_ACSysPwrCnsCalcn_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw Rte_Read_CtAp_ChrgSdl_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw(data) (*(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_DCDCPwrCnsCalcn_Kw_tec_EgyMgmt_DCDCPwrCnsCalcn_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw Rte_Read_CtAp_ChrgSdl_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw(data) (*(data) = Rte_CtAp_CnsCalcn_RTE_P_EgyMgmt_PackPTCPwrCnsCalcn_Kw_tec_EgyMgmt_PackPTCPwrCnsCalcn_Kw, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A Rte_Read_CtAp_ChrgSdl_RTE_R_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A
#  define Rte_Read_CtAp_ChrgSdl_RTE_R_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A(data) (*(data) = Rte_CtAp_ACParMgmt_RTE_P_OBCMgmt_OBCOutpCpbyIDc_A_tec_OBCMgmt_OBCOutpCpbyIDc_A, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min Rte_Write_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min
#  define Rte_Write_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min(data) (Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min Rte_Write_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min
#  define Rte_Write_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min(data) (Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min Rte_Write_CtAp_ChrgSdl_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min
#  define Rte_Write_CtAp_ChrgSdl_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min(data) (Rte_CtAp_ChrgSdl_RTE_P_ChrMgmt_KeepWrmTim_min_tec_ChrMgmt_KeepWrmTim_min = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_ChrgSdl_START_SEC_CODE
# include "CtAp_ChrgSdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_ChrgSdl_Cyclic_50ms R_ChrgSdl_Cyclic_50ms
#  define RTE_RUNNABLE_R_ChrgSdl_Init R_ChrgSdl_Init
# endif

FUNC(void, CtAp_ChrgSdl_CODE) R_ChrgSdl_Cyclic_50ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_ChrgSdl_CODE) R_ChrgSdl_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_ChrgSdl_STOP_SEC_CODE
# include "CtAp_ChrgSdl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_CHRGSDL_H */

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
