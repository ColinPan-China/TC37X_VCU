/*******************************************************************************
**                                                                            **
** Copyright (C) Infineon Technologies (2018)                                 **
**                                                                            **
** All rights reserved.                                                       **
**                                                                            **
** This document contains proprietary information belonging to Infineon       **
** Technologies. Passing on and copying of this document, and communication   **
** of its contents is not permitted without prior written authorization.      **
**                                                                            **
********************************************************************************
**                                                                            **
**  FILENAME   : LinIf.h                                                      **
**                                                                            **
**  VERSION    : 1.0.0                                                        **
**                                                                            **
**  DATE       : 2018-08-23                                                   **
**                                                                            **
**  VARIANT    : NA                                                           **
**                                                                            **
**  PLATFORM   : Infineon AURIX2G                                             **
**                                                                            **
**  AUTHOR      : DL-AUTOSAR-Engineering                                      **
**                                                                            **
**  VENDOR      : Infineon Technologies                                       **
**                                                                            **
**  DESCRIPTION  : This header file exports                                   **
**                    -  LIN interface function declaration                   **
**                 Note: This file is for Evaluation Purpose Only             **
**                                                                            **
**  MAY BE CHANGED BY USER [yes/no]: yes                                      **
**                                                                            **
*******************************************************************************/

#ifndef LINIF_H
#define LINIF_H

/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/
#include "EcuM_Cbk.h"
#include "Lin_17_AscLin.h"

/*******************************************************************************
**                      Global Macro Definitions                              **
*******************************************************************************/

/*******************************************************************************
**                      Global Type Definitions                               **
*******************************************************************************/

/*******************************************************************************
**                      Global Constant Declarations                          **
*******************************************************************************/

/*******************************************************************************
**                      Global Variable Declarations                          **
*******************************************************************************/

/*******************************************************************************
**                      Global Function Declarations                          **
*******************************************************************************/
extern void LinIf_CheckWakeup( EcuM_WakeupSourceType WakeupSource);
/*******************************************************************************
**                      Global Inline Function Definitions                    **
*******************************************************************************/

#endif /* END OF  LINIF_H */

