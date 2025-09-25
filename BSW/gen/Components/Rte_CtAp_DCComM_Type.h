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
 *             File:  Rte_CtAp_DCComM_Type.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application types header file for SW-C <CtAp_DCComM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_CTAP_DCCOMM_TYPE_H
# define RTE_CTAP_DCCOMM_TYPE_H

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

#  ifndef Cx01_ae_
#   define Cx01_ae_ (1U)
#  endif

#  ifndef Cx02_ae_
#   define Cx02_ae_ (2U)
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

#  ifndef Cx0_Init
#   define Cx0_Init (0U)
#  endif

#  ifndef Cx1_OFF
#   define Cx1_OFF (1U)
#  endif

#  ifndef Cx2_ON
#   define Cx2_ON (2U)
#  endif

#  ifndef Cx00_BMS_oe_ae_
#   define Cx00_BMS_oe_ae_ (0U)
#  endif

#  ifndef CxAA_BMS_ae_
#   define CxAA_BMS_ae_ (170U)
#  endif

#  ifndef CxFF_
#   define CxFF_ (255U)
#  endif

#  ifndef Cx1_ss
#   define Cx1_ss (1U)
#  endif

#  ifndef Cx0_Oe_
#   define Cx0_Oe_ (0U)
#  endif

#  ifndef Cx0_ae
#   define Cx0_ae (0U)
#  endif

#  ifndef Cx1_ae
#   define Cx1_ae (1U)
#  endif

#  ifndef Cx1_Oe_
#   define Cx1_Oe_ (1U)
#  endif

#  ifndef Cx0_Nomal
#   define Cx0_Nomal (0U)
#  endif

#  ifndef Cx1_Fault
#   define Cx1_Fault (1U)
#  endif

#  ifndef Cx2_Untrustable
#   define Cx2_Untrustable (2U)
#  endif

#  ifndef Cx0_Nolmal
#   define Cx0_Nolmal (0U)
#  endif

#  ifndef Cx0_Normal
#   define Cx0_Normal (0U)
#  endif

#  ifndef Cx1_Abort_by_charger
#   define Cx1_Abort_by_charger (1U)
#  endif

#  ifndef Cx2_untrustable
#   define Cx2_untrustable (2U)
#  endif

#  ifndef Cx00_BMS_AeUe_
#   define Cx00_BMS_AeUe_ (0U)
#  endif

#  ifndef CxAA_BMSAeUe_
#   define CxAA_BMSAeUe_ (170U)
#  endif

#  ifndef Cx00_ae_oe_ae_
#   define Cx00_ae_oe_ae_ (0U)
#  endif

#  ifndef CxAA_ae_ae_
#   define CxAA_ae_ae_ (170U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_CTAP_DCCOMM_TYPE_H */
