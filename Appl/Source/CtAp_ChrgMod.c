/**
 *******************************************************************************
 **  FILE INFORMATION:
 **  Filename:           CtAp_ChrgMod.c
 **  File Creation Date: 21-Aug-2024
 **
 **  ABSTRACT:
 **
 **
 **  NOTES:
 **
 **
 **  MODEL INFORMATION:
 **  Model Name:         CtAp_ChrgMod
 **  Model Description:
 **  Model Version:      1.001
 **  Model Author:       Mike Ni - Thu Aug 01 14:00:34 2024
 **
 **  MODIFICATION HISTORY:
 **  Model at Code Generation: TaoWang - Wed Aug 21 16:59:55 2024
 **
 **  Last Saved Modification:  TaoWang - Wed Aug 21 14:22:13 2024
 **
 **
 *******************************************************************************
 **/

#include "CtAp_ChrgMod.h"
#include "rtwtypes.h"

/*  Defines */
#define CtAp_ChrgMod_START_SEC_VAR_FAST_NOINIT_8
#include "CtAp_ChrgMod_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */
#define CtAp_ChrgMod_STOP_SEC_VAR_FAST_NOINIT_8
#include "CtAp_ChrgMod_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */
#define CtAp_ChrgMod_START_SEC_CODE
#include "CtAp_ChrgMod_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Model step function */
void R_ChrgMod_Cyclic_50ms(void)
{
  uint8_T tmpRead;

  /* Inport: '<Root>/RTE_R_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum' */
  (void)Rte_Read_RTE_R_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum
    (&tmpRead);

  /* Outputs for Atomic SubSystem: '<Root>/R_ChrgMod_Cyclic_50ms_sys' */
  /* Outputs for Atomic SubSystem: '<S1>/Subsystem' */
  /* Outport: '<Root>/RTE_P_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  (void)Rte_Write_RTE_P_DCChrMgmt_DcChrgnMod_Enum_tec_DCChrMgmt_DcChrgnMod_Enum
    (tmpRead);

  /* End of Outputs for SubSystem: '<S1>/Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/R_ChrgMod_Cyclic_50ms_sys' */
}

/* Model initialize function */

/* SwAddrMethod VAR_CONST_8 for Runnable */
#define CtAp_ChrgMod_START_SEC_VAR_CONST_8
#include "CtAp_ChrgMod_MemMap.h"

void R_ChrgMod_Init(void)
{
  /* (no initialization code required) */
}

#define CtAp_ChrgMod_STOP_SEC_VAR_CONST_8
#include "CtAp_ChrgMod_MemMap.h"

/*======================== TOOL VERSION INFORMATION ==========================*
 * MATLAB 9.13 (R2022b)13-May-2022                                            *
 * Simulink 10.6 (R2022b)13-May-2022                                          *
 * Simulink Coder 9.8 (R2022b)13-May-2022                                     *
 * Embedded Coder 7.9 (R2022b)13-May-2022                                     *
 * Stateflow 10.7 (R2022b)13-May-2022                                         *
 * Fixed-Point Designer 7.5 (R2022b)13-May-2022                               *
 *============================================================================*/

/*======================= LICENSE IN USE INFORMATION =========================*
 * autosar_blockset                                                           *
 * matlab                                                                     *
 * matlab_coder                                                               *
 * real-time_workshop                                                         *
 * rtw_embedded_coder                                                         *
 * simulink                                                                   *
 * stateflow                                                                  *
 *============================================================================*/
#define CtAp_ChrgMod_STOP_SEC_CODE
#include "CtAp_ChrgMod_MemMap.h"       /* PRQA S 5087 *//* MD_MSR_MemMap */
