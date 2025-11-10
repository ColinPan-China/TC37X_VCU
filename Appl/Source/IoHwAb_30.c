/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: IoHwAb
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: IoHwAb_30.c
 *   Generation Time: 2025-10-22 15:16:26
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#define IOHWAB_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

/* ===== MODULE INCLUDES ================================================== */
#include "IoHwAb.h" 
#include "IoHwAb_Cbk.h"
#include "IoHwAb_Cfg.h"


/* ===== RTE INCLUDE ====================================================== */
#include "Rte_IoHwAb.h"


/* ===== USER INCLUDES ==================================================== */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Includes>
 *********************************************************************************************************************/
/* TODO: Add user includes here */
#include "vstdlib.h"
#include "Spi.h"
#include "IfxSrc_reg.h"
#include "Irq.h"
#include "TLE8888qk.h"
#include "Adc_Sample.h"
#include "TJA1145.h"
#include "Dio.h"
#include "PwmIf.h"
#include "TLE94108ES.h"
#include "Icu_17_TimerIp.h"
#include "SensorMng.h"
#include "TLE9201SG.h"
#include "Com.h"
#include "ComM.h"
#include "CanIf.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/
#define IOHWAB_C_MAJOR_VERSION  (6u) 
#define IOHWAB_C_MINOR_VERSION  (1u) 
#define IOHWAB_C_PATCH_VERSION  (0u) 

#if (  (IOHWAB_CFG_MAJOR_VERSION != IOHWAB_C_MAJOR_VERSION) \
    || (IOHWAB_CFG_MINOR_VERSION != IOHWAB_C_MINOR_VERSION) )
        #error "Version numbers of IoHwAb.c and IoHwAb_Cfg.h are inconsistent!"
#endif

#if(   (IOHWAB_SW_MAJOR_VERSION != (3u)) \
    || (IOHWAB_SW_MINOR_VERSION != (0u)) )
    #error "Version numbers of IoHwAb.c and IoHwAb.h are inconsistent!"
#endif

#if(   (IOHWAB_CBK_MAJOR_VERSION != IOHWAB_C_MAJOR_VERSION) \
    || (IOHWAB_CBK_MINOR_VERSION != IOHWAB_C_MINOR_VERSION) )
    #error "Version numbers of IoHwAb.c and IoHwAb_Cbk.h are inconsistent!"
#endif



/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Macros>
 *********************************************************************************************************************/
/* TODO: Add user macros here */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Data>
 *********************************************************************************************************************/
/* TODO: Add user variables here */
Icu_17_TimerIp_DutyCycleType ICU_Val1;
Icu_17_TimerIp_DutyCycleType ICU_Val2;
uint16 MessureFlg = 0;
static volatile uint8 Txmode = 0;
uint8 CH_RX = 0;
uint8 PT_RX = 0;
uint8 CH_STB = 0;
uint8 PT_STB = 0;
static volatile WakeUp_En = 0;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

#define IOHWAB_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * IoHwAb_Init
 **********************************************************************************************************************/
/*! \brief      This method is the IoHwAb initialization function. If initialization is needed, add the code to this
 *              function.
 *  \return     void
 **********************************************************************************************************************/
FUNC(void, IOHWAB_CODE) IoHwAb_Init (void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Initialization Code>
 *********************************************************************************************************************/
  /* TODO: Add the implementation of the initialization code here */
  Adc_SampleInit();

  /*SPI Irq Init*/
  IRQ_SFR_MODIFY32 (SRC_QSPI3TX.U,  IRQ_CLEAR_MASK, \
                    ((uint32)IRQ_QSPI3_TX_TOS | (uint32) IRQ_QSPI3_TX_PRIO));
  IRQ_SFR_MODIFY32 (SRC_QSPI3RX.U,  IRQ_CLEAR_MASK, \
                    ((uint32)IRQ_QSPI3_RX_TOS | (uint32) IRQ_QSPI3_RX_PRIO));

  SRC_QSPI3RX.B.SRE 	= 1;
  SRC_QSPI3TX.B.SRE 	= 1;

  Icu_17_TimerIp_StartSignalMeasurement(IcuConf_IcuChannel_IcuChannel_P34_2);
  Icu_17_TimerIp_StartSignalMeasurement(IcuConf_IcuChannel_IcuChannel_P34_4);
  Dio_WriteChannel(DioConf_DioChannel_DioChannel_P23_6_LIN_SLP,1);
  
  PwnIf_Start();
  Tle94108es_Init();
  Tle9201sg_Init();
  Tja1145_Init();

  CanNm_ConfirmPnAvailability(CanIfConf_CanIfCtrlCfg_CT_ATOM_CANFD_Matrix_CH_V600_202502_37050292);
  CanNm_ConfirmPnAvailability(CanIfConf_CanIfCtrlCfg_CT_ATOM_CAN_Matrix_PT_V600_20250211_08587b03);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return;
} /* IoHwAb_Init() */



/**********************************************************************************************************************
 *  CLIENT/SERVER PORTS
 **********************************************************************************************************************/


/* ----- Operations Of Client/Server Port IoHwAbCSPortPrototype ----- */

/**********************************************************************************************************************
 *  IoHwAb_IoHwAbCSPortPrototype_IoHwAb_Dio_WriteChannel
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_IoHwAbCSPortPrototype_IoHwAb_Dio_WriteChannel is an operation of the C/S port 
 *              IoHwAbCSPortPrototype
 *  \param[in]  ChannelId                       Parameter 'ChannelId'   
 *  \param[in]  Level                           Parameter 'Level'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_IoHwAbCSPortPrototype_IoHwAb_Dio_WriteChannel(
  IOHWAB_UINT16 ChannelId, 
  IOHWAB_UINT8 Level
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK IoHwAbCSPortPrototype_IoHwAb_Dio_WriteChannel>
 *********************************************************************************************************************/
/* TODO: Add client/server implementation here. */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_IoHwAbCSPortPrototype_IoHwAb_Dio_WriteChannel() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */



/**********************************************************************************************************************
 *  SENDER/RECEIVER PORTS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  RUNNABLES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  IoHwAb_IoHwAbRunnable_10ms
 **********************************************************************************************************************/
/*! \brief      The method IoHwAbRunnable_10ms is a user defined runnable entity function that will be called
 *              every 10 msec by the RTE.
 *  \retval     void
 **********************************************************************************************************************/
FUNC(void, IOHWAB_APPL_CODE) IoHwAb_IoHwAbRunnable_10ms(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK IoHwAbRunnable_10ms>
 *********************************************************************************************************************/
/* TODO: Add runnable implementation here. */
  PT_RX = Dio_ReadChannel(DioConf_DioChannel_DioChannel_P00_3_PT_CAN_RX);
  CH_RX = Dio_ReadChannel(DioConf_DioChannel_DioChannel_P23_0_CH_CAN_RX);
  PT_STB = Dio_ReadChannel(DioConf_DioChannel_DioChannel_P32_2);
  CH_STB = Dio_ReadChannel(DioConf_DioChannel_DioChannel_P32_3);
if( WakeUp_En )
{
  if( PT_RX == 0 )
  {
    EcuM_SetWakeupEvent(ECUM_WKSOURCE_CN_ATOM_CAN_Matrix_PT_V600_20250211_9b894f3d);
  }
}

//  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_8_IN1, 1 );

  TLE8888qk_Main();
  PwnIf_Main();
  Tle94108es_Main();
  Tle9201sg_Main();
  SensorMngMain();


 if( IoHwGetKL15Level() == KL15_HIGH_LEVEL )
  {
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_CANFD_Matrix_CH_V600_202502_15d11ab0, COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_CAN_Matrix_PT_V600_20250211_cc0efb79, COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_CAN_XCP_ca35a39e                    , COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_HWLIN1_b196509b                     , COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_HWLIN3_b56380a6                     , COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_HWLIN4_57bf9bdf                     , COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_J1939_bms_d26c50b6                       , COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_TC37X_VCU_CAN01_5e76994c                 , COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_ComMUser_PNC31                              , COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_ComMUser_PNC24                              , COMM_FULL_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_ComMUser_PNC26                              , COMM_FULL_COMMUNICATION);
  }
  else
  {
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_CANFD_Matrix_CH_V600_202502_15d11ab0, COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_CAN_Matrix_PT_V600_20250211_cc0efb79, COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_CAN_XCP_ca35a39e                    , COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_HWLIN1_b196509b                     , COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_HWLIN3_b56380a6                     , COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_ATOM_HWLIN4_57bf9bdf                     , COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_J1939_bms_d26c50b6                       , COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_CN_TC37X_VCU_CAN01_5e76994c                 , COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_ComMUser_PNC31                              , COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_ComMUser_PNC24                              , COMM_NO_COMMUNICATION);
    ComM_RequestComMode(ComMConf_ComMUser_ComMUser_PNC26                              , COMM_NO_COMMUNICATION);
  }

  /*ICU Measurement*/
  MessureFlg++;
  if(MessureFlg >= 100 )
  {
    MessureFlg = 0;
    Icu_17_TimerIp_GetDutyCycleValues(IcuConf_IcuChannel_IcuChannel_P34_2, &ICU_Val1);
    Icu_17_TimerIp_GetDutyCycleValues(IcuConf_IcuChannel_IcuChannel_P34_4, &ICU_Val2);
    if( ICU_Val2.PeriodTime == 0 && ICU_Val1.PeriodTime == 0 )
    {
      NOP();
    }
  }
  #if 0
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BCL_oJ1939_bms_e5f04d09_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BCP_oJ1939_bms_ece2ed74_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BCS_oJ1939_bms_9b7c3f84_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BEM_oJ1939_bms_deb0debb_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BHM_oJ1939_bms_999cbec5_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BMT_oJ1939_bms_1502dabb_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BMV_oJ1939_bms_f9394424_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BRM_oJ1939_bms_17c47e39_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BRO_oJ1939_bms_fbffe0a6_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BSD_oJ1939_bms_57fb9d2d_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BSM_oJ1939_bms_ca52a7bc_Tx,   Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BSOC_oJ1939_bms_5e951453_Tx,  Txmode );
  Com_SwitchIpduTxMode( ComConf_ComIPdu_BST_oJ1939_bms_5be370d1_Tx,   Txmode );
  #endif
//  Dio_WriteChannel( DioConf_DioChannel_DioChannel_P00_8_IN1, 0 );
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return;
} /* IoHwAb_IoHwAbRunnable_10ms() */ 


/**********************************************************************************************************************
 *  IoHwAb_IoHwAbRunnable_500ms
 **********************************************************************************************************************/
/*! \brief      The method IoHwAbRunnable_500ms is a user defined runnable entity function that will be called
 *              every 500 msec by the RTE.
 *  \retval     void
 **********************************************************************************************************************/
FUNC(void, IOHWAB_APPL_CODE) IoHwAb_IoHwAbRunnable_500ms(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK IoHwAbRunnable_500ms>
 *********************************************************************************************************************/
/* TODO: Add runnable implementation here. */
  Adc_SampleMain();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return;
} /* IoHwAb_IoHwAbRunnable_500ms() */ 



/**********************************************************************************************************************
 *  SCHEDULABLES
 **********************************************************************************************************************/



/* Hint: IoHwAb_GetVersionInfo() has been removed from the code. Use the configuration switch 'IoHwAbVersionInfoApi'
   to enable it. */



/* Section for deleted/unregonized user blocks: */
#if 0
#endif


#define IOHWAB_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 *  END OF FILE: IoHwAb_30.c
 **********************************************************************************************************************/
