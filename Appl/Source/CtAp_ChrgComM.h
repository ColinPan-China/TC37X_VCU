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
 *  Filename:           CtAp_ChrgComM.h
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
#ifndef RTW_HEADER_CtAp_ChrgComM_h_
#define RTW_HEADER_CtAp_ChrgComM_h_
#ifndef CtAp_ChrgComM_COMMON_INCLUDES_
#define CtAp_ChrgComM_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ChrgComM.h"
#endif                                 /* CtAp_ChrgComM_COMMON_INCLUDES_ */

#include "CtAp_ChrgComM_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "VCU_TempGlobal.h"
#include "CtAp_ChrgComM_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ChrgComM_Active                true                      /* Referenced by:
                                                                  * '<S6>/Define'
                                                                  * '<S6>/Define22'
                                                                  * '<S76>/Define'
                                                                  * '<S78>/Define'
                                                                  * '<S80>/Define'
                                                                  * '<S82>/Define'
                                                                  * '<S83>/Define'
                                                                  * '<S85>/Define'
                                                                  * '<S87>/Define'
                                                                  * '<S89>/Define'
                                                                  * '<S91>/Define'
                                                                  * '<S93>/Define'
                                                                  * '<S95>/Define'
                                                                  * '<S105>/Define'
                                                                  * '<S119>/Define'
                                                                  * '<S133>/Define'
                                                                  * '<S153>/Define'
                                                                  * '<S167>/Define'
                                                                  * '<S181>/Define'
                                                                  * '<S195>/Define'
                                                                  * '<S209>/Define'
                                                                  * '<S223>/Define'
                                                                  * '<S237>/Define'
                                                                  * '<S245>/Define'
                                                                  */
#define ChrgComM_BMSRlyErr             1U                        /* Referenced by:
                                                                  * '<S7>/Define43'
                                                                  * '<S57>/Constant'
                                                                  */
#define ChrgComM_BSMError              1U                        /* Referenced by:
                                                                  * '<S6>/Define16'
                                                                  * '<S6>/Define21'
                                                                  * '<S6>/Define26'
                                                                  * '<S6>/Define9'
                                                                  */
#define ChrgComM_BSMHiSOC              1U                        /* Referenced by: '<S6>/Define4' */
#define ChrgComM_BSMLoSOC              2U                        /* Referenced by: '<S6>/Define6' */
#define ChrgComM_BSMOverVoltage        1U                        /* Referenced by: '<S6>/Define54' */
#define ChrgComM_BSMUnderVoltage       2U                        /* Referenced by: '<S6>/Define57' */
#define ChrgComM_BSTFaultOther         1U                        /* Referenced by: '<S7>/Define50' */
#define ChrgComM_BSTRealyFault         1U                        /* Referenced by: '<S7>/Define41' */
#define ChrgComM_ChargeError           7U                        /* Referenced by:
                                                                  * '<S68>/Define1'
                                                                  * '<S69>/Define1'
                                                                  * '<S69>/Define2'
                                                                  */
#define ChrgComM_CnctFault             1U                        /* Referenced by: '<S7>/Define34' */
#define ChrgComM_DCCharging            6U                        /* Referenced by: '<S9>/Define1' */
#define ChrgComM_DCPlugDetected        3U                        /* Referenced by: '<S9>/Define' */
#define ChrgComM_DCPreheating          11U                       /* Referenced by: '<S9>/Define2' */
#define ChrgComM_Damage                0U                        /* Referenced by:
                                                                  * '<S232>/Define'
                                                                  * '<S232>/Define1'
                                                                  * '<S239>/Define'
                                                                  * '<S239>/Define1'
                                                                  */
#define ChrgComM_Failed                1U                        /* Referenced by:
                                                                  * '<S7>/Define21'
                                                                  * '<S7>/Define25'
                                                                  */
#define ChrgComM_FaultOther            2U                        /* Referenced by: '<S7>/Define52' */
#define ChrgComM_Init                  0U                        /* Referenced by:
                                                                  * '<S6>/Define15'
                                                                  * '<S6>/Define20'
                                                                  * '<S6>/Define25'
                                                                  * '<S6>/Define3'
                                                                  * '<S6>/Define53'
                                                                  * '<S6>/Define8'
                                                                  * '<S7>/Define1'
                                                                  * '<S7>/Define10'
                                                                  * '<S7>/Define12'
                                                                  * '<S7>/Define19'
                                                                  * '<S7>/Define20'
                                                                  * '<S7>/Define28'
                                                                  * '<S7>/Define29'
                                                                  * '<S7>/Define35'
                                                                  * '<S7>/Define36'
                                                                  * '<S7>/Define42'
                                                                  * '<S7>/Define45'
                                                                  * '<S7>/Define5'
                                                                  * '<S7>/Define51'
                                                                  * '<S7>/Define53'
                                                                  * '<S46>/Constant'
                                                                  * '<S47>/Constant'
                                                                  * '<S48>/Constant'
                                                                  * '<S52>/Constant'
                                                                  * '<S56>/Constant'
                                                                  * '<S59>/Constant'
                                                                  * '<S67>/Define4'
                                                                  * '<S68>/Define'
                                                                  * '<S69>/Init'
                                                                  * '<S99>/Define'
                                                                  * '<S113>/Define'
                                                                  * '<S127>/Define'
                                                                  * '<S142>/Define'
                                                                  * '<S147>/Define'
                                                                  * '<S161>/Define'
                                                                  * '<S175>/Define'
                                                                  * '<S189>/Define'
                                                                  */
#define ChrgComM_Level3                3U                        /* Referenced by:
                                                                  * '<S6>/Define1'
                                                                  * '<S6>/Define10'
                                                                  * '<S6>/Define12'
                                                                  * '<S6>/Define17'
                                                                  * '<S6>/Define2'
                                                                  * '<S6>/Define55'
                                                                  * '<S7>/Define22'
                                                                  * '<S53>/Constant'
                                                                  */
#define ChrgComM_ManOprate             1U                        /* Referenced by: '<S7>/Define17' */
#define ChrgComM_MinErrCurrent         0.1F                      /* Referenced by:
                                                                  * '<S7>/CAL'
                                                                  * '<S50>/Constant'
                                                                  * '<S62>/Constant'
                                                                  */
#define ChrgComM_OffPlug               1U                        /* Referenced by:
                                                                  * '<S106>/Define'
                                                                  * '<S120>/Define'
                                                                  * '<S134>/Define'
                                                                  * '<S154>/Define'
                                                                  * '<S168>/Define'
                                                                  * '<S182>/Define'
                                                                  * '<S196>/Define'
                                                                  * '<S246>/Define'
                                                                  */
#define ChrgComM_Operate               1U                        /* Referenced by: '<S7>/Define18' */
#define ChrgComM_OverCurrent           1U                        /* Referenced by:
                                                                  * '<S7>/Define46'
                                                                  * '<S7>/Define47'
                                                                  */
#define ChrgComM_OverTemp              1U                        /* Referenced by:
                                                                  * '<S7>/Define30'
                                                                  * '<S7>/Define31'
                                                                  * '<S7>/Define37'
                                                                  * '<S7>/Define38'
                                                                  */
#define ChrgComM_OverVoltage           1U                        /* Referenced by:
                                                                  * '<S7>/Define54'
                                                                  * '<S7>/Define55'
                                                                  */
#define ChrgComM_PODRlyErr             2U                        /* Referenced by:
                                                                  * '<S7>/Define44'
                                                                  * '<S58>/Constant'
                                                                  */
#define ChrgComM_PrmFailed             1U                        /* Referenced by: '<S7>/Define' */
#define ChrgComM_Reached               1U                        /* Referenced by:
                                                                  * '<S7>/Define11'
                                                                  * '<S7>/Define13'
                                                                  * '<S7>/Define14'
                                                                  * '<S7>/Define2'
                                                                  * '<S7>/Define6'
                                                                  * '<S7>/Define7'
                                                                  */
#define ChrgComM_ReconnectAllow        1U                        /* Referenced by:
                                                                  * '<S67>/Define3'
                                                                  * '<S99>/Define1'
                                                                  * '<S113>/Define1'
                                                                  * '<S147>/Define1'
                                                                  * '<S161>/Define1'
                                                                  */
#define ChrgComM_ReconnectDisallow     2U                        /* Referenced by: '<S67>/Define2' */
#define ChrgComM_Result0xAA            170U                      /* Referenced by:
                                                                  * '<S148>/Define'
                                                                  * '<S155>/Define'
                                                                  * '<S162>/Define'
                                                                  * '<S169>/Define'
                                                                  */
#define ChrgComM_SOCHiErr              1U                        /* Referenced by: '<S6>/Define5' */
#define ChrgComM_SensorNormal          2U                        /* Referenced by:
                                                                  * '<S231>/Define'
                                                                  * '<S231>/Define1'
                                                                  * '<S238>/Define'
                                                                  * '<S238>/Define1'
                                                                  */
#define ChrgComM_ShortCircuit          1U                        /* Referenced by:
                                                                  * '<S232>/Define2'
                                                                  * '<S232>/Define3'
                                                                  * '<S239>/Define2'
                                                                  * '<S239>/Define3'
                                                                  */
#define ChrgComM_SignleValueZero       0.0F                      /* Referenced by:
                                                                  * '<S9>/Define3'
                                                                  * '<S9>/Define4'
                                                                  * '<S9>/Define5'
                                                                  * '<S9>/Define6'
                                                                  */
#define ChrgComM_TimeOne               1U                        /* Referenced by: '<S69>/Define3' */
#define ChrgComM_TimeThree             3U                        /* Referenced by: '<S71>/Constant' */
#define ChrgComM_U16Zero               0U                        /* Referenced by:
                                                                  * '<S76>/Define2'
                                                                  * '<S77>/Define2'
                                                                  * '<S78>/Define2'
                                                                  * '<S79>/Define2'
                                                                  * '<S80>/Define2'
                                                                  * '<S81>/Define2'
                                                                  * '<S82>/Define2'
                                                                  * '<S83>/Define2'
                                                                  * '<S84>/Define2'
                                                                  * '<S85>/Define2'
                                                                  * '<S86>/Define2'
                                                                  * '<S87>/Define2'
                                                                  * '<S88>/Define2'
                                                                  * '<S89>/Define2'
                                                                  * '<S90>/Define2'
                                                                  * '<S97>/Define2'
                                                                  * '<S67>/Define1'
                                                                  */
#define ChrgComM_U8Zero                0U                        /* Referenced by: '<S69>/Define' */
#define ChrgComM_Untrustable           2U                        /* Referenced by:
                                                                  * '<S6>/Define11'
                                                                  * '<S6>/Define13'
                                                                  * '<S6>/Define18'
                                                                  * '<S6>/Define23'
                                                                  * '<S7>/Define15'
                                                                  * '<S7>/Define16'
                                                                  * '<S7>/Define24'
                                                                  * '<S7>/Define27'
                                                                  * '<S7>/Define3'
                                                                  * '<S7>/Define32'
                                                                  * '<S7>/Define33'
                                                                  * '<S7>/Define39'
                                                                  * '<S7>/Define4'
                                                                  * '<S7>/Define40'
                                                                  * '<S7>/Define48'
                                                                  * '<S7>/Define49'
                                                                  * '<S7>/Define56'
                                                                  * '<S7>/Define57'
                                                                  * '<S7>/Define8'
                                                                  * '<S7>/Define9'
                                                                  */
#define ChrgComM_dt50ms                50U                       /* Referenced by:
                                                                  * '<S76>/Define1'
                                                                  * '<S77>/Define1'
                                                                  * '<S78>/Define1'
                                                                  * '<S79>/Define1'
                                                                  * '<S80>/Define1'
                                                                  * '<S81>/Define1'
                                                                  * '<S82>/Define1'
                                                                  * '<S83>/Define1'
                                                                  * '<S84>/Define1'
                                                                  * '<S85>/Define1'
                                                                  * '<S86>/Define1'
                                                                  * '<S87>/Define1'
                                                                  * '<S88>/Define1'
                                                                  * '<S89>/Define1'
                                                                  * '<S90>/Define1'
                                                                  * '<S91>/Define1'
                                                                  * '<S92>/Define2'
                                                                  * '<S93>/Define1'
                                                                  * '<S94>/Define1'
                                                                  * '<S95>/Define1'
                                                                  * '<S96>/Define1'
                                                                  * '<S97>/Define1'
                                                                  * '<S67>/Define'
                                                                  * '<S105>/Define1'
                                                                  * '<S119>/Define1'
                                                                  * '<S133>/Define1'
                                                                  * '<S153>/Define1'
                                                                  * '<S167>/Define1'
                                                                  * '<S181>/Define1'
                                                                  * '<S195>/Define1'
                                                                  * '<S209>/Define1'
                                                                  * '<S223>/Define1'
                                                                  * '<S237>/Define1'
                                                                  * '<S245>/Define1'
                                                                  */
#define ChrgComM_handshake             1U                        /* Referenced by: '<S68>/Define2' */

/* PublicStructure Variables for Internal Data, for system '<S67>/ATOM_OnDelay' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S70>/UnitDelay' */
} ARID_DEF_ATOM_OnDelay_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<S76>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S103>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_ogmo;      /* '<S102>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S101>/Delay1' */
} ARID_DEF_ATOM_U16ErrHnd_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S77>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S110>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_da2c;      /* '<S109>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_jjfm_T;

/* PublicStructure Variables for Internal Data, for system '<S105>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S111>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<S77>/DCChrMgmt_DcChrgCommErrEnaCdn' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt;/* '<S105>/ATOM_TimeCnt' */
} ARID_DEF_DCChrMgmt_DcChr_kiod_T;

/* PublicStructure Variables for Internal Data, for system '<S79>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S124>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_elns;      /* '<S123>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_fkx5_T;

/* PublicStructure Variables for Internal Data, for system '<S79>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt;/* '<S119>/ATOM_TimeCnt' */
} ARID_DEF_DCChrMgmt_DcChr_mju5_T;

/* PublicStructure Variables for Internal Data, for system '<S81>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S138>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_daqf;      /* '<S137>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_gu3w_T;

/* PublicStructure Variables for Internal Data, for system '<S81>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt;/* '<S133>/ATOM_TimeCnt' */
} ARID_DEF_DCChrMgmt_DcChr_kfub_T;

/* PublicStructure Variables for Internal Data, for system '<S84>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S158>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_hdcx;      /* '<S157>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_iae2_T;

/* PublicStructure Variables for Internal Data, for system '<S85>/DCChrMgmt_DcChrgCommErrSetCdn' */
typedef struct {
  boolean_T Delay_DSTATE;              /* '<S162>/Delay' */
} ARID_DEF_DCChrMgmt_DcChr_glkg_T;

/* PublicStructure Variables for Internal Data, for system '<S86>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S172>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_moji;      /* '<S171>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_nybi_T;

/* PublicStructure Variables for Internal Data, for system '<S87>/DCChrMgmt_DcChrgCommErrSetCdn' */
typedef struct {
  boolean_T Delay_DSTATE;              /* '<S176>/Delay' */
} ARID_DEF_DCChrMgmt_DcChr_mynw_T;

/* PublicStructure Variables for Internal Data, for system '<S88>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S186>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_e0bd;      /* '<S185>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_ovjg_T;

/* PublicStructure Variables for Internal Data, for system '<S90>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S200>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_cinp;      /* '<S199>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_hu4v_T;

/* PublicStructure Variables for Internal Data, for system '<S92>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S214>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_hb5n;      /* '<S213>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_dc2b_T;

/* PublicStructure Variables for Internal Data, for system '<S92>/DCChrMgmt_DcChrgCommErrEnaCdn' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt;/* '<S209>/ATOM_TimeCnt' */
} ARID_DEF_DCChrMgmt_DcChr_dpik_T;

/* PublicStructure Variables for Internal Data, for system '<S94>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S228>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_he4i;      /* '<S227>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_dizy_T;

/* PublicStructure Variables for Internal Data, for system '<S96>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S242>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_iz4b;      /* '<S241>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_hr3b_T;

/* PublicStructure Variables for Internal Data, for system '<S97>/ATOM_U16ErrorHandle' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S250>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_bfnw;      /* '<S249>/UnitDelay' */
} ARID_DEF_ATOM_U16ErrHnd_jb3c_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_DCChrMgmt_DcChr_kfub_T ARID_DEF_DCChrMgmt_DcChrgCommE;
                                     /* '<S97>/DCChrMgmt_DcChrgCommErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_jb3c_T ARID_DEF_ATOM_U16ErrorHandle;/* '<S97>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_dpik_T ARID_DEF_DCChrMgmt_DcChrgC_mbvz;
                                     /* '<S96>/DCChrMgmt_DcChrgCommErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_hr3b_T ARID_DEF_ATOM_U16ErrorHand_cl54;/* '<S96>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_kkiq;/* '<S95>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_dpik_T ARID_DEF_DCChrMgmt_DcChrgC_cxar;
                                     /* '<S94>/DCChrMgmt_DcChrgCommErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_dizy_T ARID_DEF_ATOM_U16ErrorHand_bhxx;/* '<S94>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_pbm3;/* '<S93>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_dpik_T ARID_DEF_DCChrMgmt_DcChrgC_cv5h;
                                     /* '<S92>/DCChrMgmt_DcChrgCommErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_dc2b_T ARID_DEF_ATOM_U16ErrorHand_fqdq;/* '<S92>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_g2ml;/* '<S91>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_kiod_T ARID_DEF_DCChrMgmt_DcChrgC_g1sm;
                                     /* '<S90>/DCChrMgmt_DcChrgCommErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_hu4v_T ARID_DEF_ATOM_U16ErrorHand_merl;/* '<S90>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_nz4o;/* '<S89>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_mynw_T ARID_DEF_DCChrMgmt_DcChrgC_ppxr;
                                     /* '<S88>/DCChrMgmt_DcChrgCommErrSetCdn' */
  ARID_DEF_DCChrMgmt_DcChr_kiod_T ARID_DEF_DCChrMgmt_DcChrgC_llw0;
                                     /* '<S88>/DCChrMgmt_DcChrgCommErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_ovjg_T ARID_DEF_ATOM_U16ErrorHand_jwzv;/* '<S88>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_mynw_T ARID_DEF_DCChrMgmt_DcChrgC_dhmr;
                                     /* '<S87>/DCChrMgmt_DcChrgCommErrSetCdn' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_guug;/* '<S87>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_glkg_T ARID_DEF_DCChrMgmt_DcChrgC_ldqo;
                                     /* '<S86>/DCChrMgmt_DcChrgCommErrSetCdn' */
  ARID_DEF_DCChrMgmt_DcChr_mju5_T ARID_DEF_DCChrMgmt_DcChrgC_dham;
                                     /* '<S86>/DCChrMgmt_DcChrgCommErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_nybi_T ARID_DEF_ATOM_U16ErrorHand_dype;/* '<S86>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_glkg_T ARID_DEF_DCChrMgmt_DcChrgC_lxo5;
                                     /* '<S85>/DCChrMgmt_DcChrgCommErrSetCdn' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_owjr;/* '<S85>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_kiod_T ARID_DEF_DCChrMgmt_DcChrgC_bjbg;
                                     /* '<S84>/DCChrMgmt_DcChrgCommErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_iae2_T ARID_DEF_ATOM_U16ErrorHand_nueb;/* '<S84>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_bsqw;/* '<S83>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_lnjd;/* '<S82>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_kfub_T ARID_DEF_DCChrMgmt_DcChrgC_hv2h;
                                 /* '<S81>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg' */
  ARID_DEF_ATOM_U16ErrHnd_gu3w_T ARID_DEF_ATOM_U16ErrorHand_bnly;/* '<S81>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_dapv;/* '<S80>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_mju5_T ARID_DEF_DCChrMgmt_DcChrgC_ezql;
                                 /* '<S79>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg' */
  ARID_DEF_ATOM_U16ErrHnd_fkx5_T ARID_DEF_ATOM_U16ErrorHand_bjvj;/* '<S79>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_jzx3;/* '<S78>/ATOM_U16ErrorHandle' */
  ARID_DEF_DCChrMgmt_DcChr_kiod_T ARID_DEF_DCChrMgmt_DcChrgC_fdin;
                                     /* '<S77>/DCChrMgmt_DcChrgCommErrEnaCdn' */
  ARID_DEF_ATOM_U16ErrHnd_jjfm_T ARID_DEF_ATOM_U16ErrorHand_al00;/* '<S77>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_U16ErrHnd_CtAp__T ARID_DEF_ATOM_U16ErrorHand_ju13;/* '<S76>/ATOM_U16ErrorHandle' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay;/* '<S67>/ATOM_OnDelay' */
  dt_DCChrMgmt_BEMRxCCSTmt RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus;
    /* '<Root>/RTE_P_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus' */
  dt_DCChrMgmt_BEMRxCCSTmtDTC RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCCSTmtDTC_Bus_tec_DCChrMgmt_BEMRxCCSTmtDTC_Bus' */
  dt_DCChrMgmt_BEMRxCMLTmt RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus;
    /* '<Root>/RTE_P_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus' */
  dt_DCChrMgmt_BEMRxCMLTmtDTC RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCMLTmtDTC_Bus_tec_DCChrMgmt_BEMRxCMLTmtDTC_Bus' */
  dt_DCChrMgmt_BEMRxCRMPrepdTmt RTE_P_DCChrMgmt_BEMRxCRMPrepdTm;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus' */
  dt_DCChrMgmt_BEMRxCRMPrepdTmtDTC RTE_P_DCChrMgmt_BEMRxCRMPr_gqzx;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmtDTC_Bus' */
  dt_DCChrMgmt_BEMRxCRMTmt RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus;
    /* '<Root>/RTE_P_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus' */
  dt_DCChrMgmt_BEMRxCRMTmtDTC RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCRMTmtDTC_Bus_tec_DCChrMgmt_BEMRxCRMTmtDTC_Bus' */
  dt_DCChrMgmt_BEMRxCROPrepdTmt RTE_P_DCChrMgmt_BEMRxCROPrepdTm;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus' */
  dt_DCChrMgmt_BEMRxCROPrepdTmtDTC RTE_P_DCChrMgmt_BEMRxCROPr_cskl;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmtDTC_Bus' */
  dt_DCChrMgmt_BEMRxCROTmt RTE_P_DCChrMgmt_BEMRxCROTmt_Bus;
    /* '<Root>/RTE_P_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus' */
  dt_DCChrMgmt_BEMRxCROTmtDTC RTE_P_DCChrMgmt_BEMRxCROTmtDTC_;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCROTmtDTC_Bus_tec_DCChrMgmt_BEMRxCROTmtDTC_Bus' */
  dt_DCChrMgmt_BEMRxCSDTmt RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus;
    /* '<Root>/RTE_P_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus' */
  dt_DCChrMgmt_BEMRxCSDTmtDTC RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCSDTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSDTmtDTC_Bus' */
  dt_DCChrMgmt_BEMRxCSTTmt RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus;
    /* '<Root>/RTE_P_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus' */
  dt_DCChrMgmt_BEMRxCSTTmtDTC RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_;
  /* '<Root>/RTE_P_DCChrMgmt_BEMRxCSTTmtDTC_Bus_tec_DCChrMgmt_BEMRxCSTTmtDTC_Bus' */
  dt_DCChrMgmt_DcPortTempErrLvl1 RTE_P_DCChrMgmt_DcPortTempErrLv;
  /* '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl1_Bus_tec_DCChrMgmt_DcPortTempErrLvl1_Bus' */
  dt_DCChrMgmt_DcPortTempErrLvl1DTC RTE_P_DCChrMgmt_DcPortTemp_ofxn;
  /* '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl1DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl1DTC_Bus' */
  dt_DCChrMgmt_DcPortTempErrLvl2 RTE_P_DCChrMgmt_DcPortTemp_gege;
  /* '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl2_Bus_tec_DCChrMgmt_DcPortTempErrLvl2_Bus' */
  dt_DCChrMgmt_DcPortTempErrLvl2DTC RTE_P_DCChrMgmt_DcPortTemp_fnpo;
  /* '<Root>/RTE_P_DCChrMgmt_DcPortTempErrLvl2DTC_Bus_tec_DCChrMgmt_DcPortTempErrLvl2DTC_Bus' */
  dt_DCChrMgmt_DcPortTempSnsrErr RTE_P_DCChrMgmt_DcPortTempSnsrE;
  /* '<Root>/RTE_P_DCChrMgmt_DcPortTempSnsrErr_Bus_tec_DCChrMgmt_DcPortTempSnsrErr_Bus' */
  dt_DCChrMgmt_DcPortTempSnsrErrDTC RTE_P_DCChrMgmt_DcPortTemp_oldb;
  /* '<Root>/RTE_P_DCChrMgmt_DcPortTempSnsrErrDTC_Bus_tec_DCChrMgmt_DcPortTempSnsrErrDTC_Bus' */
  uint8_T Switch8_nmza;                /* '<S205>/Switch8' */
  uint8_T Delay_10_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_11_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_14_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_15_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_18_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_19_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_2_DSTATE;              /* '<S2>/Delay' */
  uint8_T Delay_22_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_23_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_26_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_27_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_3_DSTATE;              /* '<S2>/Delay' */
  uint8_T Delay_30_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_31_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_34_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_35_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_38_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_39_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_42_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_43_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_46_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_47_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_50_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_51_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_54_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_55_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_58_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_59_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_6_DSTATE;              /* '<S2>/Delay' */
  uint8_T Delay_62_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_63_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_66_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_67_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_7_DSTATE;              /* '<S2>/Delay' */
  uint8_T Delay_70_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_71_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_74_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_75_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_78_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_82_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_83_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_86_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_87_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_DSTATE;                /* '<S68>/Delay' */
  uint8_T Delay1_DSTATE;               /* '<S69>/Delay1' */
  uint8_T Delay_DSTATE_jrfd;           /* '<S69>/Delay' */
  boolean_T Delay_80_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_84_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_88_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_48_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_52_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_56_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_60_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_64_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_68_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_72_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_76_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay1_DSTATE_er0d;        /* '<S68>/Delay1' */
  boolean_T Delay_DSTATE_nvy0;         /* '<S9>/Delay' */
} ARID_DEF_CtAp_ChrgComM_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgComM_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgComM_MemMap.h"

extern ARID_DEF_CtAp_ChrgComM_T CtAp_ChrgComM_ARID_DEF;

#define CtAp_ChrgComM_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgComM_MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CtAp_ChrgComM'
 * '<S1>'   : 'CtAp_ChrgComM/DocBlock'
 * '<S2>'   : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_ChrgComM/R_ChrgComM_Init'
 * '<S4>'   : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication'
 * '<S5>'   : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle'
 * '<S6>'   : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM'
 * '<S7>'   : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST'
 * '<S8>'   : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts'
 * '<S9>'   : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/CML'
 * '<S10>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt'
 * '<S11>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If1'
 * '<S12>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If10'
 * '<S13>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If2'
 * '<S14>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If21'
 * '<S15>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If22'
 * '<S16>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If3'
 * '<S17>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If4'
 * '<S18>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If5'
 * '<S19>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If6'
 * '<S20>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If7'
 * '<S21>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If8'
 * '<S22>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSM/If9'
 * '<S23>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If'
 * '<S24>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If1'
 * '<S25>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If10'
 * '<S26>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If11'
 * '<S27>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If12'
 * '<S28>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If13'
 * '<S29>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If14'
 * '<S30>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If15'
 * '<S31>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If16'
 * '<S32>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If17'
 * '<S33>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If18'
 * '<S34>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If19'
 * '<S35>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If2'
 * '<S36>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If20'
 * '<S37>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If21'
 * '<S38>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If22'
 * '<S39>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If3'
 * '<S40>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If4'
 * '<S41>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If5'
 * '<S42>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If6'
 * '<S43>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If7'
 * '<S44>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If8'
 * '<S45>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BST/If9'
 * '<S46>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant'
 * '<S47>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant1'
 * '<S48>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant10'
 * '<S49>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant11'
 * '<S50>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant12'
 * '<S51>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant13'
 * '<S52>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant2'
 * '<S53>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant3'
 * '<S54>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant4'
 * '<S55>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant5'
 * '<S56>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant6'
 * '<S57>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant7'
 * '<S58>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant8'
 * '<S59>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/BSTTxSts/CompareToConstant9'
 * '<S60>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/CML/CompareToConstant'
 * '<S61>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/CML/CompareToConstant1'
 * '<S62>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/CML/CompareToConstant2'
 * '<S63>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/CML/If'
 * '<S64>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/CML/If1'
 * '<S65>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/CML/If2'
 * '<S66>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/CML/If3'
 * '<S67>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt/DCChrMgmt_BEMTxReqSts'
 * '<S68>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt/DCChrMgmt_CEMTmt'
 * '<S69>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt/DCChrMgmt_DCTmtCnt'
 * '<S70>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt/DCChrMgmt_BEMTxReqSts/ATOM_OnDelay'
 * '<S71>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt/DCChrMgmt_BEMTxReqSts/CompareToConstant'
 * '<S72>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt/DCChrMgmt_BEMTxReqSts/If'
 * '<S73>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt/DCChrMgmt_BEMTxReqSts/If1'
 * '<S74>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt/DCChrMgmt_DCTmtCnt/If'
 * '<S75>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_Communication/Tmt/DCChrMgmt_DCTmtCnt/If1'
 * '<S76>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmt'
 * '<S77>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmtDTC'
 * '<S78>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmt'
 * '<S79>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmtDTC'
 * '<S80>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmt'
 * '<S81>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmtDTC'
 * '<S82>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMTmt'
 * '<S83>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmt'
 * '<S84>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmtDTC'
 * '<S85>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmt'
 * '<S86>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmtDTC'
 * '<S87>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmt'
 * '<S88>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmtDTC'
 * '<S89>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmt'
 * '<S90>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmtDTC'
 * '<S91>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1'
 * '<S92>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1DTC'
 * '<S93>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2'
 * '<S94>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2DTC'
 * '<S95>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErr'
 * '<S96>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErrDTC'
 * '<S97>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_ErrResBEMRxCRMTmtDTC'
 * '<S98>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmt/ATOM_U16ErrorHandle'
 * '<S99>'  : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmt/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S100>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmt/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S101>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S102>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S103>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S104>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmtDTC/ATOM_U16ErrorHandle'
 * '<S105>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn'
 * '<S106>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmtDTC/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S107>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmtDTC/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S108>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S109>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S110>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S111>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCCSTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn/ATOM_TimeCnt'
 * '<S112>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmt/ATOM_U16ErrorHandle'
 * '<S113>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmt/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S114>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmt/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S115>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S116>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S117>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S118>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmtDTC/ATOM_U16ErrorHandle'
 * '<S119>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn_Flg'
 * '<S120>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmtDTC/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
 * '<S121>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmtDTC/DCChrMgmt_DcChrgCommErrSetCdn_Flg'
 * '<S122>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S123>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S124>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S125>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCMLTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn_Flg/ATOM_TimeCnt'
 * '<S126>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmt/ATOM_U16ErrorHandle'
 * '<S127>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmt/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S128>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmt/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S129>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S130>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S131>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S132>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmtDTC/ATOM_U16ErrorHandle'
 * '<S133>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn_Flg'
 * '<S134>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmtDTC/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
 * '<S135>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmtDTC/DCChrMgmt_DcChrgCommErrSetCdn_Flg'
 * '<S136>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S137>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S138>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S139>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMPrepdTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn_Flg/ATOM_TimeCnt'
 * '<S140>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMTmt/ATOM_U16ErrorHandle'
 * '<S141>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMTmt/CChrMgmt_DcChrgCommErrSetCdn'
 * '<S142>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMTmt/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S143>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S144>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S145>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCRMTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S146>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmt/ATOM_U16ErrorHandle'
 * '<S147>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmt/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S148>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmt/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S149>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S150>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S151>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S152>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmtDTC/ATOM_U16ErrorHandle'
 * '<S153>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn'
 * '<S154>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmtDTC/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
 * '<S155>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmtDTC/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S156>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S157>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S158>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S159>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROPrepdTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn/ATOM_TimeCnt'
 * '<S160>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmt/ATOM_U16ErrorHandle'
 * '<S161>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmt/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S162>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmt/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S163>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S164>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S165>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S166>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmtDTC/ATOM_U16ErrorHandle'
 * '<S167>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn'
 * '<S168>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmtDTC/DCChrMgmt_DcChrgCommErrResetCdn_Flg'
 * '<S169>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmtDTC/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S170>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S171>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S172>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S173>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCROTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn/ATOM_TimeCnt'
 * '<S174>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmt/ATOM_U16ErrorHandle'
 * '<S175>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmt/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S176>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmt/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S177>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S178>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S179>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S180>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmtDTC/ATOM_U16ErrorHandle'
 * '<S181>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn'
 * '<S182>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmtDTC/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S183>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmtDTC/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S184>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S185>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S186>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S187>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSDTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn/ATOM_TimeCnt'
 * '<S188>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmt/ATOM_U16ErrorHandle'
 * '<S189>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmt/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S190>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmt/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S191>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S192>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S193>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmt/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S194>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmtDTC/ATOM_U16ErrorHandle'
 * '<S195>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn'
 * '<S196>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmtDTC/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S197>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmtDTC/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S198>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S199>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S200>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S201>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_BEMRxCSTTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn/ATOM_TimeCnt'
 * '<S202>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1/ATOM_U16ErrorHandle'
 * '<S203>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S204>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S205>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S206>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S207>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S208>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1DTC/ATOM_U16ErrorHandle'
 * '<S209>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1DTC/DCChrMgmt_DcChrgCommErrEnaCdn'
 * '<S210>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1DTC/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S211>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1DTC/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S212>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1DTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S213>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1DTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S214>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1DTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S215>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl1DTC/DCChrMgmt_DcChrgCommErrEnaCdn/ATOM_TimeCnt'
 * '<S216>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2/ATOM_U16ErrorHandle'
 * '<S217>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S218>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S219>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S220>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S221>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S222>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2DTC/ATOM_U16ErrorHandle'
 * '<S223>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2DTC/DCChrMgmt_DcChrgCommErrEnaCdn'
 * '<S224>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2DTC/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S225>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2DTC/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S226>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2DTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S227>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2DTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S228>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2DTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S229>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempErrLvl2DTC/DCChrMgmt_DcChrgCommErrEnaCdn/ATOM_TimeCnt'
 * '<S230>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErr/ATOM_U16ErrorHandle'
 * '<S231>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErr/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S232>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErr/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S233>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErr/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S234>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S235>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErr/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S236>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErrDTC/ATOM_U16ErrorHandle'
 * '<S237>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErrDTC/DCChrMgmt_DcChrgCommErrEnaCdn'
 * '<S238>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErrDTC/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S239>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErrDTC/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S240>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S241>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S242>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErrDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S243>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_DcPortTempSnsrErrDTC/DCChrMgmt_DcChrgCommErrEnaCdn/ATOM_TimeCnt'
 * '<S244>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_ErrResBEMRxCRMTmtDTC/ATOM_U16ErrorHandle'
 * '<S245>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_ErrResBEMRxCRMTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn'
 * '<S246>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_ErrResBEMRxCRMTmtDTC/DCChrMgmt_DcChrgCommErrResetCdn'
 * '<S247>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_ErrResBEMRxCRMTmtDTC/DCChrMgmt_DcChrgCommErrSetCdn'
 * '<S248>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_ErrResBEMRxCRMTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16'
 * '<S249>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_ErrResBEMRxCRMTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay'
 * '<S250>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_ErrResBEMRxCRMTmtDTC/ATOM_U16ErrorHandle/ErrorHandleSysU16/OnDelay1'
 * '<S251>' : 'CtAp_ChrgComM/R_ChrgComM_Cyclic_50ms_sys/DCChrMgmt_ErrolHandle/DCChrMgmt_ErrResBEMRxCRMTmtDTC/DCChrMgmt_DcChrgCommErrEnaCdn/ATOM_TimeCnt'
 */

/*-
 * Requirements for '<Root>': CtAp_ChrgComM

 *
 * Inherited requirements for '<S4>/BSM':
 *  1. SWREQ_02663 BSM
 *  2. SWREQ_02664 BSM
 *  3. SWREQ_02665 BSM
 *  4. SWREQ_02666 BSM
 *  5. SWREQ_02667 BSM
 *  6. SWREQ_02668 BSM
 *  7. SWREQ_02669 BSM
 *  8. SWREQ_02670 BSM
 *  9. SWREQ_02671 BSM
 *  10. SWREQ_02672 BSM
 *  11. SWREQ_02673 BSM
 *  12. SWREQ_02674 BSM
 *  13. SWREQ_02675 BSM
 *  14. SWREQ_02676 BSM
 *  15. SWREQ_02677 BSM
 *  16. SWREQ_02678 BSM
 *  17. SWREQ_02679 BSM
 *  18. SWREQ_02680 BSM
 *
 * Inherited requirements for '<S4>/BST':
 *  1. SWREQ_02626 BST
 *  2. SWREQ_02627 BST
 *  3. SWREQ_02628 BST
 *  4. SWREQ_02629 BST
 *  5. SWREQ_02630 BST
 *  6. SWREQ_02631 BST
 *  7. SWREQ_02632 BST
 *  8. SWREQ_02633 BST
 *  9. SWREQ_02634 BST
 *  10. SWREQ_02635 BST
 *  11. SWREQ_02636 BST
 *  12. SWREQ_02637 BST
 *  13. SWREQ_02638 BST
 *  14. SWREQ_02639 BST
 *  15. SWREQ_02640 BST
 *  16. SWREQ_02641 BST
 *  17. SWREQ_02642 BST
 *  18. SWREQ_02643 BST
 *  19. SWREQ_02644 BST
 *  20. SWREQ_02645 BST
 *  21. SWREQ_02646 BST
 *  22. SWREQ_02647 BST
 *  23. SWREQ_02648 BST
 *  24. SWREQ_02649 BST
 *  25. SWREQ_02650 BST
 *  26. SWREQ_02651 BST
 *  27. SWREQ_02652 BST
 *  28. SWREQ_02653 BST
 *  29. SWREQ_02654 BST
 *  30. SWREQ_02655 BST
 *  31. SWREQ_02656 BST
 *  32. SWREQ_02657 BST
 *  33. SWREQ_02658 BST
 *  34. SWREQ_02659 BST
 *  35. SWREQ_02660 BST
 *  36. SWREQ_02661 BST
 *  37. SWREQ_02662 BST
 *
 * Inherited requirements for '<S4>/BSTTxSts':
 *  1. SWREQ_06477 BST Req DC Stop
 *  2. SWREQ_06478 BST Req DC Stop
 *
 * Inherited requirements for '<S4>/CML':
 *  1. SWREQ_02622 CML
 *  2. SWREQ_02623 CML
 *  3. SWREQ_02624 CML
 *  4. SWREQ_02625 CML
 *
 * Inherited requirements for '<S6>/If1':
 *  1. SWREQ_02666 BSM
 *
 * Inherited requirements for '<S6>/If10':
 *  1. SWREQ_02679 BSM
 *
 * Inherited requirements for '<S6>/If2':
 *  1. SWREQ_02667 BSM
 *
 * Inherited requirements for '<S6>/If21':
 *  1. SWREQ_02663 BSM
 *
 * Inherited requirements for '<S6>/If22':
 *  1. SWREQ_02664 BSM
 *
 * Inherited requirements for '<S6>/If3':
 *  1. SWREQ_02669 BSM
 *
 * Inherited requirements for '<S6>/If4':
 *  1. SWREQ_02670 BSM
 *
 * Inherited requirements for '<S6>/If5':
 *  1. SWREQ_02672 BSM
 *
 * Inherited requirements for '<S6>/If6':
 *  1. SWREQ_02673 BSM
 *
 * Inherited requirements for '<S6>/If7':
 *  1. SWREQ_02675 BSM
 *
 * Inherited requirements for '<S6>/If8':
 *  1. SWREQ_02676 BSM
 *
 * Inherited requirements for '<S6>/If9':
 *  1. SWREQ_02678 BSM
 *
 * Inherited requirements for '<S7>/If1':
 *  1. SWREQ_02628 BST
 *
 * Inherited requirements for '<S7>/If10':
 *  1. SWREQ_02642 BST
 *
 * Inherited requirements for '<S7>/If11':
 *  1. SWREQ_02643 BST
 *
 * Inherited requirements for '<S7>/If12':
 *  1. SWREQ_02645 BST
 *
 * Inherited requirements for '<S7>/If13':
 *  1. SWREQ_02646 BST
 *
 * Inherited requirements for '<S7>/If14':
 *  1. SWREQ_02648 BST
 *
 * Inherited requirements for '<S7>/If15':
 *  1. SWREQ_02650 BST
 *
 * Inherited requirements for '<S7>/If16':
 *  1. SWREQ_02651 BST
 *
 * Inherited requirements for '<S7>/If17':
 *  1. SWREQ_02653 BST
 *
 * Inherited requirements for '<S7>/If18':
 *  1. SWREQ_02655 BST
 *
 * Inherited requirements for '<S7>/If19':
 *  1. SWREQ_02656 BST
 *
 * Inherited requirements for '<S7>/If2':
 *  1. SWREQ_02629 BST
 *
 * Inherited requirements for '<S7>/If20':
 *  1. SWREQ_02658 BST
 *
 * Inherited requirements for '<S7>/If21':
 *  1. SWREQ_02660 BST
 *
 * Inherited requirements for '<S7>/If22':
 *  1. SWREQ_02661 BST
 *
 * Inherited requirements for '<S7>/If3':
 *  1. SWREQ_02631 BST
 *
 * Inherited requirements for '<S7>/If4':
 *  1. SWREQ_02632 BST
 *
 * Inherited requirements for '<S7>/If5':
 *  1. SWREQ_02634 BST
 *
 * Inherited requirements for '<S7>/If6':
 *  1. SWREQ_02635 BST
 *
 * Inherited requirements for '<S7>/If7':
 *  1. SWREQ_02637 BST
 *
 * Inherited requirements for '<S7>/If8':
 *  1. SWREQ_02639 BST
 *
 * Inherited requirements for '<S7>/If9':
 *  1. SWREQ_02640 BST
 *
 * Inherited requirements for '<S9>/If':
 *  1. SWREQ_02622 CML
 *  2. SWREQ_02623 CML
 *
 * Inherited requirements for '<S10>/DCChrMgmt_DCTmtCnt':
 *  1. SWREQ_02686 BEM
 *  2. SWREQ_02687 BEM count
 *  3. SWREQ_02688 BEM count
 *
 * Inherited requirements for '<S76>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02980 ccs Tmt Error
 *
 * Inherited requirements for '<S76>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02971 ccs Tmt Error
 *
 * Inherited requirements for '<S76>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02969 ccs Tmt Error
 *
 * Inherited requirements for '<S77>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02793 CCS Tmt DTC
 *
 * Inherited requirements for '<S77>/DCChrMgmt_DcChrgCommErrEnaCdn':
 *  1. SWREQ_02786 CCS Tmt DTC
 *
 * Inherited requirements for '<S77>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02784 CCS Tmt DTC
 *
 * Inherited requirements for '<S77>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02782 CCS Tmt DTC
 *
 * Inherited requirements for '<S78>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02929 CML Tmt Error
 *
 * Inherited requirements for '<S78>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02920 CML Tmt Error
 *
 * Inherited requirements for '<S78>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02918 CML Tmt Error
 *
 * Inherited requirements for '<S79>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02742 CML Tmt DTC
 *
 * Inherited requirements for '<S79>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg':
 *  1. SWREQ_02735 CML Tmt DTC
 *
 * Inherited requirements for '<S79>/DCChrMgmt_DcChrgCommErrResetCdn_Flg':
 *  1. SWREQ_02716 CRM 0xAA Tmt DTC
 *
 * Inherited requirements for '<S79>/DCChrMgmt_DcChrgCommErrSetCdn_Flg':
 *  1. SWREQ_02731 CML Tmt DTC
 *
 * Inherited requirements for '<S80>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02912 CRM OxAA Error
 *
 * Inherited requirements for '<S80>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02903 CRM OxAA Error
 *
 * Inherited requirements for '<S80>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02901 CRM OxAA Error
 *
 * Inherited requirements for '<S81>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02725 CRM 0xAA Tmt DTC
 *
 * Inherited requirements for '<S81>/DCChrMgmt_DcChrgCommErrEnaCdn_Flg':
 *  1. SWREQ_02718 CRM 0xAA Tmt DTC
 *
 * Inherited requirements for '<S81>/DCChrMgmt_DcChrgCommErrResetCdn_Flg':
 *  1. SWREQ_02716 CRM 0xAA Tmt DTC
 *
 * Inherited requirements for '<S81>/DCChrMgmt_DcChrgCommErrSetCdn_Flg':
 *  1. SWREQ_02714 CRM 0xAA Tmt DTC
 *
 * Inherited requirements for '<S82>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02895 CRM Tmt Error
 *
 * Inherited requirements for '<S82>/CChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02884 CRM Tmt Error
 *
 * Inherited requirements for '<S82>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02886 CRM Tmt Error
 *
 * Inherited requirements for '<S83>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02963 CRO 0xAA Tmt Error
 *
 * Inherited requirements for '<S83>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02954 CRO 0xAA Tmt Error
 *
 * Inherited requirements for '<S83>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02952 CRO 0xAA Tmt Error
 *
 * Inherited requirements for '<S84>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02776 CRO 0xAA Tmt DTC
 *
 * Inherited requirements for '<S84>/DCChrMgmt_DcChrgCommErrEnaCdn':
 *  1. SWREQ_02769 CRO 0xAA Tmt DTC
 *
 * Inherited requirements for '<S84>/DCChrMgmt_DcChrgCommErrResetCdn_Flg':
 *  1. SWREQ_02716 CRM 0xAA Tmt DTC
 *
 * Inherited requirements for '<S84>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02765 CRO 0xAA Tmt DTC
 *
 * Inherited requirements for '<S85>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02946 CRO  Tmt Error
 *
 * Inherited requirements for '<S85>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02937 CRO  Tmt Error
 *
 * Inherited requirements for '<S85>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02935 CRO  Tmt Error
 *
 * Inherited requirements for '<S86>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02759 CRO Tmt DTC
 *
 * Inherited requirements for '<S86>/DCChrMgmt_DcChrgCommErrEnaCdn':
 *  1. SWREQ_02752 CRO Tmt DTC
 *
 * Inherited requirements for '<S86>/DCChrMgmt_DcChrgCommErrResetCdn_Flg':
 *  1. SWREQ_02716 CRM 0xAA Tmt DTC
 *
 * Inherited requirements for '<S86>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02748 CRO Tmt DTC
 *
 * Inherited requirements for '<S87>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03014 CSD Tmt Error
 *
 * Inherited requirements for '<S87>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_03005 CSD Tmt Error
 *
 * Inherited requirements for '<S87>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_03003 CSD Tmt Error
 *
 * Inherited requirements for '<S88>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02827 CSD Tmt DTC
 *
 * Inherited requirements for '<S88>/DCChrMgmt_DcChrgCommErrEnaCdn':
 *  1. SWREQ_02820 CSD Tmt DTC
 *
 * Inherited requirements for '<S88>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02818 CSD Tmt DTC
 *
 * Inherited requirements for '<S88>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02816 CSD Tmt DTC
 *
 * Inherited requirements for '<S89>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02997 CST Tmt Error
 *
 * Inherited requirements for '<S89>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02988 CST Tmt Error
 *
 * Inherited requirements for '<S89>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02986 CST Tmt Error
 *
 * Inherited requirements for '<S90>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02810 CST Tmt DTC
 *
 * Inherited requirements for '<S90>/DCChrMgmt_DcChrgCommErrEnaCdn':
 *  1. SWREQ_02803 CST Tmt DTC
 *
 * Inherited requirements for '<S90>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02801 CST Tmt DTC
 *
 * Inherited requirements for '<S90>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02799 CST Tmt DTC
 *
 * Inherited requirements for '<S91>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03031 Port temp lv1 Error
 *
 * Inherited requirements for '<S91>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_03022 Port temp lv1 Error
 *
 * Inherited requirements for '<S91>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_03020 Port temp lv1 Error
 *
 * Inherited requirements for '<S92>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02844 Port Temp lv1 DTC
 *
 * Inherited requirements for '<S92>/DCChrMgmt_DcChrgCommErrEnaCdn':
 *  1. SWREQ_02837 Port Temp lv1 DTC
 *
 * Inherited requirements for '<S92>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02835 Port Temp lv1 DTC
 *
 * Inherited requirements for '<S92>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02833 Port Temp lv1 DTC
 *
 * Inherited requirements for '<S93>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03048 Port temp lv2 Error
 *
 * Inherited requirements for '<S93>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_03039 Port temp lv2 Error
 *
 * Inherited requirements for '<S93>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_03037 Port temp lv2 Error
 *
 * Inherited requirements for '<S94>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02861 Port Temp lv2 DTC
 *
 * Inherited requirements for '<S94>/DCChrMgmt_DcChrgCommErrEnaCdn':
 *  1. SWREQ_02854 Port Temp lv2 DTC
 *
 * Inherited requirements for '<S94>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02852 Port Temp lv2 DTC
 *
 * Inherited requirements for '<S94>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02850 Port Temp lv2 DTC
 *
 * Inherited requirements for '<S95>/ATOM_U16ErrorHandle':
 *  1. SWREQ_03065 Port temp sense Error
 *
 * Inherited requirements for '<S95>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_03056 Port temp sense Error
 *
 * Inherited requirements for '<S95>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_03054 Port temp sense Error
 *
 * Inherited requirements for '<S96>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02878 Port Temp sense DTC
 *
 * Inherited requirements for '<S96>/DCChrMgmt_DcChrgCommErrEnaCdn':
 *  1. SWREQ_02871 Port Temp sense DTC
 *
 * Inherited requirements for '<S96>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02869 Port Temp sense DTC
 *
 * Inherited requirements for '<S96>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02867 Port Temp sense DTC
 *
 * Inherited requirements for '<S97>/ATOM_U16ErrorHandle':
 *  1. SWREQ_02708 CRM Tmt DTC
 *
 * Inherited requirements for '<S97>/DCChrMgmt_DcChrgCommErrEnaCdn':
 *  1. SWREQ_02701 CRM Tmt DTC
 *
 * Inherited requirements for '<S97>/DCChrMgmt_DcChrgCommErrResetCdn':
 *  1. SWREQ_02699 CRM Tmt DTC
 *
 * Inherited requirements for '<S97>/DCChrMgmt_DcChrgCommErrSetCdn':
 *  1. SWREQ_02697 CRM Tmt DTC
 *
 * Inherited requirements for '<S67>/If1':
 *  1. SWREQ_02690 BEM reconnect
 *
 * Inherited requirements for '<S69>/If':
 *  1. SWREQ_02687 BEM count
 *
 * Inherited requirements for '<S69>/If1':
 *  1. SWREQ_02686 BEM
 *  2. SWREQ_02688 BEM count

 */
#endif                                 /* RTW_HEADER_CtAp_ChrgComM_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
