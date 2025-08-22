/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: EcuM
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: EcuM_Generated_Types.h
 *   Generation Time: 2025-08-22 15:59:34
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

#if !defined(ECUM_GENERATEDTYPES_H)
#define ECUM_GENERATEDTYPES_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

# include "Rte_EcuM_Type.h"
# include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
/*! This type is a 32bit bitmask where each bit represents a wakeup source. */
 typedef uint32 EcuM_WakeupSourceType;
 
 

/* ------------------------------------- Symblic Name Defines for EcuM_WakeupSourceType ---------------------------- */
#define EcuMConf_EcuMWakeupSource_ECUM_WKSOURCE_POWER                          (0uL) 
#define EcuMConf_EcuMWakeupSource_ECUM_WKSOURCE_RESET                          (1uL) 
#define EcuMConf_EcuMWakeupSource_ECUM_WKSOURCE_INTERNAL_RESET                 (2uL) 
#define EcuMConf_EcuMWakeupSource_ECUM_WKSOURCE_INTERNAL_WDG                   (3uL) 
#define EcuMConf_EcuMWakeupSource_ECUM_WKSOURCE_EXTERNAL_WDG                   (4uL) 
#define EcuMConf_EcuMWakeupSource_CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac (5uL) 
#define EcuMConf_EcuMWakeupSource_CN_TC37X_VCU_CAN00_07b6c9c8                  (6uL) 
#define EcuMConf_EcuMWakeupSource_CN_TC37X_VCU_CAN01_70b1f95e                  (7uL) 
#define EcuMConf_EcuMWakeupSource_CN_TC37X_VCU_CAN03_9ebf9872                  (8uL) 
#define EcuMConf_EcuMWakeupSource_CN_TC37X_VCU_CAN12_f0a399a5                  (9uL) 
#define EcuMConf_EcuMWakeupSource_CN_LIN00_b12a0454                            (10uL) 
#define EcuMConf_EcuMWakeupSource_CN_LIN01_c62d34c2                            (11uL) 
#define EcuMConf_EcuMWakeupSource_CN_LIN02_5f246578                            (12uL) 

 
/* ------------------------------------- Range of EcuM_WakeupSourceType -------------------------------------------- */
#define ECUM_WKSOURCE_NONE                                         (EcuM_WakeupSourceType)(0x00000000uL) 
#define ECUM_WKSOURCE_ALL_SOURCES                                  (EcuM_WakeupSourceType)(~((EcuM_WakeupSourceType)0x00UL)) 
#define ECUM_WKSOURCE_POWER                                        (EcuM_WakeupSourceType)(1uL) 
#define ECUM_WKSOURCE_RESET                                        (EcuM_WakeupSourceType)(2uL) 
#define ECUM_WKSOURCE_INTERNAL_RESET                               (EcuM_WakeupSourceType)(4uL) 
#define ECUM_WKSOURCE_INTERNAL_WDG                                 (EcuM_WakeupSourceType)(8uL) 
#define ECUM_WKSOURCE_EXTERNAL_WDG                                 (EcuM_WakeupSourceType)(16uL) 
#define ECUM_WKSOURCE_CN_ATOM_CANFD_Matrix_CH_V600_202502_a4d436ac (EcuM_WakeupSourceType)(32uL) 
#define ECUM_WKSOURCE_CN_TC37X_VCU_CAN00_07b6c9c8                  (EcuM_WakeupSourceType)(64uL) 
#define ECUM_WKSOURCE_CN_TC37X_VCU_CAN01_70b1f95e                  (EcuM_WakeupSourceType)(128uL) 
#define ECUM_WKSOURCE_CN_TC37X_VCU_CAN03_9ebf9872                  (EcuM_WakeupSourceType)(256uL) 
#define ECUM_WKSOURCE_CN_TC37X_VCU_CAN12_f0a399a5                  (EcuM_WakeupSourceType)(512uL) 
#define ECUM_WKSOURCE_CN_LIN00_b12a0454                            (EcuM_WakeupSourceType)(1024uL) 
#define ECUM_WKSOURCE_CN_LIN01_c62d34c2                            (EcuM_WakeupSourceType)(2048uL) 
#define ECUM_WKSOURCE_CN_LIN02_5f246578                            (EcuM_WakeupSourceType)(4096uL) 



  /* ------------------------------------- Range of EcuM_StateType ------------------------------------------------- */
#define ECUM_SUBSTATE_MASK                                  (0x0Fu)
#define ECUM_STATE_STARTUP                                  (0x10u)
#define ECUM_STATE_STARTUP_ONE                              (0x11u)
#define ECUM_STATE_STARTUP_TWO                              (0x12u)
#define ECUM_STATE_WAKEUP                                   (0x20u)
#define ECUM_STATE_WAKEUP_ONE                               (0x21u)
#define ECUM_STATE_WAKEUP_VALIDATION                        (0x22u)
#define ECUM_STATE_WAKEUP_REACTION                          (0x23u)
#define ECUM_STATE_WAKEUP_TWO                               (0x24u)
#define ECUM_STATE_WAKEUP_WAKESLEEP                         (0x25u)
#define ECUM_STATE_WAKEUP_TTII                              (0x26u)
#define ECUM_STATE_RUN                                      (0x30u)
#define ECUM_STATE_APP_RUN                                  (0x32u)
#define ECUM_STATE_APP_POST_RUN                             (0x33u)
#define ECUM_STATE_SHUTDOWN                                 (0x40u)
#define ECUM_STATE_PREP_SHUTDOWN                            (0x44u)
#define ECUM_STATE_GO_SLEEP                                 (0x49u)
#define ECUM_STATE_GO_OFF_ONE                               (0x4Du)
#define ECUM_STATE_GO_OFF_TWO                               (0x4Eu)
/* State OFF, RESET AND SLEEP are defined by the RTE */
#define ECUM_STATE_ERROR                                    (0xFFu)


typedef uint8 EcuM_WakeupStateType;
/* ------------------------------------- Range of EcuM_WakeupStatusType -------------------------------------------- */
#define ECUM_WKSTATUS_NONE                                  (0u)
#define ECUM_WKSTATUS_PENDING                               (1u)
#define ECUM_WKSTATUS_VALIDATED                             (2u)
#define ECUM_WKSTATUS_EXPIRED                               (3u)

/* The following state was introduced by Vector to support asynchronous transceiver handling */
#define ECUM_WKSTATUS_CHECKWAKEUP                           (5u)
#define ECUM_WKSTATUS_ENABLED                               (6u)

/* ------------------------------------- Range of Alarm Clocks ----------------------------------------------------- */

/* ------------------------------------- Range of EcuM RunStatus Types --------------------------------------------- */
#define ECUM_RUNSTATUS_UNKNOWN                              (0u)
#define ECUM_RUNSTATUS_REQUESTED                            (1u)
#define ECUM_RUNSTATUS_RELEASED                             (2u)


typedef uint8 EcuM_RunStatusType;

typedef EcuM_ModeType EcuM_ResetType;

#endif /* ECUM_GENERATEDTYPES_H */
/**********************************************************************************************************************
 *  END OF FILE: ECUM_GENERATEDTYPES.H
 *********************************************************************************************************************/


