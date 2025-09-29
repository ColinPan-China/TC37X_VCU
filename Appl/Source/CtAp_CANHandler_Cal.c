/*
 *************************************************************************
 *                                                                       *
 *                           ATOM GMBH                                   *
 *                        VCU SoftWare Team                              *
 *                                                                       *
 *                       All rights reserved                             *
 *                                                                       *
 *************************************************************************
 */
/*******************************************************************************
 *  FILE INFORMATION:
 *  Filename:           CtAp_CANHandler_Cal.c
 *  File Creation Date: 26-Feb-2025
 *  Model Name:         CtAp_CANHandler
 *  Model Version:      3.005
 *  Model Author:       JackyWang - Wed Feb 05 16:16:12 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : 2025 08/21
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - 2025 08/21
 *
 *
 *******************************************************************************/
#include "CtAp_CANHandler_Cal.h"
#include "rtwtypes.h"
#include "CtAp_CANHandler_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: VolatileConst_AtomAutoSar */
volatile const uint16_T CANHandler_ErrResACU01TimeoutDTCMatureTime_CFG = 500U;/*
                                                                      ACU01 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResACU02TimeoutDTCMatureTime_CFG = 500U;/*
                                                                      ACU02 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResACUInfoTimeoutDTCMatureTime_CFG = 500U;/*
                                                                      ACUInfo message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResACUInfoTimeoutMatureTime_CFG = 500U;/*
                                                                      ACUInfo message lost  mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResADCUACC02TimeoutDTCMatureTime_CFG =
  500U;                                /*
                                          ACU02 message lost the mature time of the DTC
                                        */
volatile const uint16_T CANHandler_ErrResADCUACC02TimeoutMatureTime_CFG = 500U;/*
                                                                      ADCUACC02 message lost  mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResADCUBodyReqTimeoutDTCMatureTime_CFG =
  1000U;                               /*
                                          ACUBody message lost the mature time of the DTC
                                        */
volatile const uint16_T CANHandler_ErrResAPTCTCUTimeoutDTCMatureTime_CFG = 1000U;/*
                                                                      APTCTCU message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResAPTCTCUTimeoutMatureTime_CFG = 1000U;/*
                                                                      APTCTCU message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResBCM05TimeoutDTCMatureTime_CFG = 2000U;/*
                                                                      BCM05 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResBCM06TimeoutDTCMatureTime_CFG = 1000U;/*
                                                                      BCM06 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResBCM06TimeoutMatureTime_CFG = 1000U;/*
                                                                      BCM06 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResBMSErrorInfoTimeoutMatureTime_CFG =
  2000U;                               /*
                                          BMSErrorInfo message lost mature time
                                        */
volatile const uint16_T CANHandler_ErrResBMSSts01TimeoutDTCMatureTime_CFG = 200U;/*
                                                                      BMSSts01 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResBMSSts02TimeoutDTCMatureTime_CFG = 500U;/*
                                                                      BMSSts02 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResBMSSts02TimeoutMatureTime_CFG = 500U;/*
                                                                      BMSSts02 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResCBM03TimeoutDTCMatureTime_CFG = 2000U;/*
                                                                      CBM03 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResCBM03TimeoutMatureTime_CFG = 2000U;/*
                                                                      CBM03 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResCGW01TimeoutDTCMatureTime_CFG = 1000U;/*
                                                                      CGW01 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResCGW01TimeoutMatureTime_CFG = 1000U;/*
                                                                      CGW01 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResDCMFL02TimeoutDTCMatureTime_CFG = 1000U;/*
                                                                      DCMFL02 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResDCMFL02TimeoutMatureTime_CFG = 1000U;/*
                                                                      DCMFL02 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResDCMFRTimeoutMatureTime_CFG = 1000U;/*
                                                                      DCM FR message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResDCMRLTimeoutMatureTime_CFG = 1000U;/*
                                                                      DCM RL message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResDCMRRTimeoutMatureTime_CFG = 1000U;/*
                                                                      DCM RR message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResEVCOMSts01TimeoutDTCMatureTime_CFG =
  1000U;                               /*
                                          ECCOMSts01 message lost the mature time of the DTC
                                        */
volatile const uint16_T CANHandler_ErrResEVCOMSts01TimeoutMatureTime_CFG = 1000U;/*
                                                                      ECCOMSts01 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSACCTimeoutMatureTime_CFG = 180U;/*
                                                                      IBSACC message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts01TimeoutDTCMatureTime_CFG = 180U;/*
                                                                      IBSSts01 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts01TimeoutMatureTime_CFG = 180U;/*
                                                                      IBSSts01 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts02TimeoutDTCMatureTime_CFG = 180U;/*
                                                                      IBSSts02 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts02TimeoutMatureTime_CFG = 180U;/*
                                                                      IBSSts02 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts03TimeoutDTCMatureTime_CFG = 180U;/*
                                                                      IBSSts03 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts03TimeoutMatureTime_CFG = 180U;/*
                                                                      IBSSts03 message lost  mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts04TimeoutDTCMatureTime_CFG = 180U;/*
                                                                      IBSSts04 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts04TimeoutMatureTime_CFG = 180U;/*
                                                                      IBSSts04 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts05TimeoutDTCMatureTime_CFG = 180U;/*
                                                                      IBSSts05 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts05TimeoutMatureTime_CFG = 180U;/*
                                                                      IBSSts05 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSSts06TimeoutDTCMatureTime_CFG = 500U;/*
                                                                      IBSSts06 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSTqTimeoutDTCMatureTime_CFG = 180U;/*
                                                                      IBSTq message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSTqTimeoutMatureTime_CFG = 180U;/*
                                                                      IBSTq message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResIBSVCUMotCtrlTimeoutDTCMatureTime_CFG =
  90U;                                 /*
                                          IBSVCUMotCtrl message lost the mature time of the DTC
                                        */
volatile const uint16_T CANHandler_ErrResIBSVCUMotCtrlTimeoutMatureTime_CFG =
  90U;                                 /*
                                          IBSVCUMotCtrl message lost mature time
                                        */
volatile const uint16_T CANHandler_ErrResIBSWhlSpd01TimeoutDTCMatureTime_CFG =
  500U;                                /*
                                          IBSWhlSpd01 message lost the mature time of the DTC
                                        */
volatile const uint16_T CANHandler_ErrResIBSWhlSpd02TimeoutDTCMatureTime_CFG =
  500U;                                /*
                                          IBSWhlSpd02 message lost the mature time of the DTC
                                        */
volatile const uint16_T CANHandler_ErrResIVI01TimeoutDTCMatureTime_CFG = 1000U;/*
                                                                      IVI01 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResIVI01TimeoutMatureTime_CFG = 1000U;/*
                                                                      IVI01 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResMCU01TimeoutDTCMatureTime_CFG = 90U;/*
                                                                      MCU01 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResMCU01TimeoutMatureTime_CFG = 90U;/*
                                                                      MCU01 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResMCUFailrCodTimeoutDTCMatureTime_CFG =
  1000U;                               /*
                                          MCUFailr message lost the mature time of the DTC
                                        */
volatile const uint16_T CANHandler_ErrResMCUFailrCodTimeoutMatureTime_CFG =
  1000U;                               /*
                                          MCUFailr message lost mature time
                                        */
volatile const uint16_T CANHandler_ErrResPODDCDC01TimeoutDTCMatureTime_CFG =
  1000U;                               /*
                                          PODDCDC01 message lost the mature time of the DTC
                                        */
volatile const uint16_T CANHandler_ErrResPODDCDC01TimeoutMatureTime_CFG = 1000U;/*
                                                                      PODDCDC01 message lostmature time
                                                                    */
volatile const uint16_T CANHandler_ErrResPODOBCChrgStatTimeoutDTCMatureTime_CFG =
  1000U;                               /*
                                          PODOBCChrg message lost the mature time of the DTC
                                        */
volatile const uint16_T CANHandler_ErrResPODOBCChrgStatTimeoutMatureTime_CFG =
  1000U;                               /*
                                          PODOBCChrg message lost mature time
                                        */
volatile const uint16_T CANHandler_ErrResPODSts01TimeoutMatureTime_CFG = 1000U;/*
                                                                      PODSts01 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResPRNDTimeoutDTCMatureTime_CFG = 1000U;/*
                                                                      PRND message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResPRNDTimeoutMatureTime_CFG = 1000U;/*
                                                                      PRND message lost  mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResSGWPT01TimeoutDTCMatureTime_CFG = 1000U;/*
                                                                      SGWPT01 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResSGWPT01TimeoutMatureTime_CFG = 1000U;/*
                                                                      SGWPT01 message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResSGWTimTimeoutDTCMatureTime_CFG = 1000U;/*
                                                                      SGWTim message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResSGWTimTimeoutMatureTime_CFG = 1000U;/*
                                                                      SGWTim message lost mature time
                                                                    */
volatile const uint16_T CANHandler_ErrResTCU01TimeoutDTCMatureTime_CFG = 1000U;/*
                                                                      TCU01 message lost the mature time of the DTC
                                                                    */
volatile const uint16_T CANHandler_ErrResTCU01TimeoutMatureTime_CFG = 1000U;/*
                                                                      TCU01 message lost  mature time
                                                                    */
volatile const uint16_T CANHandler_PNC14SpcTimeoutEnable_CFG = 21000U;/*
                                                                      ADCUBody message enable timeout
                                                                    */
volatile const uint16_T CANHandler_PODOBCChrgStatTimeoutSpcMatureTime_CFG =
  1000U;                               /*
                                          PODOBCChrg message special lost the mature time to Hv
                                        */
volatile const uint16_T CANHandler_WkpCfmPreEnaTim_CFG = 3000U;/*
                                                                  Wake up time for enable message lost confirm
                                                                */
volatile const uint16_T CANHandler_ErrResIBSSts05E2ETimeoutMatureTime_CFG = 180U;

volatile const uint16_T ComM_ErrResACU02TimeoutMatureTime_CFG = 500U;

volatile const uint8_T CANHandler_MaxDeltaCnt_CFG = 2U;
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
