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
 *  Filename:           intrp3d_fu32fla.c
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
#include "intrp3d_fu32fla.h"
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

real32_T intrp3d_fu32fla(const uint32_T bpIndex[], const real32_T frac[], const
  real32_T table[], const uint32_T stride[], const uint32_T maxIndex[])
{
  real32_T y;
  real32_T yL_0d0;
  uint32_T offset_0d;
  uint32_T offset_2d;

  /* Column-major Interpolation 3-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'wrapping'
   */
  offset_2d = (bpIndex[2U] * stride[2U]) + (bpIndex[1U] * stride[1U]) + bpIndex
    [0U];
  if (bpIndex[0U] == maxIndex[0U]) {
    y = table[offset_2d];
  } else {
    yL_0d0 = table[offset_2d];
    y = ((table[offset_2d + 1U] - yL_0d0) * frac[0U]) + yL_0d0;
  }

  if (bpIndex[1U] == maxIndex[1U]) {
  } else {
    offset_0d = offset_2d + stride[1U];
    if (bpIndex[0U] == maxIndex[0U]) {
      yL_0d0 = table[offset_0d];
    } else {
      yL_0d0 = table[offset_0d];
      yL_0d0 += (table[offset_0d + 1U] - yL_0d0) * frac[0U];
    }

    y += (yL_0d0 - y) * frac[1U];
  }

  if (bpIndex[2U] == maxIndex[2U]) {
  } else {
    real32_T yL_1d;
    offset_2d += stride[2U];
    if (bpIndex[0U] == maxIndex[0U]) {
      yL_1d = table[offset_2d];
    } else {
      yL_0d0 = table[offset_2d];
      yL_1d = ((table[offset_2d + 1U] - yL_0d0) * frac[0U]) + yL_0d0;
    }

    if (bpIndex[1U] == maxIndex[1U]) {
    } else {
      offset_0d = offset_2d + stride[1U];
      if (bpIndex[0U] == maxIndex[0U]) {
        yL_0d0 = table[offset_0d];
      } else {
        yL_0d0 = table[offset_0d];
        yL_0d0 += (table[offset_0d + 1U] - yL_0d0) * frac[0U];
      }

      yL_1d += (yL_0d0 - yL_1d) * frac[1U];
    }

    y += (yL_1d - y) * frac[2U];
  }

  return y;
}

#define CtAp_TorqLmt_STOP_SEC_CODE
#include "CtAp_TorqLmt_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
