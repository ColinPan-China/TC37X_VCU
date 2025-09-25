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
 *             File:  Rte_CtAp_CANHandler_Type.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application types header file for SW-C <CtAp_CANHandler>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_CANHANDLER_TYPE_H
# define RTE_CTAP_CANHANDLER_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define InvalidValue_Rte_DT_SG_BMS_BatInfor_02_SigGroup_0 (0U)

#  ifndef Cx00_No_Crash
#   define Cx00_No_Crash (0U)
#  endif

#  ifndef Cx01_Rollover
#   define Cx01_Rollover (1U)
#  endif

#  ifndef Cx02_BPT_Crash
#   define Cx02_BPT_Crash (2U)
#  endif

#  ifndef Cx03_Rollover_BPT
#   define Cx03_Rollover_BPT (3U)
#  endif

#  ifndef Cx04_Front_Crash
#   define Cx04_Front_Crash (4U)
#  endif

#  ifndef Cx05_Rollover_Front
#   define Cx05_Rollover_Front (5U)
#  endif

#  ifndef Cx06_BPT_Front
#   define Cx06_BPT_Front (6U)
#  endif

#  ifndef Cx07_Rollover_BPT_Front
#   define Cx07_Rollover_BPT_Front (7U)
#  endif

#  ifndef Cx08_Side_Crash
#   define Cx08_Side_Crash (8U)
#  endif

#  ifndef Cx09_Rollover_Side
#   define Cx09_Rollover_Side (9U)
#  endif

#  ifndef Cx0A_BPT_Side
#   define Cx0A_BPT_Side (10U)
#  endif

#  ifndef Cx0B_Rollover_BPT_Side
#   define Cx0B_Rollover_BPT_Side (11U)
#  endif

#  ifndef Cx0C_Front_Side
#   define Cx0C_Front_Side (12U)
#  endif

#  ifndef Cx0D_Rollover_Front_Side
#   define Cx0D_Rollover_Front_Side (13U)
#  endif

#  ifndef Cx0E_BPT_Front_Side
#   define Cx0E_BPT_Front_Side (14U)
#  endif

#  ifndef Cx0F_Rollover_BPT_Front_Side
#   define Cx0F_Rollover_BPT_Front_Side (15U)
#  endif

#  ifndef Cx10_Rear_Crash
#   define Cx10_Rear_Crash (16U)
#  endif

#  ifndef Cx11_Rollover_Rear
#   define Cx11_Rollover_Rear (17U)
#  endif

#  ifndef Cx12_BPT_Rear
#   define Cx12_BPT_Rear (18U)
#  endif

#  ifndef Cx13_Rollover_BPT_Rear
#   define Cx13_Rollover_BPT_Rear (19U)
#  endif

#  ifndef Cx14_Front_Rear
#   define Cx14_Front_Rear (20U)
#  endif

#  ifndef Cx15_Rollover_Front_Rear
#   define Cx15_Rollover_Front_Rear (21U)
#  endif

#  ifndef Cx16_BPT_Front_Rear
#   define Cx16_BPT_Front_Rear (22U)
#  endif

#  ifndef Cx17_Rollover_BPT_Front_Rear
#   define Cx17_Rollover_BPT_Front_Rear (23U)
#  endif

#  ifndef Cx18_Side_Rear
#   define Cx18_Side_Rear (24U)
#  endif

#  ifndef Cx19_Rollover_Side_Rear
#   define Cx19_Rollover_Side_Rear (25U)
#  endif

#  ifndef Cx1A_BPT_Side_Rear
#   define Cx1A_BPT_Side_Rear (26U)
#  endif

#  ifndef Cx1B_Rollover_BPT_Side_Rear
#   define Cx1B_Rollover_BPT_Side_Rear (27U)
#  endif

#  ifndef Cx1C_Front_Side_Rear
#   define Cx1C_Front_Side_Rear (28U)
#  endif

#  ifndef Cx1D_Rollover_Front_Side_Rear
#   define Cx1D_Rollover_Front_Side_Rear (29U)
#  endif

#  ifndef Cx1E_BPT_Front_Side_Rear
#   define Cx1E_BPT_Front_Side_Rear (30U)
#  endif

#  ifndef Cx1F_Rollover_BPT_Front_Side_Rear
#   define Cx1F_Rollover_BPT_Front_Side_Rear (31U)
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

#  ifndef Cx0_Invalid
#   define Cx0_Invalid (0U)
#  endif

#  ifndef Cx1_Valid
#   define Cx1_Valid (1U)
#  endif

#  ifndef Cx2_Reserved
#   define Cx2_Reserved (2U)
#  endif

#  ifndef Cx3_Reserved
#   define Cx3_Reserved (3U)
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

#  ifndef Cx0_No_Warning
#   define Cx0_No_Warning (0U)
#  endif

#  ifndef Cx1_Hands_Off_1st_Warning
#   define Cx1_Hands_Off_1st_Warning (1U)
#  endif

#  ifndef Cx2_Hands_Off_2nd_Warning
#   define Cx2_Hands_Off_2nd_Warning (2U)
#  endif

#  ifndef Cx3_Function_Automatic_exit_Warning
#   define Cx3_Function_Automatic_exit_Warning (3U)
#  endif

#  ifndef Cx4_Reserved
#   define Cx4_Reserved (4U)
#  endif

#  ifndef Cx5_Reserved
#   define Cx5_Reserved (5U)
#  endif

#  ifndef Cx6_Reserved
#   define Cx6_Reserved (6U)
#  endif

#  ifndef Cx7_Reserved
#   define Cx7_Reserved (7U)
#  endif

#  ifndef Cx0_No_Error
#   define Cx0_No_Error (0U)
#  endif

#  ifndef Cx1_Error
#   define Cx1_Error (1U)
#  endif

#  ifndef Cx0_Off
#   define Cx0_Off (0U)
#  endif

#  ifndef Cx1_Active_State
#   define Cx1_Active_State (1U)
#  endif

#  ifndef Cx2_Override_State
#   define Cx2_Override_State (2U)
#  endif

#  ifndef Cx3_Shut_off_State
#   define Cx3_Shut_off_State (3U)
#  endif

#  ifndef Cx4_Standby_State
#   define Cx4_Standby_State (4U)
#  endif

#  ifndef Cx5_Fail_State
#   define Cx5_Fail_State (5U)
#  endif

#  ifndef Cx0_NO_WARNING
#   define Cx0_NO_WARNING (0U)
#  endif

#  ifndef Cx1_PreWarning_to_car
#   define Cx1_PreWarning_to_car (1U)
#  endif

#  ifndef Cx2_Latent_distance_Warning
#   define Cx2_Latent_distance_Warning (2U)
#  endif

#  ifndef Cx3_Braking_to_car
#   define Cx3_Braking_to_car (3U)
#  endif

#  ifndef Cx4_PreWarning_to_PED
#   define Cx4_PreWarning_to_PED (4U)
#  endif

#  ifndef Cx5_Braking_to_PED
#   define Cx5_Braking_to_PED (5U)
#  endif

#  ifndef Cx0_No_level
#   define Cx0_No_level (0U)
#  endif

#  ifndef Cx1_Level_1
#   define Cx1_Level_1 (1U)
#  endif

#  ifndef Cx2_Level_2
#   define Cx2_Level_2 (2U)
#  endif

#  ifndef Cx3_Level_3
#   define Cx3_Level_3 (3U)
#  endif

#  ifndef Cx4_Level_4
#   define Cx4_Level_4 (4U)
#  endif

#  ifndef Cx1_Standby
#   define Cx1_Standby (1U)
#  endif

#  ifndef Cx2_Active
#   define Cx2_Active (2U)
#  endif

#  ifndef Cx3_Failure
#   define Cx3_Failure (3U)
#  endif

#  ifndef Cx0_ComfBrakeReq_NoReq
#   define Cx0_ComfBrakeReq_NoReq (0U)
#  endif

#  ifndef Cx1_ComfBrakeReq_Type1
#   define Cx1_ComfBrakeReq_Type1 (1U)
#  endif

#  ifndef Cx2_ComfBrakeReq_Type2
#   define Cx2_ComfBrakeReq_Type2 (2U)
#  endif

#  ifndef Cx0_None
#   define Cx0_None (0U)
#  endif

#  ifndef Cx1_APS
#   define Cx1_APS (1U)
#  endif

#  ifndef Cx2_RC
#   define Cx2_RC (2U)
#  endif

#  ifndef Cx0_Req_None
#   define Cx0_Req_None (0U)
#  endif

#  ifndef Cx1_Req_Drive
#   define Cx1_Req_Drive (1U)
#  endif

#  ifndef Cx2_Req_LSM
#   define Cx2_Req_LSM (2U)
#  endif

#  ifndef Cx1_Comfort
#   define Cx1_Comfort (1U)
#  endif

#  ifndef Cx2_Emergency
#   define Cx2_Emergency (2U)
#  endif

#  ifndef CxFFF_Invalid
#   define CxFFF_Invalid (4095U)
#  endif

#  ifndef Cx1F_Invalid
#   define Cx1F_Invalid (31U)
#  endif

#  ifndef Cx0_No_request
#   define Cx0_No_request (0U)
#  endif

#  ifndef Cx1_Stop_control_is_required
#   define Cx1_Stop_control_is_required (1U)
#  endif

#  ifndef Cx2_No_need_to_stop
#   define Cx2_No_need_to_stop (2U)
#  endif

#  ifndef Cx1_Standby_Inhibit
#   define Cx1_Standby_Inhibit (1U)
#  endif

#  ifndef Cx2_Standby_Available
#   define Cx2_Standby_Available (2U)
#  endif

#  ifndef Cx3_Active
#   define Cx3_Active (3U)
#  endif

#  ifndef Cx4_Override_longitudinal
#   define Cx4_Override_longitudinal (4U)
#  endif

#  ifndef Cx5_Override_lateral
#   define Cx5_Override_lateral (5U)
#  endif

#  ifndef Cx6_Failure
#   define Cx6_Failure (6U)
#  endif

#  ifndef Cx2_Failure
#   define Cx2_Failure (2U)
#  endif

#  ifndef Cx2_Background_searching
#   define Cx2_Background_searching (2U)
#  endif

#  ifndef Cx3_Searching
#   define Cx3_Searching (3U)
#  endif

#  ifndef Cx4_Guidance_active
#   define Cx4_Guidance_active (4U)
#  endif

#  ifndef Cx5_Recovery_interrupt
#   define Cx5_Recovery_interrupt (5U)
#  endif

#  ifndef Cx6_Completed
#   define Cx6_Completed (6U)
#  endif

#  ifndef Cx7_Failure
#   define Cx7_Failure (7U)
#  endif

#  ifndef Cx8_Terminated
#   define Cx8_Terminated (8U)
#  endif

#  ifndef Cx9_Reserved
#   define Cx9_Reserved (9U)
#  endif

#  ifndef CxA_Reserved
#   define CxA_Reserved (10U)
#  endif

#  ifndef CxB_Reserved
#   define CxB_Reserved (11U)
#  endif

#  ifndef CxC_Reserved
#   define CxC_Reserved (12U)
#  endif

#  ifndef CxD_Reserved
#   define CxD_Reserved (13U)
#  endif

#  ifndef CxE_Reserved
#   define CxE_Reserved (14U)
#  endif

#  ifndef CxF_Reserved
#   define CxF_Reserved (15U)
#  endif

#  ifndef Cx1_Prepare
#   define Cx1_Prepare (1U)
#  endif

#  ifndef Cx2_Standby
#   define Cx2_Standby (2U)
#  endif

#  ifndef Cx3_Moving
#   define Cx3_Moving (3U)
#  endif

#  ifndef Cx4_Recovery_interrupt
#   define Cx4_Recovery_interrupt (4U)
#  endif

#  ifndef Cx5_Voluntarily_Exit
#   define Cx5_Voluntarily_Exit (5U)
#  endif

#  ifndef Cx6_Passive_Exit
#   define Cx6_Passive_Exit (6U)
#  endif

#  ifndef Cx8_Reserved
#   define Cx8_Reserved (8U)
#  endif

#  ifndef Cx0_No_Request
#   define Cx0_No_Request (0U)
#  endif

#  ifndef Cx1_P
#   define Cx1_P (1U)
#  endif

#  ifndef Cx2_N
#   define Cx2_N (2U)
#  endif

#  ifndef Cx3_R
#   define Cx3_R (3U)
#  endif

#  ifndef Cx4_D
#   define Cx4_D (4U)
#  endif

#  ifndef Cx0_Non_auto_set
#   define Cx0_Non_auto_set (0U)
#  endif

#  ifndef Cx1_Door_open_auto_set
#   define Cx1_Door_open_auto_set (1U)
#  endif

#  ifndef Cx2_Door_close_auto_set
#   define Cx2_Door_close_auto_set (2U)
#  endif

#  ifndef Cx1_First_level_reminder
#   define Cx1_First_level_reminder (1U)
#  endif

#  ifndef Cx2_Second_level_reminder
#   define Cx2_Second_level_reminder (2U)
#  endif

#  ifndef Cx1_AUTO
#   define Cx1_AUTO (1U)
#  endif

#  ifndef Cx2_Low_speed
#   define Cx2_Low_speed (2U)
#  endif

#  ifndef Cx3_High_speed
#   define Cx3_High_speed (3U)
#  endif

#  ifndef Cx4_Intermittent
#   define Cx4_Intermittent (4U)
#  endif

#  ifndef Cx0_0
#   define Cx0_0 (0U)
#  endif

#  ifndef Cx1_1
#   define Cx1_1 (1U)
#  endif

#  ifndef Cx2_2
#   define Cx2_2 (2U)
#  endif

#  ifndef Cx3_3
#   define Cx3_3 (3U)
#  endif

#  ifndef Cx4_4
#   define Cx4_4 (4U)
#  endif

#  ifndef Cx5_5
#   define Cx5_5 (5U)
#  endif

#  ifndef Cx0_Default
#   define Cx0_Default (0U)
#  endif

#  ifndef Cx1_OFF
#   define Cx1_OFF (1U)
#  endif

#  ifndef Cx2_Local_ON
#   define Cx2_Local_ON (2U)
#  endif

#  ifndef Cx3_Reserve
#   define Cx3_Reserve (3U)
#  endif

#  ifndef Cx4_Reserve
#   define Cx4_Reserve (4U)
#  endif

#  ifndef Cx5_Reserve
#   define Cx5_Reserve (5U)
#  endif

#  ifndef Cx6_Reserve
#   define Cx6_Reserve (6U)
#  endif

#  ifndef Cx7_Invalid
#   define Cx7_Invalid (7U)
#  endif

#  ifndef Cx0_Reserved
#   define Cx0_Reserved (0U)
#  endif

#  ifndef Cx1_Off
#   define Cx1_Off (1U)
#  endif

#  ifndef Cx2_On
#   define Cx2_On (2U)
#  endif

#  ifndef Cx2_ON
#   define Cx2_ON (2U)
#  endif

#  ifndef Cx1_Low_speed
#   define Cx1_Low_speed (1U)
#  endif

#  ifndef Cx2_High_speed
#   define Cx2_High_speed (2U)
#  endif

#  ifndef Cx0_Not_reached
#   define Cx0_Not_reached (0U)
#  endif

#  ifndef Cx1_Reached
#   define Cx1_Reached (1U)
#  endif

#  ifndef Cx2_Untrustable
#   define Cx2_Untrustable (2U)
#  endif

#  ifndef Cx0_Normal
#   define Cx0_Normal (0U)
#  endif

#  ifndef Cx1_Over_current
#   define Cx1_Over_current (1U)
#  endif

#  ifndef Cx1_Abnormal
#   define Cx1_Abnormal (1U)
#  endif

#  ifndef Cx1_Over_temp
#   define Cx1_Over_temp (1U)
#  endif

#  ifndef Cx01_lead_acid_battery
#   define Cx01_lead_acid_battery (1U)
#  endif

#  ifndef Cx02_Ni_MH_battery
#   define Cx02_Ni_MH_battery (2U)
#  endif

#  ifndef Cx03_Lithium_iron_phosphate_battery
#   define Cx03_Lithium_iron_phosphate_battery (3U)
#  endif

#  ifndef Cx04_Lithium_manganate_battery
#   define Cx04_Lithium_manganate_battery (4U)
#  endif

#  ifndef Cx05_Lithium_cobalt_oxide_battery
#   define Cx05_Lithium_cobalt_oxide_battery (5U)
#  endif

#  ifndef Cx06_Ternary_material_battery
#   define Cx06_Ternary_material_battery (6U)
#  endif

#  ifndef Cx07_Polymer_lithium_ion_battery
#   define Cx07_Polymer_lithium_ion_battery (7U)
#  endif

#  ifndef Cx08_Lithium_titanate_battery
#   define Cx08_Lithium_titanate_battery (8U)
#  endif

#  ifndef Cx09_Reserved
#   define Cx09_Reserved (9U)
#  endif

#  ifndef Cx0A_Reserved
#   define Cx0A_Reserved (10U)
#  endif

#  ifndef Cx0B_Reserved
#   define Cx0B_Reserved (11U)
#  endif

#  ifndef Cx0C_Reserved
#   define Cx0C_Reserved (12U)
#  endif

#  ifndef Cx0D_Reserved
#   define Cx0D_Reserved (13U)
#  endif

#  ifndef Cx0E_Reserved
#   define Cx0E_Reserved (14U)
#  endif

#  ifndef Cx0F_Reserved
#   define Cx0F_Reserved (15U)
#  endif

#  ifndef Cx10_Reserved
#   define Cx10_Reserved (16U)
#  endif

#  ifndef Cx11_Reserved
#   define Cx11_Reserved (17U)
#  endif

#  ifndef Cx12_Reserved
#   define Cx12_Reserved (18U)
#  endif

#  ifndef Cx13_Reserved
#   define Cx13_Reserved (19U)
#  endif

#  ifndef Cx14_Reserved
#   define Cx14_Reserved (20U)
#  endif

#  ifndef Cx15_Reserved
#   define Cx15_Reserved (21U)
#  endif

#  ifndef Cx16_Reserved
#   define Cx16_Reserved (22U)
#  endif

#  ifndef Cx17_Reserved
#   define Cx17_Reserved (23U)
#  endif

#  ifndef Cx18_Reserved
#   define Cx18_Reserved (24U)
#  endif

#  ifndef Cx19_Reserved
#   define Cx19_Reserved (25U)
#  endif

#  ifndef Cx1A_Reserved
#   define Cx1A_Reserved (26U)
#  endif

#  ifndef Cx1B_Reserved
#   define Cx1B_Reserved (27U)
#  endif

#  ifndef Cx1C_Reserved
#   define Cx1C_Reserved (28U)
#  endif

#  ifndef Cx1D_Reserved
#   define Cx1D_Reserved (29U)
#  endif

#  ifndef Cx1E_Reserved
#   define Cx1E_Reserved (30U)
#  endif

#  ifndef Cx1F_Reserved
#   define Cx1F_Reserved (31U)
#  endif

#  ifndef Cx20_Reserved
#   define Cx20_Reserved (32U)
#  endif

#  ifndef Cx21_Reserved
#   define Cx21_Reserved (33U)
#  endif

#  ifndef Cx22_Reserved
#   define Cx22_Reserved (34U)
#  endif

#  ifndef Cx23_Reserved
#   define Cx23_Reserved (35U)
#  endif

#  ifndef Cx24_Reserved
#   define Cx24_Reserved (36U)
#  endif

#  ifndef Cx25_Reserved
#   define Cx25_Reserved (37U)
#  endif

#  ifndef Cx26_Reserved
#   define Cx26_Reserved (38U)
#  endif

#  ifndef Cx27_Reserved
#   define Cx27_Reserved (39U)
#  endif

#  ifndef Cx28_Reserved
#   define Cx28_Reserved (40U)
#  endif

#  ifndef Cx29_Reserved
#   define Cx29_Reserved (41U)
#  endif

#  ifndef Cx2A_Reserved
#   define Cx2A_Reserved (42U)
#  endif

#  ifndef Cx2B_Reserved
#   define Cx2B_Reserved (43U)
#  endif

#  ifndef Cx2C_Reserved
#   define Cx2C_Reserved (44U)
#  endif

#  ifndef Cx2D_Reserved
#   define Cx2D_Reserved (45U)
#  endif

#  ifndef Cx2E_Reserved
#   define Cx2E_Reserved (46U)
#  endif

#  ifndef Cx2F_Reserved
#   define Cx2F_Reserved (47U)
#  endif

#  ifndef Cx30_Reserved
#   define Cx30_Reserved (48U)
#  endif

#  ifndef Cx31_Reserved
#   define Cx31_Reserved (49U)
#  endif

#  ifndef Cx32_Reserved
#   define Cx32_Reserved (50U)
#  endif

#  ifndef Cx33_Reserved
#   define Cx33_Reserved (51U)
#  endif

#  ifndef Cx34_Reserved
#   define Cx34_Reserved (52U)
#  endif

#  ifndef Cx35_Reserved
#   define Cx35_Reserved (53U)
#  endif

#  ifndef Cx36_Reserved
#   define Cx36_Reserved (54U)
#  endif

#  ifndef Cx37_Reserved
#   define Cx37_Reserved (55U)
#  endif

#  ifndef Cx38_Reserved
#   define Cx38_Reserved (56U)
#  endif

#  ifndef Cx39_Reserved
#   define Cx39_Reserved (57U)
#  endif

#  ifndef Cx3A_Reserved
#   define Cx3A_Reserved (58U)
#  endif

#  ifndef Cx3B_Reserved
#   define Cx3B_Reserved (59U)
#  endif

#  ifndef Cx3C_Reserved
#   define Cx3C_Reserved (60U)
#  endif

#  ifndef Cx3D_Reserved
#   define Cx3D_Reserved (61U)
#  endif

#  ifndef Cx3E_Reserved
#   define Cx3E_Reserved (62U)
#  endif

#  ifndef Cx3F_Reserved
#   define Cx3F_Reserved (63U)
#  endif

#  ifndef Cx40_Reserved
#   define Cx40_Reserved (64U)
#  endif

#  ifndef Cx41_Reserved
#   define Cx41_Reserved (65U)
#  endif

#  ifndef Cx42_Reserved
#   define Cx42_Reserved (66U)
#  endif

#  ifndef Cx43_Reserved
#   define Cx43_Reserved (67U)
#  endif

#  ifndef Cx44_Reserved
#   define Cx44_Reserved (68U)
#  endif

#  ifndef Cx45_Reserved
#   define Cx45_Reserved (69U)
#  endif

#  ifndef Cx46_Reserved
#   define Cx46_Reserved (70U)
#  endif

#  ifndef Cx47_Reserved
#   define Cx47_Reserved (71U)
#  endif

#  ifndef Cx48_Reserved
#   define Cx48_Reserved (72U)
#  endif

#  ifndef Cx49_Reserved
#   define Cx49_Reserved (73U)
#  endif

#  ifndef Cx4A_Reserved
#   define Cx4A_Reserved (74U)
#  endif

#  ifndef Cx4B_Reserved
#   define Cx4B_Reserved (75U)
#  endif

#  ifndef Cx4C_Reserved
#   define Cx4C_Reserved (76U)
#  endif

#  ifndef Cx4D_Reserved
#   define Cx4D_Reserved (77U)
#  endif

#  ifndef Cx4E_Reserved
#   define Cx4E_Reserved (78U)
#  endif

#  ifndef Cx4F_Reserved
#   define Cx4F_Reserved (79U)
#  endif

#  ifndef Cx50_Reserved
#   define Cx50_Reserved (80U)
#  endif

#  ifndef Cx51_Reserved
#   define Cx51_Reserved (81U)
#  endif

#  ifndef Cx52_Reserved
#   define Cx52_Reserved (82U)
#  endif

#  ifndef Cx53_Reserved
#   define Cx53_Reserved (83U)
#  endif

#  ifndef Cx54_Reserved
#   define Cx54_Reserved (84U)
#  endif

#  ifndef Cx55_Reserved
#   define Cx55_Reserved (85U)
#  endif

#  ifndef Cx56_Reserved
#   define Cx56_Reserved (86U)
#  endif

#  ifndef Cx57_Reserved
#   define Cx57_Reserved (87U)
#  endif

#  ifndef Cx58_Reserved
#   define Cx58_Reserved (88U)
#  endif

#  ifndef Cx59_Reserved
#   define Cx59_Reserved (89U)
#  endif

#  ifndef Cx5A_Reserved
#   define Cx5A_Reserved (90U)
#  endif

#  ifndef Cx5B_Reserved
#   define Cx5B_Reserved (91U)
#  endif

#  ifndef Cx5C_Reserved
#   define Cx5C_Reserved (92U)
#  endif

#  ifndef Cx5D_Reserved
#   define Cx5D_Reserved (93U)
#  endif

#  ifndef Cx5E_Reserved
#   define Cx5E_Reserved (94U)
#  endif

#  ifndef Cx5F_Reserved
#   define Cx5F_Reserved (95U)
#  endif

#  ifndef Cx60_Reserved
#   define Cx60_Reserved (96U)
#  endif

#  ifndef Cx61_Reserved
#   define Cx61_Reserved (97U)
#  endif

#  ifndef Cx62_Reserved
#   define Cx62_Reserved (98U)
#  endif

#  ifndef Cx63_Reserved
#   define Cx63_Reserved (99U)
#  endif

#  ifndef Cx64_Reserved
#   define Cx64_Reserved (100U)
#  endif

#  ifndef Cx65_Reserved
#   define Cx65_Reserved (101U)
#  endif

#  ifndef Cx66_Reserved
#   define Cx66_Reserved (102U)
#  endif

#  ifndef Cx67_Reserved
#   define Cx67_Reserved (103U)
#  endif

#  ifndef Cx68_Reserved
#   define Cx68_Reserved (104U)
#  endif

#  ifndef Cx69_Reserved
#   define Cx69_Reserved (105U)
#  endif

#  ifndef Cx6A_Reserved
#   define Cx6A_Reserved (106U)
#  endif

#  ifndef Cx6B_Reserved
#   define Cx6B_Reserved (107U)
#  endif

#  ifndef Cx6C_Reserved
#   define Cx6C_Reserved (108U)
#  endif

#  ifndef Cx6D_Reserved
#   define Cx6D_Reserved (109U)
#  endif

#  ifndef Cx6E_Reserved
#   define Cx6E_Reserved (110U)
#  endif

#  ifndef Cx6F_Reserved
#   define Cx6F_Reserved (111U)
#  endif

#  ifndef Cx70_Reserved
#   define Cx70_Reserved (112U)
#  endif

#  ifndef Cx71_Reserved
#   define Cx71_Reserved (113U)
#  endif

#  ifndef Cx72_Reserved
#   define Cx72_Reserved (114U)
#  endif

#  ifndef Cx73_Reserved
#   define Cx73_Reserved (115U)
#  endif

#  ifndef Cx74_Reserved
#   define Cx74_Reserved (116U)
#  endif

#  ifndef Cx75_Reserved
#   define Cx75_Reserved (117U)
#  endif

#  ifndef Cx76_Reserved
#   define Cx76_Reserved (118U)
#  endif

#  ifndef Cx77_Reserved
#   define Cx77_Reserved (119U)
#  endif

#  ifndef Cx78_Reserved
#   define Cx78_Reserved (120U)
#  endif

#  ifndef Cx79_Reserved
#   define Cx79_Reserved (121U)
#  endif

#  ifndef Cx7A_Reserved
#   define Cx7A_Reserved (122U)
#  endif

#  ifndef Cx7B_Reserved
#   define Cx7B_Reserved (123U)
#  endif

#  ifndef Cx7C_Reserved
#   define Cx7C_Reserved (124U)
#  endif

#  ifndef Cx7D_Reserved
#   define Cx7D_Reserved (125U)
#  endif

#  ifndef Cx7E_Reserved
#   define Cx7E_Reserved (126U)
#  endif

#  ifndef Cx7F_Reserved
#   define Cx7F_Reserved (127U)
#  endif

#  ifndef Cx80_Reserved
#   define Cx80_Reserved (128U)
#  endif

#  ifndef Cx81_Reserved
#   define Cx81_Reserved (129U)
#  endif

#  ifndef Cx82_Reserved
#   define Cx82_Reserved (130U)
#  endif

#  ifndef Cx83_Reserved
#   define Cx83_Reserved (131U)
#  endif

#  ifndef Cx84_Reserved
#   define Cx84_Reserved (132U)
#  endif

#  ifndef Cx85_Reserved
#   define Cx85_Reserved (133U)
#  endif

#  ifndef Cx86_Reserved
#   define Cx86_Reserved (134U)
#  endif

#  ifndef Cx87_Reserved
#   define Cx87_Reserved (135U)
#  endif

#  ifndef Cx88_Reserved
#   define Cx88_Reserved (136U)
#  endif

#  ifndef Cx89_Reserved
#   define Cx89_Reserved (137U)
#  endif

#  ifndef Cx8A_Reserved
#   define Cx8A_Reserved (138U)
#  endif

#  ifndef Cx8B_Reserved
#   define Cx8B_Reserved (139U)
#  endif

#  ifndef Cx8C_Reserved
#   define Cx8C_Reserved (140U)
#  endif

#  ifndef Cx8D_Reserved
#   define Cx8D_Reserved (141U)
#  endif

#  ifndef Cx8E_Reserved
#   define Cx8E_Reserved (142U)
#  endif

#  ifndef Cx8F_Reserved
#   define Cx8F_Reserved (143U)
#  endif

#  ifndef Cx90_Reserved
#   define Cx90_Reserved (144U)
#  endif

#  ifndef Cx91_Reserved
#   define Cx91_Reserved (145U)
#  endif

#  ifndef Cx92_Reserved
#   define Cx92_Reserved (146U)
#  endif

#  ifndef Cx93_Reserved
#   define Cx93_Reserved (147U)
#  endif

#  ifndef Cx94_Reserved
#   define Cx94_Reserved (148U)
#  endif

#  ifndef Cx95_Reserved
#   define Cx95_Reserved (149U)
#  endif

#  ifndef Cx96_Reserved
#   define Cx96_Reserved (150U)
#  endif

#  ifndef Cx97_Reserved
#   define Cx97_Reserved (151U)
#  endif

#  ifndef Cx98_Reserved
#   define Cx98_Reserved (152U)
#  endif

#  ifndef Cx99_Reserved
#   define Cx99_Reserved (153U)
#  endif

#  ifndef Cx9A_Reserved
#   define Cx9A_Reserved (154U)
#  endif

#  ifndef Cx9B_Reserved
#   define Cx9B_Reserved (155U)
#  endif

#  ifndef Cx9C_Reserved
#   define Cx9C_Reserved (156U)
#  endif

#  ifndef Cx9D_Reserved
#   define Cx9D_Reserved (157U)
#  endif

#  ifndef Cx9E_Reserved
#   define Cx9E_Reserved (158U)
#  endif

#  ifndef Cx9F_Reserved
#   define Cx9F_Reserved (159U)
#  endif

#  ifndef CxA0_Reserved
#   define CxA0_Reserved (160U)
#  endif

#  ifndef CxA1_Reserved
#   define CxA1_Reserved (161U)
#  endif

#  ifndef CxA2_Reserved
#   define CxA2_Reserved (162U)
#  endif

#  ifndef CxA3_Reserved
#   define CxA3_Reserved (163U)
#  endif

#  ifndef CxA4_Reserved
#   define CxA4_Reserved (164U)
#  endif

#  ifndef CxA5_Reserved
#   define CxA5_Reserved (165U)
#  endif

#  ifndef CxA6_Reserved
#   define CxA6_Reserved (166U)
#  endif

#  ifndef CxA7_Reserved
#   define CxA7_Reserved (167U)
#  endif

#  ifndef CxA8_Reserved
#   define CxA8_Reserved (168U)
#  endif

#  ifndef CxA9_Reserved
#   define CxA9_Reserved (169U)
#  endif

#  ifndef CxAA_Reserved
#   define CxAA_Reserved (170U)
#  endif

#  ifndef CxAB_Reserved
#   define CxAB_Reserved (171U)
#  endif

#  ifndef CxAC_Reserved
#   define CxAC_Reserved (172U)
#  endif

#  ifndef CxAD_Reserved
#   define CxAD_Reserved (173U)
#  endif

#  ifndef CxAE_Reserved
#   define CxAE_Reserved (174U)
#  endif

#  ifndef CxAF_Reserved
#   define CxAF_Reserved (175U)
#  endif

#  ifndef CxB0_Reserved
#   define CxB0_Reserved (176U)
#  endif

#  ifndef CxB1_Reserved
#   define CxB1_Reserved (177U)
#  endif

#  ifndef CxB2_Reserved
#   define CxB2_Reserved (178U)
#  endif

#  ifndef CxB3_Reserved
#   define CxB3_Reserved (179U)
#  endif

#  ifndef CxB4_Reserved
#   define CxB4_Reserved (180U)
#  endif

#  ifndef CxB5_Reserved
#   define CxB5_Reserved (181U)
#  endif

#  ifndef CxB6_Reserved
#   define CxB6_Reserved (182U)
#  endif

#  ifndef CxB7_Reserved
#   define CxB7_Reserved (183U)
#  endif

#  ifndef CxB8_Reserved
#   define CxB8_Reserved (184U)
#  endif

#  ifndef CxB9_Reserved
#   define CxB9_Reserved (185U)
#  endif

#  ifndef CxBA_Reserved
#   define CxBA_Reserved (186U)
#  endif

#  ifndef CxBB_Reserved
#   define CxBB_Reserved (187U)
#  endif

#  ifndef CxBC_Reserved
#   define CxBC_Reserved (188U)
#  endif

#  ifndef CxBD_Reserved
#   define CxBD_Reserved (189U)
#  endif

#  ifndef CxBE_Reserved
#   define CxBE_Reserved (190U)
#  endif

#  ifndef CxBF_Reserved
#   define CxBF_Reserved (191U)
#  endif

#  ifndef CxC0_Reserved
#   define CxC0_Reserved (192U)
#  endif

#  ifndef CxC1_Reserved
#   define CxC1_Reserved (193U)
#  endif

#  ifndef CxC2_Reserved
#   define CxC2_Reserved (194U)
#  endif

#  ifndef CxC3_Reserved
#   define CxC3_Reserved (195U)
#  endif

#  ifndef CxC4_Reserved
#   define CxC4_Reserved (196U)
#  endif

#  ifndef CxC5_Reserved
#   define CxC5_Reserved (197U)
#  endif

#  ifndef CxC6_Reserved
#   define CxC6_Reserved (198U)
#  endif

#  ifndef CxC7_Reserved
#   define CxC7_Reserved (199U)
#  endif

#  ifndef CxC8_Reserved
#   define CxC8_Reserved (200U)
#  endif

#  ifndef CxC9_Reserved
#   define CxC9_Reserved (201U)
#  endif

#  ifndef CxCA_Reserved
#   define CxCA_Reserved (202U)
#  endif

#  ifndef CxCB_Reserved
#   define CxCB_Reserved (203U)
#  endif

#  ifndef CxCC_Reserved
#   define CxCC_Reserved (204U)
#  endif

#  ifndef CxCD_Reserved
#   define CxCD_Reserved (205U)
#  endif

#  ifndef CxCE_Reserved
#   define CxCE_Reserved (206U)
#  endif

#  ifndef CxCF_Reserved
#   define CxCF_Reserved (207U)
#  endif

#  ifndef CxD0_Reserved
#   define CxD0_Reserved (208U)
#  endif

#  ifndef CxD1_Reserved
#   define CxD1_Reserved (209U)
#  endif

#  ifndef CxD2_Reserved
#   define CxD2_Reserved (210U)
#  endif

#  ifndef CxD3_Reserved
#   define CxD3_Reserved (211U)
#  endif

#  ifndef CxD4_Reserved
#   define CxD4_Reserved (212U)
#  endif

#  ifndef CxD5_Reserved
#   define CxD5_Reserved (213U)
#  endif

#  ifndef CxD6_Reserved
#   define CxD6_Reserved (214U)
#  endif

#  ifndef CxD7_Reserved
#   define CxD7_Reserved (215U)
#  endif

#  ifndef CxD8_Reserved
#   define CxD8_Reserved (216U)
#  endif

#  ifndef CxD9_Reserved
#   define CxD9_Reserved (217U)
#  endif

#  ifndef CxDA_Reserved
#   define CxDA_Reserved (218U)
#  endif

#  ifndef CxDB_Reserved
#   define CxDB_Reserved (219U)
#  endif

#  ifndef CxDC_Reserved
#   define CxDC_Reserved (220U)
#  endif

#  ifndef CxDD_Reserved
#   define CxDD_Reserved (221U)
#  endif

#  ifndef CxDE_Reserved
#   define CxDE_Reserved (222U)
#  endif

#  ifndef CxDF_Reserved
#   define CxDF_Reserved (223U)
#  endif

#  ifndef CxE0_Reserved
#   define CxE0_Reserved (224U)
#  endif

#  ifndef CxE1_Reserved
#   define CxE1_Reserved (225U)
#  endif

#  ifndef CxE2_Reserved
#   define CxE2_Reserved (226U)
#  endif

#  ifndef CxE3_Reserved
#   define CxE3_Reserved (227U)
#  endif

#  ifndef CxE4_Reserved
#   define CxE4_Reserved (228U)
#  endif

#  ifndef CxE5_Reserved
#   define CxE5_Reserved (229U)
#  endif

#  ifndef CxE6_Reserved
#   define CxE6_Reserved (230U)
#  endif

#  ifndef CxE7_Reserved
#   define CxE7_Reserved (231U)
#  endif

#  ifndef CxE8_Reserved
#   define CxE8_Reserved (232U)
#  endif

#  ifndef CxE9_Reserved
#   define CxE9_Reserved (233U)
#  endif

#  ifndef CxEA_Reserved
#   define CxEA_Reserved (234U)
#  endif

#  ifndef CxEB_Reserved
#   define CxEB_Reserved (235U)
#  endif

#  ifndef CxEC_Reserved
#   define CxEC_Reserved (236U)
#  endif

#  ifndef CxED_Reserved
#   define CxED_Reserved (237U)
#  endif

#  ifndef CxEE_Reserved
#   define CxEE_Reserved (238U)
#  endif

#  ifndef CxEF_Reserved
#   define CxEF_Reserved (239U)
#  endif

#  ifndef CxF0_Reserved
#   define CxF0_Reserved (240U)
#  endif

#  ifndef CxF1_Reserved
#   define CxF1_Reserved (241U)
#  endif

#  ifndef CxF2_Reserved
#   define CxF2_Reserved (242U)
#  endif

#  ifndef CxF3_Reserved
#   define CxF3_Reserved (243U)
#  endif

#  ifndef CxF4_Reserved
#   define CxF4_Reserved (244U)
#  endif

#  ifndef CxF5_Reserved
#   define CxF5_Reserved (245U)
#  endif

#  ifndef CxF6_Reserved
#   define CxF6_Reserved (246U)
#  endif

#  ifndef CxF7_Reserved
#   define CxF7_Reserved (247U)
#  endif

#  ifndef CxF8_Reserved
#   define CxF8_Reserved (248U)
#  endif

#  ifndef CxF9_Reserved
#   define CxF9_Reserved (249U)
#  endif

#  ifndef CxFA_Reserved
#   define CxFA_Reserved (250U)
#  endif

#  ifndef CxFB_Reserved
#   define CxFB_Reserved (251U)
#  endif

#  ifndef CxFC_Reserved
#   define CxFC_Reserved (252U)
#  endif

#  ifndef CxFD_Reserved
#   define CxFD_Reserved (253U)
#  endif

#  ifndef CxFE_Reserved
#   define CxFE_Reserved (254U)
#  endif

#  ifndef CxFF_Reserved
#   define CxFF_Reserved (255U)
#  endif

#  ifndef Cx0_Normal_Completion
#   define Cx0_Normal_Completion (0U)
#  endif

#  ifndef Cx1_Abnormal_completion
#   define Cx1_Abnormal_completion (1U)
#  endif

#  ifndef Cx3_During_Charging
#   define Cx3_During_Charging (3U)
#  endif

#  ifndef Cx1_Heat_Request_only
#   define Cx1_Heat_Request_only (1U)
#  endif

#  ifndef Cx2_Heat_And_Charge_Request
#   define Cx2_Heat_And_Charge_Request (2U)
#  endif

#  ifndef Cx3_Charge_Only
#   define Cx3_Charge_Only (3U)
#  endif

#  ifndef Cx4_Cool_And_Charge_Request
#   define Cx4_Cool_And_Charge_Request (4U)
#  endif

#  ifndef Cx0_Not_charging
#   define Cx0_Not_charging (0U)
#  endif

#  ifndef Cx1_Heat_only
#   define Cx1_Heat_only (1U)
#  endif

#  ifndef Cx2_Charge_and_heat_DC_
#   define Cx2_Charge_and_heat_DC_ (2U)
#  endif

#  ifndef Cx3_Charge_and_heat_AC_
#   define Cx3_Charge_and_heat_AC_ (3U)
#  endif

#  ifndef Cx4_Charge_only_DC_
#   define Cx4_Charge_only_DC_ (4U)
#  endif

#  ifndef Cx5_Charge_only_AC_
#   define Cx5_Charge_only_AC_ (5U)
#  endif

#  ifndef Cx6_Charge_hold
#   define Cx6_Charge_hold (6U)
#  endif

#  ifndef Cx7_Charge_stop
#   define Cx7_Charge_stop (7U)
#  endif

#  ifndef Cx0_Ready
#   define Cx0_Ready (0U)
#  endif

#  ifndef Cx1_Constant_voltage
#   define Cx1_Constant_voltage (1U)
#  endif

#  ifndef Cx2_Constant_current
#   define Cx2_Constant_current (2U)
#  endif

#  ifndef Cx1_Fault_Level1
#   define Cx1_Fault_Level1 (1U)
#  endif

#  ifndef Cx2_Fault_Level2
#   define Cx2_Fault_Level2 (2U)
#  endif

#  ifndef Cx3_Fault_Level3
#   define Cx3_Fault_Level3 (3U)
#  endif

#  ifndef Cx1_level1
#   define Cx1_level1 (1U)
#  endif

#  ifndef Cx2_level2
#   define Cx2_level2 (2U)
#  endif

#  ifndef Cx3_level3
#   define Cx3_level3 (3U)
#  endif

#  ifndef Cx4_level4
#   define Cx4_level4 (4U)
#  endif

#  ifndef Cx0_Init
#   define Cx0_Init (0U)
#  endif

#  ifndef Cx1_Closed
#   define Cx1_Closed (1U)
#  endif

#  ifndef Cx2_Opened
#   define Cx2_Opened (2U)
#  endif

#  ifndef Cx3_Signal_Invalid
#   define Cx3_Signal_Invalid (3U)
#  endif

#  ifndef Cx0_Not_precharge
#   define Cx0_Not_precharge (0U)
#  endif

#  ifndef Cx1_Precharging
#   define Cx1_Precharging (1U)
#  endif

#  ifndef Cx2_Precharge_finished
#   define Cx2_Precharge_finished (2U)
#  endif

#  ifndef Cx3_Precharge_failed
#   define Cx3_Precharge_failed (3U)
#  endif

#  ifndef Cx0_Running_heat
#   define Cx0_Running_heat (0U)
#  endif

#  ifndef Cx1_Target_heat
#   define Cx1_Target_heat (1U)
#  endif

#  ifndef Cx2_App_heat
#   define Cx2_App_heat (2U)
#  endif

#  ifndef Cx3_Running_cool
#   define Cx3_Running_cool (3U)
#  endif

#  ifndef Cx4_not_heat_not_cool
#   define Cx4_not_heat_not_cool (4U)
#  endif

#  ifndef Cx0_Initialize
#   define Cx0_Initialize (0U)
#  endif

#  ifndef Cx2_Running
#   define Cx2_Running (2U)
#  endif

#  ifndef Cx3_DC_charge
#   define Cx3_DC_charge (3U)
#  endif

#  ifndef Cx4_AC_charge
#   define Cx4_AC_charge (4U)
#  endif

#  ifndef Cx5_Discharge
#   define Cx5_Discharge (5U)
#  endif

#  ifndef Cx6_Error
#   define Cx6_Error (6U)
#  endif

#  ifndef Cx0_
#   define Cx0_ (0U)
#  endif

#  ifndef Cx1_
#   define Cx1_ (1U)
#  endif

#  ifndef Cx2_
#   define Cx2_ (2U)
#  endif

#  ifndef Cx00_concept
#   define Cx00_concept (0U)
#  endif

#  ifndef Cx01_Sample_A
#   define Cx01_Sample_A (1U)
#  endif

#  ifndef Cx02_Sample_B
#   define Cx02_Sample_B (2U)
#  endif

#  ifndef Cx03_Sample_C
#   define Cx03_Sample_C (3U)
#  endif

#  ifndef Cx04_Sample_D
#   define Cx04_Sample_D (4U)
#  endif

#  ifndef Cx05_Sample_SW
#   define Cx05_Sample_SW (5U)
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

#  ifndef Cx0_Off_switch
#   define Cx0_Off_switch (0U)
#  endif

#  ifndef Cx1_manually_press_the_window_lift_switch
#   define Cx1_manually_press_the_window_lift_switch (1U)
#  endif

#  ifndef Cx2_automatically_press_the_window_lift_switch
#   define Cx2_automatically_press_the_window_lift_switch (2U)
#  endif

#  ifndef Cx3_manually_press_the_window_drop_switch
#   define Cx3_manually_press_the_window_drop_switch (3U)
#  endif

#  ifndef Cx4_automatically_press_the_window_drop_switch
#   define Cx4_automatically_press_the_window_drop_switch (4U)
#  endif

#  ifndef Cx5_Invalid
#   define Cx5_Invalid (5U)
#  endif

#  ifndef CxFF_Invalid
#   define CxFF_Invalid (255U)
#  endif

#  ifndef Cx1_Reserved
#   define Cx1_Reserved (1U)
#  endif

#  ifndef Cx2_Sport
#   define Cx2_Sport (2U)
#  endif

#  ifndef Cx3_Comfort
#   define Cx3_Comfort (3U)
#  endif

#  ifndef Cx0_No_Failure
#   define Cx0_No_Failure (0U)
#  endif

#  ifndef Cx1_Light_level_failure_indication_yellow_
#   define Cx1_Light_level_failure_indication_yellow_ (1U)
#  endif

#  ifndef Cx2_Heavy_level_failure_indication_red_
#   define Cx2_Heavy_level_failure_indication_red_ (2U)
#  endif

#  ifndef Cx3_Invalid
#   define Cx3_Invalid (3U)
#  endif

#  ifndef Cx0_NotAvailable
#   define Cx0_NotAvailable (0U)
#  endif

#  ifndef Cx1_Brake_failure
#   define Cx1_Brake_failure (1U)
#  endif

#  ifndef Cx2_Excessive_slope
#   define Cx2_Excessive_slope (2U)
#  endif

#  ifndef Cx3_Available
#   define Cx3_Available (3U)
#  endif

#  ifndef Cx1_Drive
#   define Cx1_Drive (1U)
#  endif

#  ifndef Cx2_LSM
#   define Cx2_LSM (2U)
#  endif

#  ifndef Cx3_reserved
#   define Cx3_reserved (3U)
#  endif

#  ifndef Cx0_INACTIVE
#   define Cx0_INACTIVE (0U)
#  endif

#  ifndef Cx1_ACTIVE
#   define Cx1_ACTIVE (1U)
#  endif

#  ifndef Cx0_AxCapbl_Full
#   define Cx0_AxCapbl_Full (0U)
#  endif

#  ifndef Cx1_reversed
#   define Cx1_reversed (1U)
#  endif

#  ifndef Cx2_AxCapbl_VehBlocked
#   define Cx2_AxCapbl_VehBlocked (2U)
#  endif

#  ifndef Cx3_reversed
#   define Cx3_reversed (3U)
#  endif

#  ifndef Cx1_STANDBY
#   define Cx1_STANDBY (1U)
#  endif

#  ifndef Cx2_ACTIVE
#   define Cx2_ACTIVE (2U)
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

#  ifndef Cx0_brakelightOFF
#   define Cx0_brakelightOFF (0U)
#  endif

#  ifndef Cx1_brakelightON
#   define Cx1_brakelightON (1U)
#  endif

#  ifndef Cx2_notused
#   define Cx2_notused (2U)
#  endif

#  ifndef Cx3_signalnotavailable
#   define Cx3_signalnotavailable (3U)
#  endif

#  ifndef Cx0_NOT_PRESSED_INIT_DEFAULT
#   define Cx0_NOT_PRESSED_INIT_DEFAULT (0U)
#  endif

#  ifndef Cx1_PRESSED
#   define Cx1_PRESSED (1U)
#  endif

#  ifndef Cx3_ERROR
#   define Cx3_ERROR (3U)
#  endif

#  ifndef Cx0_MasterMode
#   define Cx0_MasterMode (0U)
#  endif

#  ifndef Cx1_SlaveMode
#   define Cx1_SlaveMode (1U)
#  endif

#  ifndef Cx0_LampOFF
#   define Cx0_LampOFF (0U)
#  endif

#  ifndef Cx1_LampON
#   define Cx1_LampON (1U)
#  endif

#  ifndef Cx0_No_error
#   define Cx0_No_error (0U)
#  endif

#  ifndef Cx1_error
#   define Cx1_error (1U)
#  endif

#  ifndef Cx2_flash
#   define Cx2_flash (2U)
#  endif

#  ifndef Cx1_Park_Brake_Applied
#   define Cx1_Park_Brake_Applied (1U)
#  endif

#  ifndef Cx2_Park_Brake_Released
#   define Cx2_Park_Brake_Released (2U)
#  endif

#  ifndef Cx3_Parking_brake_malfunction_Visit_service_center_to_fix_the_issue
#   define Cx3_Parking_brake_malfunction_Visit_service_center_to_fix_the_issue (3U)
#  endif

#  ifndef Cx0_UNKNOWN
#   define Cx0_UNKNOWN (0U)
#  endif

#  ifndef Cx1_APPLIED
#   define Cx1_APPLIED (1U)
#  endif

#  ifndef Cx2_RELEASED
#   define Cx2_RELEASED (2U)
#  endif

#  ifndef Cx3_APPLY_IN_PROGRESS
#   define Cx3_APPLY_IN_PROGRESS (3U)
#  endif

#  ifndef Cx4_RELEASE_IN_PROGRESS
#   define Cx4_RELEASE_IN_PROGRESS (4U)
#  endif

#  ifndef Cx5_COMPLETELY_RELEASED
#   define Cx5_COMPLETELY_RELEASED (5U)
#  endif

#  ifndef Cx6_DYNAMIC_APPLY
#   define Cx6_DYNAMIC_APPLY (6U)
#  endif

#  ifndef Cx7_RESERVED
#   define Cx7_RESERVED (7U)
#  endif

#  ifndef Cx0_ESC_lamp_ON
#   define Cx0_ESC_lamp_ON (0U)
#  endif

#  ifndef Cx1_ESC_lamp_OFF
#   define Cx1_ESC_lamp_OFF (1U)
#  endif

#  ifndef Cx2_ESC_lamp_FLASH
#   define Cx2_ESC_lamp_FLASH (2U)
#  endif

#  ifndef Cx0_Standstill
#   define Cx0_Standstill (0U)
#  endif

#  ifndef Cx1_Forward
#   define Cx1_Forward (1U)
#  endif

#  ifndef Cx2_Backward
#   define Cx2_Backward (2U)
#  endif

#  ifndef Cx2_Signalnotavailable
#   define Cx2_Signalnotavailable (2U)
#  endif

#  ifndef Cx1_Degrade
#   define Cx1_Degrade (1U)
#  endif

#  ifndef Cx2_Partial
#   define Cx2_Partial (2U)
#  endif

#  ifndef Cx3_Inhibit
#   define Cx3_Inhibit (3U)
#  endif

#  ifndef Cx0_Available
#   define Cx0_Available (0U)
#  endif

#  ifndef Cx1_Not_Available
#   define Cx1_Not_Available (1U)
#  endif

#  ifndef Cx0_NOT_STANDSTILL
#   define Cx0_NOT_STANDSTILL (0U)
#  endif

#  ifndef Cx1_STANDSTILL
#   define Cx1_STANDSTILL (1U)
#  endif

#  ifndef Cx0_NotIntialized
#   define Cx0_NotIntialized (0U)
#  endif

#  ifndef Cx1_Normal
#   define Cx1_Normal (1U)
#  endif

#  ifndef Cx2_Faulty
#   define Cx2_Faulty (2U)
#  endif

#  ifndef Cx1_Charge_ON
#   define Cx1_Charge_ON (1U)
#  endif

#  ifndef Cx2_Charge_OFF
#   define Cx2_Charge_OFF (2U)
#  endif

#  ifndef Cx0_NO_Request
#   define Cx0_NO_Request (0U)
#  endif

#  ifndef Cx2_Primary_energy_recovery_weak_
#   define Cx2_Primary_energy_recovery_weak_ (2U)
#  endif

#  ifndef Cx3_Secondary_energy_recovery_medium_
#   define Cx3_Secondary_energy_recovery_medium_ (3U)
#  endif

#  ifndef Cx4_Tertiary_energy_recovery_strong_
#   define Cx4_Tertiary_energy_recovery_strong_ (4U)
#  endif

#  ifndef Cx1_ECO
#   define Cx1_ECO (1U)
#  endif

#  ifndef Cx2_NORMAL
#   define Cx2_NORMAL (2U)
#  endif

#  ifndef Cx3_SPORT
#   define Cx3_SPORT (3U)
#  endif

#  ifndef Cx4_OnePedal
#   define Cx4_OnePedal (4U)
#  endif

#  ifndef Cx00_No_request
#   define Cx00_No_request (0U)
#  endif

#  ifndef Cx01_1_170
#   define Cx01_1_170 (1U)
#  endif

#  ifndef Cx02_1_170
#   define Cx02_1_170 (2U)
#  endif

#  ifndef Cx03_1_170
#   define Cx03_1_170 (3U)
#  endif

#  ifndef Cx04_1_170
#   define Cx04_1_170 (4U)
#  endif

#  ifndef Cx05_1_170
#   define Cx05_1_170 (5U)
#  endif

#  ifndef Cx06_1_170
#   define Cx06_1_170 (6U)
#  endif

#  ifndef Cx07_1_170
#   define Cx07_1_170 (7U)
#  endif

#  ifndef Cx08_1_170
#   define Cx08_1_170 (8U)
#  endif

#  ifndef Cx09_1_170
#   define Cx09_1_170 (9U)
#  endif

#  ifndef Cx0A_1_170
#   define Cx0A_1_170 (10U)
#  endif

#  ifndef Cx0B_1_170
#   define Cx0B_1_170 (11U)
#  endif

#  ifndef Cx0C_1_170
#   define Cx0C_1_170 (12U)
#  endif

#  ifndef Cx0D_1_170
#   define Cx0D_1_170 (13U)
#  endif

#  ifndef Cx0E_1_170
#   define Cx0E_1_170 (14U)
#  endif

#  ifndef Cx0F_1_170
#   define Cx0F_1_170 (15U)
#  endif

#  ifndef Cx10_1_170
#   define Cx10_1_170 (16U)
#  endif

#  ifndef Cx11_1_170
#   define Cx11_1_170 (17U)
#  endif

#  ifndef Cx12_1_170
#   define Cx12_1_170 (18U)
#  endif

#  ifndef Cx13_1_170
#   define Cx13_1_170 (19U)
#  endif

#  ifndef Cx14_1_170
#   define Cx14_1_170 (20U)
#  endif

#  ifndef Cx15_1_170
#   define Cx15_1_170 (21U)
#  endif

#  ifndef Cx16_1_170
#   define Cx16_1_170 (22U)
#  endif

#  ifndef Cx17_1_170
#   define Cx17_1_170 (23U)
#  endif

#  ifndef Cx18_1_170
#   define Cx18_1_170 (24U)
#  endif

#  ifndef Cx19_1_170
#   define Cx19_1_170 (25U)
#  endif

#  ifndef Cx1A_1_170
#   define Cx1A_1_170 (26U)
#  endif

#  ifndef Cx1B_1_170
#   define Cx1B_1_170 (27U)
#  endif

#  ifndef Cx1C_1_170
#   define Cx1C_1_170 (28U)
#  endif

#  ifndef Cx1D_1_170
#   define Cx1D_1_170 (29U)
#  endif

#  ifndef Cx1E_1_170
#   define Cx1E_1_170 (30U)
#  endif

#  ifndef Cx1F_1_170
#   define Cx1F_1_170 (31U)
#  endif

#  ifndef Cx20_1_170
#   define Cx20_1_170 (32U)
#  endif

#  ifndef Cx21_1_170
#   define Cx21_1_170 (33U)
#  endif

#  ifndef Cx22_1_170
#   define Cx22_1_170 (34U)
#  endif

#  ifndef Cx23_1_170
#   define Cx23_1_170 (35U)
#  endif

#  ifndef Cx24_1_170
#   define Cx24_1_170 (36U)
#  endif

#  ifndef Cx25_1_170
#   define Cx25_1_170 (37U)
#  endif

#  ifndef Cx26_1_170
#   define Cx26_1_170 (38U)
#  endif

#  ifndef Cx27_1_170
#   define Cx27_1_170 (39U)
#  endif

#  ifndef Cx28_1_170
#   define Cx28_1_170 (40U)
#  endif

#  ifndef Cx29_1_170
#   define Cx29_1_170 (41U)
#  endif

#  ifndef Cx2A_1_170
#   define Cx2A_1_170 (42U)
#  endif

#  ifndef Cx2B_1_170
#   define Cx2B_1_170 (43U)
#  endif

#  ifndef Cx2C_1_170
#   define Cx2C_1_170 (44U)
#  endif

#  ifndef Cx2D_1_170
#   define Cx2D_1_170 (45U)
#  endif

#  ifndef Cx2E_1_170
#   define Cx2E_1_170 (46U)
#  endif

#  ifndef Cx2F_1_170
#   define Cx2F_1_170 (47U)
#  endif

#  ifndef Cx30_1_170
#   define Cx30_1_170 (48U)
#  endif

#  ifndef Cx31_1_170
#   define Cx31_1_170 (49U)
#  endif

#  ifndef Cx32_1_170
#   define Cx32_1_170 (50U)
#  endif

#  ifndef Cx33_1_170
#   define Cx33_1_170 (51U)
#  endif

#  ifndef Cx34_1_170
#   define Cx34_1_170 (52U)
#  endif

#  ifndef Cx35_1_170
#   define Cx35_1_170 (53U)
#  endif

#  ifndef Cx36_1_170
#   define Cx36_1_170 (54U)
#  endif

#  ifndef Cx37_1_170
#   define Cx37_1_170 (55U)
#  endif

#  ifndef Cx38_1_170
#   define Cx38_1_170 (56U)
#  endif

#  ifndef Cx39_1_170
#   define Cx39_1_170 (57U)
#  endif

#  ifndef Cx3A_1_170
#   define Cx3A_1_170 (58U)
#  endif

#  ifndef Cx3B_1_170
#   define Cx3B_1_170 (59U)
#  endif

#  ifndef Cx3C_1_170
#   define Cx3C_1_170 (60U)
#  endif

#  ifndef Cx3D_1_170
#   define Cx3D_1_170 (61U)
#  endif

#  ifndef Cx3E_1_170
#   define Cx3E_1_170 (62U)
#  endif

#  ifndef Cx3F_1_170
#   define Cx3F_1_170 (63U)
#  endif

#  ifndef Cx40_1_170
#   define Cx40_1_170 (64U)
#  endif

#  ifndef Cx41_1_170
#   define Cx41_1_170 (65U)
#  endif

#  ifndef Cx42_1_170
#   define Cx42_1_170 (66U)
#  endif

#  ifndef Cx43_1_170
#   define Cx43_1_170 (67U)
#  endif

#  ifndef Cx44_1_170
#   define Cx44_1_170 (68U)
#  endif

#  ifndef Cx45_1_170
#   define Cx45_1_170 (69U)
#  endif

#  ifndef Cx46_1_170
#   define Cx46_1_170 (70U)
#  endif

#  ifndef Cx47_1_170
#   define Cx47_1_170 (71U)
#  endif

#  ifndef Cx48_1_170
#   define Cx48_1_170 (72U)
#  endif

#  ifndef Cx49_1_170
#   define Cx49_1_170 (73U)
#  endif

#  ifndef Cx4A_1_170
#   define Cx4A_1_170 (74U)
#  endif

#  ifndef Cx4B_1_170
#   define Cx4B_1_170 (75U)
#  endif

#  ifndef Cx4C_1_170
#   define Cx4C_1_170 (76U)
#  endif

#  ifndef Cx4D_1_170
#   define Cx4D_1_170 (77U)
#  endif

#  ifndef Cx4E_1_170
#   define Cx4E_1_170 (78U)
#  endif

#  ifndef Cx4F_1_170
#   define Cx4F_1_170 (79U)
#  endif

#  ifndef Cx50_1_170
#   define Cx50_1_170 (80U)
#  endif

#  ifndef Cx51_1_170
#   define Cx51_1_170 (81U)
#  endif

#  ifndef Cx52_1_170
#   define Cx52_1_170 (82U)
#  endif

#  ifndef Cx53_1_170
#   define Cx53_1_170 (83U)
#  endif

#  ifndef Cx54_1_170
#   define Cx54_1_170 (84U)
#  endif

#  ifndef Cx55_1_170
#   define Cx55_1_170 (85U)
#  endif

#  ifndef Cx56_1_170
#   define Cx56_1_170 (86U)
#  endif

#  ifndef Cx57_1_170
#   define Cx57_1_170 (87U)
#  endif

#  ifndef Cx58_1_170
#   define Cx58_1_170 (88U)
#  endif

#  ifndef Cx59_1_170
#   define Cx59_1_170 (89U)
#  endif

#  ifndef Cx5A_1_170
#   define Cx5A_1_170 (90U)
#  endif

#  ifndef Cx5B_1_170
#   define Cx5B_1_170 (91U)
#  endif

#  ifndef Cx5C_1_170
#   define Cx5C_1_170 (92U)
#  endif

#  ifndef Cx5D_1_170
#   define Cx5D_1_170 (93U)
#  endif

#  ifndef Cx5E_1_170
#   define Cx5E_1_170 (94U)
#  endif

#  ifndef Cx5F_1_170
#   define Cx5F_1_170 (95U)
#  endif

#  ifndef Cx60_1_170
#   define Cx60_1_170 (96U)
#  endif

#  ifndef Cx61_1_170
#   define Cx61_1_170 (97U)
#  endif

#  ifndef Cx62_1_170
#   define Cx62_1_170 (98U)
#  endif

#  ifndef Cx63_1_170
#   define Cx63_1_170 (99U)
#  endif

#  ifndef Cx64_1_170
#   define Cx64_1_170 (100U)
#  endif

#  ifndef Cx65_1_170
#   define Cx65_1_170 (101U)
#  endif

#  ifndef Cx66_1_170
#   define Cx66_1_170 (102U)
#  endif

#  ifndef Cx67_1_170
#   define Cx67_1_170 (103U)
#  endif

#  ifndef Cx68_1_170
#   define Cx68_1_170 (104U)
#  endif

#  ifndef Cx69_1_170
#   define Cx69_1_170 (105U)
#  endif

#  ifndef Cx6A_1_170
#   define Cx6A_1_170 (106U)
#  endif

#  ifndef Cx6B_1_170
#   define Cx6B_1_170 (107U)
#  endif

#  ifndef Cx6C_1_170
#   define Cx6C_1_170 (108U)
#  endif

#  ifndef Cx6D_1_170
#   define Cx6D_1_170 (109U)
#  endif

#  ifndef Cx6E_1_170
#   define Cx6E_1_170 (110U)
#  endif

#  ifndef Cx6F_1_170
#   define Cx6F_1_170 (111U)
#  endif

#  ifndef Cx70_1_170
#   define Cx70_1_170 (112U)
#  endif

#  ifndef Cx71_1_170
#   define Cx71_1_170 (113U)
#  endif

#  ifndef Cx72_1_170
#   define Cx72_1_170 (114U)
#  endif

#  ifndef Cx73_1_170
#   define Cx73_1_170 (115U)
#  endif

#  ifndef Cx74_1_170
#   define Cx74_1_170 (116U)
#  endif

#  ifndef Cx75_1_170
#   define Cx75_1_170 (117U)
#  endif

#  ifndef Cx76_1_170
#   define Cx76_1_170 (118U)
#  endif

#  ifndef Cx77_1_170
#   define Cx77_1_170 (119U)
#  endif

#  ifndef Cx78_1_170
#   define Cx78_1_170 (120U)
#  endif

#  ifndef Cx79_1_170
#   define Cx79_1_170 (121U)
#  endif

#  ifndef Cx7A_1_170
#   define Cx7A_1_170 (122U)
#  endif

#  ifndef Cx7B_1_170
#   define Cx7B_1_170 (123U)
#  endif

#  ifndef Cx7C_1_170
#   define Cx7C_1_170 (124U)
#  endif

#  ifndef Cx7D_1_170
#   define Cx7D_1_170 (125U)
#  endif

#  ifndef Cx7E_1_170
#   define Cx7E_1_170 (126U)
#  endif

#  ifndef Cx7F_1_170
#   define Cx7F_1_170 (127U)
#  endif

#  ifndef Cx80_1_170
#   define Cx80_1_170 (128U)
#  endif

#  ifndef Cx81_1_170
#   define Cx81_1_170 (129U)
#  endif

#  ifndef Cx82_1_170
#   define Cx82_1_170 (130U)
#  endif

#  ifndef Cx83_1_170
#   define Cx83_1_170 (131U)
#  endif

#  ifndef Cx84_1_170
#   define Cx84_1_170 (132U)
#  endif

#  ifndef Cx85_1_170
#   define Cx85_1_170 (133U)
#  endif

#  ifndef Cx86_1_170
#   define Cx86_1_170 (134U)
#  endif

#  ifndef Cx87_1_170
#   define Cx87_1_170 (135U)
#  endif

#  ifndef Cx88_1_170
#   define Cx88_1_170 (136U)
#  endif

#  ifndef Cx89_1_170
#   define Cx89_1_170 (137U)
#  endif

#  ifndef Cx8A_1_170
#   define Cx8A_1_170 (138U)
#  endif

#  ifndef Cx8B_1_170
#   define Cx8B_1_170 (139U)
#  endif

#  ifndef Cx8C_1_170
#   define Cx8C_1_170 (140U)
#  endif

#  ifndef Cx8D_1_170
#   define Cx8D_1_170 (141U)
#  endif

#  ifndef Cx8E_1_170
#   define Cx8E_1_170 (142U)
#  endif

#  ifndef Cx8F_1_170
#   define Cx8F_1_170 (143U)
#  endif

#  ifndef Cx90_1_170
#   define Cx90_1_170 (144U)
#  endif

#  ifndef Cx91_1_170
#   define Cx91_1_170 (145U)
#  endif

#  ifndef Cx92_1_170
#   define Cx92_1_170 (146U)
#  endif

#  ifndef Cx93_1_170
#   define Cx93_1_170 (147U)
#  endif

#  ifndef Cx94_1_170
#   define Cx94_1_170 (148U)
#  endif

#  ifndef Cx95_1_170
#   define Cx95_1_170 (149U)
#  endif

#  ifndef Cx96_1_170
#   define Cx96_1_170 (150U)
#  endif

#  ifndef Cx97_1_170
#   define Cx97_1_170 (151U)
#  endif

#  ifndef Cx98_1_170
#   define Cx98_1_170 (152U)
#  endif

#  ifndef Cx99_1_170
#   define Cx99_1_170 (153U)
#  endif

#  ifndef Cx9A_1_170
#   define Cx9A_1_170 (154U)
#  endif

#  ifndef Cx9B_1_170
#   define Cx9B_1_170 (155U)
#  endif

#  ifndef Cx9C_1_170
#   define Cx9C_1_170 (156U)
#  endif

#  ifndef Cx9D_1_170
#   define Cx9D_1_170 (157U)
#  endif

#  ifndef Cx9E_1_170
#   define Cx9E_1_170 (158U)
#  endif

#  ifndef Cx9F_1_170
#   define Cx9F_1_170 (159U)
#  endif

#  ifndef CxA0_1_170
#   define CxA0_1_170 (160U)
#  endif

#  ifndef CxA1_1_170
#   define CxA1_1_170 (161U)
#  endif

#  ifndef CxA2_1_170
#   define CxA2_1_170 (162U)
#  endif

#  ifndef CxA3_1_170
#   define CxA3_1_170 (163U)
#  endif

#  ifndef CxA4_1_170
#   define CxA4_1_170 (164U)
#  endif

#  ifndef CxA5_1_170
#   define CxA5_1_170 (165U)
#  endif

#  ifndef CxA6_1_170
#   define CxA6_1_170 (166U)
#  endif

#  ifndef CxA7_1_170
#   define CxA7_1_170 (167U)
#  endif

#  ifndef CxA8_1_170
#   define CxA8_1_170 (168U)
#  endif

#  ifndef CxA9_1_170
#   define CxA9_1_170 (169U)
#  endif

#  ifndef CxAA_1_170
#   define CxAA_1_170 (170U)
#  endif

#  ifndef Cx0_NO_request
#   define Cx0_NO_request (0U)
#  endif

#  ifndef Cx5_Invaild
#   define Cx5_Invaild (5U)
#  endif

#  ifndef Cx1_Cancel
#   define Cx1_Cancel (1U)
#  endif

#  ifndef Cx2_Open
#   define Cx2_Open (2U)
#  endif

#  ifndef Cx1_UnLock
#   define Cx1_UnLock (1U)
#  endif

#  ifndef Cx2_Lock
#   define Cx2_Lock (2U)
#  endif

#  ifndef CxFE_No_Request
#   define CxFE_No_Request (254U)
#  endif

#  ifndef Cx1_On
#   define Cx1_On (1U)
#  endif

#  ifndef Cx1_LV1_Minor_fault
#   define Cx1_LV1_Minor_fault (1U)
#  endif

#  ifndef Cx2_LV2_Limited_power_by_a_small_margin
#   define Cx2_LV2_Limited_power_by_a_small_margin (2U)
#  endif

#  ifndef Cx3_LV3_Greatly_limited_power
#   define Cx3_LV3_Greatly_limited_power (3U)
#  endif

#  ifndef Cx4_LV4_Stop_the_output_Fault_enable_recovery_
#   define Cx4_LV4_Stop_the_output_Fault_enable_recovery_ (4U)
#  endif

#  ifndef Cx5_LV5_Stop_the_output_Fault_disable_recovery_
#   define Cx5_LV5_Stop_the_output_Fault_disable_recovery_ (5U)
#  endif

#  ifndef Cx0_Normal_Temperature
#   define Cx0_Normal_Temperature (0U)
#  endif

#  ifndef Cx1_Heating_alarm_1
#   define Cx1_Heating_alarm_1 (1U)
#  endif

#  ifndef Cx2_Heating_alarm_2
#   define Cx2_Heating_alarm_2 (2U)
#  endif

#  ifndef Cx3_Over_Heating
#   define Cx3_Over_Heating (3U)
#  endif

#  ifndef Cx3FE_Abnormal
#   define Cx3FE_Abnormal (1022U)
#  endif

#  ifndef Cx3FF_Invalid
#   define Cx3FF_Invalid (1023U)
#  endif

#  ifndef Cx0_Initialization_
#   define Cx0_Initialization_ (0U)
#  endif

#  ifndef Cx1_Standby_
#   define Cx1_Standby_ (1U)
#  endif

#  ifndef Cx2_Ready_
#   define Cx2_Ready_ (2U)
#  endif

#  ifndef Cx3_Torque_Control_
#   define Cx3_Torque_Control_ (3U)
#  endif

#  ifndef Cx4_Fault
#   define Cx4_Fault (4U)
#  endif

#  ifndef Cx5_ActiveDischarge_
#   define Cx5_ActiveDischarge_ (5U)
#  endif

#  ifndef Cx6_Afterrun_
#   define Cx6_Afterrun_ (6U)
#  endif

#  ifndef Cx7_Motor_Active_Hearting_
#   define Cx7_Motor_Active_Hearting_ (7U)
#  endif

#  ifndef Cx8_Speed_Control
#   define Cx8_Speed_Control (8U)
#  endif

#  ifndef CxF_Invalid
#   define CxF_Invalid (15U)
#  endif

#  ifndef Cx0_No_Fault
#   define Cx0_No_Fault (0U)
#  endif

#  ifndef Cx2_Buck
#   define Cx2_Buck (2U)
#  endif

#  ifndef Cx3_Fault
#   define Cx3_Fault (3U)
#  endif

#  ifndef Cx4_sleep
#   define Cx4_sleep (4U)
#  endif

#  ifndef Cx0_Damage
#   define Cx0_Damage (0U)
#  endif

#  ifndef Cx1_Short_Circuit
#   define Cx1_Short_Circuit (1U)
#  endif

#  ifndef Cx2_normal
#   define Cx2_normal (2U)
#  endif

#  ifndef Cx0_Close
#   define Cx0_Close (0U)
#  endif

#  ifndef Cx1_Open
#   define Cx1_Open (1U)
#  endif

#  ifndef Cx2_Error
#   define Cx2_Error (2U)
#  endif

#  ifndef Cx0_Unconnected
#   define Cx0_Unconnected (0U)
#  endif

#  ifndef Cx1_Half_connected
#   define Cx1_Half_connected (1U)
#  endif

#  ifndef Cx2_1500_Ohm
#   define Cx2_1500_Ohm (2U)
#  endif

#  ifndef Cx3_680_Ohm
#   define Cx3_680_Ohm (3U)
#  endif

#  ifndef Cx4_220_Ohm
#   define Cx4_220_Ohm (4U)
#  endif

#  ifndef Cx5_100_Ohm
#   define Cx5_100_Ohm (5U)
#  endif

#  ifndef Cx6_2000_Ohm
#   define Cx6_2000_Ohm (6U)
#  endif

#  ifndef Cx7_2700_Ohm
#   define Cx7_2700_Ohm (7U)
#  endif

#  ifndef Cx8_1000_Ohm
#   define Cx8_1000_Ohm (8U)
#  endif

#  ifndef Cx9_470_Ohm
#   define Cx9_470_Ohm (9U)
#  endif

#  ifndef CxA_invalid
#   define CxA_invalid (10U)
#  endif

#  ifndef Cx1_9V
#   define Cx1_9V (1U)
#  endif

#  ifndef Cx2_9V_PWM
#   define Cx2_9V_PWM (2U)
#  endif

#  ifndef Cx3_6V
#   define Cx3_6V (3U)
#  endif

#  ifndef Cx4_6V_PWM
#   define Cx4_6V_PWM (4U)
#  endif

#  ifndef Cx5_Fault
#   define Cx5_Fault (5U)
#  endif

#  ifndef Cx7_Reserve
#   define Cx7_Reserve (7U)
#  endif

#  ifndef Cx0_single_phase
#   define Cx0_single_phase (0U)
#  endif

#  ifndef Cx1_Three_phase
#   define Cx1_Three_phase (1U)
#  endif

#  ifndef Cx1_Level1
#   define Cx1_Level1 (1U)
#  endif

#  ifndef Cx2_Level2
#   define Cx2_Level2 (2U)
#  endif

#  ifndef Cx3_Level3
#   define Cx3_Level3 (3U)
#  endif

#  ifndef Cx3_Charging_Mode
#   define Cx3_Charging_Mode (3U)
#  endif

#  ifndef Cx4_Pre_heating_Mode
#   define Cx4_Pre_heating_Mode (4U)
#  endif

#  ifndef Cx5_V2L_Mode
#   define Cx5_V2L_Mode (5U)
#  endif

#  ifndef Cx6_Sleep
#   define Cx6_Sleep (6U)
#  endif

#  ifndef Cx7_Fault
#   define Cx7_Fault (7U)
#  endif

#  ifndef Cx0_Not_Pressed
#   define Cx0_Not_Pressed (0U)
#  endif

#  ifndef Cx1_Pressed
#   define Cx1_Pressed (1U)
#  endif

#  ifndef Cx2_Held
#   define Cx2_Held (2U)
#  endif

#  ifndef Cx0_NO_TARGET
#   define Cx0_NO_TARGET (0U)
#  endif

#  ifndef Cx1_R
#   define Cx1_R (1U)
#  endif

#  ifndef Cx3_D
#   define Cx3_D (3U)
#  endif

#  ifndef Cx4_RESERVE
#   define Cx4_RESERVE (4U)
#  endif

#  ifndef Cx5_RESERVE
#   define Cx5_RESERVE (5U)
#  endif

#  ifndef Cx6_RESERVE
#   define Cx6_RESERVE (6U)
#  endif

#  ifndef Cx7_RESERVE
#   define Cx7_RESERVE (7U)
#  endif

#  ifndef Cx1_Request_Ready_Remote
#   define Cx1_Request_Ready_Remote (1U)
#  endif

#  ifndef Cx1_ChargeImmediately
#   define Cx1_ChargeImmediately (1U)
#  endif

#  ifndef Cx2_Appointment_charging
#   define Cx2_Appointment_charging (2U)
#  endif

#  ifndef Cx0_NO_COMMAND
#   define Cx0_NO_COMMAND (0U)
#  endif

#  ifndef Cx3_INVALID
#   define Cx3_INVALID (3U)
#  endif

#  ifndef Cx1_Lock
#   define Cx1_Lock (1U)
#  endif

#  ifndef Cx2_Unlock
#   define Cx2_Unlock (2U)
#  endif

#  ifndef Cx0_NO_REQUEST
#   define Cx0_NO_REQUEST (0U)
#  endif

#  ifndef Cx1_HV_ON
#   define Cx1_HV_ON (1U)
#  endif

#  ifndef Cx2_HV_OFF
#   define Cx2_HV_OFF (2U)
#  endif

#  ifndef Cx2_OFF
#   define Cx2_OFF (2U)
#  endif

#  ifndef Cx1_Fault_Level_1
#   define Cx1_Fault_Level_1 (1U)
#  endif

#  ifndef Cx2_Fault_Level_2
#   define Cx2_Fault_Level_2 (2U)
#  endif

#  ifndef Cx3_Fault_Level_3
#   define Cx3_Fault_Level_3 (3U)
#  endif

#  ifndef Cx4_Fault_Level_4
#   define Cx4_Fault_Level_4 (4U)
#  endif

#  ifndef Cx0_INVALID
#   define Cx0_INVALID (0U)
#  endif

#  ifndef Cx0_Reserve
#   define Cx0_Reserve (0U)
#  endif

#  ifndef Cx0_Level_1_low_
#   define Cx0_Level_1_low_ (0U)
#  endif

#  ifndef Cx1_Level_2_medium_
#   define Cx1_Level_2_medium_ (1U)
#  endif

#  ifndef Cx2_Level_3_high_
#   define Cx2_Level_3_high_ (2U)
#  endif

#  ifndef Cx0_Invaild
#   define Cx0_Invaild (0U)
#  endif

#  ifndef Cx2_Close
#   define Cx2_Close (2U)
#  endif

#  ifndef Cx0_No_display
#   define Cx0_No_display (0U)
#  endif

#  ifndef Cx1_Vehicle_failure_brake_compensation_failed_to_open_
#   define Cx1_Vehicle_failure_brake_compensation_failed_to_open_ (1U)
#  endif

#  ifndef Cx0_No_pressed
#   define Cx0_No_pressed (0U)
#  endif

#  ifndef Cx1_pressed
#   define Cx1_pressed (1U)
#  endif

#  ifndef Cx2_Invalid
#   define Cx2_Invalid (2U)
#  endif

#  ifndef Cx0_No_Display
#   define Cx0_No_Display (0U)
#  endif

#  ifndef Cx1_Reach_the_charge_cut_off_SOC
#   define Cx1_Reach_the_charge_cut_off_SOC (1U)
#  endif

#  ifndef Cx2_reserved
#   define Cx2_reserved (2U)
#  endif

#  ifndef Cx0_No_comment
#   define Cx0_No_comment (0U)
#  endif

#  ifndef Cx1_Charge_Fault_and_slow
#   define Cx1_Charge_Fault_and_slow (1U)
#  endif

#  ifndef Cx1_Off_Plug
#   define Cx1_Off_Plug (1U)
#  endif

#  ifndef Cx2_AC_Plug_Detected
#   define Cx2_AC_Plug_Detected (2U)
#  endif

#  ifndef Cx3_DC_Plug_Detected
#   define Cx3_DC_Plug_Detected (3U)
#  endif

#  ifndef Cx4_V2L_Plug_Detected
#   define Cx4_V2L_Plug_Detected (4U)
#  endif

#  ifndef Cx5_AC_Charging
#   define Cx5_AC_Charging (5U)
#  endif

#  ifndef Cx6_DC_Charging
#   define Cx6_DC_Charging (6U)
#  endif

#  ifndef Cx7_V2L_Discharging
#   define Cx7_V2L_Discharging (7U)
#  endif

#  ifndef Cx8_Charging_Completed
#   define Cx8_Charging_Completed (8U)
#  endif

#  ifndef Cx9_Charging_Fault
#   define Cx9_Charging_Fault (9U)
#  endif

#  ifndef CxA_AC_Preheating
#   define CxA_AC_Preheating (10U)
#  endif

#  ifndef CxB_DC_Preheating
#   define CxB_DC_Preheating (11U)
#  endif

#  ifndef CxC_V2L_completed
#   define CxC_V2L_completed (12U)
#  endif

#  ifndef CxD_KeepWarming
#   define CxD_KeepWarming (13U)
#  endif

#  ifndef CxE_V2L_Fault
#   define CxE_V2L_Fault (14U)
#  endif

#  ifndef Cx1_Leve1_lighting_prompt_only_
#   define Cx1_Leve1_lighting_prompt_only_ (1U)
#  endif

#  ifndef Cx2_Leve2_power_loss_
#   define Cx2_Leve2_power_loss_ (2U)
#  endif

#  ifndef Cx3_Leve3_emergency_power_off_
#   define Cx3_Leve3_emergency_power_off_ (3U)
#  endif

#  ifndef Cx1_Reach_the_discharge_cut_off_SOC
#   define Cx1_Reach_the_discharge_cut_off_SOC (1U)
#  endif

#  ifndef Cx0_RESERVE
#   define Cx0_RESERVE (0U)
#  endif

#  ifndef Cx1_unrecommed_Sport_Low_SOC
#   define Cx1_unrecommed_Sport_Low_SOC (1U)
#  endif

#  ifndef Cx2_Vehicle_not_in_P_gear_single_pedal_unavailable
#   define Cx2_Vehicle_not_in_P_gear_single_pedal_unavailable (2U)
#  endif

#  ifndef Cx3_Vehicle_failure_single_pedal_unavailable_
#   define Cx3_Vehicle_failure_single_pedal_unavailable_ (3U)
#  endif

#  ifndef Cx0_Not_Request
#   define Cx0_Not_Request (0U)
#  endif

#  ifndef Cx1_Apply_Request
#   define Cx1_Apply_Request (1U)
#  endif

#  ifndef Cx2_Release_Request
#   define Cx2_Release_Request (2U)
#  endif

#  ifndef Cx1_Reserve
#   define Cx1_Reserve (1U)
#  endif

#  ifndef Cx2_Enable
#   define Cx2_Enable (2U)
#  endif

#  ifndef Cx3_Disable
#   define Cx3_Disable (3U)
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

#  ifndef Cx2_HV_Ready
#   define Cx2_HV_Ready (2U)
#  endif

#  ifndef Cx3_Drive_ready
#   define Cx3_Drive_ready (3U)
#  endif

#  ifndef Cx4_Preheating
#   define Cx4_Preheating (4U)
#  endif

#  ifndef Cx5_Sleep
#   define Cx5_Sleep (5U)
#  endif

#  ifndef Cx0_level_0_No_limit
#   define Cx0_level_0_No_limit (0U)
#  endif

#  ifndef Cx1_level_1
#   define Cx1_level_1 (1U)
#  endif

#  ifndef Cx2_level_2
#   define Cx2_level_2 (2U)
#  endif

#  ifndef Cx3_level_3
#   define Cx3_level_3 (3U)
#  endif

#  ifndef Cx0_DstC_off
#   define Cx0_DstC_off (0U)
#  endif

#  ifndef Cx1_DstC_ext
#   define Cx1_DstC_ext (1U)
#  endif

#  ifndef Cx2_DstC_int_ext
#   define Cx2_DstC_int_ext (2U)
#  endif

#  ifndef Cx1_Yellow_LED_request
#   define Cx1_Yellow_LED_request (1U)
#  endif

#  ifndef Cx2_Red_LED_request
#   define Cx2_Red_LED_request (2U)
#  endif

#  ifndef Cx0_NO_DEMAND
#   define Cx0_NO_DEMAND (0U)
#  endif

#  ifndef Cx1_DEMAND
#   define Cx1_DEMAND (1U)
#  endif

#  ifndef Cx0_Fault_Level0
#   define Cx0_Fault_Level0 (0U)
#  endif

#  ifndef Cx4_Fault_Level4
#   define Cx4_Fault_Level4 (4U)
#  endif

#  ifndef Cx5_Fault_Level5
#   define Cx5_Fault_Level5 (5U)
#  endif

#  ifndef Cx6_Fault_Level6
#   define Cx6_Fault_Level6 (6U)
#  endif

#  ifndef Cx7_Fault_Level7
#   define Cx7_Fault_Level7 (7U)
#  endif

#  ifndef Cx8_Fault_Level8
#   define Cx8_Fault_Level8 (8U)
#  endif

#  ifndef Cx9_Fault_Level9
#   define Cx9_Fault_Level9 (9U)
#  endif

#  ifndef CxA_Fault_Level10
#   define CxA_Fault_Level10 (10U)
#  endif

#  ifndef CxB_Fault_Level11
#   define CxB_Fault_Level11 (11U)
#  endif

#  ifndef CxC_Fault_Level12
#   define CxC_Fault_Level12 (12U)
#  endif

#  ifndef CxD_Fault_Level13
#   define CxD_Fault_Level13 (13U)
#  endif

#  ifndef CxE_Fault_Level14
#   define CxE_Fault_Level14 (14U)
#  endif

#  ifndef CxF_Fault_Level15
#   define CxF_Fault_Level15 (15U)
#  endif

#  ifndef Cx1_No_Plug_connected
#   define Cx1_No_Plug_connected (1U)
#  endif

#  ifndef Cx2_AC_Plug_connected_Unlock
#   define Cx2_AC_Plug_connected_Unlock (2U)
#  endif

#  ifndef Cx3_AC_Plug_connected_Locked
#   define Cx3_AC_Plug_connected_Locked (3U)
#  endif

#  ifndef Cx4_DC_Plug_connected
#   define Cx4_DC_Plug_connected (4U)
#  endif

#  ifndef Cx5_V2L_Plug_connected
#   define Cx5_V2L_Plug_connected (5U)
#  endif

#  ifndef Cx6_AC_Plug_DC_Plug_Connected
#   define Cx6_AC_Plug_DC_Plug_Connected (6U)
#  endif

#  ifndef Cx3FE_Init
#   define Cx3FE_Init (1022U)
#  endif

#  ifndef Cx3FF_Error
#   define Cx3FF_Error (1023U)
#  endif

#  ifndef Cx0_InActive
#   define Cx0_InActive (0U)
#  endif

#  ifndef Cx1_HVActive
#   define Cx1_HVActive (1U)
#  endif

#  ifndef Cx5_EmergencyOff
#   define Cx5_EmergencyOff (5U)
#  endif

#  ifndef Cx1_Buck
#   define Cx1_Buck (1U)
#  endif

#  ifndef Cx2_Disable
#   define Cx2_Disable (2U)
#  endif

#  ifndef Cx1_TrqCtrl
#   define Cx1_TrqCtrl (1U)
#  endif

#  ifndef Cx2_Active_Hearting
#   define Cx2_Active_Hearting (2U)
#  endif

#  ifndef Cx3_Discharge
#   define Cx3_Discharge (3U)
#  endif

#  ifndef Cx4_SpeedCtrl
#   define Cx4_SpeedCtrl (4U)
#  endif

#  ifndef Cx3_Enable
#   define Cx3_Enable (3U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_CANHANDLER_TYPE_H */
