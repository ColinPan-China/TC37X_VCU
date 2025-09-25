/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_CtAp_LINHandler_Type.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application types header file for SW-C <CtAp_LINHandler>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_LINHANDLER_TYPE_H
# define RTE_CTAP_LINHANDLER_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef Cx0_1_1A
#   define Cx0_1_1A (0U)
#  endif

#  ifndef Cx1_200_200A
#   define Cx1_200_200A (1U)
#  endif

#  ifndef Cx2_1500_1500A
#   define Cx2_1500_1500A (2U)
#  endif

#  ifndef Cx3_Invalid
#   define Cx3_Invalid (3U)
#  endif

#  ifndef Cx0_OFF
#   define Cx0_OFF (0U)
#  endif

#  ifndef Cx1_ON
#   define Cx1_ON (1U)
#  endif

#  ifndef Cx2_FLASH
#   define Cx2_FLASH (2U)
#  endif

#  ifndef Cx0_RESERVED
#   define Cx0_RESERVED (0U)
#  endif

#  ifndef Cx1_Disabled
#   define Cx1_Disabled (1U)
#  endif

#  ifndef Cx2_Enabled
#   define Cx2_Enabled (2U)
#  endif

#  ifndef Cx3_RESERVED
#   define Cx3_RESERVED (3U)
#  endif

#  ifndef Cx0_No_request
#   define Cx0_No_request (0U)
#  endif

#  ifndef Cx1_First_level_reminder
#   define Cx1_First_level_reminder (1U)
#  endif

#  ifndef Cx2_Second_level_reminder
#   define Cx2_Second_level_reminder (2U)
#  endif

#  ifndef Cx3_Reserved
#   define Cx3_Reserved (3U)
#  endif

#  ifndef Cx00_Default_
#   define Cx00_Default_ (0U)
#  endif

#  ifndef Cx01_Flooded_
#   define Cx01_Flooded_ (1U)
#  endif

#  ifndef Cx02_AGM_
#   define Cx02_AGM_ (2U)
#  endif

#  ifndef Cx03_Graphite_
#   define Cx03_Graphite_ (3U)
#  endif

#  ifndef Cx0_Fully_sleep
#   define Cx0_Fully_sleep (0U)
#  endif

#  ifndef Cx1_Invisible_awake_CANwakeup
#   define Cx1_Invisible_awake_CANwakeup (1U)
#  endif

#  ifndef Cx2_Reserve
#   define Cx2_Reserve (2U)
#  endif

#  ifndef Cx3_Reserve
#   define Cx3_Reserve (3U)
#  endif

#  ifndef Cx4_Invisible_awake_OnlyHVon
#   define Cx4_Invisible_awake_OnlyHVon (4U)
#  endif

#  ifndef Cx5_Standby_Normal
#   define Cx5_Standby_Normal (5U)
#  endif

#  ifndef Cx6_Standby_OnlyLVon
#   define Cx6_Standby_OnlyLVon (6U)
#  endif

#  ifndef Cx7_Drive_Normal
#   define Cx7_Drive_Normal (7U)
#  endif

#  ifndef Cx8_Drive_LVFault
#   define Cx8_Drive_LVFault (8U)
#  endif

#  ifndef Cx0_False
#   define Cx0_False (0U)
#  endif

#  ifndef Cx1_Yellow
#   define Cx1_Yellow (1U)
#  endif

#  ifndef Cx2_Red
#   define Cx2_Red (2U)
#  endif

#  ifndef Cx0_BRAKEFLUID_NORMAL_INIT_DEFAULT
#   define Cx0_BRAKEFLUID_NORMAL_INIT_DEFAULT (0U)
#  endif

#  ifndef Cx1_BRAKEFLUID_EMPTY
#   define Cx1_BRAKEFLUID_EMPTY (1U)
#  endif

#  ifndef Cx2_RESERVED
#   define Cx2_RESERVED (2U)
#  endif

#  ifndef Cx0_Normal_
#   define Cx0_Normal_ (0U)
#  endif

#  ifndef Cx1_Degrade_
#   define Cx1_Degrade_ (1U)
#  endif

#  ifndef Cx2_Partial_
#   define Cx2_Partial_ (2U)
#  endif

#  ifndef Cx3_Inhibit_
#   define Cx3_Inhibit_ (3U)
#  endif

#  ifndef Cx4_0x4_0x7_Reserved
#   define Cx4_0x4_0x7_Reserved (4U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_LINHANDLER_TYPE_H */
