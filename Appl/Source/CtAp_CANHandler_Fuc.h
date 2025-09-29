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
 *  C/C++ source code generated on :  2025 07/31

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - 2025 07/02
 *
 *
 ********************************************************************************/

#ifndef RTW_HEADER_CtAp_CANHandler_Fuc_h_
#define RTW_HEADER_CtAp_CANHandler_Fuc_h_
#include "rtwtypes.h"


#define CtAp_CANHandler_IN_Init        ((uint8_T)2U)
#define CtAp_CANHandler_IN_Init_bxhl   ((uint8_T)1U)
#define CtAp_CANHand_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define CtAp_CANHandler_IN_Cnt         ((uint8_T)1U)
#define CtAp_CANHandler_IN_Over        ((uint8_T)2U)
#define CANHandler_Passed              false     


typedef struct 
{
  uint8_T NoRxFlg_Delay_DSTATE;               /* '<S838>/Delay5' */
  uint8_T InitCEValue_Delay_DSTATE;               /* '<S838>/Delay4' */
  uint8_T ContinuousRxFlg_Cnt_DSTATE;               /* '<S838>/Delay1' */
  uint8_T ContinuousRxFlg_Delay_DSTATE;               /* '<S838>/Delay2' */
} CE_Delay_Cnt_TYPE;




typedef struct {
	uint8_T Delay1_DSTATE;  /* '<S48>/Delay1' */
	uint8_T Delay2_DSTATE;  /* '<S48>/Delay2' */
	uint8_T Delay_DSTATE;   /* '<S47>/Delay' */
	uint8_T Delay1_DSTATE_i1m1;/* '<S47>/Delay1' */
  uint8_T is_c3_ATOM_standard_autocodable;/* '<S38>/ATOM_Chart' */
  uint8_T is_Cnt;                      /* '<S38>/ATOM_Chart' */
  uint8_T FailCnt;                    /* '<S38>/ATOM_Chart' */
  uint8_T PassCnt; 
  uint8_T is_active_c3_ATOM_standard_auto;/* '<S38>/ATOM_Chart' */
  boolean_T LogicalOperator2;          /* '<S47>/LogicalOperator2' */
  boolean_T update;
  uint8_T Errst;

} ARID_DEF_E2ECfm_CtAp_CANHandl_T;


typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S42>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_o3wf;      /* '<S41>/UnitDelay' */
  uint8_T Delay3_DSTATE;               /* '<S40>/Delay3' */
  boolean_T Delay1_DSTATE;             /* '<S40>/Delay1' */
} ARID_DEF_ATOM_U16Err_CtAp_CAN_T;

typedef struct {
  uint16_T Delay_DSTATE;               /* '<S35>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_CA_T;



#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

real32_T CtAp_CANHandler_ATOM_SignalRead(real32_T InputSignal, real32_T ResolutionRation, real32_T Offset);
real32_T CtAp_CANHandler_ATOM_SignalSend(real32_T InputSignal, real32_T ResolutionRation, real32_T Offset);
uint8_T CtAp_CANHandl_ATOM_CESignalRead(boolean_T RxFlag, uint8_T RxValue,uint16_T InitCycleTime, CE_Delay_Cnt_TYPE *CE_Delay_Cnt);
uint8_T CtAp_CANHandl_ATOM_EventSignalRead(boolean_T RxFlag,uint8_T RxValue, uint8_T NoRxDelayTime,uint8_T *AllowDelayCnt);

void CtAp_CANHandler_E2ECfm(uint8_T rtu_MessageCnt, boolean_T
  rtu_Update, uint32_T rtu_ErrSt, boolean_T rtu_OterCdn, uint8_T
  rtu_CANHandler_MAXDELTAcounterI, uint32_T rtu_CANHandler_CRCWRONG, uint8_T
  rtu_E2EErrTimes, uint32_T rtu_CANHandler_OK, boolean_T *rty_CaculateFailCmpl,
  boolean_T *rty_Passed, ARID_DEF_E2ECfm_CtAp_CANHandl_T
  *CtAp_CANHandler__ARID_DEF_arg);

void CtAp_CANHandler_E2E3Cfm(uint8_T rtu_MessageCnt, boolean_T
    rtu_Update, uint32_T rtu_ErrSt, boolean_T rtu_OterCdn, uint8_T
    rtu_CANHandler_MAXDELTAcounterI, uint32_T rtu_CANHandler_CRCWRONG, uint8_T
    rtu_E2EErrTimes, uint32_T rtu_CANHandler_OK, boolean_T* rty_CaculateFailCmpl,
    boolean_T* rty_Passed, ARID_DEF_E2ECfm_CtAp_CANHandl_T
    * CtAp_CANHandler__ARID_DEF_arg);

void CtAp_CANHandler_E2ESpc3Cfm(uint8_T rtu_MessageCnt, boolean_T
    rtu_Update, uint32_T rtu_ErrSt, boolean_T rtu_OterCdn, uint32_T rtu_CANHandler_CRCWRONG, uint8_T
    rtu_E2EErrTimes, uint32_T rtu_CANHandler_OK, uint8_T rtu_MaxDeltaCnt, boolean_T* rty_CaculateFailCmpl,
    boolean_T* rty_Passed, ARID_DEF_E2ECfm_CtAp_CANHandl_T
    * CtAp_CANHandler__ARID_DEF_arg);

boolean_T CtAp_CANHandler_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
    uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_CA_T
    *CtAp_CANHandler__ARID_DEF_arg);

void CtAp_CANHandler_ATOM_U16Err(boolean_T rtu_EnableCondition, boolean_T
      rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
      uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
      *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
      ARID_DEF_ATOM_U16Err_CtAp_CAN_T *CtAp_CANHandler__ARID_DEF_arg);

void CtAp_CANHandler_E2ETimeoutCfm(boolean_T rtu_SigGroup_IsUpdated, boolean_T
        *rty_E2ETimeoutFailed, boolean_T *rty_E2ETimeoutPassed);

void CtAp_CANHandler_TimeoutCfm_eeyv(boolean_T rtu_LvMgmt_KL15ActSts_Flg,
          boolean_T rtu_ComM_ErrResEPTCANBusOffInfo, boolean_T rtu_SigGroup_IsUpdated,
          boolean_T *rty_TimeoutFailed, boolean_T *rty_TimeoutPassed);

void CtAp_CANHandler_E2ECfm_Init(boolean_T *rty_CaculateFailCmpl);

boolean_T CtAp_CANHandler_MessageUpdateDelay(uint8_T DelayTimes,boolean_T RxFlag,uint8_T UpdatedelayCnt);

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

#endif                                 /* RTW_HEADER_CtAp_CANHandler_Cal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
