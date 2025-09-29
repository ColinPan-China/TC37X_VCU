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
 *  Filename:           CtAp_CANHandler_Cal.c
 *  File Creation Date: 26-Feb-2025
 *  Model Name:         CtAp_CANHandler
 *  Model Version:      3.006
 *  Model Author:       JackyWang - Wed Feb 05 16:16:12 2025
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : 2025 07/31
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - 2025 07/02
 *
 *
 *******************************************************************************/
#include "CtAp_CANHandler_Fuc.h"
#include "rtwtypes.h"
#include "CtAp_CANHandler_types.h"
#include <math.h>
/*  GLOBAL DATA DEFINITIONS */

/* Exported data definition */

/* ConstVolatile memory section */

#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

real32_T CtAp_CANHandler_ATOM_SignalRead(real32_T InputSignal, real32_T ResolutionRation, real32_T Offset)
{
  real32_T Value = 0.0F;


  real32_T MutiSig = Offset / ResolutionRation;
  
  real32_T FinalSig = InputSignal + MutiSig;


  Value = FinalSig * ResolutionRation;



  //Value = fmaf(InputSignal,ResolutionRation,Offset);
  return Value ;

  

}

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"





#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
//
real32_T CtAp_CANHandler_ATOM_SignalSend(real32_T InputSignal, real32_T ResolutionRation, real32_T Offset)
{  
  real32_T InitValue;
  
  InitValue = roundf((InputSignal - Offset) / ResolutionRation);
 
  return InitValue;
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"






#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

uint8_T CtAp_CANHandl_ATOM_EventSignalRead(boolean_T RxFlag,uint8_T RxValue, uint8_T NoRxDelayTime,uint8_T *AllowDelayCnt)
{

   uint8_T EventValue;
   
   if(RxFlag)
   {
    EventValue = RxValue;
    *AllowDelayCnt = NoRxDelayTime/20U;
   }
   else
   {
     if(*AllowDelayCnt==0)
     {
        EventValue = 0;
     }
     else
     {
       (*AllowDelayCnt) --;
        EventValue = RxValue;
     }

   }
   return EventValue;
}


#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"


#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

uint8_T CtAp_CANHandl_ATOM_CESignalRead(boolean_T RxFlag, uint8_T RxValue,uint16_T InitCycleTime, CE_Delay_Cnt_TYPE *CE_Delay_Cnt)
{
  uint8_T InitCEValue;
  uint8_T NoRxFlg_Delay = CE_Delay_Cnt->NoRxFlg_Delay_DSTATE;
  uint8_T InitCEValue_Delay = CE_Delay_Cnt->InitCEValue_Delay_DSTATE;
  uint8_T ContinuousRxFlg_Cnt = CE_Delay_Cnt->ContinuousRxFlg_Cnt_DSTATE;
  uint8_T ContinuousRxFlg_Delay = CE_Delay_Cnt->ContinuousRxFlg_Delay_DSTATE;
  //连续三帧无接收标志时，计时清0
  if (!RxFlag) 
  {
    NoRxFlg_Delay = NoRxFlg_Delay + ((uint8_T)1U);
    if (NoRxFlg_Delay > ((uint8_T)250U)) 
    {
      NoRxFlg_Delay = ((uint8_T)250U);
    }
    if (NoRxFlg_Delay >= ((uint8_T)2U)) 
    {
      ContinuousRxFlg_Cnt = ((uint8_T)0U);
    }
  } 
  else //接收标志计数
  {
    NoRxFlg_Delay = ((uint8_T)0U);
    ContinuousRxFlg_Cnt = ContinuousRxFlg_Delay + ((uint8_T)1U);
    if (ContinuousRxFlg_Cnt > ((uint8_T)3U)) 
    {
      ContinuousRxFlg_Cnt = ((uint8_T)3U);
    }
  }
  if (ContinuousRxFlg_Cnt >= ((uint8_T)3U)) //连续接收超过三帧 开始赋值CE信号
  {
    InitCEValue = RxValue;
  } 
  else 
  {
    uint16_T CECycle;
    uint16_T CycleRatioInitToCE;
    CECycle = (uint16_T)20U;
    if (CECycle == 0U) 
    {
      CycleRatioInitToCE = MAX_uint16_T;
      /* Divide by zero handler */
    } 
    else 
    {
      CycleRatioInitToCE = InitCycleTime / CECycle;
    }
    if ((NoRxFlg_Delay == ((uint8_T)0U)) ||((uint16_T)NoRxFlg_Delay >= CycleRatioInitToCE)) 
    {
      InitCEValue = ((uint8_T)0U);
    } 
    else 
    {
      InitCEValue = InitCEValue_Delay;
    }
  }
  ContinuousRxFlg_Delay = ContinuousRxFlg_Cnt;
  InitCEValue_Delay = InitCEValue;
  CE_Delay_Cnt->NoRxFlg_Delay_DSTATE = NoRxFlg_Delay;
  CE_Delay_Cnt->NoRxFlg_Delay_DSTATE = NoRxFlg_Delay;
  CE_Delay_Cnt->ContinuousRxFlg_Cnt_DSTATE = ContinuousRxFlg_Cnt;
  CE_Delay_Cnt->ContinuousRxFlg_Delay_DSTATE = ContinuousRxFlg_Delay;
  return InitCEValue;
}

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"



#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

void CtAp_CANHandler_E2ESpc3Cfm(uint8_T rtu_MessageCnt, boolean_T
    rtu_Update, uint32_T rtu_ErrSt, boolean_T rtu_OterCdn, uint32_T rtu_CANHandler_CRCWRONG, uint8_T
    rtu_E2EErrTimes, uint32_T rtu_CANHandler_OK, uint8_T rtu_MaxDeltaCnt, boolean_T* rty_CaculateFailCmpl,
    boolean_T* rty_Passed, ARID_DEF_E2ECfm_CtAp_CANHandl_T
    * CtAp_CANHandler__ARID_DEF_arg)

{
    boolean_T LocalPass;
    boolean_T rtb_Switch_ig53;
    CtAp_CANHandler__ARID_DEF_arg->Errst = ((rtu_ErrSt >> 24U) & 127U);

    if (rtu_Update)
    {
        CtAp_CANHandler__ARID_DEF_arg->update = 1;

    }
    else
    {
        CtAp_CANHandler__ARID_DEF_arg->update = 0;
    }

    if (CtAp_CANHandler__ARID_DEF_arg->update) {
		if (rtu_MessageCnt == 15)
		{
			rtb_Switch_ig53 = true;
		}
        else if ((rtu_MessageCnt - CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE)<0) {

            if ((rtu_MessageCnt - CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE + (uint8_T)15U)<= rtu_MaxDeltaCnt)
            {
                rtb_Switch_ig53 = false;
            }
            else {
                rtb_Switch_ig53 = true;
            }

        }
        else {
            rtb_Switch_ig53 = (((rtu_MessageCnt - CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE) == (uint8_T)0U)||
                ((rtu_MessageCnt - CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE) > rtu_MaxDeltaCnt));
        }


        CtAp_CANHandler__ARID_DEF_arg->LogicalOperator2 = ((rtb_Switch_ig53 ||
            (CtAp_CANHandler__ARID_DEF_arg->Errst == rtu_CANHandler_CRCWRONG)) && rtu_OterCdn);


        CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE = rtu_MessageCnt;


        //CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE_i1m1 = rtu_MessageCnt;
    }


    if ((uint32_T)CtAp_CANHandler__ARID_DEF_arg->is_active_c3_ATOM_standard_auto ==
        0U) {
        CtAp_CANHandler__ARID_DEF_arg->is_active_c3_ATOM_standard_auto = 1U;
        CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable =
            CtAp_CANHandler_IN_Init;
        *rty_CaculateFailCmpl = false;
        CtAp_CANHandler__ARID_DEF_arg->FailCnt = 0U;
    }
    else if ((uint32_T)
        CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable ==
        CtAp_CANHandler_IN_Cnt) {
        if (!CtAp_CANHandler__ARID_DEF_arg->LogicalOperator2) {
            CtAp_CANHandler__ARID_DEF_arg->is_Cnt = CtAp_CANHand_IN_NO_ACTIVE_CHILD;
            CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable =
                CtAp_CANHandler_IN_Init;
            *rty_CaculateFailCmpl = false;
            CtAp_CANHandler__ARID_DEF_arg->FailCnt = 0U;
        }
        else if ((uint32_T)CtAp_CANHandler__ARID_DEF_arg->is_Cnt ==
            CtAp_CANHandler_IN_Init_bxhl) {
            if(CtAp_CANHandler__ARID_DEF_arg->FailCnt<rtu_E2EErrTimes)
				   {CtAp_CANHandler__ARID_DEF_arg->FailCnt += CtAp_CANHandler__ARID_DEF_arg->update ? ((uint8_T)1) :((uint8_T)0);}
			   else{
				   
			   }
            CtAp_CANHandler__ARID_DEF_arg->PassCnt = 0;
            if (CtAp_CANHandler__ARID_DEF_arg->FailCnt >= (rtu_E2EErrTimes )) {
                CtAp_CANHandler__ARID_DEF_arg->is_Cnt = CtAp_CANHandler_IN_Over;
                *rty_CaculateFailCmpl = true;
            }
            else {
            }
        }
        else {
            /* case IN_Over: */
        }

        /* case IN_Init: */
    }
    else if (CtAp_CANHandler__ARID_DEF_arg->LogicalOperator2) {
        CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable =
            CtAp_CANHandler_IN_Cnt;
        CtAp_CANHandler__ARID_DEF_arg->is_Cnt = CtAp_CANHandler_IN_Init_bxhl;
		if (CtAp_CANHandler__ARID_DEF_arg->FailCnt == 0U)
        {CtAp_CANHandler__ARID_DEF_arg->FailCnt = 1U;}
		else if(CtAp_CANHandler__ARID_DEF_arg->FailCnt<rtu_E2EErrTimes){
		CtAp_CANHandler__ARID_DEF_arg->FailCnt += CtAp_CANHandler__ARID_DEF_arg->update ? ((uint8_T)1) :((uint8_T)0);
		}
		else{
			
		}
    }
    else {
        /* no actions */
    }



    if (CtAp_CANHandler__ARID_DEF_arg->update) {
        if (rtu_MessageCnt == 0U) {

            if (CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE == 14U)
            {
                rtb_Switch_ig53 = true;
            }
            else {
                rtb_Switch_ig53 = false;
            }

        }
       
        else {
                rtb_Switch_ig53 = (((rtu_MessageCnt - CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE) == 1U) && (rtu_MessageCnt != 15U));
        }


        LocalPass = (rtb_Switch_ig53 && (CtAp_CANHandler__ARID_DEF_arg->Errst == rtu_CANHandler_OK));

        if (LocalPass)
        {
            CtAp_CANHandler__ARID_DEF_arg->PassCnt += CtAp_CANHandler__ARID_DEF_arg->update ? ((uint8_T)1) : ((uint8_T)0);

            if (CtAp_CANHandler__ARID_DEF_arg->PassCnt >= 3)
            {
                *rty_Passed = true;
				CtAp_CANHandler__ARID_DEF_arg->FailCnt = 0;
                CtAp_CANHandler__ARID_DEF_arg->PassCnt = 3;
            }
            else
            {

            }


        }
        else
        {
            *rty_Passed = false;
			CtAp_CANHandler__ARID_DEF_arg->PassCnt = 0;
        }
        CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE = rtu_MessageCnt;


        //CtAp_CANHandler__ARID_DEF_arg->Delay2_DSTATE = rtu_MessageCnt;
        

    }
    //CtAp_CANHandler__ARID_DEF_arg->Errstold = CtAp_CANHandler__ARID_DEF_arg->Errst;
    CtAp_CANHandler__ARID_DEF_arg->update = 0;
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

void CtAp_CANHandler_E2ECfm(uint8_T rtu_MessageCnt, boolean_T
    rtu_Update, uint32_T rtu_ErrSt, boolean_T rtu_OterCdn, uint8_T
    rtu_CANHandler_MAXDELTAcounterI, uint32_T rtu_CANHandler_CRCWRONG, uint8_T
    rtu_E2EErrTimes, uint32_T rtu_CANHandler_OK, boolean_T* rty_CaculateFailCmpl,
    boolean_T* rty_Passed, ARID_DEF_E2ECfm_CtAp_CANHandl_T
    * CtAp_CANHandler__ARID_DEF_arg)

{
    boolean_T LocalPass;
    boolean_T rtb_Switch_ig53;
    CtAp_CANHandler__ARID_DEF_arg->Errst = ((rtu_ErrSt >> 24U) & 127U);

    if (rtu_Update)
    {
        CtAp_CANHandler__ARID_DEF_arg->update = 1;

    }
    else
    {
        CtAp_CANHandler__ARID_DEF_arg->update = 0;
    }

    if (CtAp_CANHandler__ARID_DEF_arg->update) {
		if (rtu_MessageCnt==15U)
		{
			rtb_Switch_ig53 = true;
		}
        else if (rtu_MessageCnt == (uint8_T)((uint8_T)0U)) {

            if (CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE_i1m1 ==
                (uint8_T)((uint8_T)14U)) {
                rtb_Switch_ig53 = false;
            }
            else {
                rtb_Switch_ig53 = true;
            }

        }
        else {
            rtb_Switch_ig53 = ((rtu_MessageCnt -
                CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE) !=
                (uint8_T)rtu_CANHandler_MAXDELTAcounterI);
        }


        CtAp_CANHandler__ARID_DEF_arg->LogicalOperator2 = ((rtb_Switch_ig53 ||
            (CtAp_CANHandler__ARID_DEF_arg->Errst == rtu_CANHandler_CRCWRONG)) && rtu_OterCdn);


        CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE = rtu_MessageCnt;


        CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE_i1m1 = rtu_MessageCnt;
    }


    if ((uint32_T)CtAp_CANHandler__ARID_DEF_arg->is_active_c3_ATOM_standard_auto ==
        0U) {
        CtAp_CANHandler__ARID_DEF_arg->is_active_c3_ATOM_standard_auto = 1U;
        CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable =
            CtAp_CANHandler_IN_Init;
        *rty_CaculateFailCmpl = false;
        CtAp_CANHandler__ARID_DEF_arg->FailCnt = 0U;
    }
    else if ((uint32_T)
        CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable ==
        CtAp_CANHandler_IN_Cnt) {
        if (!CtAp_CANHandler__ARID_DEF_arg->LogicalOperator2) {
            CtAp_CANHandler__ARID_DEF_arg->is_Cnt = CtAp_CANHand_IN_NO_ACTIVE_CHILD;
            CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable =
                CtAp_CANHandler_IN_Init;
            *rty_CaculateFailCmpl = false;
            CtAp_CANHandler__ARID_DEF_arg->FailCnt = 0U;
        }
        else if ((uint32_T)CtAp_CANHandler__ARID_DEF_arg->is_Cnt ==
            CtAp_CANHandler_IN_Init_bxhl) {
            if(CtAp_CANHandler__ARID_DEF_arg->FailCnt<rtu_E2EErrTimes)
				   {CtAp_CANHandler__ARID_DEF_arg->FailCnt += CtAp_CANHandler__ARID_DEF_arg->update ? ((uint8_T)1) :((uint8_T)0);}
			   else{
				   
			   }
            CtAp_CANHandler__ARID_DEF_arg->PassCnt = 0;
            if (CtAp_CANHandler__ARID_DEF_arg->FailCnt >= (rtu_E2EErrTimes)) {
                CtAp_CANHandler__ARID_DEF_arg->is_Cnt = CtAp_CANHandler_IN_Over;
                *rty_CaculateFailCmpl = true;
            }
            else {
            }
        }
        else {
            /* case IN_Over: */
        }

        /* case IN_Init: */
    }
    else if (CtAp_CANHandler__ARID_DEF_arg->LogicalOperator2) {
        CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable =
            CtAp_CANHandler_IN_Cnt;
        CtAp_CANHandler__ARID_DEF_arg->is_Cnt = CtAp_CANHandler_IN_Init_bxhl;
        if (CtAp_CANHandler__ARID_DEF_arg->FailCnt == 0U)
        {CtAp_CANHandler__ARID_DEF_arg->FailCnt = 1U;}
		else if(CtAp_CANHandler__ARID_DEF_arg->FailCnt<rtu_E2EErrTimes){
		CtAp_CANHandler__ARID_DEF_arg->FailCnt += CtAp_CANHandler__ARID_DEF_arg->update ? ((uint8_T)1) :((uint8_T)0);
		}
		else{
			
		}
    }
    else {
        /* no actions */
    }



    if (CtAp_CANHandler__ARID_DEF_arg->update) {


        if (rtu_MessageCnt == (uint8_T)((uint8_T)0U)) {

            if (CtAp_CANHandler__ARID_DEF_arg->Delay2_DSTATE == (uint8_T)
                ((uint8_T)14U)) {

                rtb_Switch_ig53 = true;
            }
            else {

                rtb_Switch_ig53 = false;
            }


        }
        else {
            int16_T u;


            u = (int16_T)((int32_T)((int32_T)rtu_MessageCnt - (int32_T)
                CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE));
            /*if (u < 0) {
              u = (int16_T)(-u);
            }*/ //删去绝对值20250630


            rtb_Switch_ig53 = (((int32_T)u == (int32_T)rtu_CANHandler_MAXDELTAcounterI)&&(rtu_MessageCnt != 15U));
        }


        LocalPass = (rtb_Switch_ig53 && (CtAp_CANHandler__ARID_DEF_arg->Errst == rtu_CANHandler_OK));

        if (LocalPass)
        {
            *rty_Passed = true;
			CtAp_CANHandler__ARID_DEF_arg->FailCnt = 0U;
        }
        else
        {
            *rty_Passed = false;
        }
        CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE = rtu_MessageCnt;


        CtAp_CANHandler__ARID_DEF_arg->Delay2_DSTATE = rtu_MessageCnt;
        

    }
    //CtAp_CANHandler__ARID_DEF_arg->Errstold = CtAp_CANHandler__ARID_DEF_arg->Errst;
    CtAp_CANHandler__ARID_DEF_arg->update = 0;
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"


#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

void CtAp_CANHandler_E2E3Cfm(uint8_T rtu_MessageCnt, boolean_T
  rtu_Update, uint32_T rtu_ErrSt, boolean_T rtu_OterCdn, uint8_T
  rtu_CANHandler_MAXDELTAcounterI, uint32_T rtu_CANHandler_CRCWRONG, uint8_T
  rtu_E2EErrTimes, uint32_T rtu_CANHandler_OK, boolean_T *rty_CaculateFailCmpl,
  boolean_T *rty_Passed, ARID_DEF_E2ECfm_CtAp_CANHandl_T
  *CtAp_CANHandler__ARID_DEF_arg)

{
  boolean_T LocalPass;
  boolean_T rtb_Switch_ig53;
  CtAp_CANHandler__ARID_DEF_arg->Errst = ((rtu_ErrSt >> 24U) & 127U);
 
  if (rtu_Update)
  {
      CtAp_CANHandler__ARID_DEF_arg->update = 1;
      
  }
    else
  {
      CtAp_CANHandler__ARID_DEF_arg->update = 0;
  }

  if (CtAp_CANHandler__ARID_DEF_arg->update) {
	if (rtu_MessageCnt == 15U)
	{
		rtb_Switch_ig53 = true;
	}
    else if (rtu_MessageCnt == (uint8_T)((uint8_T)0U)) {
      
      if (CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE_i1m1 ==
          (uint8_T)((uint8_T)14U)) {
        rtb_Switch_ig53 = false;
      } else {
        rtb_Switch_ig53 = true;
      }

    } 
	else {
      rtb_Switch_ig53 = ((rtu_MessageCnt -
                          CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE) !=
                         (uint8_T)rtu_CANHandler_MAXDELTAcounterI);
    }

    
    CtAp_CANHandler__ARID_DEF_arg->LogicalOperator2 = ((rtb_Switch_ig53 ||
      (CtAp_CANHandler__ARID_DEF_arg->Errst == rtu_CANHandler_CRCWRONG)) && rtu_OterCdn);

   
    CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE = rtu_MessageCnt;

    
    CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE_i1m1 = rtu_MessageCnt;
  }

  
  if ((uint32_T)CtAp_CANHandler__ARID_DEF_arg->is_active_c3_ATOM_standard_auto ==
      0U) {
    CtAp_CANHandler__ARID_DEF_arg->is_active_c3_ATOM_standard_auto = 1U;
    CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable =
      CtAp_CANHandler_IN_Init;
    *rty_CaculateFailCmpl = false;
	CtAp_CANHandler__ARID_DEF_arg->FailCnt = 0U;
  } else if ((uint32_T)
             CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable ==
             CtAp_CANHandler_IN_Cnt) {
    if (!CtAp_CANHandler__ARID_DEF_arg->LogicalOperator2) {
      CtAp_CANHandler__ARID_DEF_arg->is_Cnt = CtAp_CANHand_IN_NO_ACTIVE_CHILD;
      CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable =
        CtAp_CANHandler_IN_Init;
      *rty_CaculateFailCmpl = false;
	  CtAp_CANHandler__ARID_DEF_arg->FailCnt = 0U;
    } else if ((uint32_T)CtAp_CANHandler__ARID_DEF_arg->is_Cnt ==
               CtAp_CANHandler_IN_Init_bxhl) {
				   if(CtAp_CANHandler__ARID_DEF_arg->FailCnt<rtu_E2EErrTimes)
				   {CtAp_CANHandler__ARID_DEF_arg->FailCnt += CtAp_CANHandler__ARID_DEF_arg->update ? ((uint8_T)1) :((uint8_T)0);}
			   else{
				   
			   }
		       CtAp_CANHandler__ARID_DEF_arg->PassCnt=0;
      if (CtAp_CANHandler__ARID_DEF_arg->FailCnt >= (rtu_E2EErrTimes)) {
        CtAp_CANHandler__ARID_DEF_arg->is_Cnt = CtAp_CANHandler_IN_Over;
        *rty_CaculateFailCmpl = true;
      } else {
      }
    } else {
      /* case IN_Over: */
    }

    /* case IN_Init: */
  } 
  else if (CtAp_CANHandler__ARID_DEF_arg->LogicalOperator2) {
    CtAp_CANHandler__ARID_DEF_arg->is_c3_ATOM_standard_autocodable =
      CtAp_CANHandler_IN_Cnt;
    CtAp_CANHandler__ARID_DEF_arg->is_Cnt = CtAp_CANHandler_IN_Init_bxhl;
    if (CtAp_CANHandler__ARID_DEF_arg->FailCnt == 0U)
        {CtAp_CANHandler__ARID_DEF_arg->FailCnt = 1U;}
		else if(CtAp_CANHandler__ARID_DEF_arg->FailCnt<rtu_E2EErrTimes){
		CtAp_CANHandler__ARID_DEF_arg->FailCnt += CtAp_CANHandler__ARID_DEF_arg->update ? ((uint8_T)1) :((uint8_T)0);
		}
		else{
			
		}
  } else {
    /* no actions */
  }

  
   
  if (CtAp_CANHandler__ARID_DEF_arg->update) {
    
    
    if (rtu_MessageCnt == (uint8_T)((uint8_T)0U)) {
      
      if (CtAp_CANHandler__ARID_DEF_arg->Delay2_DSTATE == (uint8_T)
          ((uint8_T)14U)) {
        
        rtb_Switch_ig53 = true;
      } else {
        
        rtb_Switch_ig53 = false;
      }

      
    } else {
      int16_T u;

      
      u = (int16_T)((int32_T)((int32_T)rtu_MessageCnt - (int32_T)
        CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE));
      /*if (u < 0) {
        u = (int16_T)(-u);
      }*/ //删去绝对值20250630

      
      rtb_Switch_ig53 = (((int32_T)u == (int32_T)rtu_CANHandler_MAXDELTAcounterI)&&(rtu_MessageCnt != 15U));
    }

    
    LocalPass =(rtb_Switch_ig53 && (CtAp_CANHandler__ARID_DEF_arg->Errst ==rtu_CANHandler_OK));
	  
	if(LocalPass)
	{
		CtAp_CANHandler__ARID_DEF_arg->PassCnt+=CtAp_CANHandler__ARID_DEF_arg->update ? ((uint8_T)1) :((uint8_T)0);
	
	   if(CtAp_CANHandler__ARID_DEF_arg->PassCnt>=3)
	   {
       *rty_Passed=true;
	   CtAp_CANHandler__ARID_DEF_arg->FailCnt=0;
	   CtAp_CANHandler__ARID_DEF_arg->PassCnt=3;
	   }
	   else
	   {
		
	   }
	 
	 
    }
	else
	{
	*rty_Passed=false;	
	CtAp_CANHandler__ARID_DEF_arg->PassCnt=0;
	}
    CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE = rtu_MessageCnt;

    
    CtAp_CANHandler__ARID_DEF_arg->Delay2_DSTATE = rtu_MessageCnt;
    
  }
  //CtAp_CANHandler__ARID_DEF_arg->Errstold = CtAp_CANHandler__ARID_DEF_arg->Errst;
  CtAp_CANHandler__ARID_DEF_arg->update = 0;
  
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

boolean_T CtAp_CANHandler_ATOM_TimeCnt(boolean_T rtu_In, uint16_T rtu_RunStep_C,
  uint16_T rtu_MaxTime_C, ARID_DEF_ATOM_TimeCnt_CtAp_CA_T
  *CtAp_CANHandler__ARID_DEF_arg)
{
  uint16_T rtb_Add1;

  /* Sum: '<S35>/Add1' incorporates:
   *  DataTypeConversion: '<S35>/Data Type Conversion'
   *  DataTypeConversion: '<S35>/Data Type Conversion1'
   */
  rtb_Add1 = (uint16_T)((uint32_T)rtu_MaxTime_C + (uint32_T)rtu_RunStep_C);

  /* Switch: '<S35>/Switch' */
  if (rtu_In) {
    /* Sum: '<S35>/Add' incorporates:
     *  DataTypeConversion: '<S35>/Data Type Conversion'
     *  UnitDelay: '<S35>/Delay'
     */
    CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE = (uint16_T)((uint32_T)
      rtu_RunStep_C + (uint32_T)CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE);

    /* MinMax: '<S35>/Min' */
    if (rtb_Add1 <= CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE) {
      /* Sum: '<S35>/Add' */
      CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE = rtb_Add1;
    }

    /* End of MinMax: '<S35>/Min' */
  } else {
    /* Sum: '<S35>/Add' incorporates:
     *  Constant: '<S35>/Constant'
     *  UnitDelay: '<S35>/Delay'
     */
    CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE = ((uint16_T)0U);
  }

  /* End of Switch: '<S35>/Switch' */

  /* RelationalOperator: '<S35>/Relational Operator' incorporates:
   *  UnitDelay: '<S35>/Delay'
   */
  return CtAp_CANHandler__ARID_DEF_arg->Delay_DSTATE >= rtb_Add1;
}

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"


#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

void CtAp_CANHandler_ATOM_U16Err(boolean_T rtu_EnableCondition, boolean_T
  rtu_SetCondition, boolean_T rtu_ResetCondition, uint16_T rtu_MatureTime,
  uint16_T rtu_Dematuretime, uint16_T rtu_dt, boolean_T *rty_MonStat, uint8_T
  *rty_MonRes, uint8_T *rty_ErrStat, boolean_T *rty_ErrorRes,
  ARID_DEF_ATOM_U16Err_CtAp_CAN_T *CtAp_CANHandler__ARID_DEF_arg)
{
  /* DataTypeConversion: '<S36>/Data Type Conversion' */
  *rty_MonStat = rtu_EnableCondition;

  /* Outputs for Enabled SubSystem: '<S36>/ErrorHandleSysU16' incorporates:
   *  EnablePort: '<S40>/Enable'
   */
  if (rtu_EnableCondition) {
    uint16_T u0;
    boolean_T rtb_Equal2_fq13;

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S40>/Constant2'
     *  Constant: '<S40>/Constant4'
     *  Switch: '<S40>/Switch'
     */
    if (rtu_ResetCondition) {
      *rty_MonRes = ((uint8_T)0U);
    } else if (rtu_SetCondition) {
      /* Switch: '<S40>/Switch' incorporates:
       *  Constant: '<S40>/Constant'
       */
      *rty_MonRes = ((uint8_T)1U);
    } else {
      *rty_MonRes = ((uint8_T)2U);
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Switch: '<S42>/Switch1' incorporates:
     *  Constant: '<S40>/Constant3'
     *  RelationalOperator: '<S40>/Equal1'
     */
    if (*rty_MonRes == ((uint8_T)0U)) {
      /* Sum: '<S42>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_Dematuretime + (uint32_T)rtu_dt);

      /* Sum: '<S42>/Sum' incorporates:
       *  UnitDelay: '<S42>/UnitDelay'
       */
      CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE = (uint16_T)((uint32_T)
        rtu_dt + (uint32_T)CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE);

      /* MinMax: '<S42>/MinMax' */
      if (u0 <= CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE) {
        /* Sum: '<S42>/Sum' */
        CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE = u0;
      }
      /* End of MinMax: '<S42>/MinMax' */
    } else {
      /* Sum: '<S42>/Sum' incorporates:
       *  Constant: '<S40>/Constant23'
       *  UnitDelay: '<S42>/UnitDelay'
       */
      CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE = ((uint16_T)0U);
    }

    /* End of Switch: '<S42>/Switch1' */

    /* RelationalOperator: '<S40>/Equal2' incorporates:
     *  Constant: '<S40>/Constant5'
     */
    rtb_Equal2_fq13 = (*rty_MonRes == ((uint8_T)1U));

    /* Switch: '<S41>/Switch1' */
    if (rtb_Equal2_fq13) {
      /* Sum: '<S41>/Sum1' */
      u0 = (uint16_T)((uint32_T)rtu_MatureTime + (uint32_T)rtu_dt);

      /* Sum: '<S41>/Sum' incorporates:
       *  UnitDelay: '<S41>/UnitDelay'
       */
      CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE_o3wf = (uint16_T)
        ((uint32_T)rtu_dt + (uint32_T)
         CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE_o3wf);

      /* MinMax: '<S41>/MinMax' */
      if (u0 <= CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE_o3wf) {
        /* Sum: '<S41>/Sum' */
        CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE_o3wf = u0;
      }

      /* End of MinMax: '<S41>/MinMax' */
    } else {
      /* Sum: '<S41>/Sum' incorporates:
       *  Constant: '<S40>/Constant37'
       *  UnitDelay: '<S41>/UnitDelay'
       */
      CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE_o3wf = ((uint16_T)0U);
    }

    /* End of Switch: '<S41>/Switch1' */

    /* Switch: '<S40>/Switch8' incorporates:
     *  Constant: '<S40>/Constant1'
     *  Constant: '<S40>/Constant6'
     *  Constant: '<S40>/DEBOUNCING'
     *  RelationalOperator: '<S40>/Equal5'
     *  RelationalOperator: '<S40>/Equal6'
     *  RelationalOperator: '<S41>/B_MiHold'
     *  RelationalOperator: '<S42>/B_MiHold'
     *  Switch: '<S40>/Switch2'
     *  Switch: '<S40>/Switch3'
     *  Switch: '<S40>/Switch4'
     *  Switch: '<S40>/Switch5'
     *  UnitDelay: '<S41>/UnitDelay'
     *  UnitDelay: '<S42>/UnitDelay'
     */
    if (*rty_MonRes == ((uint8_T)2U)) {
      *rty_ErrStat = ((uint8_T)4U);
    } else if (CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE_o3wf >
               rtu_MatureTime) {
      /* Switch: '<S40>/Switch2' incorporates:
       *  Constant: '<S40>/FAILED'
       */
      *rty_ErrStat = ((uint8_T)2U);
    } else if (rtb_Equal2_fq13) {
      /* Switch: '<S40>/Switch3' incorporates:
       *  Constant: '<S40>/DEBOUNCING_F'
       *  Switch: '<S40>/Switch2'
       */
      *rty_ErrStat = ((uint8_T)3U);
    } else if (CtAp_CANHandler__ARID_DEF_arg->UnitDelay_DSTATE >
               rtu_Dematuretime) {
      /* Switch: '<S40>/Switch4' incorporates:
       *  Constant: '<S40>/PASSED'
       *  Switch: '<S40>/Switch2'
       *  Switch: '<S40>/Switch3'
       */
      *rty_ErrStat = ((uint8_T)0U);
    } else if (*rty_MonRes == ((uint8_T)0U)) {
      /* Switch: '<S40>/Switch5' incorporates:
       *  Constant: '<S40>/DEBOUNCING_P'
       *  Switch: '<S40>/Switch2'
       *  Switch: '<S40>/Switch3'
       *  Switch: '<S40>/Switch4'
       */
      *rty_ErrStat = ((uint8_T)1U);
    } else {
      /* Switch: '<S40>/Switch3' incorporates:
       *  Delay: '<S40>/Delay3'
       *  Switch: '<S40>/Switch2'
       *  Switch: '<S40>/Switch4'
       */
      *rty_ErrStat = CtAp_CANHandler__ARID_DEF_arg->Delay3_DSTATE;
    }

    /* End of Switch: '<S40>/Switch8' */

    /* Switch: '<S40>/Switch6' incorporates:
     *  Constant: '<S40>/Constant30'
     *  Constant: '<S40>/Constant31'
     *  Constant: '<S40>/Constant32'
     *  Delay: '<S40>/Delay1'
     *  RelationalOperator: '<S40>/Equal3'
     *  RelationalOperator: '<S40>/Equal4'
     *  Switch: '<S40>/Switch7'
     */
    if (*rty_ErrStat == ((uint8_T)2U)) {
      *rty_ErrorRes = true;
    } else if (*rty_ErrStat == ((uint8_T)0U)) {
      /* Switch: '<S40>/Switch7' incorporates:
       *  Constant: '<S40>/Constant11'
       */
      *rty_ErrorRes = (0.0 != 0.0);
    } else {
      *rty_ErrorRes = CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE;
    }

    /* End of Switch: '<S40>/Switch6' */

    /* Update for Delay: '<S40>/Delay3' */
    CtAp_CANHandler__ARID_DEF_arg->Delay3_DSTATE = *rty_ErrStat;

    /* Update for Delay: '<S40>/Delay1' */
    CtAp_CANHandler__ARID_DEF_arg->Delay1_DSTATE = *rty_ErrorRes;
  }

  /* End of Outputs for SubSystem: '<S36>/ErrorHandleSysU16' */
}

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

void CtAp_CANHandler_E2ETimeoutCfm(boolean_T rtu_SigGroup_IsUpdated, boolean_T
  *rty_E2ETimeoutFailed, boolean_T *rty_E2ETimeoutPassed)
{
  /* RelationalOperator: '<S180>/Compare' incorporates:
   *  Constant: '<S180>/Constant'
   */
  *rty_E2ETimeoutFailed = (rtu_SigGroup_IsUpdated != true);

  /* Logic: '<S152>/LogicalOperator1' */
  *rty_E2ETimeoutPassed = !(*rty_E2ETimeoutFailed);
}

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"




#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

void CtAp_CANHandler_TimeoutCfm_eeyv(boolean_T rtu_LvMgmt_KL15ActSts_Flg,
  boolean_T rtu_ComM_ErrResEPTCANBusOffInfo, boolean_T rtu_SigGroup_IsUpdated,
  boolean_T *rty_TimeoutFailed, boolean_T *rty_TimeoutPassed)
{
  /* Logic: '<S184>/LogicalOperator' incorporates:
   *  Constant: '<S192>/Constant'
   *  Constant: '<S193>/Constant'
   *  RelationalOperator: '<S192>/Compare'
   *  RelationalOperator: '<S193>/Compare'
   */
  *rty_TimeoutFailed = (rtu_LvMgmt_KL15ActSts_Flg &&
                        (rtu_ComM_ErrResEPTCANBusOffInfo == CANHandler_Passed) &&
                        (rtu_SigGroup_IsUpdated != true));

  /* Logic: '<S184>/LogicalOperator1' */
  *rty_TimeoutPassed = !(*rty_TimeoutFailed);
}

#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"



#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

void CtAp_CANHandler_E2ECfm_Init(boolean_T *rty_CaculateFailCmpl)
{
  /* SystemInitialize for Chart: '<S37>/ATOM_Chart' */
  *rty_CaculateFailCmpl = false;
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"



#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

boolean_T CtAp_CANHandler_MessageUpdateDelay(uint8_T DelayTimes,boolean_T RxFlag,uint8_T UpdatedelayCnt)
{
  boolean_T UpdateFlag;
  if(RxFlag)
  {
    UpdateFlag = true;
    UpdatedelayCnt = DelayTimes;
  }
  else
  {
    if(UpdatedelayCnt>CtAp_CANHand_IN_NO_ACTIVE_CHILD) 
    {
      UpdatedelayCnt--;
    }
    else
    {
      UpdateFlag = false;
    }
  }
  return UpdateFlag;
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

//////////////////////////////////////////////////////////////////////////////////////////












/*
 * File trailer for generated code.
 *
 * [EOF]
 */
