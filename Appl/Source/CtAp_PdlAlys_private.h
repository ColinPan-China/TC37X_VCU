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
 *  Filename:           CtAp_PdlAlys_private.h
 *  File Creation Date: 19-Aug-2025
 *  Model Name:         CtAp_PdlAlys
 *  Model Version:      1.260
 *  Model Author:       Mike Ni - Thu Aug 01 14:01:27 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Tue Aug 19 13:32:42 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Tue Aug 19 13:32:00 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_PdlAlys_private_h_
#define RTW_HEADER_CtAp_PdlAlys_private_h_
#include "rtwtypes.h"
#include "CtAp_PdlAlys.h"
#include "CtAp_PdlAlys_types.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern boolean_T CtAp_PdlAlys_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, real32_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Pd_T
  *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_Init(void);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_PdlAlys_T
  *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_NoEnAvoidMu(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtAp_Pdl_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_ces0(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_AvoidMu_CtAp_Pd_gwae_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_NoEnAvoidMu_lcyj(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_faqo_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_NoEnAvoidMu_ml3a(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_lme0_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_NoEnAvoidMu_ncum(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_mhvf_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_omrp_Init(void);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_muqh(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_Pd_js3m_T
  *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_NoEnAvoidMu_ceab(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_l4di_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_NoEnAvoidMu_l5wf(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_o3eo_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_NoEnAvoidMu_ol5v(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_hxaj_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_hofa_Init(void);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_npbs(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_Pd_ez4t_T
  *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_ppxw_Init(void);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_bqcr(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_Pd_l1nc_T
  *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_NoEnAvoidMu_cqpx(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_ma4k_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_od30_Init(void);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_AvoidMu_eyeh(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, ARID_DEF_AvoidMu_CtAp_Pd_lw2e_T
  *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern void CtAp_PdlAlys_NoEnAvoidMu_b0c5(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_Dematuretime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoEnAvoidMu_CtA_kev4_T *CtAp_PdlAlys__ARID_DEF_arg);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#define CtAp_PdlAlys_START_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"

extern real32_T CtAp_PdlAlys_ATOM_Limiter(real32_T rtu_MAX, real32_T rtu_In,
  real32_T rtu_MIN);

#define CtAp_PdlAlys_STOP_SEC_CODE
#include "CtAp_PdlAlys_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_PdlAlys_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
