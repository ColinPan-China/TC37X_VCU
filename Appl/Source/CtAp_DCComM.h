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
 *  Filename:           CtAp_DCComM.h
 *  File Creation Date: 07-Aug-2025
 *  Model Name:         CtAp_DCComM
 *  Model Version:      V1.004
 *  Model Author:       TaoWang - Fri Mar 28 10:42:49 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Aug  7 18:50:01 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - Thu Aug 07 18:47:55 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_DCComM_h_
#define RTW_HEADER_CtAp_DCComM_h_
#ifndef CtAp_DCComM_COMMON_INCLUDES_
#define CtAp_DCComM_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_DCComM.h"
#endif                                 /* CtAp_DCComM_COMMON_INCLUDES_ */

#include <stddef.h>
#include "CtAp_DCComM_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define DCComM_0xFF                    255U                      /* Referenced by:
                                                                  * '<S1>/BRM_VehicleIdByte17_BRM_VehicleIdByte17_write_process_queue'
                                                                  * '<S40>/Define'
                                                                  * '<S42>/Define'
                                                                  * '<S67>/Define'
                                                                  */
#define DCComM_0xFFFF                  65535U                    /* Referenced by:
                                                                  * '<S1>/BRM_BatterySN_BRM_BatterySN_write_process_queue'
                                                                  * '<S57>/Define'
                                                                  */
#define DCComM_Cyc250ms                240U                      /* Referenced by:
                                                                  * '<S87>/Constant'
                                                                  * '<S91>/Constant'
                                                                  * '<S94>/Constant'
                                                                  * '<S107>/Constant'
                                                                  * '<S114>/Constant'
                                                                  * '<S121>/Constant'
                                                                  * '<S124>/Constant'
                                                                  */
#define DCComM_Cyc500ms                490U                      /* Referenced by: '<S118>/Constant' */
#define DCComM_Cyc50ms                 50U                       /* Referenced by:
                                                                  * '<S73>/Define13'
                                                                  * '<S73>/Define16'
                                                                  * '<S73>/Define19'
                                                                  * '<S73>/Define22'
                                                                  * '<S73>/Define25'
                                                                  * '<S73>/Define28'
                                                                  * '<S73>/Define31'
                                                                  * '<S73>/Define9'
                                                                  */
#define DCComM_MacCellU                4.5F                      /* Referenced by: '<S69>/Define1' */
#define DCComM_MaxDcChrgCurr           -400.0F                   /* Referenced by: '<S68>/Define' */
#define DCComM_MaxDcChrgVol            450.0F                    /* Referenced by:
                                                                  * '<S5>/Define'
                                                                  * '<S26>/Define'
                                                                  * '<S69>/Define'
                                                                  */
#define DCComM_Offset_0                0.0F                      /* Referenced by:
                                                                  * '<S3>/Define2'
                                                                  * '<S5>/Define2'
                                                                  * '<S13>/Define1'
                                                                  * '<S13>/Define3'
                                                                  * '<S21>/Define1'
                                                                  * '<S21>/Define3'
                                                                  * '<S22>/Define3'
                                                                  * '<S26>/Define2'
                                                                  * '<S46>/Define1'
                                                                  * '<S46>/Define17'
                                                                  * '<S46>/Define19'
                                                                  * '<S46>/Define3'
                                                                  * '<S46>/Define5'
                                                                  * '<S46>/Define7'
                                                                  * '<S73>/Define1'
                                                                  * '<S73>/Define3'
                                                                  * '<S73>/Define33'
                                                                  */
#define DCComM_Offset_Minus40          -40.0F                    /* Referenced by:
                                                                  * '<S7>/Define1'
                                                                  * '<S46>/Define15'
                                                                  * '<S46>/Define9'
                                                                  * '<S48>/Define1'
                                                                  * '<S48>/Define5'
                                                                  */
#define DCComM_Offset_Minus400         -400.0F                   /* Referenced by:
                                                                  * '<S17>/Define1'
                                                                  * '<S68>/Define2'
                                                                  * '<S73>/Define35'
                                                                  * '<S73>/Define5'
                                                                  * '<S73>/Define7'
                                                                  */
#define DCComM_Offset_Minus50          -50.0F                    /* Referenced by:
                                                                  * '<S7>/Define3'
                                                                  * '<S46>/Define11'
                                                                  * '<S46>/Define13'
                                                                  * '<S48>/Define3'
                                                                  * '<S48>/Define7'
                                                                  */
#define DCComM_ProtocolVersion         257U                      /* Referenced by:
                                                                  * '<S1>/BRM_ProtocolVersion_BRM_ProtocolVersion_write_process_queue'
                                                                  * '<S66>/Define'
                                                                  */
#define DCComM_Resolution_0001         0.001F                    /* Referenced by:
                                                                  * '<S46>/Define'
                                                                  * '<S46>/Define4'
                                                                  */
#define DCComM_Resolution_001          0.01F                     /* Referenced by:
                                                                  * '<S13>/Define2'
                                                                  * '<S21>/Define2'
                                                                  * '<S22>/Define2'
                                                                  * '<S46>/Define16'
                                                                  * '<S46>/Define2'
                                                                  * '<S46>/Define6'
                                                                  */
#define DCComM_Resolution_01           0.1F                      /* Referenced by:
                                                                  * '<S3>/Define1'
                                                                  * '<S5>/Define1'
                                                                  * '<S13>/Define'
                                                                  * '<S17>/Define'
                                                                  * '<S21>/Define'
                                                                  * '<S26>/Define1'
                                                                  * '<S68>/Define1'
                                                                  * '<S73>/Define'
                                                                  * '<S73>/Define2'
                                                                  * '<S73>/Define32'
                                                                  * '<S73>/Define34'
                                                                  * '<S73>/Define4'
                                                                  * '<S73>/Define6'
                                                                  */
#define DCComM_Resolution_1            1.0F                      /* Referenced by:
                                                                  * '<S7>/Define'
                                                                  * '<S7>/Define2'
                                                                  * '<S46>/Define10'
                                                                  * '<S46>/Define12'
                                                                  * '<S46>/Define14'
                                                                  * '<S46>/Define18'
                                                                  * '<S46>/Define8'
                                                                  * '<S48>/Define'
                                                                  * '<S48>/Define2'
                                                                  * '<S48>/Define4'
                                                                  * '<S48>/Define6'
                                                                  */
#define DCComM_TxCnt50ms               40U                       /* Referenced by: '<S75>/Constant' */
#define DCComM_U16Zero                 0U                        /* Referenced by:
                                                                  * '<S4>/Define1'
                                                                  * '<S25>/Define1'
                                                                  * '<S27>/Define1'
                                                                  * '<S45>/Define1'
                                                                  * '<S47>/Define1'
                                                                  * '<S49>/Define1'
                                                                  * '<S70>/Define1'
                                                                  * '<S71>/Define1'
                                                                  * '<S72>/Define1'
                                                                  * '<S73>/Define10'
                                                                  * '<S73>/Define11'
                                                                  * '<S73>/Define14'
                                                                  * '<S73>/Define17'
                                                                  * '<S73>/Define20'
                                                                  * '<S73>/Define23'
                                                                  * '<S73>/Define26'
                                                                  * '<S73>/Define29'
                                                                  */
#define DCComM_dt                      10U                       /* Referenced by:
                                                                  * '<S4>/Define'
                                                                  * '<S25>/Define'
                                                                  * '<S27>/Define'
                                                                  * '<S45>/Define'
                                                                  * '<S47>/Define'
                                                                  * '<S49>/Define'
                                                                  * '<S70>/Define'
                                                                  * '<S71>/Define'
                                                                  * '<S72>/Define'
                                                                  * '<S73>/Define12'
                                                                  * '<S73>/Define15'
                                                                  * '<S73>/Define18'
                                                                  * '<S73>/Define21'
                                                                  * '<S73>/Define24'
                                                                  * '<S73>/Define27'
                                                                  * '<S73>/Define30'
                                                                  * '<S73>/Define8'
                                                                  * '<S76>/Constant'
                                                                  * '<S88>/Constant'
                                                                  * '<S92>/Constant'
                                                                  * '<S95>/Constant'
                                                                  * '<S108>/Constant'
                                                                  * '<S115>/Constant'
                                                                  * '<S119>/Constant'
                                                                  * '<S122>/Constant'
                                                                  * '<S125>/Constant'
                                                                  */

/* PublicStructure Variables for Internal Data, for system '<S73>/ATOM_OffDelay' */
typedef struct {
  uint16_T UnitDelay_DSTATE;           /* '<S127>/UnitDelay' */
} ARID_DEF_ATOM_OffDelay_CtAp_D_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_OffDelay_CtAp_D_T ARID_DEF_ATOM_OffDelay7;/* '<S73>/ATOM_OffDelay7' */
  ARID_DEF_ATOM_OffDelay_CtAp_D_T ARID_DEF_ATOM_OffDelay6;/* '<S73>/ATOM_OffDelay6' */
  ARID_DEF_ATOM_OffDelay_CtAp_D_T ARID_DEF_ATOM_OffDelay5;/* '<S73>/ATOM_OffDelay5' */
  ARID_DEF_ATOM_OffDelay_CtAp_D_T ARID_DEF_ATOM_OffDelay4;/* '<S73>/ATOM_OffDelay4' */
  ARID_DEF_ATOM_OffDelay_CtAp_D_T ARID_DEF_ATOM_OffDelay3;/* '<S73>/ATOM_OffDelay3' */
  ARID_DEF_ATOM_OffDelay_CtAp_D_T ARID_DEF_ATOM_OffDelay2;/* '<S73>/ATOM_OffDelay2' */
  ARID_DEF_ATOM_OffDelay_CtAp_D_T ARID_DEF_ATOM_OffDelay1;/* '<S73>/ATOM_OffDelay1' */
  ARID_DEF_ATOM_OffDelay_CtAp_D_T ARID_DEF_ATOM_OffDelay;/* '<S73>/ATOM_OffDelay' */
  real32_T Divide;                     /* '<S83>/Divide' */
  real32_T Divide_nljh;                /* '<S82>/Divide' */
  BRM_BatteryChargeTimes msg_ppxr;
                    /* '<Root>/BRM_BatteryChargeTimes_BRM_BatteryChargeTimes' */
  BRM_BatterySN msg_ldqo;             /* '<Root>/BRM_BatterySN_BRM_BatterySN' */
  BRM_Manufacturer msg_owjr;    /* '<Root>/BRM_Manufacturer_BRM_Manufacturer' */
  BRM_ProtocolVersion msg_bjbg;
                          /* '<Root>/BRM_ProtocolVersion_BRM_ProtocolVersion' */
  uint32_T BRM_Manufacturer_BRM_Manuf_crgd;
              /* '<S1>/BRM_Manufacturer_BRM_Manufacturer_write_process_queue' */
  uint32_T BRM_BatterySN_BRM_BatteryS_p5h3;
                    /* '<S1>/BRM_BatterySN_BRM_BatterySN_write_process_queue' */
  uint32_T BRM_ProtocolVersion_BRM_Pr_cesj;
        /* '<S1>/BRM_ProtocolVersion_BRM_ProtocolVersion_write_process_queue' */
  uint32_T BRM_BatteryChargeTimes_BRM_meig;
     /* '<S1>/BRM_BatteryChargeTimes_BRM_BatteryChargeTimes_18adcccc17fe958f' */
  BCP_AllowChargeVoltageMax msg;
              /* '<Root>/BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax' */
  BCP_BatteryChargeVoltageMax msg_cl54;
          /* '<Root>/BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax' */
  BCP_BatteryNominalEnergy msg_kkiq;
                /* '<Root>/BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy' */
  BCP_BatteryTotalVoltage msg_cxar;
                  /* '<Root>/BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage' */
  BCP_ChargeCurrentMax msg_bhxx;
                        /* '<Root>/BCP_ChargeCurrentMax_BCP_ChargeCurrentMax' */
  BCP_SOC msg_pbm3;                    /* '<Root>/BCP_SOC_BCP_SOC' */
  BCS_BatteryVoltMax msg_cv5h;
                            /* '<Root>/BCS_BatteryVoltMax_BCS_BatteryVoltMax' */
  BCS_ChargeCurrentMeasure msg_g2ml;
                /* '<Root>/BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure' */
  BCS_ChargeVoltageMeasure msg_g1sm;
                /* '<Root>/BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure' */
  BCS_EstimatedTimeRemaining msg_merl;
            /* '<Root>/BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining' */
  BRM_BatterySystemRatedCapacity msg_dham;
    /* '<Root>/BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity' */
  BRM_BatterySystemRatedVoltage msg_dype;
      /* '<Root>/BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage' */
  uint16_T Delay1_DSTATE;              /* '<S4>/Delay1' */
  uint16_T Delay_DSTATE;               /* '<S4>/Delay' */
  uint16_T Delay1_DSTATE_dphr;         /* '<S70>/Delay1' */
  uint16_T Delay_DSTATE_cx5r;          /* '<S70>/Delay' */
  uint16_T Delay1_DSTATE_cq4g;         /* '<S71>/Delay1' */
  uint16_T Delay_DSTATE_bygu;          /* '<S71>/Delay' */
  uint16_T Delay1_DSTATE_aito;         /* '<S72>/Delay1' */
  uint16_T Delay_DSTATE_pdvw;          /* '<S72>/Delay' */
  uint16_T Delay1_DSTATE_g1oe;         /* '<S47>/Delay1' */
  uint16_T Delay_DSTATE_iudh;          /* '<S47>/Delay' */
  uint16_T Delay1_DSTATE_h1k3;         /* '<S49>/Delay1' */
  uint16_T Delay_DSTATE_eyz2;          /* '<S49>/Delay' */
  uint16_T Delay1_DSTATE_p2kp;         /* '<S25>/Delay1' */
  uint16_T Delay_DSTATE_fsku;          /* '<S25>/Delay' */
  uint16_T Delay1_DSTATE_cww3;         /* '<S27>/Delay1' */
  uint16_T Delay_DSTATE_dwor;          /* '<S27>/Delay' */
  uint16_T Delay1_DSTATE_nerz;         /* '<S45>/Delay1' */
  uint16_T Delay_DSTATE_h4rw;          /* '<S45>/Delay' */
  uint16_T BCS_BatteryVoltMax_BCS_Bat_nps3;
          /* '<S1>/BCS_BatteryVoltMax_BCS_BatteryVoltMax_write_process_queue' */
  uint16_T BCP_ChargeCurrentMax_BCP_C_lit3;
      /* '<S1>/BCP_ChargeCurrentMax_BCP_ChargeCurrentMax_write_process_queue' */
  uint16_T BCP_BatteryChargeVoltageMa_pppp;
    /* '<S1>/BCP_BatteryChargeVoltageMax_BCP_BatteryChargeV_0f169ed7ae1303eb' */
  uint16_T BRM_BatterySystemRatedVolt_l1sw;
    /* '<S1>/BRM_BatterySystemRatedVoltage_BRM_BatterySyste_731416f8cb728fc6' */
  uint16_T BCS_ChargeVoltageMeasure_B_fwx5;
    /* '<S1>/BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeas_a97f47267e6402ce' */
  uint16_T BCP_BatteryTotalVoltage_BC_kxkw;
    /* '<S1>/BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltag_7545dd85d42f26c0' */
  uint16_T BCP_AllowChargeVoltageMax__lyky;
    /* '<S1>/BCP_AllowChargeVoltageMax_BCP_AllowChargeVolta_273247b55ebf3761' */
  uint16_T BRM_BatterySystemRatedCapa_iejy;
    /* '<S1>/BRM_BatterySystemRatedCapacity_BRM_BatterySyst_609deba779adf6e4' */
  uint16_T BCS_ChargeCurrentMeasure_B_m3ml;
    /* '<S1>/BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeas_27a1fed92424b727' */
  uint16_T BCP_BatteryNominalEnergy_B_b4g0;
    /* '<S1>/BCP_BatteryNominalEnergy_BCP_BatteryNominalEne_21599683ffa90537' */
  uint16_T BCS_EstimatedTimeRemaining_kcoa;
    /* '<S1>/BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRe_62efaf49d010a8c2' */
  uint16_T BCP_SOC_BCP_SOC_write_msgData;
                                /* '<S1>/BCP_SOC_BCP_SOC_write_process_queue' */
  uint8_T msg_nueb[8];  /* '<Root>/BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8' */
  uint8_T msg_lnjd[8];/* '<Root>/BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16' */
  uint8_T BRM_VehicleIdByte9_16_BRM__kqs1[8];
    /* '<S1>/BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16_write_process_queue' */
  uint8_T BRM_VehicleIdByte1_8_BRM_V_ittx[8];
      /* '<S1>/BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8_write_process_queue' */
  BCP_AllowTempMax msg_mbvz;    /* '<Root>/BCP_AllowTempMax_BCP_AllowTempMax' */
  BCS_BatteryVoltMaxGroup msg_fqdq;
                  /* '<Root>/BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup' */
  BCS_SOC msg_nz4o;                    /* '<Root>/BCS_SOC_BCS_SOC' */
  BRM_BatteryProductDay msg_llw0;
                      /* '<Root>/BRM_BatteryProductDay_BRM_BatteryProductDay' */
  BRM_BatteryProductMonth msg_jwzv;
                  /* '<Root>/BRM_BatteryProductMonth_BRM_BatteryProductMonth' */
  BRM_BatteryProductYear msg_dhmr;
                    /* '<Root>/BRM_BatteryProductYear_BRM_BatteryProductYear' */
  BRM_BatteryProperty msg_guug;
                          /* '<Root>/BRM_BatteryProperty_BRM_BatteryProperty' */
  BRM_BatteryType msg_lxo5;       /* '<Root>/BRM_BatteryType_BRM_BatteryType' */
  BRM_VehicleIdByte17 msg_bsqw;
                          /* '<Root>/BRM_VehicleIdByte17_BRM_VehicleIdByte17' */
  uint8_T BRM_VehicleIdByte17_BRM_Ve_ajze;
        /* '<S1>/BRM_VehicleIdByte17_BRM_VehicleIdByte17_write_process_queue' */
  uint8_T BRM_BatteryProperty_BRM_Ba_lu3a;
        /* '<S1>/BRM_BatteryProperty_BRM_BatteryProperty_write_process_queue' */
  uint8_T BRM_BatteryProductYear_BRM_nrlt;
     /* '<S1>/BRM_BatteryProductYear_BRM_BatteryProductYear_933d35e69f18d81e' */
  uint8_T BCP_AllowTempMax_BCP_Allow_leuq;
              /* '<S1>/BCP_AllowTempMax_BCP_AllowTempMax_write_process_queue' */
  uint8_T BRM_BatteryProductMonth_BR_kqjz;
    /* '<S1>/BRM_BatteryProductMonth_BRM_BatteryProductMont_8c8c2e7d082f59bb' */
  uint8_T BCS_BatteryVoltMaxGroup_BC_auve;
    /* '<S1>/BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGrou_314ea51b2dc2b37b' */
  uint8_T BCS_SOC_BCS_SOC_write_msgData;
                                /* '<S1>/BCS_SOC_BCS_SOC_write_process_queue' */
  uint8_T BRM_BatteryType_BRM_Batter_jvbl;
                /* '<S1>/BRM_BatteryType_BRM_BatteryType_write_process_queue' */
  uint8_T BRM_BatteryProductDay_BRM__k3gc;
    /* '<S1>/BRM_BatteryProductDay_BRM_BatteryProductDay_write_process_queue' */
} ARID_DEF_CtAp_DCComM_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_DCComM_START_SEC_VAR_NOINIT_8
#include "CtAp_DCComM_MemMap.h"

extern ARID_DEF_CtAp_DCComM_T CtAp_DCComM_ARID_DEF;

#define CtAp_DCComM_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCComM_MemMap.h"

/* Exported data declaration */

/*if not init use it */
#define CtAp_DCComM_START_SEC_VAR_NOINIT_8
#include "CtAp_DCComM_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Declaration for custom storage class: ExportToFile_AtomAutoSar */
extern uint16_T ChrgMgmt_ChrgnRemnTim_min;/* '<S55>/DataTypeConversion' */

/* BCP Rate energy */
extern uint16_T ComM_BMSBattChrgCnt_Tms;/* '<S56>/DataTypeConversion' */

/* BRM Battery charge count */
extern real32_T ComM_BMSBattDispSOC_pct;/* '<S13>/DataTypeConversion1' */

/* BCP Max Charge Temp */
extern uint8_T ComM_BMSBattManfDay_Enum;/* '<S58>/DataTypeConversion' */

/* Battery product day */
extern uint8_T ComM_BMSBattManfMth_Enum;/* '<S59>/DataTypeConversion' */

/* BRM Battery product Month
 */
extern uint16_T ComM_BMSBattManfYr_Enum;/* '<S60>/DataTypeConversion' */

/* Battery product Year */
extern real32_T ComM_BMSBattMaxChrgTemp_C;/* '<S7>/Data Type Conversion2' */

/* Max Charge Temp */
extern uint16_T ComM_BMSBattPckUDc_V;  /* '<S52>/DataTypeConversion' */

/* Pack voltage */
extern uint8_T ComM_BMSBattPpty_Enum;  /* '<S61>/DataTypeConversion' */

/* Battery product owner */
extern uint16_T ComM_BMSBattRateCp_Ah; /* '<S62>/DataTypeConversion' */

/*  Battery capacity */
extern uint16_T ComM_BMSBattRateEgy_kWh;/* '<S51>/DataTypeConversion' */

/* Battery rate energy */
extern uint16_T ComM_BMSBattRateUDc_V; /* '<S63>/DataTypeConversion' */

/*  Battery Voltage */
extern uint8_T ComM_BMSBattTyp_Enum;   /* '<S64>/DataTypeConversion' */

/* BatTERY Type */
extern uint32_T ComM_BMSBattmanfr_Enum;/* '<S65>/DataTypeConversion' */

/* Battery manufacturer */
extern real32_T ComM_BattMaxCellUDc_V; /* '<S21>/DataTypeConversion2' */

/* BCP Max cell Charge voltage */
extern uint8_T ComM_MaxCellTempNr_Enum;/* '<S48>/DataTypeConversion16' */

/* BRM Battery product dayBattery max temp moudle number */
extern real32_T ComM_MaxCellTemp_C;    /* '<S48>/ATOM_SignalRead' */

/*  Max Battery Temp */
extern uint16_T ComM_MaxCellUDcModlNr_Enum;/* '<S53>/DataTypeConversion' */

/* BCP battery voltage moudle number */
extern uint8_T ComM_MinCellTempNr_Enum;/* '<S48>/DataTypeConversion19' */

/* Battery min temp moudle number */
extern real32_T ComM_MinCellTemp_C;    /* '<S48>/ATOM_SignalRead1' */

/* Min battery temp */
extern uint16_T ComM_PODDCFCUDc_V;     /* '<S54>/DataTypeConversion' */

/* BCP battery voltage */
extern uint16_T DCChrMgmt_BCPBattRateEgy_kWh;/* '<S51>/DataTypeConversion1' */

/* BCP Rate energy */
extern real32_T DCChrMgmt_BCPBattSOC_pct;/* '<S13>/DataTypeConversion2' */

/* BCP Max Charge Temp */
extern uint16_T DCChrMgmt_BCPBattUDc_V;/* '<S52>/DataTypeConversion1' */

/* BCP battery voltage */
extern real32_T DCChrMgmt_BCPMaxCellChrgUDc_V;/* '<S69>/Define1' */

/* BCP Max Charge voltage */
extern real32_T DCChrMgmt_BCPMaxChrgIDc_A;/* '<S68>/Define' */

/* BCP Max Charge voltage */
extern real32_T DCChrMgmt_BCPMaxChrgTemp_C;/* '<S7>/Data Type Conversion3' */

/* BCP Max Charge Temp */
extern real32_T DCChrMgmt_BCPMaxChrgUDc_V;/* '<S5>/Define' */

/* BCP Max Charge voltage */
extern real32_T DCChrMgmt_BCSBattSOC_pct;/* '<S22>/ATOM_SignalRead' */

/* BCP Max Charge Temp */
extern uint16_T DCChrMgmt_BCSMaxCellUDcGroup_Enum;/* '<S53>/DataTypeConversion1' */

/* BCP battery voltage moudle number */
extern real32_T DCChrMgmt_BCSMaxCellUDc_V;/* '<S21>/DataTypeConversion3' */

/* BCP Max cell Charge voltage */
extern real32_T DCChrMgmt_BCSMeasdChrgnIDc_A;/* '<S17>/DataTypeConversion1' */

/* BCP Max Charge voltage */
extern uint16_T DCChrMgmt_BCSMeasdChrgnUDc_V;/* '<S54>/DataTypeConversion1' */

/* BCP battery voltage */
extern uint16_T DCChrMgmt_BCSRmgChrgnTim_min;/* '<S55>/DataTypeConversion1' */

/* BCP Rate energy */
extern real32_T DCChrMgmt_BHMMaxChrgUDc_V;/* '<S26>/ATOM_SignalSend' */

/* BHM Max Charge voltage */
extern uint16_T DCChrMgmt_BRMBattChrgCnt_Tms;/* '<S56>/DataTypeConversion1' */

/* BRM Battery charge count */
extern uint16_T DCChrMgmt_BRMBattCod_Enum;/* '<S57>/Define' */

/* BRM Battery Code */
extern uint8_T DCChrMgmt_BRMBattManfDay_Enum;/* '<S58>/DataTypeConversion1' */

/* BRM Battery product day */
extern uint8_T DCChrMgmt_BRMBattManfMth_Enum;/* '<S59>/DataTypeConversion1' */

/* BRM Battery product Month */
extern uint16_T DCChrMgmt_BRMBattManfYr_Enum;/* '<S60>/DataTypeConversion1' */

/* BRM Battery product Year */
extern uint8_T DCChrMgmt_BRMBattPpty_Enum;/* '<S61>/DataTypeConversion1' */

/* BRM Battery product owner */
extern uint16_T DCChrMgmt_BRMBattRateCp_Ah;/* '<S62>/DataTypeConversion1' */

/* BRM Battery capacity */
extern uint16_T DCChrMgmt_BRMBattRateUDc_V;/* '<S63>/DataTypeConversion1' */

/* BRM Battery Voltage */
extern uint8_T DCChrMgmt_BRMBattResv_Enum;/* '<S67>/DataTypeConversion' */

/* VIN byte17 */
extern uint8_T DCChrMgmt_BRMBattTyp_Enum;/* '<S64>/DataTypeConversion1' */

/* BatTERY Type */
extern uint32_T DCChrMgmt_BRMBattmanfr_Enum;/* '<S65>/DataTypeConversion1' */

/* BRM manufacturer */
extern uint32_T DCChrMgmt_BRMComVers_Enum;/* '<S66>/Define' */

/* BRM Charge communication version */
extern uint8_T DCChrMgmt_BRMVehCod17;  /* '<S67>/DataTypeConversion1' */

/* VIN byte17 */
extern uint8_T DCChrMgmt_BRMVehCod1_8[8];/* '<S40>/DataTypeConversion' */

/* VIN byte1 to byte8 */
extern uint8_T DCChrMgmt_BRMVehCod9_16[8];/* '<S42>/DataTypeConversion' */

/* VIN byte9 to byte16 */
extern real32_T DCChrMgmt_BSDBattMaxCellUDc_V;/* '<S46>/ATOM_SignalRead' */

/* BSD Max cell voltage */
extern real32_T DCChrMgmt_BSDBattMaxTemp_C;/* '<S46>/ATOM_SignalRead2' */

/* BSD Max cell temp */
extern real32_T DCChrMgmt_BSDBattMinCellUDc_V;/* '<S46>/ATOM_SignalRead1' */

/* BSD Min cell voltage */
extern real32_T DCChrMgmt_BSDBattMinTemp_C;/* '<S46>/ATOM_SignalRead3' */

/* BSD Min cell temp */
extern real32_T DCChrMgmt_BSDFinshdSOC_pct;/* '<S46>/ATOM_SignalRead4' */

/* BSD Finish SOC */
extern uint8_T DCChrMgmt_BSMChrgAllow_Enum;/* '<S48>/DataTypeConversion12' */

/* charge allowable */
extern uint8_T DCChrMgmt_BSMMaxCellTempNr_Enum;/* '<S48>/DataTypeConversion17' */

/* Battery max temp moudle number */
extern real32_T DCChrMgmt_BSMMaxCellTemp_C;/* '<S48>/DataTypeConversion15' */

/* BSM Max Charge Temp */
extern uint8_T DCChrMgmt_BSMMinCellTempNr_Enum;/* '<S48>/DataTypeConversion20' */

/* Battery min temp moudle number */
extern real32_T DCChrMgmt_BSMMinCellTemp_C;/* '<S48>/DataTypeConversion18' */

/* Min battery temp */
#define CtAp_DCComM_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCComM_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

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
 * '<Root>' : 'CtAp_DCComM'
 * '<S1>'   : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys'
 * '<S2>'   : 'CtAp_DCComM/R_DCComM_Init'
 * '<S3>'   : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCL'
 * '<S4>'   : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCLCycle'
 * '<S5>'   : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_AllowChargeVoltageMax'
 * '<S6>'   : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_AllowChargeVoltageMax_BCP_AllowChargeVolta_273247b55ebf3761'
 * '<S7>'   : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_AllowTempMax'
 * '<S8>'   : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_AllowTempMax_BCP_AllowTempMax_write_process_queue'
 * '<S9>'   : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_BatteryChargeVoltageMax_BCP_BatteryChargeV_0f169ed7ae1303eb'
 * '<S10>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_BatteryNominalEnergy_BCP_BatteryNominalEne_21599683ffa90537'
 * '<S11>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltag_7545dd85d42f26c0'
 * '<S12>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_ChargeCurrentMax_BCP_ChargeCurrentMax_write_process_queue'
 * '<S13>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_SOC'
 * '<S14>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_SOC_BCP_SOC_write_process_queue'
 * '<S15>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGrou_314ea51b2dc2b37b'
 * '<S16>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_BatteryVoltMax_BCS_BatteryVoltMax_write_process_queue'
 * '<S17>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_ChargeCurrentMeasure'
 * '<S18>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeas_27a1fed92424b727'
 * '<S19>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeas_a97f47267e6402ce'
 * '<S20>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRe_62efaf49d010a8c2'
 * '<S21>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_MaxCellVoltage'
 * '<S22>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_SOC'
 * '<S23>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_SOC_BCS_SOC_write_process_queue'
 * '<S24>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BEM'
 * '<S25>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BEMCycle'
 * '<S26>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BHM'
 * '<S27>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BHMCycle'
 * '<S28>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_BatteryChargeTimes_BRM_BatteryChargeTimes_18adcccc17fe958f'
 * '<S29>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_BatteryProductDay_BRM_BatteryProductDay_write_process_queue'
 * '<S30>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_BatteryProductMonth_BRM_BatteryProductMont_8c8c2e7d082f59bb'
 * '<S31>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_BatteryProductYear_BRM_BatteryProductYear_933d35e69f18d81e'
 * '<S32>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_BatteryProperty_BRM_BatteryProperty_write_process_queue'
 * '<S33>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_BatterySN_BRM_BatterySN_write_process_queue'
 * '<S34>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_BatterySystemRatedCapacity_BRM_BatterySyst_609deba779adf6e4'
 * '<S35>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_BatterySystemRatedVoltage_BRM_BatterySyste_731416f8cb728fc6'
 * '<S36>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_BatteryType_BRM_BatteryType_write_process_queue'
 * '<S37>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_Manufacturer_BRM_Manufacturer_write_process_queue'
 * '<S38>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_ProtocolVersion_BRM_ProtocolVersion_write_process_queue'
 * '<S39>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_VehicleIdByte17_BRM_VehicleIdByte17_write_process_queue'
 * '<S40>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_VehicleIdByte1_8'
 * '<S41>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8_write_process_queue'
 * '<S42>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_VehicleIdByte9_16'
 * '<S43>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16_write_process_queue'
 * '<S44>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BRO'
 * '<S45>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BROCycle'
 * '<S46>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD'
 * '<S47>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSDCycle'
 * '<S48>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSM'
 * '<S49>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSMCycle'
 * '<S50>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BST'
 * '<S51>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BCPBattRateEgy'
 * '<S52>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BCPBattUDc'
 * '<S53>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BCSMaxCellUDcGroup'
 * '<S54>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BCSMeasdChrgnUDc'
 * '<S55>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BCSRmgChrgnTim'
 * '<S56>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattChrgCnt'
 * '<S57>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattCod'
 * '<S58>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattManfDay'
 * '<S59>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattManfMth'
 * '<S60>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattManfYr'
 * '<S61>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattPpty'
 * '<S62>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattRateCp'
 * '<S63>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattRateUDc'
 * '<S64>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattTyp'
 * '<S65>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMBattmanfr'
 * '<S66>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMComVers'
 * '<S67>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCChrMgmt_BRMVehCod17'
 * '<S68>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_MaxDcChrgIDc'
 * '<S69>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_MaxDcChrgUDc'
 * '<S70>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBCPSts'
 * '<S71>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBCSSts'
 * '<S72>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBRMSts'
 * '<S73>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage'
 * '<S74>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCL/ATOM_SignalSend'
 * '<S75>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCLCycle/CompareToConstant'
 * '<S76>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCLCycle/CompareToConstant1'
 * '<S77>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCLCycle/If'
 * '<S78>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_AllowChargeVoltageMax/ATOM_SignalSend'
 * '<S79>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_AllowTempMax/ATOM_SignalRead'
 * '<S80>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_AllowTempMax/ATOM_SignalSend'
 * '<S81>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_SOC/ATOM_SignalRead'
 * '<S82>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCP_SOC/ATOM_SignalSend'
 * '<S83>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_ChargeCurrentMeasure/ATOM_SignalSend'
 * '<S84>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_MaxCellVoltage/ATOM_SignalRead'
 * '<S85>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_MaxCellVoltage/ATOM_SignalSend'
 * '<S86>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BCS_SOC/ATOM_SignalRead'
 * '<S87>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BEMCycle/CompareToConstant'
 * '<S88>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BEMCycle/CompareToConstant1'
 * '<S89>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BEMCycle/If'
 * '<S90>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BHM/ATOM_SignalSend'
 * '<S91>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BHMCycle/CompareToConstant'
 * '<S92>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BHMCycle/CompareToConstant1'
 * '<S93>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BHMCycle/If'
 * '<S94>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BROCycle/CompareToConstant'
 * '<S95>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BROCycle/CompareToConstant1'
 * '<S96>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BROCycle/If'
 * '<S97>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalRead'
 * '<S98>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalRead1'
 * '<S99>'  : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalRead2'
 * '<S100>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalRead3'
 * '<S101>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalRead4'
 * '<S102>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalSend'
 * '<S103>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalSend1'
 * '<S104>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalSend2'
 * '<S105>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalSend3'
 * '<S106>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSD/ATOM_SignalSend4'
 * '<S107>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSDCycle/CompareToConstant'
 * '<S108>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSDCycle/CompareToConstant1'
 * '<S109>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSDCycle/If'
 * '<S110>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSM/ATOM_SignalRead'
 * '<S111>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSM/ATOM_SignalRead1'
 * '<S112>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSM/ATOM_SignalSend'
 * '<S113>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSM/ATOM_SignalSend1'
 * '<S114>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSMCycle/CompareToConstant'
 * '<S115>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSMCycle/CompareToConstant1'
 * '<S116>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/BSMCycle/If'
 * '<S117>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_MaxDcChrgIDc/ATOM_SignalSend'
 * '<S118>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBCPSts/CompareToConstant'
 * '<S119>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBCPSts/CompareToConstant1'
 * '<S120>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBCPSts/If'
 * '<S121>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBCSSts/CompareToConstant'
 * '<S122>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBCSSts/CompareToConstant1'
 * '<S123>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBCSSts/If'
 * '<S124>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBRMSts/CompareToConstant'
 * '<S125>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBRMSts/CompareToConstant1'
 * '<S126>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCComM_TxBRMSts/If'
 * '<S127>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_OffDelay'
 * '<S128>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_OffDelay1'
 * '<S129>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_OffDelay2'
 * '<S130>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_OffDelay3'
 * '<S131>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_OffDelay4'
 * '<S132>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_OffDelay5'
 * '<S133>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_OffDelay6'
 * '<S134>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_OffDelay7'
 * '<S135>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_SignalRead'
 * '<S136>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_SignalRead1'
 * '<S137>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_SignalRead2'
 * '<S138>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_SignalRead3'
 * '<S139>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_SignalRead4'
 * '<S140>' : 'CtAp_DCComM/R_DCComM_Cyclic_10ms_sys/DCCom_RxSigManage/ATOM_SignalRead5'
 */

/*-
 * Requirements for '<Root>': CtAp_DCComM

 *
 * Inherited requirements for '<S1>/BHM':
 *  1. VCU_SW_Requirements_Specification.slreqx:2498
 *
 * Inherited requirements for '<S1>/BSD':
 *  1. VCU_SW_Requirements_Specification.slreqx:2533
 *  2. VCU_SW_Requirements_Specification.slreqx:2534
 *  3. VCU_SW_Requirements_Specification.slreqx:2535
 *  4. VCU_SW_Requirements_Specification.slreqx:2536
 *  5. VCU_SW_Requirements_Specification.slreqx:2537
 *
 * Inherited requirements for '<S1>/BSM':
 *  1. VCU_SW_Requirements_Specification.slreqx:2528
 *  2. VCU_SW_Requirements_Specification.slreqx:2529
 *  3. VCU_SW_Requirements_Specification.slreqx:2530
 *  4. VCU_SW_Requirements_Specification.slreqx:2531
 *  5. VCU_SW_Requirements_Specification.slreqx:2532
 *  6. VCU_SW_Requirements_Specification.slreqx:2526
 *
 * Inherited requirements for '<S1>/BCP_AllowChargeVoltageMax_BCP_AllowChargeVolta_273247b55ebf3761':
 *  1. VCU_SW_Requirements_Specification.slreqx:2516
 *
 * Inherited requirements for '<S1>/BCP_AllowTempMax_BCP_AllowTempMax_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2517
 *
 * Inherited requirements for '<S1>/BCP_BatteryChargeVoltageMax_BCP_BatteryChargeV_0f169ed7ae1303eb':
 *  1. VCU_SW_Requirements_Specification.slreqx:2513
 *
 * Inherited requirements for '<S1>/BCP_BatteryNominalEnergy_BCP_BatteryNominalEne_21599683ffa90537':
 *  1. VCU_SW_Requirements_Specification.slreqx:2515
 *
 * Inherited requirements for '<S1>/BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltag_7545dd85d42f26c0':
 *  1. VCU_SW_Requirements_Specification.slreqx:2519
 *
 * Inherited requirements for '<S1>/BCP_ChargeCurrentMax_BCP_ChargeCurrentMax_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2514
 *
 * Inherited requirements for '<S1>/BCP_SOC_BCP_SOC_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2518
 *
 * Inherited requirements for '<S1>/BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGrou_314ea51b2dc2b37b':
 *  1. VCU_SW_Requirements_Specification.slreqx:2523
 *
 * Inherited requirements for '<S1>/BCS_BatteryVoltMax_BCS_BatteryVoltMax_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2522
 *
 * Inherited requirements for '<S1>/BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeas_27a1fed92424b727':
 *  1. VCU_SW_Requirements_Specification.slreqx:2521
 *
 * Inherited requirements for '<S1>/BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeas_a97f47267e6402ce':
 *  1. VCU_SW_Requirements_Specification.slreqx:2520
 *
 * Inherited requirements for '<S1>/BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRe_62efaf49d010a8c2':
 *  1. VCU_SW_Requirements_Specification.slreqx:2525
 *
 * Inherited requirements for '<S1>/BCS_SOC_BCS_SOC_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2524
 *
 * Inherited requirements for '<S1>/BRM_BatteryChargeTimes_BRM_BatteryChargeTimes_18adcccc17fe958f':
 *  1. VCU_SW_Requirements_Specification.slreqx:2508
 *
 * Inherited requirements for '<S1>/BRM_BatteryProductDay_BRM_BatteryProductDay_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2505
 *
 * Inherited requirements for '<S1>/BRM_BatteryProductMonth_BRM_BatteryProductMont_8c8c2e7d082f59bb':
 *  1. VCU_SW_Requirements_Specification.slreqx:2506
 *
 * Inherited requirements for '<S1>/BRM_BatteryProductYear_BRM_BatteryProductYear_933d35e69f18d81e':
 *  1. VCU_SW_Requirements_Specification.slreqx:2507
 *
 * Inherited requirements for '<S1>/BRM_BatteryProperty_BRM_BatteryProperty_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2509
 *
 * Inherited requirements for '<S1>/BRM_BatterySN_BRM_BatterySN_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2504
 *
 * Inherited requirements for '<S1>/BRM_BatterySystemRatedCapacity_BRM_BatterySyst_609deba779adf6e4':
 *  1. VCU_SW_Requirements_Specification.slreqx:2501
 *
 * Inherited requirements for '<S1>/BRM_BatterySystemRatedVoltage_BRM_BatterySyste_731416f8cb728fc6':
 *  1. VCU_SW_Requirements_Specification.slreqx:2502
 *
 * Inherited requirements for '<S1>/BRM_BatteryType_BRM_BatteryType_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2500
 *
 * Inherited requirements for '<S1>/BRM_Manufacturer_BRM_Manufacturer_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2503
 *
 * Inherited requirements for '<S1>/BRM_ProtocolVersion_BRM_ProtocolVersion_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2499
 *
 * Inherited requirements for '<S1>/BRM_VehicleIdByte17_BRM_VehicleIdByte17_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:118257
 *
 * Inherited requirements for '<S1>/BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:2511
 *
 * Inherited requirements for '<S1>/BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16_write_process_queue':
 *  1. VCU_SW_Requirements_Specification.slreqx:118256

 */
#endif                                 /* RTW_HEADER_CtAp_DCComM_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
