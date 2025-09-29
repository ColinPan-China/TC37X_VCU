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
 *  Filename:           CtAp_ChrgComM_private.h
 *  File Creation Date: 03-Jul-2025
 *  Model Name:         CtAp_ChrgComM
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Fri Aug 16 10:03:51 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Jul  3 10:24:22 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Jul 03 10:23:17 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgComM_private_h_
#define RTW_HEADER_CtAp_ChrgComM_private_h_
#include "rtwtypes.h"
#include "CtAp_ChrgComM.h"
#include "Rte_Type.h"
#include "CtAp_ChrgComM_types.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern uint8_T CtAp_ChrgComM_If(boolean_T rtu_if, uint8_T rtu_then, uint8_T
  rtu_else);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern real32_T CtAp_ChrgComM_If_c2bu(boolean_T rtu_if, real32_T rtu_then,
  real32_T rtu_else);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_ChrgComM_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T CtAp_ChrgComM_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Ch_T
  *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_ChrgComM_ATOM_U16ErrHnd(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_ATOM_U16ErrHnd_CtAp__T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrResetCdn(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_kbhr,
  uint8_T rtu_DCChrMgmt_BEMTxReqSts_Enum);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T C_DCChrMgmt_DcChrgCommErrSetCdn(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_bo2q);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_ChrgCo_ATOM_U16ErrorHandle(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_jjfm_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T CtAp_ChrgComM_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T
  *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T C_DCChrMgmt_DcChrgCommErrEnaCdn(const dt_ComM_DCCANBusOffInfo
  *rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_ablb,
  boolean_T rtu_DCChrMgmt_DcChrgCommIn_fwd1, ARID_DEF_DCChrMgmt_DcChr_kiod_T
  *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrRes_cc2d(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrSet_prcs(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_pcua(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_fkx5_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrEnaCdn_F(const dt_ComM_DCCANBusOffInfo
  *rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_a2of,
  boolean_T rtu_DCChrMgmt_DcChrgCommIn_eiyx, ARID_DEF_DCChrMgmt_DcChr_mju5_T
  *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrRes_aodf(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrSet_jmra(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_k3s2(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_gu3w_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrEna_ejoe(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, const dt_ComM_DCCANBusOffInfo
  *rtu_DCChrMgmt_DcChrgCommIn_brpj, boolean_T rtu_DCChrMgmt_DcChrgCommIn_lhcf,
  ARID_DEF_DCChrMgmt_DcChr_kfub_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T Ct_CChrMgmt_DcChrgCommErrSetCdn(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrSet_cx0e(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_gkii);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_buk3(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_iae2_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrSet_dlmy(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_dfxg,
  boolean_T rtu_DCChrMgmt_DcChrgCommIn_pai4, ARID_DEF_DCChrMgmt_DcChr_glkg_T
  *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_avlu(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_nybi_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrSet_fn0l(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_lsl3,
  boolean_T rtu_DCChrMgmt_DcChrgCommIn_oxto, ARID_DEF_DCChrMgmt_DcChr_mynw_T
  *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_pbqj(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_ovjg_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrSet_olfk(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, boolean_T rtu_DCChrMgmt_DcChrgCommIn_alfi);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_mel0(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_hu4v_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrRes_cjom(int8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, int8_T rtu_DCChrMgmt_DcChrgCommIn_kfrl);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrSet_fbfu(int8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, int8_T rtu_DCChrMgmt_DcChrgCommIn_nco5);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_ir2s(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_dc2b_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrEna_lgvq(boolean_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, const dt_ComM_EPTCANBusOffInfo
  *rtu_DCChrMgmt_DcChrgCommIn_lroc, boolean_T rtu_DCChrMgmt_DcChrgCommIn_ncb0,
  ARID_DEF_DCChrMgmt_DcChr_dpik_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrRes_bd3r(int8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, int8_T rtu_DCChrMgmt_DcChrgCommIn_blpx);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrSet_krin(int8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, int8_T rtu_DCChrMgmt_DcChrgCommIn_myk4);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_mhbx(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_dizy_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrRes_nx2o(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, uint8_T rtu_DCChrMgmt_DcChrgCommIn_lmks);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern boolean_T DCChrMgmt_DcChrgCommErrSet_gq3a(uint8_T
  rtu_DCChrMgmt_DcChrgCommInpSig_, uint8_T rtu_DCChrMgmt_DcChrgCommIn_kbnd);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_p2j0(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_hr3b_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#define CtAp_ChrgComM_START_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"

extern void CtAp_C_ATOM_U16ErrorHandle_nctk(boolean_T rtu_EnableCondition,
  boolean_T rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T
  rtu_MatureTime, uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat,
  ARID_DEF_ATOM_U16ErrHnd_jb3c_T *CtAp_ChrgComM__ARID_DEF_arg);

#define CtAp_ChrgComM_STOP_SEC_CODE
#include "CtAp_ChrgComM_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_ChrgComM_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
