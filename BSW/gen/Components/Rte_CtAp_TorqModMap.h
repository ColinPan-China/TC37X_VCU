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
 *             File:  Rte_CtAp_TorqModMap.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <CtAp_TorqModMap>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_TORQMODMAP_H
# define RTE_CTAP_TORQMODMAP_H

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

# include "Rte_CtAp_TorqModMap_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm;
extern VAR(boolean, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum;
extern VAR(uint8, RTE_VAR_INIT) Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqCoor_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm;
extern VAR(float32, RTE_VAR_INIT) Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm;

#  define RTE_STOP_SEC_VAR_SystemApplication_OsCore1_INIT_UNSPECIFIED
#  include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq (FALSE)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg (FALSE)
#  define Rte_InitValue_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg (FALSE)
#  define Rte_InitValue_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum (0U)
#  define Rte_InitValue_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum (0U)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm (0.0F)
#  define Rte_InitValue_RTE_R_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm (0.0F)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus(P2VAR(dt_ComM_MCU01CRCInfo, AUTOMATIC, RTE_CTAP_TORQMODMAP_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus(P2VAR(dt_ComM_MCU01E2ETimeoutInfo, AUTOMATIC, RTE_CTAP_TORQMODMAP_APPL_VAR) data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus
#  define Rte_Read_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus
#  define Rte_Read_RTE_R_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg
#  define Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm
#  define Rte_Read_CtAp_TorqModMap_RTE_R_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(data) (*(data) = Rte_CtAp_CANHandler_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum Rte_Read_CtAp_TorqModMap_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum
#  define Rte_Read_CtAp_TorqModMap_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(data) (*(data) = Rte_CtAp_FctSftyGear_RTE_P_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum Rte_Read_CtAp_TorqModMap_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
#  define Rte_Read_CtAp_TorqModMap_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(data) (*(data) = Rte_CtAp_VehStat_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm Rte_Read_CtAp_TorqModMap_RTE_R_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm
#  define Rte_Read_CtAp_TorqModMap_RTE_R_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm(data) (*(data) = Rte_CtAp_TorqCoor_RTE_P_TorqPahMgmt_DesCoorrTq_Nm_tec_TorqPahMgmt_DesCoorrTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm Rte_Read_CtAp_TorqModMap_RTE_R_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm
#  define Rte_Read_CtAp_TorqModMap_RTE_R_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm(data) (*(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMaxTq_Nm_tec_TorqPahMgmt_EmacDynMaxTq_Nm, ((Std_ReturnType)RTE_E_OK))
#  define Rte_Read_RTE_R_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm Rte_Read_CtAp_TorqModMap_RTE_R_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm
#  define Rte_Read_CtAp_TorqModMap_RTE_R_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm(data) (*(data) = Rte_CtAp_TorqLmt_RTE_P_TorqPahMgmt_EmacDynMinTq_Nm_tec_TorqPahMgmt_EmacDynMinTq_Nm, ((Std_ReturnType)RTE_E_OK))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm
#  define Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm(data) (Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg
#  define Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg(data) (Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm
#  define Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm(data) (Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq
#  define Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq(data) (Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_TqLmtFltLampRq_tec_TorqPahMgmt_TqLmtFltLampRq = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg
#  define Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg(data) (Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg = (data), ((Std_ReturnType)RTE_E_OK))
#  define Rte_Write_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm
#  define Rte_Write_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm(data) (Rte_CtAp_TorqModMap_RTE_P_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm = (data), ((Std_ReturnType)RTE_E_OK))


# endif /* !defined(RTE_CORE) */


# define CtAp_TorqModMap_START_SEC_CODE
# include "CtAp_TorqModMap_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_R_TorqModMap_Cyclic_10ms R_TorqModMap_Cyclic_10ms
#  define RTE_RUNNABLE_R_TorqModMap_Init R_TorqModMap_Init
# endif

FUNC(void, CtAp_TorqModMap_CODE) R_TorqModMap_Cyclic_10ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, CtAp_TorqModMap_CODE) R_TorqModMap_Init(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define CtAp_TorqModMap_STOP_SEC_CODE
# include "CtAp_TorqModMap_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_TORQMODMAP_H */

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
