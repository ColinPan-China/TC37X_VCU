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
 *  Filename:           CtAp_CANHandler.h
 *  File Creation Date: 26-Feb-2025
 *  Model Name:         CtAp_CANHandler
 *  Model Version:      3.004
 *  Model Author:       JackyWang - Wed Feb 05 16:16:12 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : 2025 07/31
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - 2025 07/02
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_CANHandler_h_
#define RTW_HEADER_CtAp_CANHandler_h_
#ifndef CtAp_CANHandler_COMMON_INCLUDES_
#define CtAp_CANHandler_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_CANHandler.h"
#endif                                 /* CtAp_CANHandler_COMMON_INCLUDES_ */

#include "CtAp_CANHandler_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */

#include "CtAp_CANHandler_Cal.h"
#include "CtAp_CANHandler_Fuc.h"
/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define CANHandler_CRCWRONG            2U                        
#define CANHandler_Cycle100ms          100U                    
#define CANHandler_Cycle10ms           10U                      
#define CANHandler_Cycle200ms          200U                    
#define CANHandler_Cycle20ms           20U                      
#define CANHandler_Cycle50ms           50U                       
#define CANHandler_DriveReady          3U                       
#define CANHandler_False               false                     
#define CANHandler_MAXDELTAcounterINIT 1U                        
#define CANHandler_NE2EERROR_10        10U                       
#define CANHandler_NE2EERROR_3         3U                        
#define CANHandler_NE2EERROR_9         9U                        
#define CANHandler_NoReq               0U                        
#define CANHandler_OK                  0U                        
#define CANHandler_Offest_0            0.0F                     
#define CANHandler_Offest_Minus100     -100.0F    
#define CANHandler_Offest_Minus7     -7.0F               
#define CANHandler_Offest_Minus1000    -1000.0F                  
#define CANHandler_Offest_Minus1023    -1023.0F                  
#define CANHandler_Offest_Minus1024    -1024.0F                  
#define CANHandler_Offest_Minus20000   -20000.0F                 
#define CANHandler_Offest_Minus25d5    -25.5F                    
#define CANHandler_Offest_Minus300     -300.0F                  
#define CANHandler_Offest_Minus32767   -32767.0F                 
#define CANHandler_Offest_Minus40      -40.0F                   
#define CANHandler_Offest_Minus400     -400.0F                   
#define CANHandler_Offest_Minus49d05   -49.05F                   
#define CANHandler_Offest_Minus5       -5.0F   
#define CANHandler_Offest_Minus250     -250.0F                    
#define CANHandler_Offest_Minus500     -500.0F  
#define CANHandler_Offest_Minus800     -800.0F            
#define CANHandler_Offest_Minus8191    -819.1F   
#define CANHandler_Offest_Minus8d192    -8.192F  
#define CANHandler_Offest_Minus50    -50.0F                                 
#define CANHandler_Resolution_0001     0.001F                    
#define CANHandler_Resolution_001      0.01F                     
#define CANHandler_Resolution_004      0.04F                    
#define CANHandler_Resolution_005      0.05F                     
#define CANHandler_Resolution_005625   0.05625F                 
#define CANHandler_Resolution_01       0.1F                     
#define CANHandler_Resolution_0125     0.125F    
#define CANHandler_Resolution_0126     0.126F                 
#define CANHandler_Resolution_02       0.2F                      
#define CANHandler_Resolution_025      0.25F                    
#define CANHandler_Resolution_0392157  0.392157F                
#define CANHandler_Resolution_05       0.5F                      
#define CANHandler_Resolution_1        1.0F                      
#define CANHandler_Resolution_200      200.0F                    
#define CANHandler_Resolution_40       40.0F                    
#define CANHandler_ThreeTimes          3U                       
#define CANHandler_True                true                      
#define CANHandler_U16Zero             0U                       
#define CANHandler_u8Zero              0U                        
#define CANHandler_Resolution_04       0.4F  
#define CANHandler_CntOne              1U  
#define CANHandler_MaxCntThree         3U  
#define CANHandler_Resolution_000390625         0.00390625F 
#define CANHandler_Resolution_00625         0.0625F 
#define CANHandler_Resolution_0015625         0.015625F 
#define CANHandler_Offest_Minus2048        -2048.0F 
#define CANHandler_Offest_Minus780        -780.0F 

typedef struct 
{
  CE_Delay_Cnt_TYPE tec_ComM_CBMSysRdyReq_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_GearPBtn_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_GearRNDBtn_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIReqElectcLock_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIChrgCmd_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIDrvModSet_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIFwdVehSpdAllwd_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIMaxChrgSOCSet_pct_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIMinDchaSOCSet_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIEnaBrkCmpMod_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIRgnLvlSet_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_IVIGearReq_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_SGWChrgCmd_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_SGWMaxChrgSOCSet_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_tec_ComM_SGWMinDchaSOCSet_Enum_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_SGWSysRdyReq_CE_Delay;
  CE_Delay_Cnt_TYPE tec_ComM_SGWDchaSwtSts_CE_Delay;

} CE_Inner_Delay;

typedef struct {
	uint8_T tec_ComM_IVIChrgCmd_Enum_Event_Delay;
	uint8_T tec_ComM_IVIReqElectcLock_Enum_Event_Delay;
	uint8_T tec_ComM_IVIDchaCmd_Enum_Event_Delay;
	uint8_T tec_ComM_SGWChrgCmd_Enum_Event_Delay;

}Event_Inner_Delay;

typedef struct {
	boolean_T ComM_ErrResBMSSts01CRCErrorInfo;
	uint8_T ComM_MonResBMSSts01CRCErrorInfo;
	uint8_T ComM_ErrStatBMSSts01CRCErrorInfo;
	
	boolean_T ComM_ErrResSGW16TimeoutInfo;
	uint8_T ComM_MonResSGW16TimeoutInfo;
	uint8_T ComM_ErrStatSGW16TimeoutInfo;
	
	boolean_T ComM_ErrResBMSSts01TimeoutInfo;
	uint8_T ComM_MonResBMSSts01TimeoutInfo;
	uint8_T ComM_ErrStatBMSSts01TimeoutInfo;
	
	boolean_T ComM_ErrResBMSSts01TimeoutDTCErrorInfo;
	uint8_T ComM_MonResBMSSts01TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatBMSSts01TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResBMSSts01CRCDTCErrorInfo;
	uint8_T ComM_MonResBMSSts01CRCDTCErrorInfo;
	uint8_T ComM_ErrStatBMSSts01CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResBMSSts02TimeoutInfo;
	uint8_T ComM_MonResBMSSts02TimeoutInfo;
	uint8_T ComM_ErrStatBMSSts02TimeoutInfo;
	
	boolean_T ComM_ErrResBMSSts02TimeoutDTCErrorInfo;
	uint8_T ComM_MonResBMSSts02TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatBMSSts02TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResADCUACC02TimeoutInfo;
	uint8_T ComM_MonResADCUACC02TimeoutInfo;
	uint8_T ComM_ErrStatADCUACC02TimeoutInfo;
	
	boolean_T ComM_ErrResADCUACC02TimeoutDTCErrorInfo;
	uint8_T ComM_MonResADCUACC02TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatADCUACC02TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResADCUACC02CRCDTCErrorInfo;
	uint8_T ComM_MonResADCUACC02CRCDTCErrorInfo;
	uint8_T ComM_ErrStatADCUACC02CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResACUInfoTimeoutInfo;
	uint8_T ComM_MonResACUInfoTimeoutInfo;
	uint8_T ComM_ErrStatACUInfoTimeoutInfo;
	
	boolean_T ComM_ErrResACUInfoTimeoutDTCErrorInfo;
	uint8_T ComM_MonResACUInfoTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatACUInfoTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResMCU01E2ETimeoutInfo;
	uint8_T ComM_MonResMCU01E2ETimeoutInfo;
	uint8_T ComM_ErrStatMCU01E2ETimeoutInfo;

	boolean_T ComM_ErrResMCU01CRCErrorInfo;
	uint8_T ComM_MonResMCU01CRCErrorInfo;
	uint8_T ComM_ErrStatMCU01CRCErrorInfo;

	boolean_T ComM_ErrResMCU01TimeoutInfo;
	uint8_T ComM_MonResMCU01TimeoutInfo;
	uint8_T ComM_ErrStatMCU01TimeoutInfo;

	boolean_T ComM_ErrResMCU01TimeoutDTCErrorInfo;
	uint8_T ComM_MonResMCU01TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatMCU01TimeoutDTCErrorInfo;

	boolean_T ComM_ErrResMCU01CRCDTCErrorInfo;
	uint8_T ComM_MonResMCU01CRCDTCErrorInfo;
	uint8_T ComM_ErrStatMCU01CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSVCUMotCtrlE2ETimeoutInfo;
	uint8_T ComM_MonResIBSVCUMotCtrlE2ETimeoutInfo;
	uint8_T ComM_ErrStatIBSVCUMotCtrlE2ETimeoutInfo;

	boolean_T ComM_ErrResIBSVCUMotCtrlCRCErrorInfo;
	uint8_T ComM_MonResIBSVCUMotCtrlCRCErrorInfo;
	uint8_T ComM_ErrStatIBSVCUMotCtrlCRCErrorInfo;

	boolean_T ComM_ErrResIBSVCUMotCtrlCRCDTCErrorInfo;
	uint8_T ComM_MonResIBSVCUMotCtrlCRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSVCUMotCtrlCRCDTCErrorInfo;

	boolean_T ComM_ErrResIBSVCUMotCtrlTimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSVCUMotCtrlTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSVCUMotCtrlTimeoutDTCErrorInfo;

	boolean_T ComM_ErrResIBSVCUMotCtrlTimeoutInfo;
	uint8_T ComM_MonResIBSVCUMotCtrlTimeoutInfo;
	uint8_T ComM_ErrStatIBSVCUMotCtrlTimeoutInfo;
	
	boolean_T ComM_ErrResBMSSts01E2ETimeoutInfo;
	uint8_T ComM_MonResBMSSts01E2ETimeoutInfo;
	uint8_T ComM_ErrStatBMSSts01E2ETimeoutInfo;
	
	boolean_T ComM_ErrResPRNDCRCDTCErrorInfo;
	uint8_T ComM_MonResPRNDCRCDTCErrorInfo;
	uint8_T ComM_ErrStatPRNDCRCDTCErrorInfo;
	
	boolean_T ComM_ErrResPRNDTimeoutDTCErrorInfo;
	uint8_T ComM_MonResPRNDTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatPRNDTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResPRNDTimeoutInfo;
	uint8_T ComM_MonResPRNDTimeoutInfo;
	uint8_T ComM_ErrStatPRNDTimeoutInfo;
	
	boolean_T ComM_ErrResPRNDCRCErrorInfo;
	uint8_T ComM_MonResPRNDCRCErrorInfo;
	uint8_T ComM_ErrStatPRNDCRCErrorInfo;
	
	boolean_T ComM_ErrResPRNDE2ETimeoutInfo;
	uint8_T ComM_MonResPRNDE2ETimeoutInfo;
	uint8_T ComM_ErrStatPRNDE2ETimeoutInfo;
	
	boolean_T ComM_ErrResIBSSts02CRCDTCErrorInfo;
	uint8_T ComM_MonResIBSSts02CRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts02CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts02TimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSSts02TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts02TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts02CRCErrorInfo;
	uint8_T ComM_MonResIBSSts02CRCErrorInfo;
	uint8_T ComM_ErrStatIBSSts02CRCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts02E2ETimeoutInfo;
	uint8_T ComM_MonResIBSSts02E2ETimeoutInfo;
	uint8_T ComM_ErrStatIBSSts02E2ETimeoutInfo;
	
	boolean_T ComM_ErrResIBSSts03CRCDTCErrorInfo;
	uint8_T ComM_MonResIBSSts03CRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts03CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts03TimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSSts03TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts03TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts03CRCErrorInfo;
	uint8_T ComM_MonResIBSSts03CRCErrorInfo;
	uint8_T ComM_ErrStatIBSSts03CRCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts03E2ETimeoutInfo;
	uint8_T ComM_MonResIBSSts03E2ETimeoutInfo;
	uint8_T ComM_ErrStatIBSSts03E2ETimeoutInfo;
	
	boolean_T ComM_ErrResIBSSts05CRCDTCErrorInfo;
	uint8_T ComM_MonResIBSSts05CRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts05CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts05TimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSSts05TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts05TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts05TimeoutInfo;
	uint8_T ComM_MonResIBSSts05TimeoutInfo;
	uint8_T ComM_ErrStatIBSSts05TimeoutInfo;
	
	boolean_T ComM_ErrResIBSTqCRCDTCErrorInfo;
	uint8_T ComM_MonResIBSTqCRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSTqCRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSTqTimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSTqTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSTqTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSTqCRCErrorInfo;
	uint8_T ComM_MonResIBSTqCRCErrorInfo;
	uint8_T ComM_ErrStatIBSTqCRCErrorInfo;
	
	boolean_T ComM_ErrResIBSTqE2ETimeoutInfo;
	uint8_T ComM_MonResIBSTqE2ETimeoutInfo;
	uint8_T ComM_ErrStatIBSTqE2ETimeoutInfo;
	
	boolean_T ComM_ErrResIBSSts06CRCDTCErrorInfo;
	uint8_T ComM_MonResIBSSts06CRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts06CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts06TimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSSts06TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts06TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts01CRCDTCErrorInfo;
	uint8_T ComM_MonResIBSSts01CRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts01CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts01TimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSSts01TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts01TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts01CRCErrorInfo;
	uint8_T ComM_MonResIBSSts01CRCErrorInfo;
	uint8_T ComM_ErrStatIBSSts01CRCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts01E2ETimeoutInfo;
	uint8_T ComM_MonResIBSSts01E2ETimeoutInfo;
	uint8_T ComM_ErrStatIBSSts01E2ETimeoutInfo;
	
	boolean_T ComM_ErrResIBSWhlSpd01CRCDTCErrorInfo;
	uint8_T ComM_MonResIBSWhlSpd01CRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSWhlSpd01CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSWhlSpd01TimeoutInfo;
	uint8_T ComM_MonResIBSWhlSpd01TimeoutInfo;
	uint8_T ComM_ErrStatIBSWhlSpd01TimeoutInfo;
	
	boolean_T ComM_ErrResIBSWhlSpd02CRCDTCErrorInfo;
	uint8_T ComM_MonResIBSWhlSpd02CRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSWhlSpd02CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSWhlSpd02TimeoutInfo;
	uint8_T ComM_MonResIBSWhlSpd02TimeoutInfo;
	uint8_T ComM_ErrStatIBSWhlSpd02TimeoutInfo;
	
	boolean_T ComM_ErrResIBSACCCRCDTCErrorInfo;
	uint8_T ComM_MonResIBSACCCRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSACCCRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSACCTimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSACCTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSACCTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSACCCRCErrorInfo;
	uint8_T ComM_MonResIBSACCCRCErrorInfo;
	uint8_T ComM_ErrStatIBSACCCRCErrorInfo;
	
	boolean_T ComM_ErrResIBSACCE2ETimeoutInfo;
	uint8_T ComM_MonResIBSACCE2ETimeoutInfo;
	uint8_T ComM_ErrStatIBSACCE2ETimeoutInfo;
	
	boolean_T ComM_ErrResACU02CRCDTCErrorInfo;
	uint8_T ComM_MonResACU02CRCDTCErrorInfo;
	uint8_T ComM_ErrStatACU02CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResACU02TimeoutDTCInfo;
	uint8_T ComM_MonResACU02TimeoutDTCInfo;
	uint8_T ComM_ErrStatACU02TimeoutDTCInfo;
	
	boolean_T ComM_ErrResDCMFRTimeoutInfo;
	uint8_T ComM_MonResDCMFRTimeoutInfo;
	uint8_T ComM_ErrStatDCMFRTimeoutInfo;
	
	boolean_T ComM_ErrResDCMRLTimeoutInfo;
	uint8_T ComM_MonResDCMRLTimeoutInfo;
	uint8_T ComM_ErrStatDCMRLTimeoutInfo;
	
	boolean_T ComM_ErrResDCMRRTimeoutInfo;
	uint8_T ComM_MonResDCMRRTimeoutInfo;
	uint8_T ComM_ErrStatDCMRRTimeoutInfo;
	
	boolean_T ComM_ErrResACU01CRCDTCErrorInfo;
	uint8_T ComM_MonResACU01CRCDTCErrorInfo;
	uint8_T ComM_ErrStatACU01CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResACU01TimeoutDTCInfo;
	uint8_T ComM_MonResACU01TimeoutDTCInfo;
	uint8_T ComM_ErrStatACU01TimeoutDTCInfo;
	
	boolean_T ComM_ErrResIBSSts04CRCDTCErrorInfo;
	uint8_T ComM_MonResIBSSts04CRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts04CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts04TimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSSts04TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSSts04TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts04CRCErrorInfo;
	uint8_T ComM_MonResIBSSts04CRCErrorInfo;
	uint8_T ComM_ErrStatIBSSts04CRCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts04E2ETimeoutInfo;
	uint8_T ComM_MonResIBSSts04E2ETimeoutInfo;
	uint8_T ComM_ErrStatIBSSts04E2ETimeoutInfo;
	
	boolean_T ComM_ErrResADCUBodyReqCRCDTCErrorInfo;
	uint8_T ComM_MonResADCUBodyReqCRCDTCErrorInfo;
	uint8_T ComM_ErrStatADCUBodyReqCRCDTCErrorInfo;
	
	boolean_T ComM_ErrResADCUBodyReqTimeoutDTCErrorInfo;
	uint8_T ComM_MonResADCUBodyReqTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatADCUBodyReqTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResAPTCTCUTimeoutDTCErrorInfo;
	uint8_T ComM_MonResAPTCTCUTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatAPTCTCUTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResAPTCTCUTimeoutInfo;
	uint8_T ComM_MonResAPTCTCUTimeoutInfo;
	uint8_T ComM_ErrStatAPTCTCUTimeoutInfo;
	
	boolean_T ComM_ErrResBCM06CRCDTCErrorInfo;
	uint8_T ComM_MonResBCM06CRCDTCErrorInfo;
	uint8_T ComM_ErrStatBCM06CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResBCM06TimeoutDTCErrorInfo;
	uint8_T ComM_MonResBCM06TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatBCM06TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResBCM06TimeoutInfo;
	uint8_T ComM_MonResBCM06TimeoutInfo;
	uint8_T ComM_ErrStatBCM06TimeoutInfo;
	
	boolean_T ComM_ErrResPODDCDC01TimeoutDTCErrorInfo;
	uint8_T ComM_MonResPODDCDC01TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatPODDCDC01TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResPODDCDC01TimeoutInfo;
	uint8_T ComM_MonResPODDCDC01TimeoutInfo;
	uint8_T ComM_ErrStatPODDCDC01TimeoutInfo;
	
	boolean_T ComM_ErrResPODSts01TimeoutInfo;
	uint8_T ComM_MonResPODSts01TimeoutInfo;
	uint8_T ComM_ErrStatPODSts01TimeoutInfo;
	
	boolean_T ComM_ErrResPODOBCChrgStatTimeoutInfo;
	uint8_T ComM_MonResPODOBCChrgStatTimeoutInfo;
	uint8_T ComM_ErrStatPODOBCChrgStatTimeoutInfo;
	
	boolean_T ComM_ErrResPODOBCChrgStatTimeoutDTCErrorInfo;
	uint8_T ComM_MonResPODOBCChrgStatTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatPODOBCChrgStatTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResEVCOMSts01TimeoutDTCErrorInfo;
	uint8_T ComM_MonResEVCOMSts01TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatEVCOMSts01TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResEVCOMSts01TimeoutInfo;
	uint8_T ComM_MonResEVCOMSts01TimeoutInfo;
	uint8_T ComM_ErrStatEVCOMSts01TimeoutInfo;
	
	boolean_T ComM_ErrResMCUFailrCodCRCDTCErrorInfo;
	uint8_T ComM_MonResMCUFailrCodCRCDTCErrorInfo;
	uint8_T ComM_ErrStatMCUFailrCodCRCDTCErrorInfo;
	
	boolean_T ComM_ErrResMCUFailrCodTimeoutDTCErrorInfo;
	uint8_T ComM_MonResMCUFailrCodTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatMCUFailrCodTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResMCUFailrCodCRCErrorInfo;
	uint8_T ComM_MonResMCUFailrCodCRCErrorInfo;
	uint8_T ComM_ErrStatMCUFailrCodCRCErrorInfo;
	
	boolean_T ComM_ErrResMCUFailrCodE2ETimeoutInfo;
	uint8_T ComM_MonResMCUFailrCodE2ETimeoutInfo;
	uint8_T ComM_ErrStatMCUFailrCodE2ETimeoutInfo;
	
	boolean_T ComM_ErrResTCU01TimeoutDTCErrorInfo;
	uint8_T ComM_MonResTCU01TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatTCU01TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResTCU01TimeoutInfo;
	uint8_T ComM_MonResTCU01TimeoutInfo;
	uint8_T ComM_ErrStatTCU01TimeoutInfo;
	
	boolean_T ComM_ErrResCGW01TimeoutDTCErrorInfo;
	uint8_T ComM_MonResCGW01TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatCGW01TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResCGW01TimeoutInfo;
	uint8_T ComM_MonResCGW01TimeoutInfo;
	uint8_T ComM_ErrStatCGW01TimeoutInfo;
	
	boolean_T ComM_ErrResSGWTimTimeoutDTCErrorInfo;
	uint8_T ComM_MonResSGWTimTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatSGWTimTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResSGWTimTimeoutInfo;
	uint8_T ComM_MonResSGWTimTimeoutInfo;
	uint8_T ComM_ErrStatSGWTimTimeoutInfo;
	
	boolean_T ComM_ErrResDCMFL02CRCDTCErrorInfo;
	uint8_T ComM_MonResDCMFL02CRCDTCErrorInfo;
	uint8_T ComM_ErrStatDCMFL02CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResDCMFL02TimeoutDTCErrorInfo;
	uint8_T ComM_MonResDCMFL02TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatDCMFL02TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResDCMFL02TimeoutInfo;
	uint8_T ComM_MonResDCMFL02TimeoutInfo;
	uint8_T ComM_ErrStatDCMFL02TimeoutInfo;
	
	boolean_T ComM_ErrResBMSErrInfoTimeoutInfo;
	uint8_T ComM_MonResBMSErrInfoTimeoutInfo;
	uint8_T ComM_ErrStatBMSErrInfoTimeoutInfo;
	
	boolean_T ComM_ErrResBCM05CRCDTCErrorInfo;
	uint8_T ComM_MonResBCM05CRCDTCErrorInfo;
	uint8_T ComM_ErrStatBCM05CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResBCM05TimeoutDTCErrorInfo;
	uint8_T ComM_MonResBCM05TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatBCM05TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResSGW17TimeoutInfo;
	uint8_T ComM_MonResSGW17TimeoutInfo;
	uint8_T ComM_ErrStatSGW17TimeoutInfo;
	
	boolean_T ComM_ErrResIBSAPSCRCDTCErrorInfo;
	uint8_T ComM_MonResIBSAPSCRCDTCErrorInfo;
	uint8_T ComM_ErrStatIBSAPSCRCDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSAPSTimeoutDTCErrorInfo;
	uint8_T ComM_MonResIBSAPSTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatIBSAPSTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResACUInfoCRCDTCErrorInfo;
	uint8_T ComM_MonResACUInfoCRCDTCErrorInfo;
	uint8_T ComM_ErrStatACUInfoCRCDTCErrorInfo;
	
	boolean_T ComM_ErrResADCUAEB01CRCDTCErrorInfo;
	uint8_T ComM_MonResADCUAEB01CRCDTCErrorInfo;
	uint8_T ComM_ErrStatADCUAEB01CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResADCUAEB01TimeoutDTCErrorInfo;
	uint8_T ComM_MonResADCUAEB01TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatADCUAEB01TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResADCUAPS01CRCDTCErrorInfo;
	uint8_T ComM_MonResADCUAPS01CRCDTCErrorInfo;
	uint8_T ComM_ErrStatADCUAPS01CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResADCUAPS01TimeoutDTCErrorInfo;
	uint8_T ComM_MonResADCUAPS01TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatADCUAPS01TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResADCUDACRCDTCErrorInfo;
	uint8_T ComM_MonResADCUDACRCDTCErrorInfo;
	uint8_T ComM_ErrStatADCUDACRCDTCErrorInfo;
	
	boolean_T ComM_ErrResADCUDATimeoutDTCErrorInfo;
	uint8_T ComM_MonResADCUDATimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatADCUDATimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResSGW16TimeoutDTCErrorInfo;
	uint8_T ComM_MonResSGW16TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatSGW16CTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResCGW01ACRCDTCErrorInfo;
	uint8_T ComM_MonResCGW01CRCDTCErrorInfo;
	uint8_T ComM_ErrStatCGW01CRCDTCErrorInfo;
	
	boolean_T ComM_ErrResDCMFRTimeoutDTCErrorInfo;
	uint8_T ComM_MonResDCMFRTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatDCMFRTimeoutDTCErrorInfo;

	boolean_T ComM_ErrResDCMRLTimeoutDTCErrorInfo;
	uint8_T ComM_MonResDCMRLTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatDCMRLTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResDCMRRTimeoutDTCErrorInfo;
	uint8_T ComM_MonResDCMRRTimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatDCMRRTimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResSGW17TimeoutDTCErrorInfo;
	uint8_T ComM_MonResSGW17TimeoutDTCErrorInfo;
	uint8_T ComM_ErrStatSGW17TimeoutDTCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts05CRCErrorInfo;
	uint8_T ComM_MonResIBSSts05CRCErrorInfo;
	uint8_T ComM_ErrStatIBSSts05CRCErrorInfo;
	
	boolean_T ComM_ErrResIBSSts05E2ETimeoutInfo;
	uint8_T ComM_MonResIBSSts05E2ETimeoutInfo;
	uint8_T ComM_ErrStatIBSSts05E2ETimeoutInfo;
	
	boolean_T ComM_ErrResACU02TimeoutInfo;
	uint8_T ComM_MonResACU02TimeoutInfo;
	uint8_T ComM_ErrStatACU02TimeoutInfo;
	
	ARID_DEF_E2ECfm_CtAp_CANHandl_T ACUInfoTimeoutDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSVCUMotorCRCDTCE2ECfmInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSVCUMotorCRCE2ECfmInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T MCU01CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T MCU01CRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T BMSSts01CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T BMSSts01CRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T PRNDCRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T PRNDCRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts02CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts02CRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts03CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts03CRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts05CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts05CRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSTqCRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSTqCRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts06CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts01CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts01CRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSWhlSpd01CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSWhlSpd02CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSACCCRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSACCCRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T ACU02CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T ACU01CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts04CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T ADCUBodyReqCRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T BCM06CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T MCUFailrCodCRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T MCUFailrCodCRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T DCMFL02CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T BCM05CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T ADCUACC02CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSSts04CRCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T IBSAPSCRCDTCE2ECfmInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T ACUInfoCRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T ADCUAEB01CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T ADCUAPS01CRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T ADCUDACRCDTCErrorInteral;
	ARID_DEF_E2ECfm_CtAp_CANHandl_T CGW01CRCDTCErrorInteral;
	

	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle10msEPTDTCEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle10msCHDTCEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle10msCOMLostEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle20msEPTDTCEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle20msCHDTCEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle20msCOMLostEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle100msEPTDTCEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle100msCHDTCEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle100msCOMLostEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle200msEPTDTCEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle200msCHDTCEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T Cycle200msCOMLostEnbInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T ADCU_ACC_PNCEnableInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T ADCU_Body_req_PNCEnableInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T OBCLostSpcTimeCntInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T ADCU_AEB_01_PNCEnableInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T ADCU_APS_01_PNCEnableInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T ADCU_DA_PNCEnableInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T PRNDRes20msInteral;
	ARID_DEF_ATOM_TimeCnt_CtAp_CA_T PRNDRes100msInteral;
	
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSTqCRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSVCUMotCtrlCRCDTC_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSVCUMotCtrlTimeoutDTC_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSVCUMotCtrlTimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSVCUMotCtrlCRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSVCUMotCtrlE2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T MCU01CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T MCU01TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T MCU01Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T MCU01CRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T MCU01E2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ACUInfoTimeout_U16ErrorHandInteral;	
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUACC02CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUACC02TimeoutDTCError_U16ErrorHandInteral;	
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUACC02Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BMSSts02TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BMSSts02Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BMSSts01CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BMSSts01TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BMSSts01Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BMSSts01CRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BMSSts01E2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PRNDCRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PRNDTimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PRNDTimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PRNDCRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PRNDE2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts02CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts02TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts02CRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts02E2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts03CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts03TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts03CRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts05CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts05TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts05Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSTqTimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSTqCRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSTqE2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts06CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts06TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts01CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts01TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts01CRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts01E2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSWhlSpd01CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSWhlSpd01Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSWhlSpd02CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSWhlSpd02Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSACCCRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSACCTimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSACCCRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSACCE2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ACU02CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ACU02TimeoutDTC_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T DCMFRTimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T DCMRLTimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ACU01CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ACU01TimeoutDTC_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts04CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts04TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts04CRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts04E2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUBodyReqCRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUBodyReqTimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T APTCTCUTimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T APTCTCUTimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BCM06CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BCM06TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BCM06Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PODDCDC01TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PODDCDC01Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PODSts01Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PODOBCChrgStatTimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T PODOBCChrgStatTimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T EVCOMSts01Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T MCUFailrCodCRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T MCUFailrCodTimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T MCUFailrCodCRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T MCUFailrCodE2ETimeou_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T TCU01TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T TCU01Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T CGW01TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T CGW01Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T SGWTimTimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T SGWTimTimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T DCMFL02CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T DCMFL02TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T DCMFL02Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BMSErrInfoTimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BCM05CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T BCM05TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts03E2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T DCMRRTimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T EVCOMSts01TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T SGW16Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T SGW17Timeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSAPSCRCDTC_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSAPSTimeoutDTC_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ACUInfoCRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUAEB01CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUAEB01TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUAPS01CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUAPS01TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUDACRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ADCUDATimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T SGW16TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T CGW01CRCDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T DCMFRTimeoutDTC_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T DCMRLTimeoutDTC_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T DCMRRTimeoutDTC_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T SGW17TimeoutDTCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts05CRCError_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T IBSSts05E2ETimeout_U16ErrorHandInteral;
	ARID_DEF_ATOM_U16Err_CtAp_CAN_T ACU02Timeout_U16ErrorHandInteral;
	
	dt_ComM_IBSVCUMotCtrlE2ETimeoutInfo RTE_P_ComM_IBSVCUMotCtrlMs_onta;
	dt_ComM_IBSVCUMotCtrlTimeoutInfo RTE_P_ComM_IBSVCUMotCtrlMs_o1qk;
	dt_ComM_IBSVCUMotCtrlCRCInfo RTE_P_ComM_IBSVCUMotCtrlMs_amte;
	dt_ComM_IBSVCUMotCtrlCRCDTCInfo RTE_P_ComM_IBSVCUMotCtrlMsgErrI;
	dt_ComM_IBSVCUMotCtrlTimeoutDTCInfo RTE_P_ComM_IBSVCUMotCtrlMs_mrkf;
	dt_ComM_MCU01CRCDTCInfo RTE_P_ComM_MCU01MsgErrInfo_Bus_;
  dt_ComM_MCU01TimeoutDTCInfo RTE_P_ComM_MCU01MsgErrInfo_fde0;
	dt_ComM_MCU01TimeoutInfo RTE_P_ComM_MCU01MsgErrInfo_enhb;
  dt_ComM_MCU01CRCInfo RTE_P_ComM_MCU01MsgErrInfo_klfk;
	dt_ComM_MCU01E2ETimeoutInfo RTE_P_ComM_MCU01MsgErrInfo_agz5;
	dt_ComM_ACUInfoTimeoutDTCInfo RTE_P_ComM_ACUInfoMsgErrInfo_Bu;
	dt_ComM_ACUInfoTimeoutInfo RTE_P_ComM_ACUInfoMsgErrIn_hgri;
	dt_ComM_ADCUACC02CRCDTCInfo RTE_P_ComM_ADCUACC02MsgErrInfo_;
	dt_ComM_ADCUACC02TimeoutDTCInfo RTE_P_ComM_ADCUACC02MsgErr_hyh1;
	dt_ComM_ADCUACC02TimeoutInfo RTE_P_ComM_ADCUACC02MsgErr_adxb;
	dt_ComM_BMSSts02TimeoutDTCInfo RTE_P_ComM_BMSSts02MsgErrInfo_B;
	dt_ComM_BMSSts02TimeoutInfo RTE_P_ComM_BMSSts02MsgErrI_bt3n;
  dt_ComM_BMSSts01CRCDTCInfo RTE_P_ComM_BMSSts01ErrInfo_Bus_;
	dt_ComM_BMSSts01TimeoutDTCInfo RTE_P_ComM_BMSSts01ErrInfo_i4f2;
	dt_ComM_BMSSts01TimeoutInfo RTE_P_ComM_BMSSts01ErrInfo_e1la;
	dt_ComM_BMSSts01CRCInfo RTE_P_ComM_BMSSts01ErrInfo_jfqj;
	dt_ComM_BMSSts01E2ETimeoutInfo RTE_P_ComM_BMSSts01ErrInfo_fx1a;
	dt_ComM_PRNDCRCDTCInfo RTE_P_ComM_PRNDMsgErrInfo_Bus_t;
	dt_ComM_PRNDTimeoutDTCInfo RTE_P_ComM_PRNDMsgErrInfo__mtcd;
	dt_ComM_PRNDTimeoutInfo RTE_P_ComM_PRNDMsgErrInfo__afq3;
	dt_ComM_PRNDCRCInfo RTE_P_ComM_PRNDMsgErrInfo__cadt;
	dt_ComM_PRNDE2ETimeoutInfo RTE_P_ComM_PRNDMsgErrInfo__d333;
	dt_ComM_IBSSts02CRCDTCInfo RTE_P_ComM_IBSSts02MsgErrInfo_B;
	dt_ComM_IBSSts02TimeoutDTCInfo RTE_P_ComM_IBSSts02MsgErrI_mjqn;
	dt_ComM_IBSSts02CRCInfo RTE_P_ComM_IBSSts02MsgErrI_md5j;
	dt_ComM_IBSSts02E2ETimeoutInfo RTE_P_ComM_IBSSts02MsgErrI_g5ji;
	dt_ComM_IBSSts03CRCDTCInfo RTE_P_ComM_IBSSts03MsgErrInfo_B;
	dt_ComM_IBSSts03TimeoutDTCInfo RTE_P_ComM_IBSSts03MsgErrI_nfe5;
	dt_ComM_IBSSts03CRCInfo RTE_P_ComM_IBSSts03MsgErrI_pcua;
	dt_ComM_IBSSts03E2ETimeoutInfo RTE_P_ComM_IBSSts03MsgErrI_kbvu;
	dt_ComM_IBSSts05CRCDTCInfo RTE_P_ComM_IBSSts05MsgErrInfo_B;
	dt_ComM_IBSSts05TimeoutDTCInfo RTE_P_ComM_IBSSts05MsgErrI_d4oo;
	dt_ComM_IBSSts05TimeoutInfo RTE_P_ComM_IBSSts05MsgErrI_bpyo;
	dt_ComM_IBSTqCRCDTCInfo RTE_P_ComM_IBSTqMsgErrInfo_Bus_;
	dt_ComM_IBSTqTimeoutDTCInfo RTE_P_ComM_IBSTqMsgErrInfo_lcqz;
	dt_ComM_IBSTqCRCInfo RTE_P_ComM_IBSTqMsgErrInfo_cn5e;
	dt_ComM_IBSTqE2ETimeoutInfo RTE_P_ComM_IBSTqMsgErrInfo_coib;
	dt_ComM_IBSSts06CRCDTCInfo RTE_P_ComM_IBSSts06MsgErrInfo_B;
	dt_ComM_IBSSts06TimeoutDTCInfo RTE_P_ComM_IBSSts06MsgErrI_nozs;
	dt_ComM_IBSSts01CRCDTCInfo RTE_P_ComM_IBSSts01MsgErrInfo_B;
	dt_ComM_IBSSts01TimeoutDTCInfo RTE_P_ComM_IBSSts01MsgErrI_cm20;
	dt_ComM_IBSSts01CRCInfo RTE_P_ComM_IBSSts01MsgErrI_goau;
	dt_ComM_IBSSts01E2ETimeoutInfo RTE_P_ComM_IBSSts01MsgErrI_o0z2;
	dt_ComM_IBSWhlSpd01CRCDTCInfo RTE_P_ComM_IBSWhlSpd01MsgErrInf;
	dt_ComM_IBSWhlSpd01TimeoutInfo RTE_P_ComM_IBSWhlSpd01MsgE_cfok;
	dt_ComM_IBSWhlSpd02CRCDTCInfo RTE_P_ComM_IBSWhlSpd02MsgErrInf;
	dt_ComM_IBSWhlSpd02TimeoutInfo RTE_P_ComM_IBSWhlSpd02MsgE_gukf;
	dt_ComM_IBSACCCRCDTCInfo RTE_P_ComM_IBSACCMsgErrInfo_Bus;
	dt_ComM_IBSACCTimeoutDTCInfo RTE_P_ComM_IBSACCMsgErrInf_o22i;
	dt_ComM_IBSACCCRCInfo RTE_P_ComM_IBSACCMsgErrInf_ci2x;
	dt_ComM_IBSACCE2ETimeoutInfo RTE_P_ComM_IBSACCMsgErrInf_fpgz;
	dt_ComM_ACU02CRCDTCInfo RTE_P_ComM_ACU02MsgErrInfo_Bus_;
	dt_ComM_ACU02TimeoutDTCInfo RTE_P_ComM_ACU02MsgErrInfo_gomr;
    dt_ComM_DCMFRTimeoutInfo RTE_P_ComM_DCMFRMsgErrInfo_Bus_;
	dt_ComM_DCMRLTimeoutInfo RTE_P_ComM_DCMRLMsgErrInfo_Bus_;
	dt_ComM_DCMRRTimeoutInfo RTE_P_ComM_DCMRRMsgErrInfo_Bus_;
	dt_ComM_ACU01CRCDTCInfo RTE_P_ComM_ACU01MsgErrInfo_Bus_;
	dt_ComM_ACU01TimeoutDTCInfo RTE_P_ComM_ACU01MsgErrInfo_fe3s;
	dt_ComM_IBSSts04CRCDTCInfo RTE_P_ComM_IBSSts04MsgErrInfo_B;
	dt_ComM_IBSSts04TimeoutDTCInfo RTE_P_ComM_IBSSts04MsgErrI_d1b4;
	dt_ComM_IBSSts04CRCInfo RTE_P_ComM_IBSSts04MsgErrI_fhw5;
	dt_ComM_IBSSts04E2ETimeoutInfo RTE_P_ComM_IBSSts04MsgErrI_oiec;
	dt_ComM_ADCUBodyReqCRCDTCInfo RTE_P_ComM_ADCUBodyReqMsgErrInf;
	dt_ComM_ADCUBodyReqTimeoutDTCInfo RTE_P_ComM_ADCUBodyReqMsgE_gwdi;
	dt_ComM_APTCTCUTimeoutDTCInfo RTE_P_ComM_APTCTCUMsgErrInfo_Bu;
	dt_ComM_APTCTCUTimeoutInfo RTE_P_ComM_APTCTCUMsgErrIn_cwsc;
	dt_ComM_BCM06CRCDTCInfo RTE_P_ComM_BCM06MsgErrInfo_Bus_;
	dt_ComM_BCM06TimeoutDTCInfo RTE_P_ComM_BCM06MsgErrInfo_omfw;
	dt_ComM_BCM06TimeoutInfo RTE_P_ComM_BCM06MsgErrInfo_b42o;
	dt_ComM_PODDCDC01TimeoutDTCInfo RTE_P_ComM_PODDCDC01MsgErrInfo_;
    dt_ComM_PODDCDC01TimeoutInfo RTE_P_ComM_PODDCDC01MsgErr_oyy5;
	dt_ComM_PODSts01TimeoutInfo RTE_P_ComM_PODSts01TimeoutInfo_;
	dt_ComM_PODOBCChrgStatTimeoutDTCInfo RTE_P_ComM_PODOBCChrgStatMsgErr;
	dt_ComM_PODOBCChrgStatTimeoutInfo RTE_P_ComM_PODOBCChrgStatM_ntca;
	dt_ComM_EVCOMSts01TimeoutInfo RTE_P_ComM_EVCOMSts01MsgEr_jej5;
	dt_ComM_MCUFailrCodCRCDTCInfo RTE_P_ComM_MCUFailrCodMsgErrInf;
    dt_ComM_MCUFailrCodTimeoutDTCInfo RTE_P_ComM_MCUFailrCodMsgE_pql1;
	dt_ComM_MCUFailrCodCRCInfo RTE_P_ComM_MCUFailrCodMsgE_nik3;
	dt_ComM_MCUFailrCodE2ETimeoutInfo RTE_P_ComM_MCUFailrCodMsgE_gtlf;
	dt_ComM_TCU01TimeoutDTCInfo RTE_P_ComM_TCU01MsgErrInfo_Bus_;
	dt_ComM_TCU01TimeoutInfo RTE_P_ComM_TCU01MsgErrInfo_nukt;
	dt_ComM_CGW01TimeoutDTCInfo RTE_P_ComM_CGW01MsgErrInfo_Bus_;
	dt_ComM_CGW01TimeoutInfo RTE_P_ComM_CGW01MsgErrInfo_abqy;
	dt_ComM_SGWTimTimeoutDTCInfo RTE_P_ComM_SGWTimMsgErrInfo_Bus;
	dt_ComM_SGWTimTimeoutInfo RTE_P_ComM_SGWTimMsgErrInf_f0p5;
	dt_ComM_DCMFL02CRCDTCInfo RTE_P_ComM_DCMFL02MsgErrInfo_Bu;
	dt_ComM_DCMFL02TimeoutDTCInfo RTE_P_ComM_DCMFL02MsgErrIn_cgd3;
	dt_ComM_DCMFL02TimeoutInfo RTE_P_ComM_DCMFL02MsgErrIn_mmhj;
	dt_ComM_BMSErrInfoTimeoutInfo RTE_P_ComM_BMSErrInfoTimeoutInf;
	dt_ComM_BCM05CRCDTCInfo RTE_P_ComM_BCM05MsgErrInfo_Bus_;
	dt_ComM_BCM05TimeoutDTCInfo RTE_P_ComM_BCM05MsgErrInfo_jojc;
	dt_ComM_EVCOMSts01TimeoutDTCInfo RTE_P_ComM_EVCOMSts01MsgErrInfo;
	dt_ComM_SGW16TimeoutInfo RTE_P_ComM_SGW16MsgErrIn_cwsc;
	dt_ComM_SGW17TimeoutInfo RTE_P_ComM_SGW17MsgErrInfo_Bus_;
	dt_ComM_IBSAPSCRCDTCInfo RTE_P_ComM_IBSAPSMsgErrI;
	dt_ComM_IBSAPSTimeoutDTCInfo RTE_P_ComM_IBSAPSMs_mrkf;
	dt_ComM_ACUInfoCRCDTCInfo RTE_P_ComM_ACUInfoMsgErrInfo_CRCDTC;
	dt_ComM_ADCUAEB01CRCDTCInfo RTE_P_ComM_ADCUAEB01MsgErrInfo_;
	dt_ComM_ADCUAEB01TimeoutDTCInfo RTE_P_ComM_ADCUAEB01MsgErr_hyh1;
	dt_ComM_ADCUAPS01TimeoutDTCInfo RTE_P_ComM_ADCUAPS01MsgErr_hyh1;
	dt_ComM_ADCUAPS01CRCDTCInfo RTE_P_ComM_ADCUAPS01MsgErrInfo_;
	dt_ComM_ADCUDATimeoutDTCInfo RTE_P_ComM_ADCUDAMsgErr_hyh1;
	dt_ComM_ADCUDACRCDTCInfo RTE_P_ComM_ADCUDAMsgErrInfo_;
	dt_ComM_SGW16TimeoutDTCInfo RTE_P_ComM_SGW16MsgE_gwdi;
	dt_ComM_CGW01CRCDTCInfo RTE_P_ComM_CGW01MsgErrInf;
	dt_ComM_DCMFRTimeoutDTCInfo RTE_P_ComM_DCMFRMsgErrInfo_fe3s;
	dt_ComM_DCMRLTimeoutDTCInfo RTE_P_ComM_DCMRLMsgErrInfo_fe3s;
	dt_ComM_DCMRRTimeoutDTCInfo RTE_P_ComM_DCMRRMsgErrInfo_fe3s;
	dt_ComM_SGW17TimeoutDTCInfo RTE_P_ComM_SGW17MsgErr_hyh1;
	dt_ComM_IBSSts05CRCInfo RTE_P_ComM_IBSSts05MsgErrI_pcua;
	dt_ComM_IBSSts05E2ETimeoutInfo RTE_P_ComM_IBSSts05MsgErrI_kbvu;
	dt_ComM_ACU02TimeoutInfo RTE_P_ComM_ACU02MsgErrInfo_Time;

	boolean_T CGW01CRCDTCErrorFail;
    boolean_T CGW01CRCDTCErrorPass;
	boolean_T ADCUDACRCDTCErrorFail;
    boolean_T ADCUDACRCDTCErrorPass;
	boolean_T ADCUAPS01CRCDTCErrorFail;
    boolean_T ADCUAPS01CRCDTCErrorPass;	
	boolean_T ADCUAEB01CRCDTCErrorFail;
    boolean_T ADCUAEB01CRCDTCErrorPass;	
	boolean_T ACUInfoCRCDTCErrorFail;
    boolean_T ACUInfoCRCDTCErrorPass;
	boolean_T IBSAPSCRCDTCErrorFail;
    boolean_T IBSAPSCRCDTCErrorPass;
    boolean_T BCM05CRCDTCErrorFail;
    boolean_T BCM05CRCDTCErrorPass;
    boolean_T DCMFL02CRCDTCErrorFail;
    boolean_T DCMFL02CRCDTCErrorPass;	
    boolean_T MCUFailrCodCRCErrorFail;
    boolean_T MCUFailrCodCRCErrorPass;
    boolean_T MCUFailrCodCRCDTCErrorFail;
    boolean_T MCUFailrCodCRCDTCErrorPass;		
    boolean_T BCM06CRCDTCErrorFail;
    boolean_T BCM06CRCDTCErrorPass;	
    boolean_T ADCUBodyReqCRCDTCErrorFail;
    boolean_T ADCUBodyReqCRCDTCErrorPass;
    boolean_T IBSSts04CRCErrorFail;
    boolean_T IBSSts04CRCErrorPass;
    boolean_T IBSSts04CRCDTCErrorFail;
    boolean_T IBSSts04CRCDTCErrorPass;
    boolean_T ACU01CRCDTCErrorFail;
    boolean_T ACU01CRCDTCErrorPass;	
    boolean_T ACU02CRCDTCErrorFail;
    boolean_T ACU02CRCDTCErrorPass;
    boolean_T IBSACCCRCErrorFail;
    boolean_T IBSACCCRCErrorPass;
    boolean_T IBSACCCRCDTCErrorFail;
    boolean_T IBSACCCRCDTCErrorPass;
    boolean_T IBSWhlSpd02CRCDTCErrorFail;
    boolean_T IBSWhlSpd02CRCDTCErrorPass;
    boolean_T IBSWhlSpd01CRCDTCErrorFail;
    boolean_T IBSWhlSpd01CRCDTCErrorPass;
    boolean_T IBSSts01CRCErrorFail;
    boolean_T IBSSts01CRCErrorPass;
    boolean_T IBSSts01CRCDTCErrorFail;
    boolean_T IBSSts01CRCDTCErrorPass;	
    boolean_T IBSSts06CRCDTCErrorFail;
    boolean_T IBSSts06CRCDTCErrorPass;
    boolean_T IBSTqCRCErrorFail;
    boolean_T IBSTqCRCErrorPass;
    boolean_T IBSTqCRCDTCErrorFail;
    boolean_T IBSTqCRCDTCErrorPass;
    boolean_T IBSSts05CRCDTCErrorFail;
    boolean_T IBSSts05CRCDTCErrorPass;
    boolean_T IBSSts03CRCErrorFail;
    boolean_T IBSSts03CRCErrorPass;
    boolean_T IBSSts03CRCDTCErrorFail;
    boolean_T IBSSts03CRCDTCErrorPass;
    boolean_T IBSSts02CRCErrorFail;
    boolean_T IBSSts02CRCErrorPass;
    boolean_T IBSSts02CRCDTCErrorFail;
    boolean_T IBSSts02CRCDTCErrorPass;	
    boolean_T PRNDCRCErrorFail;
    boolean_T PRNDCRCErrorPass;
    boolean_T PRNDCRCDTCErrorFail;
    boolean_T PRNDCRCDTCErrorPass;
    boolean_T BMSSts01CRCDTCErrorFail;
    boolean_T BMSSts01CRCDTCErrorPass;	
    boolean_T IBSVCUMotorCRCDTCE2EFail;
    boolean_T IBSVCUMotorCRCDTCE2EPass;	
    boolean_T IBSVCUMotCtrlCRCFail;
    boolean_T IBSVCUMotCtrlCRCPass;
    boolean_T MCU01CRCDTCErrorFail;
    boolean_T MCU01CRCDTCErrorPass;
    boolean_T MCU01CRCErrorFail;
    boolean_T MCU01CRCErrorPass;
    boolean_T ADCUACC02CRCDTCErrorFail;
    boolean_T ADCUACC02CRCDTCErrorPass;
    boolean_T BMSSts01CRCErrorFail;
    boolean_T BMSSts01CRCErrorPass;
	boolean_T OBCLostSpc;
	boolean_T IBSSts05CRCErrorFail;
    boolean_T IBSSts05CRCErrorPass;
} ARID_DEF_CtAp_CANHandler_T;

typedef struct
{
  uint8_T BMSSts01_UpdateCnt;
  uint8_T PODOBCSts03_UpdateCnt;
  uint8_T PODDCDC02_UpdateCnt;
  uint8_T MCUFailCode_UpdateCnt;
  uint8_T TCU01_UpdateCnt;
  uint8_T ACUInfo_UpdateCnt;
} UpdateInnerCntStruct;



extern UpdateInnerCntStruct UpdateInnerCnt;

extern CE_Inner_Delay CtAp_CANHandler_DelayStruct;
extern ARID_DEF_CtAp_CANHandler_T CtAp_CANHandler_ARID_DEF;
extern Event_Inner_Delay CtAp_CANHandler_EventDelayStruct;
/* Exported data declaration */

/*if not init use it */
#define CtAp_CANHandler_START_SEC_VAR_NOINIT_8
#include "CtAp_CANHandler_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern SG_ACU_01_SigGroup ACU_01_SigGroup;
extern SG_ACU_02_SigGroup ACU_02_SigGroup;
extern SG_ACU_Info_SigGroup ACU_info_SigGroup;
extern SG_ADCU_ACC_02_SigGroup ADCU_ACC_02_SigGroup;
extern SG_ADCU_Body_req_SigGroup ADCU_Body_req_SigGroup;
extern SG_BCM_05_SigGroup BCM_05_SigGroup;
extern SG_BCM_06_SigGroup BCM_06_SigGroup;
extern SG_BMS_ErrorInfo_SigGroup BMS_ErrorInfo_SigGroup;/* '<S4>/SignalCopy1' */
extern SG_BMS_status_01_SigGroup BMS_status_01_SigGroup;
extern SG_CGW_01_SigGroup CGW_01_SigGroup;/* '<S21>/SignalCopy2' */
extern SG_DCM_FL_02_SigGroup DCM_FL_02_SigGroup;
extern SG_DCM_FR_SigGroup DCM_FR_SigGroup;/* '<S5>/SignalCopy17' */
extern SG_DCM_RL_SigGroup DCM_RL_SigGroup;
extern SG_DCM_RR_SigGroup DCM_RR_SigGroup;
extern SG_IBS_ACC_SigGroup IBS_ACC_SigGroup;
extern SG_IBS_APS_SigGroup IBS_APS_SigGroup;
extern SG_IBS_Status_01_SigGroup IBS_Status_01_SigGroup;
extern SG_IBS_Status_02_SigGroup IBS_Status_02_SigGroup;
extern SG_IBS_Status_03_SigGroup IBS_Status_03_SigGroup;
extern SG_IBS_Status_04_SigGroup IBS_Status_04_SigGroup;
extern SG_IBS_Status_05_SigGroup IBS_Status_05_SigGroup;
extern SG_IBS_Status_06_SigGroup IBS_Status_06_SigGroup;
extern SG_IBS_Torque_SigGroup IBS_Torque_SigGroup;
extern SG_IBS_VCU_MotorControl_SigGroup IBS_VCU_MotorControl_SigGroup;
extern SG_IBS_WheelSpeed_01_SigGroup IBS_WheelSpeed_01_SigGroup;
extern SG_IBS_WheelSpeed_02_SigGroup IBS_WheelSpeed_02_SigGroup;
extern SG_IVI_01_SigGroup IVI_01_SigGroup;
extern SG_MCU_01_SigGroup MCU_01_SigGroup;
extern SG_MCU_FailureCode_SigGroup MCU_FailureCode_SigGroup;
extern SG_PRND_SigGroup PRND_SigGroup;
extern SG_SGW_IBS_01_SigGroup SGW_IBS_01_SigGroup;

extern uint32_T IBS_VCU_MotorControl_ErrSts;
extern boolean_T IBS_VCU_MotorControl_SigGroup_RxFlg;
extern boolean_T APTC_TCU_SigGroup_RxFlg;

#define CtAp_CANHandler_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CANHandler_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */



/*-
 * Requirements for '<Root>': CtAp_CANHandler


 */
#endif                                 /* RTW_HEADER_CtAp_CANHandler_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
