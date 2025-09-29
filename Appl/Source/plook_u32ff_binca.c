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
 *  Filename:           plook_u32ff_binca.c
 *  File Creation Date: 30-Oct-2024
 *  Model Name:         CtAp_TorqLmt
 *  Model Version:      1.63
 *  Model Author:       Mike Ni - Thu Aug 01 13:57:21 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed Oct 30 15:52:55 2024

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  Mike Ni - Wed Oct 30 15:52:09 2024
 *
 *
 *******************************************************************************/
#include "plook_u32ff_binca.h"
#include "binsearch_u32f.h"
#include "rtwtypes.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/
#define CtAp_TorqLmt_START_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

uint32_T plook_u32ff_binca(real32_T u, const real32_T bp[], uint32_T maxIndex,
  real32_T *fraction)
{
  uint32_T bpIndex;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
    *fraction = 0.0F;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32f(u, bp, maxIndex >> 1U, maxIndex);
    *fraction = (u - bp[bpIndex]) / (bp[bpIndex + 1U] - bp[bpIndex]);
  } else {
    bpIndex = maxIndex;
    *fraction = 0.0F;
  }

  return bpIndex;
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
