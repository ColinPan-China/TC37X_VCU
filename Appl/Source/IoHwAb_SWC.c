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
 *             File:  IoHwAb_SWC.c
 *           Config:  TC37X_VCU.dpa
 *        SW-C Type:  IoHwAb_SWC
 *
 *        Generator:  MICROSAR RTE Generator Version 4.26.0
 *                    RTE Core Version 1.26.0
 *          License:  CBD2101138
 *
 *      Description:  C-Code implementation template for SW-C <IoHwAb_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_IoHwAb_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "Dio.h"
#include "TLE8888qk.h"
#include "Adc_Sample.h"
#include "PwmIf.h"
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
 * boolean: Boolean (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


#define IoHwAb_SWC_START_SEC_CODE
#include "IoHwAb_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: IoHwAb_SWC_Runnable_50ms
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 50ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_IF_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz(uint8 *data)
 *   Std_ReturnType Rte_Read_IF_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ecu_KeyWakeStatus_Keywake(boolean data)
 *   Std_ReturnType Rte_Write_IF_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo(uint16 data)
 *   Std_ReturnType Rte_Write_IF_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo(uint16 data)
 *   Std_ReturnType Rte_Write_IF_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV(uint16 data)
 *   Std_ReturnType Rte_Write_IF_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV(uint16 data)
 *   Std_ReturnType Rte_Write_IF_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz(uint8 data)
 *   Std_ReturnType Rte_Write_IF_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg(boolean data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Runnable_50ms_doc
 *********************************************************************************************************************/
uint8 HVILPwmFrq_Hz = 0;
Icu_17_TimerIp_DutyCycleType ICU_Val1;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, IoHwAb_SWC_CODE) IoHwAb_SWC_Runnable_50ms(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: IoHwAb_SWC_Runnable_50ms
 *********************************************************************************************************************/
  boolean KL15CtrlReq_Flg = FALSE;
  boolean KL15eFb_Flg     = FALSE;
  uint32 periodtick = 0;
  uint32 fre_ipwm = 0;
  uint32 ad1 = 0;
  uint32 ad2 = 0;

  Rte_Read_IF_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg(&KL15CtrlReq_Flg);

  if( KL15CtrlReq_Flg == TRUE )
  {
      TLE8888qk_SpiTransmit(CMD_CONT(0,0x80), NULL_PTR);
  }
  else
  {
      TLE8888qk_SpiTransmit(CMD_CONT(0,0x00), NULL_PTR);
  }


  KL15eFb_Flg = Dio_ReadChannel(DioConf_DioChannel_DioChannel_P33_0_EXT_D_IN2);
  Rte_Write_IF_IOAbs_KL15eFb_Flg_tec_IOAbs_KL15eFb_Flg(KL15eFb_Flg);

 if( IoHwGetKL15Level() == KL15_HIGH_LEVEL )
  {
    Rte_Write_Ecu_KeyWakeStatus_Keywake(1);
  }
  else
  {
    Rte_Write_Ecu_KeyWakeStatus_Keywake(0);
  }

  Rte_Read_IF_ErrMgmt_HVILPwmFrq_Hz_tec_ErrMgmt_HVILPwmFrq_Hz(&HVILPwmFrq_Hz);
  periodtick = HVILPwmFrq_Hz*390625/10000;
//  Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_P00_4,periodtick,0x4000);
  Pwm_17_GtmCcu6_SetOutputToIdle(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_P00_4);
//  Pwm_17_GtmCcu6_SetOutputToIdle(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_P02_5_IN7_IGN3);
  Pwm_17_GtmCcu6_SetPeriodAndDuty(Pwm_17_GtmCcu6Conf_PwmChannel_PwmChannel_PWM_P02_5_IN7_IGN3,periodtick,0x4000);


  Icu_17_TimerIp_GetDutyCycleValues(IcuConf_IcuChannel_IcuChannel_P34_4, &ICU_Val1);
  if( ICU_Val1.PeriodTime != 0 )
  {
//    NOP();
    fre_ipwm = 100000000/16/ICU_Val1.PeriodTime;
  }

  Rte_Write_IF_IOAbs_HVILPwmFrq_Hz_tec_IOAbs_HVILPwmFrq_Hz(fre_ipwm);

  ad1 = IoHwGet_AccrPedlMaiRaw();
  ad2 = IoHwGet_AccrPedlRdnRaw();

  Rte_Write_IF_IOAbs_AccrPedl1SplyVoltInfo_tec_IOAbs_AccrPedl1SplyVoltInfo( 5000 );
  Rte_Write_IF_IOAbs_AccrPedl2SplyVoltInfo_tec_IOAbs_AccrPedl2SplyVoltInfo( 5000 );

  Rte_Write_IF_IOAbs_AccrPedlMaiRaw_mV_tec_IOAbs_AccrPedlMaiRaw_mV(ad1);
  Rte_Write_IF_IOAbs_AccrPedlRdnRaw_mV_tec_IOAbs_AccrPedlRdnRaw_mV(ad2);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define IoHwAb_SWC_STOP_SEC_CODE
#include "IoHwAb_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
