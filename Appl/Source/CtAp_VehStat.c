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
 *  Filename:           CtAp_VehStat.c
 *  File Creation Date: 03-Apr-2025
 *  Model Name:         CtAp_VehStat
 *  Model Version:      %<AutoIncrement:3.0.0>
 *  Model Author:       Hyacinth Ge - Thu Aug 01 13:58:12 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Apr  3 13:59:04 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  ATOM-HyacinthGe - Thu Apr 03 13:58:17 2025
 *
 *
 *******************************************************************************/
#include "CtAp_VehStat.h"
#include "rtwtypes.h"
#include "CtAp_VehStat_Cal.h"

/*  Defines */

/* Named constants for Chart: '<S7>/ModMgmt_HvStatusFlow' */
#define CtAp_VehSt_IN_HvStatus_DrvReady ((uint8_T)1U)
#define CtAp_VehSta_IN_HvStatus_HvReady ((uint8_T)2U)
#define CtAp_VehSta_IN_HvStatus_Standby ((uint8_T)6U)
#define CtAp_VehStat_IN_HvStatus_Init  ((uint8_T)3U)
#define CtAp_VehStat_IN_HvStatus_Sleep ((uint8_T)5U)
#define CtAp_Veh_IN_HvStatus_Preheating ((uint8_T)4U)

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* PublicStructure Variables for Internal Data */
#define CtAp_VehStat_START_SEC_VAR_NOINIT_8
#include "CtAp_VehStat_MemMap.h"

ARID_DEF_CtAp_VehStat_T CtAp_VehStat_ARID_DEF;/* '<S7>/ModMgmt_HvStatusFlow' */

#define CtAp_VehStat_STOP_SEC_VAR_NOINIT_8
#include "CtAp_VehStat_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Model step function */

/* SwAddrMethod CODE for Runnable */
#define CtAp_VehStat_START_SEC_CODE
#include "CtAp_VehStat_MemMap.h"

void R_VehStat_Cyclic_20ms(void)
{
  uint8_T rtb_ModMgmt_HvSts_Enum;
  uint8_T tmpRead;
  uint8_T tmpRead_0;
  uint8_T tmpRead_1;
  uint8_T tmpRead_2;
  boolean_T rtb_ModMgmt_ReqSleep_Flg;
  boolean_T tmpRead_3;
  boolean_T tmpRead_4;
  boolean_T tmpRead_5;
  boolean_T tmpRead_6;
  boolean_T tmpRead_7;

  /* Inport: '<Root>/RTE_R_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_WakeUpReq_Flg_tec_LvMgmt_WakeUpReq_Flg(&tmpRead_7);

  /* Inport: '<Root>/RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehStdl_Flg_tec_VehMot_VehStdl_Flg(&tmpRead_6);

  /* Inport: '<Root>/RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg' */
  (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(&tmpRead_5);

  /* Inport: '<Root>/RTE_R_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_SelfChkSts_Flg_tec_LvMgmt_SelfChkSts_Flg
    (&tmpRead_4);

  /* Inport: '<Root>/RTE_R_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg' */
  (void)Rte_Read_RTE_R_LvMgmt_LvPwrDwn_Flg_tec_LvMgmt_LvPwrDwn_Flg(&tmpRead_3);

  /* Inport: '<Root>/RTE_R_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum' */
  (void)
    Rte_Read_RTE_R_HvMgmt_MCUWrkModActSts_Enum_tec_HvMgmt_MCUWrkModActSts_Enum
    (&tmpRead_2);

  /* Inport: '<Root>/RTE_R_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum' */
  (void)
    Rte_Read_RTE_R_HvMgmt_BMSWrkModActSts_Enum_tec_HvMgmt_BMSWrkModActSts_Enum
    (&tmpRead_1);

  /* Inport: '<Root>/RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum' */
  (void)
    Rte_Read_RTE_R_HvMgmt_BMSPosRlyActSts_Enum_tec_HvMgmt_BMSPosRlyActSts_Enum
    (&tmpRead_0);

  /* Inport: '<Root>/RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum' */
  (void)
    Rte_Read_RTE_R_HvMgmt_BMSNegRlyActSts_Enum_tec_HvMgmt_BMSNegRlyActSts_Enum
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_VehStat_Cyclic_20ms_sys' */
  /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStat_Function' */
  /* Chart: '<S7>/ModMgmt_HvStatusFlow' incorporates:
   *  SignalConversion: '<S5>/SignalCopy'
   *  SignalConversion: '<S5>/SignalCopy1'
   *  SignalConversion: '<S5>/SignalCopy2'
   *  SignalConversion: '<S5>/SignalCopy3'
   *  SignalConversion: '<S5>/SignalCopy4'
   *  SignalConversion: '<S5>/SignalCopy5'
   *  SignalConversion: '<S5>/SignalCopy6'
   *  SignalConversion: '<S5>/SignalCopy7'
   *  SignalConversion: '<S5>/SignalCopy8'
   */
  if ((uint32_T)CtAp_VehStat_ARID_DEF.is_active_c2_CtAp_VehStat == 0U) {
    CtAp_VehStat_ARID_DEF.is_active_c2_CtAp_VehStat = 1U;
    CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat = CtAp_VehStat_IN_HvStatus_Init;
    rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_INIT);
    rtb_ModMgmt_ReqSleep_Flg = VehStat_Active;
    CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
  } else {
    switch (CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat) {
     case CtAp_VehSt_IN_HvStatus_DrvReady:
      rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_DrvReady);
      rtb_ModMgmt_ReqSleep_Flg = VehStat_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStat_Input' */
      if (tmpRead_2 == ((uint8_T)VehStat_MCUReadyCmpl)) {
        CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
          CtAp_VehSta_IN_HvStatus_HvReady;
        rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_HvReady);
        CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_VehStat_Input' */
      break;

     case CtAp_VehSta_IN_HvStatus_HvReady:
      rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_HvReady);
      rtb_ModMgmt_ReqSleep_Flg = VehStat_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStat_Input' */
      if (tmpRead_2 == ((uint8_T)VehStat_MCUStandbyCmpl)) {
        CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
          CtAp_VehSta_IN_HvStatus_Standby;
        rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_Standby);
        CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
      } else if ((tmpRead_0 == ((uint8_T)VehStat_PreheatPosRlyOpenCmpl)) &&
                 (tmpRead == ((uint8_T)VehStat_NegRlyClsCmpl))) {
        CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
          CtAp_Veh_IN_HvStatus_Preheating;
        rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_Preheating);
        CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
      } else if (tmpRead_2 == ((uint8_T)VehStat_MCUEnaCmpl)) {
        CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
          CtAp_VehSt_IN_HvStatus_DrvReady;
        rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_DrvReady);
      } else {
        /* no actions */
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_VehStat_Input' */
      break;

     case CtAp_VehStat_IN_HvStatus_Init:
      {
        rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_INIT);
        rtb_ModMgmt_ReqSleep_Flg = VehStat_Active;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStat_Input' */
        if (tmpRead_3 && (CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt >
                          ModMgmt_Init2SleepTmr_CFG)) {
          CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
            CtAp_VehStat_IN_HvStatus_Sleep;
          rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_Sleep);
          CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
        } else if (tmpRead_4) {
          CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
            CtAp_VehSta_IN_HvStatus_Standby;
          rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_Standby);
          rtb_ModMgmt_ReqSleep_Flg = VehStat_Inactive;
          CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
        } else {
          int32_T tmp;
          tmp = (int32_T)CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt + (int32_T)
            ((uint16_T)VehStat_ModMgmt_RunStep);
          if (tmp > 65535) {
            tmp = 65535;
          }

          CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = (uint16_T)tmp;
        }

        /* End of Outputs for SubSystem: '<S2>/CtAp_VehStat_Input' */
      }
      break;

     case CtAp_Veh_IN_HvStatus_Preheating:
      rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_Preheating);
      rtb_ModMgmt_ReqSleep_Flg = VehStat_Inactive;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStat_Input' */
      if ((tmpRead_2 == ((uint8_T)VehStat_MCUStandbyCmpl)) && (tmpRead_0 !=
           ((uint8_T)VehStat_PosRlyClsCmpl))) {
        CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
          CtAp_VehSta_IN_HvStatus_Standby;
        rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_Standby);
        CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
      } else if ((tmpRead_0 == ((uint8_T)VehStat_PosRlyClsCmpl)) && (tmpRead ==
                  ((uint8_T)VehStat_NegRlyClsCmpl))) {
        CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
          CtAp_VehSta_IN_HvStatus_HvReady;
        rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_HvReady);
        CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
      } else {
        /* no actions */
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_VehStat_Input' */
      break;

     case CtAp_VehStat_IN_HvStatus_Sleep:
      rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_Sleep);
      rtb_ModMgmt_ReqSleep_Flg = VehStat_Active;

      /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStat_Input' */
      if ((tmpRead_3 == VehStat_Inactive) && tmpRead_7) {
        CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat = CtAp_VehStat_IN_HvStatus_Init;
        rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_INIT);
        CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
      }

      /* End of Outputs for SubSystem: '<S2>/CtAp_VehStat_Input' */
      break;

     default:
      {
        /* case IN_HvStatus_Standby: */
        rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_Standby);
        rtb_ModMgmt_ReqSleep_Flg = VehStat_Inactive;

        /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStat_Input' */
        if ((tmpRead_7 == VehStat_Inactive) && (tmpRead_6 || (tmpRead_5 ==
              VehStat_Inactive)) && (CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt >
             ModMgmt_Standby2SleepTmr_CFG)) {
          CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
            CtAp_VehStat_IN_HvStatus_Sleep;
          rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_Sleep);
          rtb_ModMgmt_ReqSleep_Flg = VehStat_Active;
          CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
        } else if ((tmpRead_1 == ((uint8_T)VehStat_BMSActiveCmpl)) && (tmpRead_2
                    == ((uint8_T)VehStat_MCUReadyCmpl))) {
          CtAp_VehStat_ARID_DEF.is_c2_CtAp_VehStat =
            CtAp_VehSta_IN_HvStatus_HvReady;
          rtb_ModMgmt_HvSts_Enum = ((uint8_T)VehStat_HvReady);
          CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = ((uint16_T)VehStat_Count_Zero);
        } else {
          int32_T tmp;
          tmp = (int32_T)CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt + (int32_T)
            ((uint16_T)VehStat_ModMgmt_RunStep);
          if (tmp > 65535) {
            tmp = 65535;
          }

          CtAp_VehStat_ARID_DEF.ModMgmt_HvStsCnt = (uint16_T)tmp;
        }

        /* End of Outputs for SubSystem: '<S2>/CtAp_VehStat_Input' */
      }
      break;
    }
  }

  /* End of Chart: '<S7>/ModMgmt_HvStatusFlow' */
  /* End of Outputs for SubSystem: '<S2>/CtAp_VehStat_Function' */

  /* Outputs for Atomic SubSystem: '<S2>/CtAp_VehStat_Output' */
  /* Outport: '<Root>/RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum' incorporates:
   *  SignalConversion: '<S6>/SignalCopy'
   */
  (void)Rte_Write_RTE_P_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum
    (rtb_ModMgmt_HvSts_Enum);

  /* Outport: '<Root>/RTE_P_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg' incorporates:
   *  SignalConversion: '<S6>/SignalCopy1'
   */
  (void)Rte_Write_RTE_P_ModMgmt_ReqSleep_Flg_tec_ModMgmt_ReqSleep_Flg
    (rtb_ModMgmt_ReqSleep_Flg);

  /* End of Outputs for SubSystem: '<S2>/CtAp_VehStat_Output' */
  /* End of Outputs for SubSystem: '<Root>/R_VehStat_Cyclic_20ms_sys' */
}

#define CtAp_VehStat_STOP_SEC_CODE
#include "CtAp_VehStat_MemMap.h"

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_VehStat_START_SEC_VAR_CONST_8
#include "CtAp_VehStat_MemMap.h"

void R_VehStat_Init(void)
{
  /* Registration code */

  /* Initialize PublicStructure Variables for Internal Data */
  (void) memset((void *)&CtAp_VehStat_ARID_DEF, 0,
                sizeof(ARID_DEF_CtAp_VehStat_T));
}

#define CtAp_VehStat_STOP_SEC_VAR_CONST_8
#include "CtAp_VehStat_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
