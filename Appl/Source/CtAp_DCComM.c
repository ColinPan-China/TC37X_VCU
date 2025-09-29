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
 *  Filename:           CtAp_DCComM.c
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
 *******************************************************************************/
#include "CtAp_DCComM.h"
#include "rtwtypes.h"
#include "CtAp_DCComM_private.h"
#include <math.h>
#include "Rte_Type.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */

/*if not init use it */
#define CtAp_DCComM_START_SEC_VAR_NOINIT_8
#include "CtAp_DCComM_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
uint16_T ChrgMgmt_ChrgnRemnTim_min;    /* '<S55>/DataTypeConversion' */

/* BCP Rate energy */
uint16_T ComM_BMSBattChrgCnt_Tms;      /* '<S56>/DataTypeConversion' */

/* BRM Battery charge count */
real32_T ComM_BMSBattDispSOC_pct;      /* '<S13>/DataTypeConversion1' */

/* BCP Max Charge Temp */
uint8_T ComM_BMSBattManfDay_Enum;      /* '<S58>/DataTypeConversion' */

/* Battery product day */
uint8_T ComM_BMSBattManfMth_Enum;      /* '<S59>/DataTypeConversion' */

/* BRM Battery product Month
 */
uint16_T ComM_BMSBattManfYr_Enum;      /* '<S60>/DataTypeConversion' */

/* Battery product Year */
real32_T ComM_BMSBattMaxChrgTemp_C;    /* '<S7>/Data Type Conversion2' */

/* Max Charge Temp */
uint16_T ComM_BMSBattPckUDc_V;         /* '<S52>/DataTypeConversion' */

/* Pack voltage */
uint8_T ComM_BMSBattPpty_Enum;         /* '<S61>/DataTypeConversion' */

/* Battery product owner */
uint16_T ComM_BMSBattRateCp_Ah;        /* '<S62>/DataTypeConversion' */

/*  Battery capacity */
uint16_T ComM_BMSBattRateEgy_kWh;      /* '<S51>/DataTypeConversion' */

/* Battery rate energy */
uint16_T ComM_BMSBattRateUDc_V;        /* '<S63>/DataTypeConversion' */

/*  Battery Voltage */
uint8_T ComM_BMSBattTyp_Enum;          /* '<S64>/DataTypeConversion' */

/* BatTERY Type */
uint32_T ComM_BMSBattmanfr_Enum;       /* '<S65>/DataTypeConversion' */

/* Battery manufacturer */
real32_T ComM_BattMaxCellUDc_V;        /* '<S21>/DataTypeConversion2' */

/* BCP Max cell Charge voltage */
uint8_T ComM_MaxCellTempNr_Enum;       /* '<S48>/DataTypeConversion16' */

/* BRM Battery product dayBattery max temp moudle number */
real32_T ComM_MaxCellTemp_C;           /* '<S48>/ATOM_SignalRead' */

/*  Max Battery Temp */
uint16_T ComM_MaxCellUDcModlNr_Enum;   /* '<S53>/DataTypeConversion' */

/* BCP battery voltage moudle number */
uint8_T ComM_MinCellTempNr_Enum;       /* '<S48>/DataTypeConversion19' */

/* Battery min temp moudle number */
real32_T ComM_MinCellTemp_C;           /* '<S48>/ATOM_SignalRead1' */

/* Min battery temp */
uint16_T ComM_PODDCFCUDc_V;            /* '<S54>/DataTypeConversion' */

/* BCP battery voltage */
uint16_T DCChrMgmt_BCPBattRateEgy_kWh; /* '<S51>/DataTypeConversion1' */

/* BCP Rate energy */
real32_T DCChrMgmt_BCPBattSOC_pct;     /* '<S13>/DataTypeConversion2' */

/* BCP Max Charge Temp */
uint16_T DCChrMgmt_BCPBattUDc_V;       /* '<S52>/DataTypeConversion1' */

/* BCP battery voltage */
real32_T DCChrMgmt_BCPMaxCellChrgUDc_V;/* '<S69>/Define1' */

/* BCP Max Charge voltage */
real32_T DCChrMgmt_BCPMaxChrgIDc_A;    /* '<S68>/Define' */

/* BCP Max Charge voltage */
real32_T DCChrMgmt_BCPMaxChrgTemp_C;   /* '<S7>/Data Type Conversion3' */

/* BCP Max Charge Temp */
real32_T DCChrMgmt_BCPMaxChrgUDc_V;    /* '<S5>/Define' */

/* BCP Max Charge voltage */
real32_T DCChrMgmt_BCSBattSOC_pct;     /* '<S22>/ATOM_SignalRead' */

/* BCP Max Charge Temp */
uint16_T DCChrMgmt_BCSMaxCellUDcGroup_Enum;/* '<S53>/DataTypeConversion1' */

/* BCP battery voltage moudle number */
real32_T DCChrMgmt_BCSMaxCellUDc_V;    /* '<S21>/DataTypeConversion3' */

/* BCP Max cell Charge voltage */
real32_T DCChrMgmt_BCSMeasdChrgnIDc_A; /* '<S17>/DataTypeConversion1' */

/* BCP Max Charge voltage */
uint16_T DCChrMgmt_BCSMeasdChrgnUDc_V; /* '<S54>/DataTypeConversion1' */

/* BCP battery voltage */
uint16_T DCChrMgmt_BCSRmgChrgnTim_min; /* '<S55>/DataTypeConversion1' */

/* BCP Rate energy */
real32_T DCChrMgmt_BHMMaxChrgUDc_V;    /* '<S26>/ATOM_SignalSend' */

/* BHM Max Charge voltage */
uint16_T DCChrMgmt_BRMBattChrgCnt_Tms; /* '<S56>/DataTypeConversion1' */

/* BRM Battery charge count */
uint16_T DCChrMgmt_BRMBattCod_Enum;    /* '<S57>/Define' */

/* BRM Battery Code */
uint8_T DCChrMgmt_BRMBattManfDay_Enum; /* '<S58>/DataTypeConversion1' */

/* BRM Battery product day */
uint8_T DCChrMgmt_BRMBattManfMth_Enum; /* '<S59>/DataTypeConversion1' */

/* BRM Battery product Month */
uint16_T DCChrMgmt_BRMBattManfYr_Enum; /* '<S60>/DataTypeConversion1' */

/* BRM Battery product Year */
uint8_T DCChrMgmt_BRMBattPpty_Enum;    /* '<S61>/DataTypeConversion1' */

/* BRM Battery product owner */
uint16_T DCChrMgmt_BRMBattRateCp_Ah;   /* '<S62>/DataTypeConversion1' */

/* BRM Battery capacity */
uint16_T DCChrMgmt_BRMBattRateUDc_V;   /* '<S63>/DataTypeConversion1' */

/* BRM Battery Voltage */
uint8_T DCChrMgmt_BRMBattResv_Enum;    /* '<S67>/DataTypeConversion' */

/* VIN byte17 */
uint8_T DCChrMgmt_BRMBattTyp_Enum;     /* '<S64>/DataTypeConversion1' */

/* BatTERY Type */
uint32_T DCChrMgmt_BRMBattmanfr_Enum;  /* '<S65>/DataTypeConversion1' */

/* BRM manufacturer */
uint32_T DCChrMgmt_BRMComVers_Enum;    /* '<S66>/Define' */

/* BRM Charge communication version */
uint8_T DCChrMgmt_BRMVehCod17;         /* '<S67>/DataTypeConversion1' */

/* VIN byte17 */
uint8_T DCChrMgmt_BRMVehCod1_8[8];     /* '<S40>/DataTypeConversion' */

/* VIN byte1 to byte8 */
uint8_T DCChrMgmt_BRMVehCod9_16[8];    /* '<S42>/DataTypeConversion' */

/* VIN byte9 to byte16 */
real32_T DCChrMgmt_BSDBattMaxCellUDc_V;/* '<S46>/ATOM_SignalRead' */

/* BSD Max cell voltage */
real32_T DCChrMgmt_BSDBattMaxTemp_C;   /* '<S46>/ATOM_SignalRead2' */

/* BSD Max cell temp */
real32_T DCChrMgmt_BSDBattMinCellUDc_V;/* '<S46>/ATOM_SignalRead1' */

/* BSD Min cell voltage */
real32_T DCChrMgmt_BSDBattMinTemp_C;   /* '<S46>/ATOM_SignalRead3' */

/* BSD Min cell temp */
real32_T DCChrMgmt_BSDFinshdSOC_pct;   /* '<S46>/ATOM_SignalRead4' */

/* BSD Finish SOC */
uint8_T DCChrMgmt_BSMChrgAllow_Enum;   /* '<S48>/DataTypeConversion12' */

/* charge allowable */
uint8_T DCChrMgmt_BSMMaxCellTempNr_Enum;/* '<S48>/DataTypeConversion17' */

/* Battery max temp moudle number */
real32_T DCChrMgmt_BSMMaxCellTemp_C;   /* '<S48>/DataTypeConversion15' */

/* BSM Max Charge Temp */
uint8_T DCChrMgmt_BSMMinCellTempNr_Enum;/* '<S48>/DataTypeConversion20' */

/* Battery min temp moudle number */
real32_T DCChrMgmt_BSMMinCellTemp_C;   /* '<S48>/DataTypeConversion18' */

/* Min battery temp */
#define CtAp_DCComM_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCComM_MemMap.h"        /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_DCComM_START_SEC_VAR_NOINIT_8
#include "CtAp_DCComM_MemMap.h"

ARID_DEF_CtAp_DCComM_T CtAp_DCComM_ARID_DEF;

#define CtAp_DCComM_STOP_SEC_VAR_NOINIT_8
#include "CtAp_DCComM_MemMap.h"

/*  Declarations  */

/* Forward declaration for local functions */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_AllowChargeVolt(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_AllowTempMax_BC(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_BatteryChargeVo(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_BatteryNominalE(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_BatteryTotalVol(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_ChargeCurrentMa(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_SOC_BCP_SOC_wri(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_BatteryVoltMaxG(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_BatteryVoltMax_(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_ChargeCurrentMe(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_ChargeVoltageMe(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_EstimatedTimeRe(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_SOC_BCS_SOC_wri(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryChargeTi(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryProductD(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryProductM(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryProductY(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryProperty(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatterySN_BRM_B(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatterySystemRa(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatterySys_kulk(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryType_BRM(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_Manufacturer_BR(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_ProtocolVersion(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_VehicleIdByte17(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_VehicleIdByte1_(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_VehicleIdByte9_(void);

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/*
 * Output and update for atomic system:
 *    '<S3>/ATOM_SignalSend'
 *    '<S5>/ATOM_SignalSend'
 *    '<S7>/ATOM_SignalSend'
 *    '<S13>/ATOM_SignalSend'
 *    '<S17>/ATOM_SignalSend'
 *    '<S21>/ATOM_SignalSend'
 *    '<S26>/ATOM_SignalSend'
 *    '<S46>/ATOM_SignalSend'
 *    '<S46>/ATOM_SignalSend1'
 *    '<S46>/ATOM_SignalSend2'
 *    ...
 */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

real32_T CtAp_DCComM_ATOM_SignalSend(real32_T rtu_InputSignal, real32_T
  rtu_IresolutionRation, real32_T rtu_offset)
{
  /* Product: '<S74>/Divide' incorporates:
   *  Sum: '<S74>/Plus'
   */
  return (rtu_InputSignal - rtu_offset) / rtu_IresolutionRation;
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S4>/If'
 *    '<S25>/If'
 *    '<S27>/If'
 *    '<S45>/If'
 *    '<S47>/If'
 *    '<S49>/If'
 *    '<S70>/If'
 *    '<S71>/If'
 *    '<S72>/If'
 */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

uint16_T CtAp_DCComM_If(boolean_T rtu_if, uint16_T rtu_then, uint16_T rtu_else)
{
  uint16_T rty_Out1_0;

  /* Switch: '<S77>/Switch' */
  if (rtu_if) {
    rty_Out1_0 = rtu_then;
  } else {
    rty_Out1_0 = rtu_else;
  }

  /* End of Switch: '<S77>/Switch' */
  return rty_Out1_0;
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S7>/ATOM_SignalRead'
 *    '<S13>/ATOM_SignalRead'
 *    '<S21>/ATOM_SignalRead'
 *    '<S22>/ATOM_SignalRead'
 *    '<S46>/ATOM_SignalRead'
 *    '<S46>/ATOM_SignalRead1'
 *    '<S46>/ATOM_SignalRead2'
 *    '<S46>/ATOM_SignalRead3'
 *    '<S46>/ATOM_SignalRead4'
 *    '<S48>/ATOM_SignalRead'
 *    ...
 */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

real32_T CtAp_DCComM_ATOM_SignalRead(real32_T rtu_InputSignal, real32_T
  rtu_IresolutionRation, real32_T rtu_offset)
{
  real32_T tmp;

  /* Switch: '<S79>/Switch' incorporates:
   *  Constant: '<S79>/Constant'
   *  Constant: '<S79>/Constant1'
   *  RelationalOperator: '<S79>/Equal'
   */
  if (rtu_IresolutionRation == 0.0F) {
    tmp = (real32_T)2.2204460492503131E-16;
  } else {
    tmp = rtu_IresolutionRation;
  }

  /* Product: '<S79>/Product1' incorporates:
   *  Product: '<S79>/Divide'
   *  Sum: '<S79>/Plus'
   *  Switch: '<S79>/Switch'
   */
  return (rtu_InputSignal + (rtu_offset / tmp)) * rtu_IresolutionRation;
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/*
 * System initialize for atomic system:
 *    '<S73>/ATOM_OffDelay'
 *    '<S73>/ATOM_OffDelay1'
 *    '<S73>/ATOM_OffDelay2'
 *    '<S73>/ATOM_OffDelay3'
 *    '<S73>/ATOM_OffDelay4'
 *    '<S73>/ATOM_OffDelay5'
 *    '<S73>/ATOM_OffDelay6'
 *    '<S73>/ATOM_OffDelay7'
 */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

void CtAp_DCComM_ATOM_OffDelay_Init(uint16_T rtp_InitialValue,
  ARID_DEF_ATOM_OffDelay_CtAp_D_T *CtAp_DCComM__ARID_DEF_arg)
{
  /* InitializeConditions for Sum: '<S127>/Sum1' incorporates:
   *  UnitDelay: '<S127>/UnitDelay'
   */
  CtAp_DCComM__ARID_DEF_arg->UnitDelay_DSTATE = rtp_InitialValue;
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/*
 * Output and update for atomic system:
 *    '<S73>/ATOM_OffDelay'
 *    '<S73>/ATOM_OffDelay1'
 *    '<S73>/ATOM_OffDelay2'
 *    '<S73>/ATOM_OffDelay3'
 *    '<S73>/ATOM_OffDelay4'
 *    '<S73>/ATOM_OffDelay5'
 *    '<S73>/ATOM_OffDelay6'
 *    '<S73>/ATOM_OffDelay7'
 */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

boolean_T CtAp_DCComM_ATOM_OffDelay(boolean_T rtu_x, uint16_T rtu_tm_dly,
  uint16_T rtu_dt, uint16_T rtu_ClearValue, ARID_DEF_ATOM_OffDelay_CtAp_D_T
  *CtAp_DCComM__ARID_DEF_arg)
{
  /* Switch: '<S127>/Switch1' incorporates:
   *  Logic: '<S127>/NOT'
   */
  if (!rtu_x) {
    uint32_T tmp;

    /* Sum: '<S127>/Sum' incorporates:
     *  UnitDelay: '<S127>/UnitDelay'
     */
    tmp = (uint32_T)rtu_dt + (uint32_T)
      CtAp_DCComM__ARID_DEF_arg->UnitDelay_DSTATE;
    if (tmp > 65535U) {
      tmp = 65535U;
    }

    /* Sum: '<S127>/Sum1' */
    CtAp_DCComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
      rtu_tm_dly + (uint32_T)rtu_dt);

    /* MinMax: '<S127>/MinMax' incorporates:
     *  Sum: '<S127>/Sum'
     */
    if (CtAp_DCComM__ARID_DEF_arg->UnitDelay_DSTATE > (uint16_T)tmp) {
      /* Sum: '<S127>/Sum1' */
      CtAp_DCComM__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)tmp;
    }

    /* End of MinMax: '<S127>/MinMax' */
  } else {
    /* Sum: '<S127>/Sum1' incorporates:
     *  UnitDelay: '<S127>/UnitDelay'
     */
    CtAp_DCComM__ARID_DEF_arg->UnitDelay_DSTATE = rtu_ClearValue;
  }

  /* End of Switch: '<S127>/Switch1' */

  /* RelationalOperator: '<S127>/RelationalOperator1' incorporates:
   *  UnitDelay: '<S127>/UnitDelay'
   */
  return CtAp_DCComM__ARID_DEF_arg->UnitDelay_DSTATE <= rtu_tm_dly;
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCP_AllowChargeVoltageMax_BCP_AllowChargeVolta_273247b55ebf3761' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_AllowChargeVolt(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCP_AllowChargeVoltageMax_BCP_AllowChargeVoltageMax
    (CtAp_DCComM_ARID_DEF.BCP_AllowChargeVoltageMax__lyky);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCP_AllowTempMax_BCP_AllowTempMax_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_AllowTempMax_BC(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCP_AllowTempMax_BCP_AllowTempMax
    (CtAp_DCComM_ARID_DEF.BCP_AllowTempMax_BCP_Allow_leuq);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCP_BatteryChargeVoltageMax_BCP_BatteryChargeV_0f169ed7ae1303eb' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_BatteryChargeVo(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCP_BatteryChargeVoltageMax_BCP_BatteryChargeVoltageMax
    (CtAp_DCComM_ARID_DEF.BCP_BatteryChargeVoltageMa_pppp);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCP_BatteryNominalEnergy_BCP_BatteryNominalEne_21599683ffa90537' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_BatteryNominalE(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCP_BatteryNominalEnergy_BCP_BatteryNominalEnergy
    (CtAp_DCComM_ARID_DEF.BCP_BatteryNominalEnergy_B_b4g0);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltag_7545dd85d42f26c0' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_BatteryTotalVol(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltage
    (CtAp_DCComM_ARID_DEF.BCP_BatteryTotalVoltage_BC_kxkw);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCP_ChargeCurrentMax_BCP_ChargeCurrentMax_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_ChargeCurrentMa(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCP_ChargeCurrentMax_BCP_ChargeCurrentMax
    (CtAp_DCComM_ARID_DEF.BCP_ChargeCurrentMax_BCP_C_lit3);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCP_SOC_BCP_SOC_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCP_SOC_BCP_SOC_wri(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCP_SOC_BCP_SOC
    (CtAp_DCComM_ARID_DEF.BCP_SOC_BCP_SOC_write_msgData);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGrou_314ea51b2dc2b37b' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_BatteryVoltMaxG(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGroup
    (CtAp_DCComM_ARID_DEF.BCS_BatteryVoltMaxGroup_BC_auve);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCS_BatteryVoltMax_BCS_BatteryVoltMax_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_BatteryVoltMax_(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCS_BatteryVoltMax_BCS_BatteryVoltMax
    (CtAp_DCComM_ARID_DEF.BCS_BatteryVoltMax_BCS_Bat_nps3);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeas_27a1fed92424b727' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_ChargeCurrentMe(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeasure
    (CtAp_DCComM_ARID_DEF.BCS_ChargeCurrentMeasure_B_m3ml);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeas_a97f47267e6402ce' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_ChargeVoltageMe(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeasure
    (CtAp_DCComM_ARID_DEF.BCS_ChargeVoltageMeasure_B_fwx5);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRe_62efaf49d010a8c2' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_EstimatedTimeRe(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRemaining
    (CtAp_DCComM_ARID_DEF.BCS_EstimatedTimeRemaining_kcoa);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BCS_SOC_BCS_SOC_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BCS_SOC_BCS_SOC_wri(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BCS_SOC_BCS_SOC
    (CtAp_DCComM_ARID_DEF.BCS_SOC_BCS_SOC_write_msgData);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_BatteryChargeTimes_BRM_BatteryChargeTimes_18adcccc17fe958f' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryChargeTi(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_BatteryChargeTimes_BRM_BatteryChargeTimes
    (CtAp_DCComM_ARID_DEF.BRM_BatteryChargeTimes_BRM_meig);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_BatteryProductDay_BRM_BatteryProductDay_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryProductD(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_BatteryProductDay_BRM_BatteryProductDay
    (CtAp_DCComM_ARID_DEF.BRM_BatteryProductDay_BRM__k3gc);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_BatteryProductMonth_BRM_BatteryProductMont_8c8c2e7d082f59bb' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryProductM(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_BatteryProductMonth_BRM_BatteryProductMonth
    (CtAp_DCComM_ARID_DEF.BRM_BatteryProductMonth_BR_kqjz);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_BatteryProductYear_BRM_BatteryProductYear_933d35e69f18d81e' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryProductY(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_BatteryProductYear_BRM_BatteryProductYear
    (CtAp_DCComM_ARID_DEF.BRM_BatteryProductYear_BRM_nrlt);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_BatteryProperty_BRM_BatteryProperty_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryProperty(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_BatteryProperty_BRM_BatteryProperty
    (CtAp_DCComM_ARID_DEF.BRM_BatteryProperty_BRM_Ba_lu3a);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_BatterySN_BRM_BatterySN_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatterySN_BRM_B(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_BatterySN_BRM_BatterySN
    (CtAp_DCComM_ARID_DEF.BRM_BatterySN_BRM_BatteryS_p5h3);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_BatterySystemRatedCapacity_BRM_BatterySyst_609deba779adf6e4' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatterySystemRa(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_BatterySystemRatedCapacity_BRM_BatterySystemRatedCapacity
    (CtAp_DCComM_ARID_DEF.BRM_BatterySystemRatedCapa_iejy);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_BatterySystemRatedVoltage_BRM_BatterySyste_731416f8cb728fc6' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatterySys_kulk(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_BatterySystemRatedVoltage_BRM_BatterySystemRatedVoltage
    (CtAp_DCComM_ARID_DEF.BRM_BatterySystemRatedVolt_l1sw);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_BatteryType_BRM_BatteryType_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_BatteryType_BRM(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_BatteryType_BRM_BatteryType
    (CtAp_DCComM_ARID_DEF.BRM_BatteryType_BRM_Batter_jvbl);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_Manufacturer_BRM_Manufacturer_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_Manufacturer_BR(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_Manufacturer_BRM_Manufacturer
    (CtAp_DCComM_ARID_DEF.BRM_Manufacturer_BRM_Manuf_crgd);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_ProtocolVersion_BRM_ProtocolVersion_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_ProtocolVersion(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_ProtocolVersion_BRM_ProtocolVersion
    (CtAp_DCComM_ARID_DEF.BRM_ProtocolVersion_BRM_Pr_cesj);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_VehicleIdByte17_BRM_VehicleIdByte17_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_VehicleIdByte17(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_VehicleIdByte17_BRM_VehicleIdByte17
    (CtAp_DCComM_ARID_DEF.BRM_VehicleIdByte17_BRM_Ve_ajze);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_VehicleIdByte1_(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8
    (CtAp_DCComM_ARID_DEF.BRM_VehicleIdByte1_8_BRM_V_ittx);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Function for Chart: '<S1>/BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16_write_process_queue' */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

static void sf_msg_send_BRM_VehicleIdByte9_(void)
{
  /* Send data using Queued-Send interface. */
  (void) Rte_Send_BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16
    (CtAp_DCComM_ARID_DEF.BRM_VehicleIdByte9_16_BRM__kqs1);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_DCComM_START_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

void R_DCComM_Cyclic_10ms(void)
{
  /* local block i/o variables */
  real32_T rtb_DataTypeConversion7;
  real32_T rtb_DataTypeConversion9;
  real32_T rtb_DataTypeConversion8;
  real32_T rtb_DataTypeConversion10;
  real32_T rtb_DataTypeConversion2_hbdi;
  real32_T rtb_DataTypeConversion17;
  real32_T rtb_Product1;
  real32_T rtb_Product1_clis;
  real32_T rtb_Product1_c4ll;
  real32_T rtb_Product1_myht;
  real32_T rtb_Product1_mzhh;
  real32_T rtb_Divide;
  real32_T rtb_DataTypeConversion13;
  real32_T rtb_DataTypeConversion14;
  real32_T rtb_Divide_mkct;
  real32_T rtb_Divide_oypu;
  real32_T rtb_Product1_bznp;
  real32_T rtb_Product1_irvh;
  real32_T rtb_DataTypeConversion5;
  real32_T rtb_DataTypeConversion8_ec5u;
  real32_T rtb_DataTypeConversion9_p3fr;
  real32_T rtb_DataTypeConversion7_ega3;
  real32_T rtb_DataTypeConversion6;
  real32_T rtb_Divide_cgfz;
  real32_T rtb_Divide_c0re;
  real32_T rtb_Divide_gceg;
  real32_T rtb_Divide_cwb0;
  real32_T rtb_Divide_c04t;
  real32_T rtb_Product1_nk5k;
  real32_T rtb_Product1_lwiu;
  real32_T rtb_Product1_eiub;
  real32_T rtb_Product1_jegl;
  real32_T rtb_Product1_fcip;
  real32_T rtb_Divide_n0zj;
  real32_T rtb_DataTypeConversion1_nmxg;
  real32_T rtb_Product1_n0tp;
  real32_T rtb_DataTypeConversion1_ho51;
  real32_T rtb_Divide_ibpl;
  real32_T rtb_Gain;
  real32_T rtb_DataTypeConversion;
  real32_T rtb_DataTypeConversion1_ixfa;
  real32_T rtb_Divide_cd2q;
  real32_T rtb_Divide_csap;
  real32_T rtb_Divide_deic;
  real32_T rtb_Product1_nwhj;
  uint16_T rtb_Add;
  uint16_T rtb_Add_e3al;
  uint16_T rtb_Add_dc3a;
  uint16_T rtb_Add_ilry;
  uint16_T rtb_Add_gut5;
  uint16_T rtb_Add_hrad;
  uint16_T rtb_Add_ayjl;
  uint16_T rtb_Add_hawb;
  uint16_T rtb_Add_brlj;
  uint16_T rtb_MinMax;
  boolean_T rtb_LogicalOperator;
  boolean_T rtb_LogicalOperator_lb5v;
  boolean_T rtb_LogicalOperator_bckv;
  boolean_T rtb_LogicalOperator_o3mo;
  boolean_T rtb_LogicalOperator_dt4m;
  boolean_T rtb_LogicalOperator_cyrv;
  boolean_T rtb_LogicalOperator_leep;
  boolean_T rtb_LogicalOperator_ikz3;
  boolean_T rtb_LogicalOperator_odtu;
  boolean_T rtb_RelationalOperator1_l0fr;
  boolean_T rtb_RelationalOperator1_ac55;
  boolean_T rtb_RelationalOperator1_mhtt;
  boolean_T rtb_RelationalOperator1_du25;
  boolean_T rtb_RelationalOperator1_bb55;
  SG_BMS_BatInfor_01_SigGroup rtb_TmpSignalConversionAtS_cuhm;
  SG_BMS_BatInfor_02_SigGroup tmpRead_1g;
  SG_BMS_CellTemp_SigGroup rtb_TmpSignalConversionAtS_a3t4;
  SG_BMS_CellVoltage_SigGroup rtb_TmpSignalConversionAtS_fui4;
  SG_BMS_Charge_01_SigGroup tmpRead_1h;
  SG_BMS_Charge_03_SigGroup tmpRead_1i;
  SG_BMS_PRO_SigGroup rtb_TmpSignalConversionAtS_gy00;
  SG_BMS_TCU_SigGroup tmpRead_1j;
  SG_BMS_VersionInfor_SigGroup tmpRead_1k;
  SG_BMS_status_03_SigGroup rtb_TmpSignalConversionAtSG_BMS;
  SG_POD_Status_01_SigGroup tmpRead_1l;
  dt_DCChrMgmt_BEMRxCCSTmt tmpRead_b;
  dt_DCChrMgmt_BEMRxCMLTmt tmpRead_c;
  dt_DCChrMgmt_BEMRxCRMPrepdTmt tmpRead_d;
  dt_DCChrMgmt_BEMRxCRMTmt tmpRead_e;
  dt_DCChrMgmt_BEMRxCROPrepdTmt tmpRead_f;
  dt_DCChrMgmt_BEMRxCROTmt tmpRead_g;
  dt_DCChrMgmt_BEMRxCSDTmt tmpRead_h;
  dt_DCChrMgmt_BEMRxCSTTmt tmpRead_i;
  CHM_ProtocolVersion tmpRead_2;
  CSD_ChargerNo tmpRead_9;
  int32_T i;
  real32_T tmpRead_16;
  real32_T tmpRead_18;
  CCS_OutputCurrent tmpRead;
  CCS_OutputVoltage tmpRead_0;
  uint16_T tmpRead_3;
  uint16_T tmpRead_4;
  uint16_T tmpRead_5;
  uint16_T tmpRead_6;
  uint16_T u1;
  CEM_BatteryChargeRequireTimeout tmpRead_1;
  CRM_RecognitionResult tmpRead_7;
  CRO_ChargerReady tmpRead_8;
  CST_AbortAchiveCondition tmpRead_a;
  uint8_T tmpRead_10;
  uint8_T tmpRead_11;
  uint8_T tmpRead_12;
  uint8_T tmpRead_13;
  uint8_T tmpRead_14;
  uint8_T tmpRead_15;
  uint8_T tmpRead_17;
  uint8_T tmpRead_j;
  uint8_T tmpRead_k;
  uint8_T tmpRead_l;
  uint8_T tmpRead_n;
  uint8_T tmpRead_o;
  uint8_T tmpRead_p;
  uint8_T tmpRead_q;
  uint8_T tmpRead_r;
  uint8_T tmpRead_s;
  uint8_T tmpRead_t;
  uint8_T tmpRead_u;
  uint8_T tmpRead_v;
  uint8_T tmpRead_w;
  uint8_T tmpRead_x;
  uint8_T tmpRead_y;
  uint8_T tmpRead_z;
  boolean_T Compare;
  boolean_T Compare_dvzz;
  boolean_T Compare_oexd;
  boolean_T tmpIsUpdated;
  boolean_T tmpIsUpdated_0;
  boolean_T tmpIsUpdated_1;
  boolean_T tmpIsUpdated_2;
  boolean_T tmpIsUpdated_3;
  boolean_T tmpIsUpdated_4;
  boolean_T tmpIsUpdated_5;
  boolean_T tmpIsUpdated_6;
  boolean_T tmpRead_19;
  boolean_T tmpRead_1a;
  boolean_T tmpRead_1b;
  boolean_T tmpRead_1c;
  boolean_T tmpRead_1d;
  boolean_T tmpRead_1e;
  boolean_T tmpRead_1f;
  boolean_T tmpRead_m;
  boolean_T tmpWrite;
  boolean_T tmpWrite_0;
  boolean_T tmpWrite_1;

  /* Inport: '<Root>/CST_AbortAchiveCondition_CST_AbortAchiveCondition_IsUpdated' */
  tmpIsUpdated_6 =
    Rte_IsUpdated_CST_AbortAchiveCondition_CST_AbortAchiveCondition();

  /* Inport: '<Root>/CSD_ChargerNo_CSD_ChargerNo_IsUpdated' */
  tmpIsUpdated_5 = Rte_IsUpdated_CSD_ChargerNo_CSD_ChargerNo();

  /* Inport: '<Root>/CRO_ChargerReady_CRO_ChargerReady_IsUpdated' */
  tmpIsUpdated_4 = Rte_IsUpdated_CRO_ChargerReady_CRO_ChargerReady();

  /* Inport: '<Root>/CRM_RecognitionResult_CRM_RecognitionResult_IsUpdated' */
  tmpIsUpdated_3 = Rte_IsUpdated_CRM_RecognitionResult_CRM_RecognitionResult();

  /* Inport: '<Root>/CML_OutpuVoltageMax_CML_OutpuVoltageMax_IsUpdated' */
  tmpIsUpdated_2 = Rte_IsUpdated_CML_OutpuVoltageMax_CML_OutpuVoltageMax();

  /* Inport: '<Root>/CHM_ProtocolVersion_CHM_ProtocolVersion_IsUpdated' */
  tmpIsUpdated_1 = Rte_IsUpdated_CHM_ProtocolVersion_CHM_ProtocolVersion();

  /* Inport: '<Root>/CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout_IsUpdated' */
  tmpIsUpdated_0 =
    Rte_IsUpdated_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout
    ();

  /* Inport: '<Root>/CCS_OutputVoltage_CCS_OutputVoltage_IsUpdated' */
  tmpIsUpdated = Rte_IsUpdated_CCS_OutputVoltage_CCS_OutputVoltage();

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCLSts_Flg(&Compare);

  /* SignalConversion generated from: '<Root>/SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup' incorporates:
   *  Inport: '<Root>/SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup'
   */
  (void)Rte_Read_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup
    (&rtb_TmpSignalConversionAtS_cuhm);

  /* SignalConversion generated from: '<Root>/SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup' incorporates:
   *  Inport: '<Root>/SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup'
   */
  (void)Rte_Read_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup
    (&rtb_TmpSignalConversionAtS_a3t4);

  /* SignalConversion generated from: '<Root>/SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup' incorporates:
   *  Inport: '<Root>/SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup'
   */
  (void)Rte_Read_SG_BMS_CellVoltage_SigGroup_SG_BMS_CellVoltage_SigGroup
    (&rtb_TmpSignalConversionAtS_fui4);

  /* SignalConversion generated from: '<Root>/SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup' incorporates:
   *  Inport: '<Root>/SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup'
   */
  (void)Rte_Read_SG_BMS_PRO_SigGroup_SG_BMS_PRO_SigGroup
    (&rtb_TmpSignalConversionAtS_gy00);

  /* SignalConversion generated from: '<Root>/SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup' incorporates:
   *  Inport: '<Root>/SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup'
   */
  (void)Rte_Read_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup
    (&rtb_TmpSignalConversionAtSG_BMS);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Logic: '<S4>/LogicalOperator' incorporates:
   *  Constant: '<S75>/Constant'
   *  Delay: '<S4>/Delay1'
   *  RelationalOperator: '<S75>/Compare'
   */
  rtb_LogicalOperator = ((CtAp_DCComM_ARID_DEF.Delay1_DSTATE < ((uint16_T)
    DCComM_TxCnt50ms)) && Compare);

  /* Sum: '<S4>/Add' incorporates:
   *  Constant: '<S4>/Define'
   *  Delay: '<S4>/Delay'
   */
  rtb_Add = (uint16_T)((uint32_T)((uint16_T)DCComM_dt) + (uint32_T)
                       CtAp_DCComM_ARID_DEF.Delay_DSTATE);

  /* Outputs for Atomic SubSystem: '<S4>/If' */
  /* Delay: '<S4>/Delay1' incorporates:
   *  Constant: '<S4>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Delay1_DSTATE = CtAp_DCComM_If(rtb_LogicalOperator,
    rtb_Add, ((uint16_T)DCComM_U16Zero));

  /* End of Outputs for SubSystem: '<S4>/If' */

  /* Outputs for Enabled SubSystem: '<S1>/BCL' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S3>/Define1'
   *  Constant: '<S3>/Define2'
   *  Constant: '<S76>/Constant'
   *  Delay: '<S4>/Delay1'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum'
   */
  if (CtAp_DCComM_ARID_DEF.Delay1_DSTATE == ((uint16_T)DCComM_dt)) {
    (void)Rte_Read_RTE_R_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V
      (&tmpRead_18);
    (void)Rte_Read_RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum
      (&tmpRead_17);
    (void)Rte_Read_RTE_R_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A
      (&tmpRead_16);

    /* Outputs for Atomic SubSystem: '<S3>/ATOM_SignalSend' */
    rtb_Divide_deic = CtAp_DCComM_ATOM_SignalSend(tmpRead_18,
      DCComM_Resolution_01, DCComM_Offset_0);

    /* End of Outputs for SubSystem: '<S3>/ATOM_SignalSend' */

    /* Outport: '<Root>/BCL_VolltageRequire_BCL_VolltageRequire' incorporates:
     *  Constant: '<S3>/Define1'
     *  Constant: '<S3>/Define2'
     *  DataTypeConversion: '<S3>/DataTypeConversion2'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_DCChrgnUDcReq_V_tec_DCChrMgmt_DcChrgnUDcReq_V'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgnIDcReq_A_tec_DCChrMgmt_DcChrgnIDcReq_A'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum'
     */
    (void)Rte_Write_BCL_VolltageRequire_BCL_VolltageRequire((BCL_VolltageRequire)
      ((uint16_T)((uint16_T)rtb_Divide_deic & (uint16_T)8191)));

    /* Outport: '<Root>/BCL_CurrentRequire_BCL_CurrentRequire' incorporates:
     *  DataTypeConversion: '<S3>/DataTypeConversion1'
     */
    (void)Rte_Write_BCL_CurrentRequire_BCL_CurrentRequire((BCL_CurrentRequire)
      tmpRead_16);

    /* Outport: '<Root>/BCL_ChargeMode_BCL_ChargeMode' incorporates:
     *  DataTypeConversion: '<S3>/DataTypeConversion'
     */
    (void)Rte_Write_BCL_ChargeMode_BCL_ChargeMode((BCL_ChargeMode)tmpRead_17);
  }

  /* End of RelationalOperator: '<S76>/Compare' */
  /* End of Outputs for SubSystem: '<S1>/BCL' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCPSts_Flg
    (&tmpRead_19);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/BCP_AllowChargeVoltageMax' */
  /* Constant: '<S5>/Define' */
  DCChrMgmt_BCPMaxChrgUDc_V = DCComM_MaxDcChrgVol;

  /* Outputs for Atomic SubSystem: '<S5>/ATOM_SignalSend' */
  /* Constant: '<S5>/Define1' incorporates:
   *  Constant: '<S5>/Define2'
   */
  rtb_Divide_csap = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BCPMaxChrgUDc_V,
    DCComM_Resolution_01, DCComM_Offset_0);

  /* End of Outputs for SubSystem: '<S5>/ATOM_SignalSend' */
  /* End of Outputs for SubSystem: '<S1>/BCP_AllowChargeVoltageMax' */

  /* Logic: '<S70>/LogicalOperator' incorporates:
   *  Constant: '<S118>/Constant'
   *  Delay: '<S70>/Delay1'
   *  RelationalOperator: '<S118>/Compare'
   */
  rtb_LogicalOperator_lb5v = ((CtAp_DCComM_ARID_DEF.Delay1_DSTATE_dphr <
    ((uint16_T)DCComM_Cyc500ms)) && tmpRead_19);

  /* Sum: '<S70>/Add' incorporates:
   *  Constant: '<S70>/Define'
   *  Delay: '<S70>/Delay'
   */
  rtb_Add_e3al = (uint16_T)((uint32_T)((uint16_T)DCComM_dt) + (uint32_T)
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_cx5r);

  /* Outputs for Atomic SubSystem: '<S70>/If' */
  /* Delay: '<S70>/Delay' incorporates:
   *  Constant: '<S70>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Delay_DSTATE_cx5r = CtAp_DCComM_If
    (rtb_LogicalOperator_lb5v, rtb_Add_e3al, ((uint16_T)DCComM_U16Zero));

  /* End of Outputs for SubSystem: '<S70>/If' */

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   *  Delay: '<S70>/Delay'
   */
  Compare = (CtAp_DCComM_ARID_DEF.Delay_DSTATE_cx5r == ((uint16_T)DCComM_dt));

  /* Chart: '<S1>/BCP_AllowChargeVoltageMax_BCP_AllowChargeVolta_273247b55ebf3761' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion'
   *
   * Block requirements for '<S1>/BCP_AllowChargeVoltageMax_BCP_AllowChargeVolta_273247b55ebf3761':
   *  1. VCU_SW_Requirements_Specification.slreqx:2516
   */
  if (Compare) {
    /* Outputs for Atomic SubSystem: '<S1>/BCP_AllowChargeVoltageMax' */
    CtAp_DCComM_ARID_DEF.BCP_AllowChargeVoltageMax__lyky = (uint16_T)
      rtb_Divide_csap;

    /* End of Outputs for SubSystem: '<S1>/BCP_AllowChargeVoltageMax' */
    if (CtAp_DCComM_ARID_DEF.BCP_AllowChargeVoltageMax__lyky > 8191ULL) {
      CtAp_DCComM_ARID_DEF.BCP_AllowChargeVoltageMax__lyky = 8191U;
    }

    sf_msg_send_BCP_AllowChargeVolt();
  }

  /* End of Chart: '<S1>/BCP_AllowChargeVoltageMax_BCP_AllowChargeVolta_273247b55ebf3761' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup' */
  (void)Rte_Read_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(&tmpRead_1j);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/BCP_AllowTempMax' */
  /* DataTypeConversion: '<S7>/Data Type Conversion1' */
  rtb_DataTypeConversion1_ixfa = (real32_T)tmpRead_1j.BMS_AllowCellTemperature;

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_SignalRead' */
  /* Constant: '<S7>/Define' incorporates:
   *  Constant: '<S7>/Define1'
   */
  rtb_Product1_nwhj = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion1_ixfa,
    DCComM_Resolution_1, DCComM_Offset_Minus40);

  /* End of Outputs for SubSystem: '<S7>/ATOM_SignalRead' */

  /* DataTypeConversion: '<S7>/Data Type Conversion2' */
  ComM_BMSBattMaxChrgTemp_C = rtb_Product1_nwhj;

  /* DataTypeConversion: '<S7>/Data Type Conversion3' */
  DCChrMgmt_BCPMaxChrgTemp_C = ComM_BMSBattMaxChrgTemp_C;

  /* Outputs for Atomic SubSystem: '<S7>/ATOM_SignalSend' */
  /* Constant: '<S7>/Define2' incorporates:
   *  Constant: '<S7>/Define3'
   */
  rtb_Divide_cd2q = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BCPMaxChrgTemp_C,
    DCComM_Resolution_1, DCComM_Offset_Minus50);

  /* End of Outputs for SubSystem: '<S7>/ATOM_SignalSend' */
  /* End of Outputs for SubSystem: '<S1>/BCP_AllowTempMax' */

  /* Chart: '<S1>/BCP_AllowTempMax_BCP_AllowTempMax_write_process_queue' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion'
   *
   * Block requirements for '<S1>/BCP_AllowTempMax_BCP_AllowTempMax_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2517
   */
  if (Compare) {
    /* Outputs for Atomic SubSystem: '<S1>/BCP_AllowTempMax' */
    CtAp_DCComM_ARID_DEF.BCP_AllowTempMax_BCP_Allow_leuq = (uint8_T)
      rtb_Divide_cd2q;

    /* End of Outputs for SubSystem: '<S1>/BCP_AllowTempMax' */
    sf_msg_send_BCP_AllowTempMax_BC();
  }

  /* End of Chart: '<S1>/BCP_AllowTempMax_BCP_AllowTempMax_write_process_queue' */

  /* Outputs for Atomic SubSystem: '<S1>/DCComM_MaxDcChrgUDc' */
  /* Constant: '<S69>/Define1' */
  DCChrMgmt_BCPMaxCellChrgUDc_V = DCComM_MacCellU;

  /* End of Outputs for SubSystem: '<S1>/DCComM_MaxDcChrgUDc' */

  /* Chart: '<S1>/BCP_BatteryChargeVoltageMax_BCP_BatteryChargeV_0f169ed7ae1303eb' incorporates:
   *  Constant: '<S69>/Define'
   *  DataTypeConversion: '<S69>/Data Type Conversion'
   *
   * Block requirements for '<S1>/BCP_BatteryChargeVoltageMax_BCP_BatteryChargeV_0f169ed7ae1303eb':
   *  1. VCU_SW_Requirements_Specification.slreqx:2513
   */
  if (Compare) {
    /* Outputs for Atomic SubSystem: '<S1>/DCComM_MaxDcChrgUDc' */
    CtAp_DCComM_ARID_DEF.BCP_BatteryChargeVoltageMa_pppp = (uint16_T)
      DCComM_MaxDcChrgVol;
    if ((uint16_T)DCComM_MaxDcChrgVol > 4095ULL) {
      CtAp_DCComM_ARID_DEF.BCP_BatteryChargeVoltageMa_pppp = 4095U;
    }

    /* End of Outputs for SubSystem: '<S1>/DCComM_MaxDcChrgUDc' */
    sf_msg_send_BCP_BatteryChargeVo();
  }

  /* End of Chart: '<S1>/BCP_BatteryChargeVoltageMax_BCP_BatteryChargeV_0f169ed7ae1303eb' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BCPBattRateEgy' */
  /* DataTypeConversion: '<S51>/DataTypeConversion' */
  ComM_BMSBattRateEgy_kWh = rtb_TmpSignalConversionAtS_cuhm.BMS_RatEnergy;

  /* DataTypeConversion: '<S51>/DataTypeConversion1' */
  DCChrMgmt_BCPBattRateEgy_kWh = ComM_BMSBattRateEgy_kWh;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BCPBattRateEgy' */

  /* Chart: '<S1>/BCP_BatteryNominalEnergy_BCP_BatteryNominalEne_21599683ffa90537'
   *
   * Block requirements for '<S1>/BCP_BatteryNominalEnergy_BCP_BatteryNominalEne_21599683ffa90537':
   *  1. VCU_SW_Requirements_Specification.slreqx:2515
   */
  if (Compare) {
    CtAp_DCComM_ARID_DEF.BCP_BatteryNominalEnergy_B_b4g0 =
      DCChrMgmt_BCPBattRateEgy_kWh;
    if (DCChrMgmt_BCPBattRateEgy_kWh > 16383ULL) {
      CtAp_DCComM_ARID_DEF.BCP_BatteryNominalEnergy_B_b4g0 = 16383U;
    }

    sf_msg_send_BCP_BatteryNominalE();
  }

  /* End of Chart: '<S1>/BCP_BatteryNominalEnergy_BCP_BatteryNominalEne_21599683ffa90537' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BCPBattUDc' */
  /* DataTypeConversion: '<S52>/DataTypeConversion' */
  ComM_BMSBattPckUDc_V = rtb_TmpSignalConversionAtSG_BMS.BMS_PackVoltage;

  /* DataTypeConversion: '<S52>/DataTypeConversion1' */
  DCChrMgmt_BCPBattUDc_V = ComM_BMSBattPckUDc_V;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BCPBattUDc' */

  /* Chart: '<S1>/BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltag_7545dd85d42f26c0'
   *
   * Block requirements for '<S1>/BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltag_7545dd85d42f26c0':
   *  1. VCU_SW_Requirements_Specification.slreqx:2519
   */
  if (Compare) {
    CtAp_DCComM_ARID_DEF.BCP_BatteryTotalVoltage_BC_kxkw =
      DCChrMgmt_BCPBattUDc_V;
    if (DCChrMgmt_BCPBattUDc_V > 8191ULL) {
      CtAp_DCComM_ARID_DEF.BCP_BatteryTotalVoltage_BC_kxkw = 8191U;
    }

    sf_msg_send_BCP_BatteryTotalVol();
  }

  /* End of Chart: '<S1>/BCP_BatteryTotalVoltage_BCP_BatteryTotalVoltag_7545dd85d42f26c0' */

  /* Outputs for Atomic SubSystem: '<S1>/DCComM_MaxDcChrgIDc' */
  /* Constant: '<S68>/Define' */
  DCChrMgmt_BCPMaxChrgIDc_A = DCComM_MaxDcChrgCurr;

  /* Outputs for Atomic SubSystem: '<S68>/ATOM_SignalSend' */
  /* Constant: '<S68>/Define1' incorporates:
   *  Constant: '<S68>/Define2'
   */
  rtb_Divide = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BCPMaxChrgIDc_A,
    DCComM_Resolution_01, DCComM_Offset_Minus400);

  /* End of Outputs for SubSystem: '<S68>/ATOM_SignalSend' */
  /* End of Outputs for SubSystem: '<S1>/DCComM_MaxDcChrgIDc' */

  /* Chart: '<S1>/BCP_ChargeCurrentMax_BCP_ChargeCurrentMax_write_process_queue' incorporates:
   *  DataTypeConversion: '<S68>/Data Type Conversion'
   *
   * Block requirements for '<S1>/BCP_ChargeCurrentMax_BCP_ChargeCurrentMax_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2514
   */
  if (Compare) {
    /* Outputs for Atomic SubSystem: '<S1>/DCComM_MaxDcChrgIDc' */
    CtAp_DCComM_ARID_DEF.BCP_ChargeCurrentMax_BCP_C_lit3 = (uint16_T)rtb_Divide;

    /* End of Outputs for SubSystem: '<S1>/DCComM_MaxDcChrgIDc' */
    if (CtAp_DCComM_ARID_DEF.BCP_ChargeCurrentMax_BCP_C_lit3 > 4095ULL) {
      CtAp_DCComM_ARID_DEF.BCP_ChargeCurrentMax_BCP_C_lit3 = 4095U;
    }

    sf_msg_send_BCP_ChargeCurrentMa();
  }

  /* End of Chart: '<S1>/BCP_ChargeCurrentMax_BCP_ChargeCurrentMax_write_process_queue' */

  /* Outputs for Atomic SubSystem: '<S1>/BCP_SOC' */
  /* DataTypeConversion: '<S13>/DataTypeConversion' */
  rtb_DataTypeConversion = (real32_T)
    rtb_TmpSignalConversionAtSG_BMS.BMS_DisplaySOC;

  /* Outputs for Atomic SubSystem: '<S13>/ATOM_SignalRead' */
  /* Constant: '<S13>/Define2' incorporates:
   *  Constant: '<S13>/Define3'
   */
  rtb_Product1_nwhj = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion,
    DCComM_Resolution_001, DCComM_Offset_0);

  /* End of Outputs for SubSystem: '<S13>/ATOM_SignalRead' */

  /* DataTypeConversion: '<S13>/DataTypeConversion1' */
  ComM_BMSBattDispSOC_pct = rtb_Product1_nwhj;

  /* DataTypeConversion: '<S13>/DataTypeConversion2' */
  DCChrMgmt_BCPBattSOC_pct = ComM_BMSBattDispSOC_pct;

  /* Outputs for Atomic SubSystem: '<S13>/ATOM_SignalSend' */
  /* Constant: '<S13>/Define' incorporates:
   *  Constant: '<S13>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Divide_nljh = CtAp_DCComM_ATOM_SignalSend
    (DCChrMgmt_BCPBattSOC_pct, DCComM_Resolution_01, DCComM_Offset_0);

  /* End of Outputs for SubSystem: '<S13>/ATOM_SignalSend' */
  /* End of Outputs for SubSystem: '<S1>/BCP_SOC' */

  /* Chart: '<S1>/BCP_SOC_BCP_SOC_write_process_queue'
   *
   * Block requirements for '<S1>/BCP_SOC_BCP_SOC_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2518
   */
  if (Compare) {
    tmpRead_18 = CtAp_DCComM_ARID_DEF.Divide_nljh;
    if (tmpRead_18 < 1024.0F) {
      if (tmpRead_18 >= 0.0F) {
        CtAp_DCComM_ARID_DEF.BCP_SOC_BCP_SOC_write_msgData = (uint16_T)
          tmpRead_18;
      } else {
        CtAp_DCComM_ARID_DEF.BCP_SOC_BCP_SOC_write_msgData = 0U;
      }
    } else {
      CtAp_DCComM_ARID_DEF.BCP_SOC_BCP_SOC_write_msgData = 1023U;
    }

    sf_msg_send_BCP_SOC_BCP_SOC_wri();
  }

  /* End of Chart: '<S1>/BCP_SOC_BCP_SOC_write_process_queue' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBCSSts_Flg
    (&Compare_dvzz);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Logic: '<S71>/LogicalOperator' incorporates:
   *  Constant: '<S121>/Constant'
   *  Delay: '<S71>/Delay1'
   *  RelationalOperator: '<S121>/Compare'
   */
  rtb_LogicalOperator_bckv = ((CtAp_DCComM_ARID_DEF.Delay1_DSTATE_cq4g <
    ((uint16_T)DCComM_Cyc250ms)) && Compare_dvzz);

  /* Sum: '<S71>/Add' incorporates:
   *  Constant: '<S71>/Define'
   *  Delay: '<S71>/Delay'
   */
  rtb_Add_dc3a = (uint16_T)((uint32_T)((uint16_T)DCComM_dt) + (uint32_T)
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_bygu);

  /* Outputs for Atomic SubSystem: '<S71>/If' */
  /* Delay: '<S71>/Delay' incorporates:
   *  Constant: '<S71>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Delay_DSTATE_bygu = CtAp_DCComM_If
    (rtb_LogicalOperator_bckv, rtb_Add_dc3a, ((uint16_T)DCComM_U16Zero));

  /* End of Outputs for SubSystem: '<S71>/If' */

  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   *  Delay: '<S71>/Delay'
   */
  Compare_dvzz = (CtAp_DCComM_ARID_DEF.Delay_DSTATE_bygu == ((uint16_T)DCComM_dt));

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BCSMaxCellUDcGroup' */
  /* DataTypeConversion: '<S53>/DataTypeConversion' */
  ComM_MaxCellUDcModlNr_Enum =
    rtb_TmpSignalConversionAtS_fui4.BMS_MaxCellVoltageModuleNO;

  /* DataTypeConversion: '<S53>/DataTypeConversion1' */
  DCChrMgmt_BCSMaxCellUDcGroup_Enum = ComM_MaxCellUDcModlNr_Enum;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BCSMaxCellUDcGroup' */

  /* Chart: '<S1>/BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGrou_314ea51b2dc2b37b'
   *
   * Block requirements for '<S1>/BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGrou_314ea51b2dc2b37b':
   *  1. VCU_SW_Requirements_Specification.slreqx:2523
   */
  if (Compare_dvzz) {
    u1 = DCChrMgmt_BCSMaxCellUDcGroup_Enum;
    if (DCChrMgmt_BCSMaxCellUDcGroup_Enum > 15ULL) {
      u1 = 15U;
    }

    CtAp_DCComM_ARID_DEF.BCS_BatteryVoltMaxGroup_BC_auve = (uint8_T)u1;
    sf_msg_send_BCS_BatteryVoltMaxG();
  }

  /* End of Chart: '<S1>/BCS_BatteryVoltMaxGroup_BCS_BatteryVoltMaxGrou_314ea51b2dc2b37b' */

  /* Outputs for Atomic SubSystem: '<S1>/BCS_MaxCellVoltage' */
  /* DataTypeConversion: '<S21>/DataTypeConversion1' */
  rtb_DataTypeConversion1_ho51 = (real32_T)
    rtb_TmpSignalConversionAtS_fui4.BMS_MaxCellVoltage;

  /* Outputs for Atomic SubSystem: '<S21>/ATOM_SignalRead' */
  /* Constant: '<S21>/Define2' incorporates:
   *  Constant: '<S21>/Define3'
   */
  rtb_Product1_nwhj = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion1_ho51,
    DCComM_Resolution_001, DCComM_Offset_0);

  /* End of Outputs for SubSystem: '<S21>/ATOM_SignalRead' */

  /* DataTypeConversion: '<S21>/DataTypeConversion2' */
  ComM_BattMaxCellUDc_V = rtb_Product1_nwhj;

  /* DataTypeConversion: '<S21>/DataTypeConversion3' */
  DCChrMgmt_BCSMaxCellUDc_V = ComM_BattMaxCellUDc_V;

  /* Outputs for Atomic SubSystem: '<S21>/ATOM_SignalSend' */
  /* Constant: '<S21>/Define' incorporates:
   *  Constant: '<S21>/Define1'
   */
  rtb_Divide_ibpl = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BCSMaxCellUDc_V,
    DCComM_Resolution_01, DCComM_Offset_0);

  /* End of Outputs for SubSystem: '<S21>/ATOM_SignalSend' */
  /* End of Outputs for SubSystem: '<S1>/BCS_MaxCellVoltage' */

  /* Chart: '<S1>/BCS_BatteryVoltMax_BCS_BatteryVoltMax_write_process_queue' incorporates:
   *  DataTypeConversion: '<S21>/DataTypeConversion'
   *
   * Block requirements for '<S1>/BCS_BatteryVoltMax_BCS_BatteryVoltMax_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2522
   */
  if (Compare_dvzz) {
    /* Outputs for Atomic SubSystem: '<S1>/BCS_MaxCellVoltage' */
    CtAp_DCComM_ARID_DEF.BCS_BatteryVoltMax_BCS_Bat_nps3 = (uint16_T)
      rtb_Divide_ibpl;

    /* End of Outputs for SubSystem: '<S1>/BCS_MaxCellVoltage' */
    if (CtAp_DCComM_ARID_DEF.BCS_BatteryVoltMax_BCS_Bat_nps3 > 4095ULL) {
      CtAp_DCComM_ARID_DEF.BCS_BatteryVoltMax_BCS_Bat_nps3 = 4095U;
    }

    sf_msg_send_BCS_BatteryVoltMax_();
  }

  /* End of Chart: '<S1>/BCS_BatteryVoltMax_BCS_BatteryVoltMax_write_process_queue' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* DataTypeConversion: '<S17>/DataTypeConversion1' incorporates:
   *  Inport: '<Root>/RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A'
   */
  (void)Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A
    (&DCChrMgmt_BCSMeasdChrgnIDc_A);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/BCS_ChargeCurrentMeasure' */
  /* Gain: '<S17>/Gain' */
  rtb_Gain = (-1.0F) * DCChrMgmt_BCSMeasdChrgnIDc_A;

  /* Outputs for Atomic SubSystem: '<S17>/ATOM_SignalSend' */
  /* Constant: '<S17>/Define' incorporates:
   *  Constant: '<S17>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Divide = CtAp_DCComM_ATOM_SignalSend(rtb_Gain,
    DCComM_Resolution_01, DCComM_Offset_Minus400);

  /* End of Outputs for SubSystem: '<S17>/ATOM_SignalSend' */
  /* End of Outputs for SubSystem: '<S1>/BCS_ChargeCurrentMeasure' */

  /* Chart: '<S1>/BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeas_27a1fed92424b727'
   *
   * Block requirements for '<S1>/BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeas_27a1fed92424b727':
   *  1. VCU_SW_Requirements_Specification.slreqx:2521
   */
  if (Compare_dvzz) {
    tmpRead_18 = CtAp_DCComM_ARID_DEF.Divide;
    if (tmpRead_18 < 16384.0F) {
      if (tmpRead_18 >= 0.0F) {
        CtAp_DCComM_ARID_DEF.BCS_ChargeCurrentMeasure_B_m3ml = (uint16_T)
          tmpRead_18;
      } else {
        CtAp_DCComM_ARID_DEF.BCS_ChargeCurrentMeasure_B_m3ml = 0U;
      }
    } else {
      CtAp_DCComM_ARID_DEF.BCS_ChargeCurrentMeasure_B_m3ml = 16383U;
    }

    sf_msg_send_BCS_ChargeCurrentMe();
  }

  /* End of Chart: '<S1>/BCS_ChargeCurrentMeasure_BCS_ChargeCurrentMeas_27a1fed92424b727' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup' */
  (void)Rte_Read_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(&tmpRead_1l);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BCSMeasdChrgnUDc' */
  /* DataTypeConversion: '<S54>/DataTypeConversion' */
  ComM_PODDCFCUDc_V = tmpRead_1l.POD_DCFCVoltage;

  /* DataTypeConversion: '<S54>/DataTypeConversion1' */
  DCChrMgmt_BCSMeasdChrgnUDc_V = ComM_PODDCFCUDc_V;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BCSMeasdChrgnUDc' */

  /* Chart: '<S1>/BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeas_a97f47267e6402ce'
   *
   * Block requirements for '<S1>/BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeas_a97f47267e6402ce':
   *  1. VCU_SW_Requirements_Specification.slreqx:2520
   */
  if (Compare_dvzz) {
    CtAp_DCComM_ARID_DEF.BCS_ChargeVoltageMeasure_B_fwx5 =
      DCChrMgmt_BCSMeasdChrgnUDc_V;
    if (DCChrMgmt_BCSMeasdChrgnUDc_V > 8191ULL) {
      CtAp_DCComM_ARID_DEF.BCS_ChargeVoltageMeasure_B_fwx5 = 8191U;
    }

    sf_msg_send_BCS_ChargeVoltageMe();
  }

  /* End of Chart: '<S1>/BCS_ChargeVoltageMeasure_BCS_ChargeVoltageMeas_a97f47267e6402ce' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup' */
  (void)Rte_Read_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(&tmpRead_1h);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BCSRmgChrgnTim' */
  /* DataTypeConversion: '<S55>/DataTypeConversion' */
  ChrgMgmt_ChrgnRemnTim_min = tmpRead_1h.BMS_RemChagTime;

  /* DataTypeConversion: '<S55>/DataTypeConversion1' */
  DCChrMgmt_BCSRmgChrgnTim_min = ChrgMgmt_ChrgnRemnTim_min;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BCSRmgChrgnTim' */

  /* Chart: '<S1>/BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRe_62efaf49d010a8c2'
   *
   * Block requirements for '<S1>/BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRe_62efaf49d010a8c2':
   *  1. VCU_SW_Requirements_Specification.slreqx:2525
   */
  if (Compare_dvzz) {
    CtAp_DCComM_ARID_DEF.BCS_EstimatedTimeRemaining_kcoa =
      DCChrMgmt_BCSRmgChrgnTim_min;
    if (DCChrMgmt_BCSRmgChrgnTim_min > 1023ULL) {
      CtAp_DCComM_ARID_DEF.BCS_EstimatedTimeRemaining_kcoa = 1023U;
    }

    sf_msg_send_BCS_EstimatedTimeRe();
  }

  /* End of Chart: '<S1>/BCS_EstimatedTimeRemaining_BCS_EstimatedTimeRe_62efaf49d010a8c2' */

  /* Outputs for Atomic SubSystem: '<S1>/BCS_SOC' */
  /* Outputs for Atomic SubSystem: '<S1>/BCP_SOC' */
  /* DataTypeConversion: '<S22>/DataTypeConversion1' incorporates:
   *  DataTypeConversion: '<S13>/DataTypeConversion'
   */
  rtb_DataTypeConversion1_nmxg = (real32_T)
    rtb_TmpSignalConversionAtSG_BMS.BMS_DisplaySOC;

  /* End of Outputs for SubSystem: '<S1>/BCP_SOC' */

  /* Outputs for Atomic SubSystem: '<S22>/ATOM_SignalRead' */
  /* Constant: '<S22>/Define2' incorporates:
   *  Constant: '<S22>/Define3'
   */
  rtb_Product1_n0tp = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion1_nmxg,
    DCComM_Resolution_001, DCComM_Offset_0);

  /* End of Outputs for SubSystem: '<S22>/ATOM_SignalRead' */

  /* SignalConversion generated from: '<S22>/ATOM_SignalRead' */
  DCChrMgmt_BCSBattSOC_pct = rtb_Product1_n0tp;

  /* End of Outputs for SubSystem: '<S1>/BCS_SOC' */

  /* Chart: '<S1>/BCS_SOC_BCS_SOC_write_process_queue' incorporates:
   *  DataTypeConversion: '<S22>/DataTypeConversion'
   *
   * Block requirements for '<S1>/BCS_SOC_BCS_SOC_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2524
   */
  if (Compare_dvzz) {
    /* Outputs for Atomic SubSystem: '<S1>/BCS_SOC' */
    CtAp_DCComM_ARID_DEF.BCS_SOC_BCS_SOC_write_msgData = (uint8_T)
      DCChrMgmt_BCSBattSOC_pct;
    if ((uint8_T)DCChrMgmt_BCSBattSOC_pct > 127ULL) {
      CtAp_DCComM_ARID_DEF.BCS_SOC_BCS_SOC_write_msgData = 127U;
    }

    /* End of Outputs for SubSystem: '<S1>/BCS_SOC' */
    sf_msg_send_BCS_SOC_BCS_SOC_wri();
  }

  /* End of Chart: '<S1>/BCS_SOC_BCS_SOC_write_process_queue' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup' */
  (void)Rte_Read_SG_BMS_Charge_03_SigGroup_SG_BMS_Charge_03_SigGroup(&tmpRead_1i);

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBRMSts_Flg
    (&Compare_oexd);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Logic: '<S72>/LogicalOperator' incorporates:
   *  Constant: '<S124>/Constant'
   *  Delay: '<S72>/Delay1'
   *  RelationalOperator: '<S124>/Compare'
   */
  rtb_LogicalOperator_o3mo = ((CtAp_DCComM_ARID_DEF.Delay1_DSTATE_aito <
    ((uint16_T)DCComM_Cyc250ms)) && Compare_oexd);

  /* Sum: '<S72>/Add' incorporates:
   *  Constant: '<S72>/Define'
   *  Delay: '<S72>/Delay'
   */
  rtb_Add_ilry = (uint16_T)((uint32_T)((uint16_T)DCComM_dt) + (uint32_T)
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_pdvw);

  /* Outputs for Atomic SubSystem: '<S72>/If' */
  /* Delay: '<S72>/Delay' incorporates:
   *  Constant: '<S72>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Delay_DSTATE_pdvw = CtAp_DCComM_If
    (rtb_LogicalOperator_o3mo, rtb_Add_ilry, ((uint16_T)DCComM_U16Zero));

  /* End of Outputs for SubSystem: '<S72>/If' */

  /* RelationalOperator: '<S125>/Compare' incorporates:
   *  Constant: '<S125>/Constant'
   *  Delay: '<S72>/Delay'
   */
  Compare_oexd = (CtAp_DCComM_ARID_DEF.Delay_DSTATE_pdvw == ((uint16_T)DCComM_dt));

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattChrgCnt' */
  /* DataTypeConversion: '<S56>/DataTypeConversion' */
  ComM_BMSBattChrgCnt_Tms = tmpRead_1i.BMS_BatChagSum;

  /* DataTypeConversion: '<S56>/DataTypeConversion1' */
  DCChrMgmt_BRMBattChrgCnt_Tms = ComM_BMSBattChrgCnt_Tms;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattChrgCnt' */

  /* Chart: '<S1>/BRM_BatteryChargeTimes_BRM_BatteryChargeTimes_18adcccc17fe958f'
   *
   * Block requirements for '<S1>/BRM_BatteryChargeTimes_BRM_BatteryChargeTimes_18adcccc17fe958f':
   *  1. VCU_SW_Requirements_Specification.slreqx:2508
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_BatteryChargeTimes_BRM_meig = (uint32_T)
      DCChrMgmt_BRMBattChrgCnt_Tms;
    sf_msg_send_BRM_BatteryChargeTi();
  }

  /* End of Chart: '<S1>/BRM_BatteryChargeTimes_BRM_BatteryChargeTimes_18adcccc17fe958f' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattManfDay' */
  /* DataTypeConversion: '<S58>/DataTypeConversion' */
  ComM_BMSBattManfDay_Enum = rtb_TmpSignalConversionAtS_gy00.BMS_BatProDatDay;

  /* DataTypeConversion: '<S58>/DataTypeConversion1' */
  DCChrMgmt_BRMBattManfDay_Enum = ComM_BMSBattManfDay_Enum;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattManfDay' */

  /* Chart: '<S1>/BRM_BatteryProductDay_BRM_BatteryProductDay_write_process_queue'
   *
   * Block requirements for '<S1>/BRM_BatteryProductDay_BRM_BatteryProductDay_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2505
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_BatteryProductDay_BRM__k3gc =
      DCChrMgmt_BRMBattManfDay_Enum;
    if (DCChrMgmt_BRMBattManfDay_Enum > 31ULL) {
      CtAp_DCComM_ARID_DEF.BRM_BatteryProductDay_BRM__k3gc = 31U;
    }

    sf_msg_send_BRM_BatteryProductD();
  }

  /* End of Chart: '<S1>/BRM_BatteryProductDay_BRM_BatteryProductDay_write_process_queue' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattManfMth' */
  /* DataTypeConversion: '<S59>/DataTypeConversion' */
  ComM_BMSBattManfMth_Enum = rtb_TmpSignalConversionAtS_gy00.BMS_BatProDatMonth;

  /* DataTypeConversion: '<S59>/DataTypeConversion1' */
  DCChrMgmt_BRMBattManfMth_Enum = ComM_BMSBattManfMth_Enum;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattManfMth' */

  /* Chart: '<S1>/BRM_BatteryProductMonth_BRM_BatteryProductMont_8c8c2e7d082f59bb'
   *
   * Block requirements for '<S1>/BRM_BatteryProductMonth_BRM_BatteryProductMont_8c8c2e7d082f59bb':
   *  1. VCU_SW_Requirements_Specification.slreqx:2506
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_BatteryProductMonth_BR_kqjz =
      DCChrMgmt_BRMBattManfMth_Enum;
    if (DCChrMgmt_BRMBattManfMth_Enum > 15ULL) {
      CtAp_DCComM_ARID_DEF.BRM_BatteryProductMonth_BR_kqjz = 15U;
    }

    sf_msg_send_BRM_BatteryProductM();
  }

  /* End of Chart: '<S1>/BRM_BatteryProductMonth_BRM_BatteryProductMont_8c8c2e7d082f59bb' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattManfYr' */
  /* DataTypeConversion: '<S60>/DataTypeConversion' */
  ComM_BMSBattManfYr_Enum = rtb_TmpSignalConversionAtS_gy00.BMS_BatProDatYear;

  /* DataTypeConversion: '<S60>/DataTypeConversion1' */
  DCChrMgmt_BRMBattManfYr_Enum = ComM_BMSBattManfYr_Enum;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattManfYr' */

  /* Chart: '<S1>/BRM_BatteryProductYear_BRM_BatteryProductYear_933d35e69f18d81e'
   *
   * Block requirements for '<S1>/BRM_BatteryProductYear_BRM_BatteryProductYear_933d35e69f18d81e':
   *  1. VCU_SW_Requirements_Specification.slreqx:2507
   */
  if (Compare_oexd) {
    u1 = DCChrMgmt_BRMBattManfYr_Enum;
    if (DCChrMgmt_BRMBattManfYr_Enum > 255ULL) {
      u1 = 255U;
    }

    CtAp_DCComM_ARID_DEF.BRM_BatteryProductYear_BRM_nrlt = (uint8_T)u1;
    sf_msg_send_BRM_BatteryProductY();
  }

  /* End of Chart: '<S1>/BRM_BatteryProductYear_BRM_BatteryProductYear_933d35e69f18d81e' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup' */
  (void)Rte_Read_SG_BMS_VersionInfor_SigGroup_SG_BMS_VersionInfor_SigGroup
    (&tmpRead_1k);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattPpty' */
  /* DataTypeConversion: '<S61>/DataTypeConversion' */
  ComM_BMSBattPpty_Enum = (uint8_T)(tmpRead_1k.BMS_BatProRights ? ((uint8_T)1) :
    ((uint8_T)0));

  /* DataTypeConversion: '<S61>/DataTypeConversion1' */
  DCChrMgmt_BRMBattPpty_Enum = ComM_BMSBattPpty_Enum;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattPpty' */

  /* Chart: '<S1>/BRM_BatteryProperty_BRM_BatteryProperty_write_process_queue'
   *
   * Block requirements for '<S1>/BRM_BatteryProperty_BRM_BatteryProperty_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2509
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_BatteryProperty_BRM_Ba_lu3a =
      DCChrMgmt_BRMBattPpty_Enum;
    sf_msg_send_BRM_BatteryProperty();
  }

  /* End of Chart: '<S1>/BRM_BatteryProperty_BRM_BatteryProperty_write_process_queue' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattCod' */
  /* Constant: '<S57>/Define' */
  DCChrMgmt_BRMBattCod_Enum = ((uint16_T)DCComM_0xFFFF);

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattCod' */

  /* Chart: '<S1>/BRM_BatterySN_BRM_BatterySN_write_process_queue'
   *
   * Block requirements for '<S1>/BRM_BatterySN_BRM_BatterySN_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2504
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_BatterySN_BRM_BatteryS_p5h3 = (uint32_T)
      DCChrMgmt_BRMBattCod_Enum;
    sf_msg_send_BRM_BatterySN_BRM_B();
  }

  /* End of Chart: '<S1>/BRM_BatterySN_BRM_BatterySN_write_process_queue' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattRateCp' */
  /* DataTypeConversion: '<S62>/DataTypeConversion' */
  ComM_BMSBattRateCp_Ah = rtb_TmpSignalConversionAtS_cuhm.BMS_RatCapacity;

  /* DataTypeConversion: '<S62>/DataTypeConversion1' */
  DCChrMgmt_BRMBattRateCp_Ah = ComM_BMSBattRateCp_Ah;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattRateCp' */

  /* Chart: '<S1>/BRM_BatterySystemRatedCapacity_BRM_BatterySyst_609deba779adf6e4'
   *
   * Block requirements for '<S1>/BRM_BatterySystemRatedCapacity_BRM_BatterySyst_609deba779adf6e4':
   *  1. VCU_SW_Requirements_Specification.slreqx:2501
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_BatterySystemRatedCapa_iejy =
      DCChrMgmt_BRMBattRateCp_Ah;
    if (DCChrMgmt_BRMBattRateCp_Ah > 16383ULL) {
      CtAp_DCComM_ARID_DEF.BRM_BatterySystemRatedCapa_iejy = 16383U;
    }

    sf_msg_send_BRM_BatterySystemRa();
  }

  /* End of Chart: '<S1>/BRM_BatterySystemRatedCapacity_BRM_BatterySyst_609deba779adf6e4' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattRateUDc' */
  /* DataTypeConversion: '<S63>/DataTypeConversion' */
  ComM_BMSBattRateUDc_V = rtb_TmpSignalConversionAtS_cuhm.BMS_RatBatVoltage;

  /* DataTypeConversion: '<S63>/DataTypeConversion1' */
  DCChrMgmt_BRMBattRateUDc_V = ComM_BMSBattRateUDc_V;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattRateUDc' */

  /* Chart: '<S1>/BRM_BatterySystemRatedVoltage_BRM_BatterySyste_731416f8cb728fc6'
   *
   * Block requirements for '<S1>/BRM_BatterySystemRatedVoltage_BRM_BatterySyste_731416f8cb728fc6':
   *  1. VCU_SW_Requirements_Specification.slreqx:2502
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_BatterySystemRatedVolt_l1sw =
      DCChrMgmt_BRMBattRateUDc_V;
    if (DCChrMgmt_BRMBattRateUDc_V > 8191ULL) {
      CtAp_DCComM_ARID_DEF.BRM_BatterySystemRatedVolt_l1sw = 8191U;
    }

    sf_msg_send_BRM_BatterySys_kulk();
  }

  /* End of Chart: '<S1>/BRM_BatterySystemRatedVoltage_BRM_BatterySyste_731416f8cb728fc6' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattTyp' */
  /* DataTypeConversion: '<S64>/DataTypeConversion' */
  ComM_BMSBattTyp_Enum = rtb_TmpSignalConversionAtS_cuhm.BMS_BatType;

  /* DataTypeConversion: '<S64>/DataTypeConversion1' */
  DCChrMgmt_BRMBattTyp_Enum = ComM_BMSBattTyp_Enum;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattTyp' */

  /* Chart: '<S1>/BRM_BatteryType_BRM_BatteryType_write_process_queue'
   *
   * Block requirements for '<S1>/BRM_BatteryType_BRM_BatteryType_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2500
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_BatteryType_BRM_Batter_jvbl =
      DCChrMgmt_BRMBattTyp_Enum;
    if (DCChrMgmt_BRMBattTyp_Enum > 31ULL) {
      CtAp_DCComM_ARID_DEF.BRM_BatteryType_BRM_Batter_jvbl = 31U;
    }

    sf_msg_send_BRM_BatteryType_BRM();
  }

  /* End of Chart: '<S1>/BRM_BatteryType_BRM_BatteryType_write_process_queue' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup' */
  (void)Rte_Read_SG_BMS_BatInfor_02_SigGroup_SG_BMS_BatInfor_02_SigGroup
    (&tmpRead_1g);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMBattmanfr' */
  /* DataTypeConversion: '<S65>/DataTypeConversion' */
  ComM_BMSBattmanfr_Enum = (uint32_T)tmpRead_1g.BMS_BatSupName;

  /* DataTypeConversion: '<S65>/DataTypeConversion1' */
  DCChrMgmt_BRMBattmanfr_Enum = ComM_BMSBattmanfr_Enum;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMBattmanfr' */

  /* Chart: '<S1>/BRM_Manufacturer_BRM_Manufacturer_write_process_queue'
   *
   * Block requirements for '<S1>/BRM_Manufacturer_BRM_Manufacturer_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2503
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_Manufacturer_BRM_Manuf_crgd =
      DCChrMgmt_BRMBattmanfr_Enum;
    sf_msg_send_BRM_Manufacturer_BR();
  }

  /* End of Chart: '<S1>/BRM_Manufacturer_BRM_Manufacturer_write_process_queue' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMComVers' */
  /* Constant: '<S66>/Define' */
  DCChrMgmt_BRMComVers_Enum = DCComM_ProtocolVersion;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMComVers' */

  /* Chart: '<S1>/BRM_ProtocolVersion_BRM_ProtocolVersion_write_process_queue'
   *
   * Block requirements for '<S1>/BRM_ProtocolVersion_BRM_ProtocolVersion_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2499
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_ProtocolVersion_BRM_Pr_cesj =
      DCComM_ProtocolVersion;
    if (DCComM_ProtocolVersion > 16777215U) {
      CtAp_DCComM_ARID_DEF.BRM_ProtocolVersion_BRM_Pr_cesj = 16777215U;
    }

    sf_msg_send_BRM_ProtocolVersion();
  }

  /* End of Chart: '<S1>/BRM_ProtocolVersion_BRM_ProtocolVersion_write_process_queue' */

  /* Outputs for Atomic SubSystem: '<S1>/DCChrMgmt_BRMVehCod17' */
  /* DataTypeConversion: '<S67>/DataTypeConversion' incorporates:
   *  Constant: '<S67>/Define'
   */
  DCChrMgmt_BRMBattResv_Enum = ((uint8_T)DCComM_0xFF);

  /* DataTypeConversion: '<S67>/DataTypeConversion1' */
  DCChrMgmt_BRMVehCod17 = DCChrMgmt_BRMBattResv_Enum;

  /* End of Outputs for SubSystem: '<S1>/DCChrMgmt_BRMVehCod17' */

  /* Chart: '<S1>/BRM_VehicleIdByte17_BRM_VehicleIdByte17_write_process_queue'
   *
   * Block requirements for '<S1>/BRM_VehicleIdByte17_BRM_VehicleIdByte17_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:118257
   */
  if (Compare_oexd) {
    CtAp_DCComM_ARID_DEF.BRM_VehicleIdByte17_BRM_Ve_ajze = DCChrMgmt_BRMVehCod17;
    sf_msg_send_BRM_VehicleIdByte17();
  }

  /* End of Chart: '<S1>/BRM_VehicleIdByte17_BRM_VehicleIdByte17_write_process_queue' */

  /* Outputs for Atomic SubSystem: '<S1>/BRM_VehicleIdByte1_8' */
  /* DataTypeConversion: '<S40>/DataTypeConversion' incorporates:
   *  Constant: '<S40>/Define'
   */
  DCChrMgmt_BRMVehCod1_8[0] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod1_8[1] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod1_8[2] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod1_8[3] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod1_8[4] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod1_8[5] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod1_8[6] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod1_8[7] = ((uint8_T)DCComM_0xFF);

  /* End of Outputs for SubSystem: '<S1>/BRM_VehicleIdByte1_8' */

  /* Chart: '<S1>/BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8_write_process_queue'
   *
   * Block requirements for '<S1>/BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:2511
   */
  if (Compare_oexd) {
    for (i = 0; i < 8; i++) {
      CtAp_DCComM_ARID_DEF.BRM_VehicleIdByte1_8_BRM_V_ittx[i] =
        DCChrMgmt_BRMVehCod1_8[i];
    }

    sf_msg_send_BRM_VehicleIdByte1_();
  }

  /* End of Chart: '<S1>/BRM_VehicleIdByte1_8_BRM_VehicleIdByte1_8_write_process_queue' */

  /* Outputs for Atomic SubSystem: '<S1>/BRM_VehicleIdByte9_16' */
  /* DataTypeConversion: '<S42>/DataTypeConversion' incorporates:
   *  Constant: '<S42>/Define'
   */
  DCChrMgmt_BRMVehCod9_16[0] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod9_16[1] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod9_16[2] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod9_16[3] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod9_16[4] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod9_16[5] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod9_16[6] = ((uint8_T)DCComM_0xFF);
  DCChrMgmt_BRMVehCod9_16[7] = ((uint8_T)DCComM_0xFF);

  /* End of Outputs for SubSystem: '<S1>/BRM_VehicleIdByte9_16' */

  /* Chart: '<S1>/BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16_write_process_queue'
   *
   * Block requirements for '<S1>/BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16_write_process_queue':
   *  1. VCU_SW_Requirements_Specification.slreqx:118256
   */
  if (Compare_oexd) {
    for (i = 0; i < 8; i++) {
      CtAp_DCComM_ARID_DEF.BRM_VehicleIdByte9_16_BRM__kqs1[i] =
        DCChrMgmt_BRMVehCod9_16[i];
    }

    sf_msg_send_BRM_VehicleIdByte9_();
  }

  /* End of Chart: '<S1>/BRM_VehicleIdByte9_16_BRM_VehicleIdByte9_16_write_process_queue' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSDSts_Flg
    (&tmpRead_1d);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Logic: '<S47>/LogicalOperator' incorporates:
   *  Constant: '<S107>/Constant'
   *  Delay: '<S47>/Delay1'
   *  RelationalOperator: '<S107>/Compare'
   */
  rtb_LogicalOperator_dt4m = ((CtAp_DCComM_ARID_DEF.Delay1_DSTATE_g1oe <
    ((uint16_T)DCComM_Cyc250ms)) && tmpRead_1d);

  /* Sum: '<S47>/Add' incorporates:
   *  Constant: '<S47>/Define'
   *  Delay: '<S47>/Delay'
   */
  rtb_Add_gut5 = (uint16_T)((uint32_T)((uint16_T)DCComM_dt) + (uint32_T)
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_iudh);

  /* Outputs for Atomic SubSystem: '<S47>/If' */
  /* Delay: '<S47>/Delay' incorporates:
   *  Constant: '<S47>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Delay_DSTATE_iudh = CtAp_DCComM_If
    (rtb_LogicalOperator_dt4m, rtb_Add_gut5, ((uint16_T)DCComM_U16Zero));

  /* End of Outputs for SubSystem: '<S47>/If' */

  /* Outputs for Enabled SubSystem: '<S1>/BSD' incorporates:
   *  EnablePort: '<S46>/Enable'
   *
   * Block requirements for '<S1>/BSD':
   *  1. VCU_SW_Requirements_Specification.slreqx:2533
   *  2. VCU_SW_Requirements_Specification.slreqx:2534
   *  3. VCU_SW_Requirements_Specification.slreqx:2535
   *  4. VCU_SW_Requirements_Specification.slreqx:2536
   *  5. VCU_SW_Requirements_Specification.slreqx:2537
   */
  /* RelationalOperator: '<S108>/Compare' incorporates:
   *  Constant: '<S108>/Constant'
   *  Constant: '<S46>/Define'
   *  Constant: '<S46>/Define1'
   *  Constant: '<S46>/Define10'
   *  Constant: '<S46>/Define11'
   *  Constant: '<S46>/Define12'
   *  Constant: '<S46>/Define13'
   *  Constant: '<S46>/Define14'
   *  Constant: '<S46>/Define15'
   *  Constant: '<S46>/Define16'
   *  Constant: '<S46>/Define17'
   *  Constant: '<S46>/Define18'
   *  Constant: '<S46>/Define19'
   *  Constant: '<S46>/Define2'
   *  Constant: '<S46>/Define3'
   *  Constant: '<S46>/Define4'
   *  Constant: '<S46>/Define5'
   *  Constant: '<S46>/Define6'
   *  Constant: '<S46>/Define7'
   *  Constant: '<S46>/Define8'
   *  Constant: '<S46>/Define9'
   *  Delay: '<S47>/Delay'
   */
  if (CtAp_DCComM_ARID_DEF.Delay_DSTATE_iudh == ((uint16_T)DCComM_dt)) {
    /* Outputs for Atomic SubSystem: '<S1>/BCP_SOC' */
    /* DataTypeConversion: '<S46>/DataTypeConversion5' incorporates:
     *  DataTypeConversion: '<S13>/DataTypeConversion'
     */
    rtb_DataTypeConversion5 = (real32_T)
      rtb_TmpSignalConversionAtSG_BMS.BMS_DisplaySOC;

    /* End of Outputs for SubSystem: '<S1>/BCP_SOC' */

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalRead4' */
    rtb_Product1_nk5k = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion5,
      DCComM_Resolution_001, DCComM_Offset_0);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalRead4' */

    /* SignalConversion generated from: '<S46>/ATOM_SignalRead4' incorporates:
     *  Constant: '<S46>/Define16'
     *  Constant: '<S46>/Define17'
     */
    DCChrMgmt_BSDFinshdSOC_pct = rtb_Product1_nk5k;

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalSend4' */
    rtb_Divide_cgfz = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BSDFinshdSOC_pct,
      DCComM_Resolution_1, DCComM_Offset_0);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalSend4' */

    /* DataTypeConversion: '<S46>/DataTypeConversion4' incorporates:
     *  Constant: '<S46>/Define18'
     *  Constant: '<S46>/Define19'
     */
    tmpRead_18 = rtb_Divide_cgfz;
    tmpRead_16 = fabsf(tmpRead_18);
    if (tmpRead_16 < 8.388608E+6F) {
      if (tmpRead_16 >= 0.5F) {
        tmpRead_18 = floorf(tmpRead_18 + 0.5F);
      } else {
        tmpRead_18 = 0.0F;
      }
    }

    /* Outport: '<Root>/BSD_AbortSOC_BSD_AbortSOC' incorporates:
     *  DataTypeConversion: '<S46>/DataTypeConversion4'
     */
    (void)Rte_Write_BSD_AbortSOC_BSD_AbortSOC((BSD_AbortSOC)((uint8_T)((uint8_T)
      tmpRead_18 & (uint8_T)127)));

    /* DataTypeConversion: '<S46>/DataTypeConversion8' */
    rtb_DataTypeConversion8_ec5u = (real32_T)
      rtb_TmpSignalConversionAtS_a3t4.BMS_MaxCellTemp;

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalRead2' */
    rtb_Product1_eiub = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion8_ec5u,
      DCComM_Resolution_1, DCComM_Offset_Minus40);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalRead2' */

    /* SignalConversion generated from: '<S46>/ATOM_SignalRead2' incorporates:
     *  Constant: '<S46>/Define8'
     *  Constant: '<S46>/Define9'
     */
    DCChrMgmt_BSDBattMaxTemp_C = rtb_Product1_eiub;

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalSend2' */
    rtb_Divide_gceg = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BSDBattMaxTemp_C,
      DCComM_Resolution_1, DCComM_Offset_Minus50);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalSend2' */

    /* DataTypeConversion: '<S46>/DataTypeConversion2' incorporates:
     *  Constant: '<S46>/Define10'
     *  Constant: '<S46>/Define11'
     */
    tmpRead_18 = rtb_Divide_gceg;
    tmpRead_16 = fabsf(tmpRead_18);
    if (tmpRead_16 < 8.388608E+6F) {
      if (tmpRead_16 >= 0.5F) {
        tmpRead_18 = floorf(tmpRead_18 + 0.5F);
      } else {
        tmpRead_18 = 0.0F;
      }
    }

    /* Outport: '<Root>/BSD_BatteryTempMax_BSD_BatteryTempMax' incorporates:
     *  DataTypeConversion: '<S46>/DataTypeConversion2'
     */
    (void)Rte_Write_BSD_BatteryTempMax_BSD_BatteryTempMax((BSD_BatteryTempMax)
      ((uint8_T)tmpRead_18));

    /* DataTypeConversion: '<S46>/DataTypeConversion9' */
    rtb_DataTypeConversion9_p3fr = (real32_T)
      rtb_TmpSignalConversionAtS_a3t4.BMS_MinCellTemp;

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalRead3' */
    rtb_Product1_lwiu = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion9_p3fr,
      DCComM_Resolution_1, DCComM_Offset_Minus40);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalRead3' */

    /* SignalConversion generated from: '<S46>/ATOM_SignalRead3' incorporates:
     *  Constant: '<S46>/Define14'
     *  Constant: '<S46>/Define15'
     */
    DCChrMgmt_BSDBattMinTemp_C = rtb_Product1_lwiu;

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalSend3' */
    rtb_Divide_c0re = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BSDBattMinTemp_C,
      DCComM_Resolution_1, DCComM_Offset_Minus50);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalSend3' */

    /* DataTypeConversion: '<S46>/DataTypeConversion3' incorporates:
     *  Constant: '<S46>/Define12'
     *  Constant: '<S46>/Define13'
     */
    tmpRead_18 = rtb_Divide_c0re;
    tmpRead_16 = fabsf(tmpRead_18);
    if (tmpRead_16 < 8.388608E+6F) {
      if (tmpRead_16 >= 0.5F) {
        tmpRead_18 = floorf(tmpRead_18 + 0.5F);
      } else {
        tmpRead_18 = 0.0F;
      }
    }

    /* Outport: '<Root>/BSD_BatteryTempMin_BSD_BatteryTempMin' incorporates:
     *  DataTypeConversion: '<S46>/DataTypeConversion3'
     */
    (void)Rte_Write_BSD_BatteryTempMin_BSD_BatteryTempMin((BSD_BatteryTempMin)
      ((uint8_T)tmpRead_18));

    /* DataTypeConversion: '<S46>/DataTypeConversion7' */
    rtb_DataTypeConversion7_ega3 = (real32_T)
      rtb_TmpSignalConversionAtS_fui4.BMS_MinCellVoltage;

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalRead1' */
    rtb_Product1_jegl = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion7_ega3,
      DCComM_Resolution_0001, DCComM_Offset_0);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalRead1' */

    /* SignalConversion generated from: '<S46>/ATOM_SignalRead1' incorporates:
     *  Constant: '<S46>/Define4'
     *  Constant: '<S46>/Define5'
     */
    DCChrMgmt_BSDBattMinCellUDc_V = rtb_Product1_jegl;

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalSend1' */
    rtb_Divide_cwb0 = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BSDBattMinCellUDc_V,
      DCComM_Resolution_001, DCComM_Offset_0);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalSend1' */

    /* DataTypeConversion: '<S46>/DataTypeConversion1' incorporates:
     *  Constant: '<S46>/Define6'
     *  Constant: '<S46>/Define7'
     */
    tmpRead_18 = rtb_Divide_cwb0;
    tmpRead_16 = fabsf(tmpRead_18);
    if (tmpRead_16 < 8.388608E+6F) {
      if (tmpRead_16 >= 0.5F) {
        tmpRead_18 = floorf(tmpRead_18 + 0.5F);
      } else {
        tmpRead_18 = 0.0F;
      }
    }

    /* Outport: '<Root>/BSD_BatteryVoltageMin_BSD_BatteryVoltageMin' incorporates:
     *  DataTypeConversion: '<S46>/DataTypeConversion1'
     */
    (void)Rte_Write_BSD_BatteryVoltageMin_BSD_BatteryVoltageMin
      ((BSD_BatteryVoltageMin)((uint16_T)((uint16_T)tmpRead_18 & (uint16_T)4095)));

    /* Outputs for Atomic SubSystem: '<S1>/BCS_MaxCellVoltage' */
    /* DataTypeConversion: '<S46>/DataTypeConversion6' incorporates:
     *  DataTypeConversion: '<S21>/DataTypeConversion1'
     */
    rtb_DataTypeConversion6 = (real32_T)
      rtb_TmpSignalConversionAtS_fui4.BMS_MaxCellVoltage;

    /* End of Outputs for SubSystem: '<S1>/BCS_MaxCellVoltage' */

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalRead' */
    rtb_Product1_fcip = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion6,
      DCComM_Resolution_0001, DCComM_Offset_0);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalRead' */

    /* SignalConversion generated from: '<S46>/ATOM_SignalRead' incorporates:
     *  Constant: '<S46>/Define'
     *  Constant: '<S46>/Define1'
     */
    DCChrMgmt_BSDBattMaxCellUDc_V = rtb_Product1_fcip;

    /* Outputs for Atomic SubSystem: '<S46>/ATOM_SignalSend' */
    rtb_Divide_c04t = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BSDBattMaxCellUDc_V,
      DCComM_Resolution_001, DCComM_Offset_0);

    /* End of Outputs for SubSystem: '<S46>/ATOM_SignalSend' */

    /* DataTypeConversion: '<S46>/DataTypeConversion' incorporates:
     *  Constant: '<S46>/Define2'
     *  Constant: '<S46>/Define3'
     */
    tmpRead_18 = rtb_Divide_c04t;
    tmpRead_16 = fabsf(tmpRead_18);
    if (tmpRead_16 < 8.388608E+6F) {
      if (tmpRead_16 >= 0.5F) {
        tmpRead_18 = floorf(tmpRead_18 + 0.5F);
      } else {
        tmpRead_18 = 0.0F;
      }
    }

    /* Outport: '<Root>/BSD_BatteryVoltageMax_BSD_BatteryVoltageMax' incorporates:
     *  DataTypeConversion: '<S46>/DataTypeConversion'
     */
    (void)Rte_Write_BSD_BatteryVoltageMax_BSD_BatteryVoltageMax
      ((BSD_BatteryVoltageMax)((uint16_T)((uint16_T)tmpRead_18 & (uint16_T)4095)));
  }

  /* End of RelationalOperator: '<S108>/Compare' */
  /* End of Outputs for SubSystem: '<S1>/BSD' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSMSts_Flg
    (&tmpRead_1e);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Logic: '<S49>/LogicalOperator' incorporates:
   *  Constant: '<S114>/Constant'
   *  Delay: '<S49>/Delay1'
   *  RelationalOperator: '<S114>/Compare'
   */
  rtb_LogicalOperator_cyrv = ((CtAp_DCComM_ARID_DEF.Delay1_DSTATE_h1k3 <
    ((uint16_T)DCComM_Cyc250ms)) && tmpRead_1e);

  /* Sum: '<S49>/Add' incorporates:
   *  Constant: '<S49>/Define'
   *  Delay: '<S49>/Delay'
   */
  rtb_Add_hrad = (uint16_T)((uint32_T)((uint16_T)DCComM_dt) + (uint32_T)
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_eyz2);

  /* Outputs for Atomic SubSystem: '<S49>/If' */
  /* Delay: '<S49>/Delay' incorporates:
   *  Constant: '<S49>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Delay_DSTATE_eyz2 = CtAp_DCComM_If
    (rtb_LogicalOperator_cyrv, rtb_Add_hrad, ((uint16_T)DCComM_U16Zero));

  /* End of Outputs for SubSystem: '<S49>/If' */

  /* Outputs for Enabled SubSystem: '<S1>/BSM' incorporates:
   *  EnablePort: '<S48>/Enable'
   *
   * Block requirements for '<S1>/BSM':
   *  1. VCU_SW_Requirements_Specification.slreqx:2528
   *  2. VCU_SW_Requirements_Specification.slreqx:2529
   *  3. VCU_SW_Requirements_Specification.slreqx:2530
   *  4. VCU_SW_Requirements_Specification.slreqx:2531
   *  5. VCU_SW_Requirements_Specification.slreqx:2532
   *  6. VCU_SW_Requirements_Specification.slreqx:2526
   */
  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   *  Constant: '<S48>/Define'
   *  Constant: '<S48>/Define1'
   *  Constant: '<S48>/Define2'
   *  Constant: '<S48>/Define3'
   *  Constant: '<S48>/Define4'
   *  Constant: '<S48>/Define5'
   *  Constant: '<S48>/Define6'
   *  Constant: '<S48>/Define7'
   *  Delay: '<S49>/Delay'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum'
   */
  if (CtAp_DCComM_ARID_DEF.Delay_DSTATE_eyz2 == ((uint16_T)DCComM_dt)) {
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum
      (&tmpRead_q);
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum
      (&tmpRead_p);
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum
      (&tmpRead_o);
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum
      (&tmpRead_n);
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg
      (&tmpRead_m);
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum
      (&tmpRead_l);
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum
      (&tmpRead_k);

    /* Outport: '<Root>/BSM_SOC_BSM_SOC' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMBattTempHiErrSts_Enum_tec_DCChrMgmt_BSMBattTempHiErrSts_Enum'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMCellUDcErrSts_Enum_tec_DCChrMgmt_BSMCellUDcErrSts_Enum'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMChrgAllwbl_Flg_tec_DCChrMgmt_BSMChrgAllwbl_Flg'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMChrgnIDcErrSts_Enum_tec_DCChrMgmt_BSMChrgnIDcErrSts_Enum'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMIRErrSts_Enum_tec_DCChrMgmt_BSMIRErrSts_Enum'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMOutpCnctErrSts_Enum_tec_DCChrMgmt_BSMOutpCnctErrSts_Enum'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BSMSOCErrSts_Enum_tec_DCChrMgmt_BSMSOCErrSts_Enum'
     */
    (void)Rte_Write_BSM_SOC_BSM_SOC((BSM_SOC)tmpRead_q);

    /* Outport: '<Root>/BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion1'
     */
    (void)Rte_Write_BSM_BatteryVoltageMaxNo_BSM_BatteryVoltageMaxNo
      ((BSM_BatteryVoltageMaxNo)
       rtb_TmpSignalConversionAtS_fui4.BMS_MaxCellVoltageNO);

    /* DataTypeConversion: '<S48>/DataTypeConversion19' */
    ComM_MinCellTempNr_Enum = rtb_TmpSignalConversionAtS_a3t4.BMS_MinCellTempNO;

    /* DataTypeConversion: '<S48>/DataTypeConversion20' */
    DCChrMgmt_BSMMinCellTempNr_Enum = ComM_MinCellTempNr_Enum;

    /* Outport: '<Root>/BSM_BatteryTempMinNo_BSM_BatteryTempMinNo' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion2'
     */
    (void)Rte_Write_BSM_BatteryTempMinNo_BSM_BatteryTempMinNo
      ((BSM_BatteryTempMinNo)DCChrMgmt_BSMMinCellTempNr_Enum);

    /* DataTypeConversion: '<S48>/DataTypeConversion16' */
    ComM_MaxCellTempNr_Enum = rtb_TmpSignalConversionAtS_a3t4.BMS_MaxCellTempNO;

    /* DataTypeConversion: '<S48>/DataTypeConversion17' */
    DCChrMgmt_BSMMaxCellTempNr_Enum = ComM_MaxCellTempNr_Enum;

    /* Outport: '<Root>/BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion3'
     */
    (void)Rte_Write_BSM_BatteryTempMaxNo_BSM_BatteryTempMaxNo
      ((BSM_BatteryTempMaxNo)DCChrMgmt_BSMMaxCellTempNr_Enum);

    /* Outport: '<Root>/BSM_BatteryCurrentState_BSM_BatteryCurrentState' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion4'
     */
    (void)Rte_Write_BSM_BatteryCurrentState_BSM_BatteryCurrentState
      ((BSM_BatteryCurrentState)tmpRead_n);

    /* DataTypeConversion: '<S48>/DataTypeConversion12' */
    DCChrMgmt_BSMChrgAllow_Enum = (uint8_T)(tmpRead_m ? ((uint8_T)1) : ((uint8_T)
      0));

    /* Outport: '<Root>/BSM_ChargeEnable_BSM_ChargeEnable' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion5'
     */
    (void)Rte_Write_BSM_ChargeEnable_BSM_ChargeEnable((BSM_ChargeEnable)
      DCChrMgmt_BSMChrgAllow_Enum);

    /* Outport: '<Root>/BSM_BatteryTempState_BSM_BatteryTempState' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion6'
     */
    (void)Rte_Write_BSM_BatteryTempState_BSM_BatteryTempState
      ((BSM_BatteryTempState)tmpRead_k);

    /* DataTypeConversion: '<S48>/DataTypeConversion13' */
    rtb_DataTypeConversion13 = (real32_T)
      rtb_TmpSignalConversionAtS_a3t4.BMS_MinCellTemp;

    /* Outputs for Atomic SubSystem: '<S48>/ATOM_SignalRead' */
    rtb_Product1_irvh = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion13,
      DCComM_Resolution_1, DCComM_Offset_Minus40);

    /* End of Outputs for SubSystem: '<S48>/ATOM_SignalRead' */

    /* SignalConversion generated from: '<S48>/ATOM_SignalRead' incorporates:
     *  Constant: '<S48>/Define'
     *  Constant: '<S48>/Define1'
     */
    ComM_MaxCellTemp_C = rtb_Product1_irvh;

    /* DataTypeConversion: '<S48>/DataTypeConversion15' */
    DCChrMgmt_BSMMaxCellTemp_C = ComM_MaxCellTemp_C;

    /* Outputs for Atomic SubSystem: '<S48>/ATOM_SignalSend' */
    rtb_Divide_oypu = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BSMMaxCellTemp_C,
      DCComM_Resolution_1, DCComM_Offset_Minus50);

    /* End of Outputs for SubSystem: '<S48>/ATOM_SignalSend' */

    /* DataTypeConversion: '<S48>/DataTypeConversion7' incorporates:
     *  Constant: '<S48>/Define2'
     *  Constant: '<S48>/Define3'
     */
    tmpRead_18 = rtb_Divide_oypu;
    tmpRead_16 = fabsf(tmpRead_18);
    if (tmpRead_16 < 8.388608E+6F) {
      if (tmpRead_16 >= 0.5F) {
        tmpRead_18 = floorf(tmpRead_18 + 0.5F);
      } else {
        tmpRead_18 = 0.0F;
      }
    }

    /* Outport: '<Root>/BSM_BatteryTempMin_BSM_BatteryTempMin' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion7'
     */
    (void)Rte_Write_BSM_BatteryTempMin_BSM_BatteryTempMin((BSM_BatteryTempMin)
      ((uint8_T)tmpRead_18));

    /* Outport: '<Root>/BSM_InsulationState_BSM_InsulationState' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion9'
     */
    (void)Rte_Write_BSM_InsulationState_BSM_InsulationState((BSM_InsulationState)
      tmpRead_o);

    /* DataTypeConversion: '<S48>/DataTypeConversion14' */
    rtb_DataTypeConversion14 = (real32_T)
      rtb_TmpSignalConversionAtS_a3t4.BMS_MaxCellTemp;

    /* Outputs for Atomic SubSystem: '<S48>/ATOM_SignalRead1' */
    rtb_Product1_bznp = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion14,
      DCComM_Resolution_1, DCComM_Offset_Minus40);

    /* End of Outputs for SubSystem: '<S48>/ATOM_SignalRead1' */

    /* SignalConversion generated from: '<S48>/ATOM_SignalRead1' incorporates:
     *  Constant: '<S48>/Define4'
     *  Constant: '<S48>/Define5'
     */
    ComM_MinCellTemp_C = rtb_Product1_bznp;

    /* DataTypeConversion: '<S48>/DataTypeConversion18' */
    DCChrMgmt_BSMMinCellTemp_C = ComM_MinCellTemp_C;

    /* Outputs for Atomic SubSystem: '<S48>/ATOM_SignalSend1' */
    rtb_Divide_mkct = CtAp_DCComM_ATOM_SignalSend(DCChrMgmt_BSMMinCellTemp_C,
      DCComM_Resolution_1, DCComM_Offset_Minus50);

    /* End of Outputs for SubSystem: '<S48>/ATOM_SignalSend1' */

    /* DataTypeConversion: '<S48>/DataTypeConversion8' incorporates:
     *  Constant: '<S48>/Define6'
     *  Constant: '<S48>/Define7'
     */
    tmpRead_18 = rtb_Divide_mkct;
    tmpRead_16 = fabsf(tmpRead_18);
    if (tmpRead_16 < 8.388608E+6F) {
      if (tmpRead_16 >= 0.5F) {
        tmpRead_18 = floorf(tmpRead_18 + 0.5F);
      } else {
        tmpRead_18 = 0.0F;
      }
    }

    /* Outport: '<Root>/BSM_BatteryTempMax_BSM_BatteryTempMax' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion8'
     */
    (void)Rte_Write_BSM_BatteryTempMax_BSM_BatteryTempMax((BSM_BatteryTempMax)
      ((uint8_T)tmpRead_18));

    /* Outport: '<Root>/BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion10'
     */
    (void)
      Rte_Write_BSM_BatteryOutpuConnectorState_BSM_BatteryOutpuConnectorState
      ((BSM_BatteryOutpuConnectorState)tmpRead_p);

    /* Outport: '<Root>/BSM_BatteryVoltageState_BSM_BatteryVoltageState' incorporates:
     *  DataTypeConversion: '<S48>/DataTypeConversion11'
     */
    (void)Rte_Write_BSM_BatteryVoltageState_BSM_BatteryVoltageState
      ((BSM_BatteryVoltageState)tmpRead_l);
  }

  /* End of RelationalOperator: '<S115>/Compare' */
  /* End of Outputs for SubSystem: '<S1>/BSM' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBEMSts_Flg
    (&tmpRead_1a);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Logic: '<S25>/LogicalOperator' incorporates:
   *  Constant: '<S87>/Constant'
   *  Delay: '<S25>/Delay1'
   *  RelationalOperator: '<S87>/Compare'
   */
  rtb_LogicalOperator_leep = ((CtAp_DCComM_ARID_DEF.Delay1_DSTATE_p2kp <
    ((uint16_T)DCComM_Cyc250ms)) && tmpRead_1a);

  /* Sum: '<S25>/Add' incorporates:
   *  Constant: '<S25>/Define'
   *  Delay: '<S25>/Delay'
   */
  rtb_Add_ayjl = (uint16_T)((uint32_T)((uint16_T)DCComM_dt) + (uint32_T)
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_fsku);

  /* Outputs for Atomic SubSystem: '<S25>/If' */
  /* Delay: '<S25>/Delay' incorporates:
   *  Constant: '<S25>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Delay_DSTATE_fsku = CtAp_DCComM_If
    (rtb_LogicalOperator_leep, rtb_Add_ayjl, ((uint16_T)DCComM_U16Zero));

  /* End of Outputs for SubSystem: '<S25>/If' */

  /* Outputs for Enabled SubSystem: '<S1>/BEM' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  /* RelationalOperator: '<S88>/Compare' incorporates:
   *  Constant: '<S88>/Constant'
   *  Delay: '<S25>/Delay'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus'
   */
  if (CtAp_DCComM_ARID_DEF.Delay_DSTATE_fsku == ((uint16_T)DCComM_dt)) {
    (void)Rte_Read_RTE_R_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus
      (&tmpRead_i);
    (void)Rte_Read_RTE_R_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus
      (&tmpRead_h);
    (void)Rte_Read_RTE_R_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus
      (&tmpRead_g);
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus
      (&tmpRead_f);
    (void)Rte_Read_RTE_R_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus
      (&tmpRead_e);
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus
      (&tmpRead_d);
    (void)Rte_Read_RTE_R_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus
      (&tmpRead_c);
    (void)Rte_Read_RTE_R_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus
      (&tmpRead_b);

    /* Outport: '<Root>/BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout' incorporates:
     *  DataTypeConversion: '<S24>/DataTypeConversion'
     *  DataTypeConversion: '<S24>/DataTypeConversion7'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCCSTmt_Bus_tec_DCChrMgmt_BEMRxCCSTmt_Bus'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCMLTmt_Bus_tec_DCChrMgmt_BEMRxCMLTmt_Bus'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCRMPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCRMPrepdTmt_Bus'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCRMTmt_Bus_tec_DCChrMgmt_BEMRxCRMTmt_Bus'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCROPrepdTmt_Bus_tec_DCChrMgmt_BEMRxCROPrepdTmt_Bus'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCROTmt_Bus_tec_DCChrMgmt_BEMRxCROTmt_Bus'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCSDTmt_Bus_tec_DCChrMgmt_BEMRxCSDTmt_Bus'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BEMRxCSTTmt_Bus_tec_DCChrMgmt_BEMRxCSTTmt_Bus'
     */
    (void)Rte_Write_BEM_ChargeAbortTimeout_BEM_ChargeAbortTimeout
      ((BEM_ChargeAbortTimeout)tmpRead_i.DCChrMgmt_ErrResBEMRxCSTTmt);

    /* Outport: '<Root>/BEM_ChargeStateTimeout_BEM_ChargeStateTimeout' incorporates:
     *  DataTypeConversion: '<S24>/DataTypeConversion1'
     *  DataTypeConversion: '<S24>/DataTypeConversion8'
     */
    (void)Rte_Write_BEM_ChargeStateTimeout_BEM_ChargeStateTimeout
      ((BEM_ChargeStateTimeout)tmpRead_b.DCChrMgmt_ErrResBEMRxCCSTmt);

    /* Outport: '<Root>/BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0' incorporates:
     *  DataTypeConversion: '<S24>/DataTypeConversion2'
     *  DataTypeConversion: '<S24>/DataTypeConversion9'
     */
    (void)Rte_Write_BEM_ChargerIdTimeout0_BEM_ChargerIdTimeout0
      ((BEM_ChargerIdTimeout0)tmpRead_e.DCChrMgmt_ErrResBEMRxCRMTmt);

    /* Outport: '<Root>/BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout' incorporates:
     *  DataTypeConversion: '<S24>/DataTypeConversion11'
     *  DataTypeConversion: '<S24>/DataTypeConversion6'
     */
    (void)Rte_Write_BEM_TimesyncOrPowerTimeout_BEM_TimesyncOrPowerTimeout
      ((BEM_TimesyncOrPowerTimeout)tmpRead_c.DCChrMgmt_ErrResBEMRxCMLTmt);

    /* RelationalOperator: '<S129>/RelationalOperator1' incorporates:
     *  Logic: '<S24>/LogicalOperator'
     */
    rtb_RelationalOperator1_bb55 = (tmpRead_f.DCChrMgmt_ErrResBEMRxCROPrepdTmt ||
      tmpRead_g.DCChrMgmt_ErrResBEMRxCROTmt);

    /* Outport: '<Root>/BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout' incorporates:
     *  DataTypeConversion: '<S24>/DataTypeConversion12'
     *  DataTypeConversion: '<S24>/DataTypeConversion3'
     */
    (void)Rte_Write_BEM_ChargeFinishTimeout_BEM_ChargeFinishTimeout
      ((BEM_ChargeFinishTimeout)rtb_RelationalOperator1_bb55);

    /* Outport: '<Root>/BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout' incorporates:
     *  DataTypeConversion: '<S24>/DataTypeConversion13'
     *  DataTypeConversion: '<S24>/DataTypeConversion5'
     */
    (void)Rte_Write_BEM_ChargeStatisticsTimeout_BEM_ChargeStatisticsTimeout
      ((BEM_ChargeStatisticsTimeout)tmpRead_h.DCChrMgmt_ErrResBEMRxCSDTmt);

    /* Outport: '<Root>/BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1' incorporates:
     *  DataTypeConversion: '<S24>/DataTypeConversion10'
     *  DataTypeConversion: '<S24>/DataTypeConversion4'
     */
    (void)Rte_Write_BEM_ChargerIdTimeout1_BEM_ChargerIdTimeout1
      ((BEM_ChargerIdTimeout1)tmpRead_d.DCChrMgmt_ErrResBEMRxCRMPrepdTmt);
  }

  /* End of RelationalOperator: '<S88>/Compare' */
  /* End of Outputs for SubSystem: '<S1>/BEM' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBHMSts_Flg
    (&tmpRead_1b);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Logic: '<S27>/LogicalOperator' incorporates:
   *  Constant: '<S91>/Constant'
   *  Delay: '<S27>/Delay1'
   *  RelationalOperator: '<S91>/Compare'
   */
  rtb_LogicalOperator_ikz3 = ((CtAp_DCComM_ARID_DEF.Delay1_DSTATE_cww3 <
    ((uint16_T)DCComM_Cyc250ms)) && tmpRead_1b);

  /* Sum: '<S27>/Add' incorporates:
   *  Constant: '<S27>/Define'
   *  Delay: '<S27>/Delay'
   */
  rtb_Add_hawb = (uint16_T)((uint32_T)((uint16_T)DCComM_dt) + (uint32_T)
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_dwor);

  /* Outputs for Atomic SubSystem: '<S27>/If' */
  /* Delay: '<S27>/Delay' incorporates:
   *  Constant: '<S27>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Delay_DSTATE_dwor = CtAp_DCComM_If
    (rtb_LogicalOperator_ikz3, rtb_Add_hawb, ((uint16_T)DCComM_U16Zero));

  /* End of Outputs for SubSystem: '<S27>/If' */

  /* Outputs for Enabled SubSystem: '<S1>/BHM' incorporates:
   *  EnablePort: '<S26>/Enable'
   *
   * Block requirements for '<S1>/BHM':
   *  1. VCU_SW_Requirements_Specification.slreqx:2498
   */
  /* RelationalOperator: '<S92>/Compare' incorporates:
   *  Constant: '<S26>/Define'
   *  Constant: '<S26>/Define1'
   *  Constant: '<S26>/Define2'
   *  Constant: '<S92>/Constant'
   *  Delay: '<S27>/Delay'
   */
  if (CtAp_DCComM_ARID_DEF.Delay_DSTATE_dwor == ((uint16_T)DCComM_dt)) {
    /* Outputs for Atomic SubSystem: '<S26>/ATOM_SignalSend' */
    rtb_Divide_n0zj = CtAp_DCComM_ATOM_SignalSend(DCComM_MaxDcChrgVol,
      DCComM_Resolution_01, DCComM_Offset_0);

    /* End of Outputs for SubSystem: '<S26>/ATOM_SignalSend' */

    /* SignalConversion generated from: '<S26>/ATOM_SignalSend' incorporates:
     *  Constant: '<S26>/Define'
     *  Constant: '<S26>/Define1'
     *  Constant: '<S26>/Define2'
     */
    DCChrMgmt_BHMMaxChrgUDc_V = rtb_Divide_n0zj;

    /* DataTypeConversion: '<S26>/DataTypeConversion' */
    tmpRead_16 = fabsf(DCChrMgmt_BHMMaxChrgUDc_V);
    if (tmpRead_16 < 8.388608E+6F) {
      if (tmpRead_16 >= 0.5F) {
        tmpRead_18 = floorf(DCChrMgmt_BHMMaxChrgUDc_V + 0.5F);
      } else {
        tmpRead_18 = 0.0F;
      }
    } else {
      tmpRead_18 = DCChrMgmt_BHMMaxChrgUDc_V;
    }

    /* Outport: '<Root>/BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax' incorporates:
     *  DataTypeConversion: '<S26>/DataTypeConversion'
     */
    (void)Rte_Write_BHM_AllowChargeVoltageMax_BHM_AllowChargeVoltageMax
      ((BHM_AllowChargeVoltageMax)((uint16_T)((uint16_T)tmpRead_18 & (uint16_T)
         8191)));
  }

  /* End of RelationalOperator: '<S92>/Compare' */
  /* End of Outputs for SubSystem: '<S1>/BHM' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBROSts_Flg
    (&tmpRead_1c);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Logic: '<S45>/LogicalOperator' incorporates:
   *  Constant: '<S94>/Constant'
   *  Delay: '<S45>/Delay1'
   *  RelationalOperator: '<S94>/Compare'
   */
  rtb_LogicalOperator_odtu = ((CtAp_DCComM_ARID_DEF.Delay1_DSTATE_nerz <
    ((uint16_T)DCComM_Cyc250ms)) && tmpRead_1c);

  /* Sum: '<S45>/Add' incorporates:
   *  Constant: '<S45>/Define'
   *  Delay: '<S45>/Delay'
   */
  rtb_Add_brlj = (uint16_T)((uint32_T)((uint16_T)DCComM_dt) + (uint32_T)
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_h4rw);

  /* Outputs for Atomic SubSystem: '<S45>/If' */
  /* Delay: '<S45>/Delay' incorporates:
   *  Constant: '<S45>/Define1'
   */
  CtAp_DCComM_ARID_DEF.Delay_DSTATE_h4rw = CtAp_DCComM_If
    (rtb_LogicalOperator_odtu, rtb_Add_brlj, ((uint16_T)DCComM_U16Zero));

  /* End of Outputs for SubSystem: '<S45>/If' */

  /* Outputs for Enabled SubSystem: '<S1>/BRO' incorporates:
   *  EnablePort: '<S44>/Enable'
   */
  /* RelationalOperator: '<S95>/Compare' incorporates:
   *  Constant: '<S95>/Constant'
   *  Delay: '<S45>/Delay'
   *  Inport: '<Root>/RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum'
   */
  if (CtAp_DCComM_ARID_DEF.Delay_DSTATE_h4rw == ((uint16_T)DCComM_dt)) {
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum
      (&tmpRead_j);

    /* Outport: '<Root>/BRO_BMSChargeReady_BRO_BMSChargeReady' incorporates:
     *  DataTypeConversion: '<S44>/DataTypeConversion'
     *  Inport: '<Root>/RTE_R_DCChrMgmt_BROPrepFinshd_Enum_tec_DCChrMgmt_BROPrepFinshd_Enum'
     */
    (void)Rte_Write_BRO_BMSChargeReady_BRO_BMSChargeReady((BRO_BMSChargeReady)
      tmpRead_j);
  }

  /* End of RelationalOperator: '<S95>/Compare' */
  /* End of Outputs for SubSystem: '<S1>/BRO' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg' */
  (void)Rte_Read_RTE_R_DCChrMgmt_TxSts_Flg_tec_DCChrMgmt_TxBSTSts_Flg
    (&tmpRead_1f);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Outputs for Enabled SubSystem: '<S1>/BST' incorporates:
   *  EnablePort: '<S50>/Enable'
   */
  if (tmpRead_1f) {
    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTUDcErrSts_Enum_tec_DCChrMgmt_BSTUDcErrSts_Enum
      (&tmpRead_15);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTRchTarTotUDc_Enum_tec_DCChrMgmt_BSTRchTarTotUDc_Enum
      (&tmpRead_14);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTRchTarSOC_Enum_tec_DCChrMgmt_BSTRchTarSOC_Enum
      (&tmpRead_13);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTRchTarCellUDc_Enum_tec_DCChrMgmt_BSTRchTarCellUDc_Enum
      (&tmpRead_12);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTOutpCnctOvrTemp_Enum_tec_DCChrMgmt_BSTOutpCnctOvrTemp_Enum
      (&tmpRead_11);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTOtherErr_Enum_tec_DCChrMgmt_BSTOtherErr_Enum
      (&tmpRead_10);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTIRErrStopSts_Enum_tec_DCChrMgmt_BSTIRErrStopSts_Enum
      (&tmpRead_z);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTIDcErrSts_Enum_tec_DCChrMgmt_BSTIDcErrSts_Enum
      (&tmpRead_y);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTHvRlyErrSts_Enum_tec_DCChrMgmt_BSTHvRlyErrSts_Enum
      (&tmpRead_x);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTChrgrStopSts_Enum_tec_DCChrMgmt_BSTChrgrStopSts_Enum
      (&tmpRead_w);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTChrgPrmErr_Enum_tec_DCChrMgmt_BSTChrgPrmErr_Enum
      (&tmpRead_v);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTChrgCnctErrSts_Enum_tec_DCChrMgmt_BSTChrgCnctErrSts_Enum
      (&tmpRead_u);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTChkCC2UDcErr_Enum_tec_DCChrMgmt_BSTChkCC2UDcErr_Enum
      (&tmpRead_t);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTBMSCnctOvrTemp_Enum_tec_DCChrMgmt_BSTBMSCnctOvrTemp_Enum
      (&tmpRead_s);

    /* Inport: '<Root>/RTE_R_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum' */
    (void)
      Rte_Read_RTE_R_DCChrMgmt_BSTBattOvrTempErr_Enum_tec_DCChrMgmt_BSTBattOvrTempErr_Enum
      (&tmpRead_r);

    /* Outport: '<Root>/BST_Abortmanoperate_BST_Abortmanoperate' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion'
     */
    (void)Rte_Write_BST_Abortmanoperate_BST_Abortmanoperate((BST_Abortmanoperate)
      tmpRead_w);

    /* Outport: '<Root>/BST_AbortAchiveSOC_BST_AbortAchiveSOC' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion1'
     */
    (void)Rte_Write_BST_AbortAchiveSOC_BST_AbortAchiveSOC((BST_AbortAchiveSOC)
      tmpRead_13);

    /* Outport: '<Root>/BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion2'
     */
    (void)Rte_Write_BST_AbortFaultBatteryTemp_BST_AbortFaultBatteryTemp
      ((BST_AbortFaultBatteryTemp)tmpRead_r);

    /* Outport: '<Root>/BST_AbortFaultInsulation_BST_AbortFaultInsulation' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion3'
     */
    (void)Rte_Write_BST_AbortFaultInsulation_BST_AbortFaultInsulation
      ((BST_AbortFaultInsulation)tmpRead_z);

    /* Outport: '<Root>/BST_AbortErrorCurrent_BST_AbortErrorCurrent' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion4'
     */
    (void)Rte_Write_BST_AbortErrorCurrent_BST_AbortErrorCurrent
      ((BST_AbortErrorCurrent)tmpRead_y);

    /* Outport: '<Root>/BST_AbortFaultConnector_BST_AbortFaultConnector' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion6'
     */
    (void)Rte_Write_BST_AbortFaultConnector_BST_AbortFaultConnector
      ((BST_AbortFaultConnector)tmpRead_u);

    /* Outport: '<Root>/BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion5'
     */
    (void)Rte_Write_BST_AbortFaultConnectorTemp_BST_AbortFaultConnectorTemp
      ((BST_AbortFaultConnectorTemp)tmpRead_11);

    /* Outport: '<Root>/BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion7'
     */
    (void)Rte_Write_BST_AbortAchiveTotalVolt_BST_AbortAchiveTotalVolt
      ((BST_AbortAchiveTotalVolt)tmpRead_14);

    /* Outport: '<Root>/BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion8'
     */
    (void)Rte_Write_BST_AbortAchiveSingleVolt_BST_AbortAchiveSingleVolt
      ((BST_AbortAchiveSingleVolt)tmpRead_12);

    /* Outport: '<Root>/BST_AbortErrorVoltage_BST_AbortErrorVoltage' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion9'
     */
    (void)Rte_Write_BST_AbortErrorVoltage_BST_AbortErrorVoltage
      ((BST_AbortErrorVoltage)tmpRead_15);

    /* Outport: '<Root>/BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion10'
     */
    (void)Rte_Write_BST_AbortFaultBMSTemp_BST_AbortFaultBMSTemp
      ((BST_AbortFaultBMSTemp)tmpRead_s);

    /* Outport: '<Root>/BST_Abortdet2Voltexception_BST_Abortdet2Voltexception' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion11'
     */
    (void)Rte_Write_BST_Abortdet2Voltexception_BST_Abortdet2Voltexception
      ((BST_Abortdet2Voltexception)tmpRead_t);

    /* Outport: '<Root>/BST_AbortHVrelayfault_BST_AbortHVrelayfault' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion12'
     */
    (void)Rte_Write_BST_AbortHVrelayfault_BST_AbortHVrelayfault
      ((BST_AbortHVrelayfault)tmpRead_x);

    /* Outport: '<Root>/BST_AbortFaultOther_BST_AbortFaultOther' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion13'
     */
    (void)Rte_Write_BST_AbortFaultOther_BST_AbortFaultOther((BST_AbortFaultOther)
      tmpRead_10);

    /* Outport: '<Root>/BST_AbortChargparameter_BST_AbortChargparameter' incorporates:
     *  DataTypeConversion: '<S50>/DataTypeConversion14'
     */
    (void)Rte_Write_BST_AbortChargparameter_BST_AbortChargparameter
      ((BST_AbortChargparameter)tmpRead_v);
  }

  /* End of Outputs for SubSystem: '<S1>/BST' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Inport: '<Root>/CST_AbortAchiveCondition_CST_AbortAchiveCondition' */
  (void)Rte_Read_CST_AbortAchiveCondition_CST_AbortAchiveCondition(&tmpRead_a);

  /* Inport: '<Root>/CSD_ChargerNo_CSD_ChargerNo' */
  (void)Rte_Read_CSD_ChargerNo_CSD_ChargerNo(&tmpRead_9);

  /* Inport: '<Root>/CRO_ChargerReady_CRO_ChargerReady' */
  (void)Rte_Read_CRO_ChargerReady_CRO_ChargerReady(&tmpRead_8);

  /* Inport: '<Root>/CRM_RecognitionResult_CRM_RecognitionResult' */
  (void)Rte_Read_CRM_RecognitionResult_CRM_RecognitionResult(&tmpRead_7);

  /* Inport: '<Root>/CML_OutpuVoltageMax_CML_OutpuVoltageMax' */
  (void)Rte_Read_CML_OutpuVoltageMax_CML_OutpuVoltageMax(&tmpRead_6);

  /* Inport: '<Root>/CML_OutputVoltageMin_CML_OutputVoltageMin' */
  (void)Rte_Read_CML_OutputVoltageMin_CML_OutputVoltageMin(&tmpRead_5);

  /* Inport: '<Root>/CML_OutputCurrentMin_CML_OutputCurrentMin' */
  (void)Rte_Read_CML_OutputCurrentMin_CML_OutputCurrentMin(&tmpRead_4);

  /* Inport: '<Root>/CML_OutputCurrentMax_CML_OutputCurrentMax' */
  (void)Rte_Read_CML_OutputCurrentMax_CML_OutputCurrentMax(&tmpRead_3);

  /* Inport: '<Root>/CHM_ProtocolVersion_CHM_ProtocolVersion' */
  (void)Rte_Read_CHM_ProtocolVersion_CHM_ProtocolVersion(&tmpRead_2);

  /* Inport: '<Root>/CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout' */
  (void)Rte_Read_CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout
    (&tmpRead_1);

  /* Inport: '<Root>/CCS_OutputVoltage_CCS_OutputVoltage' */
  (void)Rte_Read_CCS_OutputVoltage_CCS_OutputVoltage(&tmpRead_0);

  /* Inport: '<Root>/CCS_OutputCurrent_CCS_OutputCurrent' */
  (void)Rte_Read_CCS_OutputCurrent_CCS_OutputCurrent(&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/DCCom_RxSigManage' */
  /* Outputs for Atomic SubSystem: '<S73>/ATOM_OffDelay' */
  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg' incorporates:
   *  Constant: '<S73>/Define10'
   *  Constant: '<S73>/Define8'
   *  Constant: '<S73>/Define9'
   */
  tmpWrite = CtAp_DCComM_ATOM_OffDelay(tmpIsUpdated_1, ((uint16_T)DCComM_Cyc50ms),
    ((uint16_T)DCComM_dt), ((uint16_T)DCComM_U16Zero),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay);

  /* End of Outputs for SubSystem: '<S73>/ATOM_OffDelay' */

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_OffDelay1' */
  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg' incorporates:
   *  Constant: '<S73>/Define11'
   *  Constant: '<S73>/Define12'
   *  Constant: '<S73>/Define13'
   */
  tmpWrite_1 = CtAp_DCComM_ATOM_OffDelay(tmpIsUpdated_3, ((uint16_T)
    DCComM_Cyc50ms), ((uint16_T)DCComM_dt), ((uint16_T)DCComM_U16Zero),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay1);

  /* End of Outputs for SubSystem: '<S73>/ATOM_OffDelay1' */

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_OffDelay7' */
  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg' incorporates:
   *  Constant: '<S73>/Define29'
   *  Constant: '<S73>/Define30'
   *  Constant: '<S73>/Define31'
   */
  tmpWrite_0 = CtAp_DCComM_ATOM_OffDelay(tmpIsUpdated_2, ((uint16_T)
    DCComM_Cyc50ms), ((uint16_T)DCComM_dt), ((uint16_T)DCComM_U16Zero),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay7);

  /* End of Outputs for SubSystem: '<S73>/ATOM_OffDelay7' */

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_OffDelay4' */
  /* Constant: '<S73>/Define22' incorporates:
   *  Constant: '<S73>/Define20'
   *  Constant: '<S73>/Define21'
   */
  rtb_RelationalOperator1_mhtt = CtAp_DCComM_ATOM_OffDelay(tmpIsUpdated_5,
    ((uint16_T)DCComM_Cyc50ms), ((uint16_T)DCComM_dt), ((uint16_T)DCComM_U16Zero),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay4);

  /* End of Outputs for SubSystem: '<S73>/ATOM_OffDelay4' */

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_OffDelay2' */
  /* Constant: '<S73>/Define16' incorporates:
   *  Constant: '<S73>/Define14'
   *  Constant: '<S73>/Define15'
   */
  rtb_RelationalOperator1_bb55 = CtAp_DCComM_ATOM_OffDelay(tmpIsUpdated_4,
    ((uint16_T)DCComM_Cyc50ms), ((uint16_T)DCComM_dt), ((uint16_T)DCComM_U16Zero),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay2);

  /* End of Outputs for SubSystem: '<S73>/ATOM_OffDelay2' */

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_OffDelay5' */
  /* Constant: '<S73>/Define25' incorporates:
   *  Constant: '<S73>/Define23'
   *  Constant: '<S73>/Define24'
   */
  rtb_RelationalOperator1_ac55 = CtAp_DCComM_ATOM_OffDelay(tmpIsUpdated_6,
    ((uint16_T)DCComM_Cyc50ms), ((uint16_T)DCComM_dt), ((uint16_T)DCComM_U16Zero),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay5);

  /* End of Outputs for SubSystem: '<S73>/ATOM_OffDelay5' */

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_OffDelay6' */
  /* Constant: '<S73>/Define28' incorporates:
   *  Constant: '<S73>/Define26'
   *  Constant: '<S73>/Define27'
   */
  rtb_RelationalOperator1_l0fr = CtAp_DCComM_ATOM_OffDelay(tmpIsUpdated_0,
    ((uint16_T)DCComM_Cyc50ms), ((uint16_T)DCComM_dt), ((uint16_T)DCComM_U16Zero),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay6);

  /* End of Outputs for SubSystem: '<S73>/ATOM_OffDelay6' */

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_OffDelay3' */
  /* Constant: '<S73>/Define19' incorporates:
   *  Constant: '<S73>/Define17'
   *  Constant: '<S73>/Define18'
   */
  rtb_RelationalOperator1_du25 = CtAp_DCComM_ATOM_OffDelay(tmpIsUpdated,
    ((uint16_T)DCComM_Cyc50ms), ((uint16_T)DCComM_dt), ((uint16_T)DCComM_U16Zero),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay3);

  /* End of Outputs for SubSystem: '<S73>/ATOM_OffDelay3' */

  /* DataTypeConversion: '<S73>/DataTypeConversion7' */
  rtb_DataTypeConversion7 = (real32_T)tmpRead_3;

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead3' */
  /* Constant: '<S73>/Define6' incorporates:
   *  Constant: '<S73>/Define7'
   */
  rtb_Product1_c4ll = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion7,
    DCComM_Resolution_01, DCComM_Offset_Minus400);

  /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead3' */

  /* DataTypeConversion: '<S73>/DataTypeConversion9' */
  rtb_DataTypeConversion9 = (real32_T)tmpRead_5;

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead1' */
  /* Constant: '<S73>/Define2' incorporates:
   *  Constant: '<S73>/Define3'
   */
  rtb_Product1_mzhh = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion9,
    DCComM_Resolution_01, DCComM_Offset_0);

  /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead1' */

  /* DataTypeConversion: '<S73>/DataTypeConversion8' */
  rtb_DataTypeConversion8 = (real32_T)tmpRead_4;

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead2' */
  /* Constant: '<S73>/Define4' incorporates:
   *  Constant: '<S73>/Define5'
   */
  rtb_Product1_myht = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion8,
    DCComM_Resolution_01, DCComM_Offset_Minus400);

  /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead2' */

  /* DataTypeConversion: '<S73>/DataTypeConversion10' */
  rtb_DataTypeConversion10 = (real32_T)tmpRead_6;

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead' */
  /* Constant: '<S73>/Define' incorporates:
   *  Constant: '<S73>/Define1'
   */
  rtb_Product1_nwhj = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion10,
    DCComM_Resolution_01, DCComM_Offset_0);

  /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead' */

  /* DataTypeConversion: '<S73>/DataTypeConversion2' incorporates:
   *  Inport: '<Root>/CCS_OutputVoltage_CCS_OutputVoltage'
   */
  rtb_DataTypeConversion2_hbdi = (real32_T)tmpRead_0;

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead4' */
  /* Constant: '<S73>/Define32' incorporates:
   *  Constant: '<S73>/Define33'
   */
  rtb_Product1_clis = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion2_hbdi,
    DCComM_Resolution_01, DCComM_Offset_0);

  /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead4' */

  /* DataTypeConversion: '<S73>/DataTypeConversion17' incorporates:
   *  Inport: '<Root>/CCS_OutputCurrent_CCS_OutputCurrent'
   */
  rtb_DataTypeConversion17 = (real32_T)tmpRead;

  /* Outputs for Atomic SubSystem: '<S73>/ATOM_SignalRead5' */
  /* Constant: '<S73>/Define34' incorporates:
   *  Constant: '<S73>/Define35'
   */
  rtb_Product1 = CtAp_DCComM_ATOM_SignalRead(rtb_DataTypeConversion17,
    DCComM_Resolution_01, DCComM_Offset_Minus400);

  /* End of Outputs for SubSystem: '<S73>/ATOM_SignalRead5' */

  /* DataTypeConversion: '<S73>/DataTypeConversion6' incorporates:
   *  Inport: '<Root>/CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout'
   */
  u1 = (uint16_T)tmpRead_1;

  /* MinMax: '<S73>/MinMax' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion16'
   *  DataTypeConversion: '<S73>/DataTypeConversion6'
   *  Inport: '<Root>/CEM_BatteryChargeRequireTimeout_CEM_BatteryChargeRequireTimeout'
   *  Inport: '<Root>/CHM_ProtocolVersion_CHM_ProtocolVersion'
   */
  if ((uint16_T)tmpRead_2 >= (uint16_T)tmpRead_1) {
    u1 = (uint16_T)tmpRead_2;
  }

  /* DataTypeConversion: '<S73>/DataTypeConversion4' incorporates:
   *  Inport: '<Root>/CST_AbortAchiveCondition_CST_AbortAchiveCondition'
   */
  tmpRead_6 = (uint16_T)tmpRead_a;

  /* MinMax: '<S73>/MinMax' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion4'
   *  DataTypeConversion: '<S73>/DataTypeConversion5'
   *  Inport: '<Root>/CST_AbortAchiveCondition_CST_AbortAchiveCondition'
   */
  if (u1 >= (uint16_T)tmpRead_a) {
    tmpRead_6 = u1;
  }

  if (tmpRead_6 >= (uint16_T)tmpRead_9) {
    /* MinMax: '<S73>/MinMax' */
    rtb_MinMax = tmpRead_6;
  } else {
    /* MinMax: '<S73>/MinMax' */
    rtb_MinMax = (uint16_T)tmpRead_9;
  }

  /* End of Outputs for SubSystem: '<S1>/DCCom_RxSigManage' */

  /* Update for Delay: '<S4>/Delay' incorporates:
   *  Delay: '<S4>/Delay1'
   */
  CtAp_DCComM_ARID_DEF.Delay_DSTATE = CtAp_DCComM_ARID_DEF.Delay1_DSTATE;

  /* Update for Delay: '<S70>/Delay1' incorporates:
   *  Delay: '<S70>/Delay'
   */
  CtAp_DCComM_ARID_DEF.Delay1_DSTATE_dphr =
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_cx5r;

  /* Update for Delay: '<S71>/Delay1' incorporates:
   *  Delay: '<S71>/Delay'
   */
  CtAp_DCComM_ARID_DEF.Delay1_DSTATE_cq4g =
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_bygu;

  /* Update for Delay: '<S72>/Delay1' incorporates:
   *  Delay: '<S72>/Delay'
   */
  CtAp_DCComM_ARID_DEF.Delay1_DSTATE_aito =
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_pdvw;

  /* Update for Delay: '<S47>/Delay1' incorporates:
   *  Delay: '<S47>/Delay'
   */
  CtAp_DCComM_ARID_DEF.Delay1_DSTATE_g1oe =
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_iudh;

  /* Update for Delay: '<S49>/Delay1' incorporates:
   *  Delay: '<S49>/Delay'
   */
  CtAp_DCComM_ARID_DEF.Delay1_DSTATE_h1k3 =
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_eyz2;

  /* Update for Delay: '<S25>/Delay1' incorporates:
   *  Delay: '<S25>/Delay'
   */
  CtAp_DCComM_ARID_DEF.Delay1_DSTATE_p2kp =
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_fsku;

  /* Update for Delay: '<S27>/Delay1' incorporates:
   *  Delay: '<S27>/Delay'
   */
  CtAp_DCComM_ARID_DEF.Delay1_DSTATE_cww3 =
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_dwor;

  /* Update for Delay: '<S45>/Delay1' incorporates:
   *  Delay: '<S45>/Delay'
   */
  CtAp_DCComM_ARID_DEF.Delay1_DSTATE_nerz =
    CtAp_DCComM_ARID_DEF.Delay_DSTATE_h4rw;

  /* Outputs for Atomic SubSystem: '<S1>/DCCom_RxSigManage' */
  /* Outport: '<Root>/RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion15'
   */
  (void)Rte_Write_RTE_P_ComM_CCSOutpIDc_A_tec_ComM_CCSOutpIDc_A(rtb_Product1);

  /* Outport: '<Root>/RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion3'
   */
  (void)Rte_Write_RTE_P_ComM_CCSOutpUDc_V_tec_ComM_CCSOutpUDc_V
    (rtb_Product1_clis);

  /* Outport: '<Root>/RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A' incorporates:
   *  DataTypeConversion: '<S73>/Data Type Conversion4'
   */
  (void)Rte_Write_RTE_P_ComM_CMLMaxOutpIDc_A_tec_ComM_CMLMaxOutpIDc_A
    (rtb_Product1_c4ll);

  /* Outport: '<Root>/RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V' incorporates:
   *  DataTypeConversion: '<S73>/Data Type Conversion1'
   */
  (void)Rte_Write_RTE_P_ComM_CMLMaxOutpUDc_V_tec_ComM_CMLMaxOutpUDc_V
    (rtb_Product1_nwhj);

  /* Outport: '<Root>/RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A' incorporates:
   *  DataTypeConversion: '<S73>/Data Type Conversion3'
   */
  (void)Rte_Write_RTE_P_ComM_CMLMinOutpIDc_A_tec_ComM_CMLMinOutpIDc_A
    (rtb_Product1_myht);

  /* Outport: '<Root>/RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V' incorporates:
   *  DataTypeConversion: '<S73>/Data Type Conversion2'
   */
  (void)Rte_Write_RTE_P_ComM_CMLMinOutpUDc_V_tec_ComM_CMLMinOutpUDc_V
    (rtb_Product1_mzhh);

  /* Outport: '<Root>/RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum' incorporates:
   *  DataTypeConversion: '<S73>/Data Type Conversion'
   */
  (void)Rte_Write_RTE_P_ComM_CRMRecgRes_Enum_tec_ComM_CRMRecgRes_Enum((uint8_T)
    tmpRead_7);

  /* Outport: '<Root>/RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion'
   *  Inport: '<Root>/CRO_ChargerReady_CRO_ChargerReady'
   */
  (void)Rte_Write_RTE_P_ComM_CROPrepRdy_Enum_tec_ComM_CROPrepRdy_Enum((uint8_T)
    tmpRead_8);

  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion1'
   */
  (void)Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCCSSts_Flg
    (rtb_RelationalOperator1_du25);

  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion11'
   */
  (void)Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCEMSts_Flg
    (rtb_RelationalOperator1_l0fr);

  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion14'
   */
  (void)Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCROSts_Flg
    (rtb_RelationalOperator1_bb55);

  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion13'
   */
  (void)Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSDSts_Flg
    (rtb_RelationalOperator1_mhtt);

  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg' incorporates:
   *  DataTypeConversion: '<S73>/DataTypeConversion12'
   */
  (void)Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCSTSts_Flg
    (rtb_RelationalOperator1_ac55);

  /* End of Outputs for SubSystem: '<S1>/DCCom_RxSigManage' */
  /* End of Outputs for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */

  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg' */
  (void)Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCHMSts_Flg(tmpWrite);

  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg' */
  (void)Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCMLSts_Flg(tmpWrite_0);

  /* Outport: '<Root>/RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg' */
  (void)Rte_Write_RTE_P_ComM_RxSts_Flg_tec_ComM_RxCRMSts_Flg(tmpWrite_1);
}

#define CtAp_DCComM_STOP_SEC_CODE
#include "CtAp_DCComM_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_DCComM_START_SEC_VAR_CONST_8
#include "CtAp_DCComM_MemMap.h"

void R_DCComM_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  DCChrMgmt_BRMComVers_Enum = 0U;
  ComM_BMSBattmanfr_Enum = 0U;
  DCChrMgmt_BRMBattmanfr_Enum = 0U;
  DCChrMgmt_BCPMaxCellChrgUDc_V = 0.0F;
  DCChrMgmt_BCPMaxChrgIDc_A = 0.0F;
  ComM_MaxCellTemp_C = 0.0F;
  DCChrMgmt_BSMMaxCellTemp_C = 0.0F;
  ComM_MinCellTemp_C = 0.0F;
  DCChrMgmt_BSMMinCellTemp_C = 0.0F;
  DCChrMgmt_BSDFinshdSOC_pct = 0.0F;
  DCChrMgmt_BSDBattMaxTemp_C = 0.0F;
  DCChrMgmt_BSDBattMinTemp_C = 0.0F;
  DCChrMgmt_BSDBattMinCellUDc_V = 0.0F;
  DCChrMgmt_BSDBattMaxCellUDc_V = 0.0F;
  DCChrMgmt_BHMMaxChrgUDc_V = 0.0F;
  DCChrMgmt_BCSBattSOC_pct = 0.0F;
  ComM_BattMaxCellUDc_V = 0.0F;
  DCChrMgmt_BCSMaxCellUDc_V = 0.0F;
  DCChrMgmt_BCSMeasdChrgnIDc_A = 0.0F;
  ComM_BMSBattDispSOC_pct = 0.0F;
  DCChrMgmt_BCPBattSOC_pct = 0.0F;
  ComM_BMSBattMaxChrgTemp_C = 0.0F;
  DCChrMgmt_BCPMaxChrgTemp_C = 0.0F;
  DCChrMgmt_BCPMaxChrgUDc_V = 0.0F;
  ComM_BMSBattRateUDc_V = 0U;
  DCChrMgmt_BRMBattRateUDc_V = 0U;
  ComM_BMSBattRateCp_Ah = 0U;
  DCChrMgmt_BRMBattRateCp_Ah = 0U;
  ComM_BMSBattManfYr_Enum = 0U;
  DCChrMgmt_BRMBattManfYr_Enum = 0U;
  DCChrMgmt_BRMBattCod_Enum = 0U;
  ComM_BMSBattChrgCnt_Tms = 0U;
  DCChrMgmt_BRMBattChrgCnt_Tms = 0U;
  ChrgMgmt_ChrgnRemnTim_min = 0U;
  DCChrMgmt_BCSRmgChrgnTim_min = 0U;
  ComM_PODDCFCUDc_V = 0U;
  DCChrMgmt_BCSMeasdChrgnUDc_V = 0U;
  ComM_MaxCellUDcModlNr_Enum = 0U;
  DCChrMgmt_BCSMaxCellUDcGroup_Enum = 0U;
  ComM_BMSBattPckUDc_V = 0U;
  DCChrMgmt_BCPBattUDc_V = 0U;
  ComM_BMSBattRateEgy_kWh = 0U;
  DCChrMgmt_BCPBattRateEgy_kWh = 0U;
  DCChrMgmt_BRMBattResv_Enum = 0U;
  DCChrMgmt_BRMVehCod17 = 0U;
  ComM_BMSBattTyp_Enum = 0U;
  DCChrMgmt_BRMBattTyp_Enum = 0U;
  ComM_BMSBattPpty_Enum = 0U;
  DCChrMgmt_BRMBattPpty_Enum = 0U;
  ComM_BMSBattManfMth_Enum = 0U;
  DCChrMgmt_BRMBattManfMth_Enum = 0U;
  ComM_BMSBattManfDay_Enum = 0U;
  DCChrMgmt_BRMBattManfDay_Enum = 0U;
  ComM_MinCellTempNr_Enum = 0U;
  DCChrMgmt_BSMMinCellTempNr_Enum = 0U;
  ComM_MaxCellTempNr_Enum = 0U;
  DCChrMgmt_BSMMaxCellTempNr_Enum = 0U;
  DCChrMgmt_BSMChrgAllow_Enum = 0U;

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      DCChrMgmt_BRMVehCod9_16[i] = 0U;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 8; i++) {
      DCChrMgmt_BRMVehCod1_8[i] = 0U;
    }
  }

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_DCComM_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_DCComM_T));

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
  /* SystemInitialize for Enabled SubSystem: '<S1>/BCL' */
  /* SystemInitialize for Outport: '<Root>/BCL_ChargeMode_BCL_ChargeMode' incorporates:
   *  Outport: '<S3>/BCL_ChargeMode_BCL_ChargeMode_write'
   */
  (void)Rte_Write_BCL_ChargeMode_BCL_ChargeMode(Cx01_ae_);

  /* End of SystemInitialize for SubSystem: '<S1>/BCL' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/DCCom_RxSigManage' */
  /* SystemInitialize for Atomic SubSystem: '<S73>/ATOM_OffDelay' */
  CtAp_DCComM_ATOM_OffDelay_Init(((uint16_T)0U),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay);

  /* End of SystemInitialize for SubSystem: '<S73>/ATOM_OffDelay' */

  /* SystemInitialize for Atomic SubSystem: '<S73>/ATOM_OffDelay1' */
  CtAp_DCComM_ATOM_OffDelay_Init(((uint16_T)0U),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay1);

  /* End of SystemInitialize for SubSystem: '<S73>/ATOM_OffDelay1' */

  /* SystemInitialize for Atomic SubSystem: '<S73>/ATOM_OffDelay7' */
  CtAp_DCComM_ATOM_OffDelay_Init(((uint16_T)0U),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay7);

  /* End of SystemInitialize for SubSystem: '<S73>/ATOM_OffDelay7' */

  /* SystemInitialize for Atomic SubSystem: '<S73>/ATOM_OffDelay4' */
  CtAp_DCComM_ATOM_OffDelay_Init(((uint16_T)0U),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay4);

  /* End of SystemInitialize for SubSystem: '<S73>/ATOM_OffDelay4' */

  /* SystemInitialize for Atomic SubSystem: '<S73>/ATOM_OffDelay2' */
  CtAp_DCComM_ATOM_OffDelay_Init(((uint16_T)0U),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay2);

  /* End of SystemInitialize for SubSystem: '<S73>/ATOM_OffDelay2' */

  /* SystemInitialize for Atomic SubSystem: '<S73>/ATOM_OffDelay5' */
  CtAp_DCComM_ATOM_OffDelay_Init(((uint16_T)0U),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay5);

  /* End of SystemInitialize for SubSystem: '<S73>/ATOM_OffDelay5' */

  /* SystemInitialize for Atomic SubSystem: '<S73>/ATOM_OffDelay6' */
  CtAp_DCComM_ATOM_OffDelay_Init(((uint16_T)0U),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay6);

  /* End of SystemInitialize for SubSystem: '<S73>/ATOM_OffDelay6' */

  /* SystemInitialize for Atomic SubSystem: '<S73>/ATOM_OffDelay3' */
  CtAp_DCComM_ATOM_OffDelay_Init(((uint16_T)0U),
    &CtAp_DCComM_ARID_DEF.ARID_DEF_ATOM_OffDelay3);

  /* End of SystemInitialize for SubSystem: '<S73>/ATOM_OffDelay3' */
  /* End of SystemInitialize for SubSystem: '<S1>/DCCom_RxSigManage' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_DCComM_Cyclic_10ms_sys' */
}

#define CtAp_DCComM_STOP_SEC_VAR_CONST_8
#include "CtAp_DCComM_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
