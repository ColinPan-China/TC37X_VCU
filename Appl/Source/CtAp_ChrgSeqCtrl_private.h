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
 *  Filename:           CtAp_ChrgSeqCtrl_private.h
 *  File Creation Date: 31-Jul-2025
 *  Model Name:         CtAp_ChrgSeqCtrl
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 14:00:28 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul 31 11:03:55 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 31 11:02:45 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgSeqCtrl_private_h_
#define RTW_HEADER_CtAp_ChrgSeqCtrl_private_h_
#include "rtwtypes.h"
#include "CtAp_ChrgSeqCtrl.h"
#include "Rte_Type.h"
#include "CtAp_ChrgSeqCtrl_types.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern boolean_T Ct_DCChrMgmt_DCChrgnErrResetCdn(uint8_T
  rtu_DCChrMgmt_DCChrgnErrInpSig_);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern boolean_T CtAp_DCChrMgmt_DCChrgnErrSetCdn(uint8_T
  rtu_DCChrMgmt_DCChrgnErrInpSig_, uint8_T rtu_DCChrMgmt_DCChrgnErrIn_izsh);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern void CtAp_ChrgSeqCtrl_NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoDTAndEn_CtAp_ChrgS_T *CtAp_ChrgSeqCtrl__ARID_DEF_arg);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern boolean_T CtAp_ChrgSeqCtrl_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T
  *CtAp_ChrgSeqCtrl__ARID_DEF_arg);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern boolean_T CtAp_DCChrMgmt_DCChrgnErrEnaCdn(boolean_T
  rtu_DCChrMgmt_DCChrgnErrInpSig_, const dt_ComM_EPTCANBusOffInfo
  *rtu_DCChrMgmt_DCChrgnErrIn_o435, boolean_T rtu_DCChrMgmt_DCChrgnErrIn_a5ib,
  ARID_DEF_DCChrMgmt_DCChr_o1k5_T *CtAp_ChrgSeqCtrl__ARID_DEF_arg);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern boolean_T DCChrMgmt_DCChrgnErrResetC_m3ak(uint8_T
  rtu_DCChrMgmt_DCChrgnErrInpSig_);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern void CtAp_ChrgSeqCtrl_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, boolean_T *rty_ErrorRes, ARID_DEF_NoDT_CtAp_ChrgSeqCtr_T
  *CtAp_ChrgSeqCtrl__ARID_DEF_arg);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern boolean_T CtAp_ChrgSeqCtrl_Subsystem1(uint8_T
  rtu_DCChrMgmt_DCChrgnErrInpSig_, uint8_T rtu_DCChrMgmt_DCChrgnErrIn_h5dl);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern void CtAp_ChrgSeqC_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgSeqCtrl__ARID_DEF_arg);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#define CtAp_ChrgSeqCtrl_START_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"

extern void CtAp_ChrgSeqCtrl_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, boolean_T *rty_y,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgSeqCtrl__ARID_DEF_arg);

#define CtAp_ChrgSeqCtrl_STOP_SEC_CODE
#include "CtAp_ChrgSeqCtrl_MemMap.h"
#endif                              /* RTW_HEADER_CtAp_ChrgSeqCtrl_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
