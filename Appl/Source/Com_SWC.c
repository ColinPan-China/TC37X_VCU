/**********************************************************************************************************************
 *  FILE REQUIRES USER MODIFICATIONS
 *  Template Scope: sections marked with Start and End comments
 *  -------------------------------------------------------------------------------------------------------------------
 *  This file includes template code that must be completed and/or adapted during BSW integration.
 *  The template code is incomplete and only intended for providing a signature and an empty implementation.
 *  It is neither intended nor qualified for use in series production without applying suitable quality measures.
 *  The template code must be completed as described in the instructions given within this file and/or in the.
 *  Technical Reference.
 *  The completed implementation must be tested with diligent care and must comply with all quality requirements which.
 *  are necessary according to the state of the art before its use.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Com_SWC.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  Com_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <Com_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Com_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Adc_Sample.h"
#include "SensorMng.h"
#include "Icu_17_TimerIp.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * AN0: Integer in interval [-32768...32767]
 * AN1: Integer in interval [-32768...32767]
 * AN10: Integer in interval [-32768...32767]
 * AN11: Integer in interval [-32768...32767]
 * AN12: Integer in interval [-32768...32767]
 * AN13: Integer in interval [-32768...32767]
 * AN14: Integer in interval [-32768...32767]
 * AN15: Integer in interval [-32768...32767]
 * AN16: Integer in interval [-32768...32767]
 * AN17: Integer in interval [-32768...32767]
 * AN18: Integer in interval [-32768...32767]
 * AN19: Integer in interval [-32768...32767]
 * AN2: Integer in interval [-32768...32767]
 * AN20: Integer in interval [-32768...32767]
 * AN21: Integer in interval [-32768...32767]
 * AN22: Integer in interval [-32768...32767]
 * AN23: Integer in interval [-32768...32767]
 * AN24: Integer in interval [-32768...32767]
 * AN25: Integer in interval [-32768...32767]
 * AN26: Integer in interval [-32768...32767]
 * AN27: Integer in interval [-32768...32767]
 * AN28: Integer in interval [-32768...32767]
 * AN29: Integer in interval [-32768...32767]
 * AN3: Integer in interval [-32768...32767]
 * AN30: Integer in interval [-32768...32767]
 * AN31: Integer in interval [-32768...32767]
 * AN32: Integer in interval [-32768...32767]
 * AN33: Integer in interval [-32768...32767]
 * AN34: Integer in interval [-32768...32767]
 * AN35: Integer in interval [-32768...32767]
 * AN36: Integer in interval [-32768...32767]
 * AN37: Integer in interval [-32768...32767]
 * AN38: Integer in interval [-32768...32767]
 * AN39: Integer in interval [-32768...32767]
 * AN4: Integer in interval [-32768...32767]
 * AN40: Integer in interval [-32768...32767]
 * AN41: Integer in interval [-32768...32767]
 * AN42: Integer in interval [-32768...32767]
 * AN43: Integer in interval [-32768...32767]
 * AN44: Integer in interval [-32768...32767]
 * AN45: Integer in interval [-32768...32767]
 * AN46: Integer in interval [-32768...32767]
 * AN47: Integer in interval [-32768...32767]
 * AN5: Integer in interval [-32768...32767]
 * AN6: Integer in interval [-32768...32767]
 * AN7: Integer in interval [-32768...32767]
 * AN8: Integer in interval [-32768...32767]
 * AN9: Integer in interval [-32768...32767]
 * Bts7xx_HS1_En: Integer in interval [-128...127]
 * Bts7xx_HS2_En: Integer in interval [-128...127]
 * Bts7xx_HS3_En: Integer in interval [-128...127]
 * Bts7xx_HS4_En: Integer in interval [-128...127]
 * EXT_PWM_IN1_Duty: Integer in interval [-128...127]
 * EXT_PWM_IN1_Period: Integer in interval [-32768...32767]
 * EXT_PWM_IN2_Duty: Integer in interval [-128...127]
 * EXT_PWM_IN2_Period: Integer in interval [-32768...32767]
 * Ext_IN2: Integer in interval [-128...127]
 * Tle4252d_en: Integer in interval [-128...127]
 * Tle888qk_Lout14_En: Integer in interval [-128...127]
 * Tle888qk_Lout16_En: Integer in interval [-128...127]
 * Tle888qk_Lout1_En: Integer in interval [-128...127]
 * Tle888qk_Lout8_En: Integer in interval [-128...127]
 * Tle888qk_Out21BriCfg: Integer in interval [-128...127]
 * Tle888qk_Out21_En: Integer in interval [-128...127]
 * Tle888qk_Out22BriCfg: Integer in interval [-128...127]
 * Tle888qk_Out22_En: Integer in interval [-128...127]
 * Tle888qk_Out23BriCfg: Integer in interval [-128...127]
 * Tle888qk_Out23_En: Integer in interval [-128...127]
 * Tle888qk_Out24BriCfg: Integer in interval [-128...127]
 * Tle888qk_Out24_En: Integer in interval [-128...127]
 * Tle9201_Dir: Integer in interval [-128...127]
 * Tle9201_Dis: Integer in interval [-128...127]
 * Tle9201_Pwm: Integer in interval [-128...127]
 *
 *********************************************************************************************************************/


#define Com_SWC_START_SEC_CODE
#include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Com_Runnable_2ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_Bts7xx_HS1_En_Bts7xx_HS1_En(Bts7xx_HS1_En *data)
 *   Std_ReturnType Rte_Read_Bts7xx_HS2_En_Bts7xx_HS2_En(Bts7xx_HS2_En *data)
 *   Std_ReturnType Rte_Read_Bts7xx_HS3_En_Bts7xx_HS3_En(Bts7xx_HS3_En *data)
 *   Std_ReturnType Rte_Read_Bts7xx_HS4_En_Bts7xx_HS4_En(Bts7xx_HS4_En *data)
 *   Std_ReturnType Rte_Read_Tle4252d_en_Tle4252d_en(Tle4252d_en *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Lout14_En_Tle888qk_Lout14_En(Tle888qk_Lout14_En *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Lout16_En_Tle888qk_Lout16_En(Tle888qk_Lout16_En *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Lout1_En_Tle888qk_Lout1_En(Tle888qk_Lout1_En *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Lout8_En_Tle888qk_Lout8_En(Tle888qk_Lout8_En *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Out21BriCfg_Tle888qk_Out21BriCfg(Tle888qk_Out21BriCfg *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Out21_En_Tle888qk_Out21_En(Tle888qk_Out21_En *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Out22BriCfg_Tle888qk_Out22BriCfg(Tle888qk_Out22BriCfg *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Out22_En_Tle888qk_Out22_En(Tle888qk_Out22_En *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Out23BriCfg_Tle888qk_Out23BriCfg(Tle888qk_Out23BriCfg *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Out23_En_Tle888qk_Out23_En(Tle888qk_Out23_En *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Out24BriCfg_Tle888qk_Out24BriCfg(Tle888qk_Out24BriCfg *data)
 *   Std_ReturnType Rte_Read_Tle888qk_Out24_En_Tle888qk_Out24_En(Tle888qk_Out24_En *data)
 *   Std_ReturnType Rte_Read_Tle9201_Dir_Tle9201_Dir(Tle9201_Dir *data)
 *   Std_ReturnType Rte_Read_Tle9201_Dis_Tle9201_Dis(Tle9201_Dis *data)
 *   Std_ReturnType Rte_Read_Tle9201_Pwm_Tle9201_Pwm(Tle9201_Pwm *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EXT_PWM_IN1_Duty_EXT_PWM_IN1_Duty(EXT_PWM_IN1_Duty data)
 *   Std_ReturnType Rte_Write_EXT_PWM_IN1_Period_EXT_PWM_IN1_Period(EXT_PWM_IN1_Period data)
 *   Std_ReturnType Rte_Write_EXT_PWM_IN2_Duty_EXT_PWM_IN2_Duty(EXT_PWM_IN2_Duty data)
 *   Std_ReturnType Rte_Write_EXT_PWM_IN2_Period_EXT_PWM_IN2_Period(EXT_PWM_IN2_Period data)
 *   Std_ReturnType Rte_Write_Ext_IN2_Ext_IN2(Ext_IN2 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Com_Runnable_2ms_doc
 *********************************************************************************************************************/
void ExtTempUpdate();
uint8 SpeedSet = 0;
extern volatile SensorMngCtrlType SensorMngCtrlVal;
extern Icu_17_TimerIp_DutyCycleType ICU_Val1;
extern Icu_17_TimerIp_DutyCycleType ICU_Val2;
extern uint8 Ext_D_In2;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Com_Runnable_2ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Com_Runnable_2ms
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Com_Runnable_500ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 500ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AN0_AN0(AN0 data)
 *   Std_ReturnType Rte_Write_AN1_AN1(AN1 data)
 *   Std_ReturnType Rte_Write_AN10_AN10(AN10 data)
 *   Std_ReturnType Rte_Write_AN11_AN11(AN11 data)
 *   Std_ReturnType Rte_Write_AN12_AN12(AN12 data)
 *   Std_ReturnType Rte_Write_AN13_AN13(AN13 data)
 *   Std_ReturnType Rte_Write_AN14_AN14(AN14 data)
 *   Std_ReturnType Rte_Write_AN15_AN15(AN15 data)
 *   Std_ReturnType Rte_Write_AN16_AN16(AN16 data)
 *   Std_ReturnType Rte_Write_AN17_AN17(AN17 data)
 *   Std_ReturnType Rte_Write_AN18_AN18(AN18 data)
 *   Std_ReturnType Rte_Write_AN19_AN19(AN19 data)
 *   Std_ReturnType Rte_Write_AN2_AN2(AN2 data)
 *   Std_ReturnType Rte_Write_AN20_AN20(AN20 data)
 *   Std_ReturnType Rte_Write_AN21_AN21(AN21 data)
 *   Std_ReturnType Rte_Write_AN22_AN22(AN22 data)
 *   Std_ReturnType Rte_Write_AN23_AN23(AN23 data)
 *   Std_ReturnType Rte_Write_AN24_AN24(AN24 data)
 *   Std_ReturnType Rte_Write_AN25_AN25(AN25 data)
 *   Std_ReturnType Rte_Write_AN26_AN26(AN26 data)
 *   Std_ReturnType Rte_Write_AN27_AN27(AN27 data)
 *   Std_ReturnType Rte_Write_AN28_AN28(AN28 data)
 *   Std_ReturnType Rte_Write_AN29_AN29(AN29 data)
 *   Std_ReturnType Rte_Write_AN3_AN3(AN3 data)
 *   Std_ReturnType Rte_Write_AN30_AN30(AN30 data)
 *   Std_ReturnType Rte_Write_AN31_AN31(AN31 data)
 *   Std_ReturnType Rte_Write_AN32_AN32(AN32 data)
 *   Std_ReturnType Rte_Write_AN33_AN33(AN33 data)
 *   Std_ReturnType Rte_Write_AN34_AN34(AN34 data)
 *   Std_ReturnType Rte_Write_AN35_AN35(AN35 data)
 *   Std_ReturnType Rte_Write_AN36_AN36(AN36 data)
 *   Std_ReturnType Rte_Write_AN37_AN37(AN37 data)
 *   Std_ReturnType Rte_Write_AN38_AN38(AN38 data)
 *   Std_ReturnType Rte_Write_AN39_AN39(AN39 data)
 *   Std_ReturnType Rte_Write_AN4_AN4(AN4 data)
 *   Std_ReturnType Rte_Write_AN40_AN40(AN40 data)
 *   Std_ReturnType Rte_Write_AN41_AN41(AN41 data)
 *   Std_ReturnType Rte_Write_AN42_AN42(AN42 data)
 *   Std_ReturnType Rte_Write_AN43_AN43(AN43 data)
 *   Std_ReturnType Rte_Write_AN44_AN44(AN44 data)
 *   Std_ReturnType Rte_Write_AN45_AN45(AN45 data)
 *   Std_ReturnType Rte_Write_AN46_AN46(AN46 data)
 *   Std_ReturnType Rte_Write_AN47_AN47(AN47 data)
 *   Std_ReturnType Rte_Write_AN5_AN5(AN5 data)
 *   Std_ReturnType Rte_Write_AN6_AN6(AN6 data)
 *   Std_ReturnType Rte_Write_AN7_AN7(AN7 data)
 *   Std_ReturnType Rte_Write_AN8_AN8(AN8 data)
 *   Std_ReturnType Rte_Write_AN9_AN9(AN9 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Com_Runnable_500ms_doc
 *********************************************************************************************************************/
extern uint16 ADC_SW_GRP0_RES[8];
extern uint16 ADC_SW_GRP1_RES[8];
extern uint16 ADC_SW_GRP2_RES[8];
extern uint16 ADC_SW_GRP3_RES[8];
extern uint16 ADC_SW_GRP11_RES[8];
extern uint16 ADC_SW_GRP8_RES[16];
extern AdcValSampleType AdcValSampleInfo_Table[6];
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Com_Runnable_500ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Com_Runnable_500ms
 *********************************************************************************************************************/
#if 0
   Rte_Write_AN0_AN0(ADC_SW_GRP0_RES[0]*5000/4095);
    Rte_Write_AN1_AN1(ADC_SW_GRP0_RES[1]*5000/4095);
    Rte_Write_AN2_AN2(ADC_SW_GRP0_RES[2]*5000/4095);
    Rte_Write_AN3_AN3(ADC_SW_GRP0_RES[3]*5000/4095);
    Rte_Write_AN4_AN4(ADC_SW_GRP0_RES[4]*5000/4095);
    Rte_Write_AN5_AN5(ADC_SW_GRP0_RES[5]*5000/4095);
    Rte_Write_AN6_AN6(ADC_SW_GRP0_RES[6]*5000/4095);
    Rte_Write_AN7_AN7(ADC_SW_GRP0_RES[7]*5000/4095);

    Rte_Write_AN8_AN8(ADC_SW_GRP1_RES[0]*5000/4095);
    Rte_Write_AN9_AN9(ADC_SW_GRP1_RES[1]*5000/4095);
    Rte_Write_AN10_AN10(ADC_SW_GRP1_RES[2]*5000/4095);
    Rte_Write_AN11_AN11(ADC_SW_GRP1_RES[3]*5000/4095);
    Rte_Write_AN12_AN12(ADC_SW_GRP1_RES[4]*5000/4095);
    Rte_Write_AN13_AN13(ADC_SW_GRP1_RES[5]*5000/4095);
    Rte_Write_AN14_AN14(ADC_SW_GRP1_RES[6]*5000/4095);
    Rte_Write_AN15_AN15(ADC_SW_GRP1_RES[7]*5000/4095);

    Rte_Write_AN16_AN16(ADC_SW_GRP2_RES[0]*5000/4095);
    Rte_Write_AN17_AN17(ADC_SW_GRP2_RES[1]*5000/4095);
    Rte_Write_AN18_AN18(ADC_SW_GRP2_RES[2]*5000/4095);
    Rte_Write_AN19_AN19(ADC_SW_GRP2_RES[3]*5000/4095);
    Rte_Write_AN20_AN20(ADC_SW_GRP2_RES[4]*5000/4095);
    Rte_Write_AN21_AN21(ADC_SW_GRP2_RES[5]*5000/4095);
    Rte_Write_AN22_AN22(ADC_SW_GRP2_RES[6]*5000/4095);
    Rte_Write_AN23_AN23(ADC_SW_GRP2_RES[7]*5000/4095);

    Rte_Write_AN24_AN24(ADC_SW_GRP3_RES[0]*5000/4095);
    Rte_Write_AN25_AN25(ADC_SW_GRP3_RES[1]*5000/4095);
    Rte_Write_AN26_AN26(ADC_SW_GRP3_RES[2]*5000/4095);
    Rte_Write_AN27_AN27(ADC_SW_GRP3_RES[3]*5000/4095);
    Rte_Write_AN28_AN28(ADC_SW_GRP3_RES[4]*5000/4095);
    Rte_Write_AN29_AN29(ADC_SW_GRP3_RES[5]*5000/4095);
    Rte_Write_AN30_AN30(ADC_SW_GRP3_RES[6]*5000/4095);
    Rte_Write_AN31_AN31(ADC_SW_GRP3_RES[7]*5000/4095);

    Rte_Write_AN32_AN32(ADC_SW_GRP8_RES[0]*5000/4095);
    Rte_Write_AN33_AN33(ADC_SW_GRP8_RES[1]*5000/4095);
    Rte_Write_AN34_AN34(ADC_SW_GRP8_RES[2]*5000/4095);
    Rte_Write_AN35_AN35(ADC_SW_GRP8_RES[3]*5000/4095);
    Rte_Write_AN36_AN36(ADC_SW_GRP8_RES[4]*5000/4095);
    Rte_Write_AN37_AN37(ADC_SW_GRP8_RES[5]*5000/4095);
    Rte_Write_AN38_AN38(ADC_SW_GRP8_RES[6]*5000/4095);
    Rte_Write_AN39_AN39(ADC_SW_GRP8_RES[7]*5000/4095);

    Rte_Write_AN40_AN40(ADC_SW_GRP8_RES[8]*5000/4095);
    Rte_Write_AN41_AN41(ADC_SW_GRP8_RES[9]*5000/4095);
    Rte_Write_AN42_AN42(ADC_SW_GRP8_RES[10]*5000/4095);
    Rte_Write_AN43_AN43(ADC_SW_GRP8_RES[11]*5000/4095);
    Rte_Write_AN44_AN44(ADC_SW_GRP8_RES[12]*5000/4095);
    Rte_Write_AN45_AN45(ADC_SW_GRP8_RES[13]*5000/4095);
    Rte_Write_AN46_AN46(ADC_SW_GRP8_RES[14]*5000/4095);
    Rte_Write_AN47_AN47(ADC_SW_GRP8_RES[15]*5000/4095);
#endif
    Rte_Write_AN0_AN0(AdcValSampleInfo_Table[0].AdcChAveResult[0]*5000/4095);
    Rte_Write_AN1_AN1(AdcValSampleInfo_Table[0].AdcChAveResult[1]*5000/4095);
    Rte_Write_AN2_AN2(AdcValSampleInfo_Table[0].AdcChAveResult[2]*5000/4095);
    Rte_Write_AN3_AN3(AdcValSampleInfo_Table[0].AdcChAveResult[3]*5000/4095);
    Rte_Write_AN4_AN4(AdcValSampleInfo_Table[0].AdcChAveResult[4]*5000/4095);
    Rte_Write_AN5_AN5(AdcValSampleInfo_Table[0].AdcChAveResult[5]*5000/4095);
    Rte_Write_AN6_AN6(AdcValSampleInfo_Table[0].AdcChAveResult[6]*5000/4095);
    Rte_Write_AN7_AN7(AdcValSampleInfo_Table[0].AdcChAveResult[7]*5000/4095);

    Rte_Write_AN8_AN8(  AdcValSampleInfo_Table[1].AdcChAveResult[0]*5000/4095);
    Rte_Write_AN9_AN9(  AdcValSampleInfo_Table[1].AdcChAveResult[1]*5000/4095);
    Rte_Write_AN10_AN10(AdcValSampleInfo_Table[1].AdcChAveResult[2]*5000/4095);
    Rte_Write_AN11_AN11(AdcValSampleInfo_Table[1].AdcChAveResult[3]*5000/4095);
    Rte_Write_AN12_AN12(AdcValSampleInfo_Table[1].AdcChAveResult[4]*5000/4095);
    Rte_Write_AN13_AN13(AdcValSampleInfo_Table[1].AdcChAveResult[5]*5000/4095);
    Rte_Write_AN14_AN14(AdcValSampleInfo_Table[1].AdcChAveResult[6]*5000/4095);
    Rte_Write_AN15_AN15(AdcValSampleInfo_Table[1].AdcChAveResult[7]*5000/4095);

    Rte_Write_AN16_AN16(AdcValSampleInfo_Table[2].AdcChAveResult[0]*5000/4095);
    Rte_Write_AN17_AN17(AdcValSampleInfo_Table[2].AdcChAveResult[1]*5000/4095);
    Rte_Write_AN18_AN18(AdcValSampleInfo_Table[2].AdcChAveResult[2]*5000/4095);
    Rte_Write_AN19_AN19(AdcValSampleInfo_Table[2].AdcChAveResult[3]*5000/4095);
    Rte_Write_AN20_AN20(AdcValSampleInfo_Table[2].AdcChAveResult[4]*5000/4095);
    Rte_Write_AN21_AN21(AdcValSampleInfo_Table[2].AdcChAveResult[5]*5000/4095);
    Rte_Write_AN22_AN22(AdcValSampleInfo_Table[2].AdcChAveResult[6]*5000/4095);
    Rte_Write_AN23_AN23(AdcValSampleInfo_Table[2].AdcChAveResult[7]*5000/4095);

    Rte_Write_AN24_AN24(AdcValSampleInfo_Table[3].AdcChAveResult[0]*5000/4095);
    Rte_Write_AN25_AN25(AdcValSampleInfo_Table[3].AdcChAveResult[1]*5000/4095);
    Rte_Write_AN26_AN26(AdcValSampleInfo_Table[3].AdcChAveResult[2]*5000/4095);
    Rte_Write_AN27_AN27(AdcValSampleInfo_Table[3].AdcChAveResult[3]*5000/4095);
    Rte_Write_AN28_AN28(AdcValSampleInfo_Table[3].AdcChAveResult[4]*5000/4095);
    Rte_Write_AN29_AN29(AdcValSampleInfo_Table[3].AdcChAveResult[5]*5000/4095);
    Rte_Write_AN30_AN30(AdcValSampleInfo_Table[3].AdcChAveResult[6]*5000/4095);
    Rte_Write_AN31_AN31(AdcValSampleInfo_Table[3].AdcChAveResult[7]*5000/4095);

    Rte_Write_AN32_AN32(AdcValSampleInfo_Table[5].AdcChAveResult[0]*5000/4095);
    Rte_Write_AN33_AN33(AdcValSampleInfo_Table[5].AdcChAveResult[1]*5000/4095);
    Rte_Write_AN34_AN34(AdcValSampleInfo_Table[5].AdcChAveResult[2]*5000/4095);
    Rte_Write_AN35_AN35(AdcValSampleInfo_Table[5].AdcChAveResult[3]*5000/4095);
    Rte_Write_AN36_AN36(AdcValSampleInfo_Table[5].AdcChAveResult[4]*5000/4095);
    Rte_Write_AN37_AN37(AdcValSampleInfo_Table[5].AdcChAveResult[5]*5000/4095);
    Rte_Write_AN38_AN38(AdcValSampleInfo_Table[5].AdcChAveResult[6]*5000/4095);
    Rte_Write_AN39_AN39(AdcValSampleInfo_Table[5].AdcChAveResult[7]*5000/4095);

    Rte_Write_AN40_AN40(AdcValSampleInfo_Table[5].AdcChAveResult[8]*5000/4095);
    Rte_Write_AN41_AN41(AdcValSampleInfo_Table[5].AdcChAveResult[9]*5000/4095);
    Rte_Write_AN42_AN42(AdcValSampleInfo_Table[5].AdcChAveResult[10]*5000/4095);
    Rte_Write_AN43_AN43(AdcValSampleInfo_Table[5].AdcChAveResult[11]*5000/4095);
    Rte_Write_AN44_AN44(AdcValSampleInfo_Table[5].AdcChAveResult[12]*5000/4095);
    Rte_Write_AN45_AN45(AdcValSampleInfo_Table[5].AdcChAveResult[13]*5000/4095);
    Rte_Write_AN46_AN46(AdcValSampleInfo_Table[5].AdcChAveResult[14]*5000/4095);
    Rte_Write_AN47_AN47(AdcValSampleInfo_Table[5].AdcChAveResult[15]*5000/4095);

  if( ICU_Val1.PeriodTime != 0 )
  {
    Rte_Write_EXT_PWM_IN1_Duty_EXT_PWM_IN1_Duty(ICU_Val1.ActiveTime*100/ICU_Val1.PeriodTime);
    Rte_Write_EXT_PWM_IN1_Period_EXT_PWM_IN1_Period(ICU_Val1.PeriodTime*100/625);
  }
  else
  {
    Rte_Write_EXT_PWM_IN1_Duty_EXT_PWM_IN1_Duty(0);
    Rte_Write_EXT_PWM_IN1_Period_EXT_PWM_IN1_Period(0);
  }

  if( ICU_Val2.PeriodTime != 0 )
  {
    Rte_Write_EXT_PWM_IN2_Duty_EXT_PWM_IN2_Duty(ICU_Val2.ActiveTime*100/ICU_Val2.PeriodTime);
    Rte_Write_EXT_PWM_IN2_Period_EXT_PWM_IN2_Period(ICU_Val2.PeriodTime*100/625);
  }    
  else
  {
    Rte_Write_EXT_PWM_IN2_Duty_EXT_PWM_IN2_Duty(0);
    Rte_Write_EXT_PWM_IN2_Period_EXT_PWM_IN2_Period(0);
  }

  Rte_Write_Ext_IN2_Ext_IN2(Ext_D_In2);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Rte_Msg10Eh_Rx_Notification
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <Tle888qk_Out21_En> of PortPrototype <Tle888qk_Out21_En>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg10Eh_Rx_Notification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Rte_Msg10Eh_Rx_Notification(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg10Eh_Rx_Notification
 *********************************************************************************************************************/
  Rte_Read_Tle888qk_Out21_En_Tle888qk_Out21_En(&SensorMngCtrlVal.Tle888qk_Out21_En);
  Rte_Read_Tle888qk_Out22_En_Tle888qk_Out22_En(&SensorMngCtrlVal.Tle888qk_Out22_En);
  Rte_Read_Tle888qk_Out23_En_Tle888qk_Out23_En(&SensorMngCtrlVal.Tle888qk_Out23_En);
  Rte_Read_Tle888qk_Out24_En_Tle888qk_Out24_En(&SensorMngCtrlVal.Tle888qk_Out24_En);

  Rte_Read_Tle888qk_Out21BriCfg_Tle888qk_Out21BriCfg(&SensorMngCtrlVal.Tle888qk_Out21BriCfg);
  Rte_Read_Tle888qk_Out22BriCfg_Tle888qk_Out22BriCfg(&SensorMngCtrlVal.Tle888qk_Out22BriCfg);
  Rte_Read_Tle888qk_Out23BriCfg_Tle888qk_Out23BriCfg(&SensorMngCtrlVal.Tle888qk_Out23BriCfg);
  Rte_Read_Tle888qk_Out24BriCfg_Tle888qk_Out24BriCfg(&SensorMngCtrlVal.Tle888qk_Out24BriCfg);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Rte_Msg10Fh_Rx_Notification
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <Bts7xx_HS1_En> of PortPrototype <Bts7xx_HS1_En>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg10Fh_Rx_Notification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Rte_Msg10Fh_Rx_Notification(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg10Fh_Rx_Notification
 *********************************************************************************************************************/
  Rte_Read_Bts7xx_HS1_En_Bts7xx_HS1_En(&SensorMngCtrlVal.Bts7xx_HS1_En);
  Rte_Read_Bts7xx_HS2_En_Bts7xx_HS2_En(&SensorMngCtrlVal.Bts7xx_HS2_En);
  Rte_Read_Bts7xx_HS3_En_Bts7xx_HS3_En(&SensorMngCtrlVal.Bts7xx_HS3_En);
  Rte_Read_Bts7xx_HS4_En_Bts7xx_HS4_En(&SensorMngCtrlVal.Bts7xx_HS4_En);

  Rte_Read_Tle4252d_en_Tle4252d_en(&SensorMngCtrlVal.Tle4252d_en);
  Rte_Read_Tle9201_Dir_Tle9201_Dir(&SensorMngCtrlVal.Tle9201_Dir);
  Rte_Read_Tle9201_Dis_Tle9201_Dis(&SensorMngCtrlVal.Tle9201_Dis);
  Rte_Read_Tle9201_Pwm_Tle9201_Pwm(&SensorMngCtrlVal.Tle9201_Pwm);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Rte_Msg110h_Rx_Notification
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <Tle888qk_Lout1_En> of PortPrototype <Tle888qk_Lout1_En>
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg110h_Rx_Notification_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Com_SWC_CODE) Rte_Msg110h_Rx_Notification(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Rte_Msg110h_Rx_Notification
 *********************************************************************************************************************/
  Rte_Read_Tle888qk_Lout14_En_Tle888qk_Lout14_En(&SensorMngCtrlVal.Tle888qk_Lout14_En);
  Rte_Read_Tle888qk_Lout16_En_Tle888qk_Lout16_En(&SensorMngCtrlVal.Tle888qk_Lout16_En);
  Rte_Read_Tle888qk_Lout1_En_Tle888qk_Lout1_En(&SensorMngCtrlVal.Tle888qk_Lout01_En);
  Rte_Read_Tle888qk_Lout8_En_Tle888qk_Lout8_En(&SensorMngCtrlVal.Tle888qk_Lout08_En);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Com_SWC_STOP_SEC_CODE
#include "Com_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: documentation area:Rte_Msg201h_Rx_Notification_doc)  *********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:Rte_Msg201h_Rx_Notification)  ********************/
  uint16 data = 0xFF;
  Rte_Read_Com_SWC_VcuRxMsg2_Sig0_VcuRxMsg2_Sig0( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig0_VcuTxMsg2_Sig0( data );

  Rte_Read_Com_SWC_VcuRxMsg2_Sig1_VcuRxMsg2_Sig1( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig1_VcuTxMsg2_Sig1( data );

  Rte_Read_Com_SWC_VcuRxMsg2_Sig2_VcuRxMsg2_Sig2( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig2_VcuTxMsg2_Sig2( data );

  Rte_Read_Com_SWC_VcuRxMsg2_Sig3_VcuRxMsg2_Sig3( &data );
  Rte_Write_Com_SWC_VcuTxMsg2_Sig3_VcuTxMsg2_Sig3( data );
/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: documentation area:Rte_Msg200h_Rx_Notification_doc)  *********************/


/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: runnable implementation:Rte_Msg200h_Rx_Notification)  ********************/
  uint16 data = 0xFF;
  Rte_Read_Com_SWC_VcuRxMsg1_Sig0_VcuRxMsg1_Sig0( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig0_VcuTxMsg1_Sig0( data );

  Rte_Read_Com_SWC_VcuRxMsg1_Sig1_VcuRxMsg1_Sig1( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig1_VcuTxMsg1_Sig1( data );

  Rte_Read_Com_SWC_VcuRxMsg1_Sig2_VcuRxMsg1_Sig2( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig2_VcuTxMsg1_Sig2( data );

  Rte_Read_Com_SWC_VcuRxMsg1_Sig3_VcuRxMsg1_Sig3( &data );
  Rte_Write_Com_SWC_VcuTxMsg1_Sig3_VcuTxMsg1_Sig3( data );
/***  End of saved code  ************************************************************************************/
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

*/
