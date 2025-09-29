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
 *  Filename:           plook_u32f_binckan.c
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
#include "plook_u32f_binckan.h"
#include "binsearch_u32f.h"
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

uint32_T plook_u32f_binckan(real32_T u, const real32_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'binary'
     Interpolation method: 'Use nearest'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32f(u, bp, maxIndex >> 1U, maxIndex);
    if ((bpIndex < maxIndex) && ((bp[bpIndex + 1U] - u) <= (u - bp[bpIndex]))) {
      bpIndex++;
    }
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}

#define CtAp_FctSftyTorq_STOP_SEC_CODE
#include "CtAp_FctSftyTorq_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
