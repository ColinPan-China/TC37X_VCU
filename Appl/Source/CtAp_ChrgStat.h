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
 *  Filename:           CtAp_ChrgStat.h
 *  File Creation Date: 11-Sep-2025
 *  Model Name:         CtAp_ChrgStat
 *  Model Version:      1.014
 *  Model Author:       Mike Ni - Fri Aug 16 10:06:16 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Sep 11 14:36:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Sep 11 14:35:06 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ChrgStat_h_
#define RTW_HEADER_CtAp_ChrgStat_h_
#ifndef CtAp_ChrgStat_COMMON_INCLUDES_
#define CtAp_ChrgStat_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ChrgStat.h"
#endif                                 /* CtAp_ChrgStat_COMMON_INCLUDES_ */

#include "CtAp_ChrgStat_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "VCU_TempGlobal.h"
#include "CtAp_ChrgStat_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ChrgPreHeat_DCPreheatAndChargingPre 9U                   /* Referenced by:
                                                                  * '<S87>/Constant'
                                                                  * '<S93>/Constant'
                                                                  */
#define ChrgStat_ACCharging            5U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S134>/Define'
                                                                  * '<S135>/Define'
                                                                  * '<S16>/Define'
                                                                  * '<S18>/Define'
                                                                  * '<S121>/Define1'
                                                                  * '<S29>/Define2'
                                                                  * '<S29>/Define9'
                                                                  * '<S33>/Define5'
                                                                  * '<S33>/Define9'
                                                                  * '<S34>/Define'
                                                                  */
#define ChrgStat_ACPlugActive          3U                        /* Referenced by:
                                                                  * '<S152>/Define11'
                                                                  * '<S154>/Define11'
                                                                  * '<S154>/Define16'
                                                                  */
#define ChrgStat_ACPlugDetected        2U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S115>/Define3'
                                                                  * '<S120>/Define'
                                                                  * '<S200>/Define'
                                                                  * '<S206>/Define'
                                                                  * '<S22>/Define'
                                                                  * '<S121>/Define'
                                                                  * '<S123>/Define'
                                                                  * '<S124>/Define'
                                                                  * '<S54>/Define'
                                                                  * '<S56>/Define'
                                                                  */
#define ChrgStat_ACPlugFault           4U                        /* Referenced by:
                                                                  * '<S152>/Define3'
                                                                  * '<S154>/Define1'
                                                                  */
#define ChrgStat_ACPlugInactive        1U                        /* Referenced by:
                                                                  * '<S152>/Define20'
                                                                  * '<S154>/Define20'
                                                                  */
#define ChrgStat_ACPlugLocked          3U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S154>/Define17'
                                                                  */
#define ChrgStat_ACPlugUnlocked        2U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S154>/Define13'
                                                                  */
#define ChrgStat_ACPlugUntrustableTim  500U                      /* Referenced by: '<S154>/Define26' */
#define ChrgStat_ACPreheatAndChargingPre 7U                      /* Referenced by:
                                                                  * '<S35>/Constant'
                                                                  * '<S43>/Constant'
                                                                  */
#define ChrgStat_ACPreheating          10U                       /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S134>/Define1'
                                                                  * '<S135>/Define2'
                                                                  * '<S18>/Define5'
                                                                  * '<S121>/Define2'
                                                                  * '<S34>/Define16'
                                                                  */
#define ChrgStat_ACandDCPlug           6U                        /* Referenced by: '<S154>/Define6' */
#define ChrgStat_Active                true                      /* Referenced by:
                                                                  * '<S120>/Define15'
                                                                  * '<S194>/Define'
                                                                  * '<S205>/Define'
                                                                  * '<S217>/Define'
                                                                  * '<S18>/Define19'
                                                                  * '<S23>/Define19'
                                                                  * '<S75>/Define3'
                                                                  * '<S125>/Define2'
                                                                  * '<S29>/Define3'
                                                                  * '<S33>/Define3'
                                                                  * '<S54>/Define1'
                                                                  * '<S80>/Define4'
                                                                  * '<S80>/Define5'
                                                                  * '<S80>/Define6'
                                                                  * '<S85>/Define2'
                                                                  * '<S85>/Define4'
                                                                  * '<S85>/Define5'
                                                                  */
#define ChrgStat_CCUnconnect           0U                        /* Referenced by:
                                                                  * '<S152>/Define17'
                                                                  * '<S154>/Define22'
                                                                  * '<S70>/Define5'
                                                                  * '<S30>/Define1'
                                                                  * '<S108>/Define3'
                                                                  */
#define ChrgStat_CC_100Ohm             5U                        /* Referenced by:
                                                                  * '<S152>/Define8'
                                                                  * '<S13>/Define8'
                                                                  * '<S82>/Define8'
                                                                  */
#define ChrgStat_CC_1500Ohm            2U                        /* Referenced by:
                                                                  * '<S152>/Define5'
                                                                  * '<S13>/Define5'
                                                                  * '<S82>/Define5'
                                                                  */
#define ChrgStat_CC_2000Ohm            6U                        /* Referenced by:
                                                                  * '<S152>/Define12'
                                                                  * '<S103>/Define8'
                                                                  * '<S30>/Define2'
                                                                  * '<S52>/Define2'
                                                                  * '<S82>/Define4'
                                                                  */
#define ChrgStat_CC_220Ohm             4U                        /* Referenced by:
                                                                  * '<S152>/Define7'
                                                                  * '<S13>/Define7'
                                                                  * '<S82>/Define3'
                                                                  */
#define ChrgStat_CC_2700Ohm            7U                        /* Referenced by:
                                                                  * '<S152>/Define13'
                                                                  * '<S103>/Define7'
                                                                  * '<S30>/Define3'
                                                                  * '<S52>/Define3'
                                                                  * '<S82>/Define9'
                                                                  */
#define ChrgStat_CC_680Ohm             3U                        /* Referenced by:
                                                                  * '<S152>/Define6'
                                                                  * '<S13>/Define6'
                                                                  * '<S82>/Define2'
                                                                  */
#define ChrgStat_CC_Fault              10U                       /* Referenced by:
                                                                  * '<S152>/Define'
                                                                  * '<S154>/Define4'
                                                                  * '<S108>/Define4'
                                                                  */
#define ChrgStat_CP6V                  3U                        /* Referenced by:
                                                                  * '<S18>/Define10'
                                                                  * '<S23>/Define10'
                                                                  */
#define ChrgStat_CP9V                  1U                        /* Referenced by:
                                                                  * '<S18>/Define8'
                                                                  * '<S23>/Define8'
                                                                  */
#define ChrgStat_CP9VPWM               2U                        /* Referenced by:
                                                                  * '<S13>/Define9'
                                                                  * '<S18>/Define9'
                                                                  * '<S23>/Define9'
                                                                  */
#define ChrgStat_CPCheckTim            300U                      /* Referenced by:
                                                                  * '<S18>/Define13'
                                                                  * '<S23>/Define13'
                                                                  * '<S30>/Define16'
                                                                  */
#define ChrgStat_CPFault               5U                        /* Referenced by: '<S30>/Define17' */
#define ChrgStat_CPPwmLower            8U                        /* Referenced by: '<S32>/Define5' */
#define ChrgStat_CPPwmTimeout          2000U                     /* Referenced by: '<S32>/Define8' */
#define ChrgStat_CPPwmUpper            90U                       /* Referenced by: '<S32>/Define4' */
#define ChrgStat_CPUnecooect           0U                        /* Referenced by: '<S30>/Define4' */
#define ChrgStat_ChargeAndAcHeat       3U                        /* Referenced by: '<S32>/Define22' */
#define ChrgStat_ChargeAndDcHeat       2U                        /* Referenced by: '<S84>/Define22' */
#define ChrgStat_ChargeAppointment     2U                        /* Referenced by:
                                                                  * '<S14>/Define1'
                                                                  * '<S18>/Define3'
                                                                  * '<S62>/Constant'
                                                                  */
#define ChrgStat_ChargeFaultAndSlow    1U                        /* Referenced by: '<S134>/Define5' */
#define ChrgStat_ChargeImmediately     1U                        /* Referenced by:
                                                                  * '<S14>/Define'
                                                                  * '<S18>/Define11'
                                                                  * '<S63>/Constant'
                                                                  */
#define ChrgStat_ChargeOff             2U                        /* Referenced by:
                                                                  * '<S18>/Define1'
                                                                  * '<S18>/Define2'
                                                                  * '<S22>/Define1'
                                                                  * '<S22>/Define2'
                                                                  * '<S76>/Define1'
                                                                  */
#define ChrgStat_ChargeOn              1U                        /* Referenced by:
                                                                  * '<S14>/Define2'
                                                                  * '<S14>/Define3'
                                                                  */
#define ChrgStat_ChargingComplete      8U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S133>/Define1'
                                                                  * '<S114>/Define5'
                                                                  * '<S115>/Define5'
                                                                  * '<S120>/Define9'
                                                                  * '<S75>/Define4'
                                                                  * '<S76>/Define4'
                                                                  * '<S77>/Define4'
                                                                  * '<S121>/Define9'
                                                                  * '<S122>/Define9'
                                                                  * '<S123>/Define9'
                                                                  */
#define ChrgStat_ChargingFault         9U                        /* Referenced by:
                                                                  * '<S133>/Define'
                                                                  * '<S135>/Define10'
                                                                  */
#define ChrgStat_ChargingReq           1U                        /* Referenced by: '<S115>/Define9' */
#define ChrgStat_CharingFault          9U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S114>/Define6'
                                                                  * '<S115>/Define6'
                                                                  * '<S120>/Define10'
                                                                  * '<S201>/Define1'
                                                                  * '<S213>/Define1'
                                                                  * '<S225>/Define2'
                                                                  * '<S75>/Define5'
                                                                  * '<S76>/Define5'
                                                                  * '<S77>/Define5'
                                                                  * '<S121>/Define10'
                                                                  * '<S122>/Define10'
                                                                  * '<S123>/Define10'
                                                                  */
#define ChrgStat_ChrgInitKeepTim       100U                      /* Referenced by: '<S2>/ChrMgmt_ChrgStsFlow' */
#define ChrgStat_DCCharging            6U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S134>/Define3'
                                                                  * '<S135>/Define1'
                                                                  * '<S122>/Define1'
                                                                  * '<S81>/Define14'
                                                                  */
#define ChrgStat_DCDCBuckFailed        3U                        /* Referenced by:
                                                                  * '<S29>/Define1'
                                                                  * '<S50>/Define8'
                                                                  * '<S80>/Define11'
                                                                  * '<S80>/Define7'
                                                                  */
#define ChrgStat_DCDCDisableFailed     2U                        /* Referenced by:
                                                                  * '<S29>/Define28'
                                                                  * '<S50>/Define6'
                                                                  * '<S80>/Define1'
                                                                  * '<S80>/Define28'
                                                                  */
#define ChrgStat_DCDuringCharging      5U                        /* Referenced by: '<S2>/ChrMgmt_ChrgStsFlow' */
#define ChrgStat_DCDuringPreheating    4U                        /* Referenced by: '<S2>/ChrMgmt_ChrgStsFlow' */
#define ChrgStat_DCPlug                4U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S154>/Define8'
                                                                  */
#define ChrgStat_DCPlugActive          2U                        /* Referenced by:
                                                                  * '<S153>/Define3'
                                                                  * '<S154>/Define3'
                                                                  * '<S154>/Define7'
                                                                  */
#define ChrgStat_DCPlugDetected        3U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S114>/Define1'
                                                                  * '<S120>/Define1'
                                                                  * '<S212>/Define1'
                                                                  * '<S218>/Define1'
                                                                  * '<S78>/Define3'
                                                                  * '<S122>/Define'
                                                                  * '<S123>/Define1'
                                                                  * '<S124>/Define1'
                                                                  */
#define ChrgStat_DCPlugFault           3U                        /* Referenced by:
                                                                  * '<S153>/Define'
                                                                  * '<S154>/Define'
                                                                  */
#define ChrgStat_DCPlugInactive        1U                        /* Referenced by:
                                                                  * '<S153>/Define6'
                                                                  * '<S154>/Define21'
                                                                  */
#define ChrgStat_DCPreheatAndChrgnPrepd 10U                      /* Referenced by: '<S83>/Define18' */
#define ChrgStat_DCPreheating          11U                       /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S134>/Define2'
                                                                  * '<S135>/Define3'
                                                                  * '<S122>/Define2'
                                                                  * '<S80>/Define27'
                                                                  * '<S81>/Define15'
                                                                  * '<S85>/Define27'
                                                                  */
#define ChrgStat_DISARMED              0U                        /* Referenced by: '<S23>/Define2' */
#define ChrgStat_DischargeOFF          1U                        /* Referenced by: '<S105>/Define2' */
#define ChrgStat_DischargeOn           2U                        /* Referenced by: '<S103>/Define' */
#define ChrgStat_DischargingReq        2U                        /* Referenced by: '<S115>/Define8' */
#define ChrgStat_DuringPreheating      3U                        /* Referenced by:
                                                                  * '<S32>/Define24'
                                                                  * '<S84>/Define24'
                                                                  */
#define ChrgStat_EmLockErr             2U                        /* Referenced by: '<S108>/Define2' */
#define ChrgStat_EmlockErr             2U                        /* Referenced by: '<S30>/Define21' */
#define ChrgStat_FaultLevel2           2U                        /* Referenced by: '<S134>/Define4' */
#define ChrgStat_Faultother            2U                        /* Referenced by: '<S77>/Define2' */
#define ChrgStat_GearP                 1U                        /* Referenced by:
                                                                  * '<S13>/Define1'
                                                                  * '<S70>/Define1'
                                                                  * '<S103>/Define1'
                                                                  * '<S32>/Define15'
                                                                  * '<S54>/Define15'
                                                                  * '<S84>/Define'
                                                                  * '<S107>/Define1'
                                                                  */
#define ChrgStat_HalfConnect           1U                        /* Referenced by:
                                                                  * '<S152>/Define4'
                                                                  * '<S18>/Define4'
                                                                  * '<S22>/Define4'
                                                                  * '<S105>/Define1'
                                                                  */
#define ChrgStat_Handshake             1U                        /* Referenced by: '<S75>/Define2' */
#define ChrgStat_HvReady               2U                        /* Referenced by:
                                                                  * '<S13>/Define4'
                                                                  * '<S70>/Define4'
                                                                  * '<S103>/Define4'
                                                                  * '<S32>/Define23'
                                                                  * '<S84>/Define23'
                                                                  * '<S107>/Define2'
                                                                  */
#define ChrgStat_Inactive              false                     /* Referenced by:
                                                                  * '<S135>/Define9'
                                                                  * '<S16>/Define4'
                                                                  * '<S18>/Define12'
                                                                  * '<S18>/Define20'
                                                                  * '<S22>/Define5'
                                                                  * '<S23>/Define20'
                                                                  * '<S23>/Define3'
                                                                  * '<S75>/Define1'
                                                                  * '<S105>/Define4'
                                                                  * '<S29>/Define4'
                                                                  * '<S29>/Define5'
                                                                  * '<S33>/Define1'
                                                                  * '<S33>/Define2'
                                                                  * '<S34>/Define1'
                                                                  * '<S54>/Define2'
                                                                  * '<S56>/Define1'
                                                                  * '<S79>/Define1'
                                                                  * '<S81>/Define1'
                                                                  * '<S106>/Define1'
                                                                  */
#define ChrgStat_Init                  0U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S154>/Define18'
                                                                  * '<S115>/Define7'
                                                                  * '<S120>/Define5'
                                                                  * '<S72>/Constant'
                                                                  * '<S75>/Define'
                                                                  * '<S77>/Define'
                                                                  * '<S123>/Define5'
                                                                  */
#define ChrgStat_InitChrgValue         101U                      /* Referenced by:
                                                                  * '<S143>/Define14'
                                                                  * '<S145>/Define'
                                                                  */
#define ChrgStat_InitDchaValue         51U                       /* Referenced by:
                                                                  * '<S144>/Define14'
                                                                  * '<S145>/Define3'
                                                                  */
#define ChrgStat_KeepWarming           13U                       /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S133>/Define2'
                                                                  * '<S23>/Define'
                                                                  * '<S121>/Define3'
                                                                  * '<S34>/Define19'
                                                                  */
#define ChrgStat_KeepwarmPreparing     5U                        /* Referenced by:
                                                                  * '<S31>/Define26'
                                                                  * '<S36>/Constant'
                                                                  * '<S44>/Constant'
                                                                  */
#define ChrgStat_LocalON               2U                        /* Referenced by: '<S135>/Define4' */
#define ChrgStat_Locked                0U                        /* Referenced by: '<S154>/Define27' */
#define ChrgStat_ManOperate            1U                        /* Referenced by: '<S77>/Define1' */
#define ChrgStat_MemFlt                1U                        /* Referenced by:
                                                                  * '<S135>/Define11'
                                                                  * '<S135>/Define7'
                                                                  */
#define ChrgStat_NoComment             0U                        /* Referenced by: '<S134>/Define6' */
#define ChrgStat_NoDisplay             0U                        /* Referenced by:
                                                                  * '<S7>/Define'
                                                                  * '<S133>/Define4'
                                                                  * '<S133>/Define8'
                                                                  */
#define ChrgStat_NoMemFlt              0U                        /* Referenced by: '<S135>/Define12' */
#define ChrgStat_NoPlug                1U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S154>/Define19'
                                                                  */
#define ChrgStat_NoReq                 0U                        /* Referenced by:
                                                                  * '<S18>/Define6'
                                                                  * '<S23>/Define6'
                                                                  */
#define ChrgStat_NormalCompletion      0U                        /* Referenced by: '<S16>/Define1' */
#define ChrgStat_OBCACCharging         5U                        /* Referenced by: '<S2>/ChrMgmt_ChrgStsFlow' */
#define ChrgStat_OBCACPreheating       4U                        /* Referenced by: '<S2>/ChrMgmt_ChrgStsFlow' */
#define ChrgStat_OBCCStsheckTim        300U                      /* Referenced by:
                                                                  * '<S18>/Define16'
                                                                  * '<S23>/Define16'
                                                                  */
#define ChrgStat_OBCDischrging         10U                       /* Referenced by: '<S2>/ChrMgmt_ChrgStsFlow' */
#define ChrgStat_OBCEnable             2U                        /* Referenced by: '<S18>/Standby1' */
#define ChrgStat_OBCKeepWarming        7U                        /* Referenced by: '<S2>/ChrMgmt_ChrgStsFlow' */
#define ChrgStat_OFFPOWERMODE          1U                        /* Referenced by: '<S135>/Define8' */
#define ChrgStat_PlugFault             7U                        /* Referenced by: '<S154>/Define2' */
#define ChrgStat_PosRlyClsFail         3U                        /* Referenced by:
                                                                  * '<S83>/Define1'
                                                                  * '<S83>/Define17'
                                                                  */
#define ChrgStat_Preheat2ChargingWait  11U                       /* Referenced by: '<S2>/ChrMgmt_ChrgStsFlow' */
#define ChrgStat_PreheatComplete       4U                        /* Referenced by:
                                                                  * '<S50>/Define1'
                                                                  * '<S55>/Define1'
                                                                  * '<S80>/Define3'
                                                                  * '<S85>/Define3'
                                                                  */
#define ChrgStat_PreheatKeepWarming    6U                        /* Referenced by:
                                                                  * '<S37>/Constant'
                                                                  * '<S45>/Constant'
                                                                  */
#define ChrgStat_PreheatNegRlyClsFail  3U                        /* Referenced by:
                                                                  * '<S31>/Define1'
                                                                  * '<S53>/Define1'
                                                                  * '<S83>/Define2'
                                                                  */
#define ChrgStat_PreheatPosRlyOpenFail 5U                        /* Referenced by:
                                                                  * '<S31>/Define25'
                                                                  * '<S53>/Define4'
                                                                  * '<S83>/Define19'
                                                                  */
#define ChrgStat_PreheatPreparing      1U                        /* Referenced by:
                                                                  * '<S80>/Define2'
                                                                  * '<S85>/Define11'
                                                                  * '<S57>/Constant'
                                                                  * '<S60>/Constant'
                                                                  */
#define ChrgStat_PreheatingPrepared    2U                        /* Referenced by:
                                                                  * '<S50>/Define9'
                                                                  * '<S53>/Define5'
                                                                  * '<S55>/Define13'
                                                                  * '<S80>/Define16'
                                                                  * '<S83>/Define20'
                                                                  * '<S85>/Define16'
                                                                  */
#define ChrgStat_ReachCutoffSOC        1U                        /* Referenced by:
                                                                  * '<S133>/Define3'
                                                                  * '<S133>/Define7'
                                                                  */
#define ChrgStat_ReconnectDisallow     2U                        /* Referenced by: '<S79>/Define' */
#define ChrgStat_RelayError            2U                        /* Referenced by:
                                                                  * '<S32>/Define14'
                                                                  * '<S54>/Define14'
                                                                  * '<S84>/Define1'
                                                                  */
#define ChrgStat_RelayOpen             1U                        /* Referenced by: '<S122>/Define4' */
#define ChrgStat_Standby               1U                        /* Referenced by:
                                                                  * '<S18>/Standby'
                                                                  * '<S23>/Standby'
                                                                  * '<S105>/Define'
                                                                  * '<S121>/Define4'
                                                                  * '<S125>/Define4'
                                                                  */
#define ChrgStat_TCUDisableFailed      2U                        /* Referenced by:
                                                                  * '<S33>/Define28'
                                                                  * '<S55>/Define10'
                                                                  * '<S85>/Define1'
                                                                  * '<S85>/Define29'
                                                                  */
#define ChrgStat_TCUEnaFailed          4U                        /* Referenced by:
                                                                  * '<S33>/Define4'
                                                                  * '<S55>/Define12'
                                                                  * '<S85>/Define10'
                                                                  * '<S85>/Define6'
                                                                  */
#define ChrgStat_U16Zero               0U                        /* Referenced by:
                                                                  * '<S135>/Define6'
                                                                  * '<S152>/Define1'
                                                                  * '<S152>/Define10'
                                                                  * '<S152>/Define15'
                                                                  * '<S152>/Define19'
                                                                  * '<S153>/Define2'
                                                                  * '<S153>/Define5'
                                                                  * '<S153>/Define8'
                                                                  * '<S154>/Define15'
                                                                  * '<S154>/Define24'
                                                                  * '<S154>/Define29'
                                                                  * '<S120>/Define12'
                                                                  * '<S120>/Define8'
                                                                  * '<S18>/Define15'
                                                                  * '<S18>/Define18'
                                                                  * '<S23>/Define15'
                                                                  * '<S23>/Define18'
                                                                  * '<S123>/Define12'
                                                                  * '<S123>/Define8'
                                                                  * '<S30>/Define18'
                                                                  * '<S32>/Define7'
                                                                  * '<S54>/Define17'
                                                                  * '<S82>/Define13'
                                                                  * '<S108>/Define17'
                                                                  */
#define ChrgStat_U8dt                  50U                       /* Referenced by: '<S2>/ChrMgmt_ChrgStsFlow' */
#define ChrgStat_Unlocked              1U                        /* Referenced by:
                                                                  * '<S154>/Define12'
                                                                  * '<S30>/Define20'
                                                                  * '<S108>/Define1'
                                                                  */
#define ChrgStat_V2LComplete           12U                       /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S133>/Define5'
                                                                  * '<S115>/Define1'
                                                                  * '<S120>/Define14'
                                                                  * '<S123>/Define14'
                                                                  * '<S125>/Define9'
                                                                  */
#define ChrgStat_V2LDischarging        7U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S105>/Define3'
                                                                  * '<S125>/Define1'
                                                                  * '<S106>/Define'
                                                                  */
#define ChrgStat_V2LFault              14U                       /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S133>/Define6'
                                                                  * '<S115>/Define2'
                                                                  * '<S120>/Define13'
                                                                  * '<S123>/Define13'
                                                                  * '<S125>/Define10'
                                                                  */
#define ChrgStat_V2LPlugActive         2U                        /* Referenced by:
                                                                  * '<S152>/Define16'
                                                                  * '<S154>/Define9'
                                                                  */
#define ChrgStat_V2LPlugDetected       4U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S115>/Define4'
                                                                  * '<S120>/Define2'
                                                                  * '<S123>/Define2'
                                                                  * '<S124>/Define2'
                                                                  * '<S125>/Define'
                                                                  */
#define ChrgStat_V2Plug                5U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S154>/Define10'
                                                                  */
#define ChrgStat_WarmOff               1U                        /* Referenced by: '<S23>/Define1' */
#define ChrgStat_WarmOn                2U                        /* Referenced by:
                                                                  * '<S16>/Define2'
                                                                  * '<S18>/Define7'
                                                                  */
#define ChrgStat_WarmReq               1U                        /* Referenced by: '<S16>/Define3' */
#define ChrgStat_dt                    50U                       /* Referenced by:
                                                                  * '<S135>/Define5'
                                                                  * '<S152>/Define14'
                                                                  * '<S152>/Define18'
                                                                  * '<S152>/Define2'
                                                                  * '<S152>/Define9'
                                                                  * '<S153>/Define1'
                                                                  * '<S153>/Define4'
                                                                  * '<S153>/Define7'
                                                                  * '<S154>/Define14'
                                                                  * '<S154>/Define23'
                                                                  * '<S154>/Define28'
                                                                  * '<S180>/Define1'
                                                                  * '<S181>/Define1'
                                                                  * '<S182>/Define1'
                                                                  * '<S183>/Define1'
                                                                  * '<S184>/Define1'
                                                                  * '<S185>/Define1'
                                                                  * '<S120>/Define11'
                                                                  * '<S120>/Define3'
                                                                  * '<S120>/Define7'
                                                                  * '<S194>/Define1'
                                                                  * '<S205>/Define1'
                                                                  * '<S217>/Define1'
                                                                  * '<S18>/Define14'
                                                                  * '<S18>/Define17'
                                                                  * '<S23>/Define14'
                                                                  * '<S23>/Define17'
                                                                  * '<S123>/Define11'
                                                                  * '<S123>/Define3'
                                                                  * '<S123>/Define7'
                                                                  * '<S30>/Define5'
                                                                  * '<S32>/Define6'
                                                                  * '<S54>/Define16'
                                                                  * '<S82>/Define12'
                                                                  * '<S108>/Define16'
                                                                  */
#define ChrgStat_offplug               1U                        /* Referenced by:
                                                                  * '<S2>/ChrMgmt_ChrgStsFlow'
                                                                  * '<S114>/Define2'
                                                                  * '<S115>/Define10'
                                                                  * '<S120>/Define6'
                                                                  * '<S201>/Define'
                                                                  * '<S207>/Define'
                                                                  * '<S213>/Define'
                                                                  * '<S219>/Define'
                                                                  * '<S225>/Define'
                                                                  * '<S229>/Define'
                                                                  * '<S123>/Define6'
                                                                  */
#define ChrgStat_passed                false                     /* Referenced by:
                                                                  * '<S13>/Define2'
                                                                  * '<S13>/Define3'
                                                                  * '<S70>/Define2'
                                                                  * '<S70>/Define3'
                                                                  * '<S103>/Define2'
                                                                  * '<S103>/Define3'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S18>/ATOM_OnDelay' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S24>/UnitDelay' */
} ARID_DEF_ATOM_OnDelay_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<S123>/ATOM_U32DebAct' */
typedef struct {
  uint32_T Delay_DSTATE;               /* '<S128>/Delay' */
  boolean_T Delay1_DSTATE;             /* '<S128>/Delay1' */
} ARID_DEF_ATOM_U32DebAct_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S180>/NoEnAvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S191>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_bbg1;      /* '<S192>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S190>/Delay1' */
} ARID_DEF_NoEnAvoidMu_CtAp_Chr_T;

/* PublicStructure Variables for Internal Data, for system '<S181>/AvoidMu' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S197>/UnitDelay' */
  uint16_T UnitDelay_DSTATE_p3cx;      /* '<S198>/UnitDelay' */
} ARID_DEF_AvoidMu_CtAp_ChrgSta_T;

/* PublicStructure Variables for Internal Data, for system '<S194>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S199>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<S182>/NoDTAndEn' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S204>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S203>/Delay1' */
} ARID_DEF_NoDTAndEn_CtAp_ChrgS_T;

/* PublicStructure Variables for Internal Data, for system '<S183>/NoDT' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S211>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S210>/Delay1' */
} ARID_DEF_NoDT_CtAp_ChrgStat_T;

/* PublicStructure Variables for Internal Data, for system '<S184>/U32NoDTAndEn' */
typedef struct {
  uint32_T UnitDelay_DSTATE;           /* '<S216>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S215>/Delay1' */
} ARID_DEF_U32NoDTAndEn_CtAp_Ch_T;

/* PublicStructure Variables for Internal Data, for system '<S185>/U32NoDTAvoidMu1' */
typedef struct {
  uint32_T UnitDelay_DSTATE;           /* '<S223>/UnitDelay' */
  boolean_T Delay1_DSTATE;             /* '<S222>/Delay1' */
} ARID_DEF_U32NoDTAvoidMu_CtAp__T;

/* PublicStructure Variables for Internal Data, for system '<S186>/NoEnableAndTime' */
typedef struct {
  boolean_T Delay1_DSTATE;             /* '<S227>/Delay1' */
} ARID_DEF_NoEnableAndTime_CtAp_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_NoEnableAndTime_CtAp_T ARID_DEF_NoEnableAndTime;/* '<S187>/NoEnableAndTime' */
  ARID_DEF_NoEnableAndTime_CtAp_T ARID_DEF_NoEnableAndTime_mbvz;/* '<S186>/NoEnableAndTime' */
  ARID_DEF_U32NoDTAvoidMu_CtAp__T ARID_DEF_U32NoDTAvoidMu1;/* '<S185>/U32NoDTAvoidMu1' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt;/* '<S217>/ATOM_TimeCnt' */
  ARID_DEF_U32NoDTAndEn_CtAp_Ch_T ARID_DEF_U32NoDTAndEn;/* '<S184>/U32NoDTAndEn' */
  ARID_DEF_NoDT_CtAp_ChrgStat_T ARID_DEF_NoDT;/* '<S183>/NoDT' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt_cl54;/* '<S205>/ATOM_TimeCnt' */
  ARID_DEF_NoDTAndEn_CtAp_ChrgS_T ARID_DEF_NoDTAndEn;/* '<S182>/NoDTAndEn' */
  ARID_DEF_ATOM_TimeCnt_CtAp_Ch_T ARID_DEF_ATOM_TimeCnt_kkiq;/* '<S194>/ATOM_TimeCnt' */
  ARID_DEF_AvoidMu_CtAp_ChrgSta_T ARID_DEF_AvoidMu;/* '<S181>/AvoidMu' */
  ARID_DEF_NoEnAvoidMu_CtAp_Chr_T ARID_DEF_NoEnAvoidMu;/* '<S180>/NoEnAvoidMu' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay5;/* '<S154>/ATOM_OnDelay5' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay4;/* '<S154>/ATOM_OnDelay4' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay2;/* '<S154>/ATOM_OnDelay2' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay2_cxar;/* '<S153>/ATOM_OnDelay2' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay1;/* '<S153>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay;/* '<S153>/ATOM_OnDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay3;/* '<S152>/ATOM_OnDelay3' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay2_bhxx;/* '<S152>/ATOM_OnDelay2' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay1_pbm3;/* '<S152>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay_cv5h;/* '<S152>/ATOM_OnDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay_fqdq;/* '<S135>/ATOM_OnDelay' */
  ARID_DEF_ATOM_U32DebAct_CtAp__T ARID_DEF_ATOM_U32DebAct1;/* '<S120>/ATOM_U32DebAct1' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay2_g2ml;/* '<S120>/ATOM_OnDelay2' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay1_g1sm;/* '<S120>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_U32DebAct_CtAp__T ARID_DEF_ATOM_U32DebAct;/* '<S123>/ATOM_U32DebAct' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay2_merl;/* '<S123>/ATOM_OnDelay2' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay1_nz4o;/* '<S123>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay_ppxr;/* '<S108>/ATOM_OnDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay_llw0;/* '<S82>/ATOM_OnDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay1_jwzv;/* '<S23>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay_dhmr;/* '<S23>/ATOM_OnDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay_guug;/* '<S54>/ATOM_OnDelay' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay2_ldqo;/* '<S32>/ATOM_OnDelay2' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay1_dham;/* '<S30>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay1_dype;/* '<S18>/ATOM_OnDelay1' */
  ARID_DEF_ATOM_OnDelay_CtAp_Ch_T ARID_DEF_ATOM_OnDelay_lxo5;/* '<S18>/ATOM_OnDelay' */
  dt_ChrMgmt_CC2UDcDTC RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec;
         /* '<Root>/RTE_P_ChrMgmt_CC2UDcDTC_Bus_tec_ChrMgmt_CC2UDcErrDTC_Bus' */
  dt_ChrMgmt_CC2UDcErr RTE_P_ChrMgmt_CC2UDcErr_Bus_tec;
            /* '<Root>/RTE_P_ChrMgmt_CC2UDcErr_Bus_tec_ChrMgmt_CC2UDcErr_Bus' */
  dt_ChrMgmt_ChrgStsJmpErr RTE_P_ChrMgmt_ChrgStsJmpErr_Bus;
    /* '<Root>/RTE_P_ChrMgmt_ChrgStsJmpErr_Bus_tec_ChrMgmt_ChrgStsJmpErr_Bus' */
  dt_ChrMgmt_ChrgStsJmpErrDTC RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus;
  /* '<Root>/RTE_P_ChrMgmt_ChrgStsJmpDTC_Bus_tec_ChrMgmt_ChrgStsJmpErrDTC_Bus' */
  dt_Nv_ChrgStatInfo RTE_RP_ChrgStatInfo_tec_ChrgSta;
                       /* '<Root>/RTE_RP_ChrgStatInfo_tec_ChrgStatInfo_write' */
  uint8_T Delay_13_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_22_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_23_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_4_DSTATE;              /* '<S2>/Delay' */
  uint8_T Delay_15_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_16_DSTATE;             /* '<S2>/Delay' */
  uint8_T Delay_DSTATE;                /* '<S154>/Delay' */
  uint8_T Delay_DSTATE_ow50;           /* '<S153>/Delay' */
  uint8_T Delay_DSTATE_hkbz;           /* '<S152>/Delay' */
  uint8_T Delay1_DSTATE;               /* '<S145>/Delay1' */
  uint8_T Delay3_DSTATE;               /* '<S145>/Delay3' */
  uint8_T Delay1_DSTATE_exvf;          /* '<S115>/Delay1' */
  uint8_T Delay_DSTATE_owxx;           /* '<S77>/Delay' */
  uint8_T Delay_DSTATE_pzph;           /* '<S23>/Delay' */
  uint8_T Delay1_DSTATE_f5jc;          /* '<S22>/Delay1' */
  uint8_T Delay_DSTATE_c3kl;           /* '<S18>/Delay' */
  uint8_T is_c1_CtAp_ChrgStat;         /* '<S2>/ChrMgmt_ChrgStsFlow' */
  uint8_T is_Nocharge;                 /* '<S2>/ChrMgmt_ChrgStsFlow' */
  uint8_T is_ACFlow;                   /* '<S2>/ChrMgmt_ChrgStsFlow' */
  uint8_T is_DCFlow;                   /* '<S2>/ChrMgmt_ChrgStsFlow' */
  uint8_T is_V2LFlow;                  /* '<S2>/ChrMgmt_ChrgStsFlow' */
  uint8_T is_ChargeComplete;           /* '<S2>/ChrMgmt_ChrgStsFlow' */
  uint8_T is_V2LComplete;              /* '<S2>/ChrMgmt_ChrgStsFlow' */
  uint8_T ChrMgmt_ChrgStayInIntTim;    /* '<S2>/ChrMgmt_ChrgStsFlow' */
  uint8_T is_active_c1_CtAp_ChrgStat;  /* '<S2>/ChrMgmt_ChrgStsFlow' */
  boolean_T Switch6;                   /* '<S222>/Switch6' */
  boolean_T Switch6_fmpv;              /* '<S210>/Switch6' */
  boolean_T Delay_7_DSTATE;            /* '<S2>/Delay' */
  boolean_T Delay_8_DSTATE;            /* '<S2>/Delay' */
  boolean_T Delay_6_DSTATE;            /* '<S2>/Delay' */
  boolean_T Delay_32_DSTATE;           /* '<S2>/Delay' */
  boolean_T Delay_3_DSTATE;            /* '<S2>/Delay' */
  boolean_T OneDelay_DSTATE;           /* '<S217>/OneDelay' */
  boolean_T Delay_DSTATE_k5td;         /* '<S206>/Delay' */
  boolean_T Delay_DSTATE_pukt;         /* '<S200>/Delay' */
  boolean_T Delay_DSTATE_eenc;         /* '<S145>/Delay' */
  boolean_T Delay2_DSTATE;             /* '<S145>/Delay2' */
  boolean_T Delay_DSTATE_g2ro;         /* '<S120>/Delay' */
  boolean_T Delay_DSTATE_ecu1;         /* '<S125>/Delay' */
  boolean_T Delay1_DSTATE_pjre;        /* '<S125>/Delay1' */
  boolean_T Delay_DSTATE_jyba;         /* '<S124>/Delay' */
  boolean_T Delay_DSTATE_mh1q;         /* '<S122>/Delay' */
  boolean_T Delay1_DSTATE_kdsg;        /* '<S122>/Delay1' */
  boolean_T Delay_DSTATE_f50r;         /* '<S121>/Delay' */
  boolean_T Delay1_DSTATE_l1pq;        /* '<S121>/Delay1' */
  boolean_T Delay_DSTATE_iqlh;         /* '<S115>/Delay' */
  boolean_T Delay_DSTATE_invi;         /* '<S114>/Delay' */
  boolean_T Delay1_DSTATE_et4p;        /* '<S77>/Delay1' */
  boolean_T Delay_DSTATE_avpi;         /* '<S75>/Delay' */
  boolean_T icLoad;                    /* '<S120>/Delay' */
} ARID_DEF_CtAp_ChrgStat_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ChrgStat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"

extern ARID_DEF_CtAp_ChrgStat_T CtAp_ChrgStat_ARID_DEF;

#define CtAp_ChrgStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"

/* Exported data declaration */

/*if not init use it */
#define CtAp_ChrgStat_START_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern boolean_T ChrMgmt_ACChCmplDCDCErr_Flg;/* '<S29>/If' */
extern boolean_T ChrMgmt_ACChCmplPlugStsErr_Flg;/* '<S30>/LogicalOperator' */
extern boolean_T ChrMgmt_ACChCmplPosRlyErr_Flg;/* '<S31>/LogicalOperator14' */
extern boolean_T ChrMgmt_ACChCmplStsErr_Flg;/* '<S32>/LogicalOperator' */
extern boolean_T ChrMgmt_ACChCmplTCUErr_Flg;/* '<S33>/If' */
extern boolean_T ChrMgmt_ACCmplDCDCErr_Flg;/* '<S50>/LogicalOperator1' */
extern boolean_T ChrMgmt_ACCmplDTCErr_Flg;/* '<S51>/LogicalOperator' */
extern boolean_T ChrMgmt_ACCmplPlugErr_Flg;/* '<S52>/LogicalOperator' */
extern boolean_T ChrMgmt_ACCmplPrheatPosErr_Flg;/* '<S53>/LogicalOperator1' */
extern boolean_T ChrMgmt_ACCmplStsErr_Flg;/* '<S54>/LogicalOperator' */
extern boolean_T ChrMgmt_ACCmplTCUErr_Flg;/* '<S55>/LogicalOperator' */
extern boolean_T ChrMgmt_DCCmplDCDCErr_Flg;/* '<S80>/If' */
extern boolean_T ChrMgmt_DCCmplDTCErr_Flg;/* '<S81>/LogicalOperator1' */
extern boolean_T ChrMgmt_DCCmplRlyErr_Flg;/* '<S83>/LogicalOperator' */
extern boolean_T ChrMgmt_DCCmplStsErr_Flg;/* '<S84>/LogicalOperator5' */
extern boolean_T ChrMgmt_DCCmplTCUErr_Flg;/* '<S85>/If' */

#define CtAp_ChrgStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ChrgStat_MemMap.h"      /* PRQA S 5087 *//* MD_MSR_MemMap */

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
 * '<Root>' : 'CtAp_ChrgStat'
 * '<S1>'   : 'CtAp_ChrgStat/DocBlock'
 * '<S2>'   : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys'
 * '<S3>'   : 'CtAp_ChrgStat/R_ChrgStat_Init'
 * '<S4>'   : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage'
 * '<S5>'   : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage'
 * '<S6>'   : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgStsFlow'
 * '<S7>'   : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage'
 * '<S8>'   : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage'
 * '<S9>'   : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler'
 * '<S10>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage'
 * '<S11>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage'
 * '<S12>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage'
 * '<S13>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACChrgPreSts'
 * '<S14>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACChrgProcActv'
 * '<S15>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl'
 * '<S16>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_KeepWrm'
 * '<S17>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACAbNormCmpl'
 * '<S18>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACChrgnNormCmpl'
 * '<S19>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACNormCmpl'
 * '<S20>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl'
 * '<S21>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl'
 * '<S22>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugNormCmpl'
 * '<S23>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACWarmNormCmpl'
 * '<S24>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACChrgnNormCmpl/ATOM_OnDelay'
 * '<S25>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACChrgnNormCmpl/ATOM_OnDelay1'
 * '<S26>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACChrgnNormCmpl/If'
 * '<S27>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACChrgnNormCmpl/If1'
 * '<S28>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACChrgnCmplDTCErr'
 * '<S29>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplDCDCErr'
 * '<S30>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplPlugStsErr'
 * '<S31>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplPosRlyErr'
 * '<S32>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplStsErr'
 * '<S33>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplTCUErr'
 * '<S34>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACPChrgnAbNormCmpl'
 * '<S35>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplDCDCErr/CompareToConstant'
 * '<S36>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplDCDCErr/CompareToConstant1'
 * '<S37>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplDCDCErr/CompareToConstant2'
 * '<S38>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplDCDCErr/If'
 * '<S39>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplDCDCErr/If1'
 * '<S40>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplDCDCErr/If2'
 * '<S41>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplPlugStsErr/ATOM_OnDelay1'
 * '<S42>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplStsErr/ATOM_OnDelay2'
 * '<S43>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplTCUErr/CompareToConstant1'
 * '<S44>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplTCUErr/CompareToConstant2'
 * '<S45>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplTCUErr/CompareToConstant3'
 * '<S46>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplTCUErr/If'
 * '<S47>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplTCUErr/If1'
 * '<S48>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACCmplTCUErr/If2'
 * '<S49>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPChrgnAbNormCmpl/ChrMgmt_ACPChrgnAbNormCmpl/If'
 * '<S50>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplDCDCErr'
 * '<S51>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplDTCErr'
 * '<S52>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplPlugErr'
 * '<S53>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplPrheatPosErr'
 * '<S54>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplStsErr'
 * '<S55>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplTCUErr'
 * '<S56>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACPlugAbNormCmpl'
 * '<S57>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplDCDCErr/CompareToConstant'
 * '<S58>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplStsErr/ATOM_OnDelay'
 * '<S59>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplStsErr/If'
 * '<S60>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACCmplTCUErr/CompareToConstant'
 * '<S61>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugAbNormCmpl/ChrMgmt_ACPlugAbNormCmpl/If'
 * '<S62>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugNormCmpl/CompareToConstant'
 * '<S63>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugNormCmpl/CompareToConstant1'
 * '<S64>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACPlugNormCmpl/If'
 * '<S65>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACWarmNormCmpl/ATOM_OnDelay'
 * '<S66>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACWarmNormCmpl/ATOM_OnDelay1'
 * '<S67>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACWarmNormCmpl/If'
 * '<S68>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_ACCmpl/ChrMgmt_ACWarmNormCmpl/If1'
 * '<S69>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_ACChrgStsManage/ChrMgmt_KeepWrm/If'
 * '<S70>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCChrgProcActv'
 * '<S71>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl'
 * '<S72>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCChrgProcActv/CompareToConstant'
 * '<S73>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl'
 * '<S74>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_DCAbNormCmpl'
 * '<S75>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_DCChrgFlwActv'
 * '<S76>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_DCNormCmpl'
 * '<S77>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_DcChrgCmplSts'
 * '<S78>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_PreDCAbNormCmpl'
 * '<S79>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_ChrgnDCAbNormCmpl'
 * '<S80>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplDCDCErr'
 * '<S81>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplDTCErr'
 * '<S82>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplPlugErr'
 * '<S83>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplRlyErr'
 * '<S84>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplStsErr'
 * '<S85>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplTCUErr'
 * '<S86>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_ChrgnDCAbNormCmpl/If'
 * '<S87>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplDCDCErr/CompareToConstant'
 * '<S88>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplDCDCErr/If'
 * '<S89>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplDCDCErr/If1'
 * '<S90>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplDCDCErr/If2'
 * '<S91>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplDTCErr/If'
 * '<S92>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplPlugErr/ATOM_OnDelay'
 * '<S93>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplTCUErr/CompareToConstant'
 * '<S94>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplTCUErr/If'
 * '<S95>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplTCUErr/If1'
 * '<S96>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_ChrgnDCAbNormCmpl/ChrMgmt_DCCmplTCUErr/If2'
 * '<S97>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_DCChrgFlwActv/If'
 * '<S98>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_DCChrgFlwActv/If1'
 * '<S99>'  : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_DcChrgCmplSts/If'
 * '<S100>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_DcChrgCmplSts/If1'
 * '<S101>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_DCChrgStsManage/ChrMgmt_DCCmpl/ChrMgmt_DcChrgCmplSts/If2'
 * '<S102>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LNormCmpl'
 * '<S103>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LProcActv'
 * '<S104>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LNormCmpl/ChrMgmt_V2LAbNormCmpl'
 * '<S105>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LNormCmpl/ChrMgmt_V2LNormCmpl'
 * '<S106>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LNormCmpl/ChrMgmt_V2LAbNormCmpl/ChrMgmt_V2LAbNormCmpl'
 * '<S107>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LNormCmpl/ChrMgmt_V2LAbNormCmpl/ChrMgmt_V2LCmplStsErr'
 * '<S108>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LNormCmpl/ChrMgmt_V2LAbNormCmpl/ChrMgmt_V2LPlugStsErr'
 * '<S109>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LNormCmpl/ChrMgmt_V2LAbNormCmpl/ChrMgmt_V2LAbNormCmpl/If'
 * '<S110>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LNormCmpl/ChrMgmt_V2LAbNormCmpl/ChrMgmt_V2LPlugStsErr/ATOM_OnDelay'
 * '<S111>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgCtrlManage/ChrMgmt_V2lChrgStsManage/ChrMgmt_V2LNormCmpl/ChrMgmt_V2LNormCmpl/If'
 * '<S112>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ChrgAllwd'
 * '<S113>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv'
 * '<S114>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ChrgAllwd/ChrMgmt_DcChrgAllwd'
 * '<S115>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ChrgAllwd/ChrMgmt_OBCEnaAllwd'
 * '<S116>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ChrgAllwd/ChrMgmt_OBCEnaAllwd/If1'
 * '<S117>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ChrgAllwd/ChrMgmt_OBCEnaAllwd/If2'
 * '<S118>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ChrgAllwd/ChrMgmt_OBCEnaAllwd/If3'
 * '<S119>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy'
 * '<S120>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqLvActv'
 * '<S121>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy/ChrMgmt_ACReqHvDown'
 * '<S122>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy/ChrMgmt_DCReqHvDown'
 * '<S123>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy/ChrMgmt_PlugStsReqHvDown'
 * '<S124>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy/ChrMgmt_ReqHvRdy'
 * '<S125>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy/ChrMgmt_V2LReqHvDown'
 * '<S126>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy/ChrMgmt_PlugStsReqHvDown/ATOM_OnDelay1'
 * '<S127>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy/ChrMgmt_PlugStsReqHvDown/ATOM_OnDelay2'
 * '<S128>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy/ChrMgmt_PlugStsReqHvDown/ATOM_U32DebAct'
 * '<S129>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqHvRdy/ChrMgmt_V2LReqHvDown/If'
 * '<S130>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqLvActv/ATOM_OnDelay1'
 * '<S131>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqLvActv/ATOM_OnDelay2'
 * '<S132>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_ChrgManage/ChrMgmt_ReqLvAndHv/ChrMgmt_ReqLvActv/ATOM_U32DebAct1'
 * '<S133>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/AbortRsn'
 * '<S134>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/ChrgProcCmt'
 * '<S135>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/MEMFLT'
 * '<S136>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC'
 * '<S137>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/AbortRsn/If'
 * '<S138>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/AbortRsn/If1'
 * '<S139>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/ChrgProcCmt/If'
 * '<S140>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/MEMFLT/ATOM_OnDelay'
 * '<S141>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/MEMFLT/If1'
 * '<S142>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/MEMFLT/If2'
 * '<S143>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC/ChrMgmt_IVIMaxChrgSOC'
 * '<S144>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC/ChrMgmt_IVIMinDchaSOC'
 * '<S145>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC/ChrMgmt_SOCSet'
 * '<S146>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC/ChrMgmt_IVIMaxChrgSOC/If'
 * '<S147>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC/ChrMgmt_IVIMinDchaSOC/If'
 * '<S148>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC/ChrMgmt_SOCSet/If'
 * '<S149>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC/ChrMgmt_SOCSet/If1'
 * '<S150>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC/ChrMgmt_SOCSet/If2'
 * '<S151>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_NVMStsManage/SOC/ChrMgmt_SOCSet/If3'
 * '<S152>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_ACPlugSts'
 * '<S153>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_DCPlugSts'
 * '<S154>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts'
 * '<S155>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_ACPlugSts/ATOM_OnDelay'
 * '<S156>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_ACPlugSts/ATOM_OnDelay1'
 * '<S157>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_ACPlugSts/ATOM_OnDelay2'
 * '<S158>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_ACPlugSts/ATOM_OnDelay3'
 * '<S159>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_ACPlugSts/If'
 * '<S160>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_ACPlugSts/If1'
 * '<S161>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_ACPlugSts/If2'
 * '<S162>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_ACPlugSts/If3'
 * '<S163>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_DCPlugSts/ATOM_OnDelay'
 * '<S164>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_DCPlugSts/ATOM_OnDelay1'
 * '<S165>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_DCPlugSts/ATOM_OnDelay2'
 * '<S166>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_DCPlugSts/If'
 * '<S167>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_DCPlugSts/If1'
 * '<S168>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_DCPlugSts/If2'
 * '<S169>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/ATOM_OnDelay2'
 * '<S170>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/ATOM_OnDelay4'
 * '<S171>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/ATOM_OnDelay5'
 * '<S172>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/If'
 * '<S173>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/If1'
 * '<S174>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/If2'
 * '<S175>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/If3'
 * '<S176>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/If4'
 * '<S177>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/If5'
 * '<S178>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/If6'
 * '<S179>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ChrMgmt_PlugStsManage/ChrMgmt_PlugSts/If7'
 * '<S180>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErr'
 * '<S181>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErrDTC'
 * '<S182>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErr'
 * '<S183>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErrDTC'
 * '<S184>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErr'
 * '<S185>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErrDTC'
 * '<S186>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErr'
 * '<S187>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErrDTC'
 * '<S188>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErr/ChrMgmt_ChrgStatErrSetCdn'
 * '<S189>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErr/NoEnAvoidMu'
 * '<S190>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErr/NoEnAvoidMu/ErrorHandleSysU16'
 * '<S191>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErr/NoEnAvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S192>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErr/NoEnAvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S193>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErrDTC/AvoidMu'
 * '<S194>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErrDTC/ChrMgmt_ChrgStatErrEnaCdn'
 * '<S195>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErrDTC/ChrMgmt_ChrgStatErrSetCdn'
 * '<S196>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErrDTC/AvoidMu/ErrorHandleSysU16'
 * '<S197>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErrDTC/AvoidMu/ErrorHandleSysU16/OnDelay'
 * '<S198>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErrDTC/AvoidMu/ErrorHandleSysU16/OnDelay1'
 * '<S199>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_CC2UDcErrDTC/ChrMgmt_ChrgStatErrEnaCdn/ATOM_TimeCnt'
 * '<S200>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErr/ChrMgmt_ChrgStatErrSetCdn'
 * '<S201>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErr/ChrMgmt_ChrgStatResetCdn'
 * '<S202>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErr/NoDTAndEn'
 * '<S203>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErr/NoDTAndEn/ErrorHandleSysU16'
 * '<S204>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErr/NoDTAndEn/ErrorHandleSysU16/OnDelay'
 * '<S205>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErrDTC/ChrMgmt_ChrgStatErrEnaCdn'
 * '<S206>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErrDTC/ChrMgmt_ChrgStatErrSetCdn'
 * '<S207>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErrDTC/ChrMgmt_ChrgStatResetCdn'
 * '<S208>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErrDTC/NoDT'
 * '<S209>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErrDTC/ChrMgmt_ChrgStatErrEnaCdn/ATOM_TimeCnt'
 * '<S210>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErrDTC/NoDT/ErrorHandleSysU16'
 * '<S211>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgAcStsJmpErrDTC/NoDT/ErrorHandleSysU16/OnDelay'
 * '<S212>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErr/ChrMgmt_ChrgStatErrSetCdn'
 * '<S213>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErr/ChrMgmt_ChrgStatResetCdn'
 * '<S214>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErr/U32NoDTAndEn'
 * '<S215>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErr/U32NoDTAndEn/ErrorHandleSysU16'
 * '<S216>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErr/U32NoDTAndEn/ErrorHandleSysU16/OnDelay'
 * '<S217>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErrDTC/ChrMgmt_ChrgStatErrEnaCdn'
 * '<S218>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErrDTC/ChrMgmt_ChrgStatErrSetCdn'
 * '<S219>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErrDTC/ChrMgmt_ChrgStatResetCdn'
 * '<S220>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErrDTC/U32NoDTAvoidMu1'
 * '<S221>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErrDTC/ChrMgmt_ChrgStatErrEnaCdn/ATOM_TimeCnt'
 * '<S222>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErrDTC/U32NoDTAvoidMu1/ErrorHandleSysU16'
 * '<S223>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgDcStsJmpErrDTC/U32NoDTAvoidMu1/ErrorHandleSysU16/OnDelay'
 * '<S224>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErr/ChrMgmt_ChrgStatErrSetCdn'
 * '<S225>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErr/ChrMgmt_ChrgStatResetCdn'
 * '<S226>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErr/NoEnableAndTime'
 * '<S227>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErr/NoEnableAndTime/ErrorHandleSysU16'
 * '<S228>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErrDTC/ChrMgmt_ChrgStatErrSetCdn'
 * '<S229>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErrDTC/ChrMgmt_ChrgStatResetCdn'
 * '<S230>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErrDTC/NoEnableAndTime'
 * '<S231>' : 'CtAp_ChrgStat/R_ChrgStat_Cyclic_50ms_sys/ErrorHandler/ChrMgmt_ChrgStsJmpErrDTC/NoEnableAndTime/ErrorHandleSysU16'
 */

/*-
 * Requirements for '<Root>': CtAp_ChrgStat

 *
 * Inherited requirements for '<S7>/AbortRsn':
 *  1. VCU_SW_Requirements_Specification.slreqx:1960
 *  2. VCU_SW_Requirements_Specification.slreqx:1961
 *  3. VCU_SW_Requirements_Specification.slreqx:1962
 *  4. VCU_SW_Requirements_Specification.slreqx:1963
 *
 * Inherited requirements for '<S7>/ChrgProcCmt':
 *  1. VCU_SW_Requirements_Specification.slreqx:1980
 *  2. VCU_SW_Requirements_Specification.slreqx:1981
 *
 * Inherited requirements for '<S7>/MEMFLT':
 *  1. VCU_SW_Requirements_Specification.slreqx:1953
 *  2. VCU_SW_Requirements_Specification.slreqx:1954
 *  3. VCU_SW_Requirements_Specification.slreqx:1955
 *  4. VCU_SW_Requirements_Specification.slreqx:1956
 *  5. VCU_SW_Requirements_Specification.slreqx:1957
 *  6. VCU_SW_Requirements_Specification.slreqx:1958
 *
 * Inherited requirements for '<S8>/ChrMgmt_ACPlugSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:1968
 *  2. VCU_SW_Requirements_Specification.slreqx:1969
 *  3. VCU_SW_Requirements_Specification.slreqx:1970
 *  4. VCU_SW_Requirements_Specification.slreqx:1971
 *  5. VCU_SW_Requirements_Specification.slreqx:1972
 *
 * Inherited requirements for '<S8>/ChrMgmt_DCPlugSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:1964
 *  2. VCU_SW_Requirements_Specification.slreqx:1965
 *  3. VCU_SW_Requirements_Specification.slreqx:1966
 *  4. VCU_SW_Requirements_Specification.slreqx:1967
 *
 * Inherited requirements for '<S8>/ChrMgmt_PlugSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:1973
 *  2. VCU_SW_Requirements_Specification.slreqx:1974
 *  3. VCU_SW_Requirements_Specification.slreqx:1975
 *  4. VCU_SW_Requirements_Specification.slreqx:1976
 *  5. VCU_SW_Requirements_Specification.slreqx:1977
 *  6. VCU_SW_Requirements_Specification.slreqx:1978
 *  7. VCU_SW_Requirements_Specification.slreqx:1979
 *  8. VCU_SW_Requirements_Specification.slreqx:13232
 *
 * Inherited requirements for '<S10>/ChrMgmt_ACChrgPreSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:1982
 *  2. VCU_SW_Requirements_Specification.slreqx:1983
 *
 * Inherited requirements for '<S10>/ChrMgmt_ACChrgProcActv':
 *  1. VCU_SW_Requirements_Specification.slreqx:1984
 *  2. VCU_SW_Requirements_Specification.slreqx:1985
 *  3. VCU_SW_Requirements_Specification.slreqx:1986
 *  4. VCU_SW_Requirements_Specification.slreqx:1987
 *
 * Inherited requirements for '<S10>/ChrMgmt_KeepWrm':
 *  1. VCU_SW_Requirements_Specification.slreqx:1991
 *  2. VCU_SW_Requirements_Specification.slreqx:1992
 *
 * Inherited requirements for '<S11>/ChrMgmt_DCChrgProcActv':
 *  1. VCU_SW_Requirements_Specification.slreqx:2001
 *  2. VCU_SW_Requirements_Specification.slreqx:2002
 *
 * Inherited requirements for '<S12>/ChrMgmt_V2LProcActv':
 *  1. VCU_SW_Requirements_Specification.slreqx:2017
 *  2. VCU_SW_Requirements_Specification.slreqx:2018
 *
 * Inherited requirements for '<S112>/ChrMgmt_DcChrgAllwd':
 *  1. VCU_SW_Requirements_Specification.slreqx:2093
 *  2. VCU_SW_Requirements_Specification.slreqx:2094
 *  3. VCU_SW_Requirements_Specification.slreqx:2095
 *
 * Inherited requirements for '<S112>/ChrMgmt_OBCEnaAllwd':
 *  1. VCU_SW_Requirements_Specification.slreqx:2096
 *  2. VCU_SW_Requirements_Specification.slreqx:2097
 *  3. VCU_SW_Requirements_Specification.slreqx:2098
 *  4. VCU_SW_Requirements_Specification.slreqx:2099
 *
 * Inherited requirements for '<S113>/ChrMgmt_ReqLvActv':
 *  1. VCU_SW_Requirements_Specification.slreqx:2090
 *  2. VCU_SW_Requirements_Specification.slreqx:2091
 *  3. VCU_SW_Requirements_Specification.slreqx:2092
 *
 * Inherited requirements for '<S133>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:1961
 *
 * Inherited requirements for '<S133>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:1962
 *  2. VCU_SW_Requirements_Specification.slreqx:1963
 *
 * Inherited requirements for '<S134>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:1981
 *
 * Inherited requirements for '<S136>/ChrMgmt_IVIMaxChrgSOC':
 *  1. VCU_SW_Requirements_Specification.slreqx:1937
 *  2. VCU_SW_Requirements_Specification.slreqx:1938
 *
 * Inherited requirements for '<S136>/ChrMgmt_IVIMinDchaSOC':
 *  1. VCU_SW_Requirements_Specification.slreqx:1935
 *  2. VCU_SW_Requirements_Specification.slreqx:1945
 *  3. VCU_SW_Requirements_Specification.slreqx:1946
 *
 * Inherited requirements for '<S136>/ChrMgmt_SOCSet':
 *  1. VCU_SW_Requirements_Specification.slreqx:1941
 *  2. VCU_SW_Requirements_Specification.slreqx:1942
 *  3. VCU_SW_Requirements_Specification.slreqx:1943
 *  4. VCU_SW_Requirements_Specification.slreqx:1944
 *  5. VCU_SW_Requirements_Specification.slreqx:1949
 *  6. VCU_SW_Requirements_Specification.slreqx:1950
 *  7. VCU_SW_Requirements_Specification.slreqx:1951
 *  8. VCU_SW_Requirements_Specification.slreqx:1952
 *
 * Inherited requirements for '<S152>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:1968
 *
 * Inherited requirements for '<S152>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:1969
 *
 * Inherited requirements for '<S152>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:1970
 *
 * Inherited requirements for '<S152>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:1971
 *
 * Inherited requirements for '<S153>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:1964
 *
 * Inherited requirements for '<S153>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:1965
 *
 * Inherited requirements for '<S153>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:1966
 *
 * Inherited requirements for '<S154>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:1973
 *
 * Inherited requirements for '<S154>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:1974
 *
 * Inherited requirements for '<S154>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:1975
 *
 * Inherited requirements for '<S154>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:1976
 *
 * Inherited requirements for '<S154>/If4':
 *  1. VCU_SW_Requirements_Specification.slreqx:1977
 *
 * Inherited requirements for '<S154>/If5':
 *  1. VCU_SW_Requirements_Specification.slreqx:1978
 *
 * Inherited requirements for '<S154>/If7':
 *  1. VCU_SW_Requirements_Specification.slreqx:13232
 *
 * Inherited requirements for '<S180>/ChrMgmt_ChrgStatErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2139
 *
 * Inherited requirements for '<S181>/ChrMgmt_ChrgStatErrEnaCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2109
 *
 * Inherited requirements for '<S181>/ChrMgmt_ChrgStatErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2105
 *
 * Inherited requirements for '<S182>/ChrMgmt_ChrgStatErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2207
 *
 * Inherited requirements for '<S182>/ChrMgmt_ChrgStatResetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2209
 *
 * Inherited requirements for '<S183>/ChrMgmt_ChrgStatErrEnaCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2177
 *
 * Inherited requirements for '<S183>/ChrMgmt_ChrgStatErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2173
 *
 * Inherited requirements for '<S183>/ChrMgmt_ChrgStatResetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2175
 *
 * Inherited requirements for '<S184>/ChrMgmt_ChrgStatErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2224
 *
 * Inherited requirements for '<S184>/ChrMgmt_ChrgStatResetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2226
 *
 * Inherited requirements for '<S185>/ChrMgmt_ChrgStatErrEnaCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2194
 *
 * Inherited requirements for '<S185>/ChrMgmt_ChrgStatErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2190
 *
 * Inherited requirements for '<S185>/ChrMgmt_ChrgStatResetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2192
 *
 * Inherited requirements for '<S186>/ChrMgmt_ChrgStatErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2156
 *
 * Inherited requirements for '<S186>/ChrMgmt_ChrgStatResetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2158
 *
 * Inherited requirements for '<S187>/ChrMgmt_ChrgStatErrSetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2122
 *
 * Inherited requirements for '<S187>/ChrMgmt_ChrgStatResetCdn':
 *  1. VCU_SW_Requirements_Specification.slreqx:2124
 *
 * Inherited requirements for '<S15>/ChrMgmt_ACChrgnNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:1994
 *
 * Inherited requirements for '<S15>/ChrMgmt_ACPChrgnAbNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:1998
 *
 * Inherited requirements for '<S15>/ChrMgmt_ACPlugAbNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:1997
 *
 * Inherited requirements for '<S15>/ChrMgmt_ACPlugNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:1993
 *
 * Inherited requirements for '<S15>/ChrMgmt_ACWarmNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:1995
 *
 * Inherited requirements for '<S71>/ChrMgmt_ChrgnDCAbNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:2010
 *  2. VCU_SW_Requirements_Specification.slreqx:2011
 *
 * Inherited requirements for '<S71>/ChrMgmt_DCChrgFlwActv':
 *  1. VCU_SW_Requirements_Specification.slreqx:2003
 *  2. VCU_SW_Requirements_Specification.slreqx:2004
 *  3. VCU_SW_Requirements_Specification.slreqx:2005
 *  4. VCU_SW_Requirements_Specification.slreqx:2006
 *
 * Inherited requirements for '<S71>/ChrMgmt_DCNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:2007
 *  2. VCU_SW_Requirements_Specification.slreqx:2008
 *  3. VCU_SW_Requirements_Specification.slreqx:2012
 *
 * Inherited requirements for '<S71>/ChrMgmt_DcChrgCmplSts':
 *  1. VCU_SW_Requirements_Specification.slreqx:2012
 *  2. VCU_SW_Requirements_Specification.slreqx:2013
 *  3. VCU_SW_Requirements_Specification.slreqx:2014
 *  4. VCU_SW_Requirements_Specification.slreqx:2015
 *  5. VCU_SW_Requirements_Specification.slreqx:2016
 *
 * Inherited requirements for '<S71>/ChrMgmt_PreDCAbNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:2009
 *
 * Inherited requirements for '<S102>/ChrMgmt_V2LNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:2019
 *  2. VCU_SW_Requirements_Specification.slreqx:2020
 *
 * Inherited requirements for '<S115>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:2096
 *
 * Inherited requirements for '<S119>/ChrMgmt_ACReqHvDown':
 *  1. VCU_SW_Requirements_Specification.slreqx:19144
 *
 * Inherited requirements for '<S119>/ChrMgmt_DCReqHvDown':
 *  1. VCU_SW_Requirements_Specification.slreqx:19143
 *
 * Inherited requirements for '<S119>/ChrMgmt_PlugStsReqHvDown':
 *  1. VCU_SW_Requirements_Specification.slreqx:2087
 *
 * Inherited requirements for '<S119>/ChrMgmt_ReqHvRdy':
 *  1. VCU_SW_Requirements_Specification.slreqx:2088
 *
 * Inherited requirements for '<S119>/ChrMgmt_V2LReqHvDown':
 *  1. VCU_SW_Requirements_Specification.slreqx:19145
 *
 * Inherited requirements for '<S143>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:1938
 *
 * Inherited requirements for '<S144>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:1946
 *
 * Inherited requirements for '<S145>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:1942
 *
 * Inherited requirements for '<S145>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:1943
 *
 * Inherited requirements for '<S145>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:1950
 *
 * Inherited requirements for '<S145>/If3':
 *  1. VCU_SW_Requirements_Specification.slreqx:1951
 *
 * Inherited requirements for '<S77>/If':
 *  1. VCU_SW_Requirements_Specification.slreqx:2012
 *  2. VCU_SW_Requirements_Specification.slreqx:2015
 *
 * Inherited requirements for '<S77>/If1':
 *  1. VCU_SW_Requirements_Specification.slreqx:2013
 *  2. VCU_SW_Requirements_Specification.slreqx:2014
 *
 * Inherited requirements for '<S77>/If2':
 *  1. VCU_SW_Requirements_Specification.slreqx:2016
 *
 * Inherited requirements for '<S104>/ChrMgmt_V2LAbNormCmpl':
 *  1. VCU_SW_Requirements_Specification.slreqx:2021
 *
 * Inherited requirements for '<S104>/ChrMgmt_V2LCmplStsErr':
 *  1. VCU_SW_Requirements_Specification.slreqx:2022
 *
 * Inherited requirements for '<S104>/ChrMgmt_V2LPlugStsErr':
 *  1. VCU_SW_Requirements_Specification.slreqx:2022

 */
#endif                                 /* RTW_HEADER_CtAp_ChrgStat_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
