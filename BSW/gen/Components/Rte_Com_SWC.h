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
 *             File:  Rte_Com_SWC.h
 *           Config:  TC37X_VCU.dpa
 *      ECU-Project:  TC37X_VCU
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  Application header file for SW-C <Com_SWC>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_COM_SWC_H
# define RTE_COM_SWC_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Com_SWC_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_AN0_AN0 (0)
#  define Rte_InitValue_AN1_AN1 (0)
#  define Rte_InitValue_AN10_AN10 (0)
#  define Rte_InitValue_AN11_AN11 (0)
#  define Rte_InitValue_AN12_AN12 (0)
#  define Rte_InitValue_AN13_AN13 (0)
#  define Rte_InitValue_AN14_AN14 (0)
#  define Rte_InitValue_AN15_AN15 (0)
#  define Rte_InitValue_AN16_AN16 (0)
#  define Rte_InitValue_AN17_AN17 (0)
#  define Rte_InitValue_AN18_AN18 (0)
#  define Rte_InitValue_AN19_AN19 (0)
#  define Rte_InitValue_AN2_AN2 (0)
#  define Rte_InitValue_AN20_AN20 (0)
#  define Rte_InitValue_AN21_AN21 (0)
#  define Rte_InitValue_AN22_AN22 (0)
#  define Rte_InitValue_AN23_AN23 (0)
#  define Rte_InitValue_AN24_AN24 (0)
#  define Rte_InitValue_AN25_AN25 (0)
#  define Rte_InitValue_AN26_AN26 (0)
#  define Rte_InitValue_AN27_AN27 (0)
#  define Rte_InitValue_AN28_AN28 (0)
#  define Rte_InitValue_AN29_AN29 (0)
#  define Rte_InitValue_AN3_AN3 (0)
#  define Rte_InitValue_AN30_AN30 (0)
#  define Rte_InitValue_AN31_AN31 (0)
#  define Rte_InitValue_AN32_AN32 (0)
#  define Rte_InitValue_AN33_AN33 (0)
#  define Rte_InitValue_AN34_AN34 (0)
#  define Rte_InitValue_AN35_AN35 (0)
#  define Rte_InitValue_AN36_AN36 (0)
#  define Rte_InitValue_AN37_AN37 (0)
#  define Rte_InitValue_AN38_AN38 (0)
#  define Rte_InitValue_AN39_AN39 (0)
#  define Rte_InitValue_AN4_AN4 (0)
#  define Rte_InitValue_AN40_AN40 (0)
#  define Rte_InitValue_AN41_AN41 (0)
#  define Rte_InitValue_AN42_AN42 (0)
#  define Rte_InitValue_AN43_AN43 (0)
#  define Rte_InitValue_AN44_AN44 (0)
#  define Rte_InitValue_AN45_AN45 (0)
#  define Rte_InitValue_AN46_AN46 (0)
#  define Rte_InitValue_AN47_AN47 (0)
#  define Rte_InitValue_AN5_AN5 (0)
#  define Rte_InitValue_AN6_AN6 (0)
#  define Rte_InitValue_AN7_AN7 (0)
#  define Rte_InitValue_AN8_AN8 (0)
#  define Rte_InitValue_AN9_AN9 (0)
#  define Rte_InitValue_Bts7xx_HS1_En_Bts7xx_HS1_En (0)
#  define Rte_InitValue_Bts7xx_HS2_En_Bts7xx_HS2_En (0)
#  define Rte_InitValue_Bts7xx_HS3_En_Bts7xx_HS3_En (0)
#  define Rte_InitValue_Bts7xx_HS4_En_Bts7xx_HS4_En (0)
#  define Rte_InitValue_ECC_PMP2_SpdSet_ECC_PMP2_SpdSet (0U)
#  define Rte_InitValue_ECC_PMP3_SpdSet_ECC_PMP3_SpdSet (0U)
#  define Rte_InitValue_EXT_PWM_IN1_Duty_EXT_PWM_IN1_Duty (0)
#  define Rte_InitValue_EXT_PWM_IN1_Period_EXT_PWM_IN1_Period (0)
#  define Rte_InitValue_EXT_PWM_IN2_Duty_EXT_PWM_IN2_Duty (0)
#  define Rte_InitValue_EXT_PWM_IN2_Period_EXT_PWM_IN2_Period (0)
#  define Rte_InitValue_Ext_IN2_Ext_IN2 (0)
#  define Rte_InitValue_Tle4252d_en_Tle4252d_en (0)
#  define Rte_InitValue_Tle888qk_Lout14_En_Tle888qk_Lout14_En (0)
#  define Rte_InitValue_Tle888qk_Lout16_En_Tle888qk_Lout16_En (0)
#  define Rte_InitValue_Tle888qk_Lout1_En_Tle888qk_Lout1_En (0)
#  define Rte_InitValue_Tle888qk_Lout8_En_Tle888qk_Lout8_En (0)
#  define Rte_InitValue_Tle888qk_Out21BriCfg_Tle888qk_Out21BriCfg (0)
#  define Rte_InitValue_Tle888qk_Out21_En_Tle888qk_Out21_En (0)
#  define Rte_InitValue_Tle888qk_Out22BriCfg_Tle888qk_Out22BriCfg (0)
#  define Rte_InitValue_Tle888qk_Out22_En_Tle888qk_Out22_En (0)
#  define Rte_InitValue_Tle888qk_Out23BriCfg_Tle888qk_Out23BriCfg (0)
#  define Rte_InitValue_Tle888qk_Out23_En_Tle888qk_Out23_En (0)
#  define Rte_InitValue_Tle888qk_Out24BriCfg_Tle888qk_Out24BriCfg (0)
#  define Rte_InitValue_Tle888qk_Out24_En_Tle888qk_Out24_En (0)
#  define Rte_InitValue_Tle9201_Dir_Tle9201_Dir (0)
#  define Rte_InitValue_Tle9201_Dis_Tle9201_Dis (0)
#  define Rte_InitValue_Tle9201_Pwm_Tle9201_Pwm (0)
# endif


# define RTE_START_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN0_AN0(AN0 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN1_AN1(AN1 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN10_AN10(AN10 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN11_AN11(AN11 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN12_AN12(AN12 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN13_AN13(AN13 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN14_AN14(AN14 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN15_AN15(AN15 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN16_AN16(AN16 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN17_AN17(AN17 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN18_AN18(AN18 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN19_AN19(AN19 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN2_AN2(AN2 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN20_AN20(AN20 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN21_AN21(AN21 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN22_AN22(AN22 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN23_AN23(AN23 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN24_AN24(AN24 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN25_AN25(AN25 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN26_AN26(AN26 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN27_AN27(AN27 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN28_AN28(AN28 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN29_AN29(AN29 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN3_AN3(AN3 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN30_AN30(AN30 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN31_AN31(AN31 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN32_AN32(AN32 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN33_AN33(AN33 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN34_AN34(AN34 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN35_AN35(AN35 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN36_AN36(AN36 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN37_AN37(AN37 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN38_AN38(AN38 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN39_AN39(AN39 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN4_AN4(AN4 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN40_AN40(AN40 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN41_AN41(AN41 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN42_AN42(AN42 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN43_AN43(AN43 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN44_AN44(AN44 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN45_AN45(AN45 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN46_AN46(AN46 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN47_AN47(AN47 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN5_AN5(AN5 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN6_AN6(AN6 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN7_AN7(AN7 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN8_AN8(AN8 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_AN9_AN9(AN9 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_ECC_PMP2_SpdSet_ECC_PMP2_SpdSet(ECC_PMP2_SpdSet data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_ECC_PMP3_SpdSet_ECC_PMP3_SpdSet(ECC_PMP3_SpdSet data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_PWM_IN1_Duty_EXT_PWM_IN1_Duty(EXT_PWM_IN1_Duty data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_PWM_IN1_Period_EXT_PWM_IN1_Period(EXT_PWM_IN1_Period data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_PWM_IN2_Duty_EXT_PWM_IN2_Duty(EXT_PWM_IN2_Duty data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_EXT_PWM_IN2_Period_EXT_PWM_IN2_Period(EXT_PWM_IN2_Period data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Com_SWC_Ext_IN2_Ext_IN2(Ext_IN2 data); /* PRQA S 0786, 3449, 0624 */ /* MD_Rte_0786, MD_Rte_3449, MD_Rte_0624 */

# define RTE_STOP_SEC_CODE
# include "Rte_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_Bts7xx_HS1_En_Bts7xx_HS1_En Rte_Read_Com_SWC_Bts7xx_HS1_En_Bts7xx_HS1_En
#  define Rte_Read_Com_SWC_Bts7xx_HS1_En_Bts7xx_HS1_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Bts7xx_HS1_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_d0692a3c_Rx, (data)))
#  define Rte_Read_Bts7xx_HS2_En_Bts7xx_HS2_En Rte_Read_Com_SWC_Bts7xx_HS2_En_Bts7xx_HS2_En
#  define Rte_Read_Com_SWC_Bts7xx_HS2_En_Bts7xx_HS2_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Bts7xx_HS2_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_b48951c2_Rx, (data)))
#  define Rte_Read_Bts7xx_HS3_En_Bts7xx_HS3_En Rte_Read_Com_SWC_Bts7xx_HS3_En_Bts7xx_HS3_En
#  define Rte_Read_Com_SWC_Bts7xx_HS3_En_Bts7xx_HS3_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Bts7xx_HS3_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_21f98557_Rx, (data)))
#  define Rte_Read_Bts7xx_HS4_En_Bts7xx_HS4_En Rte_Read_Com_SWC_Bts7xx_HS4_En_Bts7xx_HS4_En
#  define Rte_Read_Com_SWC_Bts7xx_HS4_En_Bts7xx_HS4_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Bts7xx_HS4_En_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_7d49a63e_Rx, (data)))
#  define Rte_Read_Tle4252d_en_Tle4252d_en Rte_Read_Com_SWC_Tle4252d_en_Tle4252d_en
#  define Rte_Read_Com_SWC_Tle4252d_en_Tle4252d_en(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle4252d_en_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_24c739a8_Rx, (data)))
#  define Rte_Read_Tle888qk_Lout14_En_Tle888qk_Lout14_En Rte_Read_Com_SWC_Tle888qk_Lout14_En_Tle888qk_Lout14_En
#  define Rte_Read_Com_SWC_Tle888qk_Lout14_En_Tle888qk_Lout14_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Lout14_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_a11e1e88_Rx, (data)))
#  define Rte_Read_Tle888qk_Lout16_En_Tle888qk_Lout16_En Rte_Read_Com_SWC_Tle888qk_Lout16_En_Tle888qk_Lout16_En
#  define Rte_Read_Com_SWC_Tle888qk_Lout16_En_Tle888qk_Lout16_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Lout16_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_508eb1e3_Rx, (data)))
#  define Rte_Read_Tle888qk_Lout1_En_Tle888qk_Lout1_En Rte_Read_Com_SWC_Tle888qk_Lout1_En_Tle888qk_Lout1_En
#  define Rte_Read_Com_SWC_Tle888qk_Lout1_En_Tle888qk_Lout1_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Lout1_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_0e3571fa_Rx, (data)))
#  define Rte_Read_Tle888qk_Lout8_En_Tle888qk_Lout8_En Rte_Read_Com_SWC_Tle888qk_Lout8_En_Tle888qk_Lout8_En
#  define Rte_Read_Com_SWC_Tle888qk_Lout8_En_Tle888qk_Lout8_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Lout8_En_oVcuRxCtrlMsg2_oTC37X_VCU_CAN01_ebe51441_Rx, (data)))
#  define Rte_Read_Tle888qk_Out21BriCfg_Tle888qk_Out21BriCfg Rte_Read_Com_SWC_Tle888qk_Out21BriCfg_Tle888qk_Out21BriCfg
#  define Rte_Read_Com_SWC_Tle888qk_Out21BriCfg_Tle888qk_Out21BriCfg(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Out21BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_f4735e02_Rx, (data)))
#  define Rte_Read_Tle888qk_Out21_En_Tle888qk_Out21_En Rte_Read_Com_SWC_Tle888qk_Out21_En_Tle888qk_Out21_En
#  define Rte_Read_Com_SWC_Tle888qk_Out21_En_Tle888qk_Out21_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Out21_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_fce8b2a9_Rx, (data)))
#  define Rte_Read_Tle888qk_Out22BriCfg_Tle888qk_Out22BriCfg Rte_Read_Com_SWC_Tle888qk_Out22BriCfg_Tle888qk_Out22BriCfg
#  define Rte_Read_Com_SWC_Tle888qk_Out22BriCfg_Tle888qk_Out22BriCfg(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Out22BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_27e842f9_Rx, (data)))
#  define Rte_Read_Tle888qk_Out22_En_Tle888qk_Out22_En Rte_Read_Com_SWC_Tle888qk_Out22_En_Tle888qk_Out22_En
#  define Rte_Read_Com_SWC_Tle888qk_Out22_En_Tle888qk_Out22_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Out22_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_9808c957_Rx, (data)))
#  define Rte_Read_Tle888qk_Out23BriCfg_Tle888qk_Out23BriCfg Rte_Read_Com_SWC_Tle888qk_Out23BriCfg_Tle888qk_Out23BriCfg
#  define Rte_Read_Com_SWC_Tle888qk_Out23BriCfg_Tle888qk_Out23BriCfg(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Out23BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_69614950_Rx, (data)))
#  define Rte_Read_Tle888qk_Out23_En_Tle888qk_Out23_En Rte_Read_Com_SWC_Tle888qk_Out23_En_Tle888qk_Out23_En
#  define Rte_Read_Com_SWC_Tle888qk_Out23_En_Tle888qk_Out23_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Out23_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_0d781dc2_Rx, (data)))
#  define Rte_Read_Tle888qk_Out24BriCfg_Tle888qk_Out24BriCfg Rte_Read_Com_SWC_Tle888qk_Out24BriCfg_Tle888qk_Out24BriCfg
#  define Rte_Read_Com_SWC_Tle888qk_Out24BriCfg_Tle888qk_Out24BriCfg(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Out24BriCfg_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_5baf7d4e_Rx, (data)))
#  define Rte_Read_Tle888qk_Out24_En_Tle888qk_Out24_En Rte_Read_Com_SWC_Tle888qk_Out24_En_Tle888qk_Out24_En
#  define Rte_Read_Com_SWC_Tle888qk_Out24_En_Tle888qk_Out24_En(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle888qk_Out24_En_oVcuRxCtrlMsg0_oTC37X_VCU_CAN01_51c83eab_Rx, (data)))
#  define Rte_Read_Tle9201_Dir_Tle9201_Dir Rte_Read_Com_SWC_Tle9201_Dir_Tle9201_Dir
#  define Rte_Read_Com_SWC_Tle9201_Dir_Tle9201_Dir(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle9201_Dir_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_4c38edaa_Rx, (data)))
#  define Rte_Read_Tle9201_Dis_Tle9201_Dis Rte_Read_Com_SWC_Tle9201_Dis_Tle9201_Dis
#  define Rte_Read_Com_SWC_Tle9201_Dis_Tle9201_Dis(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle9201_Dis_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_7aca7d59_Rx, (data)))
#  define Rte_Read_Tle9201_Pwm_Tle9201_Pwm Rte_Read_Com_SWC_Tle9201_Pwm_Tle9201_Pwm
#  define Rte_Read_Com_SWC_Tle9201_Pwm_Tle9201_Pwm(data) (Com_ReceiveSignal(ComConf_ComSignal_Tle9201_Pwm_oVcuRxCtrlMsg1_oTC37X_VCU_CAN01_bf73fa17_Rx, (data)))


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_AN0_AN0 Rte_Write_Com_SWC_AN0_AN0
#  define Rte_Write_AN1_AN1 Rte_Write_Com_SWC_AN1_AN1
#  define Rte_Write_AN10_AN10 Rte_Write_Com_SWC_AN10_AN10
#  define Rte_Write_AN11_AN11 Rte_Write_Com_SWC_AN11_AN11
#  define Rte_Write_AN12_AN12 Rte_Write_Com_SWC_AN12_AN12
#  define Rte_Write_AN13_AN13 Rte_Write_Com_SWC_AN13_AN13
#  define Rte_Write_AN14_AN14 Rte_Write_Com_SWC_AN14_AN14
#  define Rte_Write_AN15_AN15 Rte_Write_Com_SWC_AN15_AN15
#  define Rte_Write_AN16_AN16 Rte_Write_Com_SWC_AN16_AN16
#  define Rte_Write_AN17_AN17 Rte_Write_Com_SWC_AN17_AN17
#  define Rte_Write_AN18_AN18 Rte_Write_Com_SWC_AN18_AN18
#  define Rte_Write_AN19_AN19 Rte_Write_Com_SWC_AN19_AN19
#  define Rte_Write_AN2_AN2 Rte_Write_Com_SWC_AN2_AN2
#  define Rte_Write_AN20_AN20 Rte_Write_Com_SWC_AN20_AN20
#  define Rte_Write_AN21_AN21 Rte_Write_Com_SWC_AN21_AN21
#  define Rte_Write_AN22_AN22 Rte_Write_Com_SWC_AN22_AN22
#  define Rte_Write_AN23_AN23 Rte_Write_Com_SWC_AN23_AN23
#  define Rte_Write_AN24_AN24 Rte_Write_Com_SWC_AN24_AN24
#  define Rte_Write_AN25_AN25 Rte_Write_Com_SWC_AN25_AN25
#  define Rte_Write_AN26_AN26 Rte_Write_Com_SWC_AN26_AN26
#  define Rte_Write_AN27_AN27 Rte_Write_Com_SWC_AN27_AN27
#  define Rte_Write_AN28_AN28 Rte_Write_Com_SWC_AN28_AN28
#  define Rte_Write_AN29_AN29 Rte_Write_Com_SWC_AN29_AN29
#  define Rte_Write_AN3_AN3 Rte_Write_Com_SWC_AN3_AN3
#  define Rte_Write_AN30_AN30 Rte_Write_Com_SWC_AN30_AN30
#  define Rte_Write_AN31_AN31 Rte_Write_Com_SWC_AN31_AN31
#  define Rte_Write_AN32_AN32 Rte_Write_Com_SWC_AN32_AN32
#  define Rte_Write_AN33_AN33 Rte_Write_Com_SWC_AN33_AN33
#  define Rte_Write_AN34_AN34 Rte_Write_Com_SWC_AN34_AN34
#  define Rte_Write_AN35_AN35 Rte_Write_Com_SWC_AN35_AN35
#  define Rte_Write_AN36_AN36 Rte_Write_Com_SWC_AN36_AN36
#  define Rte_Write_AN37_AN37 Rte_Write_Com_SWC_AN37_AN37
#  define Rte_Write_AN38_AN38 Rte_Write_Com_SWC_AN38_AN38
#  define Rte_Write_AN39_AN39 Rte_Write_Com_SWC_AN39_AN39
#  define Rte_Write_AN4_AN4 Rte_Write_Com_SWC_AN4_AN4
#  define Rte_Write_AN40_AN40 Rte_Write_Com_SWC_AN40_AN40
#  define Rte_Write_AN41_AN41 Rte_Write_Com_SWC_AN41_AN41
#  define Rte_Write_AN42_AN42 Rte_Write_Com_SWC_AN42_AN42
#  define Rte_Write_AN43_AN43 Rte_Write_Com_SWC_AN43_AN43
#  define Rte_Write_AN44_AN44 Rte_Write_Com_SWC_AN44_AN44
#  define Rte_Write_AN45_AN45 Rte_Write_Com_SWC_AN45_AN45
#  define Rte_Write_AN46_AN46 Rte_Write_Com_SWC_AN46_AN46
#  define Rte_Write_AN47_AN47 Rte_Write_Com_SWC_AN47_AN47
#  define Rte_Write_AN5_AN5 Rte_Write_Com_SWC_AN5_AN5
#  define Rte_Write_AN6_AN6 Rte_Write_Com_SWC_AN6_AN6
#  define Rte_Write_AN7_AN7 Rte_Write_Com_SWC_AN7_AN7
#  define Rte_Write_AN8_AN8 Rte_Write_Com_SWC_AN8_AN8
#  define Rte_Write_AN9_AN9 Rte_Write_Com_SWC_AN9_AN9
#  define Rte_Write_ECC_PMP2_SpdSet_ECC_PMP2_SpdSet Rte_Write_Com_SWC_ECC_PMP2_SpdSet_ECC_PMP2_SpdSet
#  define Rte_Write_ECC_PMP3_SpdSet_ECC_PMP3_SpdSet Rte_Write_Com_SWC_ECC_PMP3_SpdSet_ECC_PMP3_SpdSet
#  define Rte_Write_EXT_PWM_IN1_Duty_EXT_PWM_IN1_Duty Rte_Write_Com_SWC_EXT_PWM_IN1_Duty_EXT_PWM_IN1_Duty
#  define Rte_Write_EXT_PWM_IN1_Period_EXT_PWM_IN1_Period Rte_Write_Com_SWC_EXT_PWM_IN1_Period_EXT_PWM_IN1_Period
#  define Rte_Write_EXT_PWM_IN2_Duty_EXT_PWM_IN2_Duty Rte_Write_Com_SWC_EXT_PWM_IN2_Duty_EXT_PWM_IN2_Duty
#  define Rte_Write_EXT_PWM_IN2_Period_EXT_PWM_IN2_Period Rte_Write_Com_SWC_EXT_PWM_IN2_Period_EXT_PWM_IN2_Period
#  define Rte_Write_Ext_IN2_Ext_IN2 Rte_Write_Com_SWC_Ext_IN2_Ext_IN2


# endif /* !defined(RTE_CORE) */


# define Com_SWC_START_SEC_CODE
# include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Com_Runnable_2ms Com_Runnable_2ms
#  define RTE_RUNNABLE_Com_Runnable_500ms Com_Runnable_500ms
#  define RTE_RUNNABLE_Rte_Msg10Eh_Rx_Notification Rte_Msg10Eh_Rx_Notification
#  define RTE_RUNNABLE_Rte_Msg10Fh_Rx_Notification Rte_Msg10Fh_Rx_Notification
#  define RTE_RUNNABLE_Rte_Msg110h_Rx_Notification Rte_Msg110h_Rx_Notification
# endif

FUNC(void, Com_SWC_CODE) Com_Runnable_2ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, Com_SWC_CODE) Com_Runnable_500ms(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, Com_SWC_CODE) Rte_Msg10Eh_Rx_Notification(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, Com_SWC_CODE) Rte_Msg10Fh_Rx_Notification(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */
FUNC(void, Com_SWC_CODE) Rte_Msg110h_Rx_Notification(void); /* PRQA S 3451, 0786, 3449 */ /* MD_Rte_3451, MD_Rte_0786, MD_Rte_3449 */

# define Com_SWC_STOP_SEC_CODE
# include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* RTE_COM_SWC_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0786:  MISRA rule: Rule5.5
     Reason:     Same macro and idintifier names in first 63 characters are required to meet AUTOSAR spec.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3449:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: Rule8.5
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
