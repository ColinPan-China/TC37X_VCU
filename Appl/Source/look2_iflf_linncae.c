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
 *  Filename:           look2_iflf_linncae.c
 *  File Creation Date: 07-Aug-2025
 *  Model Name:         CtAp_FctSftyTorq
 *  Model Version:      1.101
 *  Model Author:       Mike Ni - Thu Aug 01 13:59:43 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Thu Aug  7 08:59:48 2025

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Wed Aug 06 10:42:48 2025
 *
 *
 *******************************************************************************/
#include "look2_iflf_linncae.h"
#include "rtwtypes.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/
#define CtAp_FctSftyTorq_START_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

real32_T look2_iflf_linncae(real32_T u0, real32_T u1, const real32_T bp0[],
  const real32_T bp1[], const real32_T table[], const uint32_T maxIndex[],
  uint32_T stride)
{
  uint32_T bpIndices[2];
  uint32_T bpIdx;

  /* Column-major Lookup 2-D
     Search method: 'linear'
     Use previous index: 'off'
     Interpolation method: 'Nearest'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index only
     Index Search method: 'linear'
     Interpolation method: 'Use nearest'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    bpIdx = 0U;
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Linear Search */
    for (bpIdx = (maxIndex[0U] >> 1U); u0 < bp0[bpIdx]; bpIdx--) {
    }

    while (u0 >= bp0[bpIdx + 1U]) {
      bpIdx++;
    }

    if ((bpIdx < maxIndex[0U]) && ((bp0[bpIdx + 1U] - u0) <= (u0 - bp0[bpIdx])))
    {
      bpIdx++;
    }
  } else {
    bpIdx = maxIndex[0U];
  }

  bpIndices[0U] = bpIdx;

  /* Prelookup - Index only
     Index Search method: 'linear'
     Interpolation method: 'Use nearest'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    bpIdx = 0U;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Linear Search */
    for (bpIdx = (maxIndex[1U] >> 1U); u1 < bp1[bpIdx]; bpIdx--) {
    }

    while (u1 >= bp1[bpIdx + 1U]) {
      bpIdx++;
    }

    if ((bpIdx < maxIndex[1U]) && ((bp1[bpIdx + 1U] - u1) <= (u1 - bp1[bpIdx])))
    {
      bpIdx++;
    }
  } else {
    bpIdx = maxIndex[1U];
  }

  return table[(bpIdx * stride) + bpIndices[0]];
}

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
