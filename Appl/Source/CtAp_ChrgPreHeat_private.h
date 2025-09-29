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
 *  Filename:           CtAp_ChrgPreHeat_private.h
 *  File Creation Date: 27-May-2025
 *  Model Name:         CtAp_ChrgPreHeat
 *  Model Version:      1.008
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue May 27 14:40:27 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu May 22 14:28:56 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgPreHeat_private_h_
#define RTW_HEADER_CtAp_ChrgPreHeat_private_h_
#include "rtwtypes.h"
#include "CtAp_ChrgPreHeat.h"
#include "Rte_Type.h"
#include "CtAp_ChrgPreHeat_types.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern void CtAp_ChrgPreHeat_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_ChrgPreHeat__ARID_DEF_arg);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern boolean_T CtAp_ChrMgmt_PreheatErrResetCdn(uint8_T
  rtu_ChrMgmt_PreheatErrSig_Bus);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern boolean_T CtAp_C_ChrMgmt_PreheatErrSetCdn(real32_T
  rtu_ChrMgmt_PreheatErrSig_Bus, real32_T rtu_ChrMgmt_PreheatErrSig__jxkw,
  uint8_T rtu_ChrMgmt_PreheatErrSig__fns1, uint8_T
  rtu_ChrMgmt_PreheatErrSig__dnlf, uint8_T rtu_ChrMgmt_PreheatErrSig__hpeu);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern void CtAp_ChrgPr_ATOM_U16ErrorHandle(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_nsaz_T *CtAp_ChrgPreHeat__ARID_DEF_arg);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern boolean_T CtAp_ChrgPreHeat_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T
  *CtAp_ChrgPreHeat__ARID_DEF_arg);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern boolean_T CtAp_C_ChrMgmt_PreheatErrEnaCdn(const dt_ComM_EPTCANBusOffInfo *
  rtu_ChrMgmt_PreheatErrSig_Bus, boolean_T rtu_ChrMgmt_PreheatErrSig__i1ry,
  boolean_T rtu_ChrMgmt_PreheatErrSig__dud3, ARID_DEF_ChrMgmt_PreheatErrEn_T
  *CtAp_ChrgPreHeat__ARID_DEF_arg);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern boolean_T ChrMgmt_PreheatErrResetCdn_lwla(uint8_T
  rtu_ChrMgmt_PreheatErrSig_Bus);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern boolean_T C_ChrMgmt_PreheatErrSetCdn_hrm4(real32_T
  rtu_ChrMgmt_PreheatErrSig_Bus, real32_T rtu_ChrMgmt_PreheatErrSig__aar2,
  uint8_T rtu_ChrMgmt_PreheatErrSig__ag4m, uint8_T
  rtu_ChrMgmt_PreheatErrSig__nrym, uint8_T rtu_ChrMgmt_PreheatErrSig__mesg);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_a5xe(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_orqs_T *CtAp_ChrgPreHeat__ARID_DEF_arg);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern boolean_T C_ChrMgmt_PreheatErrSetCdn_kot2(uint16_T
  rtu_ChrMgmt_PreheatErrSig_Bus, uint8_T rtu_ChrMgmt_PreheatErrSig__k3dq,
  uint8_T rtu_ChrMgmt_PreheatErrSig__jc4c, uint8_T
  rtu_ChrMgmt_PreheatErrSig__a3gc);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_haia(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_iqzv_T *CtAp_ChrgPreHeat__ARID_DEF_arg);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern boolean_T CtAp_ChrgPreHeat_If(boolean_T rtu_if, boolean_T rtu_then,
  boolean_T rtu_else);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern void CtAp_ChrgPreH_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgPreHeat__ARID_DEF_arg);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern boolean_T CtAp_ChrgPreHeat_ATOM_OnDelay(boolean_T rtu_x, uint16_T
  rtu_tm_dly, uint16_T rtu_dt, uint16_T rtu_ClearValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgPreHeat__ARID_DEF_arg);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#define CtAp_ChrgPreHeat_START_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"

extern uint8_T CtAp_ChrgPreHeat_If_epk1(boolean_T rtu_if, uint8_T rtu_then,
  uint8_T rtu_else);

#define CtAp_ChrgPreHeat_STOP_SEC_CODE
#include "CtAp_ChrgPreHeat_MemMap.h"
#endif                              /* RTW_HEADER_CtAp_ChrgPreHeat_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
