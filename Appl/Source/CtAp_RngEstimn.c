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
 *  Filename:           CtAp_RngEstimn.c
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
#include "CtAp_RngEstimn.h"
#include "rtwtypes.h"
#include "CtAp_RngEstimn_private.h"
#include <math.h>
#include <string.h>
#include "Rte_Type.h"
#include "look1_iflf_binlca.h"
#include "CtAp_RngEstimn_Glb.h"
#include "CtAp_RngEstimn_Cal.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Exported data definition */
#define CtAp_RngEstimn_START_SEC_VAR_NOINIT_8
#include "CtAp_RngEstimn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: Localizable_AtomAutoSar */
static real32_T RngEstimn_PrevMilgIntgl_m;/* '<S16>/RngEstimn_PrevMilgIntgl_m' */

/* last clcle Mileage accumulated */
#define CtAp_RngEstimn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_RngEstimn_MemMap.h"     /* PRQA S 5087 *//* MD_MSR_MemMap */

/* PublicStructure Variables for Internal Data */
#define CtAp_RngEstimn_START_SEC_VAR_NOINIT_8
#include "CtAp_RngEstimn_MemMap.h"

ARID_DEF_CtAp_RngEstimn_T CtAp_RngEstimn_ARID_DEF;

#define CtAp_RngEstimn_STOP_SEC_VAR_NOINIT_8
#include "CtAp_RngEstimn_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* System initialize for atomic system: '<S8>/ATOM_RS_FF' */
#define CtAp_RngEstimn_START_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"

void CtAp_RngEstimn_ATOM_RS_FF_Init(boolean_T rtp_InitialValue,
  ARID_DEF_ATOM_RS_FF_CtAp_RngE_T *CtAp_RngEstimn__ARID_DEF_arg)
{
  /* InitializeConditions for UnitDelay: '<S32>/UnitDelay1' */
  CtAp_RngEstimn__ARID_DEF_arg->UnitDelay1_DSTATE = rtp_InitialValue;
}

#define CtAp_RngEstimn_STOP_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"

/* Output and update for atomic system: '<S8>/ATOM_RS_FF' */
#define CtAp_RngEstimn_START_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"

boolean_T CtAp_RngEstimn_ATOM_RS_FF(boolean_T rtu_R, boolean_T rtu_S,
  ARID_DEF_ATOM_RS_FF_CtAp_RngE_T *CtAp_RngEstimn__ARID_DEF_arg)
{
  boolean_T rty_Q_0;

  /* Logic: '<S32>/LogOp2' incorporates:
   *  Logic: '<S32>/LogOp'
   *  Logic: '<S32>/LogOp4'
   *  UnitDelay: '<S32>/UnitDelay1'
   */
  rty_Q_0 = (!rtu_R && (rtu_S || CtAp_RngEstimn__ARID_DEF_arg->UnitDelay1_DSTATE));

  /* Update for UnitDelay: '<S32>/UnitDelay1' */
  CtAp_RngEstimn__ARID_DEF_arg->UnitDelay1_DSTATE = rty_Q_0;
  return rty_Q_0;
}

#define CtAp_RngEstimn_STOP_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_RngEstimn_START_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"

void R_RngEstimn_Cyclic_100ms(void)
{
  /* local block i/o variables */
  real32_T RngEstimn_BMSBattIDcIntglNoLmt_As;
  real32_T rtb_Product2;
  boolean_T rtb_RelationalOperator5;
  boolean_T rtb_RelationalOperator4;
  boolean_T rtb_LogOp2;
  boolean_T rtb_Delay;
  dt_Nv_RngEstimnInfo rtb_TmpSignalConversionAtRTE_RP;
  int32_T i_0;
  real32_T rtb_MinMax_me53;
  real32_T rtb_Switch1_igq4;
  real32_T tmpRead;
  real32_T tmpRead_0;
  real32_T tmpRead_1;
  uint16_T rtb_TmpSignalConversionAtR_btwh[25];
  uint16_T rtb_RngEstimn_DynDrvMilg_km;
  uint8_T i;
  uint8_T tmpRead_3;
  boolean_T tmpRead_2;
  boolean_T tmpRead_4;
  boolean_T tmpRead_5;
  boolean_T tmpRead_6;
  boolean_T tmpRead_7;

  /* Inport: '<Root>/RTE_R_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo' */
  (void)Rte_Read_RTE_R_ComM_DCMFRAmbTempInfo_tec_ComM_DCMFRAmbTempInfo
    (&rtb_MinMax_me53);

  /* Inport: '<Root>/RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum' */
  (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(&i);

  /* Inport: '<Root>/RTE_R_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld' */
  (void)Rte_Read_RTE_R_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp' */
  (void)Rte_Read_RTE_R_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp(&rtb_Switch1_igq4);

  /* Inport: '<Root>/RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo' */
  (void)
    Rte_Read_RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo
    (&tmpRead_6);

  /* Inport: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(&tmpRead_4);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph' */
  (void)Rte_Read_RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph
    (&RngEstimn_VehSpd_kph);

  /* Inport: '<Root>/RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' */
  (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg' */
  (void)Rte_Read_RTE_R_ComM_NodComFailr_tec_ComM_BMSNodComFailr_Flg(&tmpRead_2);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah' */
  (void)Rte_Read_RTE_R_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A' */
  (void)Rte_Read_RTE_R_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(&tmpRead_0);

  /* Inport: '<Root>/RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct' */
  (void)Rte_Read_RTE_R_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct
    (&tmpRead);

  /* SignalConversion generated from: '<Root>/RTE_RP_RngEstimnInfo_tec_RngEstimnInfo_read' incorporates:
   *  Inport: '<Root>/RTE_RP_RngEstimnInfo_tec_RngEstimnInfo_read'
   */
  (void)Rte_Read_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo
    (&rtb_TmpSignalConversionAtRTE_RP);

  /* SignalConversion generated from: '<Root>/RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2_read' incorporates:
   *  Inport: '<Root>/RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2_read'
   */
  (void)Rte_Read_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2
    (rtb_TmpSignalConversionAtR_btwh);

  /* Outputs for Atomic SubSystem: '<Root>/R_RngEstimn_Cyclic_100ms_sys' */
  /* Outputs for Atomic SubSystem: '<S6>/Dynamic_Mileage' */
  for (i_0 = 0; i_0 < 25; i_0++) {
    /* Delay: '<S22>/Delay2' incorporates:
     *  DataTypeConversion: '<S22>/DataTypeConversion'
     *  SignalConversion generated from: '<S4>/RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2_read'
     */
    if (CtAp_RngEstimn_ARID_DEF.icLoad) {
      /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
       *
       * Block requirements for '<S2>/CtAp_RngEstimn_Input':
       *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
       *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
       */
      CtAp_RngEstimn_ARID_DEF.Delay2_DSTATE[i_0] = (real32_T)
        rtb_TmpSignalConversionAtR_btwh[i_0];

      /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */
    }

    /* Delay: '<S22>/Delay2' */
    RngEstimn_BattCurrIntegral2kmArrayInfo[i_0] =
      CtAp_RngEstimn_ARID_DEF.Delay2_DSTATE[i_0];
  }

  /* Outputs for Atomic SubSystem: '<S7>/BattValid'
   *
   * Block requirements for '<S7>/BattValid':
   *  1. SWREQ_06042 batter Current   InValid
   *  2. SWREQ_06043 Battery Current   Valid
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
   *
   * Block requirements for '<S2>/CtAp_RngEstimn_Input':
   *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
   *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
   */
  /* Switch: '<S10>/Switch' incorporates:
   *  Abs: '<S10>/Abs'
   *  Constant: '<S19>/Constant'
   *  RelationalOperator: '<S19>/Compare'
   *  SignalConversion: '<S4>/SignalCopy1'
   */
  if ((real_T)fabsf(tmpRead_0) >= 800.0) {
    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S10>/RngEstimn_ZERO'
     */
    RngEstimn_BMSBattIDc_A = RngEstimn_ZERO;
  } else {
    /* Switch: '<S10>/Switch' */
    RngEstimn_BMSBattIDc_A = tmpRead_0;
  }

  /* End of Switch: '<S10>/Switch' */
  /* End of Outputs for SubSystem: '<S7>/BattValid' */

  /* Outputs for Atomic SubSystem: '<S7>/VehicleSeedValid'
   *
   * Block requirements for '<S7>/VehicleSeedValid':
   *  1. SWREQ_06044 Vehicle speed   InValid
   *  2. SWREQ_06045 Vehicle speed   Valid
   */
  /* Switch: '<S18>/Switch' incorporates:
   *  Abs: '<S18>/Abs'
   *  Constant: '<S31>/Constant'
   *  RelationalOperator: '<S31>/Compare'
   *  SignalConversion: '<S4>/SignalCopy5'
   */
  if ((real_T)fabsf(RngEstimn_VehSpd_kph) >= 250.0) {
    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S18>/RngEstimn_ZERO'
     *  Inport: '<Root>/RTE_R_VehMot_VehSpd_kph_tec_VehMot_VehSpd_kph'
     */
    RngEstimn_VehSpd_kph = RngEstimn_ZERO;
  }

  /* End of Switch: '<S18>/Switch' */
  /* End of Outputs for SubSystem: '<S7>/VehicleSeedValid' */

  /* Outputs for Enabled SubSystem: '<S14>/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem' incorporates:
   *  EnablePort: '<S24>/Enable'
   */
  /* Logic: '<S23>/Logical Operator' incorporates:
   *  Constant: '<S23>/RngEstimn_DrvReady'
   *  Constant: '<S23>/RngEstimn_HvReady'
   *  Constant: '<S23>/RngEstimn_OffPlug'
   *  Delay: '<S24>/Delay'
   *  Delay: '<S24>/Delay3'
   *  Logic: '<S23>/Logical Operator1'
   *  Logic: '<S24>/Logical Operator'
   *  RelationalOperator: '<S23>/Relational Operator'
   *  RelationalOperator: '<S23>/Relational Operator1'
   *  RelationalOperator: '<S23>/Relational Operator2'
   *  RelationalOperator: '<S27>/FixPt Relational Operator'
   *  SignalConversion: '<S4>/SignalCopy10'
   *  SignalConversion: '<S4>/SignalCopy4'
   *  UnitDelay: '<S27>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((tmpRead_3 == ((uint8_T)RngEstimn_HvReady)) || (tmpRead_3 == ((uint8_T)
         RngEstimn_DrvReady))) && (i == ((uint8_T)RngEstimn_OffPlug))) {
    real32_T DiscreteTimeIntegrator;
    real32_T RngEstimn_BattCurrIntegralInf_0;
    real32_T RngEstimn_BattCurrIntegralInfo_;
    boolean_T tmp;

    /* Product: '<S24>/Product2' incorporates:
     *  Abs: '<S24>/Abs'
     *  Constant: '<S24>/RngEstimn_kph2kps'
     */
    rtb_Product2 = fabsf(RngEstimn_VehSpd_kph) * RngEstimn_kph2kps;

    /* Delay: '<S24>/Delay' */
    rtb_Delay = CtAp_RngEstimn_ARID_DEF.Delay_DSTATE;

    /* DiscreteIntegrator: '<S24>/Discrete-Time Integrator' incorporates:
     *  DiscreteIntegrator: '<S24>/RngEstimn_BattCurrIntegralInfo_Integrator'
     */
    tmp = !rtb_Delay;
    if (tmp && (CtAp_RngEstimn_ARID_DEF.DiscreteTimeIntegrator_PrevRese == 1)) {
      CtAp_RngEstimn_ARID_DEF.DiscreteTimeIntegrator_DSTATE = 0.0F;
    }

    tmpRead_0 = 0.05F * rtb_Product2;

    /* DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
    DiscreteTimeIntegrator =
      CtAp_RngEstimn_ARID_DEF.DiscreteTimeIntegrator_DSTATE + tmpRead_0;

    /* RelationalOperator: '<S26>/Compare' incorporates:
     *  Constant: '<S26>/Constant'
     *  Delay: '<S24>/Delay'
     */
    CtAp_RngEstimn_ARID_DEF.Delay_DSTATE = (DiscreteTimeIntegrator < (real32_T)
      ((uint16_T)RngEstimn_2KM));

    /* DiscreteIntegrator: '<S24>/RngEstimn_BattCurrIntegralInfo_Integrator' */
    if (tmp && (CtAp_RngEstimn_ARID_DEF.RngEstimn_BattCurrIntegral_dyt0 == 1)) {
      CtAp_RngEstimn_ARID_DEF.RngEstimn_BattCurrIntegral_mbvz = 0.0F;
    }

    RngEstimn_BattCurrIntegralInf_0 = 0.05F * RngEstimn_BMSBattIDc_A;

    /* DiscreteIntegrator: '<S24>/RngEstimn_BattCurrIntegralInfo_Integrator' */
    RngEstimn_BattCurrIntegralInfo_ =
      CtAp_RngEstimn_ARID_DEF.RngEstimn_BattCurrIntegral_mbvz +
      RngEstimn_BattCurrIntegralInf_0;

    /* Outputs for Enabled SubSystem: '<S24>/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem' incorporates:
     *  EnablePort: '<S28>/Enable'
     */
    if (CtAp_RngEstimn_ARID_DEF.Delay3_DSTATE || ((int32_T)
         (CtAp_RngEstimn_ARID_DEF.Delay_DSTATE ? 1 : 0) < (int32_T)
         (CtAp_RngEstimn_ARID_DEF.DelayInput1_DSTATE ? 1 : 0))) {
      real32_T rtb_Divide_i24q;

      /* MinMax: '<S13>/MinMax' incorporates:
       *  Lookup_n-D: '<S28>/RngEstimn_BattCurrIntegralInitInfo_1DTB'
       *  SignalConversion: '<S4>/SignalCopy11'
       */
      rtb_MinMax_me53 = look1_iflf_binlca(rtb_MinMax_me53,
        &RngEstimn_BattCurrIntegralInitXAxis_CFG[0],
        &RngEstimn_BattCurrIntegralInitYAxis_CFG[0], 14U);

      /* Product: '<S9>/Divide' incorporates:
       *  Constant: '<S28>/RngEstimn_BMSBattIDcIntglMaxCoeff_CFG'
       *  Product: '<S28>/RngEstimn_BattCurrIntegralInitInfo_PR'
       */
      rtb_Divide_i24q = RngEstimn_BMSBattIDcIntglMaxCoeff_CFG * rtb_MinMax_me53;

      /* MinMax: '<S13>/MinMax' incorporates:
       *  Constant: '<S28>/RngEstimn_BMSBattIDcIntglMinCoeff_CFG'
       *  Product: '<S28>/Product'
       */
      rtb_MinMax_me53 *= RngEstimn_BMSBattIDcIntglMinCoeff_CFG;

      /* Chart: '<S28>/Chart' */
      if ((uint32_T)CtAp_RngEstimn_ARID_DEF.is_active_c3_CtAp_RngEstimn == 0U) {
        CtAp_RngEstimn_ARID_DEF.is_active_c3_CtAp_RngEstimn = 1U;
        (void)memcpy(&CtAp_RngEstimn_ARID_DEF.RngEst_BattCurrIntegral2kmArray[0],
                     &RngEstimn_BattCurrIntegral2kmArrayInfo[0], 25U * sizeof
                     (real32_T));
      } else {
        for (i = 24U; i >= 1U; i = (uint8_T)((int32_T)((int32_T)i - 1))) {
          CtAp_RngEstimn_ARID_DEF.RngEst_BattCurrIntegral2kmArray[i] =
            CtAp_RngEstimn_ARID_DEF.RngEst_BattCurrIntegral2kmArray[(int32_T)i -
            1];
        }

        /* Switch: '<S30>/Switch2' incorporates:
         *  RelationalOperator: '<S30>/LowerRelop1'
         *  RelationalOperator: '<S30>/UpperRelop'
         *  Switch: '<S30>/Switch'
         */
        if (RngEstimn_BattCurrIntegralInfo_ > rtb_Divide_i24q) {
          CtAp_RngEstimn_ARID_DEF.RngEst_BattCurrIntegral2kmArray[0] =
            rtb_Divide_i24q;
        } else if (RngEstimn_BattCurrIntegralInfo_ < rtb_MinMax_me53) {
          /* Switch: '<S30>/Switch' */
          CtAp_RngEstimn_ARID_DEF.RngEst_BattCurrIntegral2kmArray[0] =
            rtb_MinMax_me53;
        } else {
          CtAp_RngEstimn_ARID_DEF.RngEst_BattCurrIntegral2kmArray[0] =
            RngEstimn_BattCurrIntegralInfo_;
        }

        /* End of Switch: '<S30>/Switch2' */
      }

      /* End of Chart: '<S28>/Chart' */
    }

    /* End of Outputs for SubSystem: '<S24>/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem' */

    /* Update for Delay: '<S24>/Delay3' incorporates:
     *  Constant: '<S24>/Constant1'
     *  Delay: '<S24>/Delay'
     *  Logic: '<S24>/Logical Operator'
     *  RelationalOperator: '<S27>/FixPt Relational Operator'
     *  UnitDelay: '<S27>/Delay Input1'
     *
     * Block description for '<S27>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_RngEstimn_ARID_DEF.Delay3_DSTATE = false;

    /* Update for DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
    CtAp_RngEstimn_ARID_DEF.DiscreteTimeIntegrator_DSTATE =
      DiscreteTimeIntegrator + tmpRead_0;
    CtAp_RngEstimn_ARID_DEF.DiscreteTimeIntegrator_PrevRese = (int8_T)(rtb_Delay
      ? 1 : 0);

    /* Update for UnitDelay: '<S27>/Delay Input1' incorporates:
     *  Delay: '<S24>/Delay'
     *
     * Block description for '<S27>/Delay Input1':
     *
     *  Store in Global RAM
     */
    CtAp_RngEstimn_ARID_DEF.DelayInput1_DSTATE =
      CtAp_RngEstimn_ARID_DEF.Delay_DSTATE;

    /* Update for DiscreteIntegrator: '<S24>/RngEstimn_BattCurrIntegralInfo_Integrator' incorporates:
     *  DiscreteIntegrator: '<S24>/Discrete-Time Integrator'
     */
    CtAp_RngEstimn_ARID_DEF.RngEstimn_BattCurrIntegral_mbvz =
      RngEstimn_BattCurrIntegralInfo_ + RngEstimn_BattCurrIntegralInf_0;
    CtAp_RngEstimn_ARID_DEF.RngEstimn_BattCurrIntegral_dyt0 = (int8_T)(rtb_Delay
      ? 1 : 0);
  }

  /* End of Logic: '<S23>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S14>/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */

  /* Sum: '<S25>/RngEstimn_BattCurrIntegral50kmInfo_SUM' */
  RngEstimn_BattCurrIntegral50kmInfo_SUM = -0.0F;
  for (i_0 = 0; i_0 < 25; i_0++) {
    RngEstimn_BattCurrIntegral50kmInfo_SUM =
      RngEstimn_BattCurrIntegral50kmInfo_SUM +
      CtAp_RngEstimn_ARID_DEF.RngEst_BattCurrIntegral2kmArray[i_0];
  }

  /* End of Sum: '<S25>/RngEstimn_BattCurrIntegral50kmInfo_SUM' */

  /* Outputs for Atomic SubSystem: '<S7>/Dynamic_Mileage_Calculate'
   *
   * Block requirements for '<S7>/Dynamic_Mileage_Calculate':
   *  1. SWREQ_03939 Dynamic Mileage invalid
   *  2. SWREQ_03938 Dynamic Mileage display
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
   *
   * Block requirements for '<S2>/CtAp_RngEstimn_Input':
   *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
   *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
   */
  /* Product: '<S25>/RngEstimn_DynDrvMilgFormal2Info_PRO' incorporates:
   *  Constant: '<S25>/RngEstimn_Ah2As'
   *  Constant: '<S25>/RngEstimn_ZERO'
   *  MinMax: '<S25>/MinMax'
   *  Product: '<S13>/Product'
   *  SignalConversion: '<S4>/SignalCopy2'
   */
  RngEstimn_BMSBattRemnCp_As = fmaxf(RngEstimn_ZERO, tmpRead_1) * (real32_T)
    ((uint16_T)RngEstimn_Ah2As);

  /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */
  /* End of Outputs for SubSystem: '<S7>/Dynamic_Mileage_Calculate' */

  /* Product: '<S25>/RngEstimn_DynDrvMilgFormal2Info_PRO' incorporates:
   *  Constant: '<S25>/RngEstimn_m50km'
   */
  RngEstimn_DynDrvMilgFormal2Info_PRO = RngEstimn_BMSBattRemnCp_As * (real32_T)
    ((uint8_T)RngEstimn_m50km);

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
   *
   * Block requirements for '<S2>/CtAp_RngEstimn_Input':
   *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
   *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
   */
  /* Logic: '<S15>/LogicalOperator' incorporates:
   *  Logic: '<S15>/LogicalOperator2'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  SignalConversion: '<S4>/SignalCopy6'
   */
  RngEstimn_DynMilgVld_Flg = (!tmpRead_2 && tmpRead_4);

  /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */

  /* Switch: '<S25>/RngEstimn_DynDrvMilgFormal2Info_SWT' */
  if (RngEstimn_DynMilgVld_Flg) {
    /* Switch: '<S25>/RngEstimn_DynDrvMilgFormal2Info_SWT' incorporates:
     *  DataTypeConversion: '<S25>/DataTypeConversion'
     *  Product: '<S25>/RngEstimn_DynDrvMilgFormal2Info_DIV'
     */
    RngEstimn_DynDrvMilgFormal2Info = (uint16_T)((real32_T)
      (RngEstimn_DynDrvMilgFormal2Info_PRO /
       RngEstimn_BattCurrIntegral50kmInfo_SUM));
  } else {
    /* Switch: '<S25>/RngEstimn_DynDrvMilgFormal2Info_SWT' incorporates:
     *  Constant: '<S25>/RngEstimn_DynDrvMilgInvld_CFG'
     */
    RngEstimn_DynDrvMilgFormal2Info = RngEstimn_DynDrvMilgInvld_CFG;
  }

  /* End of Switch: '<S25>/RngEstimn_DynDrvMilgFormal2Info_SWT' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
   *
   * Block requirements for '<S2>/CtAp_RngEstimn_Input':
   *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
   *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
   */
  /* Logic: '<S15>/LogicalOperator3' incorporates:
   *  Logic: '<S15>/LogicalOperator1'
   *  SignalConversion: '<S4>/SignalCopy8'
   */
  RngEstimn_IntglVld_Flg = (RngEstimn_DynMilgVld_Flg && !tmpRead_5);

  /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */

  /* Outputs for Enabled SubSystem: '<S7>/Vehcile_Speed_And_BMS_Current_Integration' incorporates:
   *  EnablePort: '<S16>/Enable'
   *
   * Block requirements for '<S7>/Vehcile_Speed_And_BMS_Current_Integration':
   *  1. SWREQ_03936 Total mileage calculation
   *  2. SWREQ_03934 BMS Current Integration calculate
   */
  if (RngEstimn_IntglVld_Flg) {
    /* Sum: '<S16>/Add' incorporates:
     *  Constant: '<S16>/RngEstimn_Dt'
     *  Product: '<S16>/Product'
     *  UnitDelay: '<S16>/RngEstimn_PrevBMSBattIDcIttgl_As'
     */
    CtAp_RngEstimn_ARID_DEF.RngEstimn_BMSBattIDcIntglNoNvm_ =
      (RngEstimn_BMSBattIDc_A * RngEstimn_Dt) +
      RngEstimn_PrevBMSBattIDcIntglNoNvm_As;

    /* Sum: '<S16>/Add2' incorporates:
     *  Abs: '<S16>/Abs'
     *  Constant: '<S16>/RngEstimn_Dt1'
     *  Constant: '<S16>/RngEstimn_kph2kps'
     *  Product: '<S16>/Product1'
     *  Product: '<S16>/Product2'
     *  UnitDelay: '<S16>/RngEstimn_PrevMilgIntgl_m'
     */
    CtAp_RngEstimn_ARID_DEF.RngEstimn_MilgIntglNoNvm_m = ((fabsf
      (RngEstimn_VehSpd_kph) * RngEstimn_kph2kps) * RngEstimn_Dt) +
      RngEstimn_PrevMilgIntgl_m;

    /* Update for UnitDelay: '<S16>/RngEstimn_PrevBMSBattIDcIttgl_As' */
    RngEstimn_PrevBMSBattIDcIntglNoNvm_As =
      CtAp_RngEstimn_ARID_DEF.RngEstimn_BMSBattIDcIntglNoNvm_;

    /* Update for UnitDelay: '<S16>/RngEstimn_PrevMilgIntgl_m' */
    RngEstimn_PrevMilgIntgl_m =
      CtAp_RngEstimn_ARID_DEF.RngEstimn_MilgIntglNoNvm_m;
  }

  /* End of Outputs for SubSystem: '<S7>/Vehcile_Speed_And_BMS_Current_Integration' */

  /* Outputs for Atomic SubSystem: '<S7>/ClearNVM'
   *
   * Block requirements for '<S7>/ClearNVM':
   *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
   *  2. SWREQ_06046 Clear NVM
   */
  /* Switch: '<S11>/Switch' incorporates:
   *  SignalConversion generated from: '<S4>/RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo'
   *  Switch: '<S11>/Switch1'
   *  UnitDelay: '<S11>/OneDelay'
   */
  if (CtAp_RngEstimn_ARID_DEF.OneDelay_DSTATE) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
     *
     * Block requirements for '<S2>/CtAp_RngEstimn_Input':
     *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
     *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
     */
    /* Switch: '<S11>/Switch' incorporates:
     *  SignalConversion generated from: '<S4>/BusSelector'
     */
    RngEstimn_BMSBattIDcIntglR_As =
      rtb_TmpSignalConversionAtRTE_RP.RngEstimn_BMSBattIDcIntgl_As;

    /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */

    /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
     *
     * Block requirements for '<S2>/CtAp_RngEstimn_Input':
     *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
     *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
     */
  } else if (tmpRead_6) {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/RngEstimn_U32_ZERO'
     *  Switch: '<S11>/Switch'
     */
    RngEstimn_BMSBattIDcIntglR_As = RngEstimn_U32_ZERO;

    /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */
  } else {
    /* no actions */
  }

  /* End of Switch: '<S11>/Switch' */

  /* Switch: '<S11>/Switch2' incorporates:
   *  SignalConversion generated from: '<S4>/RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo'
   *  Switch: '<S11>/Switch3'
   *  UnitDelay: '<S11>/OneDelay1'
   */
  if (CtAp_RngEstimn_ARID_DEF.OneDelay1_DSTATE) {
    /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
     *
     * Block requirements for '<S2>/CtAp_RngEstimn_Input':
     *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
     *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
     */
    /* Switch: '<S11>/Switch2' incorporates:
     *  SignalConversion generated from: '<S4>/BusSelector'
     */
    RngEstimn_MilgIntglR_m =
      rtb_TmpSignalConversionAtRTE_RP.RngEstimn_AccuMilg_m;

    /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */

    /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
     *
     * Block requirements for '<S2>/CtAp_RngEstimn_Input':
     *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
     *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
     */
  } else if (tmpRead_6) {
    /* Switch: '<S11>/Switch3' incorporates:
     *  Constant: '<S11>/RngEstimn_U32_ZERO1'
     *  Switch: '<S11>/Switch2'
     */
    RngEstimn_MilgIntglR_m = RngEstimn_U32_ZERO;

    /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */
  } else {
    /* no actions */
  }

  /* End of Switch: '<S11>/Switch2' */

  /* Update for UnitDelay: '<S11>/OneDelay' incorporates:
   *  Constant: '<S11>/Define'
   */
  CtAp_RngEstimn_ARID_DEF.OneDelay_DSTATE = RngEstimn_INACTIVE;

  /* Update for UnitDelay: '<S11>/OneDelay1' incorporates:
   *  Constant: '<S11>/Define1'
   */
  CtAp_RngEstimn_ARID_DEF.OneDelay1_DSTATE = RngEstimn_INACTIVE;

  /* End of Outputs for SubSystem: '<S7>/ClearNVM' */

  /* Outputs for Atomic SubSystem: '<S7>/Vehcile_Speed_And_BMS_Current_Integration_History_Calculate'
   *
   * Block requirements for '<S7>/Vehcile_Speed_And_BMS_Current_Integration_History_Calculate':
   *  1. SWREQ_03935 BMS Current Integration calculate remain unchanged
   *  2. SWREQ_03936 Total mileage calculation
   *  3. SWREQ_03937 Total mileage remain unchanged
   */
  /* Sum: '<S17>/Add1' */
  RngEstimn_BMSBattIDcIntglNoLmt_As = (real32_T)RngEstimn_BMSBattIDcIntglR_As +
    CtAp_RngEstimn_ARID_DEF.RngEstimn_BMSBattIDcIntglNoNvm_;

  /* DataTypeConversion: '<S17>/DataTypeConversion' incorporates:
   *  Constant: '<S17>/RngEstimn_BMSBattIDcIntglMin_CFG'
   *  MinMax: '<S17>/MinMax1'
   */
  RngEstimn_BMSBattIDcIntgl_As = (uint32_T)fmaxf
    (RngEstimn_BMSBattIDcIntglNoLmt_As, RngEstimn_BMSBattIDcIntglMin_CFG);

  /* MinMax: '<S17>/MinMax' incorporates:
   *  Constant: '<S17>/RngEstimn_BMSBattIDcIntglMax_CFG'
   */
  if (RngEstimn_BMSBattIDcIntgl_As > RngEstimn_BMSBattIDcIntglMax_CFG) {
    /* DataTypeConversion: '<S17>/DataTypeConversion' incorporates:
     *  MinMax: '<S17>/MinMax'
     */
    RngEstimn_BMSBattIDcIntgl_As = RngEstimn_BMSBattIDcIntglMax_CFG;
  }

  /* End of MinMax: '<S17>/MinMax' */

  /* DataTypeConversion: '<S17>/DataTypeConversion1' incorporates:
   *  Sum: '<S17>/Add3'
   */
  RngEstimn_MilgIntgl_m = (uint32_T)((real32_T)((real32_T)RngEstimn_MilgIntglR_m
    + CtAp_RngEstimn_ARID_DEF.RngEstimn_MilgIntglNoNvm_m));

  /* MinMax: '<S17>/MinMax3' incorporates:
   *  Constant: '<S17>/RngEstimn_MaxAccuMilg_CFG'
   */
  if (RngEstimn_MilgIntgl_m > RngEstimn_MaxAccuMilg_CFG) {
    /* DataTypeConversion: '<S17>/DataTypeConversion1' incorporates:
     *  MinMax: '<S17>/MinMax3'
     */
    RngEstimn_MilgIntgl_m = RngEstimn_MaxAccuMilg_CFG;
  }

  /* End of MinMax: '<S17>/MinMax3' */
  /* End of Outputs for SubSystem: '<S7>/Vehcile_Speed_And_BMS_Current_Integration_History_Calculate' */

  /* Outputs for Atomic SubSystem: '<S7>/Dynamic_Mileage_Calculate'
   *
   * Block requirements for '<S7>/Dynamic_Mileage_Calculate':
   *  1. SWREQ_03939 Dynamic Mileage invalid
   *  2. SWREQ_03938 Dynamic Mileage display
   */
  /* Sum: '<S13>/Add' incorporates:
   *  Constant: '<S13>/RngEstimn_InitMilg_CFG'
   */
  RngEstimn_MilgIntglSum_m = RngEstimn_MilgIntgl_m + RngEstimn_InitMilg_CFG;

  /* Sum: '<S13>/Add1' incorporates:
   *  Constant: '<S13>/RngEstimn_InitBMSBattCp_CFG'
   */
  RngEstimn_BMSBattIDcIntglSum_As = RngEstimn_BMSBattIDcIntgl_As +
    RngEstimn_InitBMSBattCp_CFG;

  /* Product: '<S13>/Divide1' */
  RngEstimn_VehEgyCns_mpAs = (real32_T)RngEstimn_MilgIntglSum_m / (real32_T)
    RngEstimn_BMSBattIDcIntglSum_As;

  /* Product: '<S13>/Product1' */
  RngEstimn_DynDrvMilg_m = RngEstimn_BMSBattRemnCp_As * RngEstimn_VehEgyCns_mpAs;

  /* Switch: '<S13>/Switch' */
  if (RngEstimn_DynMilgVld_Flg) {
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/Define'
     *  DataTypeConversion: '<S13>/DataTypeConversion'
     *  Product: '<S13>/Divide'
     */
    rtb_RngEstimn_DynDrvMilg_km = (uint16_T)((real32_T)(RngEstimn_DynDrvMilg_m /
      (real32_T)((uint16_T)RngEstimn_m2km)));
  } else {
    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/RngEstimn_DynDrvMilgInvld_CFG'
     */
    rtb_RngEstimn_DynDrvMilg_km = RngEstimn_DynDrvMilgInvld_CFG;
  }

  /* End of Switch: '<S13>/Switch' */
  /* End of Outputs for SubSystem: '<S7>/Dynamic_Mileage_Calculate' */

  /* Update for Delay: '<S22>/Delay2' */
  CtAp_RngEstimn_ARID_DEF.icLoad = false;

  /* End of Outputs for SubSystem: '<S6>/Dynamic_Mileage' */

  /* Outputs for Atomic SubSystem: '<S6>/LowDriveRangeReminder'
   *
   * Block requirements for '<S6>/LowDriveRangeReminder':
   *  1. SWREQ_06454 Low drive range reminder
   *  2. SWREQ_06455 Low drive range reminder clear
   *  3. SWREQ_06456 Low drive range reminder keep
   */
  /* RelationalOperator: '<S8>/RelationalOperator5' incorporates:
   *  Constant: '<S8>/RngEstimn_MilgLowRmnOff_CFG'
   */
  rtb_RelationalOperator5 = (rtb_RngEstimn_DynDrvMilg_km >
    RngEstimn_MilgLowRmnOff_CFG);

  /* RelationalOperator: '<S8>/RelationalOperator4' incorporates:
   *  Constant: '<S8>/RngEstimn_MilgLowRmnOn_CFG'
   */
  rtb_RelationalOperator4 = (rtb_RngEstimn_DynDrvMilg_km <
    RngEstimn_MilgLowRmnOn_CFG);

  /* Outputs for Atomic SubSystem: '<S8>/ATOM_RS_FF' */
  rtb_LogOp2 = CtAp_RngEstimn_ATOM_RS_FF(rtb_RelationalOperator5,
    rtb_RelationalOperator4, &CtAp_RngEstimn_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of Outputs for SubSystem: '<S8>/ATOM_RS_FF' */
  /* End of Outputs for SubSystem: '<S6>/LowDriveRangeReminder' */

  /* Outputs for Atomic SubSystem: '<S6>/Standard_Mileage'
   *
   * Block requirements for '<S6>/Standard_Mileage':
   *  1. SWREQ_03940 Standard Mileage Display Temp Valid
   *  2. SWREQ_06452 Standard Mileage Display Temp Invalid
   *  3. SWREQ_06453 Standard Mileage Invalid Display
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
   *
   * Block requirements for '<S2>/CtAp_RngEstimn_Input':
   *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
   *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
   */
  /* Switch: '<S9>/Switch' incorporates:
   *  Logic: '<S9>/LogicalOperator'
   *  Logic: '<S9>/LogicalOperator2'
   *  SignalConversion: '<S4>/SignalCopy3'
   *  SignalConversion: '<S4>/SignalCopy6'
   */
  if (!tmpRead_2 && tmpRead_4) {
    /* Switch: '<S9>/Switch1' incorporates:
     *  SignalConversion: '<S4>/SignalCopy7'
     */
    if (tmpRead_7) {
      /* Switch: '<S9>/Switch1' incorporates:
       *  Constant: '<S9>/RngEstimn_MaxStdDrvMilg_CFG'
       *  Constant: '<S9>/RngEstimn_pct2rat'
       *  Lookup_n-D: '<S9>/RngEstimn_AmbTempCorrnCoeff_LUT'
       *  Product: '<S9>/Divide'
       *  Product: '<S9>/Product'
       *  Product: '<S9>/Product1'
       *  SignalConversion: '<S4>/SignalCopy'
       *  SignalConversion: '<S4>/SignalCopy9'
       */
      rtb_Switch1_igq4 = look1_iflf_binlca(rtb_Switch1_igq4,
        &RngEstimn_AmbTempCorrnCoeffX_LUT[0], &RngEstimn_AmbTempCorrnCoeff_LUT[0],
        8U) * ((tmpRead / RngEstimn_pct2rat) * (real32_T)
               RngEstimn_MaxStdDrvMilg_CFG);
    } else {
      /* Switch: '<S9>/Switch1' incorporates:
       *  Constant: '<S9>/RngEstimn_MaxStdDrvMilg_CFG'
       *  Constant: '<S9>/RngEstimn_pct2rat'
       *  Product: '<S9>/Divide'
       *  Product: '<S9>/Product'
       *  SignalConversion: '<S4>/SignalCopy'
       */
      rtb_Switch1_igq4 = (tmpRead / RngEstimn_pct2rat) * (real32_T)
        RngEstimn_MaxStdDrvMilg_CFG;
    }

    /* End of Switch: '<S9>/Switch1' */

    /* Switch: '<S9>/Switch' incorporates:
     *  DataTypeConversion: '<S9>/DataTypeConversion'
     */
    RngEstimn_StdDrvMilg_km = (uint16_T)rtb_Switch1_igq4;
  } else {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/RngEstimn_MaxStdDrvMilg_CFG1'
     */
    RngEstimn_StdDrvMilg_km = RngEstimn_MaxStdDrvMilg_CFG;
  }

  /* End of Switch: '<S9>/Switch' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */
  /* End of Outputs for SubSystem: '<S6>/Standard_Mileage' */
  /* End of Outputs for SubSystem: '<Root>/R_RngEstimn_Cyclic_100ms_sys' */

  /* Outport: '<Root>/RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2_write' incorporates:
   *  DataTypeConversion: '<S5>/DataTypeConversion'
   */
  for (i_0 = 0; i_0 < 25; i_0++) {
    /* Outputs for Atomic SubSystem: '<Root>/R_RngEstimn_Cyclic_100ms_sys' */
    CtAp_RngEstimn_ARID_DEF.RTE_RP_RngEstimnFormual2_tec_Rn[i_0] = (uint16_T)
      CtAp_RngEstimn_ARID_DEF.RngEst_BattCurrIntegral2kmArray[i_0];

    /* End of Outputs for SubSystem: '<Root>/R_RngEstimn_Cyclic_100ms_sys' */
  }

  /* End of Outport: '<Root>/RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2_write' */

  /* Outputs for Atomic SubSystem: '<Root>/R_RngEstimn_Cyclic_100ms_sys' */
  /* Outport: '<Root>/RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   */
  (void)Rte_Write_RTE_P_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km
    (rtb_RngEstimn_DynDrvMilg_km);

  /* Outport: '<Root>/RTE_P_RngEstimn_StdDrvMilg_km_tec_RngEstimn_StdDrvMilg_km' incorporates:
   *  SignalConversion: '<S5>/SignalCopy1'
   */
  (void)Rte_Write_RTE_P_RngEstimn_StdDrvMilg_km_tec_RngEstimn_StdDrvMilg_km
    (RngEstimn_StdDrvMilg_km);

  /* Outputs for Atomic SubSystem: '<S6>/Dynamic_Mileage' */
  /* Outport: '<Root>/RTE_RP_RngEstimnInfo_tec_RngEstimnInfo_write' incorporates:
   *  BusCreator: '<S7>/BusCreator'
   */
  CtAp_RngEstimn_ARID_DEF.RTE_RP_RngEstimnInfo_tec_RngEst.RngEstimn_BMSBattIDcIntgl_As
    = RngEstimn_BMSBattIDcIntgl_As;
  CtAp_RngEstimn_ARID_DEF.RTE_RP_RngEstimnInfo_tec_RngEst.RngEstimn_AccuMilg_m =
    RngEstimn_MilgIntgl_m;

  /* Outputs for Atomic SubSystem: '<S7>/ClearNVMSucess'
   *
   * Block requirements for '<S7>/ClearNVMSucess':
   *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
   */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_RngEstimn_Input'
   *
   * Block requirements for '<S2>/CtAp_RngEstimn_Input':
   *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
   *  2. SWREQ_03927 The function of "Range Estimate" has the following inputs:
   */
  /* Outport: '<Root>/RTE_P_RngEst_ClearNVMSucessInfo_tec_RngEst_ClearNVMSucessInfo' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  DataTypeConversion: '<S12>/Data Type Conversion'
   *  Logic: '<S12>/Logical Operator'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   *  SignalConversion generated from: '<S4>/RTE_R_DiagApp_ClearRangeEstNVMReqInfo_tec_DiagApp_ClearRangeEstNVMReqInfo'
   */
  (void)Rte_Write_RTE_P_RngEst_ClearNVMSucessInfo_tec_RngEst_ClearNVMSucessInfo
    ((uint8_T)(((RngEstimn_MilgIntglR_m < RngEstimn_U32_TWO) &&
                (RngEstimn_BMSBattIDcIntglR_As < RngEstimn_U32_TWO) && tmpRead_6)
               ? ((int32_T)1) : ((int32_T)0)));

  /* End of Outputs for SubSystem: '<S2>/CtAp_RngEstimn_Input' */
  /* End of Outputs for SubSystem: '<S7>/ClearNVMSucess' */
  /* End of Outputs for SubSystem: '<S6>/Dynamic_Mileage' */

  /* Outport: '<Root>/RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn' incorporates:
   *  SignalConversion: '<S5>/SignalCopy4'
   */
  (void)Rte_Write_RTE_P_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn(rtb_LogOp2);

  /* End of Outputs for SubSystem: '<Root>/R_RngEstimn_Cyclic_100ms_sys' */
  (void)Rte_Write_RTE_RP_RngEstimnFormual2_tec_RngEstimnFormual2
    (CtAp_RngEstimn_ARID_DEF.RTE_RP_RngEstimnFormual2_tec_Rn);
  (void)Rte_Write_RTE_RP_RngEstimnInfo_tec_RngEstimnInfo
    (&CtAp_RngEstimn_ARID_DEF.RTE_RP_RngEstimnInfo_tec_RngEst);
}

#define CtAp_RngEstimn_STOP_SEC_CODE
#include "CtAp_RngEstimn_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_RngEstimn_START_SEC_VAR_CONST_8
#include "CtAp_RngEstimn_MemMap.h"

void R_RngEstimn_Init(void)
{
  /* Registration code */

  /* block I/O */

  /* custom signals */
  RngEstimn_BMSBattIDcIntgl_As = 0U;
  RngEstimn_MilgIntgl_m = 0U;
  RngEstimn_MilgIntglSum_m = 0U;
  RngEstimn_BMSBattIDcIntglSum_As = 0U;
  RngEstimn_BMSBattIDcIntglR_As = 0U;
  RngEstimn_MilgIntglR_m = 0U;

  {
    int32_T i;
    for (i = 0; i < 25; i++) {
      RngEstimn_BattCurrIntegral2kmArrayInfo[i] = 0.0F;
    }
  }

  RngEstimn_BattCurrIntegral50kmInfo_SUM = 0.0F;
  RngEstimn_DynDrvMilgFormal2Info_PRO = 0.0F;
  RngEstimn_VehSpd_kph = 0.0F;
  RngEstimn_VehEgyCns_mpAs = 0.0F;
  RngEstimn_BMSBattRemnCp_As = 0.0F;
  RngEstimn_DynDrvMilg_m = 0.0F;
  RngEstimn_BMSBattIDc_A = 0.0F;
  RngEstimn_StdDrvMilg_km = ((uint16_T)0U);
  RngEstimn_DynDrvMilgFormal2Info = ((uint16_T)0U);
  RngEstimn_DynMilgVld_Flg = false;
  RngEstimn_IntglVld_Flg = false;

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_RngEstimn_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_RngEstimn_T));

  /* states (dwork) */

  /* custom states */
  RngEstimn_PrevBMSBattIDcIntglNoNvm_As = 0.0F;

  /* SystemInitialize for Atomic SubSystem: '<Root>/R_RngEstimn_Cyclic_100ms_sys' */
  /* SystemInitialize for Atomic SubSystem: '<S6>/Dynamic_Mileage' */
  /* InitializeConditions for Delay: '<S22>/Delay2' */
  CtAp_RngEstimn_ARID_DEF.icLoad = true;

  /* SystemInitialize for Enabled SubSystem: '<S14>/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem' */
  /* InitializeConditions for Delay: '<S24>/Delay3' */
  CtAp_RngEstimn_ARID_DEF.Delay3_DSTATE = true;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
  CtAp_RngEstimn_ARID_DEF.DiscreteTimeIntegrator_PrevRese = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S24>/RngEstimn_BattCurrIntegralInfo_Integrator' */
  CtAp_RngEstimn_ARID_DEF.RngEstimn_BattCurrIntegral_dyt0 = 2;

  /* End of SystemInitialize for SubSystem: '<S14>/RngEstimn_BattCurrIntegral2kmArrayInfo_Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S7>/Vehcile_Speed_And_BMS_Current_Integration'
   *
   * Block requirements for '<S7>/Vehcile_Speed_And_BMS_Current_Integration':
   *  1. SWREQ_03936 Total mileage calculation
   *  2. SWREQ_03934 BMS Current Integration calculate
   */
  /* InitializeConditions for UnitDelay: '<S16>/RngEstimn_PrevBMSBattIDcIttgl_As' */
  RngEstimn_PrevBMSBattIDcIntglNoNvm_As = RngEstimn_ZERO;

  /* End of SystemInitialize for SubSystem: '<S7>/Vehcile_Speed_And_BMS_Current_Integration' */

  /* SystemInitialize for Atomic SubSystem: '<S7>/ClearNVM'
   *
   * Block requirements for '<S7>/ClearNVM':
   *  1. SWREQ_03933 Battery Current Integration and total mileage  when read and write EEPROM
   *  2. SWREQ_06046 Clear NVM
   */
  /* InitializeConditions for UnitDelay: '<S11>/OneDelay' */
  CtAp_RngEstimn_ARID_DEF.OneDelay_DSTATE = true;

  /* InitializeConditions for UnitDelay: '<S11>/OneDelay1' */
  CtAp_RngEstimn_ARID_DEF.OneDelay1_DSTATE = true;

  /* End of SystemInitialize for SubSystem: '<S7>/ClearNVM' */
  /* End of SystemInitialize for SubSystem: '<S6>/Dynamic_Mileage' */

  /* SystemInitialize for Atomic SubSystem: '<S6>/LowDriveRangeReminder'
   *
   * Block requirements for '<S6>/LowDriveRangeReminder':
   *  1. SWREQ_06454 Low drive range reminder
   *  2. SWREQ_06455 Low drive range reminder clear
   *  3. SWREQ_06456 Low drive range reminder keep
   */
  /* SystemInitialize for Atomic SubSystem: '<S8>/ATOM_RS_FF' */
  CtAp_RngEstimn_ATOM_RS_FF_Init(false,
    &CtAp_RngEstimn_ARID_DEF.ARID_DEF_ATOM_RS_FF);

  /* End of SystemInitialize for SubSystem: '<S8>/ATOM_RS_FF' */
  /* End of SystemInitialize for SubSystem: '<S6>/LowDriveRangeReminder' */
  /* End of SystemInitialize for SubSystem: '<Root>/R_RngEstimn_Cyclic_100ms_sys' */
}

#define CtAp_RngEstimn_STOP_SEC_VAR_CONST_8
#include "CtAp_RngEstimn_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
