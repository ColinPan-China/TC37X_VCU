/**
 *******************************************************************************
 **  FILE INFORMATION:
 **  Filename:           look1_iflf_binlx.c
 **  File Creation Date: 21-Aug-2024
 **
 **  ABSTRACT:
 **
 **
 **  NOTES:
 **
 **
 **  MODEL INFORMATION:
 **  Model Name:         CtAp_TorqCrossZr
 **  Model Description:
 **  Model Version:      1.19
 **  Model Author:       Mike Ni - Thu Aug 01 13:57:34 2024
 **
 **  MODIFICATION HISTORY:
 **  Model at Code Generation: Mike Ni - Wed Aug 21 17:19:36 2024
 **
 **  Last Saved Modification:  Mike Ni - Wed Aug 21 14:48:32 2024
 **
 **
 *******************************************************************************
 **/

#include "look1_iflf_binlx.h"
#include "rtwtypes.h"

/*  Defines */
#define CtAp_TorqCrossZr_START_SEC_VAR_FAST_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */
#define CtAp_TorqCrossZr_STOP_SEC_VAR_FAST_NOINIT_8
#include "CtAp_TorqCrossZr_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */
#define CtAp_TorqCrossZr_START_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/
real32_T look1_iflf_binlx(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = (maxIndex >> 1U);
    iLeft = 0U;
    iRght = maxIndex;
    while ((iRght - iLeft) > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = ((iRght + iLeft) >> 1U);
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  yL_0d0 = table[iLeft];
  return ((table[iLeft + 1U] - yL_0d0) * frac) + yL_0d0;
}

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
#define CtAp_TorqCrossZr_STOP_SEC_CODE
#include "CtAp_TorqCrossZr_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */
