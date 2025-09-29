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
 *  Filename:           CtAp_EmMgmt_private.h
 *  File Creation Date: 27-Jun-2025
 *  Model Name:         CtAp_EmMgmt
 *  Model Version:      1.006
 *  Model Author:       Mike Ni - Thu Aug 01 13:58:03 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Jun 27 09:47:03 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Fri Jun 27 09:46:22 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_EmMgmt_private_h_
#define RTW_HEADER_CtAp_EmMgmt_private_h_
#include "rtwtypes.h"
#include "CtAp_EmMgmt.h"
#include "CtAp_EmMgmt_types.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern void CtAp_EmMgmt_ATOM_OnDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OnDelay_CtAp_Em_T *CtAp_EmMgmt__ARID_DEF_arg);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern boolean_T CtAp_EmMgmt_ATOM_OnDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OnDelay_CtAp_Em_T
  *CtAp_EmMgmt__ARID_DEF_arg);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern void CtAp_EmMgmt_ATOM_OffDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OffDelay_CtAp_E_T *CtAp_EmMgmt__ARID_DEF_arg);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern boolean_T CtAp_EmMgmt_ATOM_OffDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OffDelay_CtAp_E_T
  *CtAp_EmMgmt__ARID_DEF_arg);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern void CtAp_EmMgmt_NoDTAndEn(boolean_T rtu_SetCondition, boolean_T
  rtu_ResetCondition, uint16_T rtu_MatureTime, uint16_T rtu_dt, boolean_T
  *rty_MonStat, uint8_T *rty_MonRes, uint8_T *rty_ErrStat, boolean_T
  *rty_ErrorRes, ARID_DEF_NoDTAndEn_CtAp_EmMgm_T *CtAp_EmMgmt__ARID_DEF_arg);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern boolean_T OBCMgmt_ElectcLockErrSetCdn_Flg(uint8_T
  rtu_OBCMgmt_EmLckErrInpSigBus, uint8_T rtu_OBCMgmt_EmLckErrInpSig_fqcn);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern void CtAp_EmMgmt_NoDT(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoDT_CtAp_EmMgmt_T *CtAp_EmMgmt__ARID_DEF_arg);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern boolean_T CtAp_EmMgmt_ATOM_TimeCnt(boolean_T rtu_In, uint16_T
  rtu_RunStep_C, uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_Em_T
  *CtAp_EmMgmt__ARID_DEF_arg);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern boolean_T OBCMgmt_ElectcLockErrResetCdn_F(uint8_T
  rtu_OBCMgmt_EmLckErrInpSigBus);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern boolean_T OBCMgmt_ElectcLockErrSetCd_jojc(uint8_T
  rtu_OBCMgmt_EmLckErrInpSigBus, uint8_T rtu_OBCMgmt_EmLckErrInpSig_eyxu);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#define CtAp_EmMgmt_START_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"

extern void CtAp_EmMgmt_NoDT_hokd(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T *rty_MonRes, uint8_T
  *rty_ErrStat, ARID_DEF_NoDT_CtAp_EmMgm_kiod_T *CtAp_EmMgmt__ARID_DEF_arg);

#define CtAp_EmMgmt_STOP_SEC_CODE
#include "CtAp_EmMgmt_MemMap.h"
#endif                                 /* RTW_HEADER_CtAp_EmMgmt_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
