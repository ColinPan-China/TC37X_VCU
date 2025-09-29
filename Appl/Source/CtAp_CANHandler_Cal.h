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
 *  Filename:           CtAp_CANHandler_Cal.h
 *  File Creation Date: 26-Feb-2025
 *  Model Name:         CtAp_CANHandler
 *  Model Version:      3.004
 *  Model Author:       JackyWang - Wed Feb 05 16:16:12 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : 2025 07/31

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - 2025 07/02
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_CANHandler_Cal_h_
#define RTW_HEADER_CtAp_CANHandler_Cal_h_
#include "rtwtypes.h"

/* ConstVolatile memory section */
#define YDF_OVERLAY_START_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Exported data declaration */
/* Declaration for custom storage class: VolatileConst_AtomAutoSar */
extern volatile const uint16_T CANHandler_ErrResACU01TimeoutDTCMatureTime_CFG;

/*
   ACU01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResACU02TimeoutDTCMatureTime_CFG;

/*
   ACU02 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResACUInfoTimeoutDTCMatureTime_CFG;

/*
   ACUInfo message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResACUInfoTimeoutMatureTime_CFG;

/*
   ACUInfo message lost  mature time
 */
extern volatile const uint16_T
  CANHandler_ErrResADCUACC02TimeoutDTCMatureTime_CFG;

/*
   ACU02 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResADCUACC02TimeoutMatureTime_CFG;

/*
   ADCUACC02 message lost  mature time
 */
extern volatile const uint16_T
  CANHandler_ErrResADCUBodyReqTimeoutDTCMatureTime_CFG;

/*
   ACUBody message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResAPTCTCUTimeoutDTCMatureTime_CFG;

/*
   APTCTCU message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResAPTCTCUTimeoutMatureTime_CFG;

/*
   APTCTCU message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResBCM05TimeoutDTCMatureTime_CFG;

/*
   BCM05 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResBCM06TimeoutDTCMatureTime_CFG;

/*
   BCM06 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResBCM06TimeoutMatureTime_CFG;

/*
   BCM06 message lost mature time
 */
extern volatile const uint16_T
  CANHandler_ErrResBMSErrorInfoTimeoutMatureTime_CFG;

/*
   BMSErrorInfo message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResBMSSts01TimeoutDTCMatureTime_CFG;

/*
   BMSSts01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResBMSSts02TimeoutDTCMatureTime_CFG;

/*
   BMSSts02 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResBMSSts02TimeoutMatureTime_CFG;

/*
   BMSSts02 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResCBM03TimeoutDTCMatureTime_CFG;

/*
   CBM03 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResCBM03TimeoutMatureTime_CFG;

/*
   CBM03 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResCGW01TimeoutDTCMatureTime_CFG;

/*
   CGW01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResCGW01TimeoutMatureTime_CFG;

/*
   CGW01 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResDCMFL02TimeoutDTCMatureTime_CFG;

/*
   DCMFL02 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResDCMFL02TimeoutMatureTime_CFG;

/*
   DCMFL02 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResDCMFRTimeoutMatureTime_CFG;

/*
   DCM FR message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResDCMRLTimeoutMatureTime_CFG;

/*
   DCM RL message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResDCMRRTimeoutMatureTime_CFG;

/*
   DCM RR message lost mature time
 */
extern volatile const uint16_T
  CANHandler_ErrResEVCOMSts01TimeoutDTCMatureTime_CFG;

/*
   ECCOMSts01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResEVCOMSts01TimeoutMatureTime_CFG;

/*
   ECCOMSts01 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResIBSACCTimeoutMatureTime_CFG;

/*
   IBSACC message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts01TimeoutDTCMatureTime_CFG;

/*
   IBSSts01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts01TimeoutMatureTime_CFG;

/*
   IBSSts01 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts02TimeoutDTCMatureTime_CFG;

/*
   IBSSts02 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts02TimeoutMatureTime_CFG;

/*
   IBSSts02 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts03TimeoutDTCMatureTime_CFG;

/*
   IBSSts03 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts03TimeoutMatureTime_CFG;

/*
   IBSSts03 message lost  mature time
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts04TimeoutDTCMatureTime_CFG;

/*
   IBSSts04 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts04TimeoutMatureTime_CFG;

/*
   IBSSts04 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts05TimeoutDTCMatureTime_CFG;

/*
   IBSSts05 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts05TimeoutMatureTime_CFG;

/*
   IBSSts05 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResIBSSts06TimeoutDTCMatureTime_CFG;

/*
   IBSSts06 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResIBSTqTimeoutDTCMatureTime_CFG;

/*
   IBSTq message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResIBSTqTimeoutMatureTime_CFG;

/*
   IBSTq message lost mature time
 */
extern volatile const uint16_T
  CANHandler_ErrResIBSVCUMotCtrlTimeoutDTCMatureTime_CFG;

/*
   IBSVCUMotCtrl message lost the mature time of the DTC
 */
extern volatile const uint16_T
  CANHandler_ErrResIBSVCUMotCtrlTimeoutMatureTime_CFG;

/*
   IBSVCUMotCtrl message lost mature time
 */
extern volatile const uint16_T
  CANHandler_ErrResIBSWhlSpd01TimeoutDTCMatureTime_CFG;

/*
   IBSWhlSpd01 message lost the mature time of the DTC
 */
extern volatile const uint16_T
  CANHandler_ErrResIBSWhlSpd02TimeoutDTCMatureTime_CFG;

/*
   IBSWhlSpd02 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResIVI01TimeoutDTCMatureTime_CFG;

/*
   IVI01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResIVI01TimeoutMatureTime_CFG;

/*
   IVI01 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResMCU01TimeoutDTCMatureTime_CFG;

/*
   MCU01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResMCU01TimeoutMatureTime_CFG;

/*
   MCU01 message lost mature time
 */
extern volatile const uint16_T
  CANHandler_ErrResMCUFailrCodTimeoutDTCMatureTime_CFG;

/*
   MCUFailr message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResMCUFailrCodTimeoutMatureTime_CFG;

/*
   MCUFailr message lost mature time
 */
extern volatile const uint16_T
  CANHandler_ErrResPODDCDC01TimeoutDTCMatureTime_CFG;

/*
   PODDCDC01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResPODDCDC01TimeoutMatureTime_CFG;

/*
   PODDCDC01 message lostmature time
 */
extern volatile const uint16_T
  CANHandler_ErrResPODOBCChrgStatTimeoutDTCMatureTime_CFG;

/*
   PODOBCChrg message lost the mature time of the DTC
 */
extern volatile const uint16_T
  CANHandler_ErrResPODOBCChrgStatTimeoutMatureTime_CFG;

/*
   PODOBCChrg message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResPODSts01TimeoutMatureTime_CFG;

/*
   PODSts01 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResPRNDTimeoutDTCMatureTime_CFG;

/*
   PRND message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResPRNDTimeoutMatureTime_CFG;

/*
   PRND message lost  mature time
 */
extern volatile const uint16_T CANHandler_ErrResSGWPT01TimeoutDTCMatureTime_CFG;

/*
   SGWPT01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResSGWPT01TimeoutMatureTime_CFG;

/*
   SGWPT01 message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResSGWTimTimeoutDTCMatureTime_CFG;

/*
   SGWTim message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResSGWTimTimeoutMatureTime_CFG;

/*
   SGWTim message lost mature time
 */
extern volatile const uint16_T CANHandler_ErrResTCU01TimeoutDTCMatureTime_CFG;

/*
   TCU01 message lost the mature time of the DTC
 */
extern volatile const uint16_T CANHandler_ErrResTCU01TimeoutMatureTime_CFG;

/*
   TCU01 message lost  mature time
 */
extern volatile const uint16_T CANHandler_PNC14SpcTimeoutEnable_CFG;

/*
   ADCUBody message enable timeout
 */
extern volatile const uint16_T CANHandler_PODOBCChrgStatTimeoutSpcMatureTime_CFG;

/*
   PODOBCChrg message special lost the mature time to Hv
 */
extern volatile const uint16_T CANHandler_WkpCfmPreEnaTim_CFG;

/*
   Wake up time for enable message lost confirm
 */
 extern volatile const uint16_T CANHandler_ErrResIBSSts05E2ETimeoutMatureTime_CFG;
 
 extern volatile const uint16_T ComM_ErrResACU02TimeoutMatureTime_CFG;

 extern volatile const uint8_T CANHandler_MaxDeltaCnt_CFG;
#define YDF_OVERLAY_STOP_SEC_VAR_CONST_8
#include "YDF_Overlay_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */
#endif                                 /* RTW_HEADER_CtAp_CANHandler_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
