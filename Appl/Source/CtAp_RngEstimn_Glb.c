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
 *  Filename:           CtAp_RngEstimn_Glb.c
 *  File Creation Date: 08-Aug-2025
 *  Model Name:         CtAp_RngEstimn
 *  Model Version:      1.145
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:48 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Fri Aug  8 09:14:18 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Fri Aug 08 09:13:21 2025
 *
 *
 *******************************************************************************/
#include "CtAp_RngEstimn_Glb.h"
#include "rtwtypes.h"
#include "CtAp_RngEstimn_types.h"

/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/*if not init use it */
#define CtAp_RngEstimn_START_SEC_VAR_NOINIT_8
#include "CtAp_RngEstimn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
uint32_T RngEstimn_BMSBattIDcIntglR_As;
                                     /* NVM read RngEstimn_BMSBattIDcIntgl_As */
uint32_T RngEstimn_BMSBattIDcIntglSum_As;
                                     /* dynamic mileage Algorithm denominator */
uint32_T RngEstimn_BMSBattIDcIntgl_As;
                                    /* NVM write RngEstimn_BMSBattIDcIntgl_As */
real32_T RngEstimn_BMSBattIDc_A;       /* RngEstimn BMSBattIDc A */
real32_T RngEstimn_BMSBattRemnCp_As;   /* battery remaining capacity */
real32_T RngEstimn_BattCurrIntegral2kmArrayInfo[25];/* ComM_BMSBattDispSOC_pct */
real32_T RngEstimn_BattCurrIntegral50kmInfo_SUM;
                                     /* dynamic mileage Algorithm denominator */
uint16_T RngEstimn_DynDrvMilgFormal2Info;
                                     /* dynamic mileage Algorithm denominator */
real32_T RngEstimn_DynDrvMilgFormal2Info_PRO;
                                     /* dynamic mileage Algorithm denominator */
real32_T RngEstimn_DynDrvMilg_m;       /* dynamic drive mileage */
boolean_T RngEstimn_DynMilgVld_Flg;    /* Dynamic Mileage valid  status */
boolean_T RngEstimn_IntglVld_Flg;
                   /* BMS Current Integration  and mileage calculation status */
uint32_T RngEstimn_MilgIntglR_m;       /* NVM read RngEstimn_AccuMilg_m */
uint32_T RngEstimn_MilgIntglSum_m;/* dynamic mileage Algorithm molecular term */
uint32_T RngEstimn_MilgIntgl_m;        /* NVM write RngEstimn_AccuMilg_m */
real32_T RngEstimn_PrevBMSBattIDcIntglNoNvm_As;/* last clcle bms idc intergration */
uint16_T RngEstimn_StdDrvMilg_km;      /* vcu standard  Mileage */
real32_T RngEstimn_VehEgyCns_mpAs;
                              /* The energy consumed per meter by the vehicle */
real32_T RngEstimn_VehSpd_kph;         /* RngEstimn VehSpd kph */

#define CtAp_RngEstimn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_RngEstimn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
