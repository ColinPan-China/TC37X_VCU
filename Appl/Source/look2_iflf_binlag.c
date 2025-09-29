/**
 *******************************************************************************
 **  FILE INFORMATION:
 **  Filename:           look2_iflf_binlag.c
 **  File Creation Date: 21-Aug-2024
 **
 **  ABSTRACT:
 **
 **
 **  NOTES:
 **
 **
 **  MODEL INFORMATION:
 **  Model Name:         CtAp_FctSftyTorq
 **  Model Description:
 **  Model Version:      1.27
 **  Model Author:       Mike Ni - Thu Aug 01 13:59:43 2024
 **
 **  MODIFICATION HISTORY:
 **  Model at Code Generation: Mike Ni - Wed Aug 21 18:08:39 2024
 **
 **  Last Saved Modification:  Mike Ni - Wed Aug 21 18:04:20 2024
 **
 **
 *******************************************************************************
 **/

#include "look2_iflf_binlag.h"
#include "rtwtypes.h"

/*  Defines */
#define CtAp_FctSftyTorq_START_SEC_VAR_FAST_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */
#define CtAp_FctSftyTorq_STOP_SEC_VAR_FAST_NOINIT_8
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/
real32_T look2_iflf_binlag(real32_T u0, real32_T u1, const real32_T bp0[], const
  real32_T bp1[], const real32_T table[], const uint32_T maxIndex[], uint32_T
  stride)
{
  real32_T fractions[2];
  real32_T frac;
  real32_T y;
  real32_T yL_0d0;
  uint32_T bpIndices[2];
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 2-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'on'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'on'
   */
  if (u0 < bp0[maxIndex[0U]]) {
    /* Binary Search */
    bpIdx = (maxIndex[0U] >> 1U);
    iLeft = 0U;
    iRght = maxIndex[0U];
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
    iLeft = maxIndex[0U];
    frac = 0.0F;
  }

  fractions[0U] = frac;
  bpIndices[0U] = iLeft;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'on'
   */
  if (u1 < bp1[maxIndex[1U]]) {
    /* Binary Search */
    bpIdx = (maxIndex[1U] >> 1U);
    iLeft = 0U;
    iRght = maxIndex[1U];
    while ((iRght - iLeft) > 1U) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = ((iRght + iLeft) >> 1U);
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1U] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1U];
    frac = 0.0F;
  }

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'wrapping'
   */
  bpIdx = (iLeft * stride) + bpIndices[0U];
  if (bpIndices[0U] == maxIndex[0U]) {
    y = table[bpIdx];
  } else {
    yL_0d0 = table[bpIdx];
    y = ((table[bpIdx + 1U] - yL_0d0) * fractions[0U]) + yL_0d0;
  }

  if (iLeft == maxIndex[1U]) {
  } else {
    bpIdx += stride;
    if (bpIndices[0U] == maxIndex[0U]) {
      yL_0d0 = table[bpIdx];
    } else {
      yL_0d0 = table[bpIdx];
      yL_0d0 += (table[bpIdx + 1U] - yL_0d0) * fractions[0U];
    }

    y += (yL_0d0 - y) * frac;
  }

  return y;
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
#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"   /* PRQA S 5087 *//* MD_MSR_MemMap */
