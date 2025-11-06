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
 *  Filename:           CtAp_CANHandler.c
 *  File Creation Date: 10-Apri-2025
 *  Model Name:         CtAp_CANHandler
 *  Model Version:      3.006
 *  Model Author:       JackyWang - 10-Apri-2025
 *  Simulink Coder version         : 9.s8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : 2025 08/21
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  TaoWang - 2025 08/21
 *
 *
 *******************************************************************************/
#include "CtAp_CANHandler.h"
#include "rtwtypes.h"
#include "Rte_Type.h"
#include <math.h>
#include "CtAp_CANHandler_Cal.h"
#include "CtAp_CANHandler_Fuc.h"

/*  Defines */
// /*  Data Typses */

// /**************************** GLOBAL DATA *************************************/
/*  Definitions */
/* Exported data definition */

/*if not init use it */
#define CtAp_CANHandler_START_SEC_VAR_NOINIT_8
#include "CtAp_CANHandler_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */

/* Definition for custom storage class: ExportToFile_AtomAutoSar */
SG_ACU_01_SigGroup ACU_01_SigGroup;
SG_ACU_02_SigGroup ACU_02_SigGroup;
SG_ACU_Info_SigGroup ACU_Info_SigGroup;
SG_ADCU_ACC_02_SigGroup ADCU_ACC_02_SigGroup;
SG_ADCU_Body_req_SigGroup ADCU_Body_req_SigGroup;
SG_BCM_05_SigGroup BCM_05_SigGroup;
SG_BCM_06_SigGroup BCM_06_SigGroup;
SG_BMS_ErrorInfo_SigGroup BMS_ErrorInfo_SigGroup;
SG_BMS_status_01_SigGroup BMS_status_01_SigGroup;
SG_CGW_01_SigGroup CGW_01_SigGroup;    
SG_DCM_FL_02_SigGroup DCM_FL_02_SigGroup;
SG_DCM_FR_SigGroup DCM_FR_SigGroup;    
SG_DCM_RL_SigGroup DCM_RL_SigGroup;
SG_DCM_RR_SigGroup DCM_RR_SigGroup;
SG_IBS_ACC_SigGroup IBS_ACC_SigGroup;
SG_IBS_APS_SigGroup IBS_APS_SigGroup;
SG_IBS_Status_01_SigGroup IBS_Status_01_SigGroup;
SG_IBS_Status_02_SigGroup IBS_Status_02_SigGroup;
SG_IBS_Status_03_SigGroup IBS_Status_03_SigGroup;
SG_IBS_Status_04_SigGroup IBS_Status_04_SigGroup;
SG_IBS_Status_05_SigGroup IBS_Status_05_SigGroup;
SG_IBS_Status_06_SigGroup IBS_Status_06_SigGroup;
SG_IBS_Torque_SigGroup IBS_Torque_SigGroup;
SG_IBS_VCU_MotorControl_SigGroup IBS_VCU_MotorControl_SigGroup;
SG_IBS_WheelSpeed_01_SigGroup IBS_WheelSpeed_01_SigGroup;
SG_IBS_WheelSpeed_02_SigGroup IBS_WheelSpeed_02_SigGroup;
SG_IVI_01_SigGroup IVI_01_SigGroup;
SG_MCU_01_SigGroup MCU_01_SigGroup;
SG_MCU_FailureCode_SigGroup MCU_FailureCode_SigGroup;
SG_PRND_SigGroup PRND_SigGroup;
SG_SGW_IBS_01_SigGroup SGW_IBS_01_SigGroup;
SG_EPS_CONV_SigGroup EPS_CONV_SigGroup;
SG_CGW_02_SigGroup CGW_02_SigGroup; 

SG_ADCU_DA_SigGroup ADCU_DA_SigGroup;
SG_ADCU_APS_01_SigGroup ADCU_APS_01_SigGroup;
SG_ADCU_AEB_01_SigGroup ADCU_AEB_01_SigGroup;
CE_Inner_Delay CtAp_CANHandler_DelayStruct;
Event_Inner_Delay CtAp_CANHandler_EventDelayStruct;
ARID_DEF_CtAp_CANHandler_T CtAp_CANHandler_ARID_DEF;
UpdateInnerCntStruct UpdateInnerCnt;
boolean_T PRNDTimeoutRes100msEnb;
boolean_T PRND_SigGroupRxFlg100ms;
uint8_T PRNDTimeoutRes100msCnt;

uint8_T tec_GearMgmt_EPBReq_Enum_Cnt;
uint8_T tec_GearMgmt_EPBReq_Enum_Old;
uint8_T tec_GearMgmt_EPBReq_Enum_Tx;
uint8_T tec_ComM_IBSTarGearReq_EnumOld;
uint8_T tec_ComM_IBSTarGearReqCnt;
uint8_T tec_ComM_IBSTarGearReq_Enum;

//uint32_T BMS_status_01_SigGroup_ErrSts;
boolean_T tec_ComM_TriggerASWMsgReqInfo;        //允许发送标志位
boolean_T tec_ComM_TriggerASWMsgReqInfo_Last;   //上一时刻允许发送的标志位

#define CtAp_CANHandler_STOP_SEC_VAR_NOINIT_8
#include "CtAp_CANHandler_MemMap.h"    /* PRQA S 5087 *//* MD_MSR_MemMap */


#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"

/* Model step function for TID1 */
void R_CANHandlerInput_Cyclic_10ms(void)
{
    
    /******************************************IBS_VCU_MotorControl********************************************************* */
    // * SG_IBS_VCU_MotorControl_SigGroup: Record with elements
    // *   IBS_WLTorqueIncrReq of type IBS_WLTorqueIncrReq_2
    // *   IBS_WLTorqueIncrReqSts of type IBS_WLTorqueIncrReqSts
    // *   IBS_WLTorqueRedReq of type IBS_WLTorqueRedReq_2
    // *   IBS_WLTorqueRedReqSts of type IBS_WLTorqueRedReqSts
    // *   Checksum_090 of type Checksum_91
    // *   MessageCounter_090 of type MessageCounter_090


    uint32_T IBS_VCU_MotorControl_ErrSts;
    real32_T tec_ComM_IBSReqIncTq_Nm;
    boolean_T tec_ComM_IBSReqIncTqSts_Flg;
    real32_T tec_ComM_IBSReqRednTq_Nm;
    boolean_T tec_ComM_IBSReqRednTqSts_Flg;
    
    boolean_T IBS_VCU_MotorControl_SigGroup_RxFlg;
   

    IBS_VCU_MotorControl_SigGroup_RxFlg = Rte_IsUpdated_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup();
    
    IBS_VCU_MotorControl_ErrSts = E2EPW_Read_SG_IBS_VCU_MotorControl_SigGroup_CAN_SG_IBS_VCU_MotorControl_SigGroup(&IBS_VCU_MotorControl_SigGroup);

    tec_ComM_IBSReqIncTqSts_Flg = IBS_VCU_MotorControl_SigGroup.IBS_WLTorqueIncrReqSts;
    tec_ComM_IBSReqIncTq_Nm = (real32_T)IBS_VCU_MotorControl_SigGroup.IBS_WLTorqueIncrReq;
    tec_ComM_IBSReqRednTqSts_Flg = IBS_VCU_MotorControl_SigGroup.IBS_WLTorqueRedReqSts;
    tec_ComM_IBSReqRednTq_Nm = (real32_T)IBS_VCU_MotorControl_SigGroup.IBS_WLTorqueRedReq;
    
    tec_ComM_IBSReqIncTq_Nm = CtAp_CANHandler_ATOM_SignalRead(tec_ComM_IBSReqIncTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus20000);
    tec_ComM_IBSReqRednTq_Nm = CtAp_CANHandler_ATOM_SignalRead(tec_ComM_IBSReqRednTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus20000);

    (void)Rte_Write_RTE_P_ComM_IBSReqIncTq_Nm_tec_ComM_IBSReqIncTq_Nm(tec_ComM_IBSReqIncTq_Nm);
    (void)Rte_Write_RTE_P_ComM_IBSReqIncTqSts_Flg_tec_ComM_IBSReqIncTqSts_Flg((boolean_T)tec_ComM_IBSReqIncTqSts_Flg);
    (void)Rte_Write_RTE_P_ComM_IBSReqRednTq_Nm_tec_ComM_IBSReqRednTq_Nm(tec_ComM_IBSReqRednTq_Nm);
    (void)Rte_Write_RTE_P_ComM_IBSReqRednTqSts_Flg_tec_ComM_IBSReqRednTqSts_Flg((boolean_T)tec_ComM_IBSReqRednTqSts_Flg);

    // //ComErr需要的
	boolean_T LvMgmt_KL15ActSts_Flg;	
	boolean_T LvMgmt_BSBattUDcNorm_Flg;	
	boolean_T DiagApp_DisableDCMReqInfo;

	boolean_T EPTDTCTimeoutEnbale;
	boolean_T CHDTCTimeoutEnbale;
    boolean_T ComM_EPTCANDTCEnb_Flg;
    boolean_T ComM_CHCANDTCEnb_Flg;
	boolean_T ComM_COMLostEnb_Flg;


  
    dt_ComM_EPTCANBusOffInfo ComM_EPTCANBusOffInfo_Bus;
    dt_ComM_CHCANBusOffInfo ComM_CHCANBusOffInfo_Bus;	  
	  (void)Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(&LvMgmt_KL15ActSts_Flg);
	  (void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(&LvMgmt_BSBattUDcNorm_Flg);
	  (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(&DiagApp_DisableDCMReqInfo);
	  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(&ComM_CHCANBusOffInfo_Bus);
	  (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(&ComM_EPTCANBusOffInfo_Bus);
	  //ComM_CHCANDTCEnb_Flg
	
		EPTDTCTimeoutEnbale = ((!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo) && (!DiagApp_DisableDCMReqInfo && LvMgmt_BSBattUDcNorm_Flg));
		CHDTCTimeoutEnbale = ((!ComM_CHCANBusOffInfo_Bus.ComM_ErrResCHCANBusOffInfo) && (!DiagApp_DisableDCMReqInfo && LvMgmt_BSBattUDcNorm_Flg));
		
		ComM_EPTCANDTCEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt(EPTDTCTimeoutEnbale, ((uint16_T)CANHandler_Cycle10ms),CANHandler_WkpCfmPreEnaTim_CFG,&CtAp_CANHandler_ARID_DEF.Cycle10msEPTDTCEnbInteral);
		
		ComM_CHCANDTCEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt
	    (CHDTCTimeoutEnbale, ((uint16_T)CANHandler_Cycle10ms),
		CANHandler_WkpCfmPreEnaTim_CFG,
		&CtAp_CANHandler_ARID_DEF.Cycle10msCHDTCEnbInteral);
		
		ComM_COMLostEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt(CANHandler_True,
        ((uint16_T)CANHandler_Cycle10ms), CANHandler_WkpCfmPreEnaTim_CFG,
        &CtAp_CANHandler_ARID_DEF.Cycle10msCOMLostEnbInteral);
		
	    //ComM_IBSVCUMotCtrlCRCDTCInfo_Bus
	    //E2E
        boolean_T ComM_MonStatIBSVCUMotCtrlCRCDTCErrorInfo;	 

		CtAp_CANHandler_E2ESpc3Cfm(IBS_VCU_MotorControl_SigGroup.MessageCounter_090,
        IBS_VCU_MotorControl_SigGroup_RxFlg, IBS_VCU_MotorControl_ErrSts,
		LvMgmt_KL15ActSts_Flg, CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,CANHandler_MaxDeltaCnt_CFG,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotorCRCDTCE2EFail,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotorCRCDTCE2EPass,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotorCRCDTCE2ECfmInteral);
	  
	    CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
	    CtAp_CANHandler_ARID_DEF.IBSVCUMotorCRCDTCE2EFail,
	    CtAp_CANHandler_ARID_DEF.IBSVCUMotorCRCDTCE2EPass, ((uint16_T)
	    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
	    CANHandler_Cycle10ms), &ComM_MonStatIBSVCUMotCtrlCRCDTCErrorInfo,
	    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlCRCDTCErrorInfo,
	    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlCRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlCRCDTCErrorInfo,
	    &CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlCRCDTC_U16ErrorHandInteral);
		
		CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMsgErrI.ComM_MonStatIBSVCUMotCtrlCRCDTCErrorInfo
        = ComM_MonStatIBSVCUMotCtrlCRCDTCErrorInfo;
		CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMsgErrI.ComM_MonResIBSVCUMotCtrlCRCDTCErrorInfo
        = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlCRCDTCErrorInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMsgErrI.ComM_ErrStatIBSVCUMotCtrlCRCDTCErrorInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlCRCDTCErrorInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMsgErrI.ComM_ErrResIBSVCUMotCtrlCRCDTCErrorInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlCRCDTCErrorInfo;
		
		(void)Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCDTCInfo_Bus
        (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMsgErrI);
	  //ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus
	    boolean_T ComM_MonStatIBSVCUMotCtrlTimeoutDTCErrorInfo;	
        boolean_T IBSVCUMotCtrlTimeoutDTCSet;
	    
	    IBSVCUMotCtrlTimeoutDTCSet = (LvMgmt_KL15ActSts_Flg &&
        (IBS_VCU_MotorControl_SigGroup_RxFlg != true));
	  
		CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
		IBSVCUMotCtrlTimeoutDTCSet, IBS_VCU_MotorControl_SigGroup_RxFlg,
		CANHandler_ErrResIBSVCUMotCtrlTimeoutDTCMatureTime_CFG, ((uint16_T)
		30U), ((uint16_T)CANHandler_Cycle10ms), &ComM_MonStatIBSVCUMotCtrlTimeoutDTCErrorInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlTimeoutDTCErrorInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlTimeoutDTCErrorInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlTimeoutDTCErrorInfo,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlTimeoutDTC_U16ErrorHandInteral);  

		CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_mrkf.ComM_MonStatIBSVCUMotCtrlTimeoutDTCErrorInfo
        = ComM_MonStatIBSVCUMotCtrlTimeoutDTCErrorInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_mrkf.ComM_MonResIBSVCUMotCtrlTimeoutDTCErrorInfo
        = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlTimeoutDTCErrorInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_mrkf.ComM_ErrStatIBSVCUMotCtrlTimeoutDTCErrorInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlTimeoutDTCErrorInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_mrkf.ComM_ErrResIBSVCUMotCtrlTimeoutDTCErrorInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlTimeoutDTCErrorInfo;

        (void)Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutDTCInfo_Bus
        (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_mrkf);		
	  //ComM_IBSVCUMotCtrlTimeoutInfo_Bus
	    boolean_T IBSVCUMotCtrlTimeoutInfo_TimeoutFailed;
	    boolean_T IBSVCUMotCtrlTimeoutInfo_TimeoutPassed;
	    boolean_T ComM_MonStatIBSVCUMotCtrlTimeoutInfo;	  
		
		CtAp_CANHandler_TimeoutCfm_eeyv(LvMgmt_KL15ActSts_Flg,
		ComM_CHCANBusOffInfo_Bus.ComM_ErrResCHCANBusOffInfo,
		IBS_VCU_MotorControl_SigGroup_RxFlg, &IBSVCUMotCtrlTimeoutInfo_TimeoutFailed,
		&IBSVCUMotCtrlTimeoutInfo_TimeoutPassed);
	
		CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
		IBSVCUMotCtrlTimeoutInfo_TimeoutFailed, IBSVCUMotCtrlTimeoutInfo_TimeoutPassed,
		CANHandler_ErrResIBSVCUMotCtrlTimeoutMatureTime_CFG, ((uint16_T)
		30U), ((uint16_T)CANHandler_Cycle10ms), &ComM_MonStatIBSVCUMotCtrlTimeoutInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlTimeoutInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlTimeoutInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlTimeoutInfo,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlTimeout_U16ErrorHandInteral);
		
		CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_o1qk.ComM_MonStatIBSVCUMotCtrlTimeoutInfo
        = ComM_MonStatIBSVCUMotCtrlTimeoutInfo;
		CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_o1qk.ComM_MonResIBSVCUMotCtrlTimeoutInfo
        = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlTimeoutInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_o1qk.ComM_ErrStatIBSVCUMotCtrlTimeoutInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlTimeoutInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_o1qk.ComM_ErrResIBSVCUMotCtrlTimeoutInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlTimeoutInfo;
		
		(void)Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlTimeoutInfo_Bus
        (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_o1qk);
	  //ComM_IBSVCUMotCtrlCRCInfo_Bus
	  
        boolean_T ComM_MonStatIBSVCUMotCtrlCRCErrorInfo;
	  
		CtAp_CANHandler_E2ESpc3Cfm(IBS_VCU_MotorControl_SigGroup.MessageCounter_090,
        IBS_VCU_MotorControl_SigGroup_RxFlg, IBS_VCU_MotorControl_ErrSts,
		CANHandler_True, CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,CANHandler_MaxDeltaCnt_CFG,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlCRCFail,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlCRCPass,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotorCRCE2ECfmInteral);
	  
		CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
		CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlCRCFail,
		CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlCRCPass, ((uint16_T)
		CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
		CANHandler_Cycle10ms), &ComM_MonStatIBSVCUMotCtrlCRCErrorInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlCRCErrorInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlCRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlCRCErrorInfo,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlCRCError_U16ErrorHandInteral);
		
		CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_amte.ComM_MonStatIBSVCUMotCtrlCRCErrorInfo
        = ComM_MonStatIBSVCUMotCtrlCRCErrorInfo;
		CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_amte.ComM_MonResIBSVCUMotCtrlCRCErrorInfo
        = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlCRCErrorInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_amte.ComM_ErrStatIBSVCUMotCtrlCRCErrorInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlCRCErrorInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_amte.ComM_ErrResIBSVCUMotCtrlCRCErrorInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlCRCErrorInfo;
		
		(void)Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlCRCInfo_Bus
        (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_amte);
	  //ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus
	    boolean_T IBSVCUMotCtrlE2ETimeoutFail;
		boolean_T IBSVCUMotCtrlE2ETimeoutPass;
		boolean_T ComM_MonStatIBSVCUMotCtrlE2ETimeoutInfo;
	  
	  
	    CtAp_CANHandler_E2ETimeoutCfm(IBS_VCU_MotorControl_SigGroup_RxFlg,&IBSVCUMotCtrlE2ETimeoutFail, &IBSVCUMotCtrlE2ETimeoutPass);
	  
		CtAp_CANHandler_ATOM_U16Err(CANHandler_True, IBSVCUMotCtrlE2ETimeoutFail,
		IBSVCUMotCtrlE2ETimeoutPass,
		CANHandler_ErrResIBSVCUMotCtrlTimeoutMatureTime_CFG, ((uint16_T)
		30U), ((uint16_T)CANHandler_Cycle10ms),
		&ComM_MonStatIBSVCUMotCtrlE2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlE2ETimeoutInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlE2ETimeoutInfo,
		&CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlE2ETimeoutInfo,
		&CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlE2ETimeout_U16ErrorHandInteral);
		
		CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_onta.ComM_MonStatIBSVCUMotCtrlE2ETimeoutInfo
        = ComM_MonStatIBSVCUMotCtrlE2ETimeoutInfo;
		CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_onta.ComM_MonResIBSVCUMotCtrlE2ETimeoutInfo
        = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSVCUMotCtrlE2ETimeoutInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_onta.ComM_ErrStatIBSVCUMotCtrlE2ETimeoutInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSVCUMotCtrlE2ETimeoutInfo;
        CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_onta.ComM_ErrResIBSVCUMotCtrlE2ETimeoutInfo
        = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSVCUMotCtrlE2ETimeoutInfo;
		
		(void)Rte_Write_RTE_P_ComM_IBSVCUMotCtrlMsgErrInfo_Bus_tec_ComM_IBSVCUMotCtrlE2ETimeoutInfo_Bus
        (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSVCUMotCtrlMs_onta);
  /******************************************IBS_VCU_MotorControl********************************************************* */

  /******************************************MCU_01********************************************************* */
   // SG_MCU_01_SigGroup MCU_01_SigGroup;
    uint32_T MCU_01_SigGroup_ErrSts;
    boolean_T tec_ComM_MotActTqVld_Flg;
    real32_T tec_ComM_MotActSpd_rpm;
    boolean_T tec_ComM_MotActSpdVld_Flg;
    real32_T tec_ComM_MotActTq_Nm;
    real32_T tec_ComM_MCUIDc_A;
    real32_T tec_ComM_MCUUDc_V;
    boolean_T MCU_01_SigGroup_RxFlg;
    
      // * SG_MCU_01_SigGroup: Record with elements
      // *   MCU_ActTrqValid of type MCU_ActTrqValid
      // *   MCU_ActualSpeed of type MCU_ActualSpeed_4
      // *   MCU_ActualSpeedValid of type MCU_ActualSpeedValid
      // *   MCU_ActualTorque of type MCU_ActualTorque_4
      // *   MCU_IsCurr of type MCU_IsCurr_4
      // *   MCU_UdcCurr of type MCU_UdcCurr
      // *   Checksum_098 of type Checksum_102
      // *   MessageCounter_098 of type MessageCounter_098

    MCU_01_SigGroup_RxFlg =Rte_IsUpdated_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup();
    MCU_01_SigGroup_ErrSts = E2EPW_Read_SG_MCU_01_SigGroup_2_SG_MCU_01_SigGroup(&MCU_01_SigGroup);

    tec_ComM_MotActTqVld_Flg = (boolean_T)MCU_01_SigGroup.MCU_ActTrqValid;
    tec_ComM_MotActSpd_rpm = (real32_T)MCU_01_SigGroup.MCU_ActualSpeed;
    tec_ComM_MotActSpdVld_Flg = (boolean_T)MCU_01_SigGroup.MCU_ActualSpeedValid;
    tec_ComM_MotActTq_Nm = (real32_T)MCU_01_SigGroup.MCU_ActualTorque;
    tec_ComM_MCUIDc_A = (real32_T)MCU_01_SigGroup.MCU_IsCurr;
    tec_ComM_MCUUDc_V = (real32_T)MCU_01_SigGroup.MCU_UdcCurr;

    tec_ComM_MCUIDc_A = (real32_T)CtAp_CANHandler_ATOM_SignalRead(tec_ComM_MCUIDc_A,CANHandler_Resolution_1, CANHandler_Offest_Minus1023);
    tec_ComM_MotActSpd_rpm = (int16_T)CtAp_CANHandler_ATOM_SignalRead(tec_ComM_MotActSpd_rpm,CANHandler_Resolution_1, CANHandler_Offest_Minus32767);
    tec_ComM_MotActTq_Nm = (real32_T)CtAp_CANHandler_ATOM_SignalRead(tec_ComM_MotActTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus1023);

    (void)Rte_Write_RTE_P_ComM_MCUIDc_A_tec_ComM_MCUIDc_A(tec_ComM_MCUIDc_A);
    (void)Rte_Write_RTE_P_ComM_MCUUDc_V_tec_ComM_MCUUDc_V(tec_ComM_MCUUDc_V);
    (void)Rte_Write_RTE_P_ComM_MotActSpd_rpm_tec_ComM_MotActSpd_rpm(tec_ComM_MotActSpd_rpm);
    (void)Rte_Write_RTE_P_ComM_MotActSpdVld_Flg_tec_ComM_MotActSpdVld_Flg(tec_ComM_MotActSpdVld_Flg);
    (void)Rte_Write_RTE_P_ComM_MotActTq_Nm_tec_ComM_MotActTq_Nm(tec_ComM_MotActTq_Nm);
    (void)Rte_Write_RTE_P_ComM_MotActTqVld_Flg_tec_ComM_MotActTqVld_Flg(tec_ComM_MotActTqVld_Flg);

    //ComM_MCU01CRCDTCInfo_Bus

    boolean_T ComM_MonStatMCU01CRCDTCErrorInfo;
  
  
  CtAp_CANHandler_E2ESpc3Cfm(MCU_01_SigGroup.MessageCounter_098,
  MCU_01_SigGroup_RxFlg, MCU_01_SigGroup_ErrSts,
  LvMgmt_KL15ActSts_Flg,CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,CANHandler_MaxDeltaCnt_CFG,
  &CtAp_CANHandler_ARID_DEF.MCU01CRCDTCErrorFail,
  &CtAp_CANHandler_ARID_DEF.MCU01CRCDTCErrorPass,
  &CtAp_CANHandler_ARID_DEF.MCU01CRCDTCErrorInteral);
  

  CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
  CtAp_CANHandler_ARID_DEF.MCU01CRCDTCErrorFail,
  CtAp_CANHandler_ARID_DEF.MCU01CRCDTCErrorPass, ((uint16_T)
  CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
  CANHandler_Cycle10ms), &ComM_MonStatMCU01CRCDTCErrorInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01CRCDTCErrorInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01CRCDTCErrorInfo,
  &CtAp_CANHandler_ARID_DEF.MCU01CRCDTCError_U16ErrorHandInteral);
  
  CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_Bus_.ComM_MonStatMCU01CRCDTCErrorInfo
      = ComM_MonStatMCU01CRCDTCErrorInfo;
  CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_Bus_.ComM_MonResMCU01CRCDTCErrorInfo
      = CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01CRCDTCErrorInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_Bus_.ComM_ErrStatMCU01CRCDTCErrorInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01CRCDTCErrorInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_Bus_.ComM_ErrResMCU01CRCDTCErrorInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01CRCDTCErrorInfo;
  
  (void)Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCDTCInfo_Bus
      (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_Bus_);
  //ComM_MCU01TimeoutDTCInfo_Bus
  boolean_T MCU01TimeoutDTCCfmFail;
  boolean_T MCU01TimeoutDTCCfmPass;
  boolean_T ComM_MonStatMCU01TimeoutDTCErrorInfo;
  
    MCU01TimeoutDTCCfmFail = (LvMgmt_KL15ActSts_Flg &&
      (!ComM_CHCANBusOffInfo_Bus.ComM_ErrResCHCANBusOffInfo));
  
  MCU01TimeoutDTCCfmPass = !(MCU_01_SigGroup_RxFlg != true);
  
  
  CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
  MCU01TimeoutDTCCfmFail, MCU01TimeoutDTCCfmPass,
  CANHandler_ErrResMCU01TimeoutDTCMatureTime_CFG, ((uint16_T)
  30U), ((uint16_T)CANHandler_Cycle10ms),
  &ComM_MonStatMCU01TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01TimeoutDTCErrorInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01TimeoutDTCErrorInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01TimeoutDTCErrorInfo,
  &CtAp_CANHandler_ARID_DEF.MCU01TimeoutDTCError_U16ErrorHandInteral);
  
  CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_fde0.ComM_MonStatMCU01TimeoutDTCErrorInfo
      = ComM_MonStatMCU01TimeoutDTCErrorInfo;
  CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_fde0.ComM_MonResMCU01TimeoutDTCErrorInfo
      = CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01TimeoutDTCErrorInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_fde0.ComM_ErrStatMCU01TimeoutDTCErrorInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01TimeoutDTCErrorInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_fde0.ComM_ErrResMCU01TimeoutDTCErrorInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01TimeoutDTCErrorInfo;
  
  (void)Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutDTCInfo_Bus
      (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_fde0);
    //ComM_MCU01TimeoutInfo_Bus
  boolean_T MCU01TimeoutInfo_TimeoutFailed;
  boolean_T MCU01TimeoutInfo_TimeoutPassed;
  boolean_T ComM_MonStatMCU01TimeoutInfo;
  
  
  CtAp_CANHandler_TimeoutCfm_eeyv(LvMgmt_KL15ActSts_Flg,
  ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo,
  MCU_01_SigGroup_RxFlg, &MCU01TimeoutInfo_TimeoutFailed,
  &MCU01TimeoutInfo_TimeoutPassed);
  
  CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
  MCU01TimeoutInfo_TimeoutFailed, MCU01TimeoutInfo_TimeoutPassed,
  CANHandler_ErrResMCU01TimeoutMatureTime_CFG, ((uint16_T)30U),
  ((uint16_T)CANHandler_Cycle10ms), &ComM_MonStatMCU01TimeoutInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01TimeoutInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01TimeoutInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01TimeoutInfo,
  &CtAp_CANHandler_ARID_DEF.MCU01Timeout_U16ErrorHandInteral);
  
  CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_enhb.ComM_MonStatMCU01TimeoutInfo
      = ComM_MonStatMCU01TimeoutInfo;
  CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_enhb.ComM_MonResMCU01TimeoutInfo
      = CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01TimeoutInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_enhb.ComM_ErrStatMCU01TimeoutInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01TimeoutInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_enhb.ComM_ErrResMCU01TimeoutInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01TimeoutInfo;
  
  (void)Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01TimeoutInfo_Bus
      (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_enhb);
  //ComM_MCU01CRCInfo_Bus
  boolean_T ComM_MonStatMCU01CRCErrorInfo;
  
  CtAp_CANHandler_E2ESpc3Cfm(MCU_01_SigGroup.MessageCounter_098,
  MCU_01_SigGroup_RxFlg, MCU_01_SigGroup_ErrSts,
  CANHandler_True, CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,CANHandler_MaxDeltaCnt_CFG,
  &CtAp_CANHandler_ARID_DEF.MCU01CRCErrorFail,
  &CtAp_CANHandler_ARID_DEF.MCU01CRCErrorPass,
  &CtAp_CANHandler_ARID_DEF.MCU01CRCErrorInteral);
  
  CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
  CtAp_CANHandler_ARID_DEF.MCU01CRCErrorFail,
  CtAp_CANHandler_ARID_DEF.MCU01CRCErrorPass, ((uint16_T)
  CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
  CANHandler_Cycle10ms), &ComM_MonStatMCU01CRCErrorInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01CRCErrorInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01CRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01CRCErrorInfo,
  &CtAp_CANHandler_ARID_DEF.MCU01CRCError_U16ErrorHandInteral);
  
  CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_klfk.ComM_MonStatMCU01CRCErrorInfo
      = ComM_MonStatMCU01CRCErrorInfo;
  CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_klfk.ComM_MonResMCU01CRCErrorInfo
      = CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01CRCErrorInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_klfk.ComM_ErrStatMCU01CRCErrorInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01CRCErrorInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_klfk.ComM_ErrResMCU01CRCErrorInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01CRCErrorInfo;
  
  (void)Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01CRCInfo_Bus
      (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_klfk);
  //ComM_MCU01E2ETimeoutInfo_Bus
  boolean_T MCU01E2ETimeoutFail;
  boolean_T MCU01lE2ETimeoutPass;
  boolean_T ComM_MonStatMCU01E2ETimeoutInfo;
  
  CtAp_CANHandler_E2ETimeoutCfm(MCU_01_SigGroup_RxFlg,
      &MCU01E2ETimeoutFail, &MCU01lE2ETimeoutPass);
  
  CtAp_CANHandler_ATOM_U16Err(CANHandler_True, MCU01E2ETimeoutFail,
  MCU01lE2ETimeoutPass, CANHandler_ErrResMCU01TimeoutMatureTime_CFG,
  ((uint16_T)30U), ((uint16_T)CANHandler_Cycle10ms),
  &ComM_MonStatMCU01E2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01E2ETimeoutInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01E2ETimeoutInfo,
  &CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01E2ETimeoutInfo,
  &CtAp_CANHandler_ARID_DEF.MCU01E2ETimeout_U16ErrorHandInteral);
  
  CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_agz5.ComM_MonStatMCU01E2ETimeoutInfo
      = ComM_MonStatMCU01E2ETimeoutInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_agz5.ComM_MonResMCU01E2ETimeoutInfo
      = CtAp_CANHandler_ARID_DEF.ComM_MonResMCU01E2ETimeoutInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_agz5.ComM_ErrStatMCU01E2ETimeoutInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCU01E2ETimeoutInfo;
      CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_agz5.ComM_ErrResMCU01E2ETimeoutInfo
      = CtAp_CANHandler_ARID_DEF.ComM_ErrResMCU01E2ETimeoutInfo;
  
  (void)Rte_Write_RTE_P_ComM_MCU01MsgErrInfo_Bus_tec_ComM_MCU01E2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCU01MsgErrInfo_agz5);
  /********************************************MCU_01********************************************************* */

  /******************************************SGW_Req********************************************************* */
    // SG_SGW_Req_SigGroup SGW_Req_SigGroup;
    // uint8_T tec_ComM_VrOnOffSetInfo;
    //   /*
    // * SG_SGW_Req_SigGroup: Record with elements
    // *   IVI_ResetReq of type IVI_ResetReq
    // *   IVI_VrOnOffSet of type IVI_VrOnOffSet
    //   */
    // (void)Rte_Read_SG_SGW_Req_SigGroup_SG_SGW_Req_SigGroup(&SGW_Req_SigGroup);

    // tec_ComM_VrOnOffSetInfo = (uint8_T)SGW_Req_SigGroup.IVI_VrOnOffSet;

    // (void)Rte_Write_RTE_P_ComM_VrOnOffSetInfo_tec_ComM_VrOnOffSetInfo(tec_ComM_VrOnOffSetInfo);

  // /****************************************SGW_Req********************************************************/





}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID2 */
void R_CANHandlerOutput_Cyclic_10ms(void)
                             /* Explicit Task: R_CANHandlerOutput_Cyclic_10ms */
{
  /**************************************************TxFlg*************************************************************** */
//   boolean_T tec_ComM_TriggerASWMsgReqInfo;
  (void)Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(&tec_ComM_TriggerASWMsgReqInfo);
  /**************************************************TxFlg*************************************************************** */
  if(tec_ComM_TriggerASWMsgReqInfo_Last)
  {

    /******************************************VCU_MCU_02********************************************************* */
        // * SG_VCU_MCU_02_SigGroup: Record with elements
        // *   VCU_MaxSpdLimit of type VCU_MaxSpdLimit_2
        // *   VCU_MCUActHeatPwr of type VCU_MCUActHeatPwr_2
        // *   VCU_MotorSpdReq of type VCU_MotorSpdReq_2

      SG_VCU_MCU_02_SigGroup VCU_MCU_02_SigGroup;

    //   VCU_MCU_02_SigGroup.Checksum_096 = (Checksum_096)((uint8_T)CANHandler_u8Zero);    
    //   VCU_MCU_02_SigGroup.MessageCounter_096 = (MessageCounter_096)((uint8_T)CANHandler_u8Zero);
      VCU_MCU_02_SigGroup.VCU_MaxSpdLimit = (VCU_MaxSpdLimit_2)((uint8_T)CANHandler_u8Zero);
      VCU_MCU_02_SigGroup.VCU_MCUActHeatPwr = (VCU_MCUActHeatPwr_2)((uint8_T)CANHandler_u8Zero);
      VCU_MCU_02_SigGroup.VCU_MotorSpdReq = (VCU_MotorSpdReq_2)((uint8_T)CANHandler_u8Zero);

      (void)Rte_Write_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup(&VCU_MCU_02_SigGroup);
      
    /******************************************VCU_MCU_02********************************************************* */

    /******************************************VCU_MCU_03********************************************************* */
        // * SG_VCU_MCU_03_SigGroup: Record with elements
        // *   Checksum_095 of type Checksum_104
        // *   MessageCounter_095 of type MessageCounter_108
        // *   VCU_ActualGear of type VCU_ActualGear
        // *   VCU_BrakepedalStatus of type VCU_BrakepedalStatus
        // *   VCU_KL15eOn of type VCU_KL15eOn
        // *   VCU_MCUDesiredTorque of type VCU_MCUDesiredTorque_5
        // *   VCU_MCUSurgeDamperState of type VCU_MCUSurgeDamperState
        // *   VCU_PWTErrorLevel of type VCU_PWTErrorLevel
        // *   VCU_RequestedModeMCU of type VCU_RequestedModeMCU
        // *   VCU_TCSActive of type VCU_TCSActive
        // *   VCU_TrqThresholdDampgCtl of type VCU_TrqThresholdDampgCtl_5

      
      SG_VCU_MCU_03_SigGroup VCU_MCU_03_SigGroup;
      uint8_T tec_FctSftyMon_ActGear_Enum;
      uint8_T tec_ChassisMgmt_BrkSts_Enum;
      boolean_T tec_LvMgmt_KL15ActSts_Flg;
      real32_T tec_TorqPahMgmt_DesMotTq_Nm;
      uint8_T tec_TorqPahMgmt_ReqMotDampSts_Enum;
      uint8_T tec_HvMgmt_MCUReqSts_Enum;
      boolean_T tec_LvMgmt_KL15CtrlReq_Flg;
      uint8_T tec_LvMgmt_AppNMReqInfo;
      uint8_T tec_ErrMgmt_VehErrLvl_Enum;
      real32_T tec_TorqPahMgmt_MotDampLmtTq;

      (void)Rte_Read_RTE_R_FctSftyMon_ActGear_Enum_tec_FctSftyMon_ActGear_Enum(&tec_FctSftyMon_ActGear_Enum);
      (void)Rte_Read_RTE_R_ChassisMgmt_BrkSts_Enum_tec_ChassisMgmt_BrkSts_Enum(&tec_ChassisMgmt_BrkSts_Enum);
      (void)Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(&tec_LvMgmt_KL15ActSts_Flg);
      (void)Rte_Read_RTE_R_TorqPahMgmt_DesMotTq_Nm_tec_TorqPahMgmt_DesMotTq_Nm(&tec_TorqPahMgmt_DesMotTq_Nm);
      (void)Rte_Read_RTE_R_TorqPahMgmt_ReqMotDampSts_Enum_tec_TorqPahMgmt_ReqMotDampSts_Enum(&tec_TorqPahMgmt_ReqMotDampSts_Enum);
      (void)Rte_Read_RTE_R_HvMgmt_MCUReqSts_Enum_tec_HvMgmt_MCUReqSts_Enum(&tec_HvMgmt_MCUReqSts_Enum);
    //   (void)Rte_Read_RTE_R_LvMgmt_KL15CtrlReq_Flg_tec_LvMgmt_KL15CtrlReq_Flg(&tec_LvMgmt_KL15CtrlReq_Flg);
    //   (void)Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(&tec_LvMgmt_AppNMReqInfo);
      (void)Rte_Read_RTE_R_ErrMgmt_VehErrLvl_Enum_tec_ErrMgmt_VehErrLvl_Enum(&tec_ErrMgmt_VehErrLvl_Enum);
      (void)Rte_Read_RTE_R_TorqPahMgmt_MotDampLmtTq_tec_TorqPahMgmt_MotDampLmtTq(&tec_TorqPahMgmt_MotDampLmtTq);

      
  
      tec_TorqPahMgmt_DesMotTq_Nm = CtAp_CANHandler_ATOM_SignalSend(tec_TorqPahMgmt_DesMotTq_Nm,CANHandler_Resolution_1,CANHandler_Offest_Minus1023);
      tec_TorqPahMgmt_MotDampLmtTq = CtAp_CANHandler_ATOM_SignalSend(tec_TorqPahMgmt_MotDampLmtTq,CANHandler_Resolution_01,CANHandler_Offest_0);

      VCU_MCU_03_SigGroup.Checksum_095 =(Checksum_104)((uint8_T)CANHandler_u8Zero);
      VCU_MCU_03_SigGroup.MessageCounter_095 = (MessageCounter_108)((uint8_T)CANHandler_u8Zero);
      VCU_MCU_03_SigGroup.VCU_ActualGear = (VCU_ActualGear)tec_FctSftyMon_ActGear_Enum;
      VCU_MCU_03_SigGroup.VCU_BrakepedalStatus = (VCU_BrakepedalStatus)(tec_ChassisMgmt_BrkSts_Enum);
      VCU_MCU_03_SigGroup.VCU_KL15eOn = (VCU_KL15eOn)tec_LvMgmt_KL15ActSts_Flg;
      VCU_MCU_03_SigGroup.VCU_MCUSurgeDamperState = (VCU_MCUSurgeDamperState)tec_TorqPahMgmt_ReqMotDampSts_Enum;
      VCU_MCU_03_SigGroup.VCU_RequestedModeMCU = (VCU_RequestedModeMCU)tec_HvMgmt_MCUReqSts_Enum;
      VCU_MCU_03_SigGroup.VCU_MCUDesiredTorque = (VCU_MCUDesiredTorque_5)tec_TorqPahMgmt_DesMotTq_Nm;
      VCU_MCU_03_SigGroup.VCU_TCSActive = (VCU_TCSActive)((uint8_T)CANHandler_u8Zero);
      VCU_MCU_03_SigGroup.VCU_TrqThresholdDampgCtl = (VCU_TrqThresholdDampgCtl_5)((uint8_T)tec_TorqPahMgmt_MotDampLmtTq);
    //   VCU_MCU_03_SigGroup.VCU_KL15eReuqest = (VCU_KL15eReuqest)tec_LvMgmt_KL15CtrlReq_Flg;
    //   VCU_MCU_03_SigGroup.VCU_WakeUpSrc = (VCU_WakeUpSrc)tec_LvMgmt_AppNMReqInfo;
      VCU_MCU_03_SigGroup.VCU_PWTErrorLevel = (VCU_PWTErrorLevel)tec_ErrMgmt_VehErrLvl_Enum;

      (void)E2EPW_Write_SG_VCU_MCU_03_SigGroup_1_SG_VCU_MCU_03_SigGroup(&VCU_MCU_03_SigGroup);
    /******************************************VCU_MCU_03********************************************************* */

    /******************************************VCU_IBS_01********************************************************* */
        // * SG_VCU_IBS_01_SigGroup: Record with elements
        // *   Checksum_094 of type Checksum_94
        // *   MessageCounter_094 of type MessageCounter_95
        // *   VCU_MotorActualTorque of type VCU_MotorActualTorque_1
        // *   VCU_MotorActualTorqueValid of type VCU_MotorActualTorqueValid
        // *   VCU_OPStandstillReq of type VCU_OPStandstillReq
        // *   VCU_WheelTrqACT of type VCU_WheelTrqACT_1
        // *   VCU_WheelTrqACTValid of type VCU_WheelTrqACTValid



      real32_T tec_TorqPahMgmt_MotActTq_Nm;
      boolean_T tec_TorqPahMgmt_MotActTqVld_Flg;
      boolean_T tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg;
      real32_T tec_TorqPahMgmt_WhlActTq_Nm;
      boolean_T tec_TorqPahMgmt_WhlActTqVld_Flg;
      SG_VCU_IBS_01_SigGroup VCU_IBS_01_SigGroup;

      (void)Rte_Read_RTE_R_TorqPahMgmt_MotActTq_Nm_tec_TorqPahMgmt_MotActTq_Nm(&tec_TorqPahMgmt_MotActTq_Nm);
      (void)Rte_Read_RTE_R_TorqPahMgmt_MotActTqVld_Flg_tec_TorqPahMgmt_MotActTqVld_Flg(&tec_TorqPahMgmt_MotActTqVld_Flg);
      (void)Rte_Read_RTE_R_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg_tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg(&tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg);
      (void)Rte_Read_RTE_R_TorqPahMgmt_WhlActTq_Nm_tec_TorqPahMgmt_WhlActTq_Nm(&tec_TorqPahMgmt_WhlActTq_Nm);
      (void)Rte_Read_RTE_R_TorqPahMgmt_WhlActTqVld_Flg_tec_TorqPahMgmt_WhlActTqVld_Flg(&tec_TorqPahMgmt_WhlActTqVld_Flg);

      tec_TorqPahMgmt_MotActTq_Nm = CtAp_CANHandler_ATOM_SignalSend(tec_TorqPahMgmt_MotActTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus1024);
      tec_TorqPahMgmt_WhlActTq_Nm = CtAp_CANHandler_ATOM_SignalSend(tec_TorqPahMgmt_WhlActTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus20000);

      VCU_IBS_01_SigGroup.Checksum_094 = (Checksum_94)((uint8_T)CANHandler_u8Zero);
      VCU_IBS_01_SigGroup.MessageCounter_094 = (MessageCounter_95)((uint8_T)CANHandler_u8Zero);
      VCU_IBS_01_SigGroup.VCU_MotorActualTorqueValid = (VCU_MotorActualTorqueValid)tec_TorqPahMgmt_MotActTqVld_Flg;
      VCU_IBS_01_SigGroup.VCU_WheelTrqACT = (VCU_WheelTrqACT_1)tec_TorqPahMgmt_WhlActTq_Nm;
      VCU_IBS_01_SigGroup.VCU_WheelTrqACTValid = (VCU_WheelTrqACTValid)tec_TorqPahMgmt_WhlActTqVld_Flg;
      VCU_IBS_01_SigGroup.VCU_MotorActualTorque = (VCU_MotorActualTorque_1)tec_TorqPahMgmt_MotActTq_Nm;
      VCU_IBS_01_SigGroup.VCU_OPStandstillReq = (VCU_OPStandstillReq)tec_ChassisMgmt_OnePedlCtrlReqStdlSts_Flg;

      (void)E2EPW_Write_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup(&VCU_IBS_01_SigGroup);

    /******************************************VCU_IBS_01********************************************************* */
  }
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID3 */
void R_CANHandlerInput_Cyclic_20ms(void)
                              /* Explicit Task: R_CANHandlerInput_Cyclic_20ms */
{
    
	
   //ComErr
    boolean_T LvMgmt_KL15ActSts_Flg;	
    boolean_T LvMgmt_BSBattUDcNorm_Flg;	
    boolean_T DiagApp_DisableDCMReqInfo;
    boolean_T EPTDTCTimeoutEnbale;

	boolean_T CHDTCTimeoutEnbale;
    boolean_T ComM_EPTCANDTCEnb_Flg;
    boolean_T ComM_CHCANDTCEnb_Flg;
	boolean_T ComM_COMLostEnb_Flg;
    dt_ComM_EPTCANBusOffInfo ComM_EPTCANBusOffInfo_Bus;
    dt_ComM_CHCANBusOffInfo ComM_CHCANBusOffInfo_Bus;	

    boolean_T ComM_VCUPNC14;    
	boolean_T ComM_CGWPNC14;  
    boolean_T ComM_VCUPNC16;    
	boolean_T ComM_CGWPNC16; 	
	boolean_T ComM_BMSPNC16; 
	boolean_T ComM_VCUPNC21;
	boolean_T ComM_CGWPNC21;
	boolean_T ComM_VCUPNC4;
	boolean_T ComM_CGWPNC4;
	boolean_T ComM_VCUPNC5;
	boolean_T ComM_CGWPNC5;
	boolean_T ComM_VCUPNC6;
	boolean_T ComM_CGWPNC6;
	boolean_T ComM_VCUPNC0;
	boolean_T ComM_CGWPNC0;
	
	(void)Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(&LvMgmt_KL15ActSts_Flg);
	(void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(&LvMgmt_BSBattUDcNorm_Flg);
    (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(&DiagApp_DisableDCMReqInfo);
    (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(&ComM_CHCANBusOffInfo_Bus);
	(void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(&ComM_EPTCANBusOffInfo_Bus);
	(void)Rte_Read_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14(&ComM_VCUPNC14);
	(void)Rte_Read_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14(&ComM_CGWPNC14);
	(void)Rte_Read_RTE_R_ComM_VCUPNC16_tec_ComM_VCUPNC16(&ComM_VCUPNC16);
	(void)Rte_Read_RTE_R_ComM_CGWPNC16_tec_ComM_CGWPNC16(&ComM_CGWPNC16);
	(void)Rte_Read_RTE_R_ComM_BMSPNC16_tec_ComM_BMSPNC16(&ComM_BMSPNC16);
	(void)Rte_Read_RTE_R_ComM_VCUPNC21_tec_ComM_VCUPNC21(&ComM_VCUPNC21);
	(void)Rte_Read_RTE_R_ComM_CGWPNC21_tec_ComM_CGWPNC21(&ComM_CGWPNC21);
	(void)Rte_Read_RTE_R_ComM_VCUPNC4_tec_ComM_VCUPNC4(&ComM_VCUPNC4);
	(void)Rte_Read_RTE_R_ComM_CGWPNC4_tec_ComM_CGWPNC4(&ComM_CGWPNC4);	
	(void)Rte_Read_RTE_R_ComM_VCUPNC5_tec_ComM_VCUPNC5(&ComM_VCUPNC5);
	(void)Rte_Read_RTE_R_ComM_CGWPNC5_tec_ComM_CGWPNC5(&ComM_CGWPNC5);
	(void)Rte_Read_RTE_R_ComM_VCUPNC6_tec_ComM_VCUPNC6(&ComM_VCUPNC6);
	(void)Rte_Read_RTE_R_ComM_CGWPNC6_tec_ComM_CGWPNC6(&ComM_CGWPNC6);
	(void)Rte_Read_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0(&ComM_VCUPNC0);
	(void)Rte_Read_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0(&ComM_CGWPNC0);

    /*************************************************CGW_02********************************************************************/
    (void)Rte_Read_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(&CGW_02_SigGroup);

    /*************************************************CGW_02********************************************************************/
	//ComM_CHCANDTCEnb_Flg
	
	EPTDTCTimeoutEnbale = ((!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo) && (!DiagApp_DisableDCMReqInfo && LvMgmt_BSBattUDcNorm_Flg));
	CHDTCTimeoutEnbale = ((!ComM_CHCANBusOffInfo_Bus.ComM_ErrResCHCANBusOffInfo) && (!DiagApp_DisableDCMReqInfo && LvMgmt_BSBattUDcNorm_Flg));
		
	ComM_EPTCANDTCEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt(EPTDTCTimeoutEnbale, ((uint16_T)CANHandler_Cycle20ms),CANHandler_WkpCfmPreEnaTim_CFG,&CtAp_CANHandler_ARID_DEF.Cycle20msEPTDTCEnbInteral);
		
	ComM_CHCANDTCEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt
	(CHDTCTimeoutEnbale, ((uint16_T)CANHandler_Cycle20ms),
	CANHandler_WkpCfmPreEnaTim_CFG,
	&CtAp_CANHandler_ARID_DEF.Cycle20msCHDTCEnbInteral);
		
	ComM_COMLostEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt(CANHandler_True,
	((uint16_T)CANHandler_Cycle20ms), CANHandler_WkpCfmPreEnaTim_CFG,
	&CtAp_CANHandler_ARID_DEF.Cycle20msCOMLostEnbInteral);
	
  /*************************************************IBS_Status_04********************************************************************/
   // SG_IBS_Status_04_SigGroup IBS_Status_04_SigGroup;
    uint32_T IBS_Status_04_SigGroup_ErrSts;
	boolean_T IBS_Status_04_SigGroup_RxFlg;
    boolean_T tec_ComM_IBSCdpActv_Flg;
    boolean_T tec_ComM_IBSDtcActv_Flg;
    
    // * SG_IBS_Status_04_SigGroup: Record with elements
    // *   Checksum_0BA of type Checksum_0BA_1
    // *   IBS_CDPActive of type IBS_CDPActive
    // *   IBS_DTCActive of type IBS_DTCActive
    // *   MessageCounter_0BA of type MessageCounter_0BA_1
    IBS_Status_04_SigGroup_RxFlg =Rte_IsUpdated_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup();
    IBS_Status_04_SigGroup_ErrSts = E2EPW_Read_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup(&IBS_Status_04_SigGroup);

	
    tec_ComM_IBSCdpActv_Flg = (boolean_T)IBS_Status_04_SigGroup.IBS_CDPActive;
    tec_ComM_IBSDtcActv_Flg = (boolean_T)IBS_Status_04_SigGroup.IBS_DTCActive;

    Rte_Write_RTE_P_ComM_IBSCdpActv_Flg_tec_ComM_IBSCdpActv_Flg(tec_ComM_IBSCdpActv_Flg);
    Rte_Write_RTE_P_ComM_IBSDtcActv_Flg_tec_ComM_IBSDtcActv_Flg(tec_ComM_IBSDtcActv_Flg);
	
	//ComM_IBSSts04CRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSSts04CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_04_SigGroup.MessageCounter_0BA,
    IBS_Status_04_SigGroup_RxFlg, IBS_Status_04_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts04CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts04CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts04CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSSts04CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts04CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts04CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts04CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts04CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts04CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts04CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrInfo_B.ComM_MonStatIBSSts04CRCDTCErrorInfo
    = ComM_MonStatIBSSts04CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrInfo_B.ComM_MonResIBSSts04CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts04CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrInfo_B.ComM_ErrStatIBSSts04CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts04CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrInfo_B.ComM_ErrResIBSSts04CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts04CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrInfo_B);
	//ComM_IBSSts04TimeoutDTCInfo_Bus
	boolean_T IBSSts04TimeoutDTCErrorFail;
	boolean_T ComM_MonStatIBSSts04TimeoutDTCErrorInfo;
	
	IBSSts04TimeoutDTCErrorFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_Status_04_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    IBSSts04TimeoutDTCErrorFail, IBS_Status_04_SigGroup_RxFlg,
    CANHandler_ErrResIBSSts04TimeoutDTCMatureTime_CFG, ((uint16_T)
    60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts04TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts04TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts04TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts04TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts04TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_d1b4.ComM_MonStatIBSSts04TimeoutDTCErrorInfo
    = ComM_MonStatIBSSts04TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_d1b4.ComM_MonResIBSSts04TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts04TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_d1b4.ComM_ErrStatIBSSts04TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts04TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_d1b4.ComM_ErrResIBSSts04TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts04TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_d1b4);
	//ComM_IBSSts04CRCInfo_Bus
	boolean_T ComM_MonStatIBSSts04CRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_04_SigGroup.MessageCounter_0BA,
    IBS_Status_04_SigGroup_RxFlg, IBS_Status_04_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts04CRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts04CRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts04CRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.IBSSts04CRCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts04CRCErrorPass, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts04CRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts04CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts04CRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts04CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts04CRCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_fhw5.ComM_MonStatIBSSts04CRCErrorInfo
    = ComM_MonStatIBSSts04CRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_fhw5.ComM_MonResIBSSts04CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts04CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_fhw5.ComM_ErrStatIBSSts04CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts04CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_fhw5.ComM_ErrResIBSSts04CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts04CRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04CRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_fhw5);
	//ComM_IBSSts04E2ETimeoutInfo_Bus
	boolean_T ComM_MonStatIBSSts04E2ETimeoutInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!IBS_Status_04_SigGroup_RxFlg),
    IBS_Status_04_SigGroup_RxFlg, CANHandler_ErrResIBSSts04TimeoutMatureTime_CFG,
    ((uint16_T)60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts04E2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts04E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts04E2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts04E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts04E2ETimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_oiec.ComM_MonStatIBSSts04E2ETimeoutInfo
    = ComM_MonStatIBSSts04E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_oiec.ComM_MonResIBSSts04E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts04E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_oiec.ComM_ErrStatIBSSts04E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts04E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_oiec.ComM_ErrResIBSSts04E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts04E2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts04MsgErrInfo_Bus_tec_ComM_IBSSts04E2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts04MsgErrI_oiec);
	
  /*************************************************IBS_Status_04********************************************************************/
	
  /**************************************************ACU_Info*******************************************************************/
  boolean_T ACU_Info_SigGroup_RxFlg;
  boolean_T ACU_Info_SigGroup_UpdateFlg;
  uint32_T ACU_Info_SigGroup_ErrSts;
  // * SG_ACU_Info_SigGroup: Record with elements
  // *   ACU_CrashOutputSts of type ACU_CrashOutputSts
  // *   ACU_CrashOutputStsValid of type ACU_CrashOutputStsValid
  // *   ACU_DriverWarningLampSts of type ACU_DriverWarningLampSts
  // *   ACU_PassengerAirbagSts of type ACU_PassengerAirbagSts
  // *   ACU_PassengerWarningLampSts of type ACU_PassengerWarningLampSts
  // *   MessageCounter_097 of type MessageCounter_104
  // *   Checksum_097 of type Checksum_097
  ACU_Info_SigGroup_RxFlg = Rte_IsUpdated_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup();
  ACU_Info_SigGroup_ErrSts = E2EPW_Read_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup(&ACU_Info_SigGroup);

  ACU_Info_SigGroup_UpdateFlg = CtAp_CANHandler_MessageUpdateDelay(CANHandler_CntOne,ACU_Info_SigGroup_RxFlg,UpdateInnerCnt.ACUInfo_UpdateCnt);
  (void)Rte_Write_RTE_P_ComM_ACUInfoUpdate_tec_ComM_ACUInfoUpdate(ACU_Info_SigGroup_UpdateFlg);

  (void)Rte_Write_RTE_P_ComM_ACUCrashOutpSts_Enum_tec_ComM_ACUCrashOutpSts_Enum((uint8_T)ACU_Info_SigGroup.ACU_CrashOutputSts);
  (void)Rte_Write_RTE_P_ComM_DrvrWarnLampStsInfo_tec_ComM_DrvrWarnLampStsInfo((uint8_T)ACU_Info_SigGroup.ACU_DriverWarningLampSts);
  (void)Rte_Write_RTE_P_ComM_PassAirbStsInfo_tec_ComM_PassAirbStsInfo((uint8_T)ACU_Info_SigGroup.ACU_PassengerAirbagSts);
  (void)Rte_Write_RTE_P_ComM_PassWarnLampStsInfo_tec_ComM_PassWarnLampStsInfo((uint8_T)ACU_Info_SigGroup.ACU_PassengerWarningLampSts);

  (void)Rte_Write_RTE_P_ComM_WarnLampStsInfo_tec_ComM_WarnLampStsInfo((uint8_T)ACU_Info_SigGroup.ACU_WarningLampSts);
  
  
  //ComM_ACUInfoTimeoutDTCInfo_Bus
  
 	boolean_T ACUInfoTimeoutDTCCfmFail;    
    boolean_T ComM_MonStatACUInfoTimeoutDTCErrorInfo; 
	
    ACUInfoTimeoutDTCCfmFail = ((!ACU_Info_SigGroup_RxFlg) && LvMgmt_KL15ActSts_Flg);
  
    CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    ACUInfoTimeoutDTCCfmFail, ACU_Info_SigGroup_RxFlg,
    CANHandler_ErrResACUInfoTimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatACUInfoTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResACUInfoTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatACUInfoTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResACUInfoTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ACUInfoTimeoutDTCErrorInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_Bu.ComM_MonStatACUInfoTimeoutDTCErrorInfo
    = ComM_MonStatACUInfoTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_Bu.ComM_MonResACUInfoTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResACUInfoTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_Bu.ComM_ErrStatACUInfoTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatACUInfoTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_Bu.ComM_ErrResACUInfoTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResACUInfoTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_Bu);
	
	//ComM_ACUInfoCRCDTCInfo_Bus
  
    boolean_T ComM_MonStatACUInfoCRCDTCErrorInfo; 
	
    
  
    CtAp_CANHandler_E2ECfm(ACU_Info_SigGroup.MessageCounter_097,
    ACU_Info_SigGroup_RxFlg, ACU_Info_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.ACUInfoCRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.ACUInfoCRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.ACUInfoCRCDTCErrorInteral);
  
    CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.ACUInfoCRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.ACUInfoCRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatACUInfoCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResACUInfoCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatACUInfoCRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResACUInfoCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ACUInfoCRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_CRCDTC.ComM_MonStatACUInfoCRCDTCErrorInfo
    = ComM_MonStatACUInfoCRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_CRCDTC.ComM_MonResACUInfoCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResACUInfoCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_CRCDTC.ComM_ErrStatACUInfoCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatACUInfoCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_CRCDTC.ComM_ErrResACUInfoCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResACUInfoCRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoCRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrInfo_CRCDTC);
	
	
	//ComM_ACUInfoTimeoutInfo_Bus
    boolean_T ComM_MonStatACUInfoTimeoutInfo;
    boolean_T ACUInfoTimeoutFail;

    ACUInfoTimeoutFail = (LvMgmt_BSBattUDcNorm_Flg && (!ACU_Info_SigGroup_RxFlg) && (!ComM_CHCANBusOffInfo_Bus.ComM_ErrResCHCANBusOffInfo));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
        ACUInfoTimeoutFail, (!ACUInfoTimeoutFail),
    CANHandler_ErrResACUInfoTimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle20ms), &ComM_MonStatACUInfoTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResACUInfoTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatACUInfoTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResACUInfoTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ACUInfoTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrIn_hgri.ComM_MonStatACUInfoTimeoutInfo
    = ComM_MonStatACUInfoTimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrIn_hgri.ComM_MonResACUInfoTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResACUInfoTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrIn_hgri.ComM_ErrStatACUInfoTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatACUInfoTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrIn_hgri.ComM_ErrResACUInfoTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResACUInfoTimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_ACUInfoMsgErrInfo_Bus_tec_ComM_ACUInfoTimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACUInfoMsgErrIn_hgri);
  
  /**************************************************ACU_Info*******************************************************************/

  /**************************************************ADCU_ACC_02*******************************************************************/
   // SG_ADCU_ACC_02_SigGroup ADCU_ACC_02_SigGroup;
    uint32_T ADCU_ACC_02_SigGroup_ErrSts;
    boolean_T ADCU_ACC_02_SigGroup_RxFlg;
    
    /*
   * SG_ADCU_ACC_02_SigGroup: Record with elements
    *   ADCU_ACC_Mode of type ADCU_ACC_Mode
    *   Checksum_0E0 of type Checksum_0E0_1
    *   MessageCounter_0E0 of type MessageCounter_0E0_1
    */
    ADCU_ACC_02_SigGroup_RxFlg = Rte_IsUpdated_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup();
    ADCU_ACC_02_SigGroup_ErrSts =E2EPW_Read_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup(&ADCU_ACC_02_SigGroup);
   
    (void)Rte_Write_RTE_P_ComM_ADCUAccMod_Enum_tec_ComM_ADCUAccMod_Enum((uint8_T)ADCU_ACC_02_SigGroup.ADCU_ACC_Mode);



	
	//ComErr
	//ADCU_ACC_PNCEnable
	boolean_T ADCU_ACC_PNCEnable;
	boolean_T ADCUACCPNCEnable_Logical;
	
	ADCUACCPNCEnable_Logical = ((CGW_02_SigGroup.CGW_ADCUSts)&&ComM_CHCANDTCEnb_Flg);
	
	ADCU_ACC_PNCEnable = CtAp_CANHandler_ATOM_TimeCnt
    (ADCUACCPNCEnable_Logical, ((uint16_T)CANHandler_Cycle20ms),
    CANHandler_PNC14SpcTimeoutEnable_CFG,
    &CtAp_CANHandler_ARID_DEF.ADCU_ACC_PNCEnableInteral);
	//ComM_ADCUACC02CRCDTCInfo_Bus
	boolean_T ComM_MonStatADCUACC02CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(ADCU_ACC_02_SigGroup.MessageCounter_0E0,
    ADCU_ACC_02_SigGroup_RxFlg, ADCU_ACC_02_SigGroup_ErrSts,
    ADCU_ACC_PNCEnable, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.ADCUACC02CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.ADCUACC02CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.ADCUACC02CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.ADCUACC02CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.ADCUACC02CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatADCUACC02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUACC02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUACC02CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUACC02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ADCUACC02CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErrInfo_.ComM_MonStatADCUACC02CRCDTCErrorInfo
    = ComM_MonStatADCUACC02CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErrInfo_.ComM_MonResADCUACC02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUACC02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErrInfo_.ComM_ErrStatADCUACC02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUACC02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErrInfo_.ComM_ErrResADCUACC02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUACC02CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErrInfo_);
	//ComM_ADCUACC02TimeoutDTCInfo_Bus
	boolean_T ADCUACC02TimeoutDTCCfmFail;
	boolean_T ComM_MonStatADCUACC02TimeoutDTCErrorInfo;
	
	ADCUACC02TimeoutDTCCfmFail=(ADCU_ACC_PNCEnable && (!ADCU_ACC_02_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg, ADCUACC02TimeoutDTCCfmFail,
    ADCU_ACC_02_SigGroup_RxFlg,
    CANHandler_ErrResADCUACC02TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatADCUACC02TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUACC02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUACC02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUACC02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ADCUACC02TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_hyh1.ComM_MonStatADCUACC02TimeoutDTCErrorInfo
    = ComM_MonStatADCUACC02TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_hyh1.ComM_MonResADCUACC02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUACC02TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_hyh1.ComM_ErrStatADCUACC02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUACC02TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_hyh1.ComM_ErrResADCUACC02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUACC02TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_hyh1);
	//ComM_ADCUACC02TimeoutInfo_Bus
	boolean_T ADCUACC02TimeoutCfmFail;
	boolean_T ADCUACC02TimeoutCfmPass;
	boolean_T ComM_MonStatADCUACC02TimeoutInfo;
	
	ADCUACC02TimeoutCfmFail=((CGW_02_SigGroup.CGW_ADCUSts)&&(!ComM_CHCANBusOffInfo_Bus.ComM_ErrResCHCANBusOffInfo)&&(!ADCU_ACC_02_SigGroup_RxFlg));
	ADCUACC02TimeoutCfmPass=(!ADCUACC02TimeoutCfmFail);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    ADCUACC02TimeoutCfmFail, ADCUACC02TimeoutCfmPass,
    CANHandler_ErrResADCUACC02TimeoutMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatADCUACC02TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUACC02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUACC02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUACC02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ADCUACC02Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_adxb.ComM_MonStatADCUACC02TimeoutInfo
    = ComM_MonStatADCUACC02TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_adxb.ComM_MonResADCUACC02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUACC02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_adxb.ComM_ErrStatADCUACC02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUACC02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_adxb.ComM_ErrResADCUACC02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUACC02TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_ADCUACC02MsgErrInfo_Bus_tec_ComM_ADCUACC02TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUACC02MsgErr_adxb);

  /**************************************************ADCU_ACC_02*******************************************************************/

  /**************************************************BMS_status_02*******************************************************************/
    SG_BMS_status_02_SigGroup BMS_status_02_SigGroup;
    real32_T tec_ComM_BMSBattHeatIDc_A;
    real32_T tec_ComM_BMSBattIDc_A;
    real32_T tec_ComM_BMSBattUDc_V;
	boolean_T BMS_status_02_SigGroup_RxFlg;
    
    /*
      * SG_BMS_status_02_SigGroup: Record with elements
    *   BMS_BattCurr of type BMS_BattCurr_2
    *   BMS_BattVolt of type BMS_BattVolt_2
    *   BMS_Heatcurrent of type BMS_Heatcurrent_2
    */
    BMS_status_02_SigGroup_RxFlg =Rte_IsUpdated_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup();
    
    (void)Rte_Read_SG_BMS_status_02_SigGroup_SG_BMS_status_02_SigGroup(&BMS_status_02_SigGroup);

    tec_ComM_BMSBattHeatIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_status_02_SigGroup.BMS_Heatcurrent,CANHandler_Resolution_01, CANHandler_Offest_Minus1024);
    tec_ComM_BMSBattIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_status_02_SigGroup.BMS_BattCurr,CANHandler_Resolution_01, CANHandler_Offest_Minus1024);//1024
    tec_ComM_BMSBattUDc_V = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_status_02_SigGroup.BMS_BattVolt,CANHandler_Resolution_01, CANHandler_Offest_0);
	

    (void)Rte_Write_RTE_P_ComM_BMSBattHeatIDc_A_tec_ComM_BMSBattHeatIDc_A(tec_ComM_BMSBattHeatIDc_A);
    (void)Rte_Write_RTE_P_ComM_BMSBattIDc_A_tec_ComM_BMSBattIDc_A(tec_ComM_BMSBattIDc_A);
    (void)Rte_Write_RTE_P_ComM_BMSBattUDc_V_tec_ComM_BMSBattUDc_V(tec_ComM_BMSBattUDc_V);
	
	//ComM_BMSSts02TimeoutDTCInfo_Bus
	boolean_T BMSSts02TimeoutDTCErrorTimeoutDTCCfmFail;
	boolean_T ComM_MonStatBMSSts02TimeoutDTCErrorInfo;
	
	BMSSts02TimeoutDTCErrorTimeoutDTCCfmFail=((CGW_02_SigGroup.CGW_BMSSts || LvMgmt_KL15ActSts_Flg)&& (!BMS_status_02_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    BMSSts02TimeoutDTCErrorTimeoutDTCCfmFail, BMS_status_02_SigGroup_RxFlg,
    CANHandler_ErrResBMSSts02TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatBMSSts02TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.BMSSts02TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrInfo_B.ComM_MonStatBMSSts02TimeoutDTCErrorInfo
    = ComM_MonStatBMSSts02TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrInfo_B.ComM_MonResBMSSts02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts02TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrInfo_B.ComM_ErrStatBMSSts02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts02TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrInfo_B.ComM_ErrResBMSSts02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts02TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrInfo_B);
	//ComM_BMSSts02TimeoutInfo_Bus
	boolean_T BMSSts02TimeoutCfmFail;
	boolean_T BMSSts02TimeoutCfmPass;
	boolean_T ComM_MonStatBMSSts02TimeoutInfo;
	
	BMSSts02TimeoutCfmFail=((CGW_02_SigGroup.CGW_BMSSts || LvMgmt_KL15ActSts_Flg)&& (!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!BMS_status_02_SigGroup_RxFlg));
	BMSSts02TimeoutCfmPass=(!BMSSts02TimeoutCfmFail);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    BMSSts02TimeoutCfmFail, BMSSts02TimeoutCfmPass,
    CANHandler_ErrResBMSSts02TimeoutMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatBMSSts02TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.BMSSts02Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrI_bt3n.ComM_MonStatBMSSts02TimeoutInfo
    = ComM_MonStatBMSSts02TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrI_bt3n.ComM_MonResBMSSts02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrI_bt3n.ComM_ErrStatBMSSts02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrI_bt3n.ComM_ErrResBMSSts02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts02TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_BMSSts02MsgErrInfo_Bus_tec_ComM_BMSSts02TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts02MsgErrI_bt3n);

  /**************************************************BMS_status_02*******************************************************************/

  /**************************************************BMS_status_01*******************************************************************/
   // SG_BMS_status_01_SigGroup BMS_status_01_SigGroup;
    uint32_T BMS_status_01_SigGroup_ErrSts;
    boolean_T BMS_status_01_SigGroup_RxFlg;
    boolean_T BMS_status_01_SigGroup_UpdateFlg;
	boolean_T DCChrMgmt_DcChrgStrt_Flg;

    /*
    * SG_BMS_status_01_SigGroup: Record with elements
    *   BMS_BalancingStatus of type BMS_BalancingStatus
    *   BMS_ChargeStatus of type BMS_ChargeStatus
    *   BMS_ErrorIsolationSingleLow of type BMS_ErrorIsolationSingleLow
    *   BMS_ErrorLevel of type BMS_ErrorLevel
    *   BMS_HVinterlockState of type BMS_HVinterlockState
    *   BMS_InsulationDetectionStatus of type BMS_InsulationDetectionStatus
    *   BMS_PreCharge of type BMS_PreCharge
    *   BMS_RunHeatStatus of type BMS_RunHeatStatus
    *   BMS_SOH of type BMS_SOH
    *   BMS_SysRegInsulationValue of type BMS_SysRegInsulationValue
    *   BMS_ThrmlRunawayFault of type BMS_ThrmlRunawayFault
    *   BMS_WorkMode of type BMS_WorkMode
    *   Checksum_0C1 of type Checksum_0C1
    */
    BMS_status_01_SigGroup_RxFlg =Rte_IsUpdated_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup();
   
    BMS_status_01_SigGroup_ErrSts = E2EPW_Read_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup(&BMS_status_01_SigGroup);
    
    BMS_status_01_SigGroup_UpdateFlg = CtAp_CANHandler_MessageUpdateDelay(CANHandler_CntOne,BMS_status_01_SigGroup_RxFlg,UpdateInnerCnt.BMSSts01_UpdateCnt);
    (void)Rte_Write_RTE_P_ComM_BMSSts01Update_tec_ComM_BMSSts01Update(BMS_status_01_SigGroup_UpdateFlg);//increase delay log
    


	

    (void)Rte_Write_RTE_P_ComM_BMSChrgSts_Enum_tec_ComM_BMSChrgSts_Enum((uint8_T)BMS_status_01_SigGroup.BMS_ChargeStatus);
    (void)Rte_Write_RTE_P_ComM_BMSErrLvl_Enum_tec_ComM_BMSErrLvl_Enum((uint8_T)BMS_status_01_SigGroup.BMS_ErrorLevel);
    (void)Rte_Write_RTE_P_ComM_BMSHVILSts_Flg_tec_ComM_BMSHVILSts_Flg((boolean_T)BMS_status_01_SigGroup.BMS_HVinterlockState);
    (void)Rte_Write_RTE_P_ComM_BMSInslaErrLvl_Enum_tec_ComM_BMSInslaErrLvl_Enum((uint8_T)BMS_status_01_SigGroup.BMS_ErrorIsolationSingleLow);
    (void)Rte_Write_RTE_P_ComM_BMSIRDetnSts_Enum_tec_ComM_BMSIRDetnSts_Enum((uint8_T)BMS_status_01_SigGroup.BMS_InsulationDetectionStatus);
    (void)Rte_Write_RTE_P_ComM_BMSWrkMod_Enum_tec_ComM_BMSWrkMod_Enum((uint8_T)BMS_status_01_SigGroup.BMS_WorkMode);
    (void)Rte_Write_RTE_P_ComM_SysIRVal_kOhm_tec_ComM_SysIRVal_kOhm((uint16_T)BMS_status_01_SigGroup.BMS_SysRegInsulationValue);
    
	
	//ComErr

	(void)Rte_Read_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(&DCChrMgmt_DcChrgStrt_Flg);
	//ComM_BMSSts01CRCDTCInfo_Bus
	boolean_T BMSSts01CRCDTCE2EOtherCdn;
    boolean_T ComM_MonStatBMSSts01CRCDTCErrorInfo;
	
	BMSSts01CRCDTCE2EOtherCdn=(LvMgmt_KL15ActSts_Flg|| CGW_02_SigGroup.CGW_BMSSts);
	
	CtAp_CANHandler_E2E3Cfm(BMS_status_01_SigGroup.MessageCounter_0C1,
    BMS_status_01_SigGroup_RxFlg, BMS_status_01_SigGroup_ErrSts,
    BMSSts01CRCDTCE2EOtherCdn, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatBMSSts01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_Bus_.ComM_MonStatBMSSts01CRCDTCErrorInfo
    = ComM_MonStatBMSSts01CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_Bus_.ComM_MonResBMSSts01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_Bus_.ComM_ErrStatBMSSts01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_Bus_.ComM_ErrResBMSSts01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_Bus_);
	//ComM_BMSSts01TimeoutDTCInfo_Bus
	boolean_T BMSSts01TimeoutDTCErrorFail;
	boolean_T ComM_MonStatBMSSts01TimeoutDTCErrorInfo;
	
	BMSSts01TimeoutDTCErrorFail=((LvMgmt_KL15ActSts_Flg|| CGW_02_SigGroup.CGW_BMSSts)&&(!BMS_status_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    BMSSts01TimeoutDTCErrorFail, BMS_status_01_SigGroup_RxFlg,
    CANHandler_ErrResBMSSts01TimeoutDTCMatureTime_CFG, ((uint16_T)
    60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatBMSSts01TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.BMSSts01TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_i4f2.ComM_MonStatBMSSts01TimeoutDTCErrorInfo
    = ComM_MonStatBMSSts01TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_i4f2.ComM_MonResBMSSts01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_i4f2.ComM_ErrStatBMSSts01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_i4f2.ComM_ErrResBMSSts01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_i4f2);
	//ComM_BMSSts01TimeoutInfo_Bus
	boolean_T BMSSts01TimeoutFail;
	boolean_T ComM_MonStatBMSSts01TimeoutInfo;
	
	BMSSts01TimeoutFail=(DCChrMgmt_DcChrgStrt_Flg&&(!BMS_status_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    BMSSts01TimeoutFail, BMS_status_01_SigGroup_RxFlg,
    CANHandler_ErrResBMSSts01TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatBMSSts01TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.BMSSts01Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_e1la.ComM_MonStatBMSSts01TimeoutInfo
    = ComM_MonStatBMSSts01TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_e1la.ComM_MonResBMSSts01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_e1la.ComM_ErrStatBMSSts01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_e1la.ComM_ErrResBMSSts01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_e1la);
	//ComM_BMSSts01CRCInfo_Bus
	boolean_T ComM_MonStatBMSSts01CRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(BMS_status_01_SigGroup.MessageCounter_0C1,
    BMS_status_01_SigGroup_RxFlg, BMS_status_01_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.BMSSts01CRCErrorFail,
    CtAp_CANHandler_ARID_DEF.BMSSts01CRCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatBMSSts01CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01CRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_jfqj.ComM_MonStatBMSSts01CRCErrorInfo
    = ComM_MonStatBMSSts01CRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_jfqj.ComM_MonResBMSSts01CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_jfqj.ComM_ErrStatBMSSts01CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_jfqj.ComM_ErrResBMSSts01CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01CRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01CRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_jfqj);
	//ComM_BMSSts01E2ETimeoutInfo_Bus
    boolean_T ComM_MonStatBMSSts01E2ETimeoutInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!BMS_status_01_SigGroup_RxFlg),
    BMS_status_01_SigGroup_RxFlg, CANHandler_ErrResBMSSts01TimeoutDTCMatureTime_CFG,
    ((uint16_T)60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatBMSSts01E2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.BMSSts01E2ETimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_fx1a.ComM_MonStatBMSSts01E2ETimeoutInfo
    = ComM_MonStatBMSSts01E2ETimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_fx1a.ComM_MonResBMSSts01E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBMSSts01E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_fx1a.ComM_ErrStatBMSSts01E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSSts01E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_fx1a.ComM_ErrResBMSSts01E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSSts01E2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_BMSSts01ErrInfo_Bus_tec_ComM_BMSSts01E2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSSts01ErrInfo_fx1a);
    
  /**************************************************BMS_status_01*******************************************************************/

  /**************************************************CBM_03_*******************************************************************/
    // SG_CBM_03_SigGroup CBM_03_SigGroup;
    // boolean_T CBM_03_SigGroupRxFlg;
    // uint8_T tec_ComM_CBMSysRdyReq_Enum;
    // /*
    // * SG_CBM_03_SigGroup: Record with elements
    // *   CBM_SystemReadyReq of type CBM_SystemReadyReq_2
    // */
    // CBM_03_SigGroupRxFlg = Rte_IsUpdated_SG_CBM_03_SigGroup_SG_CBM_03_SigGroup();
    // (void)Rte_Read_SG_CBM_03_SigGroup_SG_CBM_03_SigGroup(&CBM_03_SigGroup);

    // tec_ComM_CBMSysRdyReq_Enum = CtAp_CANHandl_ATOM_CESignalRead(CBM_03_SigGroupRxFlg,
    //                                                             (uint8_T)CBM_03_SigGroup.CBM_SystemReadyReq, 
    //                                                             CANHandler_Cycle200ms,
    //                                                             &CtAp_CANHandler_DelayStruct.tec_ComM_CBMSysRdyReq_Enum_CE_Delay);

    // (void)Rte_Write_RTE_P_ComM_CBMSysRdyReq_Enum_tec_ComM_CBMSysRdyReq_Enum(tec_ComM_CBMSysRdyReq_Enum);
	
	

  /**************************************************CBM_03_*******************************************************************/

  /**************************************************PRND*******************************************************************/
   // SG_PRND_SigGroup PRND_SigGroup;
    boolean_T PRND_SigGroupRxFlg;
    
    uint32_T PRND_SigGroup_ErrSts;
    uint8_T tec_ComM_GearPBtn_Enum;
    uint8_T tec_ComM_GearRNDBtn_Enum;
    /*
    * SG_PRND_SigGroup: Record with elements
    *   Checksum_248 of type Checksum_248
    *   MessageCounter_248 of type MessageCounter_248
    *   PRND_Pbutton of type PRND_Pbutton
    *   PRND_Pbutton_FaultSts of type PRND_Pbutton_FaultSts
    *   PRND_RNDbutton of type PRND_RNDbutton
    *   PRND_RNDbutton_FaultSts of type PRND_RNDbutton_FaultSts
    */
    PRND_SigGroupRxFlg = Rte_IsUpdated_SG_PRND_SigGroup_SG_PRND_SigGroup();
   
    PRND_SigGroup_ErrSts = E2EPW_Read_SG_PRND_SigGroup_SG_PRND_SigGroup(&PRND_SigGroup);

    tec_ComM_GearPBtn_Enum = CtAp_CANHandl_ATOM_CESignalRead(PRND_SigGroupRxFlg,
                                                                 (uint8_T)PRND_SigGroup.PRND_Pbutton, 
                                                                 CANHandler_Cycle100ms,
                                                                &CtAp_CANHandler_DelayStruct.tec_ComM_GearPBtn_Enum_CE_Delay);

    tec_ComM_GearRNDBtn_Enum = CtAp_CANHandl_ATOM_CESignalRead(PRND_SigGroupRxFlg,
                                                                 (uint8_T)PRND_SigGroup.PRND_RNDbutton, 
                                                                 CANHandler_Cycle100ms,
                                                                &CtAp_CANHandler_DelayStruct.tec_ComM_GearRNDBtn_Enum_CE_Delay);


    (void)Rte_Write_RTE_P_ComM_GearPBtn_Enum_tec_ComM_GearPBtn_Enum(tec_ComM_GearPBtn_Enum);
    (void)Rte_Write_RTE_P_ComM_GearPBtnFltSts_Flg_tec_ComM_GearPBtnFltSts_Flg((boolean_T)PRND_SigGroup.PRND_Pbutton_FaultSts);
    (void)Rte_Write_RTE_P_ComM_GearRNDBtn_Enum_tec_ComM_GearRNDBtn_Enum(tec_ComM_GearRNDBtn_Enum);
    (void)Rte_Write_RTE_P_ComM_GearRNDBtnFltSts_Flg_tec_ComM_GearRNDBtnFltSts_Flg((boolean_T)PRND_SigGroup.PRND_RNDbutton_FaultSts);
	
    //PRNDTimeoutCfm
    boolean_T PRNDTimeoutRes20msFlg;
    boolean_T PRNDTimeoutRes100msFlg;
    boolean_T PRNDTimeoutResFlg;

    PRNDTimeoutRes20msFlg=CtAp_CANHandler_ATOM_TimeCnt(PRND_SigGroupRxFlg, (uint16_T)20U,
        (uint16_T)60U, &CtAp_CANHandler_ARID_DEF.PRNDRes20msInteral);
    if (PRNDTimeoutRes100msCnt == 4)
    {
        PRNDTimeoutRes100msEnb = 1;
        PRNDTimeoutRes100msCnt = 0;
    }
    else
    {
        PRNDTimeoutRes100msEnb = 0;
    }
    if (PRND_SigGroupRxFlg)
    {
        PRNDTimeoutRes100msCnt = 0;
    }
    else
    {
        PRNDTimeoutRes100msCnt++;
    }

        
    
    if (PRNDTimeoutRes100msEnb)
    {
        PRND_SigGroupRxFlg100ms = PRND_SigGroupRxFlg;
    }
    PRNDTimeoutRes100msFlg = CtAp_CANHandler_ATOM_TimeCnt(PRND_SigGroupRxFlg100ms, (uint16_T)20U,
        (uint16_T)200U, &CtAp_CANHandler_ARID_DEF.PRNDRes100msInteral);

    PRNDTimeoutResFlg = (PRNDTimeoutRes20msFlg || PRNDTimeoutRes100msFlg);
	//ComM_PRNDCRCDTCInfo_Bus
	boolean_T PRNDCRCDTCErrorE2ECfmOtherCdn;
	boolean_T ComM_MonStatPRNDCRCDTCErrorInfo;

	PRNDCRCDTCErrorE2ECfmOtherCdn=(CGW_02_SigGroup.CGW_PRNDSts);
	
	CtAp_CANHandler_E2E3Cfm(PRND_SigGroup.MessageCounter_248,
    PRND_SigGroupRxFlg, PRND_SigGroup_ErrSts,
    PRNDCRCDTCErrorE2ECfmOtherCdn, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_3), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.PRNDCRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.PRNDCRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.PRNDCRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.PRNDCRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.PRNDCRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatPRNDCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDCRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.PRNDCRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo_Bus_t.ComM_MonStatPRNDCRCDTCErrorInfo
    = ComM_MonStatPRNDCRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo_Bus_t.ComM_MonResPRNDCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo_Bus_t.ComM_ErrStatPRNDCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo_Bus_t.ComM_ErrResPRNDCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDCRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo_Bus_t);
	//ComM_PRNDTimeoutDTCInfo_Bus
	boolean_T PRNDTimeoutDTCErrorFail;
    boolean_T ComM_MonStatPRNDTimeoutDTCErrorInfo;
	
	PRNDTimeoutDTCErrorFail=((CGW_02_SigGroup.CGW_PRNDSts)&&(!PRND_SigGroupRxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    PRNDTimeoutDTCErrorFail, PRNDTimeoutResFlg,
    CANHandler_ErrResPRNDTimeoutDTCMatureTime_CFG, ((uint16_T)0U),
    ((uint16_T)CANHandler_Cycle20ms), &ComM_MonStatPRNDTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.PRNDTimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__mtcd.ComM_MonStatPRNDTimeoutDTCErrorInfo
    = ComM_MonStatPRNDTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__mtcd.ComM_MonResPRNDTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__mtcd.ComM_ErrStatPRNDTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__mtcd.ComM_ErrResPRNDTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__mtcd);
	//ComM_PRNDTimeoutInfo_Bus
	boolean_T PRNDTimeoutCfmFail;
	boolean_T PRNDTimeoutCfmPass;
	boolean_T ComM_MonStatPRNDTimeoutInfo;
	
	PRNDTimeoutCfmFail=((CGW_02_SigGroup.CGW_PRNDSts)&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!PRND_SigGroupRxFlg));
	PRNDTimeoutCfmPass=((!(CGW_02_SigGroup.CGW_PRNDSts)) || (ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo) || PRNDTimeoutResFlg);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    PRNDTimeoutCfmFail, PRNDTimeoutCfmPass,
    CANHandler_ErrResPRNDTimeoutMatureTime_CFG, ((uint16_T)0U),
    ((uint16_T)CANHandler_Cycle20ms), &ComM_MonStatPRNDTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.PRNDTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__afq3.ComM_MonStatPRNDTimeoutInfo
    = ComM_MonStatPRNDTimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__afq3.ComM_MonResPRNDTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__afq3.ComM_ErrStatPRNDTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__afq3.ComM_ErrResPRNDTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDTimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDTimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__afq3);
	//ComM_PRNDCRCInfo_Bus
	boolean_T ComM_MonStatPRNDCRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(PRND_SigGroup.MessageCounter_248,
    PRND_SigGroupRxFlg, PRND_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_3), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.PRNDCRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.PRNDCRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.PRNDCRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.PRNDCRCErrorFail,
    CtAp_CANHandler_ARID_DEF.PRNDCRCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatPRNDCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDCRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.PRNDCRCError_U16ErrorHandInteral);

	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__cadt.ComM_MonStatPRNDCRCErrorInfo
    = ComM_MonStatPRNDCRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__cadt.ComM_MonResPRNDCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDCRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__cadt.ComM_ErrStatPRNDCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDCRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__cadt.ComM_ErrResPRNDCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDCRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDCRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__cadt);
	//ComM_PRNDE2ETimeoutInfo_Bus
	boolean_T ComM_MonStatPRNDE2ETimeoutInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!PRND_SigGroupRxFlg),
    PRNDTimeoutResFlg, CANHandler_ErrResPRNDTimeoutMatureTime_CFG,
    ((uint16_T)0U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatPRNDE2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.PRNDE2ETimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__d333.ComM_MonStatPRNDE2ETimeoutInfo
    = ComM_MonStatPRNDE2ETimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__d333.ComM_MonResPRNDE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPRNDE2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__d333.ComM_ErrStatPRNDE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPRNDE2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__d333.ComM_ErrResPRNDE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPRNDE2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_PRNDMsgErrInfo_Bus_tec_ComM_PRNDE2ETimeoutInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PRNDMsgErrInfo__d333);

  /**************************************************PRND*******************************************************************/

  /**************************************************IBS_Status_02*******************************************************************/
   // SG_IBS_Status_02_SigGroup IBS_Status_02_SigGroup;
    boolean_T IBS_Status_02_SigGroupRxFlg;
    uint32_T IBS_Status_02_SigGroup_ErrSts;
   /*
    * SG_IBS_Status_02_SigGroup: Record with elements
    *   Checksum_0B3 of type Checksum_0B3_1
    *   IBS_AEBActive of type IBS_AEBActive
    *   IBS_AEBAvailable of type IBS_AEBAvailable
    *   IBS_AVHAvailable of type IBS_AVHAvailable
    *   IBS_BrakeLightRequest of type IBS_BrakeLightRequest
    *   IBS_EPBFailureLamp of type IBS_EPBFailureLamp
    *   IBS_EPBFunctionLamp of type IBS_EPBFunctionLamp
    *   IBS_EPBworkingSts of type IBS_EPBworkingSts
    *   IBS_HDCAvailable of type IBS_HDCAvailable
    *   IBS_HHCActive of type IBS_HHCActive
    *   IBS_HHCAvailable of type IBS_HHCAvailable
    *   IBS_TCSActive of type IBS_TCSActive
    *   IBS_VDCActive of type IBS_VDCActive
    *   MessageCounter_0B3 of type MessageCounter_0B3_1
     */
    IBS_Status_02_SigGroupRxFlg = Rte_IsUpdated_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup();
    IBS_Status_02_SigGroup_ErrSts = E2EPW_Read_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup(&IBS_Status_02_SigGroup);
    
    (void)Rte_Write_RTE_P_ComM_EPBWrkSts_Enum_tec_ComM_EPBWrkSts_Enum((uint8_T)IBS_Status_02_SigGroup.IBS_EPBworkingSts);
    (void)Rte_Write_RTE_P_ComM_IBSAebActv_Flg_tec_ComM_IBSAebActv_Flg((boolean_T)IBS_Status_02_SigGroup.IBS_AEBActive);
    (void)Rte_Write_RTE_P_ComM_IBSTcsActv_Flg_tec_ComM_IBSTcsActv_Flg((boolean_T)IBS_Status_02_SigGroup.IBS_TCSActive);
    (void)Rte_Write_RTE_P_ComM_IBSVdcActv_Flg_tec_ComM_IBSVdcActv_Flg((boolean_T)IBS_Status_02_SigGroup.IBS_VDCActive);
    (void)Rte_Write_RTE_P_ComM_IBSEPBControllerSts_tec_ComM_IBSEPBControllerSts((uint8) IBS_Status_02_SigGroup.IBS_EPBControllerSts);
	
	//ComM_IBSSts02CRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSSts02CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_02_SigGroup.MessageCounter_0B3,
    IBS_Status_02_SigGroupRxFlg, IBS_Status_02_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts02CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts02CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts02CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSSts02CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts02CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts02CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts02CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrInfo_B.ComM_MonStatIBSSts02CRCDTCErrorInfo
    = ComM_MonStatIBSSts02CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrInfo_B.ComM_MonResIBSSts02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrInfo_B.ComM_ErrStatIBSSts02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrInfo_B.ComM_ErrResIBSSts02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts02CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrInfo_B);
	//ComM_IBSSts02TimeoutDTCInfo_Bus
	boolean_T IBSSts02TimeoutDTCErrorFail;
	boolean_T ComM_MonStatIBSSts02TimeoutDTCErrorInfo;
	
	IBSSts02TimeoutDTCErrorFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_Status_02_SigGroupRxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    IBSSts02TimeoutDTCErrorFail, IBS_Status_02_SigGroupRxFlg,
    CANHandler_ErrResIBSSts02TimeoutDTCMatureTime_CFG, ((uint16_T)
    60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts02TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts02TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_mjqn.ComM_MonStatIBSSts02TimeoutDTCErrorInfo
    = ComM_MonStatIBSSts02TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_mjqn.ComM_MonResIBSSts02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts02TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_mjqn.ComM_ErrStatIBSSts02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts02TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_mjqn.ComM_ErrResIBSSts02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts02TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_mjqn);
	//ComM_IBSSts02CRCInfo_Bus
	boolean_T ComM_MonStatIBSSts02CRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_02_SigGroup.MessageCounter_0B3,
    IBS_Status_02_SigGroupRxFlg, IBS_Status_02_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts02CRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts02CRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts02CRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.IBSSts02CRCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts02CRCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts02CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts02CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts02CRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts02CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts02CRCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_md5j.ComM_MonStatIBSSts02CRCErrorInfo
    = ComM_MonStatIBSSts02CRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_md5j.ComM_MonResIBSSts02CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts02CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_md5j.ComM_ErrStatIBSSts02CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts02CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_md5j.ComM_ErrResIBSSts02CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts02CRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02CRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_md5j);
	//ComM_IBSSts02E2ETimeoutInfo_Bus
	boolean_T ComM_MonStatIBSSts02E2ETimeoutInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!IBS_Status_02_SigGroupRxFlg),
    IBS_Status_02_SigGroupRxFlg, CANHandler_ErrResIBSSts02TimeoutMatureTime_CFG,
    ((uint16_T)60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts02E2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts02E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts02E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts02E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts02E2ETimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_g5ji.ComM_MonStatIBSSts02E2ETimeoutInfo
    = ComM_MonStatIBSSts02E2ETimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_g5ji.ComM_MonResIBSSts02E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts02E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_g5ji.ComM_ErrStatIBSSts02E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts02E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_g5ji.ComM_ErrResIBSSts02E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts02E2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts02MsgErrInfo_Bus_tec_ComM_IBSSts02E2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts02MsgErrI_g5ji);


  /**************************************************IBS_Status_02*******************************************************************/

  /**************************************************IBS_Status_03*******************************************************************/
   // SG_IBS_Status_03_SigGroup IBS_Status_03_SigGroup;
    boolean_T IBS_Status_03_SigGroupRxFlg;
    uint32_T IBS_Status_03_SigGroup_ErrSts;
    real32_T tec_ComM_IBSVehSpd_kph;

      // * SG_IBS_Status_03_SigGroup: Record with elements
      // *   Checksum_0B4 of type Checksum_0B4
      // *   IBS_ABPActive of type IBS_ABPActive
      // *   IBS_ABSActive of type IBS_ABSActive
      // *   IBS_EBDActive of type IBS_EBDActive
      // *   IBS_EBDFault of type IBS_EBDFault
      // *   IBS_SystemStatus of type IBS_SystemStatus
      // *   IBS_TCSFault of type IBS_TCSFault
      // *   IBS_VCU_DecelerationRequest_Available of type IBS_VCU_DecelerationRequest_Available
      // *   IBS_VehicleSpeed of type IBS_VehicleSpeed_1
      // *   MessageCounter_0B4 of type MessageCounter_0B4
      // *   IBS_DTCFault of type IBS_DTCfault
      // *   IBS_VehicleSpeedValid of type IBS_VehiclespeedValid
    IBS_Status_03_SigGroupRxFlg = Rte_IsUpdated_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup();
    
    IBS_Status_03_SigGroup_ErrSts = E2EPW_Read_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup(&IBS_Status_03_SigGroup);

    tec_ComM_IBSVehSpd_kph = CtAp_CANHandler_ATOM_SignalRead((real32_T)IBS_Status_03_SigGroup.IBS_VehicleSpeed,CANHandler_Resolution_005625, CANHandler_Offest_0);

    (void)Rte_Write_RTE_P_ComM_IBSSysStsInfo_tec_ComM_IBSSysStsInfo((uint8_T)IBS_Status_03_SigGroup.IBS_SystemStatus);
    (void)Rte_Write_RTE_P_ComM_EBDFltStsInfo_tec_ComM_EBDFltStsInfo((uint8_T)IBS_Status_03_SigGroup.IBS_EBDFault);
    (void)Rte_Write_RTE_P_ComM_IBSAbpActv_Flg_tec_ComM_IBSAbpActv_Flg((boolean_T)IBS_Status_03_SigGroup.IBS_ABPActive);
    (void)Rte_Write_RTE_P_ComM_IBSVehSpdVld_Flg_tec_ComM_IBSVehSpdVld_Flg((boolean_T)IBS_Status_03_SigGroup.IBS_VehicleSpeedValid);
    (void)Rte_Write_RTE_P_ComM_IBSDecelReqAvl_Enum_tec_ComM_IBSDecelReqAvl_Enum((uint8_T)IBS_Status_03_SigGroup.IBS_VCU_DecelerationRequest_Available);
    (void)Rte_Write_RTE_P_ComM_IBSVehSpd_kph_tec_ComM_IBSVehSpd_kph(tec_ComM_IBSVehSpd_kph);
    (void)Rte_Write_RTE_P_ComM_IBSTcsFltSts_Flg_tec_ComM_IBSTcsFltSts_Flg((boolean_T)IBS_Status_03_SigGroup.IBS_TCSFault);
    (void)Rte_Write_RTE_P_ComM_IBSDtcFltSts_tec_ComM_IBSDtcFltSts((boolean_T)IBS_Status_03_SigGroup.IBS_DTCFault);


	
	//ComM_IBSSts03CRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSSts03CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_03_SigGroup.MessageCounter_0B4,
    IBS_Status_03_SigGroupRxFlg, IBS_Status_03_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts03CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts03CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts03CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSSts03CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts03CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts03CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts03CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts03CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts03CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts03CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrInfo_B.ComM_MonStatIBSSts03CRCDTCErrorInfo
    = ComM_MonStatIBSSts03CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrInfo_B.ComM_MonResIBSSts03CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts03CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrInfo_B.ComM_ErrStatIBSSts03CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts03CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrInfo_B.ComM_ErrResIBSSts03CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts03CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrInfo_B);
	//ComM_IBSSts03TimeoutDTCInfo_Bus
	boolean_T IBSSts03TimeoutDTCErrorFail;
	boolean_T ComM_MonStatIBSSts03TimeoutDTCErrorInfo;
	
	IBSSts03TimeoutDTCErrorFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_Status_03_SigGroupRxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    IBSSts03TimeoutDTCErrorFail, IBS_Status_03_SigGroupRxFlg,
    CANHandler_ErrResIBSSts03TimeoutDTCMatureTime_CFG, ((uint16_T)
    60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts03TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts03TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts03TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts03TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts03TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_nfe5.ComM_MonStatIBSSts03TimeoutDTCErrorInfo
    = ComM_MonStatIBSSts03TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_nfe5.ComM_MonResIBSSts03TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts03TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_nfe5.ComM_ErrStatIBSSts03TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts03TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_nfe5.ComM_ErrResIBSSts03TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts03TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_nfe5);
	//ComM_IBSSts03CRCInfo_Bus
	boolean_T ComM_MonStatIBSSts03CRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_03_SigGroup.MessageCounter_0B4,
    IBS_Status_03_SigGroupRxFlg, IBS_Status_03_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts03CRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts03CRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts03CRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.IBSSts03CRCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts03CRCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts03CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts03CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts03CRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts03CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts03CRCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_pcua.ComM_MonStatIBSSts03CRCErrorInfo
    = ComM_MonStatIBSSts03CRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_pcua.ComM_MonResIBSSts03CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts03CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_pcua.ComM_ErrStatIBSSts03CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts03CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_pcua.ComM_ErrResIBSSts03CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts03CRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03CRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_pcua);
	//ComM_IBSSts03E2ETimeoutInfo_Bus
	boolean_T ComM_MonStatIBSSts03E2ETimeoutInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!IBS_Status_03_SigGroupRxFlg),
    IBS_Status_03_SigGroupRxFlg, CANHandler_ErrResIBSSts03TimeoutMatureTime_CFG,
    ((uint16_T)60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts03E2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts03E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts03E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts03E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts03E2ETimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_kbvu.ComM_MonStatIBSSts03E2ETimeoutInfo
    = ComM_MonStatIBSSts03E2ETimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_kbvu.ComM_MonResIBSSts03E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts03E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_kbvu.ComM_ErrStatIBSSts03E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts03E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_kbvu.ComM_ErrResIBSSts03E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts03E2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts03MsgErrInfo_Bus_tec_ComM_IBSSts03E2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts03MsgErrI_kbvu);

  /**************************************************IBS_Status_03*******************************************************************/

  
   /**************************************************IBS_Status_05*******************************************************************/
    
	//ComErr
	boolean_T IBS_Status_05_SigGroupRxFlg;
   
    uint32_T IBS_Status_05_SigGroup_ErrSts;
	
	IBS_Status_05_SigGroupRxFlg = Rte_IsUpdated_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup();
    IBS_Status_05_SigGroup_ErrSts = E2EPW_Read_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup(&IBS_Status_05_SigGroup);
    

    (void)Rte_Write_RTE_P_ComM_IBSSUBEPBWrkSts_tec_ComM_IBSSUBEPBWrkSts((uint8_T) IBS_Status_05_SigGroup.IBS_SUBEPBworkingSts);
    (void)Rte_Write_RTE_P_ComM_IBSSUBEPBControllerSts_tec_ComM_IBSSUBEPBControllerSts((uint8_T) IBS_Status_05_SigGroup.IBS_SUBEPBControllerSts);
	
	//ComM_IBSSts05CRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSSts05CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_05_SigGroup.MessageCounter_0BB,
    IBS_Status_05_SigGroupRxFlg, IBS_Status_05_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts05CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts05CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts05CRCDTCErrorInteral);
	
    CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSSts05CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts05CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts05CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts05CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrInfo_B.ComM_MonStatIBSSts05CRCDTCErrorInfo
    = ComM_MonStatIBSSts05CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrInfo_B.ComM_MonResIBSSts05CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrInfo_B.ComM_ErrStatIBSSts05CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrInfo_B.ComM_ErrResIBSSts05CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrInfo_B);
	//ComM_IBSSts05TimeoutDTCInfo_Bus
	boolean_T ComM_MonStatIBSSts05TimeoutDTCErrorInfo;
	boolean_T IBSSts05TimeoutDTCErrorFail;
	
	IBSSts05TimeoutDTCErrorFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_Status_05_SigGroupRxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    IBSSts05TimeoutDTCErrorFail, IBS_Status_05_SigGroupRxFlg,
    CANHandler_ErrResIBSSts05TimeoutDTCMatureTime_CFG, ((uint16_T)
    60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts05TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts05TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_d4oo.ComM_MonStatIBSSts05TimeoutDTCErrorInfo
    = ComM_MonStatIBSSts05TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_d4oo.ComM_MonResIBSSts05TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_d4oo.ComM_ErrStatIBSSts05TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_d4oo.ComM_ErrResIBSSts05TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_d4oo);
	//ComM_IBSSts05TimeoutInfo_Bus
	boolean_T IBSSts05TimeoutFail;
	boolean_T ComM_MonStatIBSSts05TimeoutInfo;
	
	IBSSts05TimeoutFail=(LvMgmt_KL15ActSts_Flg&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!IBS_Status_05_SigGroupRxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    IBSSts05TimeoutFail, (!IBSSts05TimeoutFail),
    CANHandler_ErrResIBSSts05TimeoutMatureTime_CFG, ((uint16_T)
    60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts05TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts05Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_bpyo.ComM_MonStatIBSSts05TimeoutInfo
    = ComM_MonStatIBSSts05TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_bpyo.ComM_MonResIBSSts05TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_bpyo.ComM_ErrStatIBSSts05TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_bpyo.ComM_ErrResIBSSts05TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_bpyo);
	//ComM_IBSSts05CRCInfo_Bus
	boolean_T ComM_MonStatIBSSts05CRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_05_SigGroup.MessageCounter_0BB,
    IBS_Status_05_SigGroupRxFlg, IBS_Status_05_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts05CRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts05CRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts05CRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.IBSSts05CRCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts05CRCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts05CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05CRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts05CRCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_pcua.ComM_MonStatIBSSts05CRCErrorInfo
    = ComM_MonStatIBSSts05CRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_pcua.ComM_MonResIBSSts05CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_pcua.ComM_ErrStatIBSSts05CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_pcua.ComM_ErrResIBSSts05CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05CRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05CRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_pcua);
	//ComM_IBSSts05E2ETimeoutInfo_Bus
	boolean_T ComM_MonStatIBSSts05E2ETimeoutInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!IBS_Status_05_SigGroupRxFlg),
    IBS_Status_05_SigGroupRxFlg, CANHandler_ErrResIBSSts05E2ETimeoutMatureTime_CFG,
    ((uint16_T)60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts05E2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts05E2ETimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_kbvu.ComM_MonStatIBSSts05E2ETimeoutInfo
    = ComM_MonStatIBSSts05E2ETimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_kbvu.ComM_MonResIBSSts05E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts05E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_kbvu.ComM_ErrStatIBSSts05E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts05E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_kbvu.ComM_ErrResIBSSts05E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts05E2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts05MsgErrInfo_Bus_tec_ComM_IBSSts05E2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts05MsgErrI_kbvu);
    /**************************************************IBS_Status_05*******************************************************************/

    /**************************************************EPS_CONV*******************************************************************/
        real32_T tec_ComM_EPSSteerGearAg;
        boolean_T EPS_CONV_SigGroupRxFlg;
   
        uint32_T EPS_CONV_SigGroup_ErrSts;
	
        EPS_CONV_SigGroupRxFlg = Rte_IsUpdated_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup();
        EPS_CONV_SigGroup_ErrSts = E2EPW_Read_SG_EPS_CONV_SigGroup_SG_EPS_CONV_SigGroup(&EPS_CONV_SigGroup);


        

        tec_ComM_EPSSteerGearAg = CtAp_CANHandler_ATOM_SignalRead((real32_T)EPS_CONV_SigGroup.EPS_SteeringGearAngle,CANHandler_Resolution_01,CANHandler_Offest_Minus780);

         (void)Rte_Write_RTE_P_ComM_EPSSteerGearAgVld_tec_ComM_EPSSteerGearAgVld((boolean_T) EPS_CONV_SigGroup.EPS_SteeringGearAngleValid);
         (void)Rte_Write_RTE_P_ComM_EPSSteerGearAg_tec_ComM_EPSSteerGearAg(tec_ComM_EPSSteerGearAg);



    
    
	
    /**************************************************EPS_CONV*******************************************************************/
  
  
  
  
  /**************************************************IBS_Torque*******************************************************************/
   // SG_IBS_Torque_SigGroup IBS_Torque_SigGroup;
    boolean_T IBS_Torque_SigGroupRxFlg;
  
    uint32_T IBS_Torque_SigGroup_ErrSts;
    real32_T tec_ComM_IBSApsReqTq_Nm;
    real32_T tec_ComM_IBSRbsReqTq_Nm;
    
    uint8_T tec_ComM_IBSTarGearReq_EnumInit;

    //   * SG_IBS_Torque_SigGroup: Record with elements
    //  *   Checksum_0B9 of type Checksum_0B9
    //  *   IBS_RBSStatus of type IBS_RBSStatus
    //  *   IBS_TargetGearReq of type IBS_TargetGearReq
    //  *   IBS_WLTorqueAPSReq of type IBS_WLTorqueAPSReq
    //  *   IBS_WLTorqueAPSReqValid of type IBS_WLTorqueAPSReqValid
    //  *   IBS_WLTorqueRBSReq of type IBS_WLTorqueRBSReq
    //  *   IBS_WLTorqueRBSReqValid of type IBS_WLTorqueRBSReqValid
    //  *   MessageCounter_0B9 of type MessageCounter_0B9
    IBS_Torque_SigGroupRxFlg = Rte_IsUpdated_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup();
    IBS_Torque_SigGroup_ErrSts = E2EPW_Read_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup(&IBS_Torque_SigGroup);
    
    tec_ComM_IBSApsReqTq_Nm = CtAp_CANHandler_ATOM_SignalRead((real32_T)IBS_Torque_SigGroup.IBS_WLTorqueAPSReq,CANHandler_Resolution_1, CANHandler_Offest_Minus20000);
    tec_ComM_IBSRbsReqTq_Nm = CtAp_CANHandler_ATOM_SignalRead((real32_T)IBS_Torque_SigGroup.IBS_WLTorqueRBSReq,CANHandler_Resolution_1, CANHandler_Offest_Minus20000);

    (void)Rte_Write_RTE_P_ComM_IBSApsReqTq_Nm_tec_ComM_IBSApsReqTq_Nm(tec_ComM_IBSApsReqTq_Nm);
    (void)Rte_Write_RTE_P_ComM_IBSApsReqTqVld_Enum_tec_ComM_IBSApsReqTqVld_Flg((uint8_T)IBS_Torque_SigGroup.IBS_WLTorqueAPSReqValid);
    (void)Rte_Write_RTE_P_ComM_IBSRbsReqTq_Nm_tec_ComM_IBSRbsReqTq_Nm(tec_ComM_IBSRbsReqTq_Nm);
    (void)Rte_Write_RTE_P_ComM_IBSRbsReqTqVld_Enum_tec_ComM_IBSRbsReqTqVld_Enum((uint8_T)IBS_Torque_SigGroup.IBS_WLTorqueRBSReqValid);
    (void)Rte_Write_RTE_P_ComM_IBSRbsSts_Enum_tec_ComM_IBSRbsSts_Enum((uint8_T)IBS_Torque_SigGroup.IBS_RBSStatus);
    
    tec_ComM_IBSTarGearReq_EnumInit = IBS_Torque_SigGroup.IBS_TargetGearReq;

    if(tec_ComM_IBSTarGearReq_EnumInit == CANHandler_u8Zero)
    {
        tec_ComM_IBSTarGearReq_Enum = tec_ComM_IBSTarGearReq_EnumInit;
        tec_ComM_IBSTarGearReqCnt = CANHandler_u8Zero;
    }
    else
    {
        if(IBS_Torque_SigGroupRxFlg)
        {
            if(tec_ComM_IBSTarGearReq_EnumInit == tec_ComM_IBSTarGearReq_EnumOld)
            {
                tec_ComM_IBSTarGearReqCnt++;  
            }
            else
            {
                tec_ComM_IBSTarGearReqCnt = CANHandler_CntOne;    
            }
        }
        if(tec_ComM_IBSTarGearReqCnt>=CANHandler_MaxCntThree)
        {
            tec_ComM_IBSTarGearReqCnt = CANHandler_MaxCntThree;
            tec_ComM_IBSTarGearReq_Enum = tec_ComM_IBSTarGearReq_EnumInit;
        }
    }
    tec_ComM_IBSTarGearReq_EnumOld = tec_ComM_IBSTarGearReq_EnumInit;


    (void)Rte_Write_RTE_P_ComM_IBSTarGearReq_Enum_tec_ComM_IBSTarGearReq_Enum(tec_ComM_IBSTarGearReq_Enum);


	//ComM_IBSTqCRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSTqCRCDTCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Torque_SigGroup.MessageCounter_0B9,
    IBS_Torque_SigGroupRxFlg, IBS_Torque_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_3), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSTqCRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSTqCRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSTqCRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSTqCRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSTqCRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSTqCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSTqCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSTqCRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSTqCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSTqCRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_Bus_.ComM_MonStatIBSTqCRCDTCErrorInfo
    = ComM_MonStatIBSTqCRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_Bus_.ComM_MonResIBSTqCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSTqCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_Bus_.ComM_ErrStatIBSTqCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSTqCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_Bus_.ComM_ErrResIBSTqCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSTqCRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_Bus_);
	//ComM_IBSTqTimeoutDTCInfo_Bus
	boolean_T IBSTqTimeoutDTCErrorFail;
	boolean_T ComM_MonStatIBSTqTimeoutDTCErrorInfo;
	
	IBSTqTimeoutDTCErrorFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_Torque_SigGroupRxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    IBSTqTimeoutDTCErrorFail, IBS_Torque_SigGroupRxFlg,
    CANHandler_ErrResIBSTqTimeoutDTCMatureTime_CFG, ((uint16_T)
    60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSTqTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSTqTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSTqTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSTqTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSTqTimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_lcqz.ComM_MonStatIBSTqTimeoutDTCErrorInfo
    = ComM_MonStatIBSTqTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_lcqz.ComM_MonResIBSTqTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSTqTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_lcqz.ComM_ErrStatIBSTqTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSTqTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_lcqz.ComM_ErrResIBSTqTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSTqTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqTimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_lcqz);
	//ComM_IBSTqCRCInfo_Bus
	boolean_T ComM_MonStatIBSTqCRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Torque_SigGroup.MessageCounter_0B9,
    IBS_Torque_SigGroupRxFlg, IBS_Torque_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_3), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSTqCRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSTqCRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSTqCRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.IBSTqCRCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSTqCRCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSTqCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSTqCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSTqCRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSTqCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSTqCRCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_cn5e.ComM_MonStatIBSTqCRCErrorInfo
    = ComM_MonStatIBSTqCRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_cn5e.ComM_MonResIBSTqCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSTqCRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_cn5e.ComM_ErrStatIBSTqCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSTqCRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_cn5e.ComM_ErrResIBSTqCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSTqCRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqCRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_cn5e);
	//ComM_IBSTqE2ETimeoutInfo_Bus
    boolean_T ComM_MonStatIBSTqE2ETimeoutInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!IBS_Torque_SigGroupRxFlg),
    IBS_Torque_SigGroupRxFlg, CANHandler_ErrResIBSTqTimeoutMatureTime_CFG,
    ((uint16_T)60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSTqE2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSTqE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSTqE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSTqE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSTqE2ETimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_coib.ComM_MonStatIBSTqE2ETimeoutInfo
    = ComM_MonStatIBSTqE2ETimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_coib.ComM_MonResIBSTqE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSTqE2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_coib.ComM_ErrStatIBSTqE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSTqE2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_coib.ComM_ErrResIBSTqE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSTqE2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSTqMsgErrInfo_Bus_tec_ComM_IBSTqE2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSTqMsgErrInfo_coib);
	
    
  /**************************************************IBS_Torque*******************************************************************/

  /**************************************************MCU_02*******************************************************************/
    SG_MCU_02_SigGroup MCU_02_SigGroup;
    // * SG_MCU_02_SigGroup: Record with elements
    //  *   MCU_BDmpCActv of type MCU_BDmpCActv
    //  *   MCU_DmpCTrqCurr of type MCU_DmpCTrqCurr_1
    //  *   MCU_FunctionStatus of type MCU_FunctionStatus
    //  *   MCU_Isd of type MCU_Isd_1
    //  *   MCU_Isq of type MCU_Isq_1
    //  *   MCU_OfsAl of type MCU_OfsAl_1
    //  *   MCU_StGateDrv of type MCU_StGateDrv
    //  *   MCU_VCUWorkMode of type MCU_VCUWorkMode_2
    (void)Rte_Read_SG_MCU_02_SigGroup_SG_MCU_02_SigGroup(&MCU_02_SigGroup);

    (void)Rte_Write_RTE_P_ComM_MCUWrkMod_Enum_tec_ComM_MCUWrkMod_Enum((uint8_T)MCU_02_SigGroup.MCU_VCUWorkMode);

  /**************************************************MCU_02*******************************************************************/

  /**************************************************IBS_APS*******************************************************************/
  //  SG_IBS_APS_SigGroup IBS_APS_SigGroup;
    boolean_T tec_ComM_IBSApsTqActv_Flg;
    

    //      * SG_IBS_APS_SigGroup: Record with elements
    //  *   IBS_APSTrqReqActive of type IBS_APSTrqReqActive
    //  *   Checksum_0B7 of type Checksum_0B7_1
    //  *   IBS_APS_Avl of type IBS_APS_Avl
    //  *   IBS_APSComfortAvl of type IBS_APSComfortAvl
    //  *   IBS_APSCrlReqEcho of type IBS_APSCrlReqEcho
    //  *   IBS_APSEmergenyAvl of type IBS_APSEmergenyAvl
    //  *   IBS_APSModeEcho of type IBS_APSModeEcho
    //  *   IBS_BrakeTypEcho of type IBS_BrakeTypEcho
    //  *   MessageCounter_0B7 of type MessageCounter_0B7_1
	
	boolean_T IBS_APS_SigGroupRxFlg;
    uint32_T IBS_APS_SigGroup_ErrSts;

    IBS_APS_SigGroupRxFlg = Rte_IsUpdated_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup();
    IBS_APS_SigGroup_ErrSts = E2EPW_Read_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup(&IBS_APS_SigGroup);
    

    (void)E2EPW_Read_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup(&IBS_APS_SigGroup);

    tec_ComM_IBSApsTqActv_Flg = IBS_APS_SigGroup.IBS_APSTrqReqActive;

    (void)Rte_Write_RTE_P_ComM_IBSApsTqActv_Flg_tec_ComM_IBSApsTqActv_Flg(tec_ComM_IBSApsTqActv_Flg);
//ComM_IBS_APSCRCDTCInfo_Bus
	//E2E
	boolean_T ComM_MonStatIBSAPSCRCDTCErrorInfo;	 

	CtAp_CANHandler_E2ECfm(IBS_APS_SigGroup.MessageCounter_0B7,
    IBS_APS_SigGroupRxFlg, IBS_APS_SigGroup_ErrSts,
	LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
	CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
	&CtAp_CANHandler_ARID_DEF.IBSAPSCRCDTCErrorFail,
	&CtAp_CANHandler_ARID_DEF.IBSAPSCRCDTCErrorPass,
	&CtAp_CANHandler_ARID_DEF.IBSAPSCRCDTCE2ECfmInteral);
  
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
	CtAp_CANHandler_ARID_DEF.IBSAPSCRCDTCErrorFail,
	CtAp_CANHandler_ARID_DEF.IBSAPSCRCDTCErrorPass, ((uint16_T)
	CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
	CANHandler_Cycle20ms), &ComM_MonStatIBSAPSCRCDTCErrorInfo,
	&CtAp_CANHandler_ARID_DEF.ComM_MonResIBSAPSCRCDTCErrorInfo,
	&CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSAPSCRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSAPSCRCDTCErrorInfo,
	&CtAp_CANHandler_ARID_DEF.IBSAPSCRCDTC_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMsgErrI.ComM_MonStatIBSAPSCRCDTCErrorInfo
	= ComM_MonStatIBSAPSCRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMsgErrI.ComM_MonResIBSAPSCRCDTCErrorInfo
	= CtAp_CANHandler_ARID_DEF.ComM_MonResIBSAPSCRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMsgErrI.ComM_ErrStatIBSAPSCRCDTCErrorInfo
	= CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSAPSCRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMsgErrI.ComM_ErrResIBSAPSCRCDTCErrorInfo
	= CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSAPSCRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSCRCDTCInfo_Bus
	(&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMsgErrI);
  //ComM_IBSAPSTimeoutDTCInfo_Bus
	boolean_T ComM_MonStatIBSAPSTimeoutDTCErrorInfo;	
	boolean_T IBSAPSTimeoutDTCSet;
	
	IBSAPSTimeoutDTCSet = (LvMgmt_KL15ActSts_Flg &&
	(IBS_APS_SigGroupRxFlg != true));
  
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
	IBSAPSTimeoutDTCSet, IBS_APS_SigGroupRxFlg,
	((uint16_T)500), ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms), &ComM_MonStatIBSAPSTimeoutDTCErrorInfo,
	&CtAp_CANHandler_ARID_DEF.ComM_MonResIBSAPSTimeoutDTCErrorInfo,
	&CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSAPSTimeoutDTCErrorInfo,
	&CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSAPSTimeoutDTCErrorInfo,
	&CtAp_CANHandler_ARID_DEF.IBSAPSTimeoutDTC_U16ErrorHandInteral);  

	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMs_mrkf.ComM_MonStatIBSAPSTimeoutDTCErrorInfo
	= ComM_MonStatIBSAPSTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMs_mrkf.ComM_MonResIBSAPSTimeoutDTCErrorInfo
	= CtAp_CANHandler_ARID_DEF.ComM_MonResIBSAPSTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMs_mrkf.ComM_ErrStatIBSAPSTimeoutDTCErrorInfo
	= CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSAPSTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMs_mrkf.ComM_ErrResIBSAPSTimeoutDTCErrorInfo
	= CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSAPSTimeoutDTCErrorInfo;

	(void)Rte_Write_RTE_P_ComM_IBSAPSMsgErrInfo_Bus_tec_ComM_IBSAPSTimeoutDTCInfo_Bus
	(&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSAPSMs_mrkf);	
	
	
	

  /**************************************************IBS_APS*******************************************************************/

  /**************************************************IBS_Status_06*******************************************************************/
  //  SG_IBS_Status_06_SigGroup IBS_Status_06_SigGroup;
    uint32_T IBS_Status_06_SigGroup_ErrSts;
    boolean_T IBS_Status_06_SigGroup_RxFlg;


    //      * SG_IBS_Status_06_SigGroup: Record with elements
    //  *   Checksum_0BC of type Checksum_0BC_1
    //  *   IBS_AVHSts of type IBS_AVHSts
    //  *   IBS_BrakeFluidWarning of type IBS_BrakeFluidWarning
    //  *   IBS_EPBFailureStatus of type IBS_EPBFailureStatus
    //  *   IBS_ESClampdisplay of type IBS_ESClampdisplay
    //  *   IBS_ESCOffSts of type IBS_ESCOffSts
    //  *   IBS_FactoryMode of type IBS_FactoryMode
    //  *   IBS_HBAActive of type IBS_HBAActive
    //  *   IBS_HDCSts of type IBS_HDCSts
    //  *   IBS_MaintenaceMode of type IBS_MaintenaceMode
    //  *   IBS_RollerbenchMode of type IBS_RollerbenchMode
    //  *   IBS_RWUActive of type IBS_RWUActive
    //  *   IBS_RWUAvailable of type IBS_RWUAvailable
    //  *   MessageCounter_0BC of type MessageCounter_0BC_1

    IBS_Status_06_SigGroup_RxFlg = Rte_IsUpdated_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup();
    IBS_Status_06_SigGroup_ErrSts = E2EPW_Read_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup(&IBS_Status_06_SigGroup);
   

    (void)Rte_Write_RTE_P_ComM_BrkFldWarnStsInfo_tec_ComM_BrkFldWarnStsInfo((uint8_T)IBS_Status_06_SigGroup.IBS_BrakeFluidWarning);
    (void)Rte_Write_RTE_P_ComM_IBSAvhSts_Enum_tec_ComM_IBSAvhSts_Enum((uint8_T)IBS_Status_06_SigGroup.IBS_AVHSts);
    (void)Rte_Write_RTE_P_ComM_IBSEscOffSts_Enum_tec_ComM_IBSEscOffSts_Enum((uint8_T)IBS_Status_06_SigGroup.IBS_ESCOffSts);
    (void)Rte_Write_RTE_P_ComM_IBSHdcSts_Enum_tec_ComM_IBSHdcSts_Enum((uint8_T)IBS_Status_06_SigGroup.IBS_HDCSts);
    (void)Rte_Write_RTE_P_ComM_IBSRwuActv_Flg_tec_ComM_IBSRwuActv_Flg((boolean_T)IBS_Status_06_SigGroup.IBS_RWUActive);
    (void)Rte_Write_RTE_P_ComM_RollrBenchModInfo_tec_ComM_RollrBenchModInfo((uint8_T)IBS_Status_06_SigGroup.IBS_RollerbenchMode);
	
	//ComM_IBSSts06CRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSSts06CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(IBS_Status_06_SigGroup.MessageCounter_0BC,
    IBS_Status_06_SigGroup_RxFlg, IBS_Status_06_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts06CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts06CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts06CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSSts06CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts06CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts06CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts06CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts06CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts06CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts06CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrInfo_B.ComM_MonStatIBSSts06CRCDTCErrorInfo
    = ComM_MonStatIBSSts06CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrInfo_B.ComM_MonResIBSSts06CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts06CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrInfo_B.ComM_ErrStatIBSSts06CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts06CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrInfo_B.ComM_ErrResIBSSts06CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts06CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06CRCDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrInfo_B);
	//ComM_IBSSts06TimeoutDTCInfo_Bus
	boolean_T IBSSts06TimeoutDTCErrorFail;
	boolean_T ComM_MonStatIBSSts06TimeoutDTCErrorInfo;
	
	IBSSts06TimeoutDTCErrorFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_Status_06_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    IBSSts06TimeoutDTCErrorFail, IBS_Status_06_SigGroup_RxFlg,
    CANHandler_ErrResIBSSts06TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts06TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts06TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts06TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts06TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts06TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrI_nozs.ComM_MonStatIBSSts06TimeoutDTCErrorInfo
    = ComM_MonStatIBSSts06TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrI_nozs.ComM_MonResIBSSts06TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts06TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrI_nozs.ComM_ErrStatIBSSts06TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts06TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrI_nozs.ComM_ErrResIBSSts06TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts06TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts06MsgErrInfo_Bus_tec_ComM_IBSSts06TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts06MsgErrI_nozs);


  /**************************************************IBS_Status_06*******************************************************************/

  /**************************************************IBS_Status_01*******************************************************************/
   // SG_IBS_Status_01_SigGroup IBS_Status_01_SigGroup;
    uint32_T IBS_Status_01_SigGroup_ErrSts;
    boolean_T IBS_Status_01_SigGroup_RxFlg;
    
    real32_T tec_ComM_IBSPlgrPrs_Bar;
    real32_T tec_ComM_IBSPlgrPrs_mm;
    // * SG_IBS_Status_01_SigGroup: Record with elements
    //  *   Checksum_0B2 of type Checksum_0B2_3
    //  *   IBS_PlungerPressure of type IBS_PlungerPressure_3
    //  *   MessageCounter_0B2 of type MessageCounter_0B2_3
    //  *   IBS_BrakePedalStatus of type IBS_BrakepedalStatus
    //  *   IBS_BrakePedalStatusValid of type IBS_BrakepedalStatusValid
    //  *   IBS_BrakePushrodStroke of type IBS_BrakePushrodStroke_2
    //  *   IBS_MasterCylinderPressure of type IBS_MasterCylinderPressure_2
    IBS_Status_01_SigGroup_RxFlg = Rte_IsUpdated_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup();
    IBS_Status_01_SigGroup_ErrSts =E2EPW_Read_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup(&IBS_Status_01_SigGroup);
   

    tec_ComM_IBSPlgrPrs_Bar = CtAp_CANHandler_ATOM_SignalRead((real32_T)IBS_Status_01_SigGroup.IBS_PlungerPressure,CANHandler_Resolution_01, CANHandler_Offest_Minus5);
    tec_ComM_IBSPlgrPrs_mm = CtAp_CANHandler_ATOM_SignalRead((real32_T)IBS_Status_01_SigGroup.IBS_BrakePushrodStroke,CANHandler_Resolution_0015625, CANHandler_Offest_Minus5);

    (void)Rte_Write_RTE_P_ComM_IBSBrkSts_Enum_tec_ComM_IBSBrkSts_Enum((uint8_T)IBS_Status_01_SigGroup.IBS_BrakePedalStatus);
    (void)Rte_Write_RTE_P_ComM_IBSBrkStsVld_Flg_tec_ComM_IBSBrkStsVld_Flg((uint8_T)IBS_Status_01_SigGroup.IBS_BrakePedalStatusValid);
    (void)Rte_Write_RTE_P_ComM_IBSPlgrPrs_Bar_tec_ComM_IBSPlgrPrs_Bar(tec_ComM_IBSPlgrPrs_Bar);
    (void)Rte_Write_RTE_P_ComM_IBSPlgrPrs_mm_tec_ComM_IBSPlgrPrs_mm(tec_ComM_IBSPlgrPrs_mm);


	
	//ComM_IBSSts01CRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSSts01CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_01_SigGroup.MessageCounter_0B2,
    IBS_Status_01_SigGroup_RxFlg, IBS_Status_01_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts01CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts01CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts01CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSSts01CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts01CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts01CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts01CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrInfo_B.ComM_MonStatIBSSts01CRCDTCErrorInfo
    = ComM_MonStatIBSSts01CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrInfo_B.ComM_MonResIBSSts01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrInfo_B.ComM_ErrStatIBSSts01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrInfo_B.ComM_ErrResIBSSts01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts01CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrInfo_B);
	//ComM_IBSSts01TimeoutDTCInfo_Bus
	boolean_T IBSSts01TimeoutDTCErrorFail;
	boolean_T ComM_MonStatIBSSts01TimeoutDTCErrorInfo;
	
	IBSSts01TimeoutDTCErrorFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_Status_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    IBSSts01TimeoutDTCErrorFail, IBS_Status_01_SigGroup_RxFlg,
    CANHandler_ErrResIBSSts01TimeoutDTCMatureTime_CFG, ((uint16_T)
    60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts01TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts01TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_cm20.ComM_MonStatIBSSts01TimeoutDTCErrorInfo
    = ComM_MonStatIBSSts01TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_cm20.ComM_MonResIBSSts01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_cm20.ComM_ErrStatIBSSts01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_cm20.ComM_ErrResIBSSts01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts01TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_cm20);
	//ComM_IBSSts01CRCInfo_Bus
	boolean_T ComM_MonStatIBSSts01CRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_Status_01_SigGroup.MessageCounter_0B2,
    IBS_Status_01_SigGroup_RxFlg, IBS_Status_01_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSSts01CRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSSts01CRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSSts01CRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.IBSSts01CRCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSSts01CRCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSSts01CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts01CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts01CRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts01CRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts01CRCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_goau.ComM_MonStatIBSSts01CRCErrorInfo
    = ComM_MonStatIBSSts01CRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_goau.ComM_MonResIBSSts01CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts01CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_goau.ComM_ErrStatIBSSts01CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts01CRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_goau.ComM_ErrResIBSSts01CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts01CRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01CRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_goau);
	//ComM_IBSSts01E2ETimeoutInfo_Bus
	boolean_T ComM_MonStatIBSSts01E2ETimeoutInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!IBS_Status_01_SigGroup_RxFlg),
    IBS_Status_01_SigGroup_RxFlg, CANHandler_ErrResIBSSts01TimeoutMatureTime_CFG,
    ((uint16_T)60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSSts01E2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts01E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts01E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts01E2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSSts01E2ETimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_o0z2.ComM_MonStatIBSSts01E2ETimeoutInfo
    = ComM_MonStatIBSSts01E2ETimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_o0z2.ComM_MonResIBSSts01E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSSts01E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_o0z2.ComM_ErrStatIBSSts01E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSSts01E2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_o0z2.ComM_ErrResIBSSts01E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSSts01E2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSSts01MsgErrInfo_Bus_tec_ComM_IBSSts01E2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSSts01MsgErrI_o0z2);
	
  /**************************************************IBS_Status_01*******************************************************************/
  /**************************************************IBS_WheelSpeed_01*******************************************************************/
    SG_IBS_WheelSpeed_01_SigGroup IBS_WheelSpeed_01_SigGroup;
    boolean_T IBS_WheelSpeed_01_SigGroup_RxFlg;

    uint32_T IBS_WheelSpeed_01_SigGroup_ErrSts;


    IBS_WheelSpeed_01_SigGroup_RxFlg = Rte_IsUpdated_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup();
    IBS_WheelSpeed_01_SigGroup_ErrSts = E2EPW_Read_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup(&IBS_WheelSpeed_01_SigGroup);
    

    // * SG_IBS_WheelSpeed_01_SigGroup: Record with elements
    // *   Checksum_0B0 of type Checksum_0B0_1
    // *   IBS_FLMovingDirection of type IBS_FLMovingDirection
    // *   IBS_FLWheelSpeed_Fault of type IBS_FLWheelSpeed_Fault
    // *   IBS_FRMovingDirection of type IBS_FRMovingDirection
    // *   IBS_FRWheelSpeedFault of type IBS_FRWheelSpeedFault
    // *   MessageCounter_0B0 of type MessageCounter_0B0_1

    (void)Rte_Write_RTE_P_ComM_IBSFLMovgDir_Enum_tec_ComM_IBSFLMovgDir_Enum((uint8_T)IBS_WheelSpeed_01_SigGroup.IBS_FLMovingDirection);
    (void)Rte_Write_RTE_P_ComM_IBSFRMovgDir_Enum_tec_ComM_IBSFRMovgDir_Enum((uint8_T)IBS_WheelSpeed_01_SigGroup.IBS_FRMovingDirection);
	
	//ComM_IBSWhlSpd01CRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSWhlSpd01CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(IBS_WheelSpeed_01_SigGroup.MessageCounter_0B0,
    IBS_WheelSpeed_01_SigGroup_RxFlg, IBS_WheelSpeed_01_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd01CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd01CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd01CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSWhlSpd01CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSWhlSpd01CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSWhlSpd01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSWhlSpd01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSWhlSpd01CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSWhlSpd01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd01CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgErrInf.ComM_MonStatIBSWhlSpd01CRCDTCErrorInfo
    = ComM_MonStatIBSWhlSpd01CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgErrInf.ComM_MonResIBSWhlSpd01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSWhlSpd01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgErrInf.ComM_ErrStatIBSWhlSpd01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSWhlSpd01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgErrInf.ComM_ErrResIBSWhlSpd01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSWhlSpd01CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgErrInf);
	//ComM_IBSWhlSpd01TimeoutDTCInfo_Bus
	boolean_T IBSWhlSpd01TimeoutFail;
	boolean_T ComM_MonStatIBSWhlSpd01TimeoutInfo;
	
	IBSWhlSpd01TimeoutFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_WheelSpeed_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    IBSWhlSpd01TimeoutFail, IBS_WheelSpeed_01_SigGroup_RxFlg,
    CANHandler_ErrResIBSWhlSpd01TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSWhlSpd01TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSWhlSpd01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSWhlSpd01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSWhlSpd01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd01Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgE_cfok.ComM_MonStatIBSWhlSpd01TimeoutInfo
    = ComM_MonStatIBSWhlSpd01TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgE_cfok.ComM_MonResIBSWhlSpd01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSWhlSpd01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgE_cfok.ComM_ErrStatIBSWhlSpd01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSWhlSpd01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgE_cfok.ComM_ErrResIBSWhlSpd01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSWhlSpd01TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSWhlSpd01MsgErrInfo_Bus_tec_ComM_IBSWhlSpd01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd01MsgE_cfok);

  /**************************************************IBS_WheelSpeed_01*******************************************************************/

  /**************************************************IBS_WheelSpeed_02*******************************************************************/
   // SG_IBS_WheelSpeed_02_SigGroup IBS_WheelSpeed_02_SigGroup;
    uint32_T IBS_WheelSpeed_02_SigGroup_ErrSts;
    boolean_T IBS_WheelSpeed_02_SigGroup_RxFlg;
    real32_T tec_ComM_IBSRLSpd_kph;
    real32_T tec_ComM_IBSRRSpd_kph;



    //  * SG_IBS_WheelSpeed_02_SigGroup: Record with elements
    //  *   Checksum_0B1 of type Checksum_0B1_1
    //  *   IBS_RLMovingDirection of type IBS_RLMovingDirection
    //  *   IBS_RLWheelSpeed of type IBS_RLWheelSpeed_1
    //  *   IBS_RLWheelSpeed_Fault of type IBS_RLWheelSpeed_Fault
    //  *   IBS_RRMovingDirection of type IBS_RRMovingDirection
    //  *   IBS_RRWheelSpeed of type IBS_RRWheelSpeed_1
    //  *   IBS_RRWheelSpeed_Fault of type IBS_RRWheelSpeed_Fault
    //  *   MessageCounter_0B1 of type MessageCounter_0B1_1
    IBS_WheelSpeed_02_SigGroup_RxFlg = Rte_IsUpdated_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup();
    IBS_WheelSpeed_02_SigGroup_ErrSts = E2EPW_Read_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup(&IBS_WheelSpeed_02_SigGroup);
    

    tec_ComM_IBSRLSpd_kph = CtAp_CANHandler_ATOM_SignalRead((real32_T)IBS_WheelSpeed_02_SigGroup.IBS_RLWheelSpeed,CANHandler_Resolution_005625, CANHandler_Offest_0);
    tec_ComM_IBSRRSpd_kph = CtAp_CANHandler_ATOM_SignalRead((real32_T)IBS_WheelSpeed_02_SigGroup.IBS_RRWheelSpeed,CANHandler_Resolution_005625, CANHandler_Offest_0);

    (void)Rte_Write_RTE_P_ComM_IBSRLMovgDir_Enum_tec_ComM_IBSRLMovgDir_Enum((uint8_T)IBS_WheelSpeed_02_SigGroup.IBS_RLMovingDirection);
    (void)Rte_Write_RTE_P_ComM_IBSRLSpdVld_Flg_tec_ComM_IBSRLSpdVld_Flg((boolean_T)IBS_WheelSpeed_02_SigGroup.IBS_RLWheelSpeed_Fault);
    (void)Rte_Write_RTE_P_ComM_IBSRRMovgDir_Enum_tec_ComM_IBSRRMovgDir_Enum((uint8_T)IBS_WheelSpeed_02_SigGroup.IBS_RRMovingDirection);
    (void)Rte_Write_RTE_P_ComM_IBSRRSpdVld_Flg_tec_ComM_IBSRRSpdVld_Flg((boolean_T)IBS_WheelSpeed_02_SigGroup.IBS_RRWheelSpeed_Fault);
    (void)Rte_Write_RTE_P_ComM_IBSRLSpd_kph_tec_ComM_IBSRLSpd_kph(tec_ComM_IBSRLSpd_kph);
    (void)Rte_Write_RTE_P_ComM_IBSRRSpd_kph_tec_ComM_IBSRRSpd_kph(tec_ComM_IBSRRSpd_kph);
	
	//ComM_IBSWhlSpd02CRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSWhlSpd02CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(IBS_WheelSpeed_02_SigGroup.MessageCounter_0B1,
    IBS_WheelSpeed_02_SigGroup_RxFlg, IBS_WheelSpeed_02_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd02CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd02CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd02CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSWhlSpd02CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSWhlSpd02CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSWhlSpd02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSWhlSpd02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSWhlSpd02CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSWhlSpd02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd02CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgErrInf.ComM_MonStatIBSWhlSpd02CRCDTCErrorInfo
    = ComM_MonStatIBSWhlSpd02CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgErrInf.ComM_MonResIBSWhlSpd02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSWhlSpd02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgErrInf.ComM_ErrStatIBSWhlSpd02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSWhlSpd02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgErrInf.ComM_ErrResIBSWhlSpd02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSWhlSpd02CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgErrInf);
	//ComM_IBSWhlSpd02TimeoutDTCInfo_Bus
	boolean_T IBSWhlSpd02TimeoutFail;
	boolean_T ComM_MonStatIBSWhlSpd02TimeoutInfo;
	
	IBSWhlSpd02TimeoutFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_WheelSpeed_02_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    IBSWhlSpd02TimeoutFail, IBS_WheelSpeed_02_SigGroup_RxFlg,
    CANHandler_ErrResIBSWhlSpd02TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSWhlSpd02TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSWhlSpd02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSWhlSpd02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSWhlSpd02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSWhlSpd02Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgE_gukf.ComM_MonStatIBSWhlSpd02TimeoutInfo
    = ComM_MonStatIBSWhlSpd02TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgE_gukf.ComM_MonResIBSWhlSpd02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSWhlSpd02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgE_gukf.ComM_ErrStatIBSWhlSpd02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSWhlSpd02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgE_gukf.ComM_ErrResIBSWhlSpd02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSWhlSpd02TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSWhlSpd02MsgErrInfo_Bus_tec_ComM_IBSWhlSpd02TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSWhlSpd02MsgE_gukf);

  /**************************************************IBS_WheelSpeed_02*******************************************************************/

  /**************************************************IBS_ACC*******************************************************************/
   // SG_IBS_ACC_SigGroup IBS_ACC_SigGroup;
    uint32_T IBS_ACC_SigGroup_ErrSts;
    boolean_T IBS_ACC_SigGroup_RxFlg;
    real32_T tec_ComM_IBSVlcReqTq_Nm;



    //  * SG_IBS_ACC_SigGroup: Record with elements
    //  *   Checksum_0B8 of type Checksum_0B8
    //  *   IBS_CddActive of type IBS_CddActive
    //  *   IBS_CddAvailable of type IBS_CddAvailable
    //  *   IBS_CddError of type IBS_CddError
    //  *   IBS_VehicleStandstill of type IBS_VehicleStandstill
    //  *   IBS_VehicleStandstill_Valid of type IBS_VehicleStandstill_Valid
    //  *   IBS_VlcActive of type IBS_VlcActive
    //  *   IBS_VlcAvalible of type IBS_VlcAvalible
    //  *   IBS_VlcError of type IBS_VlcError
    //  *   IBS_WLTorqueVLCReq of type IBS_WLTorqueVLCReq
    //  *   IBS_WLTorqueVLCReqValid of type IBS_WLTorqueVLCReqValid
    //  *   MessageCounter_0B8 of type MessageCounter_0B8

    IBS_ACC_SigGroup_RxFlg = Rte_IsUpdated_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup();
    IBS_ACC_SigGroup_ErrSts = E2EPW_Read_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup(&IBS_ACC_SigGroup);
    

    tec_ComM_IBSVlcReqTq_Nm = CtAp_CANHandler_ATOM_SignalRead((real32_T)IBS_ACC_SigGroup.IBS_WLTorqueVLCReq,CANHandler_Resolution_1, CANHandler_Offest_Minus20000);

    (void)Rte_Write_RTE_P_ComM_IBSCddActvInfo_tec_ComM_IBSCddActvInfo((boolean_T)IBS_ACC_SigGroup.IBS_CddActive);
    (void)Rte_Write_RTE_P_ComM_IBSVlcActv_Flg_tec_ComM_IBSVlcActv_Flg((boolean_T)IBS_ACC_SigGroup.IBS_VlcActive);
    (void)Rte_Write_RTE_P_ComM_IBSVlcReqTqVld_Flg_tec_ComM_IBSVlcReqTqVld_Flg((boolean_T)IBS_ACC_SigGroup.IBS_WLTorqueVLCReqValid);
    (void)Rte_Write_RTE_P_ComM_IBSVlcReqTq_Nm_tec_ComM_IBSVlcReqTq_Nm(tec_ComM_IBSVlcReqTq_Nm);
	
	//ComM_IBSACCCRCDTCInfo_Bus
	boolean_T ComM_MonStatIBSACCCRCDTCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_ACC_SigGroup.MessageCounter_0B8,
    IBS_ACC_SigGroup_RxFlg, IBS_ACC_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSACCCRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSACCCRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSACCCRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.IBSACCCRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSACCCRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSACCCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSACCCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSACCCRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSACCCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSACCCRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInfo_Bus.ComM_MonStatIBSACCCRCDTCErrorInfo
    = ComM_MonStatIBSACCCRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInfo_Bus.ComM_MonResIBSACCCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSACCCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInfo_Bus.ComM_ErrStatIBSACCCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSACCCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInfo_Bus.ComM_ErrResIBSACCCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSACCCRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInfo_Bus);
	//ComM_IBSACCTimeoutDTCInfo_Bus
	boolean_T IBSACCTimeoutDTCErrorFail;
	boolean_T ComM_MonStatIBSACCTimeoutDTCErrorInfo;
	
	IBSACCTimeoutDTCErrorFail=(LvMgmt_KL15ActSts_Flg&&(!IBS_ACC_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    IBSACCTimeoutDTCErrorFail, IBS_ACC_SigGroup_RxFlg,
    CANHandler_ErrResIBSACCTimeoutMatureTime_CFG, ((uint16_T)60U),
    ((uint16_T)CANHandler_Cycle20ms), &ComM_MonStatIBSACCTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSACCTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSACCTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSACCTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSACCTimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_o22i.ComM_MonStatIBSACCTimeoutDTCErrorInfo
    = ComM_MonStatIBSACCTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_o22i.ComM_MonResIBSACCTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSACCTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_o22i.ComM_ErrStatIBSACCTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSACCTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_o22i.ComM_ErrResIBSACCTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSACCTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCTimeoutDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_o22i);
	//ComM_IBSACCCRCInfo_Bus
	boolean_T ComM_MonStatIBSACCCRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(IBS_ACC_SigGroup.MessageCounter_0B8,
    IBS_ACC_SigGroup_RxFlg, IBS_ACC_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_9), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.IBSACCCRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.IBSACCCRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.IBSACCCRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.IBSACCCRCErrorFail,
    CtAp_CANHandler_ARID_DEF.IBSACCCRCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatIBSACCCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSACCCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSACCCRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSACCCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.IBSACCCRCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_ci2x.ComM_MonStatIBSACCCRCErrorInfo
    = ComM_MonStatIBSACCCRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_ci2x.ComM_MonResIBSACCCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSACCCRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_ci2x.ComM_ErrStatIBSACCCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSACCCRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_ci2x.ComM_ErrResIBSACCCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSACCCRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCCRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_ci2x);
	//ComM_IBSACCE2ETimeoutInfo_Bus
	boolean_T ComM_MonStatIBSACCE2ETimeoutInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!IBS_ACC_SigGroup_RxFlg),
    IBS_ACC_SigGroup_RxFlg, CANHandler_ErrResIBSACCTimeoutMatureTime_CFG,
    ((uint16_T)60U), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatIBSACCE2ETimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResIBSACCE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSACCE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSACCE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.IBSACCE2ETimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_fpgz.ComM_MonStatIBSACCE2ETimeoutInfo
    = ComM_MonStatIBSACCE2ETimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_fpgz.ComM_MonResIBSACCE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResIBSACCE2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_fpgz.ComM_ErrStatIBSACCE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatIBSACCE2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_fpgz.ComM_ErrResIBSACCE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResIBSACCE2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_IBSACCMsgErrInfo_Bus_tec_ComM_IBSACCE2ETimeoutInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IBSACCMsgErrInf_fpgz);

  /**************************************************IBS_ACC*******************************************************************/
  /**************************************************SGW_PT_01*******************************************************************/
    SG_SGW_PT_01_SigGroup SGW_PT_01_SigGroup;
    boolean_T SGW_PT_01_SigGroup_RxFlg;
    uint8_T tec_ComM_IVIReqElectcLock_Enum;
    uint8_T tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum;
    uint8_T tec_ComM_IVIChrgCmd_Enum;
 


    //  * SG_SGW_PT_01_SigGroup: Record with elements
    //  *   IVI_AppointChargeCmd of type IVI_AppointChargeCmd_2
    //  *   IVI_ForwardVmaxlimitSw of type IVI_ForwardVmaxlimitSw_2
    //  *   IVI_LockACPlug of type IVI_LockACPlug_2
    //  *   IVI_LV_LimitPop of type IVI_LV_LimitPop
    SGW_PT_01_SigGroup_RxFlg = Rte_IsUpdated_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup();
    (void)Rte_Read_SG_SGW_PT_01_SigGroup_SG_SGW_PT_01_SigGroup(&SGW_PT_01_SigGroup);


    // tec_ComM_IVIReqElectcLock_Enum = CtAp_CANHandl_ATOM_CESignalRead(SGW_PT_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_PT_01_SigGroup.IVI_LockACPlug, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIReqElectcLock_Enum_CE_Delay);

    // tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum = CtAp_CANHandl_ATOM_CESignalRead(SGW_PT_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_PT_01_SigGroup.IVI_ForwardVmaxlimitSw, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_CE_Delay);
   

    // tec_ComM_IVIChrgCmd_Enum = CtAp_CANHandl_ATOM_CESignalRead(SGW_PT_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_PT_01_SigGroup.IVI_AppointChargeCmd, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIChrgCmd_Enum_CE_Delay);

     tec_ComM_IVIChrgCmd_Enum = CtAp_CANHandl_ATOM_EventSignalRead(SGW_PT_01_SigGroup_RxFlg,
                                                                    (uint8_T)SGW_PT_01_SigGroup.IVI_AppointChargeCmd, 
                                                                    CANHandler_Cycle100ms,
                                                                    &CtAp_CANHandler_EventDelayStruct.tec_ComM_IVIChrgCmd_Enum_Event_Delay);
                                                                    
     tec_ComM_IVIReqElectcLock_Enum = CtAp_CANHandl_ATOM_EventSignalRead(SGW_PT_01_SigGroup_RxFlg,
                                                                    (uint8_T)SGW_PT_01_SigGroup.IVI_LockACPlug, 
                                                                    CANHandler_Cycle100ms,
                                                                    &CtAp_CANHandler_EventDelayStruct.tec_ComM_IVIReqElectcLock_Enum_Event_Delay);
     tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum =  (uint8_T)SGW_PT_01_SigGroup.IVI_ForwardVmaxlimitSw, 

  (void)Rte_Write_RTE_P_ComM_IVILVLimPopInfo_tec_ComM_IVILVLimPopInfo((uint8_T)SGW_PT_01_SigGroup.IVI_LV_LimitPop);

  (void)Rte_Write_RTE_P_ComM_IVIReqElectcLock_Enum_tec_ComM_IVIReqElectcLock_Enum(tec_ComM_IVIReqElectcLock_Enum);
  (void)Rte_Write_RTE_P_ComM_IVIFwdMaxVehSpdLmtSwt_Enum_tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum(tec_ComM_IVIFwdMaxVehSpdLmtSwt_Enum);
  (void)Rte_Write_RTE_P_ComM_IVIChrgCmd_Enum_tec_ComM_IVIChrgCmd_Enum(tec_ComM_IVIChrgCmd_Enum);
  
  

  /**************************************************SGW_PT_01*******************************************************************/

  /**************************************************SGW_VCU_01*******************************************************************/
    SG_SGW_VCU_01_SigGroup SGW_VCU_01_SigGroup;
    boolean_T SGW_VCU_01_SigGroup_RxFlg;
    uint8_T tec_ComM_IVIDchaSwtSts_Enum;
    uint8_T tec_ComM_IVIDrvModSet_Enum;
    uint8_T tec_ComM_IVIFwdVehSpdAllwd_Enum;
    uint8_T tec_ComM_IVIMaxChrgSOCSet_pct;
    uint8_T tec_ComM_IVIMinDchaSOCSet_Enum;
    


    //      * SG_SGW_VCU_01_SigGroup: Record with elements
    //  *   IVI_DriveModeSet of type IVI_DriveModeSet_2
    //  *   IVI_DschrgOnOffSet of type IVI_DschrgOnOffSet_2
    //  *   IVI_ForwardVmaxAllowed of type IVI_ForwardVmaxAllowed_2
    //  *   IVI_MaxChrgSocSet of type IVI_MaxChrgSocSet_2
    //  *   IVI_V2LidisSet of type IVI_V2LidisSet_2
    SGW_VCU_01_SigGroup_RxFlg = Rte_IsUpdated_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup();
    (void)Rte_Read_SG_SGW_VCU_01_SigGroup_SG_SGW_VCU_01_SigGroup(&SGW_VCU_01_SigGroup);


    // tec_ComM_IVIDchaSwtSts_Enum = CtAp_CANHandl_ATOM_CESignalRead(SGW_VCU_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_VCU_01_SigGroup.IVI_DschrgOnOffSet, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIChrgCmd_Enum_CE_Delay);
    tec_ComM_IVIDchaSwtSts_Enum = CtAp_CANHandl_ATOM_EventSignalRead(SGW_VCU_01_SigGroup_RxFlg,
                                                                    (uint8_T)SGW_VCU_01_SigGroup.IVI_DschrgOnOffSet, 
                                                                    CANHandler_Cycle100ms,
                                                                    &CtAp_CANHandler_EventDelayStruct.tec_ComM_IVIDchaCmd_Enum_Event_Delay);

    // tec_ComM_IVIDrvModSet_Enum = CtAp_CANHandl_ATOM_CESignalRead(SGW_VCU_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_VCU_01_SigGroup.IVI_DriveModeSet, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIDrvModSet_Enum_CE_Delay);
    // tec_ComM_IVIFwdVehSpdAllwd_Enum = CtAp_CANHandl_ATOM_CESignalRead(SGW_VCU_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_VCU_01_SigGroup.IVI_ForwardVmaxAllowed, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIFwdVehSpdAllwd_Enum_CE_Delay);
    //  tec_ComM_IVIMaxChrgSOCSet_pct = CtAp_CANHandl_ATOM_CESignalRead(SGW_VCU_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_VCU_01_SigGroup.IVI_MaxChrgSocSet, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIMaxChrgSOCSet_pct_CE_Delay);
    tec_ComM_IVIMaxChrgSOCSet_pct =  (uint8_T)SGW_VCU_01_SigGroup.IVI_MaxChrgSocSet;

    //  tec_ComM_IVIMinDchaSOCSet_Enum = CtAp_CANHandl_ATOM_CESignalRead(SGW_VCU_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_VCU_01_SigGroup.IVI_V2LidisSet, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIMinDchaSOCSet_Enum_CE_Delay);
    tec_ComM_IVIMinDchaSOCSet_Enum =  (uint8_T)SGW_VCU_01_SigGroup.IVI_V2LidisSet;
    tec_ComM_IVIDrvModSet_Enum =  (uint8_T)SGW_VCU_01_SigGroup.IVI_DriveModeSet;
    tec_ComM_IVIFwdVehSpdAllwd_Enum = (uint8_T)SGW_VCU_01_SigGroup.IVI_ForwardVmaxAllowed;

    (void)Rte_Write_RTE_P_ComM_IVIDchaSwtSts_Enum_tec_ComM_IVIDchaSwtSts_Enum(tec_ComM_IVIDchaSwtSts_Enum);
    (void)Rte_Write_RTE_P_ComM_IVIDrvModSet_Enum_tec_ComM_IVIDrvModSet_Enum(tec_ComM_IVIDrvModSet_Enum);
    (void)Rte_Write_RTE_P_ComM_IVIFwdVehSpdAllwd_Enum_tec_ComM_IVIFwdVehSpdAllwd_Enum(tec_ComM_IVIFwdVehSpdAllwd_Enum);
    (void)Rte_Write_RTE_P_ComM_IVIMaxChrgSOCSet_pct_tec_ComM_IVIMaxChrgSOCSet_pct(tec_ComM_IVIMaxChrgSOCSet_pct);
    (void)Rte_Write_RTE_P_ComM_IVIMinDchaSOCSet_Enum_tec_ComM_IVIMinDchaSOCSet_Enum(tec_ComM_IVIMinDchaSOCSet_Enum);

  /**************************************************SGW_VCU_01*******************************************************************/

  /**************************************************SGW_IBS_01*******************************************************************/
   // SG_SGW_IBS_01_SigGroup SGW_IBS_01_SigGroup;
    boolean_T SGW_IBS_01_SigGroup_RxFlg;
    uint8_T tec_ComM_IVIEnaBrkCmpMod_Enum;
    uint8_T tec_ComM_IVIRgnLvlSet_Enum;



    //    * SG_SGW_IBS_01_SigGroup: Record with elements
    //  *   Checksum_231 of type Checksum_234
    //  *   IVI_BrakeCompensateCmd of type IVI_BrakeCompensateCmd
    //  *   IVI_CRLevelSet of type IVI_CRLevelSet
    //  *   MessageCounter_231 of type MessageCounter_234
     SGW_IBS_01_SigGroup_RxFlg = Rte_IsUpdated_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup();
     (void)Rte_Read_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup(&SGW_IBS_01_SigGroup);

    // tec_ComM_IVIEnaBrkCmpMod_Enum = CtAp_CANHandl_ATOM_CESignalRead(SGW_IBS_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_IBS_01_SigGroup.IVI_BrakeCompensateCmd, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIEnaBrkCmpMod_Enum_CE_Delay);

    tec_ComM_IVIEnaBrkCmpMod_Enum =  (uint8_T)SGW_IBS_01_SigGroup.IVI_BrakeCompensateCmd;

    // tec_ComM_IVIRgnLvlSet_Enum = CtAp_CANHandl_ATOM_CESignalRead(SGW_IBS_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SGW_IBS_01_SigGroup.IVI_CRLevelSet, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_IVIRgnLvlSet_Enum_CE_Delay);
    tec_ComM_IVIRgnLvlSet_Enum =  (uint8_T)SGW_IBS_01_SigGroup.IVI_CRLevelSet;

    (void)Rte_Write_RTE_P_ComM_IVIEnaBrkCmpMod_Enum_tec_ComM_IVIEnaBrkCmpMod_Enum(tec_ComM_IVIEnaBrkCmpMod_Enum);
    (void)Rte_Write_RTE_P_ComM_IVIRgnLvlSet_Enum_tec_ComM_IVIRgnLvlSet_Enum(tec_ComM_IVIRgnLvlSet_Enum);

  /**************************************************SGW_IBS_01*******************************************************************/

  /**************************************************IVI_01*******************************************************************/
    //SG_IVI_01_SigGroup IVI_01_SigGroup;
    uint32_T IVI_01_SigGroup_ErrSts;
    boolean_T IVI_01_SigGroup_RxFlg;
    uint8_T tec_ComM_IVIGearReq_Enum;


    // * SG_IVI_01_SigGroup: Record with elements
    // *   Checksum_2B6 of type Checksum_2B6
    // *   IVI_GearRequest of type IVI_GearRequest
    // *   MessageCounter_2B6 of type MessageCounter_2B6

    IVI_01_SigGroup_RxFlg = Rte_IsUpdated_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup();

    (void)Rte_Read_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup(&IVI_01_SigGroup);

    tec_ComM_IVIGearReq_Enum = CtAp_CANHandl_ATOM_CESignalRead(IVI_01_SigGroup_RxFlg,
                                                                    (uint8_T)IVI_01_SigGroup.IVI_GearRequest, 
                                                                    CANHandler_Cycle100ms,
                                                                    &CtAp_CANHandler_DelayStruct.tec_ComM_IVIGearReq_Enum_CE_Delay);


    (void)Rte_Write_RTE_P_ComM_IVIGearReq_Enum_tec_ComM_IVIGearReq_Enum(tec_ComM_IVIGearReq_Enum);
	/*
	//ComM_IVI01CRCDTCInfo_Bus
	CtAp_CANHandler_E2ECfm(IVI_01_SigGroup.MessageCounter_2B6,
    rtb_TmpSignalConversionAtS_p5r0, rtb_TmpSignalConversionAtSG_IVI,
    rtb_LogicalOperator1_b214, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_3), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(rtb_RelationalOperator_hstp,
    CtAp_CANHandler_ARID_DEF.CaculateFailCmpl_lfkx,
    CtAp_CANHandler_ARID_DEF.LogicalOperator3_hwgs, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &rtb_LogicalOperator1_ipz4,
    &CtAp_CANHandler_ARID_DEF.Switch_oyt5,
    &CtAp_CANHandler_ARID_DEF.Switch8_n14t, &rtb_Switch6_b1a2,
    &CtAp_CANHandler_ARID_DEF.ACUInfoTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_Bus_.ComM_MonStatIVI01CRCDTCErrorInfo
    = rtb_LogicalOperator1_ipz4;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_Bus_.ComM_MonResIVI01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.Switch_oyt5;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_Bus_.ComM_ErrStatIVI01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.Switch8_n14t;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_Bus_.ComM_ErrResIVI01CRCDTCErrorInfo
    = false;
	
	(void)Rte_Write_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_Bus_);
	//ComM_IVI01TimeoutDTCInfo_Bus
	CtAp_CANHandler_ATOM_U16Err(rtb_RelationalOperator_hstp,
    rtb_LogicalOperator_pkpq, rtb_LogicalOperator1_k04a,
    CANHandler_ErrResIVI01TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &rtb_LogicalOperator1_ipz4, &CtAp_CANHandler_ARID_DEF.Switch_lnz4,
    &CtAp_CANHandler_ARID_DEF.Switch8_bnnx,
    &CtAp_CANHandler_ARID_DEF.Switch6_etca,
    &CtAp_CANHandler_ARID_DEF.ACUInfoTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_mak1.ComM_MonStatIVI01TimeoutDTCErrorInfo
    = rtb_LogicalOperator1_ipz4;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_mak1.ComM_MonResIVI01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.Switch_lnz4;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_mak1.ComM_ErrStatIVI01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.Switch8_bnnx;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_mak1.ComM_ErrResIVI01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.Switch6_etca;
	
	(void)Rte_Write_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_mak1);
	//ComM_IVI01CRCInfo_Bus
	CtAp_CANHandler_E2ECfm(IVI_01_SigGroup.MessageCounter_2B6,
    rtb_TmpSignalConversionAtS_p5r0, rtb_TmpSignalConversionAtSG_IVI,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_3), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.CaculateFailCmpl_i50p,
    CtAp_CANHandler_ARID_DEF.LogicalOperator3_ai2o, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &rtb_LogicalOperator1_ipz4,
    &CtAp_CANHandler_ARID_DEF.Switch_ixr2,
    &CtAp_CANHandler_ARID_DEF.Switch8_i5w5, &rtb_Switch6_fw4s,
    &CtAp_CANHandler_ARID_DEF.ACUInfoTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofnl.ComM_MonStatIVI01CRCErrorInfo
    = rtb_LogicalOperator1_ipz4;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofnl.ComM_MonResIVI01CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.Switch_ixr2;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofnl.ComM_ErrStatIVI01CRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.Switch8_i5w5;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofnl.ComM_ErrResIVI01CRCErrorInfo
    = false;
	
	(void)Rte_Write_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01CRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofnl);
	//ComM_IVI01E2ETimeoutInfo_Bus
	CtAp_CANHandler_E2ETimeoutCfm(rtb_TmpSignalConversionAtS_p5r0,
    &rtb_LogicalOperator1_gzt5, &rtb_LogicalOperator1_ipz4);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, rtb_LogicalOperator1_gzt5,
    rtb_LogicalOperator1_ipz4, CANHandler_ErrResIVI01TimeoutMatureTime_CFG,
    ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &rtb_LogicalOperator_fjx0, &CtAp_CANHandler_ARID_DEF.Switch_pw1g,
    &CtAp_CANHandler_ARID_DEF.Switch8_nhko,
    &CtAp_CANHandler_ARID_DEF.Switch6_cgpx,
    &CtAp_CANHandler_ARID_DEF.ACUInfoTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_nped.ComM_MonStatIVI01E2ETimeoutInfo
    = rtb_LogicalOperator_fjx0;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_nped.ComM_MonResIVI01E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.Switch_pw1g;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_nped.ComM_ErrStatIVI01E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.Switch8_nhko;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_nped.ComM_ErrResIVI01E2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.Switch6_cgpx;
	
	(void)Rte_Write_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01E2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_nped);
	//ComM_IVI01TimeoutInfo_Bus
	rtb_LogicalOperator_gmnx = ((rtb_TmpSignalConversionAtR_dxkd ||
    rtb_TmpSignalConversionAtR_f22n) && rtb_LogicalOperator1_gzt5 &&
    (rtb_TmpSignalConversionAtS_p5r0 != true));
    rtb_LogicalOperator1_bqm4 = !rtb_LogicalOperator_gmnx;
	
	CtAp_CANHandler_ATOM_U16Err(rtb_RelationalOperator_g302,
    rtb_LogicalOperator_gmnx, rtb_LogicalOperator1_bqm4,
    CANHandler_ErrResIVI01TimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle20ms), &rtb_LogicalOperator1_ipz4,
    &CtAp_CANHandler_ARID_DEF.Switch_a0ps,
    &CtAp_CANHandler_ARID_DEF.Switch8_prxg,
    &CtAp_CANHandler_ARID_DEF.Switch6_pc0g,
    &CtAp_CANHandler_ARID_DEF.ACUInfoTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofv1.ComM_MonStatIVI01TimeoutInfo
    = rtb_LogicalOperator1_ipz4;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofv1.ComM_MonResIVI01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.Switch_a0ps;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofv1.ComM_ErrStatIVI01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.Switch8_prxg;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofv1.ComM_ErrResIVI01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.Switch6_pc0g;
	
	(void)Rte_Write_RTE_P_ComM_IVI01MsgErrInfo_Bus_tec_ComM_IVI01TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_IVI01MsgErrInfo_ofv1);
    */
  /**************************************************IVI_01*******************************************************************/

  /**************************************************SGW_01*******************************************************************/
    SG_SGW_01_SigGroup SG_SGW_01_SigGroup;
    boolean_T SG_SGW_01_SigGroup_RxFlg;
    uint8_T tec_ComM_SGWChrgCmd_Enum;
    uint8_T tec_ComM_SGWMaxChrgSOCSet_Enum;
    uint8_T tec_ComM_SGWMinDchaSOCSet_Enum;
    uint8_T tec_ComM_SGWDchaSwtSts;



    // * SG_SGW_01_SigGroup: Record with elements
    // *   SGW_AppointChargeCmd of type SGW_AppointChargeCmd_3
    // *   SGW_ChargeFormSet of type SGW_ChargeFormSet_3
    // *   SGW_LockACPlug of type SGW_LockACPlug
    // *   SGW_TimingChargeSwitchStatus of type SGW_TimingChargeSwitchStatus
    SG_SGW_01_SigGroup_RxFlg = Rte_IsUpdated_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup();
    (void)Rte_Read_SG_SGW_01_SigGroup_SG_SGW_01_SigGroup(&SG_SGW_01_SigGroup);


    // tec_ComM_SGWChrgCmd_Enum = CtAp_CANHandl_ATOM_CESignalRead(SG_SGW_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SG_SGW_01_SigGroup.SGW_AppointChargeCmd, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_SGWChrgCmd_Enum_CE_Delay);
    // tec_ComM_SGWMaxChrgSOCSet_Enum = CtAp_CANHandl_ATOM_CESignalRead(SG_SGW_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SG_SGW_01_SigGroup.SGW_MaxChrgSocSet, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_ComM_SGWMaxChrgSOCSet_Enum_CE_Delay);
    // tec_ComM_SGWMinDchaSOCSet_Enum = CtAp_CANHandl_ATOM_CESignalRead(SG_SGW_01_SigGroup_RxFlg,
    //                                                                 (uint8_T)SG_SGW_01_SigGroup.SGW_V2LidisSet, 
    //                                                                 CANHandler_Cycle100ms,
    //                                                                 &CtAp_CANHandler_DelayStruct.tec_tec_ComM_SGWMinDchaSOCSet_Enum_CE_Delay);
    // tec_ComM_SGWDchaSwtSts = CtAp_CANHandl_ATOM_CESignalRead(SG_SGW_01_SigGroup_RxFlg,
    //                                                                     (uint8_T)SG_SGW_01_SigGroup.SGW_DschrgOnOffSet, 
    //                                                                     CANHandler_Cycle100ms,
    //                                                                     &CtAp_CANHandler_DelayStruct.tec_ComM_SGWDchaSwtSts_CE_Delay);

    tec_ComM_SGWChrgCmd_Enum = CtAp_CANHandl_ATOM_EventSignalRead(SG_SGW_01_SigGroup_RxFlg,
                                                                    (uint8_T)SG_SGW_01_SigGroup.SGW_AppointChargeCmd, 
                                                                    CANHandler_Cycle100ms,
                                                                    &CtAp_CANHandler_EventDelayStruct.tec_ComM_SGWChrgCmd_Enum_Event_Delay);                                                             
    (void)Rte_Write_RTE_P_ComM_SGWChrgCmd_Enum_tec_ComM_SGWChrgCmd_Enum(tec_ComM_SGWChrgCmd_Enum);
    (void)Rte_Write_RTE_P_ComM_ApptChrgMdlSts_Enum_tec_ComM_ApptChrgMdlSts_Enum((uint8_T)SG_SGW_01_SigGroup.SGW_ChargeFormSet);
    (void)Rte_Write_RTE_P_ComM_SGWDchaSwtSts_tec_ComM_SGWDchaSwtSts(tec_ComM_SGWDchaSwtSts);
    // (void)Rte_Write_RTE_P_ComM_SGWMaxChrgSOCSet_Enum_tec_ComM_SGWMaxChrgSOCSet_Enum(tec_ComM_SGWMaxChrgSOCSet_Enum);
    // (void)Rte_Write_RTE_P_ComM_SGWMinDchaSOCSet_Enum_tec_ComM_SGWMinDchaSOCSet_Enum(tec_ComM_SGWMinDchaSOCSet_Enum);





  /**************************************************SGW_01*******************************************************************/

  /**************************************************ACU_02*******************************************************************/
    //SG_ACU_02_SigGroup ACU_02_SigGroup;
    boolean_T ACU_02_SigGroup_RxFlg;
    uint32_T ACU_02_SigGroup_ErrSts;
    real32_T tec_ComM_YRSAx_mps2q;
    boolean_T tec_ComM_YRSAxSts_Flg;
    uint8_T tec_ComM_YRSAxSts;

    //    * SG_ACU_02_SigGroup: Record with elements
    //  *   ACU_LatA of type ACU_LatA
    //  *   ACU_LatAStatus of type ACU_LatAStatus
    //  *   ACU_LgtA of type ACU_LgtA
    //  *   ACU_LgtAStatus of type ACU_LgtAStatus
    //  *   Checksum_0F6 of type Checksum_0F6
    //  *   MessageCounter_0F6 of type MessageCounter_0F6

    ACU_02_SigGroup_RxFlg = Rte_IsUpdated_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup();
   
    ACU_02_SigGroup_ErrSts = E2EPW_Read_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup(&ACU_02_SigGroup);


    tec_ComM_YRSAx_mps2q = CtAp_CANHandler_ATOM_SignalRead((real32_T)ACU_02_SigGroup.ACU_LgtA,CANHandler_Resolution_001, CANHandler_Offest_Minus49d05);
    tec_ComM_YRSAxSts = (uint8_T)ACU_02_SigGroup.ACU_LgtAStatus;;
    (void)Rte_Write_RTE_P_ComM_YRSAx_mps2q_tec_ComM_YRSAx_mps2q(tec_ComM_YRSAx_mps2q);
    (void)Rte_Write_RTE_P_ComM_YRSAxSts_tec_ComM_YRSAxSts(tec_ComM_YRSAxSts);
	//ComM_ACU02CRCDTCInfo_Bus
	boolean_T ComM_MonStatACU02CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(ACU_02_SigGroup.MessageCounter_0F6,
    ACU_02_SigGroup_RxFlg, ACU_02_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.ACU02CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.ACU02CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.ACU02CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.ACU02CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.ACU02CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatACU02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResACU02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU02CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResACU02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ACU02CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Bus_.ComM_MonStatACU02CRCDTCErrorInfo
    = ComM_MonStatACU02CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Bus_.ComM_MonResACU02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResACU02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Bus_.ComM_ErrStatACU02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Bus_.ComM_ErrResACU02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResACU02CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Bus_);
	//ComM_ACU02TimeoutDTCInfo_Bus
	boolean_T ACU02TimeoutDTCFail;
	boolean_T ComM_MonStatACU02TimeoutDTCInfo;
	
	ACU02TimeoutDTCFail=(LvMgmt_KL15ActSts_Flg&&(!ACU_02_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    ACU02TimeoutDTCFail, ACU_02_SigGroup_RxFlg,
    CANHandler_ErrResACU02TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatACU02TimeoutDTCInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResACU02TimeoutDTCInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU02TimeoutDTCInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResACU02TimeoutDTCInfo,
    &CtAp_CANHandler_ARID_DEF.ACU02TimeoutDTC_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_gomr.ComM_MonStatACU02TimeoutDTCInfo
    = ComM_MonStatACU02TimeoutDTCInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_gomr.ComM_MonResACU02TimeoutDTCInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResACU02TimeoutDTCInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_gomr.ComM_ErrStatACU02TimeoutDTCInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU02TimeoutDTCInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_gomr.ComM_ErrResACU02TimeoutDTCInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResACU02TimeoutDTCInfo;
	
	(void)Rte_Write_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_gomr);
	
	//ComM_ACU02TimeoutInfo_Bus
	boolean_T ACU02TimeoutFail;
	boolean_T ComM_MonStatACU02TimeoutInfo;
	
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    (!ACU_02_SigGroup_RxFlg), ACU_02_SigGroup_RxFlg,
    ComM_ErrResACU02TimeoutMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatACU02TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResACU02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResACU02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ACU02Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Time.ComM_MonStatACU02TimeoutInfo
    = ComM_MonStatACU02TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Time.ComM_MonResACU02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResACU02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Time.ComM_ErrStatACU02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Time.ComM_ErrResACU02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResACU02TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_ACU02MsgErrInfo_Bus_tec_ComM_ACU02TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU02MsgErrInfo_Time);



  /**************************************************ACU_02*******************************************************************/

  /**************************************************DCM_FR*******************************************************************/
    SG_DCM_FR_SigGroup DCM_FR_SigGroup;
    boolean_T DCM_FR_SigGroup_RxFlg;


    //  * SG_DCM_FR_SigGroup: Record with elements
    //  *   DCM_FR_DoorFRSts of type DCM_FR_DoorFRSts
    DCM_FR_SigGroup_RxFlg = Rte_IsUpdated_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup();
    (void)Rte_Read_SG_DCM_FR_SigGroup_SG_DCM_FR_SigGroup(&DCM_FR_SigGroup);

    (void)Rte_Write_RTE_P_ComM_DoorFRStsInfo_tec_ComM_DoorFRStsInfo((uint8_T)DCM_FR_SigGroup.DCM_FR_DoorFRSts);

	
	//ComM_DCMFRTimeoutInfo_Bus
	boolean_T DCMFRTimeoutFail;
	boolean_T ComM_MonStatDCMFRTimeoutInfo;
	
	DCMFRTimeoutFail=((CGW_02_SigGroup.CGW_DCM_FRSts)&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!DCM_FR_SigGroup_RxFlg));

	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    DCMFRTimeoutFail, (!DCMFRTimeoutFail),
    CANHandler_ErrResDCMFRTimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle20ms), &ComM_MonStatDCMFRTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFRTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFRTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFRTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.DCMFRTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_Bus_.ComM_MonStatDCMFRTimeoutInfo
    = ComM_MonStatDCMFRTimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_Bus_.ComM_MonResDCMFRTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFRTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_Bus_.ComM_ErrStatDCMFRTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFRTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_Bus_.ComM_ErrResDCMFRTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFRTimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_Bus_);
	//ComM_DCMFRTimeoutDTCInfo_Bus
	boolean_T DCMFRTimeoutDTCFail;
	boolean_T ComM_MonStatDCMFRTimeoutDTCErrorInfo;
	
	DCMFRTimeoutDTCFail=((CGW_02_SigGroup.CGW_DCM_FRSts)&&(!DCM_FR_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    DCMFRTimeoutDTCFail, DCM_FR_SigGroup_RxFlg,
    ((uint16_T)1000), ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatDCMFRTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFRTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFRTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFRTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.DCMFRTimeoutDTC_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_fe3s.ComM_MonStatDCMFRTimeoutDTCErrorInfo
    = ComM_MonStatDCMFRTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_fe3s.ComM_MonResDCMFRTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFRTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_fe3s.ComM_ErrStatDCMFRTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFRTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_fe3s.ComM_ErrResDCMFRTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFRTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_DCMFRMsgErrInfo_Bus_tec_ComM_DCMFRTimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFRMsgErrInfo_fe3s);


  /**************************************************DCM_FR*******************************************************************/

  /**************************************************DCM_RL*******************************************************************/
    SG_DCM_RL_SigGroup DCM_RL_SigGroup;
    boolean_T DCM_RL_SigGroup_RxFlg;
    //     * SG_DCM_RL_SigGroup: Record with elements
    //  *   Checksum_284 of type Checksum_286
    //  *   DCM_RL_DoorRLSts of type DCM_RL_DoorRLSts
    //  *   MessageCounter_284 of type MessageCounter_286
    DCM_RL_SigGroup_RxFlg = Rte_IsUpdated_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup();
    (void)Rte_Read_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup(&DCM_RL_SigGroup);

    (void)Rte_Write_RTE_P_ComM_DoorRLStsInfo_tec_ComM_DoorRLStsInfo((uint8_T)DCM_RL_SigGroup.DCM_RL_DoorRLSts);
	
	//ComM_DCMRLTimeoutInfo_Bus	
	boolean_T DCMRLTimeoutFail;
	boolean_T ComM_MonStatDCMRLTimeoutInfo;
	
	DCMRLTimeoutFail=((CGW_02_SigGroup.CGW_DCM_RLSts)&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!DCM_RL_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    DCMRLTimeoutFail, (!DCMRLTimeoutFail),
    CANHandler_ErrResDCMRLTimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle20ms), &ComM_MonStatDCMRLTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResDCMRLTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMRLTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMRLTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.DCMRLTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_Bus_.ComM_MonStatDCMRLTimeoutInfo
    = ComM_MonStatDCMRLTimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_Bus_.ComM_MonResDCMRLTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResDCMRLTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_Bus_.ComM_ErrStatDCMRLTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMRLTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_Bus_.ComM_ErrResDCMRLTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMRLTimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_Bus_);
	//ComM_DCMRLTimeoutDTCInfo_Bus
	boolean_T DCMRLTimeoutDTCFail;
	boolean_T ComM_MonStatDCMRLTimeoutDTCErrorInfo;
	
	DCMRLTimeoutDTCFail=((CGW_02_SigGroup.CGW_DCM_RLSts)&&(!DCM_RL_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    DCMRLTimeoutDTCFail, DCM_RL_SigGroup_RxFlg,
    ((uint16_T)1000), ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatDCMRLTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResDCMRLTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMRLTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMRLTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.DCMRLTimeoutDTC_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_fe3s.ComM_MonStatDCMRLTimeoutDTCErrorInfo
    = ComM_MonStatDCMRLTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_fe3s.ComM_MonResDCMRLTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResDCMRLTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_fe3s.ComM_ErrStatDCMRLTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMRLTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_fe3s.ComM_ErrResDCMRLTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMRLTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_DCMRLMsgErrInfo_Bus_tec_ComM_DCMRLTimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRLMsgErrInfo_fe3s);

  /**************************************************DCM_RL*******************************************************************/
  /**************************************************DCM_RR*******************************************************************/
  //  SG_DCM_RR_SigGroup DCM_RR_SigGroup;
    boolean_T DCM_RR_SigGroup_RxFlg;
    //  * SG_DCM_RR_SigGroup: Record with elements
    //  *   Checksum_285 of type Checksum_287
    //  *   DCM_RR_DoorRRSts of type DCM_RR_DoorRRSts
    //  *   MessageCounter_285 of type MessageCounter_287
    DCM_RR_SigGroup_RxFlg = Rte_IsUpdated_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup();
    (void)Rte_Read_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup(&DCM_RR_SigGroup);
    (void)Rte_Write_RTE_P_ComM_DoorRRStsInfo_tec_ComM_DoorRRStsInfo((uint8_T)DCM_RR_SigGroup.DCM_RR_DoorRRSts);
	
	//ComM_DCMRRTimeoutInfo_Bus
	boolean_T DCMRRTimeoutFail;
	boolean_T ComM_MonStatDCMRRTimeoutInfo;
	
	DCMRRTimeoutFail=((CGW_02_SigGroup.CGW_DCM_RRSts)&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!DCM_RR_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    DCMRRTimeoutFail, (!DCMRRTimeoutFail),
    CANHandler_ErrResDCMRRTimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle20ms), &ComM_MonStatDCMRRTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResDCMRRTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMRRTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMRRTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.DCMRRTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_Bus_.ComM_MonStatDCMRRTimeoutInfo
    = ComM_MonStatDCMRRTimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_Bus_.ComM_MonResDCMRRTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResDCMRRTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_Bus_.ComM_ErrStatDCMRRTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMRRTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_Bus_.ComM_ErrResDCMRRTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMRRTimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_Bus_);
    //ComM_DCMRRTimeoutDTCInfo_Bus
	boolean_T DCMRRTimeoutDTCFail;
	boolean_T ComM_MonStatDCMRRTimeoutDTCErrorInfo;
	
	DCMRRTimeoutDTCFail=((CGW_02_SigGroup.CGW_DCM_RRSts)&&(!DCM_RR_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    DCMRRTimeoutDTCFail, DCM_RR_SigGroup_RxFlg,
    ((uint16_T)1000), ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatDCMRRTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResDCMRRTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMRRTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMRRTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.DCMRRTimeoutDTC_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_fe3s.ComM_MonStatDCMRRTimeoutDTCErrorInfo
    = ComM_MonStatDCMRRTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_fe3s.ComM_MonResDCMRRTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResDCMRRTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_fe3s.ComM_ErrStatDCMRRTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMRRTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_fe3s.ComM_ErrResDCMRRTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMRRTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_DCMRRMsgErrInfo_Bus_tec_ComM_DCMRRTimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMRRMsgErrInfo_fe3s);

  /**************************************************DCM_RR*******************************************************************/

  /**************************************************ACU_01*******************************************************************/
   // SG_ACU_01_SigGroup ACU_01_SigGroup;
    boolean_T ACU_01_SigGroup_RxFlg;
  
    uint32_T ACU_01_SigGroup_ErrSts;
    real32_T tec_ComM_ACUYawRate;
    //  * SG_ACU_01_SigGroup: Record with elements
    //  *   ACU_YawRate of type ACU_YawRate
    //  *   ACU_YawRateStatus of type ACU_YawRateStatus
    //  *   Checksum_0F5 of type Checksum_0F5
    //  *   MessageCounter_0F5 of type MessageCounter_0F5
    ACU_01_SigGroup_RxFlg =Rte_IsUpdated_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup();
    ACU_01_SigGroup_ErrSts = E2EPW_Read_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup(&ACU_01_SigGroup);
    

    tec_ComM_ACUYawRate = CtAp_CANHandler_ATOM_SignalRead((real32_T)ACU_01_SigGroup.ACU_YawRate,CANHandler_Resolution_001, CANHandler_Offest_Minus300);

    (void)Rte_Write_RTE_P_ComM_ACUYawRate_tec_ComM_ACUYawRate(tec_ComM_ACUYawRate);
	
	//ComM_ACU01CRCDTCInfo_Bus
	boolean_T ComM_MonStatACU01CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(ACU_01_SigGroup.MessageCounter_0F5,
    ACU_01_SigGroup_RxFlg, ACU_01_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.ACU01CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.ACU01CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.ACU01CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.ACU01CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.ACU01CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatACU01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResACU01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU01CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResACU01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ACU01CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_Bus_.ComM_MonStatACU01CRCDTCErrorInfo
    = ComM_MonStatACU01CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_Bus_.ComM_MonResACU01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResACU01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_Bus_.ComM_ErrStatACU01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_Bus_.ComM_ErrResACU01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResACU01CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_Bus_);
	//ComM_ACU01TimeoutDTCInfo_Bus
	boolean_T ACU01TimeoutDTCFail;
	boolean_T ComM_MonStatACU01TimeoutDTCInfo;
	
	ACU01TimeoutDTCFail=(LvMgmt_KL15ActSts_Flg&&(!ACU_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    ACU01TimeoutDTCFail, ACU_01_SigGroup_RxFlg,
    CANHandler_ErrResACU01TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatACU01TimeoutDTCInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResACU01TimeoutDTCInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU01TimeoutDTCInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResACU01TimeoutDTCInfo,
    &CtAp_CANHandler_ARID_DEF.ACU01TimeoutDTC_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_fe3s.ComM_MonStatACU01TimeoutDTCInfo
    = ComM_MonStatACU01TimeoutDTCInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_fe3s.ComM_MonResACU01TimeoutDTCInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResACU01TimeoutDTCInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_fe3s.ComM_ErrStatACU01TimeoutDTCInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatACU01TimeoutDTCInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_fe3s.ComM_ErrResACU01TimeoutDTCInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResACU01TimeoutDTCInfo;
	
	(void)Rte_Write_RTE_P_ComM_ACU01MsgErrInfo_Bus_tec_ComM_ACU01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ACU01MsgErrInfo_fe3s);

  /**************************************************ACU_01*******************************************************************/

  /**************************************************ADCU_APS_01*******************************************************************/

    //   * SG_ADCU_APS_01_SigGroup: Record with elements
    //   *   Checksum_0E4 of type Checksum_0E4_2
    //   *   MessageCounter_0E4 of type MessageCounter_0E4_3
    //   *   ADCU_Parking_Mode of type ADCU_Parking_Mode
  boolean_T ADCU_APS_01_SigGroup_RxFlg;
  uint32_T ADCU_APS_01_SigGroup_ErrSts;

  ADCU_APS_01_SigGroup_RxFlg =Rte_IsUpdated_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup();
  ADCU_APS_01_SigGroup_ErrSts = E2EPW_Read_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup(&ADCU_APS_01_SigGroup);
  
  (void)Rte_Write_RTE_P_ComM_ADCUPrkMod_tec_ComM_ADCUPrkMod((uint8_T)ADCU_APS_01_SigGroup.ADCU_Parking_Mode);

  
    boolean_T ADCU_APS_01_PNCEnable;
	boolean_T ADCUAPS01PNCEnable_Logical;
	
	ADCUAPS01PNCEnable_Logical = ((CGW_02_SigGroup.CGW_ADCUSts)&&ComM_CHCANDTCEnb_Flg);
	
	ADCU_APS_01_PNCEnable = CtAp_CANHandler_ATOM_TimeCnt
    (ADCUAPS01PNCEnable_Logical, ((uint16_T)CANHandler_Cycle20ms),
    CANHandler_PNC14SpcTimeoutEnable_CFG,
    &CtAp_CANHandler_ARID_DEF.ADCU_APS_01_PNCEnableInteral);
  //ComM_ADCUAPS01CRCDTCInfo_Bus
	boolean_T ComM_MonStatADCUAPS01CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(ADCU_APS_01_SigGroup.MessageCounter_0E4,
    ADCU_APS_01_SigGroup_RxFlg, ADCU_APS_01_SigGroup_ErrSts,
    ADCU_APS_01_PNCEnable, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.ADCUAPS01CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.ADCUAPS01CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.ADCUAPS01CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.ADCUAPS01CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.ADCUAPS01CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatADCUAPS01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUAPS01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUAPS01CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUAPS01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ADCUAPS01CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErrInfo_.ComM_MonStatADCUAPS01CRCDTCErrorInfo
    = ComM_MonStatADCUAPS01CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErrInfo_.ComM_MonResADCUAPS01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUAPS01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErrInfo_.ComM_ErrStatADCUAPS01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUAPS01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErrInfo_.ComM_ErrResADCUAPS01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUAPS01CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErrInfo_);
	//ComM_ADCUAPS01TimeoutDTCInfo_Bus
	boolean_T ADCUAPS01TimeoutDTCCfmFail;
	boolean_T ComM_MonStatADCUAPS01TimeoutDTCErrorInfo;
	
	ADCUAPS01TimeoutDTCCfmFail=(ADCU_APS_01_PNCEnable && (!ADCU_APS_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg, ADCUAPS01TimeoutDTCCfmFail,
    ADCU_APS_01_SigGroup_RxFlg,
    ((uint16_T)500), ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatADCUAPS01TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUAPS01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUAPS01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUAPS01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ADCUAPS01TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErr_hyh1.ComM_MonStatADCUAPS01TimeoutDTCErrorInfo
    = ComM_MonStatADCUAPS01TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErr_hyh1.ComM_MonResADCUAPS01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUAPS01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErr_hyh1.ComM_ErrStatADCUAPS01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUAPS01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErr_hyh1.ComM_ErrResADCUAPS01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUAPS01TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ADCUAPS01MsgErrInfo_Bus_tec_ComM_ADCUAPS01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAPS01MsgErr_hyh1);


  /**************************************************ADCU_APS_01*******************************************************************/

  /**************************************************ADCU_AEB_01*******************************************************************/
    //   * SG_ADCU_AEB_01_SigGroup: Record with elements
    //   *   ADCU_AEB_State of type ADCU_AEB_State
    //   *   Checksum_0E2 of type Checksum_0E2_1
    //   *   MessageCounter_0E2 of type MessageCounter_0E2
    boolean_T ADCU_AEB_01_SigGroup_RxFlg;

    uint32_T ADCU_AEB_01_SigGroup_ErrSts;
  
    ADCU_AEB_01_SigGroup_RxFlg = Rte_IsUpdated_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup();
    ADCU_AEB_01_SigGroup_ErrSts = E2EPW_Read_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup(&ADCU_AEB_01_SigGroup);
    

    (void)Rte_Write_RTE_P_ComM_ADCUAEBSt_tec_ComM_ADCUAEBSt((uint8_T)ADCU_AEB_01_SigGroup.ADCU_AEB_State);
	
	
	boolean_T ADCU_AEB_01_PNCEnable;
	boolean_T ADCUAEB01PNCEnable_Logical;
	
	ADCUAEB01PNCEnable_Logical = ((CGW_02_SigGroup.CGW_ADCUSts)&&ComM_CHCANDTCEnb_Flg);
	
	ADCU_AEB_01_PNCEnable = CtAp_CANHandler_ATOM_TimeCnt
    (ADCUAEB01PNCEnable_Logical, ((uint16_T)CANHandler_Cycle20ms),
    CANHandler_PNC14SpcTimeoutEnable_CFG,
    &CtAp_CANHandler_ARID_DEF.ADCU_AEB_01_PNCEnableInteral);
	//ComM_ADCU_AEB_01CRCDTCInfo_Bus
	boolean_T ComM_MonStatADCUAEB01CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(ADCU_AEB_01_SigGroup.MessageCounter_0E2,
    ADCU_AEB_01_SigGroup_RxFlg, ADCU_AEB_01_SigGroup_ErrSts,
    ADCU_AEB_01_PNCEnable, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.ADCUAEB01CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.ADCUAEB01CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.ADCUAEB01CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.ADCUAEB01CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.ADCUAEB01CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle20ms), &ComM_MonStatADCUAEB01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUAEB01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUAEB01CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUAEB01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ADCUAEB01CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErrInfo_.ComM_MonStatADCUAEB01CRCDTCErrorInfo
    = ComM_MonStatADCUAEB01CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErrInfo_.ComM_MonResADCUAEB01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUAEB01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErrInfo_.ComM_ErrStatADCUAEB01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUAEB01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErrInfo_.ComM_ErrResADCUAEB01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUAEB01CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErrInfo_);
	//ComM_ADCUAEB01TimeoutDTCInfo_Bus
	boolean_T ADCUAEB01TimeoutDTCCfmFail;
	boolean_T ComM_MonStatADCUAEB01TimeoutDTCErrorInfo;
	
	ADCUAEB01TimeoutDTCCfmFail=(ADCU_AEB_01_PNCEnable && (!ADCU_AEB_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg, ADCUAEB01TimeoutDTCCfmFail,
    ADCU_AEB_01_SigGroup_RxFlg,
    ((uint16_T)500), ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatADCUAEB01TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUAEB01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUAEB01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUAEB01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ADCUAEB01TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErr_hyh1.ComM_MonStatADCUAEB01TimeoutDTCErrorInfo
    = ComM_MonStatADCUAEB01TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErr_hyh1.ComM_MonResADCUAEB01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUAEB01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErr_hyh1.ComM_ErrStatADCUAEB01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUAEB01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErr_hyh1.ComM_ErrResADCUAEB01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUAEB01TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ADCUAEB01MsgErrInfo_Bus_tec_ComM_ADCUAEB01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUAEB01MsgErr_hyh1);




  /**************************************************ADCU_AEB_01*******************************************************************/
  /**************************************************SG_SGW_17*******************************************************************/

    //   * SG_SGW_17_SigGroup: Record with elements
    //   *   SGW_BLESystemReadyReq of type SGW_BLESystemReadyReq
    SG_SGW_17_SigGroup SGW_17_SigGroup;
	boolean_T SGW_17_SigGroup_RxFlg;
	uint8_T tec_ComM_SGWSysRdyReq;

	SGW_17_SigGroup_RxFlg = Rte_IsUpdated_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup();
    (void)Rte_Read_SG_SGW_17_SigGroup_SG_SGW_17_SigGroup(&SGW_17_SigGroup);


    // tec_ComM_SGWSysRdyReq = CtAp_CANHandl_ATOM_CESignalRead(SGW_17_SigGroup_RxFlg,
    //     (uint8_T)SGW_17_SigGroup.SGW_BLESystemReadyReq, 
    //     CANHandler_Cycle200ms,
    //     &CtAp_CANHandler_DelayStruct.tec_ComM_SGWSysRdyReq_CE_Delay);
    tec_ComM_SGWSysRdyReq = (uint8_T)SGW_17_SigGroup.SGW_BLESystemReadyReq;
    (void)Rte_Write_RTE_P_ComM_SGWSysRdyReq_tec_ComM_SGWSysRdyReq(tec_ComM_SGWSysRdyReq);
	
	//ComM_SGW17TimeoutInfo_Bus
	boolean_T SGW17TimeoutFail;
	boolean_T ComM_MonStatSGW17TimeoutInfo;
	
	SGW17TimeoutFail=((CGW_02_SigGroup.CGW_SGWSts)&&(!ComM_CHCANBusOffInfo_Bus.ComM_ErrResCHCANBusOffInfo)&&(!SGW_17_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    SGW17TimeoutFail, (!SGW17TimeoutFail),
    ((uint16_T)2000), ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle20ms), &ComM_MonStatSGW17TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResSGW17TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGW17TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResSGW17TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.SGW17Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErrInfo_Bus_.ComM_MonStatSGW17TimeoutInfo
    = ComM_MonStatSGW17TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErrInfo_Bus_.ComM_MonResSGW17TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResSGW17TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErrInfo_Bus_.ComM_ErrStatSGW17TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGW17TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErrInfo_Bus_.ComM_ErrResSGW17TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResSGW17TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErrInfo_Bus_);
	//ComM_SGW17TimeoutDTCInfo_Bus
	boolean_T SGW17TimeoutDTCCfmFail;
	boolean_T ComM_MonStatSGW17TimeoutDTCErrorInfo;
	
	SGW17TimeoutDTCCfmFail=((CGW_02_SigGroup.CGW_SGWSts)&& (!SGW_17_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg, SGW17TimeoutDTCCfmFail,
    SGW_17_SigGroup_RxFlg,
    ((uint16_T)2000), ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle20ms),
    &ComM_MonStatSGW17TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResSGW17TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGW17TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResSGW17TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.SGW17TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErr_hyh1.ComM_MonStatSGW17TimeoutDTCErrorInfo
    = ComM_MonStatSGW17TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErr_hyh1.ComM_MonResSGW17TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResSGW17TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErr_hyh1.ComM_ErrStatSGW17TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGW17TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErr_hyh1.ComM_ErrResSGW17TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResSGW17TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_SGW17MsgErrInfo_Bus_tec_ComM_SGW17TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW17MsgErr_hyh1);



  /**************************************************SG_SGW_17*******************************************************************/


  /**************************************************IVI_03*******************************************************************/
   SG_IVI_03_SigGroup IVI_03_SigGroup;
   uint8_T tec_ComM_IVIBuldChkStsInfo;
   (void)Rte_Read_SG_IVI_03_SigGroup_SG_IVI_03_SigGroup(&IVI_03_SigGroup);
  tec_ComM_IVIBuldChkStsInfo = IVI_03_SigGroup.IVI_BulbCheckSts;
   
  (void)Rte_Write_RTE_P_ComM_IVIBuldChkStsInfo_tec_ComM_IVIBuldChkStsInfo(tec_ComM_IVIBuldChkStsInfo);



 /**************************************************IVI_03*******************************************************************/









    tec_ComM_TriggerASWMsgReqInfo_Last = tec_ComM_TriggerASWMsgReqInfo;
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID4 */
void R_CANHandlerOutput_Cyclic_20ms(void)
                             /* Explicit Task: R_CANHandlerOutput_Cyclic_20ms */
{
  /**********************************************************************************************************************
  * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
  * Symbol: R_CANHandler_Cyclic_20ms
  *********************************************************************************************************************/

//   boolean_T tec_ComM_TriggerASWMsgReqInfo;
  (void)Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(&tec_ComM_TriggerASWMsgReqInfo);
  if(1)//(tec_ComM_TriggerASWMsgReqInfo)
  {
    /**************************************************VCU_MCU_05*******************************************************************/
      SG_VCU_MCU_05_SigGroup VCU_MCU_05_SigGroup;
      real32_T tec_TorqPahMgmt_EmacQstyMaxTq_Nm;
      real32_T tec_TorqPahMgmt_EmacQstyMinTq_Nm;
      real32_T tec_ChassisMgmt_CrpCtrlDesTq_Nm;
      real32_T tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm;
        //   * SG_VCU_MCU_05_SigGroup: Record with elements
        //   *   VCU_MaxTorqueGradient of type VCU_MaxTorqueGradient_3
        //   *   VCU_MaxTorqueLimit of type VCU_MaxTorqueLimit_3
        //   *   VCU_MinTorqueLimit of type VCU_MinTorqueLimit_3
        //   *   VCU_CreepTorque of type VCU_CreepTorque_1
        //   *   VCU_SpdLimitActTorque of type VCU_SpdLimitActTorque_1
      (void)Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMaxTq_Nm_tec_TorqPahMgmt_EmacQstyMaxTq_Nm(&tec_TorqPahMgmt_EmacQstyMaxTq_Nm);
      (void)Rte_Read_RTE_R_TorqPahMgmt_EmacQstyMinTq_Nm_tec_TorqPahMgmt_EmacQstyMinTq_Nm(&tec_TorqPahMgmt_EmacQstyMinTq_Nm);
      (void)Rte_Read_RTE_R_ChassisMgmt_CrpCtrlDesTq_Nm_tec_ChassisMgmt_CrpCtrlDesTq_Nm(&tec_ChassisMgmt_CrpCtrlDesTq_Nm);
      (void)Rte_Read_RTE_R_TorqPahMgmt_MaxVehSpdLmtTq_Nm_tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm(&tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm);

      tec_TorqPahMgmt_EmacQstyMaxTq_Nm = CtAp_CANHandler_ATOM_SignalSend(tec_TorqPahMgmt_EmacQstyMaxTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus1023);
      tec_TorqPahMgmt_EmacQstyMinTq_Nm = CtAp_CANHandler_ATOM_SignalSend(tec_TorqPahMgmt_EmacQstyMinTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus1023);
      tec_ChassisMgmt_CrpCtrlDesTq_Nm = CtAp_CANHandler_ATOM_SignalSend(tec_ChassisMgmt_CrpCtrlDesTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus1024);
      tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm = CtAp_CANHandler_ATOM_SignalSend(tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus1024);

      VCU_MCU_05_SigGroup.VCU_MaxTorqueGradient = (VCU_MaxTorqueGradient_3)((uint8_T)CANHandler_u8Zero);
      VCU_MCU_05_SigGroup.VCU_MaxTorqueLimit = (VCU_MaxTorqueLimit_3)tec_TorqPahMgmt_EmacQstyMaxTq_Nm;
      VCU_MCU_05_SigGroup.VCU_MinTorqueLimit = (VCU_MinTorqueLimit_3)tec_TorqPahMgmt_EmacQstyMinTq_Nm;
      VCU_MCU_05_SigGroup.VCU_CreepTorque = (VCU_CreepTorque_1)tec_ChassisMgmt_CrpCtrlDesTq_Nm;
      VCU_MCU_05_SigGroup.VCU_SpdLimitActTorque = (VCU_SpdLimitActTorque_1)tec_TorqPahMgmt_MaxVehSpdLmtTq_Nm;




      (void)Rte_Write_SG_VCU_MCU_05_SigGroup_SG_VCU_MCU_05_SigGroup(&VCU_MCU_05_SigGroup);

    /**************************************************VCU_MCU_05*******************************************************************/

    /**************************************************VCU_AccPedal*******************************************************************/
      SG_VCU_AccPedal_SigGroup VCU_AccPedal_SigGroup;
      real32_T tec_ChassisMgmt_AccrPedlRawPosnInfo;
      boolean_T tec_ChassisMgmt_AccrPedlVld_Flg;
      uint8_T tec_GearMgmt_EPBReq_Enum;
      boolean_T tec_ChassisMgmt_AccrPedlKdStsInfo;
      uint8_T tec_GearMgmt_TarGear_Enum;
      real32_T tec_VehMot_VehSpdABS_kph;
      boolean_T tec_VehMot_VehSpdVld_Flg;
      real32_T tec_ChassisMgmt_VirtAccrPedlPosnInfo;
      boolean_T tec_ChassisMgmt_VirtAccrPedlVldInfo;
      boolean_T tec_ChassisMgmt_IBSVlcReqTqActv_Flg;
      boolean_T tec_ChassisMgmt_IBSVlcReqTqAvl_Flg;
      uint8_T tec_FctSftyMon_EPBReq;
  
      (void)Rte_Read_RTE_R_ChassisMgmt_AccrPedlRawPosnInfo_tec_ChassisMgmt_AccrPedlRawPosnInfo(&tec_ChassisMgmt_AccrPedlRawPosnInfo);
      (void)Rte_Read_RTE_R_ChassisMgmt_AccrPedlVld_Flg_tec_ChassisMgmt_AccrPedlVld_Flg(&tec_ChassisMgmt_AccrPedlVld_Flg);
      (void)Rte_Read_RTE_R_ChassisMgmt_AccrPedlKdStsInfo_tec_ChassisMgmt_AccrPedlKdStsInfo(&tec_ChassisMgmt_AccrPedlKdStsInfo);
      (void)Rte_Read_RTE_R_GearMgmt_TarGear_Enum_tec_GearMgmt_TarGear_Enum(&tec_GearMgmt_TarGear_Enum);
      (void)Rte_Read_RTE_R_VehMot_VehSpdABS_kph_tec_VehMot_VehSpdABS_kph(&tec_VehMot_VehSpdABS_kph);
      (void)Rte_Read_RTE_R_VehMot_VehSpdVld_Flg_tec_VehMot_VehSpdVld_Flg(&tec_VehMot_VehSpdVld_Flg);
      (void)Rte_Read_RTE_R_ChassisMgmt_VirtAccrPedlPosnInfo_tec_ChassisMgmt_VirtAccrPedlPosnInfo(&tec_ChassisMgmt_VirtAccrPedlPosnInfo);
      (void)Rte_Read_RTE_R_ChassisMgmt_VirtAccrPedlVldInfo_tec_ChassisMgmt_VirtAccrPedlVldInfo(&tec_ChassisMgmt_VirtAccrPedlVldInfo);
      (void)Rte_Read_RTE_R_ChassisMgmt_IBSVlcReqTqActv_Flg_tec_ChassisMgmt_IBSVlcReqTqActv_Flg(&tec_ChassisMgmt_IBSVlcReqTqActv_Flg);
      (void)Rte_Read_RTE_R_ChassisMgmt_IBSVlcReqTqAvl_Flg_tec_ChassisMgmt_IBSVlcReqTqAvl_Flg(&tec_ChassisMgmt_IBSVlcReqTqAvl_Flg);
      (void)Rte_Read_RTE_R_FctSftyMon_EPBReq_tec_FctSftyMon_EPBReq(&tec_FctSftyMon_EPBReq);
      tec_GearMgmt_EPBReq_Enum = tec_FctSftyMon_EPBReq;
    
      tec_VehMot_VehSpdABS_kph = CtAp_CANHandler_ATOM_SignalSend(tec_VehMot_VehSpdABS_kph,CANHandler_Resolution_005625, CANHandler_Offest_0);
      tec_ChassisMgmt_VirtAccrPedlPosnInfo = CtAp_CANHandler_ATOM_SignalSend(tec_ChassisMgmt_VirtAccrPedlPosnInfo,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_ChassisMgmt_AccrPedlRawPosnInfo = CtAp_CANHandler_ATOM_SignalSend(tec_ChassisMgmt_AccrPedlRawPosnInfo,CANHandler_Resolution_01,CANHandler_Offest_0);
    
      if(tec_GearMgmt_EPBReq_Enum_Cnt>CANHandler_u8Zero)
      {
        tec_GearMgmt_EPBReq_Enum_Cnt++;
      }
      else
      {
        tec_GearMgmt_EPBReq_Enum_Tx = CANHandler_u8Zero;
      }
      if((tec_GearMgmt_EPBReq_Enum>CANHandler_u8Zero)&&(tec_GearMgmt_EPBReq_Enum_Old != tec_GearMgmt_EPBReq_Enum)&&tec_GearMgmt_EPBReq_Enum_Cnt == CANHandler_u8Zero)
      {
        tec_GearMgmt_EPBReq_Enum_Cnt++;
        tec_GearMgmt_EPBReq_Enum_Tx = tec_GearMgmt_EPBReq_Enum;
      }
      if(tec_GearMgmt_EPBReq_Enum_Cnt>CANHandler_MaxCntThree)
      {
        tec_GearMgmt_EPBReq_Enum_Tx = CANHandler_u8Zero;
        tec_GearMgmt_EPBReq_Enum_Cnt = CANHandler_u8Zero;
      }
      VCU_AccPedal_SigGroup.VCU_EPBReq = (VCU_EPBReq)tec_GearMgmt_EPBReq_Enum_Tx;
      tec_GearMgmt_EPBReq_Enum_Old = tec_GearMgmt_EPBReq_Enum;

        //   * SG_VCU_AccPedal_SigGroup: Record with elements
        //   *   Checksum_0D2 of type Checksum_0D2_2
        //   *   MessageCounter_0D2 of type MessageCounter_0D2_2
        //   *   VCU_AccelerationPedal of type VCU_AccelerationPedal_2
        //   *   VCU_AccelerationPedalValid of type VCU_AccelerationPedalValid
        //   *   VCU_EPBReq of type VCU_EPBReq
        //   *   VCU_Kickdown of type VCU_Kickdown
        //   *   VCU_TargetGear of type VCU_TargetGear
        //   *   VCU_VehicleSpeed of type VCU_VehicleSpeed_2
        //   *   VCU_VehicleSpeedValid of type VCU_VehicleSpeedValid
        //   *   VCU_VLCTorqueRequestActive of type VCU_VLCTorqueRequestActive
        //   *   VCU_VLCTorqueRequestAvailable of type VCU_VLCTorqueRequestAvailable
        //   *   VCU_VirtualACPedal of type VCU_VirtualACPedal_1
        //   *   VCU_VirtualACPedalValid of type VCU_VirtualACPedalValid
      VCU_AccPedal_SigGroup.Checksum_0D2 = (Checksum_0D2_2) ((uint8_T)CANHandler_u8Zero);
      VCU_AccPedal_SigGroup.MessageCounter_0D2 = (MessageCounter_0D2_2) ((uint8_T)CANHandler_u8Zero);
      VCU_AccPedal_SigGroup.VCU_AccelerationPedal = (VCU_AccelerationPedal_2)tec_ChassisMgmt_AccrPedlRawPosnInfo;
      VCU_AccPedal_SigGroup.VCU_AccelerationPedalValid = (VCU_AccelerationPedalValid)tec_ChassisMgmt_AccrPedlVld_Flg;
     // VCU_AccPedal_SigGroup.VCU_EPBReq = (VCU_EPBReq)tec_GearMgmt_EPBReq_Enum;
      VCU_AccPedal_SigGroup.VCU_Kickdown = (VCU_Kickdown)tec_ChassisMgmt_AccrPedlKdStsInfo;
      VCU_AccPedal_SigGroup.VCU_TargetGear = (VCU_TargetGear)tec_GearMgmt_TarGear_Enum;
      VCU_AccPedal_SigGroup.VCU_VehicleSpeed = (VCU_VehicleSpeed_2)tec_VehMot_VehSpdABS_kph;
      VCU_AccPedal_SigGroup.VCU_VehicleSpeedValid = (VCU_VehicleSpeedValid)tec_VehMot_VehSpdVld_Flg;

      VCU_AccPedal_SigGroup.VCU_VirtualACPedal = (VCU_VirtualACPedal_1)tec_ChassisMgmt_VirtAccrPedlPosnInfo;
      VCU_AccPedal_SigGroup.VCU_VirtualACPedalValid = (VCU_VirtualACPedalValid)tec_ChassisMgmt_VirtAccrPedlVldInfo;
      VCU_AccPedal_SigGroup.VCU_VLCTorqueRequestActive = (VCU_VLCTorqueRequestActive)tec_ChassisMgmt_IBSVlcReqTqActv_Flg;
      VCU_AccPedal_SigGroup.VCU_VLCTorqueRequestAvailable = (VCU_VLCTorqueRequestAvailable)tec_ChassisMgmt_IBSVlcReqTqAvl_Flg;

      (void)E2EPW_Write_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup(&VCU_AccPedal_SigGroup);

    /**************************************************VCU_AccPedal*******************************************************************/

    /**************************************************VCU_Chassis_01*******************************************************************/
      SG_VCU_Chassis_01_SigGroup VCU_Chassis_01_SigGroup;
      boolean_T tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg;
      boolean_T tec_ChassisMgmt_IBSApsReqTqActv_Flg;
      boolean_T tec_ChassisMgmt_IBSApsReqTqAvl_Flg;
      boolean_T tec_ChassisMgmt_VehDecelSpdSts_Flg;
      boolean_T tec_ChassisMgmt_RgnTqCapVld_Flg;
      uint8_T tec_ChassisMgmt_BrkCmpWarn_Enum;
      uint8_T tec_EgyMgmt_EgyMgmtWarn_Enum;
      uint8_T tec_ModMgmt_ActRgnSts_Enum;
      real32_T tec_ChassisMgmt_DesVehDecelSpd_mps2q;
      real32_T tec_ChassisMgmt_AccrPedlDesTq_Nm;
      real32_T tec_ChassisMgmt_RgnTqCap_Nm;
      boolean_T tec_ChassisMgmt_IBSIntvTqActv;
      boolean_T tec_ChassisMgmt_VehStbCtrlTqAvl_Flg;

      (void)Rte_Read_RTE_R_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg_tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg(&tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg);
      (void)Rte_Read_RTE_R_ChassisMgmt_IBSApsReqTqActv_Flg_tec_ChassisMgmt_IBSApsReqTqActv_Flg(&tec_ChassisMgmt_IBSApsReqTqActv_Flg);
      (void)Rte_Read_RTE_R_ChassisMgmt_IBSApsReqTqAvl_Flg_tec_ChassisMgmt_IBSApsReqTqAvl_Flg(&tec_ChassisMgmt_IBSApsReqTqAvl_Flg);
      (void)Rte_Read_RTE_R_ChassisMgmt_BrkCmpWarn_Enum_tec_ChassisMgmt_BrkCmpWarn_Enum(&tec_ChassisMgmt_BrkCmpWarn_Enum);
      (void)Rte_Read_RTE_R_ChassisMgmt_DesVehDecelSpd_mps2q_tec_ChassisMgmt_DesVehDecelSpd_mps2q(&tec_ChassisMgmt_DesVehDecelSpd_mps2q);
      (void)Rte_Read_RTE_R_ChassisMgmt_VehDecelSpdSts_Flg_tec_ChassisMgmt_VehDecelSpdSts_Flg(&tec_ChassisMgmt_VehDecelSpdSts_Flg);
      (void)Rte_Read_RTE_R_ChassisMgmt_AccrPedlDesTq_Nm_tec_ChassisMgmt_AccrPedlDesTq_Nm(&tec_ChassisMgmt_AccrPedlDesTq_Nm);
      (void)Rte_Read_RTE_R_EgyMgmt_EgyMgmtWarn_Enum_tec_EgyMgmt_EgyMgmtWarn_Enum(&tec_EgyMgmt_EgyMgmtWarn_Enum);
      (void)Rte_Read_RTE_R_ChassisMgmt_RgnTqCap_Nm_tec_ChassisMgmt_RgnTqCap_Nm(&tec_ChassisMgmt_RgnTqCap_Nm);
      (void)Rte_Read_RTE_R_ChassisMgmt_RgnTqCapVld_Flg_tec_ChassisMgmt_RgnTqCapVld_Flg(&tec_ChassisMgmt_RgnTqCapVld_Flg);
      (void)Rte_Read_RTE_R_ModMgmt_ActRgnSts_Enum_tec_ModMgmt_ActRgnSts_Enum(&tec_ModMgmt_ActRgnSts_Enum);
      (void)Rte_Read_RTE_R_ChassisMgmt_IBSIntvTqActv_tec_ChassisMgmt_IBSIntvTqActv(&tec_ChassisMgmt_IBSIntvTqActv);
      (void)Rte_Read_RTE_R_ChassisMgmt_VehStbCtrlTqAvl_Flg_tec_ChassisMgmt_VehStbCtrlTqAvl_Flg(&tec_ChassisMgmt_VehStbCtrlTqAvl_Flg);

      tec_ChassisMgmt_DesVehDecelSpd_mps2q = CtAp_CANHandler_ATOM_SignalSend(tec_ChassisMgmt_DesVehDecelSpd_mps2q,CANHandler_Resolution_005, CANHandler_Offest_Minus5);
      tec_ChassisMgmt_AccrPedlDesTq_Nm = CtAp_CANHandler_ATOM_SignalSend(tec_ChassisMgmt_AccrPedlDesTq_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus1023);
      tec_ChassisMgmt_RgnTqCap_Nm = CtAp_CANHandler_ATOM_SignalSend(tec_ChassisMgmt_RgnTqCap_Nm,CANHandler_Resolution_1, CANHandler_Offest_Minus20000);

        //   * SG_VCU_Chassis_01_SigGroup: Record with elements
        //   *   Checksum_0D3 of type Checksum_0D3_1
        //   *   MessageCounter_0D3 of type MessageCounter_0D3_1
        //   *   VCU_ADASOverride of type VCU_ADASOverride
        //   *   VCU_APSTorqueRequestActive of type VCU_APSTorqueRequestActive
        //   *   VCU_APSTorqueRequestAvailable of type VCU_APSTorqueRequestAvailable
        //   *   VCU_BrakeCompensateWarn of type VCU_BrakeCompensateWarn
        //   *   VCU_DecelerationReq of type VCU_DecelerationReq_1
        //   *   VCU_DecelerationReqactive of type VCU_DecelerationReqactive
        //   *   VCU_DriverTorqueRequest of type VCU_DriverTorqueRequest_1
        //   *   VCU_EnergyManagementWarn of type VCU_EnergyManagementWarn_1
        //   *   VCU_RegenTorqueCap of type VCU_RegenTorqueCap_1
        //   *   VCU_RegenTorqueCapValid of type VCU_RegenTorqueCapValid
        //   *   VCU_RegStatus of type VCU_RegStatus
        //   *   VCU_TorqueRequestActive of type VCU_TorqueRequestActive
        //   *   VCU_TorqueRequestAvailable of type VCU_TorqueRequestAvailable

      VCU_Chassis_01_SigGroup.Checksum_0D3 = (Checksum_0D3_1)((uint8_T)CANHandler_u8Zero);
      VCU_Chassis_01_SigGroup.MessageCounter_0D3 = (MessageCounter_0D3_1)((uint8_T)CANHandler_u8Zero);
      VCU_Chassis_01_SigGroup.VCU_ADASOverride = (VCU_ADASOverride)tec_ChassisMgmt_DrvAsscCtrlOvrdSts_Flg;
      VCU_Chassis_01_SigGroup.VCU_APSTorqueRequestActive = (VCU_APSTorqueRequestActive)tec_ChassisMgmt_IBSApsReqTqActv_Flg;
      VCU_Chassis_01_SigGroup.VCU_APSTorqueRequestAvailable = (VCU_APSTorqueRequestAvailable)tec_ChassisMgmt_IBSApsReqTqAvl_Flg;
      VCU_Chassis_01_SigGroup.VCU_BrakeCompensateWarn = (VCU_BrakeCompensateWarn)tec_ChassisMgmt_BrkCmpWarn_Enum;
      VCU_Chassis_01_SigGroup.VCU_DecelerationReq = (VCU_DecelerationReq_1)tec_ChassisMgmt_DesVehDecelSpd_mps2q;
      VCU_Chassis_01_SigGroup.VCU_DecelerationReqactive = (VCU_DecelerationReqactive)tec_ChassisMgmt_VehDecelSpdSts_Flg;
      VCU_Chassis_01_SigGroup.VCU_DriverTorqueRequest = (VCU_DriverTorqueRequest_1)tec_ChassisMgmt_AccrPedlDesTq_Nm;
      VCU_Chassis_01_SigGroup.VCU_EnergyManagementWarn = (VCU_EnergyManagementWarn_1)tec_EgyMgmt_EgyMgmtWarn_Enum;
      VCU_Chassis_01_SigGroup.VCU_RegenTorqueCap = (VCU_RegenTorqueCap_1)tec_ChassisMgmt_RgnTqCap_Nm;
      VCU_Chassis_01_SigGroup.VCU_RegenTorqueCapValid = (VCU_RegenTorqueCapValid)tec_ChassisMgmt_RgnTqCapVld_Flg;
      VCU_Chassis_01_SigGroup.VCU_RegStatus = (VCU_RegStatus)tec_ModMgmt_ActRgnSts_Enum;
      VCU_Chassis_01_SigGroup.VCU_TorqueRequestActive = (VCU_TorqueRequestActive)tec_ChassisMgmt_IBSIntvTqActv;
      VCU_Chassis_01_SigGroup.VCU_TorqueRequestAvailable = (VCU_TorqueRequestAvailable)tec_ChassisMgmt_VehStbCtrlTqAvl_Flg;

      (void)E2EPW_Write_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup(&VCU_Chassis_01_SigGroup);
    /**************************************************VCU_Chassis_01*******************************************************************/

    /**************************************************VCU_BMS*******************************************************************/
      SG_VCU_BMS_SigGroup VCU_BMS_SigGroup;
      uint8_T tec_ModMgmt_ActDrvMod_Enum;
      uint8_T tec_ChrMgmt_PosRlyReqSts_Enum;
      uint8_T tec_EgyMgmt_BMSTarThermLvl_Enum;
      uint8_T tec_ChrMgmt_ChrgSts_Enum;
      uint8_T tec_ModMgmt_DrvModSwtWarn_Enum;
      uint8_T tec_ModMgmt_HvSts_Enum;
      uint8_T tec_DCChrMgmt_IRMeasSwtCtrl_Enum;
      uint8_T tec_LvMgmt_VCUlimLvlInfo;
      uint8_T tec_HvMgmt_ReqModBMS_Enum;
      boolean_T tec_VehMot_RegenBrkLi_Flg;
      boolean_T tec_VehMot_RegenBrkLiVld_Flg;

      (void)Rte_Read_RTE_R_ModMgmt_ActDrvMod_Enum_tec_ModMgmt_ActDrvMod_Enum(&tec_ModMgmt_ActDrvMod_Enum);
      (void)Rte_Read_RTE_R_ChrMgmt_PosRlyReqSts_Enum_tec_ChrMgmt_PosRlyReqSts_Enum(&tec_ChrMgmt_PosRlyReqSts_Enum);
      (void)Rte_Read_RTE_R_EgyMgmt_BMSTarThermLvl_Enum_tec_EgyMgmt_BMSTarThermLvl_Enum(&tec_EgyMgmt_BMSTarThermLvl_Enum);
      (void)Rte_Read_RTE_R_ChrMgmt_ChrgSts_Enum_tec_ChrMgmt_ChrgSts_Enum(&tec_ChrMgmt_ChrgSts_Enum);
      (void)Rte_Read_RTE_R_ModMgmt_DrvModSwtWarn_Enum_tec_ModMgmt_DrvModSwtWarn_Enum(&tec_ModMgmt_DrvModSwtWarn_Enum);
      (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tec_ModMgmt_HvSts_Enum);
      (void)Rte_Read_RTE_R_DCChrMgmt_IRMeasSwtCtrl_Enum_tec_DCChrMgmt_IRMeasSwtCtrl_Enum(&tec_DCChrMgmt_IRMeasSwtCtrl_Enum);
      (void)Rte_Read_RTE_R_LvMgmt_VCUlimLvlInfo_tec_LvMgmt_VCUlimLvlInfo(&tec_LvMgmt_VCUlimLvlInfo);
      (void)Rte_Read_RTE_R_VehMot_RegenBrkLi_Flg_tec_VehMot_RegenBrkLi_Flg(&tec_VehMot_RegenBrkLi_Flg);
      (void)Rte_Read_RTE_R_VehMot_RegenBrkLiVld_Flg_tec_VehMot_RegenBrkLiVld_Flg(&tec_VehMot_RegenBrkLiVld_Flg);
      (void)Rte_Read_RTE_R_HvMgmt_ReqModBMS_Enum_tec_HvMgmt_ReqModBMS_Enum(&tec_HvMgmt_ReqModBMS_Enum);

        //   * SG_VCU_BMS_SigGroup: Record with elements
        //   *   Checksum_0D1 of type Checksum_0D1_2
        //   *   MessageCounter_0D1 of type MessageCounter_0D1_2
        //   *   VCU_ActDriveMode of type VCU_ActDriveMode
        //   *   VCU_BMSTargetThermLevel of type VCU_BMSTargetThermLevel
        //   *   VCU_DrvModSwitchWarn of type VCU_DrvModSwitchWarn
        //   *   VCU_HVStatus of type VCU_HVStatus
        //   *   VCU_LimitLevel of type VCU_LimitLevel
        //   *   VCU_RegenBrakeLightRequest of type VCU_RegenBrakeLightRequest
        //   *   VCU_RegenBrakeLightReqVld of type VCU_RegenBrakeLightReqVld
        //   *   VCU_RequestedModeBMS of type VCU_RequestedModeBMS
        //   *   VCU_BMS_Control_of_PosRelay of type VCU_BMS_Control_of_PosRelay
        //   *   VCU_ChargeStatus of type VCU_Chargestatus
        //   *   VCU_IsoMeasurementSwitch of type VCU_IsoMeasurementSwitch_3
        
      VCU_BMS_SigGroup.Checksum_0D1 = (Checksum_0D1_2)((uint8_T)CANHandler_u8Zero);
      VCU_BMS_SigGroup.MessageCounter_0D1 = (MessageCounter_0D1_2)((uint8_T)CANHandler_u8Zero);
      VCU_BMS_SigGroup.VCU_ActDriveMode = (VCU_ActDriveMode)tec_ModMgmt_ActDrvMod_Enum;
    //   VCU_BMS_SigGroup.VCU_ActiveEnergyProfile = (VCU_ActiveEnergyProfile)((uint8_T)CANHandler_u8Zero);
    //   VCU_BMS_SigGroup.VCU_ActiveRgnBrkProfile = (VCU_ActiveRgnBrkProfile)((uint8_T)CANHandler_u8Zero);
      VCU_BMS_SigGroup.VCU_BMS_Control_of_PosRelay = (VCU_BMS_Control_of_PosRelay)tec_ChrMgmt_PosRlyReqSts_Enum;
      VCU_BMS_SigGroup.VCU_BMSTargetThermLevel = (VCU_BMSTargetThermLevel)tec_EgyMgmt_BMSTarThermLvl_Enum;
      VCU_BMS_SigGroup.VCU_ChargeStatus = (VCU_Chargestatus)tec_ChrMgmt_ChrgSts_Enum;
      VCU_BMS_SigGroup.VCU_DrvModSwitchWarn = (VCU_DrvModSwitchWarn)tec_ModMgmt_DrvModSwtWarn_Enum;
      VCU_BMS_SigGroup.VCU_HVStatus = (VCU_HVStatus)tec_ModMgmt_HvSts_Enum;
      VCU_BMS_SigGroup.VCU_IsoMeasurementSwitch = (VCU_IsoMeasurementSwitch_3)tec_DCChrMgmt_IRMeasSwtCtrl_Enum;
      VCU_BMS_SigGroup.VCU_LimitLevel = (VCU_LimitLevel)tec_LvMgmt_VCUlimLvlInfo;
      VCU_BMS_SigGroup.VCU_RegenBrakeLightRequest = (VCU_RegenBrakeLightRequest)tec_VehMot_RegenBrkLi_Flg;
      VCU_BMS_SigGroup.VCU_RegenBrakeLightReqVld = (VCU_RegenBrakeLightReqVld)tec_VehMot_RegenBrkLiVld_Flg;
      VCU_BMS_SigGroup.VCU_RequestedModeBMS = (VCU_RequestedModeBMS)tec_HvMgmt_ReqModBMS_Enum;

      (void)E2EPW_Write_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup(&VCU_BMS_SigGroup);

    /**************************************************VCU_BMS*******************************************************************/ 
  }
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID5 */
void R_CANHandlerInput_Cyclic_50ms(void)
                              /* Explicit Task: R_CANHandlerInput_Cyclic_50ms */
{
	
  

  
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID6 */
void R_CANHandlerOutput_Cyclic_50ms(void)
                             /* Explicit Task: R_CANHandlerOutput_Cyclic_50ms */
{
//   boolean_T tec_ComM_TriggerASWMsgReqInfo;
//   (void)Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(&tec_ComM_TriggerASWMsgReqInfo);
//   if(tec_ComM_TriggerASWMsgReqInfo)
  {
    /*************************************************VCU_POD_SigGroup********************************************************************/
      SG_VCU_POD_SigGroup VCU_POD_SigGroup;
      boolean_T tec_DCChrMgmt_DCFCClsReq_Flg;
      uint8_T tec_OBCMgmt_OBCEnaCmd_Enum;
      real32_T tec_OBCMgmt_ReqOBCIDc_A;
      uint8_T tec_OBCMgmt_ElectcLockCtrlCmd_Enum;
      uint8_T tec_OBCMgmt_S2SwtCtrlCmd_Enum;

      Rte_Read_RTE_R_DCChrMgmt_DCFCClsReq_Flg_tec_DCChrMgmt_DCFCClsReq_Flg(&tec_DCChrMgmt_DCFCClsReq_Flg);
      Rte_Read_RTE_R_OBCMgmt_OBCEnaCmd_Enum_tec_OBCMgmt_OBCEnaCmd_Enum(&tec_OBCMgmt_OBCEnaCmd_Enum);
      Rte_Read_RTE_R_OBCMgmt_ReqOBCIDc_A_tec_OBCMgmt_ReqOBCIDc_A(&tec_OBCMgmt_ReqOBCIDc_A);
      Rte_Read_RTE_R_OBCMgmt_ElectcLockCtrlCmd_Enum_tec_OBCMgmt_ElectcLockCtrlCmd_Enum(&tec_OBCMgmt_ElectcLockCtrlCmd_Enum);
      Rte_Read_RTE_R_OBCMgmt_S2SwtCtrlCmd_Enum_tec_OBCMgmt_S2SwtCtrlCmd_Enum(&tec_OBCMgmt_S2SwtCtrlCmd_Enum);

      tec_OBCMgmt_ReqOBCIDc_A =  CtAp_CANHandler_ATOM_SignalSend(tec_OBCMgmt_ReqOBCIDc_A,CANHandler_Resolution_01, CANHandler_Offest_0);

      VCU_POD_SigGroup.VCU_Enable_DC_Relay = (VCU_Enable_DC_Relay_3)tec_DCChrMgmt_DCFCClsReq_Flg;
      VCU_POD_SigGroup.VCU_EnableOBC = (VCU_EnableOBC_3)tec_OBCMgmt_OBCEnaCmd_Enum;
      VCU_POD_SigGroup.VCU_OBC_ChargeCurrentCommand =(VCU_OBC_ChargeCurrentCommand_3)tec_OBCMgmt_ReqOBCIDc_A;
      VCU_POD_SigGroup.VCU_OBC_Control_of_em_lock = (VCU_OBC_Control_of_em_lock_3)tec_OBCMgmt_ElectcLockCtrlCmd_Enum;
      VCU_POD_SigGroup.VCU_OBC_Control_of_S2_SW = (VCU_OBC_Control_of_S2_SW_3)tec_OBCMgmt_S2SwtCtrlCmd_Enum;

        //   * SG_VCU_POD_SigGroup: Record with elements
        //   *   VCU_Enable_DC_Relay of type VCU_Enable_DC_Relay_3
        //   *   VCU_EnableOBC of type VCU_EnableOBC_3
        //   *   VCU_OBC_ChargeCurrentCommand of type VCU_OBC_ChargeCurrentCommand_3
        //   *   VCU_OBC_Control_of_em_lock of type VCU_OBC_Control_of_em_lock_3
        //   *   VCU_OBC_Control_of_S2_SW of type VCU_OBC_Control_of_S2_SW_3


        (void)Rte_Write_SG_VCU_POD_SigGroup_SG_VCU_POD_SigGroup(&VCU_POD_SigGroup);
    /*************************************************VCU_POD_SigGroup********************************************************************/
  }
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID7 */
void R_CANHandlerInput_Cyclic_100ms(void)
                             /* Explicit Task: R_CANHandlerInput_Cyclic_100ms */
{
    
	//ComErr
    boolean_T LvMgmt_KL15ActSts_Flg;	
    boolean_T LvMgmt_BSBattUDcNorm_Flg;	
    boolean_T DiagApp_DisableDCMReqInfo;
    boolean_T EPTDTCTimeoutEnbale;

	boolean_T CHDTCTimeoutEnbale;
    boolean_T ComM_EPTCANDTCEnb_Flg;
    boolean_T ComM_CHCANDTCEnb_Flg;
	boolean_T ComM_COMLostEnb_Flg;
    dt_ComM_EPTCANBusOffInfo ComM_EPTCANBusOffInfo_Bus;
    dt_ComM_CHCANBusOffInfo ComM_CHCANBusOffInfo_Bus;	

    boolean_T ComM_VCUPNC14;    
	boolean_T ComM_CGWPNC14;  
	boolean_T ComM_VCUPNC13;    
	boolean_T ComM_CGWPNC13; 
    boolean_T ComM_VCUPNC16;    
	boolean_T ComM_CGWPNC16; 	
	boolean_T ComM_BMSPNC16; 
	boolean_T ComM_VCUPNC21;
	boolean_T ComM_CGWPNC21;
	boolean_T ComM_VCUPNC4;
	boolean_T ComM_CGWPNC4;
	boolean_T ComM_VCUPNC5;
	boolean_T ComM_CGWPNC5;
	boolean_T ComM_VCUPNC6;
	boolean_T ComM_CGWPNC6;
	boolean_T ComM_VCUPNC17;
	boolean_T ComM_CGWPNC17;
	boolean_T ComM_CGWPNC1;
	boolean_T ComM_VCUPNC1;
	boolean_T ComM_CGWPNC0;
	boolean_T ComM_VCUPNC0;
	boolean_T ComM_CGWPNC3;
	boolean_T ComM_VCUPNC3;
	boolean_T DCChrMgmt_DcChrgStrt_Flg;
	
	(void)Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(&LvMgmt_KL15ActSts_Flg);
	(void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(&LvMgmt_BSBattUDcNorm_Flg);
    (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(&DiagApp_DisableDCMReqInfo);
    (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(&ComM_CHCANBusOffInfo_Bus);
	(void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(&ComM_EPTCANBusOffInfo_Bus);
	(void)Rte_Read_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14(&ComM_VCUPNC14);
	(void)Rte_Read_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14(&ComM_CGWPNC14);
	(void)Rte_Read_RTE_R_ComM_VCUPNC13_tec_ComM_VCUPNC13(&ComM_VCUPNC13);
	(void)Rte_Read_RTE_R_ComM_CGWPNC13_tec_ComM_CGWPNC13(&ComM_CGWPNC13);
	(void)Rte_Read_RTE_R_ComM_VCUPNC16_tec_ComM_VCUPNC16(&ComM_VCUPNC16);
	(void)Rte_Read_RTE_R_ComM_CGWPNC16_tec_ComM_CGWPNC16(&ComM_CGWPNC16);
	(void)Rte_Read_RTE_R_ComM_BMSPNC16_tec_ComM_BMSPNC16(&ComM_BMSPNC16);
	(void)Rte_Read_RTE_R_ComM_VCUPNC21_tec_ComM_VCUPNC21(&ComM_VCUPNC21);
	(void)Rte_Read_RTE_R_ComM_CGWPNC21_tec_ComM_CGWPNC21(&ComM_CGWPNC21);
	(void)Rte_Read_RTE_R_ComM_VCUPNC4_tec_ComM_VCUPNC4(&ComM_VCUPNC4);
	(void)Rte_Read_RTE_R_ComM_CGWPNC4_tec_ComM_CGWPNC4(&ComM_CGWPNC4);	
	(void)Rte_Read_RTE_R_ComM_VCUPNC5_tec_ComM_VCUPNC5(&ComM_VCUPNC5);
	(void)Rte_Read_RTE_R_ComM_CGWPNC5_tec_ComM_CGWPNC5(&ComM_CGWPNC5);
	(void)Rte_Read_RTE_R_ComM_VCUPNC6_tec_ComM_VCUPNC6(&ComM_VCUPNC6);
	(void)Rte_Read_RTE_R_ComM_CGWPNC6_tec_ComM_CGWPNC6(&ComM_CGWPNC6);
	(void)Rte_Read_RTE_R_ComM_VCUPNC17_tec_ComM_VCUPNC17(&ComM_VCUPNC17);
	(void)Rte_Read_RTE_R_ComM_CGWPNC17_tec_ComM_CGWPNC17(&ComM_CGWPNC17);
	(void)Rte_Read_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(&DCChrMgmt_DcChrgStrt_Flg);
	(void)Rte_Read_RTE_R_ComM_CGWPNC1_tec_ComM_CGWPNC1(&ComM_CGWPNC1);
	(void)Rte_Read_RTE_R_ComM_VCUPNC1_tec_ComM_VCUPNC1(&ComM_VCUPNC1);
	(void)Rte_Read_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0(&ComM_CGWPNC0);
	(void)Rte_Read_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0(&ComM_VCUPNC0);
	(void)Rte_Read_RTE_R_ComM_CGWPNC3_tec_ComM_CGWPNC3(&ComM_CGWPNC3);
	(void)Rte_Read_RTE_R_ComM_VCUPNC3_tec_ComM_VCUPNC3(&ComM_VCUPNC3);
    /*************************************************CGW_02********************************************************************/
    (void)Rte_Read_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(&CGW_02_SigGroup);

    /*************************************************CGW_02********************************************************************/
	//ComM_CHCANDTCEnb_Flg
	
	EPTDTCTimeoutEnbale = ((!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo) && (!DiagApp_DisableDCMReqInfo && LvMgmt_BSBattUDcNorm_Flg));
	CHDTCTimeoutEnbale = ((!ComM_CHCANBusOffInfo_Bus.ComM_ErrResCHCANBusOffInfo) && (!DiagApp_DisableDCMReqInfo && LvMgmt_BSBattUDcNorm_Flg));
		
	ComM_EPTCANDTCEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt(EPTDTCTimeoutEnbale, ((uint16_T)CANHandler_Cycle100ms),CANHandler_WkpCfmPreEnaTim_CFG,&CtAp_CANHandler_ARID_DEF.Cycle100msEPTDTCEnbInteral);
		
	ComM_CHCANDTCEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt
	(CHDTCTimeoutEnbale, ((uint16_T)CANHandler_Cycle100ms),
	CANHandler_WkpCfmPreEnaTim_CFG,
	&CtAp_CANHandler_ARID_DEF.Cycle100msCHDTCEnbInteral);
		
	ComM_COMLostEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt(CANHandler_True,
	((uint16_T)CANHandler_Cycle100ms), CANHandler_WkpCfmPreEnaTim_CFG,
	&CtAp_CANHandler_ARID_DEF.Cycle100msCOMLostEnbInteral);
	
	
      /***********************************************BMS_Charge_02**********************************************************************/
      SG_BMS_Charge_02_SigGroup BMS_Charge_02_SigGroup;
      (void)Rte_Read_SG_BMS_Charge_02_SigGroup_SG_BMS_Charge_02_SigGroup(&BMS_Charge_02_SigGroup);
      /*
      * SG_BMS_Charge_02_SigGroup: Record with elements
      *   BMS_AbortAchivesetValue of type BMS_AbortAchivesetValue_4
      *   BMS_AbortAchiveSingleVolt of type BMS_AbortAchiveSingleVolt_4
      *   BMS_AbortAchiveTotalVolt of type BMS_AbortAchiveTotalVolt_4
      *   BMS_AbortErrorCurrent of type BMS_AbortErrorCurrent_4
      *   BMS_AbortErrorVoltage of type BMS_AbortErrorVoltage_4
      *   BMS_AbortFaultBatteryTemp of type BMS_AbortFaultBatteryTemp_4
      *   BMS_AbortFaultBMSTemp of type BMS_AbortFaultBMSTemp_4
      *   BMS_ChagComplete of type BMS_ChagComplete_4
      *   BMS_ChargeRequest of type BMS_ChargeRequest_4
      *   BMS_ChrgDcChrgnReq of type BMS_ChrgDcChrgnReq
      */
      (void)Rte_Write_RTE_P_ComM_ChrgnRchTarCellUDc_Enum_tec_ComM_ChrgnRchTarCellUDc_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_AbortAchiveSingleVolt);
      (void)Rte_Write_RTE_P_ComM_ChrgnRchTarTotUDc_Enum_tec_ComM_ChrgnRchTarTotUDc_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_AbortAchiveTotalVolt);
      (void)Rte_Write_RTE_P_ComM_ChrgnRchSetVal_Enum_tec_ComM_ChrgnRchSetVal_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_AbortAchivesetValue);
      (void)Rte_Write_RTE_P_ComM_AbortErrIDc_Enum_tec_ComM_AbortErrIDc_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_AbortErrorCurrent);
      (void)Rte_Write_RTE_P_ComM_AbortErrUDc_Enum_tec_ComM_AbortErrUDc_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_AbortErrorVoltage);
      (void)Rte_Write_RTE_P_ComM_AbortFltBattTemp_Enum_tec_ComM_AbortFltBattTemp_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_AbortFaultBatteryTemp);
      (void)Rte_Write_RTE_P_ComM_AbortFltBMSTemp_Enum_tec_ComM_AbortFltBMSTemp_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_AbortFaultBMSTemp);
      (void)Rte_Write_RTE_P_ComM_BattChrgnModReq_Enum_tec_ComM_BattChrgnModReq_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_DCChgMode);
      (void)Rte_Write_RTE_P_ComM_BMSChrgCmplSts_Enum_tec_ComM_BMSChrgCmplSts_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_ChagComplete);
      (void)Rte_Write_RTE_P_ComM_BMSChrgReqSts_Enum_tec_ComM_BMSChrgReqSts_Enum((uint8_T)BMS_Charge_02_SigGroup.BMS_ChargeRequest);
	  
	  

    /***********************************************BMS_Charge_02**********************************************************************/
	/***********************************************SGW_16**********************************************************************/
  // * SG_SGW_16_SigGroup: Record with elements
  // *   IVI_VrState of type IVI_VrState
	boolean_T SGW_16_SigGroup_RxFlg;
	SG_SGW_16_SigGroup SGW_16_SigGroup;
	
	SGW_16_SigGroup_RxFlg =Rte_IsUpdated_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup();
  (void)Rte_Read_SG_SGW_16_SigGroup_SG_SGW_16_SigGroup(&SGW_16_SigGroup);
  (void)Rte_Write_RTE_P_ComM_IVIVrState_tec_ComM_IVIVrState((boolean_T)SGW_16_SigGroup.IVI_VrState);

	//ComM_SGW16TimeoutInfo_Bus
	boolean_T SGW16TimeoutFail;
	boolean_T ComM_MonStatSGW16TimeoutInfo;
	
	SGW16TimeoutFail=((CGW_02_SigGroup.CGW_IVISts)&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!SGW_16_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    SGW16TimeoutFail, (!SGW16TimeoutFail),
    ((uint16_T)1000), ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle100ms), &ComM_MonStatSGW16TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResSGW16TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGW16TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResSGW16TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.SGW16Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgErrIn_cwsc.ComM_MonStatSGW16TimeoutInfo
    = ComM_MonStatSGW16TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgErrIn_cwsc.ComM_MonResSGW16TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResSGW16TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgErrIn_cwsc.ComM_ErrStatSGW16TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGW16TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgErrIn_cwsc.ComM_ErrResSGW16TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResSGW16TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgErrIn_cwsc);
	//ComM_SGW16TimeoutDTCInfo_Bus
	boolean_T SGW16TimeoutDTCErrorFail;
	boolean_T ComM_MonStatSGW16TimeoutDTCErrorInfo;
	
	SGW16TimeoutDTCErrorFail=((CGW_02_SigGroup.CGW_IVISts)&&(!SGW_16_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg, SGW16TimeoutDTCErrorFail,
    SGW_16_SigGroup_RxFlg,
    ((uint16_T)1000), ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatSGW16TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResSGW16TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGW16CTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResSGW16TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.SGW16TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgE_gwdi.ComM_MonStatSGW16TimeoutDTCErrorInfo
    = ComM_MonStatSGW16TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgE_gwdi.ComM_MonResSGW16TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResSGW16TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgE_gwdi.ComM_ErrStatSGW16CTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGW16CTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgE_gwdi.ComM_ErrResSGW16TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResSGW16TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_SGW16MsgErrInfo_Bus_tec_ComM_SGW16TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGW16MsgE_gwdi);
	
	
	
	/***********************************************SGW_16**********************************************************************/
	
	 /***********************************************ADCU_Body_Req**********************************************************************/
  //   //ComErr
	// uint32_T ADCU_Body_req_SigGroup_ErrSts;
	// boolean_T ADCU_Body_req_SigGroup_RxFlg;

  //   ADCU_Body_req_SigGroup_RxFlg =Rte_IsUpdated_SG_ADCU_Body_req_SigGroup_SG_ADCU_Body_req_SigGroup();
  //   ADCU_Body_req_SigGroup_ErrSts = E2EPW_Read_SG_ADCU_Body_req_SigGroup_SG_ADCU_Body_req_SigGroup(&ADCU_Body_req_SigGroup);
   
  
  
  //   //ADCUBodyDTCEnable
	// boolean_T ADCU_Body_req_PNCEnable;
	// boolean_T ADCUBodyreqPNCEnable_Logical;
	
	// ADCUBodyreqPNCEnable_Logical=(ComM_CGWPNC14||ComM_VCUPNC14);
	
	// ADCU_Body_req_PNCEnable=CtAp_CANHandler_ATOM_TimeCnt
	// (ADCUBodyreqPNCEnable_Logical,((uint16_T)CANHandler_Cycle100ms),
  //       CANHandler_PNC14SpcTimeoutEnable_CFG,
	// &CtAp_CANHandler_ARID_DEF.ADCU_Body_req_PNCEnableInteral);
     
  //   //ComM_ADCUBodyReqCRCDTCInfo_Bus
	// boolean_T ComM_MonStatADCUBodyReqCRCDTCErrorInfo;
	
	// CtAp_CANHandler_E2ECfm(ADCU_Body_req_SigGroup.MessageCounter_20A,
  //   ADCU_Body_req_SigGroup_RxFlg, ADCU_Body_req_SigGroup_RxFlg,
  //   ADCU_Body_req_PNCEnable, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
  //   CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
  //   &CtAp_CANHandler_ARID_DEF.ADCUBodyReqCRCDTCErrorFail,
  //   &CtAp_CANHandler_ARID_DEF.ADCUBodyReqCRCDTCErrorPass,
  //   &CtAp_CANHandler_ARID_DEF.ADCUBodyReqCRCDTCErrorInteral);
	
  //   CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
  //   CtAp_CANHandler_ARID_DEF.ADCUBodyReqCRCDTCErrorFail,
  //   CtAp_CANHandler_ARID_DEF.ADCUBodyReqCRCDTCErrorPass, ((uint16_T)
  //   CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
  //   CANHandler_Cycle100ms), &ComM_MonStatADCUBodyReqCRCDTCErrorInfo,
  //   &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUBodyReqCRCDTCErrorInfo,
  //   &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUBodyReqCRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUBodyReqCRCDTCErrorInfo,
  //   &CtAp_CANHandler_ARID_DEF.ADCUBodyReqCRCDTCError_U16ErrorHandInteral);
	
	// CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgErrInf.ComM_MonStatADCUBodyReqCRCDTCErrorInfo
  //   = ComM_MonStatADCUBodyReqCRCDTCErrorInfo;
	// CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgErrInf.ComM_MonResADCUBodyReqCRCDTCErrorInfo
  //   = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUBodyReqCRCDTCErrorInfo;
  //   CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgErrInf.ComM_ErrStatADCUBodyReqCRCDTCErrorInfo
  //   = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUBodyReqCRCDTCErrorInfo;
  //   CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgErrInf.ComM_ErrResADCUBodyReqCRCDTCErrorInfo
  //   = false;
	
	// (void)Rte_Write_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqCRCDTCInfo_Bus
  //   (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgErrInf);
	// //ComM_ADCUBodyReqTimeoutDTCInfo_Bus
	// boolean_T ADCUBodyReqTimeoutDTCErrorFail;
	// boolean_T ComM_MonStatADCUBodyReqTimeoutDTCErrorInfo;
	
	// ADCUBodyReqTimeoutDTCErrorFail=(ADCU_Body_req_PNCEnable&&(!ADCU_Body_req_SigGroup_RxFlg));
	
	// CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg, ADCUBodyReqTimeoutDTCErrorFail,
  //   ADCU_Body_req_SigGroup_RxFlg,
  //   CANHandler_ErrResADCUBodyReqTimeoutDTCMatureTime_CFG, ((uint16_T)
  //   CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
  //   &ComM_MonStatADCUBodyReqTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUBodyReqTimeoutDTCErrorInfo,
  //   &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUBodyReqTimeoutDTCErrorInfo,
  //   &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUBodyReqTimeoutDTCErrorInfo,
  //   &CtAp_CANHandler_ARID_DEF.ADCUBodyReqTimeoutDTCError_U16ErrorHandInteral);
	
	// CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgE_gwdi.ComM_MonStatADCUBodyReqTimeoutDTCErrorInfo
  //   = ComM_MonStatADCUBodyReqTimeoutDTCErrorInfo;
	// CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgE_gwdi.ComM_MonResADCUBodyReqTimeoutDTCErrorInfo
  //   = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUBodyReqTimeoutDTCErrorInfo;
  //   CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgE_gwdi.ComM_ErrStatADCUBodyReqTimeoutDTCErrorInfo
  //   = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUBodyReqTimeoutDTCErrorInfo;
  //   CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgE_gwdi.ComM_ErrResADCUBodyReqTimeoutDTCErrorInfo
  //   = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUBodyReqTimeoutDTCErrorInfo;
	
	// (void)Rte_Write_RTE_P_ComM_ADCUBodyReqMsgErrInfo_Bus_tec_ComM_ADCUBodyReqTimeoutDTCInfo_Bus
  //   (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUBodyReqMsgE_gwdi);


  /***********************************************ADCU_Body_Req**********************************************************************/

    /***********************************************APTC_TCU**********************************************************************/
      SG_APTC_TCU_SigGroup APTC_TCU_SigGroup;
      real32_T tec_ComM_APTCPwrCns_Kw;
      boolean_T APTC_TCU_SigGroup_RxFlg;

      APTC_TCU_SigGroup_RxFlg = Rte_IsUpdated_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup();
      (void)Rte_Read_SG_APTC_TCU_SigGroup_SG_APTC_TCU_SigGroup(&APTC_TCU_SigGroup);

      tec_ComM_APTCPwrCns_Kw =  (real32_T)APTC_TCU_SigGroup.APTC_PowerConsumption;

      tec_ComM_APTCPwrCns_Kw = CtAp_CANHandler_ATOM_SignalRead(tec_ComM_APTCPwrCns_Kw,CANHandler_Resolution_004, CANHandler_Offest_0);

      /*
      * SG_APTC_TCU_SigGroup: Record with elements
      *   APTC_PowerConsumption of type APTC_PowerConsumption
      */
      (void)Rte_Write_RTE_P_ComM_APTCPwrCns_Kw_tec_ComM_APTCPwrCns_Kw(tec_ComM_APTCPwrCns_Kw);
	  
	//ComErr
	
	
	
	  
	//ComM_APTCTCUTimeoutDTCInfo_Bus
	boolean_T ComM_MonStatAPTCTCUTimeoutDTCErrorInfo;
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg, (!APTC_TCU_SigGroup_RxFlg),
    APTC_TCU_SigGroup_RxFlg, CANHandler_ErrResAPTCTCUTimeoutDTCMatureTime_CFG,
    ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatAPTCTCUTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResAPTCTCUTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatAPTCTCUTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResAPTCTCUTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.APTCTCUTimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrInfo_Bu.ComM_MonStatAPTCTCUTimeoutDTCErrorInfo
    = ComM_MonStatAPTCTCUTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrInfo_Bu.ComM_MonResAPTCTCUTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResAPTCTCUTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrInfo_Bu.ComM_ErrStatAPTCTCUTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatAPTCTCUTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrInfo_Bu.ComM_ErrResAPTCTCUTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResAPTCTCUTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrInfo_Bu);
	//ComM_APTCTCUTimeoutInfo_Bus
	boolean_T APTCTCUTimeoutFail;
	boolean_T ComM_MonStatAPTCTCUTimeoutInfo;
	
	APTCTCUTimeoutFail=((!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!APTC_TCU_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    APTCTCUTimeoutFail, (!APTCTCUTimeoutFail),
    CANHandler_ErrResAPTCTCUTimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle100ms), &ComM_MonStatAPTCTCUTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResAPTCTCUTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatAPTCTCUTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResAPTCTCUTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.APTCTCUTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrIn_cwsc.ComM_MonStatAPTCTCUTimeoutInfo
    = ComM_MonStatAPTCTCUTimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrIn_cwsc.ComM_MonResAPTCTCUTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResAPTCTCUTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrIn_cwsc.ComM_ErrStatAPTCTCUTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatAPTCTCUTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrIn_cwsc.ComM_ErrResAPTCTCUTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResAPTCTCUTimeoutInfo;
	
	  (void)Rte_Write_RTE_P_ComM_APTCTCUMsgErrInfo_Bus_tec_ComM_APTCTCUTimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_APTCTCUMsgErrIn_cwsc);

    /***********************************************APTC_TCU**********************************************************************/

    /***********************************************BMS_CellTemp**********************************************************************/
      SG_BMS_CellTemp_SigGroup BMS_CellTemp_SigGroup;
      real32_T tec_ComM_BMSBattMaxTemp_C;
      real32_T tec_ComM_BMSBattMinTemp_C;

      (void)Rte_Read_SG_BMS_CellTemp_SigGroup_SG_BMS_CellTemp_SigGroup(&BMS_CellTemp_SigGroup);
      tec_ComM_BMSBattMaxTemp_C = (real32_T)BMS_CellTemp_SigGroup.BMS_MaxCellTemp;
      tec_ComM_BMSBattMinTemp_C = (real32_T)BMS_CellTemp_SigGroup.BMS_MinCellTemp;

      tec_ComM_BMSBattMaxTemp_C = CtAp_CANHandler_ATOM_SignalRead(tec_ComM_BMSBattMaxTemp_C,CANHandler_Resolution_1, CANHandler_Offest_Minus40);
      tec_ComM_BMSBattMinTemp_C = CtAp_CANHandler_ATOM_SignalRead(tec_ComM_BMSBattMinTemp_C,CANHandler_Resolution_1, CANHandler_Offest_Minus40);

      /*
      * SG_BMS_CellTemp_SigGroup: Record with elements
      *   BMS_AverageCellTemp of type BMS_AverageCellTemp_1
      *   BMS_MaxCellTemp of type BMS_MaxCellTemp_2
      *   BMS_MaxCellTempModuleNO of type BMS_MaxCellTempModuleNO_1
      *   BMS_MaxCellTempNO of type BMS_MaxCellTempNO_2
      *   BMS_MinCellTemp of type BMS_MinCellTemp_2
      *   BMS_MinCellTempModuleNO of type BMS_MinCellTempModuleNO_1
      *   BMS_MinCellTempNO of type BMS_MinCellTempNO_2
      *   BMS_ThermometerProbes of type BMS_ThermometerProbes_1
      */
      (void)Rte_Write_RTE_P_ComM_BattMaxTemp_C_tec_ComM_BMSBattMaxTemp_C((int8_T)tec_ComM_BMSBattMaxTemp_C);
      (void)Rte_Write_RTE_P_ComM_BattMinTemp_C_tec_ComM_BMSBattMinTemp_C((int8_T)tec_ComM_BMSBattMinTemp_C);

    /***********************************************BMS_CellTemp**********************************************************************/

    /***********************************************BCM_11**********************************************************************/
    // * SG_BCM_11_SigGroup: Record with elements
    // *   BCM_Immo_State of type BCM_Immo_State
    // *   BCM_SecOCFV_272 of type BCM_SecOCFV_273
    // *   BCM_SecOCMAC_272 of type BCM_SecOCMAC_273


    SG_BCM_11_SigGroup BCM_11_SigGroup;
    uint8_T ComM_BCMImmoSts;

    (void)Rte_Read_RTE_R_SecOC_BCM_Immo_State_YDF_BCM_Immo_State_YDF(&ComM_BCMImmoSts);
    (void)Rte_Write_RTE_P_ComM_BCMImmoSts_Flg_tec_ComM_BCMImmoSts_Flg((boolean_T)ComM_BCMImmoSts);



    /***********************************************BCM_11**********************************************************************/ 




    /***********************************************BCM_06_SigGroup**********************************************************************/
     // SG_BCM_06_SigGroup BCM_06_SigGroup ;
      uint32_T BCM_06_SigGroup_ErrSts;
      boolean_T BCM_06_SigGroup_RxFlg;
   
      // * SG_BCM_06_SigGroup: Record with elements
      // *   BCM_PepsPowerMode of type BCM_PepsPowerMode
      // *   checksum_271 of type checksum_274
      // *   MessageCounter_271 of type MessageCounter_274
      BCM_06_SigGroup_RxFlg =Rte_IsUpdated_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup();
      BCM_06_SigGroup_ErrSts = E2EPW_Read_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup(&BCM_06_SigGroup);
     
      (void)Rte_Write_RTE_P_ComM_PEPSPwrMod_Enum_tec_ComM_PEPSPwrMod_Enum((uint8_T)BCM_06_SigGroup.BCM_PepsPowerMode);
	  
	//ComErr
	
	
	
	
	//ComM_BCM06CRCDTCInfo_Bus
	boolean_T BCM06CRCDTCErrorOtherCdn;
	boolean_T ComM_MonStatBCM06CRCDTCErrorInfo;
	
	BCM06CRCDTCErrorOtherCdn=(CGW_02_SigGroup.CGW_BCMSts);
	
	CtAp_CANHandler_E2ECfm(BCM_06_SigGroup.MessageCounter_271,
    BCM_06_SigGroup_RxFlg, BCM_06_SigGroup_ErrSts,
    BCM06CRCDTCErrorOtherCdn, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.BCM06CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.BCM06CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.BCM06CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.BCM06CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.BCM06CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle100ms), &ComM_MonStatBCM06CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResBCM06CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM06CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM06CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.BCM06CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_Bus_.ComM_MonStatBCM06CRCDTCErrorInfo
    = ComM_MonStatBCM06CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_Bus_.ComM_MonResBCM06CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBCM06CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_Bus_.ComM_ErrStatBCM06CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM06CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_Bus_.ComM_ErrResBCM06CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM06CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_Bus_);
	//ComM_BCM06TimeoutDTCInfo_Bus
	boolean_T BCM06TimeoutDTCError;
	boolean_T ComM_MonStatBCM06TimeoutDTCErrorInfo;
	
	BCM06TimeoutDTCError=((CGW_02_SigGroup.CGW_BCMSts)&&(!BCM_06_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    BCM06TimeoutDTCError, BCM_06_SigGroup_RxFlg,
    CANHandler_ErrResBCM06TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatBCM06TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResBCM06TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM06TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM06TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.BCM06TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_omfw.ComM_MonStatBCM06TimeoutDTCErrorInfo
    = ComM_MonStatBCM06TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_omfw.ComM_MonResBCM06TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBCM06TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_omfw.ComM_ErrStatBCM06TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM06TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_omfw.ComM_ErrResBCM06TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM06TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_omfw);
	//ComM_BCM06TimeoutInfo_Bus
	boolean_T BCM06TimeoutFail;
	boolean_T ComM_MonStatBCM06TimeoutInfo;
	
	BCM06TimeoutFail=((CGW_02_SigGroup.CGW_BCMSts)&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!BCM_06_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    BCM06TimeoutFail, BCM_06_SigGroup_RxFlg,
    CANHandler_ErrResBCM06TimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle100ms), &ComM_MonStatBCM06TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResBCM06TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM06TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM06TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.BCM06Timeout_U16ErrorHandInteral);	
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_b42o.ComM_MonStatBCM06TimeoutInfo
    = ComM_MonStatBCM06TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_b42o.ComM_MonResBCM06TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBCM06TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_b42o.ComM_ErrStatBCM06TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM06TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_b42o.ComM_ErrResBCM06TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM06TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_BCM06MsgErrInfo_Bus_tec_ComM_BCM06TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM06MsgErrInfo_b42o);

    /***********************************************BCM_06_SigGroup**********************************************************************/

    /***********************************************BMS_Charge_01**********************************************************************/
      SG_BMS_Charge_01_SigGroup BMS_Charge_01_SigGroup;
      real32_T tec_ComM_BMSBattMaxChrgnUDc_V;
      real32_T tec_ComM_BMSBattAllowChrgIDc_A;

      (void)Rte_Read_SG_BMS_Charge_01_SigGroup_SG_BMS_Charge_01_SigGroup(&BMS_Charge_01_SigGroup);

      tec_ComM_BMSBattMaxChrgnUDc_V  = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_Charge_01_SigGroup.BMS_MaxChagVoltage,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_ComM_BMSBattAllowChrgIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_Charge_01_SigGroup.BMS_AllowChagCurrent,CANHandler_Resolution_01, CANHandler_Offest_Minus1000);
      /*
      * SG_BMS_Charge_01_SigGroup: Record with elements
      *   BMS_AllowChagCurrent of type BMS_AllowChagCurrent_2
      *   BMS_MaxChagVoltage of type BMS_MaxChagVoltage_2
      *   BMS_RemChagTime of type BMS_RemChagTime_2
      */
      (void)Rte_Write_RTE_P_ComM_BMSBattMaxChrgnUDc_V_tec_ComM_BMSBattMaxChrgnUDc_V(tec_ComM_BMSBattMaxChrgnUDc_V);
      (void)Rte_Write_RTE_P_ComM_BMSBattAllowChrgIDc_A_tec_ComM_BMSBattAllowChrgIDc_A(tec_ComM_BMSBattAllowChrgIDc_A);
      (void)Rte_Write_RTE_P_ComM_BMSRemnChrgTim_min_tec_ComM_BMSRemnChrgTim_min((uint16_T)BMS_Charge_01_SigGroup.BMS_RemChagTime);
    /***********************************************BMS_Charge_01**********************************************************************/

    /***********************************************BMS_status_04**********************************************************************/
      SG_BMS_status_04_SigGroup BMS_status_04_SigGroup;
      real32_T tec_ComM_BMSBattDchaIDc_A;
      real32_T tec_ComM_BMSBattFbIDc_A;

      // * SG_BMS_status_04_SigGroup: Record with elements
      // *   BMS_DisChgCurr of type BMS_DisChgCurr_1
      (void)Rte_Read_SG_BMS_status_04_SigGroup_SG_BMS_status_04_SigGroup(&BMS_status_04_SigGroup);

      tec_ComM_BMSBattDchaIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_status_04_SigGroup.BMS_DisChgCurr,CANHandler_Resolution_01, CANHandler_Offest_Minus1000);
      // tec_ComM_BMSBattFbIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_status_04_SigGroup.BMS_FeedbackCurr,CANHandler_Resolution_01, CANHandler_Offest_Minus1000);
      tec_ComM_BMSBattFbIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_status_04_SigGroup.BMS_FeedbackCurr,CANHandler_Resolution_01, CANHandler_Offest_Minus1000);
      (void)Rte_Write_RTE_P_ComM_BMSBattDchaIDc_A_tec_ComM_BMSBattDchaIDc_A(tec_ComM_BMSBattDchaIDc_A);
      (void)Rte_Write_RTE_P_ComM_BMSBattFbIDc_A_tec_ComM_BMSBattFbIDc_A(tec_ComM_BMSBattFbIDc_A);

    /***********************************************BMS_status_04**********************************************************************/

    /***********************************************BMS_status_03**********************************************************************/
      SG_BMS_status_03_SigGroup BMS_status_03_SigGroup;
      real32_T tec_ComM_BMSBattDispSOC_pct;
      real32_T tec_ComM_BMSBattLnkUDc_V;
      real32_T tec_ComM_BMSBattPckUDc_V;
      /*
      * SG_BMS_status_03_SigGroup: Record with elements
      *   BMS_DisplaySOC of type BMS_DisplaySOC_2
      *   BMS_LinkVoltage of type BMS_LinkVoltage_2
      *   BMS_PackVoltage of type BMS_PackVoltage_2
      *   BMS_SOC of type BMS_SOC_1
      */
      (void)Rte_Read_SG_BMS_status_03_SigGroup_SG_BMS_status_03_SigGroup(&BMS_status_03_SigGroup);

      tec_ComM_BMSBattDispSOC_pct = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_status_03_SigGroup.BMS_DisplaySOC,CANHandler_Resolution_001, CANHandler_Offest_0);
      tec_ComM_BMSBattLnkUDc_V = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_status_03_SigGroup.BMS_LinkVoltage,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_ComM_BMSBattPckUDc_V = CtAp_CANHandler_ATOM_SignalRead((real32_T)BMS_status_03_SigGroup.BMS_PackVoltage,CANHandler_Resolution_01, CANHandler_Offest_0);

      (void)Rte_Write_RTE_P_ComM_BMSBattDispSOC_pct_tec_ComM_BMSBattDispSOC_pct(tec_ComM_BMSBattDispSOC_pct);
      (void)Rte_Write_RTE_P_ComM_BMSBattLnkUDc_V_tec_ComM_BMSBattLnkUDc_V(tec_ComM_BMSBattLnkUDc_V);
      (void)Rte_Write_RTE_P_ComM_BMSBattPckUDc_V_tec_ComM_BMSBattPckUDc_V(tec_ComM_BMSBattPckUDc_V);

    /***********************************************BMS_status_03**********************************************************************/

    /***********************************************BMS_DIRelayState**********************************************************************/
    // * SG_BMS_DIRelayState_SigGroup: Record with elements
    // *   BMS_NegRelayStatus of type BMS_NegRelayStatus_3
    // *   BMS_PosRelayStatus of type BMS_PosRelayStatus_3
    // *   BMS_PreRelayStatus of type BMS_PreRelayStatus
    // *   BMS_PTC_VoltageValue of type BMS_PTC_VoltageValue_3
    // *   BMS_PTCRelayStatus of type BMS_PTCRelayStatus
      SG_BMS_DIRelayState_SigGroup BMS_DIRelayState_SigGroup;

      (void)Rte_Read_SG_BMS_DIRelayState_SigGroup_SG_BMS_DIRelayState_SigGroup(&BMS_DIRelayState_SigGroup);

      (void)Rte_Write_RTE_P_ComM_BMSNegRlySts_Enum_tec_ComM_BMSNegRlySts_Enum((uint8_T)BMS_DIRelayState_SigGroup.BMS_NegRelayStatus);

      (void)Rte_Write_RTE_P_ComM_BMSPosRlySts_Enum_tec_ComM_BMSPosRlySts_Enum((uint8_T)BMS_DIRelayState_SigGroup.BMS_PosRelayStatus);

      (void)Rte_Write_RTE_P_ComM_BMSPTCUDc_V_tec_ComM_BMSPTCUDc_V((real32_T)BMS_DIRelayState_SigGroup.BMS_PTC_VoltageValue);

      (void)Rte_Write_RTE_P_ComM_BMSPTCRlyStsInfo_tec_ComM_BMSPTCRlyStsInfo((uint8_T)BMS_DIRelayState_SigGroup.BMS_PTCRelayStatus);//3.0.0

    /***********************************************BMS_DIRelayState**********************************************************************/

    /***********************************************POD_DCDC_01**********************************************************************/
      SG_POD_DCDC_01_SigGroup POD_DCDC_01_SigGroup;
      real32_T tec_ComM_DCDCHvInpIDc_A;
      real32_T tec_ComM_DCDCHvInpUDc_V;
      boolean_T POD_DCDC_01_SigGroup_RxFlg;
      /*
      * SG_POD_DCDC_01_SigGroup: Record with elements
      *   POD_DCDC_HVInputCurrent of type POD_DCDC_HVInputCurrent_2
      *   POD_DCDC_HVInputVoltage of type POD_DCDC_HVInputVoltage_2
      *   POD_DCDC_LVOutputCurrent of type POD_DCDC_LVOutputCurrent_1
      *   POD_DCDC_LVOutputVoltage of type POD_DCDC_LVOutputVoltage_1
      * 
      */
      POD_DCDC_01_SigGroup_RxFlg =Rte_IsUpdated_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup();
      (void)Rte_Read_SG_POD_DCDC_01_SigGroup_SG_POD_DCDC_01_SigGroup(&POD_DCDC_01_SigGroup);

      tec_ComM_DCDCHvInpIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_DCDC_01_SigGroup.POD_DCDC_HVInputCurrent,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_ComM_DCDCHvInpUDc_V = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_DCDC_01_SigGroup.POD_DCDC_HVInputVoltage, CANHandler_Resolution_01, CANHandler_Offest_0);

      (void)Rte_Write_RTE_P_ComM_DCDCHvInpIDc_A_tec_ComM_DCDCHvInpIDc_A(tec_ComM_DCDCHvInpIDc_A);
      (void)Rte_Write_RTE_P_ComM_DCDCHvInpUDc_V_tec_ComM_DCDCHvInpUDc_V(tec_ComM_DCDCHvInpUDc_V);
      (void)Rte_Write_RTE_P_ComM_DCDCWrkMod_Enum_tec_ComM_DCDCWrkMod_Enum((uint8_T)POD_DCDC_01_SigGroup.POD_DCDC_WorkMode);
	//ComErr
	
	
    
	
	//ComM_PODDCDC01TimeoutDTCInfo_Bus
	boolean_T PODDCDC01TimeoutDTCError;
	boolean_T ComM_MonStatPODDCDC01TimeoutDTCErrorInfo;
	
	PODDCDC01TimeoutDTCError=(LvMgmt_KL15ActSts_Flg&&(!POD_DCDC_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    PODDCDC01TimeoutDTCError, POD_DCDC_01_SigGroup_RxFlg,
    CANHandler_ErrResPODDCDC01TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatPODDCDC01TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResPODDCDC01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODDCDC01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResPODDCDC01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.PODDCDC01TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErrInfo_.ComM_MonStatPODDCDC01TimeoutDTCErrorInfo
    = ComM_MonStatPODDCDC01TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErrInfo_.ComM_MonResPODDCDC01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPODDCDC01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErrInfo_.ComM_ErrStatPODDCDC01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODDCDC01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErrInfo_.ComM_ErrResPODDCDC01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPODDCDC01TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErrInfo_);
	//ComM_PODDCDC01TimeoutInfo_Bus
	boolean_T PODDCDC01TimeoutFail;
	boolean_T ComM_MonStatPODDCDC01TimeoutInfo;
	
	PODDCDC01TimeoutFail=(LvMgmt_KL15ActSts_Flg&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!POD_DCDC_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    PODDCDC01TimeoutFail, (!PODDCDC01TimeoutFail),
    CANHandler_ErrResPODDCDC01TimeoutMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatPODDCDC01TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResPODDCDC01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODDCDC01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResPODDCDC01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.PODDCDC01Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErr_oyy5.ComM_MonStatPODDCDC01TimeoutInfo
    = ComM_MonStatPODDCDC01TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErr_oyy5.ComM_MonResPODDCDC01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPODDCDC01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErr_oyy5.ComM_ErrStatPODDCDC01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODDCDC01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErr_oyy5.ComM_ErrResPODDCDC01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPODDCDC01TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_PODDCDC01MsgErrInfo_Bus_tec_ComM_PODDCDC01TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODDCDC01MsgErr_oyy5);

    /***********************************************POD_DCDC_01**********************************************************************/

    /***********************************************POD_Status_02**********************************************************************/
      SG_POD_Status_02_SigGroup POD_Status_02_SigGroup;
      /*
      * SG_POD_Status_02_SigGroup: Record with elements
      *   POD_CANBusoff of type POD_CANBusoff
      *   POD_DCPortInletTempAValid of type POD_DCPortInletTempAValid_2
      *   POD_DCPortInletTempBValid of type POD_DCPortInletTempBValid_2
      *   POD_DCPosRelayState of type POD_DCPosRelayState_2
      *   POD_KL30Error of type POD_KL30Error
      *   POD_T15e_fault of type POD_T15e_fault
      *   POD_TempHighFault of type POD_TempHighFault
      *   POD_TempSensor1Fault of type POD_TempSensor1Fault
      */
      (void)Rte_Read_SG_POD_Status_02_SigGroup_SG_POD_Status_02_SigGroup(&POD_Status_02_SigGroup);

      (void)Rte_Write_RTE_P_ComM_DcInletASnsrSts_Enum_tec_ComM_DcInletASnsrSts_Enum((uint8_T)POD_Status_02_SigGroup.POD_DCPortInletTempAValid);

      (void)Rte_Write_RTE_P_ComM_DcInletBSnsrSts_Enum_tec_ComM_DcInletBSnsrSts_Enum((uint8_T)POD_Status_02_SigGroup.POD_DCPortInletTempBValid);

      (void)Rte_Write_RTE_P_ComM_PODDcPosRlySts_Enum_tec_ComM_PODDcPosRlySts_Enum((uint8_T)POD_Status_02_SigGroup.POD_DCPosRelayState);

    /***********************************************POD_Status_02**********************************************************************/

    /***********************************************POD_Status_01**********************************************************************/
      SG_POD_Status_01_SigGroup POD_Status_01_SigGroup;
      real32_T tec_ComM_PODDCFCUDc_V;
      real32_T tec_ComM_DcInletATemp_C;
      real32_T tec_ComM_DcInletBTemp_C;

      /*
      * SG_POD_Status_01_SigGroup: Record with elements
      *   POD_DCFCVoltage of type POD_DCFCVoltage_2
      *   POD_DCInletTempA of type POD_DCInletTempA_2
      *   POD_DCInletTempB of type POD_DCInletTempB_2
      *   POD_Temperature of type POD_Temperature_1
      */
      boolean_T POD_Status_01_SigGroup_RxFlg;
	
	  POD_Status_01_SigGroup_RxFlg =Rte_IsUpdated_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup();
      (void)Rte_Read_SG_POD_Status_01_SigGroup_SG_POD_Status_01_SigGroup(&POD_Status_01_SigGroup);

      tec_ComM_PODDCFCUDc_V = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_Status_01_SigGroup.POD_DCFCVoltage,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_ComM_DcInletATemp_C = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_Status_01_SigGroup.POD_DCInletTempA, CANHandler_Resolution_1,CANHandler_Offest_Minus40);
      tec_ComM_DcInletBTemp_C = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_Status_01_SigGroup.POD_DCInletTempB, CANHandler_Resolution_1,CANHandler_Offest_Minus40);

      (void)Rte_Write_RTE_P_ComM_PODDCFCUDc_V_tec_ComM_PODDCFCUDc_V(tec_ComM_PODDCFCUDc_V);
      (void)Rte_Write_RTE_P_ComM_DcInletATemp_C_tec_ComM_DcInletATemp_C((int8_T)tec_ComM_DcInletATemp_C);
      (void)Rte_Write_RTE_P_ComM_DcInletBTemp_C_tec_ComM_DcInletBTemp_C((int8_T)tec_ComM_DcInletBTemp_C);
	
    //ComErr
	
	//ComM_PODSts01TimeoutInfo_Bus
	boolean_T PODSts01TimeoutFail;
	boolean_T ComM_MonStatPODSts01TimeoutInfo;
	
	PODSts01TimeoutFail=(DCChrMgmt_DcChrgStrt_Flg&&(!POD_Status_01_SigGroup_RxFlg));

	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, PODSts01TimeoutFail,
    (!PODSts01TimeoutFail), CANHandler_ErrResPODSts01TimeoutMatureTime_CFG,
    ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatPODSts01TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResPODSts01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODSts01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResPODSts01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.PODSts01Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODSts01TimeoutInfo_.ComM_MonStatPODSts01TimeoutInfo
    = ComM_MonStatPODSts01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODSts01TimeoutInfo_.ComM_MonResPODSts01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPODSts01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODSts01TimeoutInfo_.ComM_ErrStatPODSts01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODSts01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODSts01TimeoutInfo_.ComM_ErrResPODSts01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPODSts01TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_PODSts01TimeoutInfo_Bus_tec_ComM_PODSts01TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODSts01TimeoutInfo_);

    /***********************************************POD_Status_01**********************************************************************/

    /***********************************************POD_OBC_CHRGSTATION**********************************************************************/

      SG_POD_OBC_CHRGSTATION_SigGroup POD_OBC_CHRGSTATION_SigGroup;
      real32_T tec_ComM_OBCCCIDcLmt_A;
      real32_T tec_ComM_OBCCPIDcLmt_A;
      real32_T tec_ComM_OBCMaxAllwdIDc_A;
      /*
      * SG_POD_OBC_CHRGSTATION_SigGroup: Record with elements
      *   POD_OBC_CCCurrentLimit of type POD_OBC_CCCurrentLimit_2
      *   POD_OBC_CCStatus of type POD_OBC_CCStatus_2
      *   POD_OBC_ChargCapacibility of type POD_OBC_ChargCapacibility_2
      *   POD_OBC_CPCurrentLimit of type POD_OBC_CPCurrentLimit_2
      *   POD_OBC_CPDuty of type POD_OBC_CPDuty_2
      *   POD_OBC_CPFrequency of type POD_OBC_CPFrequency_1
      *   POD_OBC_CPStatus of type POD_OBC_CPStatus_2
      *   POD_OBC_EMLockState of type POD_OBC_EMLockState_2
      *   POD_OBC_OBCMaxPermOutpCrrt of type POD_OBC_OBCMaxPermOutpCrrt_2
      *   POD_OBC_S2State of type POD_OBC_S2State_2
      *   POD_OBC_WorkMode of type POD_OBC_WorkMode_2
      */
      boolean_T POD_OBC_CHRGSTATION_SigGroup_RxFlg;
	
      POD_OBC_CHRGSTATION_SigGroup_RxFlg =Rte_IsUpdated_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup();
      (void)Rte_Read_SG_POD_OBC_CHRGSTATION_SigGroup_SG_POD_OBC_CHRGSTATION_SigGroup(&POD_OBC_CHRGSTATION_SigGroup);

      tec_ComM_OBCCCIDcLmt_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_CCCurrentLimit, CANHandler_Resolution_0126,CANHandler_Offest_0);

      tec_ComM_OBCCPIDcLmt_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_CPCurrentLimit, CANHandler_Resolution_0126,CANHandler_Offest_0);

      tec_ComM_OBCMaxAllwdIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_OBCMaxPermOutpCrrt, CANHandler_Resolution_01,CANHandler_Offest_0);

      (void)Rte_Write_RTE_P_ComM_OBCCPPwmDuty_pct_tec_ComM_OBCCPPwmDuty_pct((uint8_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_CPDuty);

      (void)Rte_Write_RTE_P_ComM_ElectcLockSts_Enum_tec_ComM_ElectcLockSts_Enum((uint8_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_EMLockState);

      (void)Rte_Write_RTE_P_ComM_AcChrgPha_Enum_tec_ComM_AcChrgPha_Enum((uint8_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_ChargCapacibility);

      (void)Rte_Write_RTE_P_ComM_OBCCCIDcLmt_A_tec_ComM_OBCCCIDcLmt_A(tec_ComM_OBCCCIDcLmt_A);

      (void)Rte_Write_RTE_P_ComM_OBCCCSts_Enum_tec_ComM_OBCCCSts_Enum((uint8_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_CCStatus);

      (void)Rte_Write_RTE_P_ComM_OBCChrgSts_Enum_tec_ComM_OBCChrgSts_Enum((uint8_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_WorkMode);

      (void)Rte_Write_RTE_P_ComM_OBCCPIDcLmt_A_tec_ComM_OBCCPIDcLmt_A(tec_ComM_OBCCPIDcLmt_A);

      (void)Rte_Write_RTE_P_ComM_OBCCPSts_Enum_tec_ComM_OBCCPSts_Enum((uint8_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_CPStatus);

      (void)Rte_Write_RTE_P_ComM_OBCMaxAllwdIDc_A_tec_ComM_OBCMaxAllwdIDc_A(tec_ComM_OBCMaxAllwdIDc_A);

      (void)Rte_Write_RTE_P_ComM_S2SwtSts_Enum_tec_ComM_S2SwtSts_Enum((uint8_T)POD_OBC_CHRGSTATION_SigGroup.POD_OBC_S2State);
	  
	  
	//ComErr
	
	//ComM_PODOBCChrgStatTimeoutDTCInfo_Bus
	boolean_T PODOBCChrgStatTimeoutDTCErrorFail;
	boolean_T ComM_MonStatPODOBCChrgStatTimeoutDTCErrorInfo;
	
	PODOBCChrgStatTimeoutDTCErrorFail=(LvMgmt_KL15ActSts_Flg&&(!POD_OBC_CHRGSTATION_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    PODOBCChrgStatTimeoutDTCErrorFail, POD_OBC_CHRGSTATION_SigGroup_RxFlg,
    CANHandler_ErrResPODOBCChrgStatTimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatPODOBCChrgStatTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResPODOBCChrgStatTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODOBCChrgStatTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResPODOBCChrgStatTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.PODOBCChrgStatTimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatMsgErr.ComM_MonStatPODOBCChrgStatTimeoutDTCErrorInfo
    = ComM_MonStatPODOBCChrgStatTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatMsgErr.ComM_MonResPODOBCChrgStatTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPODOBCChrgStatTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatMsgErr.ComM_ErrStatPODOBCChrgStatTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODOBCChrgStatTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatMsgErr.ComM_ErrResPODOBCChrgStatTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPODOBCChrgStatTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatMsgErr);
	//ComM_PODOBCChrgStatTimeoutInfo_Bus
	boolean_T PODOBCChrgStatTimeout;
    boolean_T ComM_MonStatPODOBCChrgStatTimeoutInfo;
	
	PODOBCChrgStatTimeout=(LvMgmt_KL15ActSts_Flg&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!POD_OBC_CHRGSTATION_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    PODOBCChrgStatTimeout, (!PODOBCChrgStatTimeout),
    CANHandler_ErrResPODOBCChrgStatTimeoutMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatPODOBCChrgStatTimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResPODOBCChrgStatTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODOBCChrgStatTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResPODOBCChrgStatTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.PODOBCChrgStatTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatM_ntca.ComM_MonStatPODOBCChrgStatTimeoutInfo
    = ComM_MonStatPODOBCChrgStatTimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatM_ntca.ComM_MonResPODOBCChrgStatTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResPODOBCChrgStatTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatM_ntca.ComM_ErrStatPODOBCChrgStatTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatPODOBCChrgStatTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatM_ntca.ComM_ErrResPODOBCChrgStatTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResPODOBCChrgStatTimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_PODOBCChrgStatMsgErrInfo_Bus_tec_ComM_PODOBCChrgStatTimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_PODOBCChrgStatM_ntca);
	//ComM_OBCLostSpc_Flg
	CtAp_CANHandler_ARID_DEF.OBCLostSpc = CtAp_CANHandler_ATOM_TimeCnt
    ((!POD_OBC_CHRGSTATION_SigGroup_RxFlg), ((uint16_T)CANHandler_Cycle100ms),
    CANHandler_PODOBCChrgStatTimeoutSpcMatureTime_CFG,
    &CtAp_CANHandler_ARID_DEF.OBCLostSpcTimeCntInteral);
	
	(void)Rte_Write_RTE_P_ComM_OBCLostSpcInfo_tec_ComM_OBCLostSpcInfo
    (CtAp_CANHandler_ARID_DEF.OBCLostSpc);

    /***********************************************POD_OBC_CHRGSTATION**********************************************************************/

    /***********************************************EVCOM_State_01**********************************************************************/
      SG_EVCOM_State_01_SigGroup EVCOM_State_01_SigGroup;
      real32_T tec_ComM_EVCOMActPwrCns_Kw;
      /*
      * SG_EVCOM_State_01_SigGroup: Record with elements
      *   EVCOM_ActlOprtMode of type EVCOM_ActlOprtMode
      *   EVCOM_CompActlCnsmpCur of type EVCOM_CompActlCnsmpCur_1
      *   EVCOM_CompActlPwrCnsmp of type EVCOM_CompActlPwrCnsmp_2
      */
      boolean_T EVCOM_State_01_SigGroup_RxFlg;
	
	  EVCOM_State_01_SigGroup_RxFlg = Rte_IsUpdated_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup();
      (void)Rte_Read_SG_EVCOM_State_01_SigGroup_SG_EVCOM_State_01_SigGroup(&EVCOM_State_01_SigGroup);

      tec_ComM_EVCOMActPwrCns_Kw = CtAp_CANHandler_ATOM_SignalRead((real32_T)EVCOM_State_01_SigGroup.EVCOM_CompActlPwrCnsmp, CANHandler_Resolution_004,CANHandler_Offest_0);

      (void)Rte_Write_RTE_P_ComM_EVCOMActPwrCns_Kw_tec_ComM_EVCOMActPwrCns_Kw(tec_ComM_EVCOMActPwrCns_Kw);
	//ComErr
	
	//ComM_EVCOMSts01TimeoutDTCInfo_Bus
	boolean_T ComM_MonStatEVCOMSts01TimeoutDTCErrorInfo;
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg, (!EVCOM_State_01_SigGroup_RxFlg),
    EVCOM_State_01_SigGroup_RxFlg,
    CANHandler_ErrResEVCOMSts01TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatEVCOMSts01TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResEVCOMSts01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatEVCOMSts01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResEVCOMSts01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.EVCOMSts01TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgErrInfo.ComM_MonStatEVCOMSts01TimeoutDTCErrorInfo
    = ComM_MonStatEVCOMSts01TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgErrInfo.ComM_MonResEVCOMSts01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResEVCOMSts01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgErrInfo.ComM_ErrStatEVCOMSts01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatEVCOMSts01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgErrInfo.ComM_ErrResEVCOMSts01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResEVCOMSts01TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgErrInfo);
	//ComM_EVCOMSts01TimeoutInfo_Bus
	boolean_T EVCOMSts01TimeoutFail;
	boolean_T ComM_MonStatEVCOMSts01TimeoutInfo;
	
	EVCOMSts01TimeoutFail=((!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!EVCOM_State_01_SigGroup_RxFlg));

	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    EVCOMSts01TimeoutFail, (!EVCOMSts01TimeoutFail),
    CANHandler_ErrResEVCOMSts01TimeoutMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatEVCOMSts01TimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResEVCOMSts01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatEVCOMSts01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResEVCOMSts01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.EVCOMSts01Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgEr_jej5.ComM_MonStatEVCOMSts01TimeoutInfo
    = ComM_MonStatEVCOMSts01TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgEr_jej5.ComM_MonResEVCOMSts01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResEVCOMSts01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgEr_jej5.ComM_ErrStatEVCOMSts01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatEVCOMSts01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgEr_jej5.ComM_ErrResEVCOMSts01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResEVCOMSts01TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_EVCOMSts01MsgErrInfo_Bus_tec_ComM_EVCOMSts01TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_EVCOMSts01MsgEr_jej5);
    /***********************************************EVCOM_State_01**********************************************************************/

    /***********************************************TCU_02**********************************************************************/
      SG_TCU_02_SigGroup TCU_02_SigGroup;
      real32_T tec_ComM_HVCHIDc_A;
      /*
      * SG_TCU_02_SigGroup: Record with elements
      *   TCU_HVCHHighVoltage of type TCU_HVCHHighVoltage_2
      *   TCU_HVCHHVDCCurrent of type TCU_HVCHHVDCCurrent_2
      */

      (void)Rte_Read_SG_TCU_02_SigGroup_SG_TCU_02_SigGroup(&TCU_02_SigGroup);

      tec_ComM_HVCHIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)TCU_02_SigGroup.TCU_HVCHHVDCCurrent, CANHandler_Resolution_025,CANHandler_Offest_0);

      (void)Rte_Write_RTE_P_ComM_HVCHIDc_A_tec_ComM_HVCHIDc_A(tec_ComM_HVCHIDc_A);
      (void)Rte_Write_RTE_P_ComM_HVCHUDc_V_tec_ComM_HVCHUDc_V((real32_T)TCU_02_SigGroup.TCU_HVCHHighVoltage);
    /***********************************************TCU_02**********************************************************************/

    /***********************************************MCU_FailureCode**********************************************************************/

      //SG_MCU_FailureCode_SigGroup MCU_FailureCode_SigGroup;
      uint32_T MCU_FailureCode_SigGroup_ErrSts;
      /*
      * SG_MCU_FailureCode_SigGroup: Record with elements
      *   Checksum_253 of type Checksum_254
      *   MCU_FaultLevel of type MCU_FaultLevel_1
      *   MessageCounter_253 of type MessageCounter_254
      */
     boolean_T MCU_FailureCode_SigGroup_RxFlg;

     boolean_T MCU_FailureCode_SigGroup_UpdateFlg;
	  MCU_FailureCode_SigGroup_RxFlg =Rte_IsUpdated_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup();
      MCU_FailureCode_SigGroup_ErrSts =E2EPW_Read_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup(&MCU_FailureCode_SigGroup);
      
      MCU_FailureCode_SigGroup_UpdateFlg = CtAp_CANHandler_MessageUpdateDelay(CANHandler_CntOne,MCU_FailureCode_SigGroup_RxFlg,UpdateInnerCnt.MCUFailCode_UpdateCnt);
      (void)Rte_Write_RTE_P_ComM_MCUFailCodeUpdate_tec_ComM_MCUFailCodeUpdate(MCU_FailureCode_SigGroup_UpdateFlg);

      (void)Rte_Write_RTE_P_ComM_MCUErrLvl_Enum_tec_ComM_MCUErrLvl_Enum((uint8_T)MCU_FailureCode_SigGroup.MCU_FaultLevel);
	
	//ComErr
	
	//ComM_MCUFailrCodCRCDTCInfo_Bus
	boolean_T ComM_MonStatMCUFailrCodCRCDTCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(MCU_FailureCode_SigGroup.MessageCounter_253,
    MCU_FailureCode_SigGroup_RxFlg, MCU_FailureCode_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle100ms), &ComM_MonStatMCUFailrCodCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResMCUFailrCodCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCUFailrCodCRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResMCUFailrCodCRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgErrInf.ComM_MonStatMCUFailrCodCRCDTCErrorInfo
    = ComM_MonStatMCUFailrCodCRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgErrInf.ComM_MonResMCUFailrCodCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResMCUFailrCodCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgErrInf.ComM_ErrStatMCUFailrCodCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCUFailrCodCRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgErrInf.ComM_ErrResMCUFailrCodCRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResMCUFailrCodCRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgErrInf);
	//ComM_MCUFailrCodTimeoutDTCInfo_Bus
	boolean_T MCUFailrCodTimeoutDTCError;
	boolean_T ComM_MonStatMCUFailrCodTimeoutDTCErrorInfo;
	
	MCUFailrCodTimeoutDTCError=(LvMgmt_KL15ActSts_Flg&&(!MCU_FailureCode_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    MCUFailrCodTimeoutDTCError, MCU_FailureCode_SigGroup_RxFlg,
    CANHandler_ErrResMCUFailrCodTimeoutDTCMatureTime_CFG, ((uint16_T)
    300U), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatMCUFailrCodTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResMCUFailrCodTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCUFailrCodTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResMCUFailrCodTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodTimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_pql1.ComM_MonStatMCUFailrCodTimeoutDTCErrorInfo
    = ComM_MonStatMCUFailrCodTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_pql1.ComM_MonResMCUFailrCodTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResMCUFailrCodTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_pql1.ComM_ErrStatMCUFailrCodTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCUFailrCodTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_pql1.ComM_ErrResMCUFailrCodTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResMCUFailrCodTimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodTimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_pql1);
	//ComM_MCUFailrCodCRCInfo_Bus
	boolean_T ComM_MonStatMCUFailrCodCRCErrorInfo;
	
	CtAp_CANHandler_E2E3Cfm(MCU_FailureCode_SigGroup.MessageCounter_253,
    MCU_FailureCode_SigGroup_RxFlg, MCU_FailureCode_SigGroup_ErrSts,
    CANHandler_True, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCErrorFail,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCErrorPass,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True,
    CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCErrorFail,
    CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle100ms), &ComM_MonStatMCUFailrCodCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResMCUFailrCodCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCUFailrCodCRCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResMCUFailrCodCRCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_nik3.ComM_MonStatMCUFailrCodCRCErrorInfo
    = ComM_MonStatMCUFailrCodCRCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_nik3.ComM_MonResMCUFailrCodCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResMCUFailrCodCRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_nik3.ComM_ErrStatMCUFailrCodCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCUFailrCodCRCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_nik3.ComM_ErrResMCUFailrCodCRCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResMCUFailrCodCRCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodCRCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_nik3);
	//ComM_MCUFailrCodE2ETimeoutInfo_Bus
	boolean_T ComM_MonStatMCUFailrCodE2ETimeouInfo;
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, (!MCU_FailureCode_SigGroup_RxFlg),
    MCU_FailureCode_SigGroup_RxFlg, CANHandler_ErrResMCUFailrCodTimeoutMatureTime_CFG,
    ((uint16_T)300U), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatMCUFailrCodE2ETimeouInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResMCUFailrCodE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCUFailrCodE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResMCUFailrCodE2ETimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.MCUFailrCodE2ETimeou_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_gtlf.ComM_MonStatMCUFailrCodE2ETimeouInfo
    = ComM_MonStatMCUFailrCodE2ETimeouInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_gtlf.ComM_MonResMCUFailrCodE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResMCUFailrCodE2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_gtlf.ComM_ErrStatMCUFailrCodE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatMCUFailrCodE2ETimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_gtlf.ComM_ErrResMCUFailrCodE2ETimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResMCUFailrCodE2ETimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_MCUFailrCodMsgErrInfo_Bus_tec_ComM_MCUFailrCodE2ETimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_MCUFailrCodMsgE_gtlf);
    /***********************************************MCU_FailureCode**********************************************************************/

    /***********************************************POD_OBC_STATUS_04**********************************************************************/
      SG_POD_OBC_STATUS_04_SigGroup POD_OBC_STATUS_04_SigGroup;
      real32_T tec_ComM_OBCInpIAc_A;
      real32_T tec_ComM_OBCInpUAc_V;
      /*
      * SG_POD_OBC_STATUS_04_SigGroup: Record with elements
      *   POD_OBC_InputACCurrent_R of type POD_OBC_InputACCurrent_R_2
      *   POD_OBC_InputACCurrent_S of type POD_OBC_InputACCurrent_S_1
      *   POD_OBC_InputACCurrent_T of type POD_OBC_InputACCurrent_T_1
      *   POD_OBC_InputACVoltage_R of type POD_OBC_InputACVoltage_R_2
      *   POD_OBC_InputACVoltage_S of type POD_OBC_InputACVoltage_S_1
      *   POD_OBC_InputACVoltage_T of type POD_OBC_InputACVoltage_T_1
      */
      (void)Rte_Read_SG_POD_OBC_STATUS_04_SigGroup_SG_POD_OBC_STATUS_04_SigGroup(&POD_OBC_STATUS_04_SigGroup);

      tec_ComM_OBCInpIAc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_OBC_STATUS_04_SigGroup.POD_OBC_InputACCurrent_R, CANHandler_Resolution_01,CANHandler_Offest_Minus50);
      tec_ComM_OBCInpUAc_V = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_OBC_STATUS_04_SigGroup.POD_OBC_InputACVoltage_R, CANHandler_Resolution_01,CANHandler_Offest_0);
      
      (void)Rte_Write_RTE_P_ComM_OBCInpIAc_A_tec_ComM_OBCInpIAc_A(tec_ComM_OBCInpIAc_A);
      (void)Rte_Write_RTE_P_ComM_OBCInpUAc_V_tec_ComM_OBCInpUAc_V(tec_ComM_OBCInpUAc_V);
    /***********************************************POD_OBC_STATUS_04**********************************************************************/

    /***********************************************POD_OBC_STATUS_02**********************************************************************/
      SG_POD_OBC_STATUS_02_SigGroup POD_OBC_STATUS_02_SigGroup;
      real32_T tec_ComM_OBCOutpIDc_A;
      real32_T tec_ComM_OBCOutpUDc_V;
      real32_T tec_ComM_OBCChrgOutpPwrAvl_Kw;
      /*
      SG_POD_OBC_STATUS_02_SigGroup: Record with elements
      *   POD_OBC_ACFrequencyStatus of type POD_OBC_ACFrequencyStatus_1
      *   POD_OBC_ACPortTempA of type POD_OBC_ACPortTempA_1
      *   POD_OBC_ACPortTempB of type POD_OBC_ACPortTempB_1
      *   POD_OBC_ChrgOutpPwrAvl of type POD_OBC_ChrgOutpPwrAvl_1
      *   POD_OBC_OutputDCChargeCurrent of type POD_OBC_OutputDCChargeCurrent_2
      *   POD_OBC_OutputDCChargeVoltage of type POD_OBC_OutputDCChargeVoltage_2
      */

      (void)Rte_Read_SG_POD_OBC_STATUS_02_SigGroup_SG_POD_OBC_STATUS_02_SigGroup(&POD_OBC_STATUS_02_SigGroup);

      tec_ComM_OBCOutpIDc_A = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_OBC_STATUS_02_SigGroup.POD_OBC_OutputDCChargeCurrent, CANHandler_Resolution_01,CANHandler_Offest_Minus250);
      tec_ComM_OBCOutpUDc_V = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_OBC_STATUS_02_SigGroup.POD_OBC_OutputDCChargeVoltage, CANHandler_Resolution_01,CANHandler_Offest_Minus800);
      tec_ComM_OBCChrgOutpPwrAvl_Kw = CtAp_CANHandler_ATOM_SignalRead((real32_T)POD_OBC_STATUS_02_SigGroup.POD_OBC_ChrgOutpPwrAvl,CANHandler_Resolution_01, CANHandler_Offest_Minus7);

      (void)Rte_Write_RTE_P_ComM_OBCOutpIDc_A_tec_ComM_OBCOutpIDc_A(tec_ComM_OBCOutpIDc_A);
      (void)Rte_Write_RTE_P_ComM_OBCOutpUDc_V_tec_ComM_OBCOutpUDc_V(tec_ComM_OBCOutpUDc_V);
      (void)Rte_Write_RTE_P_ComM_OBCChrgOutpPwrAvl_Kw_tec_ComM_OBCChrgOutpPwrAvl_Kw(tec_ComM_OBCChrgOutpPwrAvl_Kw);

    /***********************************************POD_OBC_STATUS_02**********************************************************************/

    /***********************************************TCU_01**********************************************************************/
      SG_TCU_01_SigGroup TCU_01_SigGroup;
      real32_T tec_ComM_TMSTotPwrReq_W;
      /*
      * SG_TCU_01_SigGroup: Record with elements
      *   TCU_APTCState of type TCU_APTCState
      *   TCU_EVCompState of type TCU_EVCompState
      *   TCU_HVCHState of type TCU_HVCHState
      *   TCU_HvOnReq of type TCU_HvOnReq
      *   TCU_HVPwrState of type TCU_HVPwrState_2
      *   TCU_TMSFaultLevel of type TCU_TMSFaultLevel_2
      *   TCU_TMSTotalPwrCnsmp of type TCU_TMSTotalPwrCnsmp_1
      *   TCU_TMSTotoalPwrReq of type TCU_TMSTotoalPwrReq_2
      */
     boolean_T TCU_01_SigGroup_RxFlg;
     boolean_T TCU_01_SigGroup_UpdateFlg;

      TCU_01_SigGroup_RxFlg = Rte_IsUpdated_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup();
      (void)Rte_Read_SG_TCU_01_SigGroup_SG_TCU_01_SigGroup(&TCU_01_SigGroup);

      TCU_01_SigGroup_UpdateFlg = CtAp_CANHandler_MessageUpdateDelay(CANHandler_CntOne,TCU_01_SigGroup_RxFlg,UpdateInnerCnt.TCU01_UpdateCnt);
      (void)Rte_Write_RTE_P_ComM_TCU01Update_tec_ComM_TCU01Update(TCU_01_SigGroup_UpdateFlg);

      
      tec_ComM_TMSTotPwrReq_W = CtAp_CANHandler_ATOM_SignalRead((real32_T)TCU_01_SigGroup.TCU_TMSTotoalPwrReq,CANHandler_Resolution_200, CANHandler_Offest_0);

      (void)Rte_Write_RTE_P_ComM_TCUErrLvl_Enum_tec_ComM_TCUErrLvl_Enum((uint8_T)TCU_01_SigGroup.TCU_TMSFaultLevel);
      (void)Rte_Write_RTE_P_ComM_TCUHvPwrSts_Enum_tec_ComM_TCUHvPwrSts_Enum((uint8_T)TCU_01_SigGroup.TCU_HVPwrState);
      (void)Rte_Write_RTE_P_ComM_TMSTotPwrReq_W_tec_ComM_TMSTotPwrReq_W(tec_ComM_TMSTotPwrReq_W);
	
    //ComErr
	
	
	//ComM_TCU01TimeoutDTCInfo_Bus
	boolean_T ComM_MonStatTCU01TimeoutDTCErrorInfo;
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg, (!TCU_01_SigGroup_RxFlg),
    TCU_01_SigGroup_RxFlg, CANHandler_ErrResTCU01TimeoutDTCMatureTime_CFG,
    ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatTCU01TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResTCU01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatTCU01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResTCU01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.TCU01TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_Bus_.ComM_MonStatTCU01TimeoutDTCErrorInfo
    = ComM_MonStatTCU01TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_Bus_.ComM_MonResTCU01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResTCU01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_Bus_.ComM_ErrStatTCU01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatTCU01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_Bus_.ComM_ErrResTCU01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResTCU01TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_Bus_);
	//ComM_TCU01TimeoutInfo_Bus
	boolean_T TCU01TimeoutFail;
	boolean_T ComM_MonStatTCU01TimeoutInfo;
	
	TCU01TimeoutFail=((!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo)&&(!TCU_01_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    TCU01TimeoutFail, (!TCU01TimeoutFail),
    CANHandler_ErrResTCU01TimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle100ms), &ComM_MonStatTCU01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResTCU01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatTCU01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResTCU01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.TCU01Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_nukt.ComM_MonStatTCU01TimeoutInfo
    = ComM_MonStatTCU01TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_nukt.ComM_MonResTCU01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResTCU01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_nukt.ComM_ErrStatTCU01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatTCU01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_nukt.ComM_ErrResTCU01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResTCU01TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_TCU01MsgErrInfo_Bus_tec_ComM_TCU01TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_TCU01MsgErrInfo_nukt);

    /***********************************************TCU_01**********************************************************************/

    /***********************************************SGW_04**********************************************************************/
      SG_SGW_04_SigGroup SGW_04_SigGroup;
      /*
      * SG_SGW_04_SigGroup: Record with elements
      *   SGW_RemoteHVCtrlReq of type SGW_RemoteHVCtrlReq_2
      */
     
      (void)Rte_Read_SG_SGW_04_SigGroup_SG_SGW_04_SigGroup(&SGW_04_SigGroup);

      (void)Rte_Write_RTE_P_ComM_SGWRemHvCtrlReq_Enum_tec_ComM_SGWRemHvCtrlReq_Enum((uint8_T)SGW_04_SigGroup.SGW_RemoteHVCtrlReq);
    /***********************************************SGW_04**********************************************************************/

    /***********************************************CGW_01**********************************************************************/
    
      uint32_T CGW_01_SigGroup_ErrSts;
	  boolean_T CGW_01_SigGroup_RxFlg;


     CGW_01_SigGroup_RxFlg = Rte_IsUpdated_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup();	
     
     CGW_01_SigGroup_ErrSts = E2EPW_Read_SG_CGW_01_SigGroup_SG_CGW_01_SigGroup(&CGW_01_SigGroup);

      (void)Rte_Write_RTE_P_ComM_CGWVehStatusInfo_tec_ComM_CGWVehStatusInfo((uint8_T)CGW_01_SigGroup.CGW_VehicleState);
	//ComErr
	
	//ComM_CGW01TimeoutDTCInfo_Bus
	boolean_T CGW01TimeoutDTCErrorFail;
	boolean_T ComM_MonStatCGW01TimeoutDTCErrorInfo;
	
	CGW01TimeoutDTCErrorFail=(!CGW_01_SigGroup_RxFlg);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    CGW01TimeoutDTCErrorFail, CGW_01_SigGroup_RxFlg,
    CANHandler_ErrResCGW01TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatCGW01TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResCGW01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatCGW01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResCGW01TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.CGW01TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_Bus_.ComM_MonStatCGW01TimeoutDTCErrorInfo
    = ComM_MonStatCGW01TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_Bus_.ComM_MonResCGW01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResCGW01TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_Bus_.ComM_ErrStatCGW01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatCGW01TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_Bus_.ComM_ErrResCGW01TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResCGW01TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_Bus_);
	//ComM_CGW01TimeoutInfo_Bus
	boolean_T CGW01TimeoutFail;
	boolean_T ComM_MonStatCGW01TimeoutInfo;
	
    CGW01TimeoutFail=((!CGW_01_SigGroup_RxFlg)&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo));

	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    CGW01TimeoutFail, (!CGW01TimeoutFail),
    CANHandler_ErrResCGW01TimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle100ms), &ComM_MonStatCGW01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResCGW01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatCGW01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResCGW01TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.CGW01Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_abqy.ComM_MonStatCGW01TimeoutInfo
    = ComM_MonStatCGW01TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_abqy.ComM_MonResCGW01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResCGW01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_abqy.ComM_ErrStatCGW01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatCGW01TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_abqy.ComM_ErrResCGW01TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResCGW01TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInfo_abqy);
	
	//ComM_CGW01CRCDTCInfo_Bus
	boolean_T ComM_MonStatCGW01CRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(CGW_01_SigGroup.MessageCounter_278,
    CGW_01_SigGroup_RxFlg, CGW_01_SigGroup_ErrSts,
    LvMgmt_KL15ActSts_Flg, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.CGW01CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.CGW01CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.CGW01CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.CGW01CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.CGW01CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle100ms), &ComM_MonStatCGW01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResCGW01CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatCGW01CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResCGW01ACRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.CGW01CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInf.ComM_MonStatCGW01CRCDTCErrorInfo
    = ComM_MonStatCGW01CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInf.ComM_MonResCGW01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResCGW01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInf.ComM_ErrStatCGW01CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatCGW01CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInf.ComM_ErrResCGW01ACRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResCGW01ACRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_CGW01MsgErrInfo_Bus_tec_ComM_CGW01CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_CGW01MsgErrInf);
    /***********************************************CGW_01**********************************************************************/

    /***********************************************SGW_Time**********************************************************************/
      SG_SGW_Time_SigGroup SGW_Time_SigGroup;
      /*
    * SG_SGW_Time_SigGroup: Record with elements
    *   SGW_TimeInfoDay of type SGW_TimeInfoDay_2
    *   SGW_TimeInfoHour of type SGW_TimeInfoHour_2
    *   SGW_TimeInfoMinute of type SGW_TimeInfoMinute_2
    *   SGW_TimeInfoMonth of type SGW_TimeInfoMonth_2
    *   SGW_TimeInfoSecond of type SGW_TimeInfoSecond_2
    *   SGW_TimeInfoYear of type SGW_TimeInfoYear_2
    *   SGW_TimeValid of type SGW_TimeValid
      */
     boolean_T SGW_Time_SigGroup_RxFlg;
	
     SGW_Time_SigGroup_RxFlg = Rte_IsUpdated_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup();
      (void)Rte_Read_SG_SGW_Time_SigGroup_SG_SGW_Time_SigGroup(&SGW_Time_SigGroup);

      (void)Rte_Write_RTE_P_ComM_SGWTimeDayInfo_tec_ComM_SGWTimeDayInfo((uint8_T)SGW_Time_SigGroup.SGW_TimeInfoDay);
      (void)Rte_Write_RTE_P_ComM_SGWTimeHourInfo_tec_ComM_SGWTimeHourInfo((uint8_T)SGW_Time_SigGroup.SGW_TimeInfoHour);
      (void)Rte_Write_RTE_P_ComM_SGWTimeMinuteInfo_tec_ComM_SGWTimeMinuteInfo((uint8_T)SGW_Time_SigGroup.SGW_TimeInfoMinute);
      (void)Rte_Write_RTE_P_ComM_SGWTimeMonthInfo_tec_ComM_SGWTimeMonthInfo((uint8_T)SGW_Time_SigGroup.SGW_TimeInfoMonth);
      (void)Rte_Write_RTE_P_ComM_SGWTimeSecondInfo_tec_ComM_SGWTimeSecondInfo((uint8_T)SGW_Time_SigGroup.SGW_TimeInfoSecond);
      (void)Rte_Write_RTE_P_ComM_SGWTimeYearInfo_tec_ComM_SGWTimeYearInfo((uint8_T)SGW_Time_SigGroup.SGW_TimeInfoYear);
    //ComErr
	
	//ComM_SGWTimTimeoutDTCInfo_Bus
	boolean_T SGWTimTimeoutDTCErrorFail;
	boolean_T ComM_MonStatSGWTimTimeoutDTCErrorInfo;
	
	SGWTimTimeoutDTCErrorFail=((CGW_02_SigGroup.CGW_SGWSts)&&(!SGW_Time_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    SGWTimTimeoutDTCErrorFail, SGW_Time_SigGroup_RxFlg,
    CANHandler_ErrResSGWTimTimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatSGWTimTimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResSGWTimTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGWTimTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResSGWTimTimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.SGWTimTimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInfo_Bus.ComM_MonStatSGWTimTimeoutDTCErrorInfo
    = ComM_MonStatSGWTimTimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInfo_Bus.ComM_MonResSGWTimTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResSGWTimTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInfo_Bus.ComM_ErrStatSGWTimTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGWTimTimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInfo_Bus.ComM_ErrResSGWTimTimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResSGWTimTimeoutDTCErrorInfo;
	(void)Rte_Write_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutDTCInfo_Bus(
    &CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInfo_Bus);
	
    
    //ComM_SGWTimTimeoutInfo_Bus
	boolean_T SGWTimTimeoutFail;
	boolean_T ComM_MonStatSGWTimTimeoutInfo;
	
    SGWTimTimeoutFail = ((CGW_02_SigGroup.CGW_SGWSts) && (!SGW_Time_SigGroup_RxFlg) && (!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo));
	
    CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    SGWTimTimeoutFail, (!SGWTimTimeoutFail),
    CANHandler_ErrResSGWTimTimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle100ms), &ComM_MonStatSGWTimTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResSGWTimTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGWTimTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResSGWTimTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.SGWTimTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInf_f0p5.ComM_MonStatSGWTimTimeoutInfo
    = ComM_MonStatSGWTimTimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInf_f0p5.ComM_MonResSGWTimTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResSGWTimTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInf_f0p5.ComM_ErrStatSGWTimTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatSGWTimTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInf_f0p5.ComM_ErrResSGWTimTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResSGWTimTimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_SGWTimMsgErrInfo_Bus_tec_ComM_SGWTimTimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_SGWTimMsgErrInf_f0p5);

    /***********************************************SGW_Time**********************************************************************/

    /***********************************************MCU_DeratingStatus**********************************************************************/
      SG_MCU_DeratingStatus_SigGroup MCU_DeratingStatus_SigGroup;
      real32_T tec_ComM_MotMaxTq_Nm;
      real32_T tec_ComM_MotMinTq_Nm;
      /*
    * SG_MCU_DeratingStatus_SigGroup: Record with elements
    *   MCU_ActUnfilteredRotSpd of type MCU_ActUnfilteredRotSpd_1
    *   MCU_SpdMaxLimit of type MCU_SpdMaxLimit_1
    *   MCU_StDischg of type MCU_StDischg
    *   MCU_TrqAbsMax of type MCU_TrqAbsMax_2
    *   MCU_TrqAbsMin of type MCU_TrqAbsMin_2
    *   MCU_UT15State of type MCU_UT15State
    *   MCU_UT30Curr of type MCU_UT30Curr_1
      */
      (void)Rte_Read_SG_MCU_DeratingStatus_SigGroup_SG_MCU_DeratingStatus_SigGroup(&MCU_DeratingStatus_SigGroup);

      tec_ComM_MotMaxTq_Nm = CtAp_CANHandler_ATOM_SignalRead((real32_T)MCU_DeratingStatus_SigGroup.MCU_TrqAbsMax,CANHandler_Resolution_1, CANHandler_Offest_Minus1023);
      tec_ComM_MotMinTq_Nm = CtAp_CANHandler_ATOM_SignalRead((real32_T)MCU_DeratingStatus_SigGroup.MCU_TrqAbsMin,CANHandler_Resolution_1, CANHandler_Offest_Minus1023);
      (void)Rte_Write_RTE_P_ComM_MotMaxTq_Nm_tec_ComM_MotMaxTq_Nm(tec_ComM_MotMaxTq_Nm);
      (void)Rte_Write_RTE_P_ComM_MotMinTq_Nm_tec_ComM_MotMinTq_Nm(tec_ComM_MotMinTq_Nm);
    /***********************************************MCU_DeratingStatus**********************************************************************/

    /***********************************************DCM_FL_02**********************************************************************/
    //  SG_DCM_FL_02_SigGroup DCM_FL_02_SigGroup;
      uint32_T DCM_FL_02_SigGroup_ErrSts;
      /*
    * SG_DCM_FL_02_SigGroup: Record with elements
    *   Checksum_28A of type Checksum_28A_1
    *   DCM_FL_DoorFLSts of type DCM_FL_DoorFLSts
    *   MessageCounter_28A of type MessageCounter_28A_1
    */
   boolean_T DCM_FL_02_SigGroup_RxFlg;
   
	
	DCM_FL_02_SigGroup_RxFlg = Rte_IsUpdated_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup();
    DCM_FL_02_SigGroup_ErrSts = E2EPW_Read_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup(&DCM_FL_02_SigGroup);
   
      (void)Rte_Write_RTE_P_ComM_DoorFLStsInfo_tec_ComM_DoorFLStsInfo((uint8_T)DCM_FL_02_SigGroup.DCM_FL_DoorFLSts);
    //ComErr
	
	//ComM_DCMFL02CRCDTCInfo_Bus
	boolean_T DCMFL02CRCDTCErrorOtherCdn;
	boolean_T ComM_MonStatDCMFL02CRCDTCErrorInfo;
	
	DCMFL02CRCDTCErrorOtherCdn=(CGW_02_SigGroup.CGW_DCM_FLSts);
	
	CtAp_CANHandler_E2ECfm(DCM_FL_02_SigGroup.MessageCounter_28A,
    DCM_FL_02_SigGroup_RxFlg, DCM_FL_02_SigGroup_ErrSts,
    DCMFL02CRCDTCErrorOtherCdn, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.DCMFL02CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.DCMFL02CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.DCMFL02CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.DCMFL02CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.DCMFL02CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle100ms), &ComM_MonStatDCMFL02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFL02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFL02CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFL02CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.DCMFL02CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrInfo_Bu.ComM_MonStatDCMFL02CRCDTCErrorInfo
    = ComM_MonStatDCMFL02CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrInfo_Bu.ComM_MonResDCMFL02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFL02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrInfo_Bu.ComM_ErrStatDCMFL02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFL02CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrInfo_Bu.ComM_ErrResDCMFL02CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFL02CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrInfo_Bu);
	//ComM_DCMFL02TimeoutDTCInfo_Bus
	boolean_T DCMFL02TimeoutDTCErrorFail;
	boolean_T ComM_MonStatDCMFL02TimeoutDTCErrorInfo;
	
	DCMFL02TimeoutDTCErrorFail=((CGW_02_SigGroup.CGW_DCM_FLSts)&&(!DCM_FL_02_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    DCMFL02TimeoutDTCErrorFail, DCM_FL_02_SigGroup_RxFlg,
    CANHandler_ErrResDCMFL02TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatDCMFL02TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFL02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFL02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFL02TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.DCMFL02TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_cgd3.ComM_MonStatDCMFL02TimeoutDTCErrorInfo
    = ComM_MonStatDCMFL02TimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_cgd3.ComM_MonResDCMFL02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFL02TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_cgd3.ComM_ErrStatDCMFL02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFL02TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_cgd3.ComM_ErrResDCMFL02TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFL02TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_cgd3);
	//ComM_DCMFL02TimeoutInfo_Bus
	boolean_T DCMFL02TimeoutFail;
	boolean_T ComM_MonStatDCMFL02TimeoutInfo;
	
	DCMFL02TimeoutFail=((CGW_02_SigGroup.CGW_DCM_FLSts)&&(!DCM_FL_02_SigGroup_RxFlg)&&(!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_COMLostEnb_Flg,
    DCMFL02TimeoutFail, (!DCMFL02TimeoutFail),
    CANHandler_ErrResDCMFL02TimeoutMatureTime_CFG, ((uint16_T)CANHandler_U16Zero),
    ((uint16_T)CANHandler_Cycle100ms), &ComM_MonStatDCMFL02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFL02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFL02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFL02TimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.DCMFL02Timeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_mmhj.ComM_MonStatDCMFL02TimeoutInfo
    = ComM_MonStatDCMFL02TimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_mmhj.ComM_MonResDCMFL02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResDCMFL02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_mmhj.ComM_ErrStatDCMFL02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatDCMFL02TimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_mmhj.ComM_ErrResDCMFL02TimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResDCMFL02TimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_DCMFL02MsgErrInfo_Bus_tec_ComM_DCMFL02TimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_DCMFL02MsgErrIn_mmhj);

    /***********************************************DCM_FL_02**********************************************************************/

    /***********************************************ADCU_DA**********************************************************************/
    // * SG_ADCU_DA_SigGroup: Record with elements
    // *   ADCU_DA_Mode of type ADCU_DA_Mode
    // *   Checksum_0E6 of type Checksum_0E6_1
    // *   MessageCounter_0E6 of type MessageCounter_0E6
    boolean_T ADCU_DA_SigGroup_RxFlg;
   
    uint32_T ADCU_DA_SigGroup_ErrSts;

    ADCU_DA_SigGroup_RxFlg = Rte_IsUpdated_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup();
    ADCU_DA_SigGroup_ErrSts = E2EPW_Read_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup(&ADCU_DA_SigGroup);
    

    (void)Rte_Write_RTE_P_ComM_ADCUDAMod_tec_ComM_ADCUDAMod((uint8_T)ADCU_DA_SigGroup.ADCU_DA_Mode);

	
	boolean_T ADCU_DA_PNCEnable;
	boolean_T ADCUDAPNCEnable_Logical;
	
	ADCUDAPNCEnable_Logical = ((CGW_02_SigGroup.CGW_ADCUSts)&&ComM_CHCANDTCEnb_Flg);
	
	ADCU_DA_PNCEnable = CtAp_CANHandler_ATOM_TimeCnt
    (ADCUDAPNCEnable_Logical, ((uint16_T)CANHandler_Cycle100ms),
    CANHandler_PNC14SpcTimeoutEnable_CFG,
    &CtAp_CANHandler_ARID_DEF.ADCU_DA_PNCEnableInteral);
  //ComM_ADCUDACRCDTCInfo_Bus
	boolean_T ComM_MonStatADCUDACRCDTCErrorInfo;
	
	CtAp_CANHandler_E2ECfm(ADCU_DA_SigGroup.MessageCounter_0E6,
    ADCU_DA_SigGroup_RxFlg, ADCU_DA_SigGroup_ErrSts,
    ADCU_DA_PNCEnable, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.ADCUDACRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.ADCUDACRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.ADCUDACRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.ADCUDACRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.ADCUDACRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle100ms), &ComM_MonStatADCUDACRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUDACRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUDACRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUDACRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ADCUDACRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErrInfo_.ComM_MonStatADCUDACRCDTCErrorInfo
    = ComM_MonStatADCUDACRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErrInfo_.ComM_MonResADCUDACRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUDACRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErrInfo_.ComM_ErrStatADCUDACRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUDACRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErrInfo_.ComM_ErrResADCUDACRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUDACRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDACRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErrInfo_);
	//ComM_ADCUDATimeoutDTCInfo_Bus
	boolean_T ADCUDATimeoutDTCCfmFail;
	boolean_T ComM_MonStatADCUDATimeoutDTCErrorInfo;
	
	ADCUDATimeoutDTCCfmFail=(ADCU_DA_PNCEnable && (!ADCU_DA_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_CHCANDTCEnb_Flg, ADCUDATimeoutDTCCfmFail,
    ADCU_DA_SigGroup_RxFlg,
    ((uint16_T)1000), ((uint16_T)CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle100ms),
    &ComM_MonStatADCUDATimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResADCUDATimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUDATimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUDATimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ADCUDATimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErr_hyh1.ComM_MonStatADCUDATimeoutDTCErrorInfo
    = ComM_MonStatADCUDATimeoutDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErr_hyh1.ComM_MonResADCUDATimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResADCUDATimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErr_hyh1.ComM_ErrStatADCUDATimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatADCUDATimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErr_hyh1.ComM_ErrResADCUDATimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResADCUDATimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_ADCUDAMsgErrInfo_Bus_tec_ComM_ADCUDATimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_ADCUDAMsgErr_hyh1);

    /***********************************************ADCU_DA**********************************************************************/


   /***********************************************ADCU_APS_02**********************************************************************/
    //    * SG_ADCU_APS_02_SigGroup: Record with elements
    //    *   ADCU_RemoteParkingMode of type ADCU_RemoteParkingMode
    SG_ADCU_APS_02_SigGroup ADCU_APS_02_SigGroup;
    (void)Rte_Read_SG_ADCU_APS_02_SigGroup_SG_ADCU_APS_02_SigGroup(&ADCU_APS_02_SigGroup);

    (void)Rte_Write_RTE_P_ComM_ADCURemPrkMod_tec_ComM_ADCURemPrkMod((uint8_T)ADCU_APS_02_SigGroup.ADCU_RemoteParkingMode);



  /***********************************************ADCU_APS_02**********************************************************************/

  /***********************************************DCM_FR_02**********************************************************************/
  // * SG_DCM_FR_02_SigGroup: Record with elements
  // *   DCM_FR_AmbientTemperature of type DCM_FR_AmbientTemperature_1
  // *   DCM_FR_AmbientTemperatureValid of type DCM_FR_AmbientTemperatureValid


  SG_DCM_FR_02_SigGroup DCM_FR_02_SigGroup;
  real32_T tec_ComM_DCMAmbTemp;

  (void)Rte_Read_SG_DCM_FR_02_SigGroup_SG_DCM_FR_02_SigGroup(&DCM_FR_02_SigGroup);

  (void)Rte_Write_RTE_P_ComM_DCMAmbTempVld_tec_ComM_DCMAmbTempVld((boolean_T) DCM_FR_02_SigGroup.DCM_FR_AmbientTemperatureValid);
  tec_ComM_DCMAmbTemp = CtAp_CANHandler_ATOM_SignalRead((real32_T)DCM_FR_02_SigGroup.DCM_FR_AmbientTemperature,CANHandler_Resolution_1,CANHandler_Offest_Minus50);

  (void)Rte_Write_RTE_P_ComM_DCMAmbTemp_tec_ComM_DCMAmbTemp(tec_ComM_DCMAmbTemp);

 /***********************************************DCM_FR_02**********************************************************************/




}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID8 */
void R_CANHandlerOutput_Cyclic_100ms(void)
                            /* Explicit Task: R_CANHandlerOutput_Cyclic_100ms */
{
  /**********************************************************************************************************************
  * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
  * Symbol: R_CANHandler_Cyclic_100ms
  *********************************************************************************************************************/
//   boolean_T tec_ComM_TriggerASWMsgReqInfo;
//   (void)Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(&tec_ComM_TriggerASWMsgReqInfo);
//   if(tec_ComM_TriggerASWMsgReqInfo)
  {
    /***********************************************_VCU_03**********************************************************************/
      SG_VCU_03_SigGroup VCU_03_SigGroup;
      uint8_T tec_ChassisMgmt_BrkCmpSts_Enum;
      uint8_T tec_ChrMgmt_ChrgProcCmt_Enum;
      real32_T tec_ChrMgmt_VCUCalcdPODIDc_A;
      real32_T tec_ChrMgmt_OBCSideSngDchaEgy_kWh;
      boolean_T tec_ChrMgmt_ChrgMemFlt_Flg;

      (void)Rte_Read_RTE_R_ChassisMgmt_BrkCmpSts_Enum_tec_ChassisMgmt_BrkCmpSts_Enum(&tec_ChassisMgmt_BrkCmpSts_Enum);
      (void)Rte_Read_RTE_R_ChrMgmt_ChrgProcCmt_Enum_tec_ChrMgmt_ChrgProcCmt_Enum(&tec_ChrMgmt_ChrgProcCmt_Enum);
      (void)Rte_Read_RTE_R_ChrMgmt_VCUCalcdPODIDc_A_tec_ChrMgmt_VCUCalcdPODIDc_A(&tec_ChrMgmt_VCUCalcdPODIDc_A);
      (void)Rte_Read_RTE_R_ChrMgmt_OBCSideSngDchaEgy_kWh_tec_ChrMgmt_OBCSideSngDchaEgy_kWh(&tec_ChrMgmt_OBCSideSngDchaEgy_kWh);
      (void)Rte_Read_RTE_R_ChrMgmt_ChrgMemFlt_Flg_tec_ChrMgmt_ChrgMemFlt_Flg(&tec_ChrMgmt_ChrgMemFlt_Flg);

      tec_ChrMgmt_OBCSideSngDchaEgy_kWh = CtAp_CANHandler_ATOM_SignalSend(tec_ChrMgmt_OBCSideSngDchaEgy_kWh,CANHandler_Resolution_01, CANHandler_Offest_0);
        //   * SG_VCU_03_SigGroup: Record with elements
        //   *   VCU_BrakeCompensateStatus of type VCU_BrakeCompensateStatus_1
        //   *   VCU_ChargeProcessComment of type VCU_ChargeProcessComment_1
        //   *   VCU_DCFCCurrent of type VCU_DCFCCurrent_1
        //   *   VCU_EnergyV2L of type VCU_EnergyV2L_1
        //   *   VCU_MemoryChargeFault of type VCU_MemoryChargeFault_1

      VCU_03_SigGroup.VCU_BrakeCompensateStatus = (VCU_BrakeCompensateStatus_1)tec_ChassisMgmt_BrkCmpSts_Enum;
      VCU_03_SigGroup.VCU_ChargeProcessComment = (VCU_ChargeProcessComment_1)tec_ChrMgmt_ChrgProcCmt_Enum;
      VCU_03_SigGroup.VCU_DCFCCurrent = (VCU_DCFCCurrent_1)tec_ChrMgmt_VCUCalcdPODIDc_A;
      VCU_03_SigGroup.VCU_EnergyV2L = (VCU_EnergyV2L_1)tec_ChrMgmt_OBCSideSngDchaEgy_kWh;
      VCU_03_SigGroup.VCU_MemoryChargeFault = (VCU_MemoryChargeFault_1)tec_ChrMgmt_ChrgMemFlt_Flg;
      
      (void)Rte_Write_SG_VCU_03_SigGroup_SG_VCU_03_SigGroup(&VCU_03_SigGroup);
    /***********************************************_VCU_03**********************************************************************/

    /***********************************************VCU_06**********************************************************************/
      SG_VCU_06_SigGroup VCU_06_SigGroup;
      real32_T tec_ChrMgmt_SngChrgEgy_kWh;
      uint16_T tec_ChrMgmt_ChrgTim_min;
      real32_T tec_EgyMgmt_V2LDisChgPwrLmtInfo;
      uint16_T tec_RngEstimn_DynDrvMilg_km;
      real32_T tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw;
      boolean_T tec_EgyMgmt_PermtPckPTC_Flg;
      (void)Rte_Read_RTE_R_ChrMgmt_SngChrgEgy_kWh_tec_ChrMgmt_SngChrgEgy_kWh(&tec_ChrMgmt_SngChrgEgy_kWh);
      (void)Rte_Read_RTE_R_ChrMgmt_ChrgTim_min_tec_ChrMgmt_ChrgTim_min(&tec_ChrMgmt_ChrgTim_min);
      (void)Rte_Read_RTE_R_EgyMgmt_V2LDisChgPwrLmtInfo_tec_EgyMgmt_V2LDisChgPwrLmtInfo(&tec_EgyMgmt_V2LDisChgPwrLmtInfo);
      (void)Rte_Read_RTE_R_RngEstimn_DynDrvMilg_km_tec_RngEstimn_DynDrvMilg_km(&tec_RngEstimn_DynDrvMilg_km);
      (void)Rte_Read_RTE_R_EgyMgmt_AvgMCUPwrCnsCalcn_Kw_tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw(&tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw);
      (void)Rte_Read_RTE_R_EgyMgmt_PermtPckPTC_Flg_tec_EgyMgmt_PermtPckPTC_Flg(&tec_EgyMgmt_PermtPckPTC_Flg);
          
      tec_ChrMgmt_SngChrgEgy_kWh = CtAp_CANHandler_ATOM_SignalSend(tec_ChrMgmt_SngChrgEgy_kWh,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_EgyMgmt_V2LDisChgPwrLmtInfo = CtAp_CANHandler_ATOM_SignalSend(tec_EgyMgmt_V2LDisChgPwrLmtInfo,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw = CtAp_CANHandler_ATOM_SignalSend(tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw,CANHandler_Resolution_1, CANHandler_Offest_Minus400);
        //   * SG_VCU_06_SigGroup: Record with elements
        //   *   VCU_ChargeEnergy of type VCU_ChargeEnergy_1
        //   *   VCU_ChargeTime of type VCU_ChargeTime_1
        //   *   VCU_DisChgPowerLimit of type VCU_DisChgPowerLimit_1
        //   *   VCU_DisplayMileage of type VCU_DisplayMileage_1
        //   *   VCU_MCUPower of type VCU_MCUPower_1
        //   *   VCU_PermitPackPTC of type VCU_PermitPackPTC_1
      VCU_06_SigGroup.VCU_ChargeEnergy = (VCU_ChargeEnergy_1)tec_ChrMgmt_SngChrgEgy_kWh;
      VCU_06_SigGroup.VCU_ChargeTime = (VCU_ChargeTime_1)tec_ChrMgmt_ChrgTim_min;
      VCU_06_SigGroup.VCU_DisChgPowerLimit = (VCU_DisChgPowerLimit_1)tec_EgyMgmt_V2LDisChgPwrLmtInfo;
      VCU_06_SigGroup.VCU_DisplayMileage = (VCU_DisplayMileage_1)tec_RngEstimn_DynDrvMilg_km;
      VCU_06_SigGroup.VCU_MCUPower = (VCU_MCUPower_1)tec_EgyMgmt_AvgMCUPwrCnsCalcn_Kw;
      VCU_06_SigGroup.VCU_PermitPackPTC = (VCU_PermitPackPTC_1)tec_EgyMgmt_PermtPckPTC_Flg;
      (void)Rte_Write_SG_VCU_06_SigGroup_SG_VCU_06_SigGroup(&VCU_06_SigGroup);
    /***********************************************VCU_06**********************************************************************/

    /***********************************************VCU_04**********************************************************************/
      SG_VCU_04_SigGroup VCU_04_SigGroup ;
      boolean_T tec_TorqPahMgmt_FwdMaxSpdSts_Flg;
      uint8_T tec_OBCMgmt_MnyUnlckCmt_Enum;

      (void)Rte_Read_RTE_R_TorqPahMgmt_FwdMaxSpdSts_Flg_tec_TorqPahMgmt_FwdMaxSpdSts_Flg(&tec_TorqPahMgmt_FwdMaxSpdSts_Flg);
      (void)Rte_Read_RTE_R_OBCMgmt_MnyUnlckCmt_Enum_tec_OBCMgmt_MnyUnlckCmt_Enum(&tec_OBCMgmt_MnyUnlckCmt_Enum);

        //   * SG_VCU_04_SigGroup: Record with elements
        //   *   VCU_ForwardVmaxlimitStatus of type VCU_ForwardVmaxlimitStatus_4
        //   *   VCU_ManuallyUnlockComment of type VCU_ManuallyUnlockComment_3
        //   */
      VCU_04_SigGroup.VCU_ForwardVmaxlimitStatus = (VCU_ForwardVmaxlimitStatus_4)tec_TorqPahMgmt_FwdMaxSpdSts_Flg;
      VCU_04_SigGroup.VCU_ManuallyUnlockComment = (VCU_ManuallyUnlockComment_3)tec_OBCMgmt_MnyUnlckCmt_Enum;
    //   VCU_04_SigGroup.VCU_OnepadelFault = (VCU_OnepadelFault_2)((uint8_T)CANHandler_u8Zero);

      (void)Rte_Write_SG_VCU_04_SigGroup_SG_VCU_04_SigGroup(&VCU_04_SigGroup);
    /***********************************************VCU_04**********************************************************************/

    /***********************************************VCU_05**********************************************************************/
      SG_VCU_05_SigGroup VCU_05_SigGroup;
      real32_T tec_DCChrMgmt_MaxChrgIDc_A;
      real32_T tec_DCChrMgmt_MaxChrgUDc_V;
      real32_T tec_DCChrMgmt_MinChrgIDc_A;
      real32_T tec_DCChrMgmt_MinChrgUDc_V;

      (void)Rte_Read_RTE_R_DCChrMgmt_MaxChrgIDc_A_tec_DCChrMgmt_MaxChrgIDc_A(&tec_DCChrMgmt_MaxChrgIDc_A);
      (void)Rte_Read_RTE_R_DCChrMgmt_MaxChrgUDc_V_tec_DCChrMgmt_MaxChrgUDc_V(&tec_DCChrMgmt_MaxChrgUDc_V);
      (void)Rte_Read_RTE_R_DCChrMgmt_MinChrgIDc_A_tec_DCChrMgmt_MinChrgIDc_A(&tec_DCChrMgmt_MinChrgIDc_A);
      (void)Rte_Read_RTE_R_DCChrMgmt_MinChrgUDc_V_tec_DCChrMgmt_MinChrgUDc_V(&tec_DCChrMgmt_MinChrgUDc_V);

      tec_DCChrMgmt_MaxChrgUDc_V = CtAp_CANHandler_ATOM_SignalSend(tec_DCChrMgmt_MaxChrgUDc_V,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_DCChrMgmt_MinChrgUDc_V = CtAp_CANHandler_ATOM_SignalSend(tec_DCChrMgmt_MinChrgUDc_V,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_DCChrMgmt_MaxChrgIDc_A = CtAp_CANHandler_ATOM_SignalSend(tec_DCChrMgmt_MaxChrgIDc_A,CANHandler_Resolution_01, CANHandler_Offest_Minus400);
      tec_DCChrMgmt_MinChrgIDc_A = CtAp_CANHandler_ATOM_SignalSend(tec_DCChrMgmt_MinChrgIDc_A,CANHandler_Resolution_01, CANHandler_Offest_Minus400);
        //   * SG_VCU_05_SigGroup: Record with elements
        //   *   VCU_MaximumOutputCurrent of type VCU_MaximumOutputCurrent_1
        //   *   VCU_MaximumOutputVoltage of type VCU_MaximumOutputVoltage_1
        //   *   VCU_MinimumOutputCurrent of type VCU_MinimumOutputCurrent_1
        //   *   VCU_MinimumOutputVoltage of type VCU_MinimumOutputVoltage_1
      VCU_05_SigGroup.VCU_MaximumOutputCurrent = (VCU_MaximumOutputCurrent_1)tec_DCChrMgmt_MaxChrgIDc_A;
      VCU_05_SigGroup.VCU_MaximumOutputVoltage = (VCU_MaximumOutputVoltage_1)tec_DCChrMgmt_MaxChrgUDc_V;
      VCU_05_SigGroup.VCU_MinimumOutputCurrent = (VCU_MinimumOutputCurrent_1)tec_DCChrMgmt_MinChrgIDc_A;
      VCU_05_SigGroup.VCU_MinimumOutputVoltage = (VCU_MinimumOutputVoltage_1)tec_DCChrMgmt_MinChrgUDc_V;

      (void)Rte_Write_SG_VCU_05_SigGroup_SG_VCU_05_SigGroup(&VCU_05_SigGroup);
    /***********************************************VCU_05**********************************************************************/

    /***********************************************VCU_DCDC**********************************************************************/
      SG_VCU_DCDC_SigGroup VCU_DCDC_SigGroup;
      real32_T tec_EgyMgmt_DCDCPwrLmt_Kw;
      uint8_T tec_HvMgmt_ReqDCDCMod_Enum;
      real32_T tec_HvMgmt_DCDCDmdLvUDc_V;

      (void)Rte_Read_RTE_R_EgyMgmt_DCDCPwrLmt_Kw_tec_EgyMgmt_DCDCPwrLmt_Kw(&tec_EgyMgmt_DCDCPwrLmt_Kw);
      (void)Rte_Read_RTE_R_HvMgmt_ReqDCDCMod_Enum_tec_HvMgmt_ReqDCDCMod_Enum(&tec_HvMgmt_ReqDCDCMod_Enum);
      (void)Rte_Read_RTE_R_HvMgmt_DCDCDmdLvUDc_V_tec_HvMgmt_DCDCDmdLvUDc_V(&tec_HvMgmt_DCDCDmdLvUDc_V);

      tec_EgyMgmt_DCDCPwrLmt_Kw = CtAp_CANHandler_ATOM_SignalSend(tec_EgyMgmt_DCDCPwrLmt_Kw,CANHandler_Resolution_01, CANHandler_Offest_0);
      tec_HvMgmt_DCDCDmdLvUDc_V = CtAp_CANHandler_ATOM_SignalSend(tec_HvMgmt_DCDCDmdLvUDc_V,CANHandler_Resolution_0125, CANHandler_Offest_0);

        //   * SG_VCU_DCDC_SigGroup: Record with elements
        //   *   VCU_DCDCPowerLimit of type VCU_DCDCPowerLimit_1
        //   *   VCU_RequestedModeDCDC of type VCU_RequestedModeDCDC_1
        //   *   VCU_VoltageDemandLV of type VCU_VoltageDemandLV_1
      VCU_DCDC_SigGroup.VCU_DCDCPowerLimit = (VCU_DCDCPowerLimit_1)tec_EgyMgmt_DCDCPwrLmt_Kw;
      VCU_DCDC_SigGroup.VCU_RequestedModeDCDC = (VCU_RequestedModeDCDC_1)tec_HvMgmt_ReqDCDCMod_Enum;
      VCU_DCDC_SigGroup.VCU_VoltageDemandLV = (VCU_VoltageDemandLV_1)tec_HvMgmt_DCDCDmdLvUDc_V;

      (void)Rte_Write_SG_VCU_DCDC_SigGroup_SG_VCU_DCDC_SigGroup(&VCU_DCDC_SigGroup);
    /***********************************************VCU_DCDC**********************************************************************/

    /***********************************************VCU_TCU**********************************************************************/
      SG_VCU_TCU_SigGroup VCU_TCU_SigGroup;
      uint8_T tec_HvMgmt_ReqTCUMod_Enum;
      real32_T tec_EgyMgmt_TCUPwrAllwd_W;

      (void)Rte_Read_RTE_R_HvMgmt_ReqTCUMod_Enum_tec_HvMgmt_ReqTCUMod_Enum(&tec_HvMgmt_ReqTCUMod_Enum);
      (void)Rte_Read_RTE_R_EgyMgmt_TCUPwrAllwd_W_tec_EgyMgmt_TCUPwrAllwd_W(&tec_EgyMgmt_TCUPwrAllwd_W);

      tec_EgyMgmt_TCUPwrAllwd_W = CtAp_CANHandler_ATOM_SignalSend(tec_EgyMgmt_TCUPwrAllwd_W,CANHandler_Resolution_40, CANHandler_Offest_0);
        //   * SG_VCU_TCU_SigGroup: Record with elements
        //   *   VCU_RequestedModeTCU of type VCU_RequestedModeTCU_1
        //   *   VCU_TCUPowerAllowed of type VCU_TCUPowerAllowed_1
      VCU_TCU_SigGroup.VCU_RequestedModeTCU = (VCU_RequestedModeTCU_1)tec_HvMgmt_ReqTCUMod_Enum;
      VCU_TCU_SigGroup.VCU_TCUPowerAllowed = (VCU_TCUPowerAllowed_1)tec_EgyMgmt_TCUPwrAllwd_W;

      (void)Rte_Write_SG_VCU_TCU_SigGroup_SG_VCU_TCU_SigGroup(&VCU_TCU_SigGroup);

    /***********************************************VCU_TCU**********************************************************************/
  }
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID9 */
void R_CANHandlerInput_Cyclic_200ms(void)
                             /* Explicit Task: R_CANHandlerInput_Cyclic_200ms */
{
    
   //ComErr
    boolean_T LvMgmt_KL15ActSts_Flg;	
    boolean_T LvMgmt_BSBattUDcNorm_Flg;	
    boolean_T DiagApp_DisableDCMReqInfo;
    boolean_T EPTDTCTimeoutEnbale;

	boolean_T CHDTCTimeoutEnbale;
    boolean_T ComM_EPTCANDTCEnb_Flg;
    boolean_T ComM_CHCANDTCEnb_Flg;
	boolean_T ComM_COMLostEnb_Flg;
    dt_ComM_EPTCANBusOffInfo ComM_EPTCANBusOffInfo_Bus;
    dt_ComM_CHCANBusOffInfo ComM_CHCANBusOffInfo_Bus;	

    boolean_T ComM_VCUPNC14;    
	boolean_T ComM_CGWPNC14;  
    boolean_T ComM_VCUPNC16;    
	boolean_T ComM_CGWPNC16; 	
	boolean_T ComM_BMSPNC16; 
	boolean_T ComM_VCUPNC21;
	boolean_T ComM_CGWPNC21;
	boolean_T ComM_VCUPNC4;
	boolean_T ComM_CGWPNC4;
	boolean_T ComM_VCUPNC5;
	boolean_T ComM_CGWPNC5;
	boolean_T ComM_VCUPNC6;
	boolean_T ComM_CGWPNC6;
	boolean_T ComM_VCUPNC17;
	boolean_T ComM_CGWPNC17;
	boolean_T ComM_CGWPNC1;
	boolean_T ComM_VCUPNC1;
	boolean_T ComM_CGWPNC0;
	boolean_T ComM_VCUPNC0;
	boolean_T ComM_CGWPNC3;
	boolean_T ComM_VCUPNC3;
	boolean_T DCChrMgmt_DcChrgStrt_Flg;
	
	(void)Rte_Read_RTE_R_LvMgmt_KL15ActSts_Flg_tec_LvMgmt_KL15ActSts_Flg(&LvMgmt_KL15ActSts_Flg);
	(void)Rte_Read_RTE_R_LvMgmt_BSBattUDcNorm_Flg_tec_LvMgmt_BSBattUDcNorm_Flg(&LvMgmt_BSBattUDcNorm_Flg);
    (void)Rte_Read_RTE_R_DiagApp_DisableDCMReqInfo_tec_DiagApp_DisableDCMReqInfo(&DiagApp_DisableDCMReqInfo);
    (void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus(&ComM_CHCANBusOffInfo_Bus);
	(void)Rte_Read_RTE_R_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus(&ComM_EPTCANBusOffInfo_Bus);
	(void)Rte_Read_RTE_R_ComM_VCUPNC14_tec_ComM_VCUPNC14(&ComM_VCUPNC14);
	(void)Rte_Read_RTE_R_ComM_CGWPNC14_tec_ComM_CGWPNC14(&ComM_CGWPNC14);
	(void)Rte_Read_RTE_R_ComM_VCUPNC16_tec_ComM_VCUPNC16(&ComM_VCUPNC16);
	(void)Rte_Read_RTE_R_ComM_CGWPNC16_tec_ComM_CGWPNC16(&ComM_CGWPNC16);
	(void)Rte_Read_RTE_R_ComM_BMSPNC16_tec_ComM_BMSPNC16(&ComM_BMSPNC16);
	(void)Rte_Read_RTE_R_ComM_VCUPNC21_tec_ComM_VCUPNC21(&ComM_VCUPNC21);
	(void)Rte_Read_RTE_R_ComM_CGWPNC21_tec_ComM_CGWPNC21(&ComM_CGWPNC21);
	(void)Rte_Read_RTE_R_ComM_VCUPNC4_tec_ComM_VCUPNC4(&ComM_VCUPNC4);
	(void)Rte_Read_RTE_R_ComM_CGWPNC4_tec_ComM_CGWPNC4(&ComM_CGWPNC4);	
	(void)Rte_Read_RTE_R_ComM_VCUPNC5_tec_ComM_VCUPNC5(&ComM_VCUPNC5);
	(void)Rte_Read_RTE_R_ComM_CGWPNC5_tec_ComM_CGWPNC5(&ComM_CGWPNC5);
	(void)Rte_Read_RTE_R_ComM_VCUPNC6_tec_ComM_VCUPNC6(&ComM_VCUPNC6);
	(void)Rte_Read_RTE_R_ComM_CGWPNC6_tec_ComM_CGWPNC6(&ComM_CGWPNC6);
	(void)Rte_Read_RTE_R_ComM_VCUPNC17_tec_ComM_VCUPNC17(&ComM_VCUPNC17);
	(void)Rte_Read_RTE_R_ComM_CGWPNC17_tec_ComM_CGWPNC17(&ComM_CGWPNC17);
	(void)Rte_Read_RTE_R_DCChrMgmt_DcChrgStrt_Flg_tec_DCChrMgmt_DcChrgStrt_Flg(&DCChrMgmt_DcChrgStrt_Flg);
	(void)Rte_Read_RTE_R_ComM_CGWPNC1_tec_ComM_CGWPNC1(&ComM_CGWPNC1);
	(void)Rte_Read_RTE_R_ComM_VCUPNC1_tec_ComM_VCUPNC1(&ComM_VCUPNC1);
	(void)Rte_Read_RTE_R_ComM_CGWPNC0_tec_ComM_CGWPNC0(&ComM_CGWPNC0);
	(void)Rte_Read_RTE_R_ComM_VCUPNC0_tec_ComM_VCUPNC0(&ComM_VCUPNC0);
	(void)Rte_Read_RTE_R_ComM_CGWPNC3_tec_ComM_CGWPNC3(&ComM_CGWPNC3);
	(void)Rte_Read_RTE_R_ComM_VCUPNC3_tec_ComM_VCUPNC3(&ComM_VCUPNC3);

    /*************************************************CGW_02********************************************************************/
    (void)Rte_Read_SG_CGW_02_SigGroup_SG_CGW_02_SigGroup(&CGW_02_SigGroup);

    /*************************************************CGW_02********************************************************************/


	//ComM_CHCANDTCEnb_Flg
	
	EPTDTCTimeoutEnbale = ((!ComM_EPTCANBusOffInfo_Bus.ComM_ErrResEPTCANBusOffInfo) && (!DiagApp_DisableDCMReqInfo && LvMgmt_BSBattUDcNorm_Flg));
	CHDTCTimeoutEnbale = ((!ComM_CHCANBusOffInfo_Bus.ComM_ErrResCHCANBusOffInfo) && (!DiagApp_DisableDCMReqInfo && LvMgmt_BSBattUDcNorm_Flg));
		
	ComM_EPTCANDTCEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt(EPTDTCTimeoutEnbale, ((uint16_T)CANHandler_Cycle200ms),CANHandler_WkpCfmPreEnaTim_CFG,&CtAp_CANHandler_ARID_DEF.Cycle200msEPTDTCEnbInteral);
		
	ComM_CHCANDTCEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt
	(CHDTCTimeoutEnbale, ((uint16_T)CANHandler_Cycle200ms),
	CANHandler_WkpCfmPreEnaTim_CFG,
	&CtAp_CANHandler_ARID_DEF.Cycle200msCHDTCEnbInteral);
		
	ComM_COMLostEnb_Flg = CtAp_CANHandler_ATOM_TimeCnt(CANHandler_True,
	((uint16_T)CANHandler_Cycle200ms), CANHandler_WkpCfmPreEnaTim_CFG,
	&CtAp_CANHandler_ARID_DEF.Cycle200msCOMLostEnbInteral);
	
	
   /* ******************************************BCM_Authentication******************************************************/
   SG_BCM_Authentication_SigGroup BCM_Authentication_SigGroup;
   uint8_T tec_ComM_BCMAntithftSts_Enum;


    //    * SG_BCM_Authentication_SigGroup: Record with elements
    //    *   BCM_AntiTheftSts of type BCM_AntiTheftSts_3
    //    *   BCM_SecOCFV_334 of type BCM_SecOCFV_335
    //    *   BCM_SecOCMAC_334 of type BCM_SecOCMAC_335
   (void)Rte_Read_RTE_R_SecOC_BCM_Authentication_YDF_BCM_Authentication_YDF(&tec_ComM_BCMAntithftSts_Enum);

   (void)Rte_Write_RTE_P_ComM_BCMAntithftSts_Enum_tec_ComM_BCMAntithftSts_Enum(tec_ComM_BCMAntithftSts_Enum);

 /* ******************************************BCM_Authentication******************************************************/

 /* ******************************************BMS_ErrorInfo******************************************************/
   SG_BMS_ErrorInfo_SigGroup BMS_ErrorInfo_SigGroup;
   /*
 * SG_BMS_ErrorInfo_SigGroup: Record with elements
 *   BMS_DTC of type BMS_DTC_1
 *   BMS_ErrorBattOverVolt of type BMS_ErrorBattOverVolt
 *   BMS_ErrorBattUnderVolt of type BMS_ErrorBattUnderVolt
 *   BMS_ErrorBatVolt of type BMS_ErrorBatVolt
 *   BMS_ErrorBSUBalance of type BMS_ErrorBSUBalance
 *   BMS_ErrorBSUOffline of type BMS_ErrorBSUOffline
 *   BMS_ErrorCellHighTemp of type BMS_ErrorCellHighTemp_2
 *    of type BMS_ErrorCellLowTemp_2
 *   BMS_ErrorCellOverVolt of type BMS_ErrorCellOverVolt_2
 *   BMS_ErrorCellTempDiff of type BMS_ErrorCellTempDiff
 *   BMS_ErrorCellTempOffline of type BMS_ErrorCellTempOffline
 *   BMS_ErrorCellUnderVolt of type BMS_ErrorCellUnderVolt_2
 *   BMS_ErrorCellVoltDiff of type BMS_ErrorCellVoltDiff
 *   BMS_ErrorCellVoltOffline of type BMS_ErrorCellVoltOffline
 *   BMS_ErrorChaCurrentOver of type BMS_ErrorChaCurrentOver_2
 *   BMS_ErrorDisChaCurrentOver of type BMS_ErrorDisChaCurrentOver
 *   BMS_ErrorEmergencyOffCrash of type BMS_ErrorEmergencyOffCrash
 *   BMS_ErrorHallOffline of type BMS_ErrorHallOffline
 *   BMS_ErrorHighSoc of type BMS_ErrorHighSoc_2
 *   BMS_ErrorHVIL of type BMS_ErrorHVIL_2
 *   BMS_ErrorLeakCurrent of type BMS_ErrorLeakCurrent
 *   BMS_ErrorLeakDet of type BMS_ErrorLeakDet
 *   BMS_ErrorLowSoc of type BMS_ErrorLowSoc_2
 *   BMS_ErrorPreChaFailed of type BMS_ErrorPreChaFailed
 *   BMS_ErrorRelay of type BMS_ErrorRelay_2
 *   BMS_ErrorSmoke of type BMS_ErrorSmoke
 *   BMS_ErrorSoCJump_RM of type BMS_ErrorSoCJump_RM
 *   BMS_ErrorSystemsMatch of type BMS_ErrorSystemsMatch
 *   BMS_ThermalRunawayFault of type BMS_ThermalRunawayFault
 */
   boolean_T BMS_ErrorInfo_SigGroup_RxFlg;
   
   BMS_ErrorInfo_SigGroup_RxFlg =Rte_IsUpdated_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup();
   (void)Rte_Read_SG_BMS_ErrorInfo_SigGroup_SG_BMS_ErrorInfo_SigGroup(&BMS_ErrorInfo_SigGroup);

   Rte_Write_RTE_P_ComM_BMSCellHiTempErr_Enum_tec_ComM_BMSCellHiTempErr_Enum((uint8_T)BMS_ErrorInfo_SigGroup.BMS_ErrorCellHighTemp);
   Rte_Write_RTE_P_ComM_BMSErrRlySts_Enum_tec_ComM_BMSErrRlySts_Enum((uint8_T) BMS_ErrorInfo_SigGroup.BMS_ErrorRelay);
   Rte_Write_RTE_P_ComM_BMSSOCErrHiSts_Enum_tec_ComM_BMSSOCHiErrSts_Enum((uint8_T) BMS_ErrorInfo_SigGroup.BMS_ErrorHighSoc);
   Rte_Write_RTE_P_ComM_BMSSOCErrLoSts_Enum_tec_ComM_BMSSOCLoErrSts_Enum((uint8_T) BMS_ErrorInfo_SigGroup.BMS_ErrorLowSoc);
   Rte_Write_RTE_P_ComM_ChrgnIDcErrSts_Enum_tec_ComM_ChrgnIDcErrSts_Enum((uint8_T) BMS_ErrorInfo_SigGroup.BMS_ErrorChaCurrentOver);
   Rte_Write_RTE_P_ComM_MaxCellUDcErrSts_Enum_tec_ComM_MaxCellUDcErrSts_Enum((uint8_T) BMS_ErrorInfo_SigGroup.BMS_ErrorCellOverVolt);
   Rte_Write_RTE_P_ComM_MinCellUDcErrSts_Enum_tec_ComM_MinCellUDcErrSts_Enum((uint8_T) BMS_ErrorInfo_SigGroup.BMS_ErrorCellUnderVolt);
   //ComErr
   
   //ComM_BMSErrInfoTimeoutInfo_Bus
   boolean_T BMSErrInfoTimeoutFail;
   boolean_T ComM_MonStatBMSErrInfoTimeoutInfo;
   
   BMSErrInfoTimeoutFail=((!BMS_ErrorInfo_SigGroup_RxFlg)&&DCChrMgmt_DcChrgStrt_Flg);
	
	CtAp_CANHandler_ATOM_U16Err(CANHandler_True, BMSErrInfoTimeoutFail,
    BMS_ErrorInfo_SigGroup_RxFlg,
    CANHandler_ErrResBMSErrorInfoTimeoutMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle200ms),
    &ComM_MonStatBMSErrInfoTimeoutInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResBMSErrInfoTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSErrInfoTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSErrInfoTimeoutInfo,
    &CtAp_CANHandler_ARID_DEF.BMSErrInfoTimeout_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSErrInfoTimeoutInf.ComM_MonStatBMSErrInfoTimeoutInfo
    = ComM_MonStatBMSErrInfoTimeoutInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSErrInfoTimeoutInf.ComM_MonResBMSErrInfoTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBMSErrInfoTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSErrInfoTimeoutInf.ComM_ErrStatBMSErrInfoTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBMSErrInfoTimeoutInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSErrInfoTimeoutInf.ComM_ErrResBMSErrInfoTimeoutInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBMSErrInfoTimeoutInfo;
	
	(void)Rte_Write_RTE_P_ComM_BMSErrInfoTimeoutInfo_Bus_tec_ComM_BMSErrInfoTimeoutInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BMSErrInfoTimeoutInf);
 /* ******************************************BMS_ErrorInfo******************************************************/
 /* ******************************************BMS_TCU******************************************************/

   SG_BMS_TCU_SigGroup BMS_TCU_SigGroup;
   /*
   * SG_BMS_TCU_SigGroup: Record with elements
   *   BMS_AllowCellTemperature of type BMS_AllowCellTemperature_2
   *   BMS_KeepWarmRequest of type BMS_KeepWarmRequest_2
   *   BMS_KeepWarmStatus of type BMS_KeepWarmStatus_2
   *   BMS_RTC_Request of type BMS_RTC_Request_2
   */
 (void)Rte_Read_SG_BMS_TCU_SigGroup_SG_BMS_TCU_SigGroup(&BMS_TCU_SigGroup);

   Rte_Write_RTE_P_ComM_BMSKeepWrmReq_Enum_tec_ComM_BMSKeepWrmReq_Enum((uint8_T) BMS_TCU_SigGroup.BMS_KeepWarmRequest);
   Rte_Write_RTE_P_ComM_BMSKeepWrmSts_Enum_tec_ComM_BMSKeepWrmSts_Enum((uint8_T) BMS_TCU_SigGroup.BMS_KeepWarmStatus);
   Rte_Write_RTE_P_ComM_BMSRTCReq_Flg_tec_ComM_BMSRTCReq_Flg((boolean_T) BMS_TCU_SigGroup.BMS_RTC_Request);
 /* ******************************************BMS_TCU******************************************************/

 /* ******************************************POD_DCDC_02******************************************************/
   SG_POD_DCDC_02_SigGroup POD_DCDC_02_SigGroup;
   boolean_T POD_DCDC_02_SigGroup_RxFlg;
   boolean_T POD_DCDC_02_SigGroup_UpdateFlg;
   /*
   * SG_POD_DCDC_02_SigGroup: Record with elements
 *   POD_DCDC_FaultLevel of type POD_DCDC_FaultLevel_2
 *   POD_DCDC_InputVoltHighFault of type POD_DCDC_InputVoltHighFault
 *   POD_DCDC_InputVoltLowFault of type POD_DCDC_InputVoltLowFault
 *   POD_DCDC_InternalFault of type POD_DCDC_InternalFault
 *   POD_DCDC_Maxoutputpower of type POD_DCDC_Maxoutputpower_1
 *   POD_DCDC_OutCurSensorFault of type POD_DCDC_OutCurSensorFault
 *   POD_DCDC_OutputCurrentHighFault of type POD_DCDC_OutputCurrentHighFault
 *   POD_DCDC_Outputopencircuiterror of type POD_DCDC_Outputopencircuiterror
 *   POD_DCDC_OutputTempSensorFault of type POD_DCDC_OutputTempSensorFault
 *   POD_DCDC_OutputVoltHighFault of type POD_DCDC_OutputVoltHighFault
 *   POD_DCDC_OutputVoltLowFault of type POD_DCDC_OutputVoltLowFault
 *   POD_DCDC_SecondarySideTemp of type POD_DCDC_SecondarySideTemp_1
 *   POD_DCDC_Side2Overtempfault of type POD_DCDC_Side2Overtempfault_2
 */

   POD_DCDC_02_SigGroup_RxFlg = Rte_IsUpdated_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup();
   (void)Rte_Read_SG_POD_DCDC_02_SigGroup_SG_POD_DCDC_02_SigGroup(&POD_DCDC_02_SigGroup);

   POD_DCDC_02_SigGroup_UpdateFlg = CtAp_CANHandler_MessageUpdateDelay(CANHandler_CntOne,POD_DCDC_02_SigGroup_RxFlg,UpdateInnerCnt.PODDCDC02_UpdateCnt);
   (void)Rte_Write_RTE_P_ComM_PODDCDC02Update_tec_ComM_PODDCDC02Update(POD_DCDC_02_SigGroup_UpdateFlg);

   (void)Rte_Write_RTE_P_ComM_DCDCErrLvl_Enum_tec_ComM_DCDCErrLvl_Enum((uint8_T) POD_DCDC_02_SigGroup.POD_DCDC_FaultLevel);
   (void)Rte_Write_RTE_P_ComM_DCDCSide2OvrTempFlt_Flg_tec_ComM_DCDCSide2OvrTempFlt_Flg((boolean_T) POD_DCDC_02_SigGroup.POD_DCDC_Side2Overtempfault);
 /* ******************************************POD_DCDC_02******************************************************/

 /* ******************************************POD_OBC_STATUS_03******************************************************/
      SG_POD_OBC_STATUS_03_SigGroup POD_OBC_STATUS_03;
  //    real32_T tec_ComM_OBCPrimSideTemp_C;
  //    real32_T tec_ComM_OBCSecySideTemp_C;
      boolean_T POD_OBC_STATUS_03_SigGroup_RxFlg;
      boolean_T POD_OBC_STATUS_03_SigGroup_UpdateFlg;
  //  * SG_POD_OBC_STATUS_03_SigGroup: Record with elements
  //  *   POD_OBC_FaultLevel of type POD_OBC_FaultLevel_3
  //  *   POD_OBC_Side1Overtempfault of type POD_OBC_Side1Overtempfault_3
  //  *   POD_OBC_Side2Overtempfault of type POD_OBC_Side2Overtempfault_3
  //  *   POD_OBC_PrimarySideTemp of type POD_OBC_PrimarySideTemp_2
  //  *   POD_OBC_SecondarySideTemp of type POD_OBC_SecondarySideTemp_2
  //    */
   POD_OBC_STATUS_03_SigGroup_RxFlg = Rte_IsUpdated_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup();
   (void)Rte_Read_SG_POD_OBC_STATUS_03_SigGroup_SG_POD_OBC_STATUS_03_SigGroup(&POD_OBC_STATUS_03);

   POD_OBC_STATUS_03_SigGroup_UpdateFlg = CtAp_CANHandler_MessageUpdateDelay(CANHandler_CntOne,POD_OBC_STATUS_03_SigGroup_RxFlg,UpdateInnerCnt.PODOBCSts03_UpdateCnt);
   (void)Rte_Write_RTE_P_ComM_PODOBCSts03Update_tec_ComM_PODOBCSts03Update(POD_OBC_STATUS_03_SigGroup_UpdateFlg);

 //  tec_ComM_OBCPrimSideTemp_C = CtAp_CANHandler_ATOM_SignalRead((real32_T) POD_OBC_STATUS_03.POD_OBC_PrimarySideTemp,CANHandler_Resolution_1, CANHandler_Offest_Minus40);
 //  tec_ComM_OBCSecySideTemp_C = CtAp_CANHandler_ATOM_SignalRead((real32_T) POD_OBC_STATUS_03.POD_OBC_SecondarySideTemp,CANHandler_Resolution_1, CANHandler_Offest_Minus40);


   (void)Rte_Write_RTE_P_ComM_OBCErrLvl_Enum_tec_ComM_OBCErrLvl_Enum((uint8_T)POD_OBC_STATUS_03.POD_OBC_FaultLevel);
   (void)Rte_Write_RTE_P_ComM_OBCSide1OvrTempFlt_Flg_tec_ComM_OBCSide1OvrTempFlt_Flg((boolean_T)POD_OBC_STATUS_03.POD_OBC_Side1Overtempfault);
   (void)Rte_Write_RTE_P_ComM_OBCSide2OvrTempFlt_Flg_tec_ComM_OBCSide2OvrTempFlt_Flg((boolean_T)POD_OBC_STATUS_03.POD_OBC_Side2Overtempfault);
   //DBC need update
  //  (void)Rte_Write_RTE_P_ComM_OBCPrimSideTemp_C_tec_ComM_OBCPrimSideTemp_C((int8_T)tec_ComM_OBCPrimSideTemp_C);
  //  (void)Rte_Write_RTE_P_ComM_OBCSecySideTemp_C_tec_ComM_OBCSecySideTemp_C((int8_T)tec_ComM_OBCSecySideTemp_C);
 /* ******************************************POD_OBC_STATUS_03******************************************************/

 /* ******************************************BCM_05******************************************************/
 //  SG_BCM_05_SigGroup BCM_05_SigGroup;
   uint32_T BCM_05_SigGroup_ErrSts;
   /*
     * SG_BCM_05_SigGroup: Record with elements
   *   BCM_FLSeatBeltRemindReq of type BCM_FLSeatBeltRemindReq
   *   BCM_FRSeatBeltRemindReq of type BCM_FRSeatBeltRemindReq
   *   BCM_RLSeatBeltRemindReq of type BCM_RLSeatBeltRemindReq
   *   BCM_RRSeatBeltRemindReq of type BCM_RRSeatBeltRemindReq
   *   Checksum_33A of type Checksum_33A_1
   *   MessageCounter_33A of type MessageCounter_33A_1
   */
   boolean_T BCM_05_SigGroup_RxFlg;
   
   
   BCM_05_SigGroup_RxFlg = Rte_IsUpdated_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup();
   BCM_05_SigGroup_ErrSts = E2EPW_Read_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup(&BCM_05_SigGroup);
  
   (void)Rte_Write_RTE_P_ComM_FLSeatBltRmnReqInfo_tec_ComM_FLSeatBltRmnReqInfo((uint8_T)BCM_05_SigGroup.BCM_FLSeatBeltRemindReq);
   (void)Rte_Write_RTE_P_ComM_FRSeatBltRmnReqInfo_tec_ComM_FRSeatBltRmnReqInfo((uint8_T)BCM_05_SigGroup.BCM_FRSeatBeltRemindReq);
   (void)Rte_Write_RTE_P_ComM_RLSeatBltRmnReqInfo_tec_ComM_RLSeatBltRmnReqInfo((uint8_T)BCM_05_SigGroup.BCM_RLSeatBeltRemindReq);
   (void)Rte_Write_RTE_P_ComM_RRSeatBltRmnReqInfo_tec_ComM_RRSeatBltRmnReqInfo((uint8_T)BCM_05_SigGroup.BCM_RRSeatBeltRemindReq);
   //ComErr
   
   //ComM_BCM05CRCDTCInfo_Bus
   boolean_T BCM05CRCDTCErrorOtherCdn;
   boolean_T ComM_MonStatBCM05CRCDTCErrorInfo;
   
   BCM05CRCDTCErrorOtherCdn=(CGW_02_SigGroup.CGW_BCMSts);
   
	CtAp_CANHandler_E2ECfm(BCM_05_SigGroup.MessageCounter_33A,
    BCM_05_SigGroup_RxFlg, BCM_05_SigGroup_ErrSts,
    BCM05CRCDTCErrorOtherCdn, ((uint8_T)CANHandler_MAXDELTAcounterINIT),
    CANHandler_CRCWRONG, ((uint8_T)CANHandler_NE2EERROR_10), CANHandler_OK,
    &CtAp_CANHandler_ARID_DEF.BCM05CRCDTCErrorFail,
    &CtAp_CANHandler_ARID_DEF.BCM05CRCDTCErrorPass,
    &CtAp_CANHandler_ARID_DEF.BCM05CRCDTCErrorInteral);
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    CtAp_CANHandler_ARID_DEF.BCM05CRCDTCErrorFail,
    CtAp_CANHandler_ARID_DEF.BCM05CRCDTCErrorPass, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_U16Zero), ((uint16_T)
    CANHandler_Cycle200ms), &ComM_MonStatBCM05CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_MonResBCM05CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM05CRCDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM05CRCDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.BCM05CRCDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_Bus_.ComM_MonStatBCM05CRCDTCErrorInfo
    = ComM_MonStatBCM05CRCDTCErrorInfo;
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_Bus_.ComM_MonResBCM05CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBCM05CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_Bus_.ComM_ErrStatBCM05CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM05CRCDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_Bus_.ComM_ErrResBCM05CRCDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM05CRCDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05CRCDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_Bus_);
	//ComM_BCM05TimeoutDTCInfo_Bus
	boolean_T BCM05TimeoutDTCErrorFail;
	boolean_T ComM_MonStatBCM05TimeoutDTCErrorInfo;
	
	BCM05TimeoutDTCErrorFail=((CGW_02_SigGroup.CGW_BCMSts)&&(!BCM_05_SigGroup_RxFlg));
	
	CtAp_CANHandler_ATOM_U16Err(ComM_EPTCANDTCEnb_Flg,
    BCM05TimeoutDTCErrorFail, BCM_05_SigGroup_RxFlg,
    CANHandler_ErrResBCM05TimeoutDTCMatureTime_CFG, ((uint16_T)
    CANHandler_U16Zero), ((uint16_T)CANHandler_Cycle200ms),
    &ComM_MonStatBCM05TimeoutDTCErrorInfo, &CtAp_CANHandler_ARID_DEF.ComM_MonResBCM05TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM05TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM05TimeoutDTCErrorInfo,
    &CtAp_CANHandler_ARID_DEF.BCM05TimeoutDTCError_U16ErrorHandInteral);
	
	CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_jojc.ComM_MonStatBCM05TimeoutDTCErrorInfo
    = ComM_MonStatBCM05TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_jojc.ComM_MonResBCM05TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_MonResBCM05TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_jojc.ComM_ErrStatBCM05TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrStatBCM05TimeoutDTCErrorInfo;
    CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_jojc.ComM_ErrResBCM05TimeoutDTCErrorInfo
    = CtAp_CANHandler_ARID_DEF.ComM_ErrResBCM05TimeoutDTCErrorInfo;
	
	(void)Rte_Write_RTE_P_ComM_BCM05MsgErrInfo_Bus_tec_ComM_BCM05TimeoutDTCInfo_Bus
    (&CtAp_CANHandler_ARID_DEF.RTE_P_ComM_BCM05MsgErrInfo_jojc);

 /* ******************************************BCM_05******************************************************/

}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID10 */
void R_CANHandlerOutput_Cyclic_200ms(void)
                            /* Explicit Task: R_CANHandlerOutput_Cyclic_200ms */
{
//   boolean_T tec_ComM_TriggerASWMsgReqInfo;
//   (void)Rte_Read_RTE_R_ComM_TriggerASWMsgReqInfo_tec_ComM_TriggerASWMsgReqInfo(&tec_ComM_TriggerASWMsgReqInfo);
//   if(tec_ComM_TriggerASWMsgReqInfo)
  {
    /* ******************************************VCU_PlugInChrgInfo******************************************************/
      SG_VCU_PlugInChrgInfo_SigGroup VCU_PlugInChrgInfo_SigGroup;
      uint8_T tec_ChrMgmt_ChrgAbortRsn_Enum;
      uint8_T tec_ChrMgmt_DchaAbortRsn_Enum;
      boolean_T tec_HvMgmt_HVConnFlt_Flg;
      uint16_T tec_ChrgMgmt_ChrgnRemnTim_min;
      (void)Rte_Read_RTE_R_ChrMgmt_ChrgAbortRsn_Enum_tec_ChrMgmt_ChrgAbortRsn_Enum(&tec_ChrMgmt_ChrgAbortRsn_Enum);
      (void)Rte_Read_RTE_R_ChrMrmt_DchaAbortRsn_Enum_tec_ChrMgmt_DchaAbortRsn_Enum(&tec_ChrMgmt_DchaAbortRsn_Enum);
      (void)Rte_Read_RTE_R_HvMgmt_HVConnFlt_Flg_tec_HvMgmt_HVConnFlt_Flg(&tec_HvMgmt_HVConnFlt_Flg);
      (void)Rte_Read_RTE_R_ChrMgmt_ChrgnRemnTim_min_tec_ChrgMgmt_ChrgnRemnTim_min(&tec_ChrgMgmt_ChrgnRemnTim_min);

      VCU_PlugInChrgInfo_SigGroup.VCU_ChargeEndReason = (VCU_ChargeEndReason_1) tec_ChrMgmt_ChrgAbortRsn_Enum;
      VCU_PlugInChrgInfo_SigGroup.VCU_DischargeEndReason = (VCU_DischargeEndReason_1) tec_ChrMgmt_DchaAbortRsn_Enum;
      VCU_PlugInChrgInfo_SigGroup.VCU_HVConnectFault = (VCU_HVConnectFault_1) tec_HvMgmt_HVConnFlt_Flg;
      VCU_PlugInChrgInfo_SigGroup.VCU_RemainChrgTime = (VCU_RemainChrgTime_1) tec_ChrgMgmt_ChrgnRemnTim_min;
        //   * SG_VCU_PlugInChrgInfo_SigGroup: Record with elements
        //   *   VCU_ChargeEndReason of type VCU_ChargeEndReason_1
        //   *   VCU_DischargeEndReason of type VCU_DischargeEndReason_1
        //   *   VCU_HVConnectFault of type VCU_HVConnectFault_1
        //   *   VCU_RemainChrgTime of type VCU_RemainChrgTime_1
      (void)Rte_Write_SG_VCU_PlugInChrgInfo_SigGroup_SG_VCU_PlugInChrgInfo_SigGroup(&VCU_PlugInChrgInfo_SigGroup);
    /* ******************************************VCU_PlugInChrgInfo******************************************************/

    /* ******************************************VCU_HMIsignals_03******************************************************/
      SG_VCU_HMIsignals_03_SigGroup VCU_HMIsignals_03_SigGroup;
      real32_T tec_ChrMgmt_VCUDispChrgU_V;
      real32_T tec_ComM_BSHCrnt;
      real32_T tec_ComM_BSQuiescentCurrent ;

      (void)Rte_Read_RTE_R_ChrMgmt_VCUDispChrgU_V_tec_ChrMgmt_VCUDispChrgU_V(&tec_ChrMgmt_VCUDispChrgU_V);
      
       (void)Rte_Read_RTE_R_ComM_BSHCrnt_tec_ComM_BSHCrnt(&tec_ComM_BSHCrnt);
       (void)Rte_Read_RTE_R_ComM_BSQuiescentCurrent_tec_ComM_BSQuiescentCurrent(&tec_ComM_BSQuiescentCurrent);

   tec_ComM_BSQuiescentCurrent = CtAp_CANHandler_ATOM_SignalSend(tec_ComM_BSQuiescentCurrent,CANHandler_Resolution_000390625, CANHandler_Offest_0);
   tec_ComM_BSHCrnt = CtAp_CANHandler_ATOM_SignalSend(tec_ComM_BSHCrnt,CANHandler_Resolution_00625, CANHandler_Offest_Minus2048);


        //   * SG_VCU_HMIsignals_03_SigGroup: Record with elements
        //   *   VCU_Display_voltage of type VCU_Display_voltage_3
      VCU_HMIsignals_03_SigGroup.VCU_Display_voltage = (VCU_Display_voltage_3)tec_ChrMgmt_VCUDispChrgU_V;
     VCU_HMIsignals_03_SigGroup.VCU_BS_QuiescentCurrent = (VCU_BS_QuiescentCurrent)tec_ComM_BSQuiescentCurrent;
     VCU_HMIsignals_03_SigGroup.VCU_BS_HCurrent = (VCU_BS_HCurrent)tec_ComM_BSHCrnt;
     
            
      (void)Rte_Write_SG_VCU_HMIsignals_03_SigGroup_1_SG_VCU_HMIsignals_03_SigGroup(&VCU_HMIsignals_03_SigGroup);
    /* ******************************************VCU_HMIsignals_03******************************************************/

    /* ******************************************VCU_HMIsignals_01******************************************************/
      SG_VCU_HMIsignals_01_SigGroup VCU_HMIsignals_01_SigGroup;
      uint8_T tec_ErrMgmt_SysFailLamp_Enum;
      boolean_T tec_ErrMgmt_DCDCFailLamp_Flg;
      dt_ErrMgmt_DrvMotTempOvrLamp tec_ErrMgmt_DrvMotTempOvrLamp_Bus;
      uint8_T tec_ErrMgmt_HvBattFailLamp;
      dt_ErrMgmt_HvBattTempOvrLamp tec_ErrMgmt_HvBattTempOvrLamp_Bus;
      dt_ErrMgmt_VehHVIL tec_ErrMgmt_VehHVIL_Bus;
      dt_ErrMgmt_InslaFlt tec_ErrMgmt_InslaFlt_Bus;
      uint8_T tec_GearMgmt_InvldGearSel_Enum;
      boolean_T tec_ErrMgmt_LimpHomeLamp_Flg;
      uint8_T tec_ChrMgmt_PlugSts_Enum;
      boolean_T tec_LvMgmt_ReachLimStdInfo;
      boolean_T tec_ChrMgmt_MileagelowRemind;
      (void)Rte_Read_RTE_R_ErrMgmt_SysFailLamp_Enum_tec_ErrMgmt_SysFailLamp_Enum(&tec_ErrMgmt_SysFailLamp_Enum);
      (void)Rte_Read_RTE_R_ErrMgmt_DCDCFailLamp_Flg_tec_ErrMgmt_DCDCFailLamp_Flg(&tec_ErrMgmt_DCDCFailLamp_Flg);
      (void)Rte_Read_RTE_R_ErrMgmt_DrvMotTempOvrLamp_Bus_tec_ErrMgmt_DrvMotTempOvrLamp_Bus(&tec_ErrMgmt_DrvMotTempOvrLamp_Bus);
      (void)Rte_Read_RTE_R_ErrMgmt_HvBattFailLamp_tec_ErrMgmt_HvBattFailLamp(&tec_ErrMgmt_HvBattFailLamp);
      (void)Rte_Read_RTE_R_ErrMgmt_HvBattTempOvrLamp_Bus_tec_ErrMgmt_HvBattTempOvrLamp_Bus(&tec_ErrMgmt_HvBattTempOvrLamp_Bus);
      (void)Rte_Read_RTE_R_ErrMgmt_VehHVIL_Bus_tec_ErrMgmt_VehHVIL_Bus(&tec_ErrMgmt_VehHVIL_Bus);
      (void)Rte_Read_RTE_R_ErrMgmt_InslaFlt_Bus_tec_ErrMgmt_InslaFlt_Bus(&tec_ErrMgmt_InslaFlt_Bus);
      (void)Rte_Read_RTE_R_GearMgmt_InvldGearSel_Enum_tec_GearMgmt_InvldGearSel_Enum(&tec_GearMgmt_InvldGearSel_Enum);
      (void)Rte_Read_RTE_R_ErrMgmt_LimpHomeLamp_Flg_tec_ErrMgmt_LimpHomeLamp_Flg(&tec_ErrMgmt_LimpHomeLamp_Flg);
      (void)Rte_Read_RTE_R_ChrMgmt_PlugSts_Enum_tec_ChrMgmt_PlugSts_Enum(&tec_ChrMgmt_PlugSts_Enum);
      (void)Rte_Read_RTE_R_LvMgmt_ReachLimStdInfo_tec_LvMgmt_ReachLimStdInfo(&tec_LvMgmt_ReachLimStdInfo);
      (void)Rte_Read_RTE_R_RngEstimn_MilgLowRmn_tec_RngEstimn_MilgLowRmn(&tec_ChrMgmt_MileagelowRemind);
        //   * SG_VCU_HMIsignals_01_SigGroup: Record with elements
        //   *   Checksum_317 of type Checksum_325
        //   *   MessageCounter_317 of type MessageCounter_325
        //   *   VCU_CriSysFailure of type VCU_CriSysFailure
        //   *   VCU_DCDCFail of type VCU_DCDCFail_6
        //   *   VCU_DriveMotOvrTemp of type VCU_DriveMotOvrTemp
        //   *   VCU_HVBatCriFail of type VCU_HVBatCriFail
        //   *   VCU_HVBatOvrTemp of type VCU_HVBatOvrTemp_5
        //   *   VCU_HVILError of type VCU_HVILError
        //   *   VCU_HVInsulResFault of type VCU_HVInsulResFault
        //   *   VCU_InvldGearSel of type VCU_InvldGearSel
        //   *   VCU_LimpHome of type VCU_LimpHome
        //   *   VCU_PlugStatus of type VCU_PlugStatus
        //   *   VCU_ReachLimitStd of type VCU_ReachLimitStd
        //   *   VCU_MileagelowRemind of type VCU_MileagelowRemind
      VCU_HMIsignals_01_SigGroup.Checksum_317 = (Checksum_325)((uint8_T)CANHandler_u8Zero);
      VCU_HMIsignals_01_SigGroup.MessageCounter_317 = (MessageCounter_325)((uint8_T)CANHandler_u8Zero);
      VCU_HMIsignals_01_SigGroup.VCU_CriSysFailure = (VCU_CriSysFailure)tec_ErrMgmt_SysFailLamp_Enum;
      VCU_HMIsignals_01_SigGroup.VCU_DCDCFail = (VCU_DCDCFail_6)tec_ErrMgmt_DCDCFailLamp_Flg;
    //   VCU_HMIsignals_01_SigGroup.VCU_DegradedPerformance = (VCU_DegradedPerformance)((uint8_T)CANHandler_u8Zero);
    //   VCU_HMIsignals_01_SigGroup.VCU_DegradedRegenBraking = (VCU_DegradedRegenBraking)((uint8_T)CANHandler_u8Zero);
    //   VCU_HMIsignals_01_SigGroup.VCU_DriveMotOverSpd = (VCU_DriveMotOverSpd)((uint8_T)CANHandler_u8Zero);
      VCU_HMIsignals_01_SigGroup.VCU_DriveMotOvrTemp = (VCU_DriveMotOvrTemp)tec_ErrMgmt_DrvMotTempOvrLamp_Bus.ErrMgmt_ErrResMCUTempOvr;
    //   VCU_HMIsignals_01_SigGroup.VCU_DrvDirCtrlFlt = (VCU_DrvDirCtrlFlt)((uint8_T)CANHandler_u8Zero);
    //   VCU_HMIsignals_01_SigGroup.VCU_FrMotorSpd = (VCU_FrMotorSpd)((uint8_T)CANHandler_u8Zero);
    //   VCU_HMIsignals_01_SigGroup.VCU_HVBatCoolOvrTemp = (VCU_HVBatCoolOvrTemp)((uint8_T)CANHandler_u8Zero);
      VCU_HMIsignals_01_SigGroup.VCU_HVBatCriFail = (VCU_HVBatCriFail)tec_ErrMgmt_HvBattFailLamp;
    //   VCU_HMIsignals_01_SigGroup.VCU_HVBatLowSocWar = (VCU_HVBatLowSocWar)((uint8_T)CANHandler_u8Zero);
      VCU_HMIsignals_01_SigGroup.VCU_HVBatOvrTemp = (VCU_HVBatOvrTemp_5)tec_ErrMgmt_HvBattTempOvrLamp_Bus.ErrMgmt_ErrResBMSTempOvr;
    //   VCU_HMIsignals_01_SigGroup.VCU_HVBatUndTemp = (VCU_HVBatUndTemp)((uint8_T)CANHandler_u8Zero);
      VCU_HMIsignals_01_SigGroup.VCU_HVILError = (VCU_HVILError)tec_ErrMgmt_VehHVIL_Bus.ErrMgmt_ErrResVehHVIL;
      VCU_HMIsignals_01_SigGroup.VCU_HVInsulResFault = (VCU_HVInsulResFault)tec_ErrMgmt_InslaFlt_Bus.ErrMgmt_ErrResVehHVInsla;
      VCU_HMIsignals_01_SigGroup.VCU_InvldGearSel = (VCU_InvldGearSel)tec_GearMgmt_InvldGearSel_Enum;
      VCU_HMIsignals_01_SigGroup.VCU_LimpHome = (VCU_LimpHome)tec_ErrMgmt_LimpHomeLamp_Flg;
      VCU_HMIsignals_01_SigGroup.VCU_PlugStatus = (VCU_PlugStatus)tec_ChrMgmt_PlugSts_Enum;
      VCU_HMIsignals_01_SigGroup.VCU_ReachLimitStd = (VCU_ReachLimitStd)((uint8_T)tec_LvMgmt_ReachLimStdInfo);
      VCU_HMIsignals_01_SigGroup.VCU_MileagelowRemind = (VCU_MileagelowRemind)tec_ChrMgmt_MileagelowRemind;
    //   VCU_HMIsignals_01_SigGroup.VCU_RrMotorSpd = (VCU_RrMotorSpd)((uint8_T)CANHandler_u8Zero);
    //   VCU_HMIsignals_01_SigGroup.VCU_UnavailRegenBraking = (VCU_UnavailRegenBraking)((uint8_T)CANHandler_u8Zero);

      (void)E2EPW_Write_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup(&VCU_HMIsignals_01_SigGroup);
    /* ******************************************VCU_HMIsignals_01******************************************************/

    /* ******************************************VCU_HMIsignals_02******************************************************/
      SG_VCU_HMIsignals_02_SigGroup VCU_HMIsignals_02_SigGroup;
      uint8_T tec_ChrMgmt_DchaAbortSOC_pct;
      real32_T tec_ChrMgmt_VCUDispChrgI_A;
      real32_T tec_ChrMgmt_VCUDispChrgPwr_kW;
      uint8_T tec_TorqPahMgmt_FwdMaxVehSpd_Enum;
      uint8_T tec_ChrMgmt_ChrgTarSOC_pct;
      uint8_T tec_ErrMgmt_MCUFltLamp;
      uint8_T tec_ModMgmt_HvSts_Enum;
      (void)Rte_Read_RTE_R_ChrMgmt_DchaAbortSOC_pct_tec_ChrMgmt_DchaAbortSOC_pct(&tec_ChrMgmt_DchaAbortSOC_pct);
      (void)Rte_Read_RTE_R_ChrMgmt_VCUDispChrgI_A_tec_ChrMgmt_VCUDispChrgI_A(&tec_ChrMgmt_VCUDispChrgI_A);
      (void)Rte_Read_RTE_R_ChrMgmt_ChrgPwr_kW_tec_ChrMgmt_VCUDispChrgPwr_kW(&tec_ChrMgmt_VCUDispChrgPwr_kW);
      (void)Rte_Read_RTE_R_TorqPahMgmt_FwdMaxVehSpd_Enum_tec_TorqPahMgmt_FwdMaxVehSpd_Enum(&tec_TorqPahMgmt_FwdMaxVehSpd_Enum);
      (void)Rte_Read_RTE_R_ChrMgmt_ChrgTarSOC_pct_tec_ChrMgmt_ChrgTarSOC_pct(&tec_ChrMgmt_ChrgTarSOC_pct);
      (void)Rte_Read_RTE_R_ErrMgmt_MCUFltLamp_tec_ErrMgmt_MCUFltLamp(&tec_ErrMgmt_MCUFltLamp);
      (void)Rte_Read_RTE_R_ModMgmt_HvSts_Enum_tec_ModMgmt_HvSts_Enum(&tec_ModMgmt_HvSts_Enum);

      tec_ChrMgmt_VCUDispChrgPwr_kW = CtAp_CANHandler_ATOM_SignalSend(tec_ChrMgmt_VCUDispChrgPwr_kW,CANHandler_Resolution_01, CANHandler_Offest_0);
        //   * SG_VCU_HMIsignals_02_SigGroup: Record with elements
        //   *   Checksum_318 of type Checksum_323
        //   *   MessageCounter_318 of type MessageCounter_323
        //   *   VCU_DischargeEndSoc of type VCU_DischargeEndSoc_2
        //   *   VCU_Display_Cur of type VCU_Display_Cur_2
        //   *   VCU_Display_Power of type VCU_Display_Power_2
        //   *   VCU_ForwardVmaxAllowed of type VCU_ForwardVmaxAllowed
        //   *   VCU_maxChargeSOC of type VCU_maxChargeSOC
        //   *   VCU_MCU_FaultLampReq of type VCU_MCU_FaultLampReq
        //   *   VCU_SystemReady of type VCU_SystemReady
      VCU_HMIsignals_02_SigGroup.Checksum_318 = (Checksum_323)((uint8_T)CANHandler_u8Zero);
      VCU_HMIsignals_02_SigGroup.MessageCounter_318 = (MessageCounter_323)((uint8_T)CANHandler_u8Zero);
      VCU_HMIsignals_02_SigGroup.VCU_DischargeEndSoc = (VCU_DischargeEndSoc_2)tec_ChrMgmt_DchaAbortSOC_pct;
      VCU_HMIsignals_02_SigGroup.VCU_Display_Cur = (VCU_Display_Cur_2)tec_ChrMgmt_VCUDispChrgI_A;
      VCU_HMIsignals_02_SigGroup.VCU_Display_Power = (VCU_Display_Power_2)tec_ChrMgmt_VCUDispChrgPwr_kW;
      VCU_HMIsignals_02_SigGroup.VCU_ForwardVmaxAllowed = (VCU_ForwardVmaxAllowed)tec_TorqPahMgmt_FwdMaxVehSpd_Enum;
    //   VCU_HMIsignals_02_SigGroup.VCU_InterfaceReq = (VCU_InterfaceReq)((uint8_T)CANHandler_u8Zero);
      VCU_HMIsignals_02_SigGroup.VCU_maxChargeSOC = (VCU_maxChargeSOC)tec_ChrMgmt_ChrgTarSOC_pct;
      VCU_HMIsignals_02_SigGroup.VCU_MCU_FaultLampReq = (VCU_MCU_FaultLampReq)tec_ErrMgmt_MCUFltLamp;
      VCU_HMIsignals_02_SigGroup.VCU_SystemReady = (VCU_SystemReady)(tec_ModMgmt_HvSts_Enum == (uint8_T)CANHandler_DriveReady);

      (void)E2EPW_Write_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup(&VCU_HMIsignals_02_SigGroup);

    /* ******************************************VCU_HMIsignals_02******************************************************/

    /* ******************************************VCU_02******************************************************/
      SG_VCU_02_SigGroup VCU_02_SigGroup;
      real32_T tec_ComM_BSBatVltHlResInfo;
      real32_T tec_ComM_BSBattSOC_pct;
      boolean_T tec_LvMgmt_IndicatorLightStsInfo;
      real32_T tec_ComM_BSBatCrnt;
      uint8_T tec_LvMgmt_AppNMReqInfo;

      (void)Rte_Read_RTE_R_ComM_BSBattSOC_pct_tec_ComM_BSBattSOC_pct(&tec_ComM_BSBattSOC_pct);
      (void)Rte_Read_RTE_R_ComM_BSBatVltHlResInfo_tec_ComM_BSBatVltHlResInfo(&tec_ComM_BSBatVltHlResInfo);
      (void)Rte_Read_RTE_R_LvMgmt_IndicatorLightStsInfo_tec_LvMgmt_IndicatorLightStsInfo(&tec_LvMgmt_IndicatorLightStsInfo);
      (void)Rte_Read_RTE_R_ComM_BSBatCrnt_tec_ComM_BSBatCrnt(&tec_ComM_BSBatCrnt);
      (void)Rte_Read_RTE_R_LvMgmt_AppNMReqInfo_tec_LvMgmt_AppNMReqInfo(&tec_LvMgmt_AppNMReqInfo);
     

      
      tec_ComM_BSBatVltHlResInfo = CtAp_CANHandler_ATOM_SignalSend(tec_ComM_BSBatVltHlResInfo,CANHandler_Resolution_0001, CANHandler_Offest_0);
      tec_ComM_BSBatCrnt = CtAp_CANHandler_ATOM_SignalSend(tec_ComM_BSBatCrnt,CANHandler_Resolution_0001, CANHandler_Offest_Minus8d192);

        //   * SG_VCU_02_SigGroup: Record with elements
        //   *   VCU_BS_IBSBatSOC of type VCU_BS_IBSBatSOC_3
        //   *   VCU_BS_LV_Batt of type VCU_BS_LV_Batt_3
        //   *   VCU_BS_Current of type VCU_BS_Current_1
        //   *   VCU_BS_IndicatorSts of type VCU_BS_IndicatorSts
        //   *   VCU_WakeUpStatus of type VCU_WakeUpStatus_1
      VCU_02_SigGroup.VCU_BS_IBSBatSOC = (VCU_BS_IBSBatSOC_3)tec_ComM_BSBattSOC_pct;
      VCU_02_SigGroup.VCU_BS_LV_Batt = (VCU_BS_LV_Batt_3)tec_ComM_BSBatVltHlResInfo;
      VCU_02_SigGroup.VCU_BS_IndicatorSts = (VCU_BS_IndicatorSts)tec_LvMgmt_IndicatorLightStsInfo;
      VCU_02_SigGroup.VCU_BS_Current = (VCU_BS_Current_1)tec_ComM_BSBatCrnt;
      VCU_02_SigGroup.VCU_WakeUpStatus = (VCU_WakeUpStatus_1)tec_LvMgmt_AppNMReqInfo;

      (void)Rte_Write_SG_VCU_02_SigGroup_SG_VCU_02_SigGroup(&VCU_02_SigGroup);

    /* ******************************************VCU_02******************************************************/
  }
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID11 */
void R_CANHandlerInput_Cyclic_500ms(void)
                             /* Explicit Task: R_CANHandlerInput_Cyclic_500ms */
{
  /*****************************************MCU_Temperature_02******************************************************** */
  SG_MCU_Temperature_02_SigGroup SG_MCU_Temperature_02_SigGroupBus;
  uint8_T tec_ComM_MCUTempOvrSts_Enum;


  /*
  * SG_MCU_Temperature_02_SigGroup: Record with elements
  *   MCU_IGBTOverTempWarn of type MCU_IGBTOverTempWarn
  *   MCU_MotOverTempWarn of type MCU_MotOverTempWarn
  *   MCU_TempCurrCool of type MCU_TempCurrCool_1
  *   MCU_TempCurrStr1 of type MCU_TempCurrStr1_1
  *   MCU_TempCurrStr2 of type MCU_TempCurrStr2_1
  *   MCU_TempCurrStrMax of type MCU_TempCurrStrMax_1
  *   MCU_TempRiseCurrStr of type MCU_TempRiseCurrStr
  *   MCU_TempStatus of type MCU_TempStatus_2
  */
  (void)Rte_Read_SG_MCU_Temperature_02_SigGroup_SG_MCU_Temperature_02_SigGroup(&SG_MCU_Temperature_02_SigGroupBus);

  tec_ComM_MCUTempOvrSts_Enum = (uint8_T)SG_MCU_Temperature_02_SigGroupBus.MCU_TempStatus;

  Rte_Write_RTE_P_ComM_MCUTempOvrSts_Enum_tec_ComM_MCUTempOvrSts_Enum(tec_ComM_MCUTempOvrSts_Enum);
  /*****************************************MCU_Temperature_02******************************************************** */
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
/* Model step function for TID12 */
void R_CANHandlerInput_Cyclic_1000ms(void)
                            /* Explicit Task: R_CANHandlerInput_Cyclic_1000ms */
{
    /**********************************************************************************************************************
    * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
    * Symbol: R_CANHandler_Cyclic_1000ms
    *********************************************************************************************************************/
    /***************************************************BMS_BatInfor_01****************************************************/

    SG_BMS_BatInfor_01_SigGroup BMS_BatInfor_01_SigGroupBus;
    real32_T tec_ComM_BMSBattRateCp_Ah;

    /*
    * SG_BMS_BatInfor_01_SigGroup: Record with elements
    *   BMS_BatType of type BMS_BatType_2
    *   BMS_CellNumbers of type BMS_CellNumbers_1
    *   BMS_RatBatVoltage of type BMS_RatBatVoltage_2
    *   BMS_RatCapacity of type BMS_RatCapacity_2
    *   BMS_RatEnergy of type BMS_RatEnergy_2
    */
    (void)Rte_Read_SG_BMS_BatInfor_01_SigGroup_SG_BMS_BatInfor_01_SigGroup(&BMS_BatInfor_01_SigGroupBus);

    tec_ComM_BMSBattRateCp_Ah = (real32_T)BMS_BatInfor_01_SigGroupBus.BMS_RatCapacity;

    tec_ComM_BMSBattRateCp_Ah = (real32_T)CtAp_CANHandler_ATOM_SignalRead(tec_ComM_BMSBattRateCp_Ah,CANHandler_Resolution_01, CANHandler_Offest_0);

    Rte_Write_RTE_P_ComM_BMSBattRateCp_Ah_tec_ComM_BMSBattRateCp_Ah(tec_ComM_BMSBattRateCp_Ah);

  /***************************************************BMS_BatInfor_01*************************************************/

  /***************************************************BMS_BatInfor_03*************************************************/
    SG_BMS_BatInfor_03_SigGroup BMS_BatInfor_03_SigGroup;
    real32_T tec_ComM_BMSBattRemnCp_Ah;

    /*
    * SG_BMS_BatInfor_03_SigGroup: Record with elements
    *   BMS_RemainCapacity of type BMS_RemainCapacity_2
    */


    (void)Rte_Read_SG_BMS_BatInfor_03_SigGroup_SG_BMS_BatInfor_03_SigGroup(&BMS_BatInfor_03_SigGroup);

    tec_ComM_BMSBattRemnCp_Ah = (real32_T)BMS_BatInfor_03_SigGroup.BMS_RemainCapacity;

    tec_ComM_BMSBattRemnCp_Ah = (real32_T)CtAp_CANHandler_ATOM_SignalRead(tec_ComM_BMSBattRemnCp_Ah,CANHandler_Resolution_01, CANHandler_Offest_0);

    Rte_Write_RTE_P_ComM_BMSBattRemnCp_Ah_tec_ComM_BMSBattRemnCp_Ah(tec_ComM_BMSBattRemnCp_Ah);

  /***************************************************BMS_BatInfor_03*************************************************/

  /***************************************************IVI_OdometerInfor*************************************************/
   SG_IVI_OdometerInfor_SigGroup IVI_OdometerInfor_SigGroup;
  real32_T tec_ComM_IVIOdometerInfo;

  (void)Rte_Read_SG_IVI_OdometerInfor_SigGroup_SG_IVI_OdometerInfor_SigGroup(&IVI_OdometerInfor_SigGroup);
  tec_ComM_IVIOdometerInfo = (real32_T)CtAp_CANHandler_ATOM_SignalRead((real32_T)IVI_OdometerInfor_SigGroup.IVI_OdometerInfor,CANHandler_Resolution_01, CANHandler_Offest_0);
  Rte_Write_RTE_P_ComM_IVIOdometerInfo_tec_ComM_IVIOdometerInfo(tec_ComM_IVIOdometerInfo);


  /***************************************************IVI_OdometerInfor*************************************************/

 

  /***************************************************SGW_OdometerInfor*************************************************///3.0.0
    // SG_SGW_OdometerInfor_SigGroup SGW_OdometerInfor_SigGroup;
    // real32_T tec_ComM_IVIOdometerInfo;

    // /*
    // * SG_SGW_OdometerInfor_SigGroup: Record with elements
    // *   IVI_OdometerInfor of type IVI_OdometerInfor_2
    // *   IVI_OdometerInforValid of type IVI_OdometerInforValid
    // */
    // (void)Rte_Read_SG_SGW_OdometerInfor_SigGroup_SG_SGW_OdometerInfor_SigGroup(&SGW_OdometerInfor_SigGroup);
    // tec_ComM_IVIOdometerInfo = (real32_T)SGW_OdometerInfor_SigGroup.IVI_OdometerInfor;

    // tec_ComM_IVIOdometerInfo = (real32_T)CtAp_CANHandler_ATOM_SignalRead(tec_ComM_IVIOdometerInfo,CANHandler_Resolution_01, CANHandler_Offest_0);

    // Rte_Write_RTE_P_ComM_IVIOdometerInfo_tec_ComM_IVIOdometerInfo(tec_ComM_IVIOdometerInfo);
  /***************************************************SGW_OdometerInfor*************************************************/

  /**********************************************************************************************************************
  * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
  *********************************************************************************************************************/
}
#define CtAp_CANHandler_STOP_SEC_CODE
#include "CtAp_CANHandler_MemMap.h"
#define CtAp_CANHandler_START_SEC_VAR_CONST_8
#include "CtAp_CANHandler_MemMap.h"
/* Model initialize function */
void R_CANHandler_Init(void)
{
  /* End-to-End (E2E) Protection Wrapper initialization */
//   E2EPW_ReadInit_SG_ACU_01_SigGroup_SG_ACU_01_SigGroup();
//   E2EPW_ReadInit_SG_ACU_02_SigGroup_SG_ACU_02_SigGroup();
//   E2EPW_ReadInit_SG_ACU_info_SigGroup_SG_ACU_info_SigGroup();
//   E2EPW_ReadInit_SG_ADCU_ACC_02_SigGroup_SG_ADCU_ACC_02_SigGroup();
//   E2EPW_ReadInit_SG_ADCU_Body_req_SigGroup_SG_ADCU_Body_req_SigGroup();
//   E2EPW_ReadInit_SG_BCM_05_SigGroup_SG_BCM_05_SigGroup();
//   E2EPW_ReadInit_SG_BCM_06_SigGroup_SG_BCM_06_SigGroup();
//   E2EPW_ReadInit_SG_BMS_status_01_SigGroup_SG_BMS_status_01_SigGroup();
//   E2EPW_ReadInit_SG_DCM_FL_02_SigGroup_SG_DCM_FL_02_SigGroup();
//   E2EPW_ReadInit_SG_DCM_RL_SigGroup_SG_DCM_RL_SigGroup();
//   E2EPW_ReadInit_SG_DCM_RR_SigGroup_SG_DCM_RR_SigGroup();
//   E2EPW_ReadInit_SG_IBS_ACC_SigGroup_SG_IBS_ACC_SigGroup();
//   E2EPW_ReadInit_SG_IBS_APS_SigGroup_SG_IBS_APS_SigGroup();
//   E2EPW_ReadInit_SG_IBS_Status_01_SigGroup_SG_IBS_Status_01_SigGroup();
//   E2EPW_ReadInit_SG_IBS_Status_02_SigGroup_SG_IBS_Status_02_SigGroup();
//   E2EPW_ReadInit_SG_IBS_Status_03_SigGroup_SG_IBS_Status_03_SigGroup();
//   E2EPW_ReadInit_SG_IBS_Status_04_SigGroup_SG_IBS_Status_04_SigGroup();
//   E2EPW_ReadInit_SG_IBS_Status_05_SigGroup_SG_IBS_Status_05_SigGroup();
//   E2EPW_ReadInit_SG_IBS_Status_06_SigGroup_SG_IBS_Status_06_SigGroup();
//   E2EPW_ReadInit_SG_IBS_Torque_SigGroup_SG_IBS_Torque_SigGroup();
//   E2EPW_ReadInit_SG_IBS_VCU_MotorControl_SigGroup_SG_IBS_VCU_MotorControl_SigGroup();
//   E2EPW_ReadInit_SG_IBS_WheelSpeed_01_SigGroup_SG_IBS_WheelSpeed_01_SigGroup();
//   E2EPW_ReadInit_SG_IBS_WheelSpeed_02_SigGroup_SG_IBS_WheelSpeed_02_SigGroup();
//   E2EPW_ReadInit_SG_IVI_01_SigGroup_SG_IVI_01_SigGroup();
//   E2EPW_ReadInit_SG_MCU_01_SigGroup_SG_MCU_01_SigGroup();
//   E2EPW_ReadInit_SG_MCU_FailureCode_SigGroup_SG_MCU_FailureCode_SigGroup();
//   E2EPW_ReadInit_SG_PRND_SigGroup_SG_PRND_SigGroup();
//   E2EPW_ReadInit_SG_SGW_IBS_01_SigGroup_SG_SGW_IBS_01_SigGroup();
//   E2EPW_WriteInit_SG_VCU_AccPedal_SigGroup_SG_VCU_AccPedal_SigGroup();
//   E2EPW_WriteInit_SG_VCU_BMS_SigGroup_SG_VCU_BMS_SigGroup();
//   E2EPW_WriteInit_SG_VCU_Chassis_01_SigGroup_SG_VCU_Chassis_01_SigGroup();
//   E2EPW_WriteInit_SG_VCU_HMIsignals_01_SigGroup_SG_VCU_HMIsignals_01_SigGroup();
//   E2EPW_WriteInit_SG_VCU_HMIsignals_02_SigGroup_SG_VCU_HMIsignals_02_SigGroup();
//   E2EPW_WriteInit_SG_VCU_IBS_01_SigGroup_SG_VCU_IBS_01_SigGroup();
// // E2EPW_WriteInit_SG_VCU_MCU_02_SigGroup_SG_VCU_MCU_02_SigGroup();
//   E2EPW_WriteInit_SG_VCU_MCU_03_SigGroup_SG_VCU_MCU_03_SigGroup();

//   E2EPW_WriteInit_SG_ADCU_DA_SigGroup_SG_ADCU_DA_SigGroup();
//   E2EPW_WriteInit_SG_ADCU_AEB_01_SigGroup_SG_ADCU_AEB_01_SigGroup();
//   E2EPW_WriteInit_SG_ADCU_APS_01_SigGroup_SG_ADCU_APS_01_SigGroup();
  
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.CGW01CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.ADCUDACRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.ADCUAPS01CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSAPSCRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.BCM05CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.DCMFL02CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.MCUFailrCodCRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.BCM06CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.ADCUBodyReqCRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts04CRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts04CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.ACU01CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.ACU02CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSACCCRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSACCCRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSWhlSpd02CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSWhlSpd01CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts01CRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts01CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts06CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSTqCRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSTqCRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts05CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts05CRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts03CRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts03CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts02CRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSSts02CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.PRNDCRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.PRNDCRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.BMSSts01CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSVCUMotorCRCDTCE2EFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.IBSVCUMotCtrlCRCFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.MCU01CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.MCU01CRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.ADCUACC02CRCDTCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.BMSSts01CRCErrorFail);
  CtAp_CANHandler_E2ECfm_Init(&CtAp_CANHandler_ARID_DEF.ADCUAEB01CRCDTCErrorFail);

  
  
  
  
  
  
 
}
#define CtAp_CANHandler_STOP_SEC_VAR_CONST_8
#include "CtAp_CANHandler_MemMap.h"
/*
 * File trailer for generated code.
 *
 * [EOF]
 */
