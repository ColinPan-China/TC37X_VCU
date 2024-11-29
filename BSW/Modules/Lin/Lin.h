/***********************************************************************************************************************
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2020 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  --------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/*!        \file  Lin.h
 *        \brief  AUTOSAR LIN Driver
 *
 *      \details  Core part of AUTOSAR LIN Driver
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  --------------------------------------------------------------------------------------------------------------------
 *  Lutz Pflueger                 vislpr        Vector Informatik GmbH
 *  Andreas Pick                  visap         Vector Informatik GmbH
 *  Jan Gaukel                    visjgl        Vector Informatik GmbH
 *  --------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  --------------------------------------------------------------------------------------------------------------------
 *  14.00.00  2017-12-01  vislpr  -             Implement new common part of AUTOSAR 4 LIN driver
 *  14.00.01  2018-03-06  visap   FIX-3684      Rework review findings
 *  14.00.02  2018-05-14  visjgl  TASK-75803    Added new infixed files for Tms570SciStd
 *  14.00.03  2018-06-05  visjgl  TASK-78012    Bugfix of the infix issue
 *  14.01.00  2018-09-06  visjgl  TASK-88563    MISRA 2012
 *                                TASK-68143    correct design flaw
 *                                TASK-69412    Implementation improvements
 *  14.01.01  2018-09-18  visjgl  TASK-91063    add missing MISRA 2012 justification
 *  15.00.00  2020-02-26  visjgl  STORY-11998   Master Slave Prototype
 *  15.00.01  2020-03-25  visjgl  MSR4-214      quality cleanup Master(ASIL) Slave(QM), ESCAN00105763
 **********************************************************************************************************************/


#if !defined (LIN_H)
#define LIN_H

/***********************************************************************************************************************
 * INCLUDES
 **********************************************************************************************************************/
#include "Lin_17_AscLin.h"

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

#define Lin_Config_Ptr                    (&Lin_17_AscLin_Config)
#define Lin_Init(a)                       Lin_17_AscLin_Init(a)
#define Lin_SendFrame(a,b)                Lin_17_AscLin_SendFrame((a), (b))
#define Lin_GoToSleep(a)                  Lin_17_AscLin_GoToSleep((a))
#define Lin_GoToSleepInternal(a)          Lin_17_AscLin_GoToSleepInternal((a))
#define Lin_Wakeup(a)                     Lin_17_AscLin_Wakeup((a))
#define Lin_WakeupInternal(a)             Lin_17_AscLin_WakeupInternal((a))
#define Lin_CheckWakeup(a)                Lin_17_AscLin_CheckWakeup((a))
#define Lin_GetStatus(a,b)                Lin_17_AscLin_GetStatus((a), (b))


#endif /* LIN_H */

/***********************************************************************************************************************
 *  END OF FILE: Lin.h
 **********************************************************************************************************************/
