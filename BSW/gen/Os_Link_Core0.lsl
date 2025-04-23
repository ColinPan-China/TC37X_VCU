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
 *            Module: Os
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Link_Core0.lsl
 *   Generation Time: 2025-04-23 11:05:19
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  CODE SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_INTVEC_CODE )
if (exists(".text.OS_INTVEC_CORE0_CODE"))
{
  group OS_INTVEC_CORE0_CODE_GROUP(align=8192)
  {
    select "[.]text.OS_INTVEC_CORE0_CODE";
  }
  "_OS_INTVEC_CORE0_CODE_START" = "_lc_gb_OS_INTVEC_CORE0_CODE_GROUP";
  "_OS_INTVEC_CORE0_CODE_END" = "_lc_ge_OS_INTVEC_CORE0_CODE_GROUP" - 1;
  "_OS_INTVEC_CORE0_CODE_LIMIT" = "_lc_ge_OS_INTVEC_CORE0_CODE_GROUP";
}
else
{
  "_OS_INTVEC_CORE0_CODE_START" = 0;
  "_OS_INTVEC_CORE0_CODE_END" = 0;
  "_OS_INTVEC_CORE0_CODE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_EXCVEC_CODE )
if (exists(".text.OS_EXCVEC_CORE0_CODE"))
{
  group OS_EXCVEC_CORE0_CODE_GROUP(align=256)
  {
    select "[.]text.OS_EXCVEC_CORE0_CODE";
  }
  "_OS_EXCVEC_CORE0_CODE_START" = "_lc_gb_OS_EXCVEC_CORE0_CODE_GROUP";
  "_OS_EXCVEC_CORE0_CODE_END" = "_lc_ge_OS_EXCVEC_CORE0_CODE_GROUP" - 1;
  "_OS_EXCVEC_CORE0_CODE_LIMIT" = "_lc_ge_OS_EXCVEC_CORE0_CODE_GROUP";
}
else
{
  "_OS_EXCVEC_CORE0_CODE_START" = 0;
  "_OS_EXCVEC_CORE0_CODE_END" = 0;
  "_OS_EXCVEC_CORE0_CODE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CALLOUT_CODE )
if (exists(".text.OS_ADC0SR0_ISR_CODE"))
{
  group OS_ADC0SR0_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ADC0SR0_ISR_CODE";
  }
  "_OS_ADC0SR0_ISR_CODE_START" = "_lc_gb_OS_ADC0SR0_ISR_CODE_GROUP";
  "_OS_ADC0SR0_ISR_CODE_END" = "_lc_ge_OS_ADC0SR0_ISR_CODE_GROUP" - 1;
  "_OS_ADC0SR0_ISR_CODE_LIMIT" = "_lc_ge_OS_ADC0SR0_ISR_CODE_GROUP";
}
else
{
  "_OS_ADC0SR0_ISR_CODE_START" = 0;
  "_OS_ADC0SR0_ISR_CODE_END" = 0;
  "_OS_ADC0SR0_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ADC11SR0_ISR_CODE"))
{
  group OS_ADC11SR0_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ADC11SR0_ISR_CODE";
  }
  "_OS_ADC11SR0_ISR_CODE_START" = "_lc_gb_OS_ADC11SR0_ISR_CODE_GROUP";
  "_OS_ADC11SR0_ISR_CODE_END" = "_lc_ge_OS_ADC11SR0_ISR_CODE_GROUP" - 1;
  "_OS_ADC11SR0_ISR_CODE_LIMIT" = "_lc_ge_OS_ADC11SR0_ISR_CODE_GROUP";
}
else
{
  "_OS_ADC11SR0_ISR_CODE_START" = 0;
  "_OS_ADC11SR0_ISR_CODE_END" = 0;
  "_OS_ADC11SR0_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ADC1SR0_ISR_CODE"))
{
  group OS_ADC1SR0_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ADC1SR0_ISR_CODE";
  }
  "_OS_ADC1SR0_ISR_CODE_START" = "_lc_gb_OS_ADC1SR0_ISR_CODE_GROUP";
  "_OS_ADC1SR0_ISR_CODE_END" = "_lc_ge_OS_ADC1SR0_ISR_CODE_GROUP" - 1;
  "_OS_ADC1SR0_ISR_CODE_LIMIT" = "_lc_ge_OS_ADC1SR0_ISR_CODE_GROUP";
}
else
{
  "_OS_ADC1SR0_ISR_CODE_START" = 0;
  "_OS_ADC1SR0_ISR_CODE_END" = 0;
  "_OS_ADC1SR0_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ADC2SR0_ISR_CODE"))
{
  group OS_ADC2SR0_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ADC2SR0_ISR_CODE";
  }
  "_OS_ADC2SR0_ISR_CODE_START" = "_lc_gb_OS_ADC2SR0_ISR_CODE_GROUP";
  "_OS_ADC2SR0_ISR_CODE_END" = "_lc_ge_OS_ADC2SR0_ISR_CODE_GROUP" - 1;
  "_OS_ADC2SR0_ISR_CODE_LIMIT" = "_lc_ge_OS_ADC2SR0_ISR_CODE_GROUP";
}
else
{
  "_OS_ADC2SR0_ISR_CODE_START" = 0;
  "_OS_ADC2SR0_ISR_CODE_END" = 0;
  "_OS_ADC2SR0_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ADC3SR0_ISR_CODE"))
{
  group OS_ADC3SR0_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ADC3SR0_ISR_CODE";
  }
  "_OS_ADC3SR0_ISR_CODE_START" = "_lc_gb_OS_ADC3SR0_ISR_CODE_GROUP";
  "_OS_ADC3SR0_ISR_CODE_END" = "_lc_ge_OS_ADC3SR0_ISR_CODE_GROUP" - 1;
  "_OS_ADC3SR0_ISR_CODE_LIMIT" = "_lc_ge_OS_ADC3SR0_ISR_CODE_GROUP";
}
else
{
  "_OS_ADC3SR0_ISR_CODE_START" = 0;
  "_OS_ADC3SR0_ISR_CODE_END" = 0;
  "_OS_ADC3SR0_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ADC8SR0_ISR_CODE"))
{
  group OS_ADC8SR0_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ADC8SR0_ISR_CODE";
  }
  "_OS_ADC8SR0_ISR_CODE_START" = "_lc_gb_OS_ADC8SR0_ISR_CODE_GROUP";
  "_OS_ADC8SR0_ISR_CODE_END" = "_lc_ge_OS_ADC8SR0_ISR_CODE_GROUP" - 1;
  "_OS_ADC8SR0_ISR_CODE_LIMIT" = "_lc_ge_OS_ADC8SR0_ISR_CODE_GROUP";
}
else
{
  "_OS_ADC8SR0_ISR_CODE_START" = 0;
  "_OS_ADC8SR0_ISR_CODE_END" = 0;
  "_OS_ADC8SR0_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ASCLIN1ERR_ISR_CODE"))
{
  group OS_ASCLIN1ERR_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ASCLIN1ERR_ISR_CODE";
  }
  "_OS_ASCLIN1ERR_ISR_CODE_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_CODE_GROUP";
  "_OS_ASCLIN1ERR_ISR_CODE_END" = "_lc_ge_OS_ASCLIN1ERR_ISR_CODE_GROUP" - 1;
  "_OS_ASCLIN1ERR_ISR_CODE_LIMIT" = "_lc_ge_OS_ASCLIN1ERR_ISR_CODE_GROUP";
}
else
{
  "_OS_ASCLIN1ERR_ISR_CODE_START" = 0;
  "_OS_ASCLIN1ERR_ISR_CODE_END" = 0;
  "_OS_ASCLIN1ERR_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ASCLIN1RX_ISR_CODE"))
{
  group OS_ASCLIN1RX_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ASCLIN1RX_ISR_CODE";
  }
  "_OS_ASCLIN1RX_ISR_CODE_START" = "_lc_gb_OS_ASCLIN1RX_ISR_CODE_GROUP";
  "_OS_ASCLIN1RX_ISR_CODE_END" = "_lc_ge_OS_ASCLIN1RX_ISR_CODE_GROUP" - 1;
  "_OS_ASCLIN1RX_ISR_CODE_LIMIT" = "_lc_ge_OS_ASCLIN1RX_ISR_CODE_GROUP";
}
else
{
  "_OS_ASCLIN1RX_ISR_CODE_START" = 0;
  "_OS_ASCLIN1RX_ISR_CODE_END" = 0;
  "_OS_ASCLIN1RX_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ASCLIN1TX_ISR_CODE"))
{
  group OS_ASCLIN1TX_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ASCLIN1TX_ISR_CODE";
  }
  "_OS_ASCLIN1TX_ISR_CODE_START" = "_lc_gb_OS_ASCLIN1TX_ISR_CODE_GROUP";
  "_OS_ASCLIN1TX_ISR_CODE_END" = "_lc_ge_OS_ASCLIN1TX_ISR_CODE_GROUP" - 1;
  "_OS_ASCLIN1TX_ISR_CODE_LIMIT" = "_lc_ge_OS_ASCLIN1TX_ISR_CODE_GROUP";
}
else
{
  "_OS_ASCLIN1TX_ISR_CODE_START" = 0;
  "_OS_ASCLIN1TX_ISR_CODE_END" = 0;
  "_OS_ASCLIN1TX_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ASCLIN2ERR_ISR_CODE"))
{
  group OS_ASCLIN2ERR_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ASCLIN2ERR_ISR_CODE";
  }
  "_OS_ASCLIN2ERR_ISR_CODE_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_CODE_GROUP";
  "_OS_ASCLIN2ERR_ISR_CODE_END" = "_lc_ge_OS_ASCLIN2ERR_ISR_CODE_GROUP" - 1;
  "_OS_ASCLIN2ERR_ISR_CODE_LIMIT" = "_lc_ge_OS_ASCLIN2ERR_ISR_CODE_GROUP";
}
else
{
  "_OS_ASCLIN2ERR_ISR_CODE_START" = 0;
  "_OS_ASCLIN2ERR_ISR_CODE_END" = 0;
  "_OS_ASCLIN2ERR_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ASCLIN2RX_ISR_CODE"))
{
  group OS_ASCLIN2RX_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ASCLIN2RX_ISR_CODE";
  }
  "_OS_ASCLIN2RX_ISR_CODE_START" = "_lc_gb_OS_ASCLIN2RX_ISR_CODE_GROUP";
  "_OS_ASCLIN2RX_ISR_CODE_END" = "_lc_ge_OS_ASCLIN2RX_ISR_CODE_GROUP" - 1;
  "_OS_ASCLIN2RX_ISR_CODE_LIMIT" = "_lc_ge_OS_ASCLIN2RX_ISR_CODE_GROUP";
}
else
{
  "_OS_ASCLIN2RX_ISR_CODE_START" = 0;
  "_OS_ASCLIN2RX_ISR_CODE_END" = 0;
  "_OS_ASCLIN2RX_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_ASCLIN2TX_ISR_CODE"))
{
  group OS_ASCLIN2TX_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_ASCLIN2TX_ISR_CODE";
  }
  "_OS_ASCLIN2TX_ISR_CODE_START" = "_lc_gb_OS_ASCLIN2TX_ISR_CODE_GROUP";
  "_OS_ASCLIN2TX_ISR_CODE_END" = "_lc_ge_OS_ASCLIN2TX_ISR_CODE_GROUP" - 1;
  "_OS_ASCLIN2TX_ISR_CODE_LIMIT" = "_lc_ge_OS_ASCLIN2TX_ISR_CODE_GROUP";
}
else
{
  "_OS_ASCLIN2TX_ISR_CODE_START" = 0;
  "_OS_ASCLIN2TX_ISR_CODE_END" = 0;
  "_OS_ASCLIN2TX_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_CanIsr_0_CODE"))
{
  group OS_CanIsr_0_CODE_GROUP(align=8)
  {
    select "[.]text.OS_CanIsr_0_CODE";
  }
  "_OS_CanIsr_0_CODE_START" = "_lc_gb_OS_CanIsr_0_CODE_GROUP";
  "_OS_CanIsr_0_CODE_END" = "_lc_ge_OS_CanIsr_0_CODE_GROUP" - 1;
  "_OS_CanIsr_0_CODE_LIMIT" = "_lc_ge_OS_CanIsr_0_CODE_GROUP";
}
else
{
  "_OS_CanIsr_0_CODE_START" = 0;
  "_OS_CanIsr_0_CODE_END" = 0;
  "_OS_CanIsr_0_CODE_LIMIT" = 0;
}
if (exists(".text.OS_CanIsr_1_CODE"))
{
  group OS_CanIsr_1_CODE_GROUP(align=8)
  {
    select "[.]text.OS_CanIsr_1_CODE";
  }
  "_OS_CanIsr_1_CODE_START" = "_lc_gb_OS_CanIsr_1_CODE_GROUP";
  "_OS_CanIsr_1_CODE_END" = "_lc_ge_OS_CanIsr_1_CODE_GROUP" - 1;
  "_OS_CanIsr_1_CODE_LIMIT" = "_lc_ge_OS_CanIsr_1_CODE_GROUP";
}
else
{
  "_OS_CanIsr_1_CODE_START" = 0;
  "_OS_CanIsr_1_CODE_END" = 0;
  "_OS_CanIsr_1_CODE_LIMIT" = 0;
}
if (exists(".text.OS_CanIsr_3_CODE"))
{
  group OS_CanIsr_3_CODE_GROUP(align=8)
  {
    select "[.]text.OS_CanIsr_3_CODE";
  }
  "_OS_CanIsr_3_CODE_START" = "_lc_gb_OS_CanIsr_3_CODE_GROUP";
  "_OS_CanIsr_3_CODE_END" = "_lc_ge_OS_CanIsr_3_CODE_GROUP" - 1;
  "_OS_CanIsr_3_CODE_LIMIT" = "_lc_ge_OS_CanIsr_3_CODE_GROUP";
}
else
{
  "_OS_CanIsr_3_CODE_START" = 0;
  "_OS_CanIsr_3_CODE_END" = 0;
  "_OS_CanIsr_3_CODE_LIMIT" = 0;
}
if (exists(".text.OS_CanIsr_4_CODE"))
{
  group OS_CanIsr_4_CODE_GROUP(align=8)
  {
    select "[.]text.OS_CanIsr_4_CODE";
  }
  "_OS_CanIsr_4_CODE_START" = "_lc_gb_OS_CanIsr_4_CODE_GROUP";
  "_OS_CanIsr_4_CODE_END" = "_lc_ge_OS_CanIsr_4_CODE_GROUP" - 1;
  "_OS_CanIsr_4_CODE_LIMIT" = "_lc_ge_OS_CanIsr_4_CODE_GROUP";
}
else
{
  "_OS_CanIsr_4_CODE_START" = 0;
  "_OS_CanIsr_4_CODE_END" = 0;
  "_OS_CanIsr_4_CODE_LIMIT" = 0;
}
if (exists(".text.OS_Core0_AswInit_CODE"))
{
  group OS_Core0_AswInit_CODE_GROUP(align=8)
  {
    select "[.]text.OS_Core0_AswInit_CODE";
  }
  "_OS_Core0_AswInit_CODE_START" = "_lc_gb_OS_Core0_AswInit_CODE_GROUP";
  "_OS_Core0_AswInit_CODE_END" = "_lc_ge_OS_Core0_AswInit_CODE_GROUP" - 1;
  "_OS_Core0_AswInit_CODE_LIMIT" = "_lc_ge_OS_Core0_AswInit_CODE_GROUP";
}
else
{
  "_OS_Core0_AswInit_CODE_START" = 0;
  "_OS_Core0_AswInit_CODE_END" = 0;
  "_OS_Core0_AswInit_CODE_LIMIT" = 0;
}
if (exists(".text.OS_Core0_AswTask_CODE"))
{
  group OS_Core0_AswTask_CODE_GROUP(align=8)
  {
    select "[.]text.OS_Core0_AswTask_CODE";
  }
  "_OS_Core0_AswTask_CODE_START" = "_lc_gb_OS_Core0_AswTask_CODE_GROUP";
  "_OS_Core0_AswTask_CODE_END" = "_lc_ge_OS_Core0_AswTask_CODE_GROUP" - 1;
  "_OS_Core0_AswTask_CODE_LIMIT" = "_lc_ge_OS_Core0_AswTask_CODE_GROUP";
}
else
{
  "_OS_Core0_AswTask_CODE_START" = 0;
  "_OS_Core0_AswTask_CODE_END" = 0;
  "_OS_Core0_AswTask_CODE_LIMIT" = 0;
}
if (exists(".text.OS_Core0_BswTask_CODE"))
{
  group OS_Core0_BswTask_CODE_GROUP(align=8)
  {
    select "[.]text.OS_Core0_BswTask_CODE";
  }
  "_OS_Core0_BswTask_CODE_START" = "_lc_gb_OS_Core0_BswTask_CODE_GROUP";
  "_OS_Core0_BswTask_CODE_END" = "_lc_ge_OS_Core0_BswTask_CODE_GROUP" - 1;
  "_OS_Core0_BswTask_CODE_LIMIT" = "_lc_ge_OS_Core0_BswTask_CODE_GROUP";
}
else
{
  "_OS_Core0_BswTask_CODE_START" = 0;
  "_OS_Core0_BswTask_CODE_END" = 0;
  "_OS_Core0_BswTask_CODE_LIMIT" = 0;
}
if (exists(".text.OS_DMACH10SR_ISR_CODE"))
{
  group OS_DMACH10SR_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_DMACH10SR_ISR_CODE";
  }
  "_OS_DMACH10SR_ISR_CODE_START" = "_lc_gb_OS_DMACH10SR_ISR_CODE_GROUP";
  "_OS_DMACH10SR_ISR_CODE_END" = "_lc_ge_OS_DMACH10SR_ISR_CODE_GROUP" - 1;
  "_OS_DMACH10SR_ISR_CODE_LIMIT" = "_lc_ge_OS_DMACH10SR_ISR_CODE_GROUP";
}
else
{
  "_OS_DMACH10SR_ISR_CODE_START" = 0;
  "_OS_DMACH10SR_ISR_CODE_END" = 0;
  "_OS_DMACH10SR_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_DMACH11SR_ISR_CODE"))
{
  group OS_DMACH11SR_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_DMACH11SR_ISR_CODE";
  }
  "_OS_DMACH11SR_ISR_CODE_START" = "_lc_gb_OS_DMACH11SR_ISR_CODE_GROUP";
  "_OS_DMACH11SR_ISR_CODE_END" = "_lc_ge_OS_DMACH11SR_ISR_CODE_GROUP" - 1;
  "_OS_DMACH11SR_ISR_CODE_LIMIT" = "_lc_ge_OS_DMACH11SR_ISR_CODE_GROUP";
}
else
{
  "_OS_DMACH11SR_ISR_CODE_START" = 0;
  "_OS_DMACH11SR_ISR_CODE_END" = 0;
  "_OS_DMACH11SR_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_Default_Init_Task_CODE"))
{
  group OS_Default_Init_Task_CODE_GROUP(align=8)
  {
    select "[.]text.OS_Default_Init_Task_CODE";
  }
  "_OS_Default_Init_Task_CODE_START" = "_lc_gb_OS_Default_Init_Task_CODE_GROUP";
  "_OS_Default_Init_Task_CODE_END" = "_lc_ge_OS_Default_Init_Task_CODE_GROUP" - 1;
  "_OS_Default_Init_Task_CODE_LIMIT" = "_lc_ge_OS_Default_Init_Task_CODE_GROUP";
}
else
{
  "_OS_Default_Init_Task_CODE_START" = 0;
  "_OS_Default_Init_Task_CODE_END" = 0;
  "_OS_Default_Init_Task_CODE_LIMIT" = 0;
}
if (exists(".text.OS_Default_Init_Task_Trusted_CODE"))
{
  group OS_Default_Init_Task_Trusted_CODE_GROUP(align=8)
  {
    select "[.]text.OS_Default_Init_Task_Trusted_CODE";
  }
  "_OS_Default_Init_Task_Trusted_CODE_START" = "_lc_gb_OS_Default_Init_Task_Trusted_CODE_GROUP";
  "_OS_Default_Init_Task_Trusted_CODE_END" = "_lc_ge_OS_Default_Init_Task_Trusted_CODE_GROUP" - 1;
  "_OS_Default_Init_Task_Trusted_CODE_LIMIT" = "_lc_ge_OS_Default_Init_Task_Trusted_CODE_GROUP";
}
else
{
  "_OS_Default_Init_Task_Trusted_CODE_START" = 0;
  "_OS_Default_Init_Task_Trusted_CODE_END" = 0;
  "_OS_Default_Init_Task_Trusted_CODE_LIMIT" = 0;
}
if (exists(".text.OS_GTMTOM1SR3_ISR_CODE"))
{
  group OS_GTMTOM1SR3_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_GTMTOM1SR3_ISR_CODE";
  }
  "_OS_GTMTOM1SR3_ISR_CODE_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_CODE_GROUP";
  "_OS_GTMTOM1SR3_ISR_CODE_END" = "_lc_ge_OS_GTMTOM1SR3_ISR_CODE_GROUP" - 1;
  "_OS_GTMTOM1SR3_ISR_CODE_LIMIT" = "_lc_ge_OS_GTMTOM1SR3_ISR_CODE_GROUP";
}
else
{
  "_OS_GTMTOM1SR3_ISR_CODE_START" = 0;
  "_OS_GTMTOM1SR3_ISR_CODE_END" = 0;
  "_OS_GTMTOM1SR3_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_GTMTOM1SR4_ISR_CODE"))
{
  group OS_GTMTOM1SR4_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_GTMTOM1SR4_ISR_CODE";
  }
  "_OS_GTMTOM1SR4_ISR_CODE_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_CODE_GROUP";
  "_OS_GTMTOM1SR4_ISR_CODE_END" = "_lc_ge_OS_GTMTOM1SR4_ISR_CODE_GROUP" - 1;
  "_OS_GTMTOM1SR4_ISR_CODE_LIMIT" = "_lc_ge_OS_GTMTOM1SR4_ISR_CODE_GROUP";
}
else
{
  "_OS_GTMTOM1SR4_ISR_CODE_START" = 0;
  "_OS_GTMTOM1SR4_ISR_CODE_END" = 0;
  "_OS_GTMTOM1SR4_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_QSPI3ERR_ISR_CODE"))
{
  group OS_QSPI3ERR_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_QSPI3ERR_ISR_CODE";
  }
  "_OS_QSPI3ERR_ISR_CODE_START" = "_lc_gb_OS_QSPI3ERR_ISR_CODE_GROUP";
  "_OS_QSPI3ERR_ISR_CODE_END" = "_lc_ge_OS_QSPI3ERR_ISR_CODE_GROUP" - 1;
  "_OS_QSPI3ERR_ISR_CODE_LIMIT" = "_lc_ge_OS_QSPI3ERR_ISR_CODE_GROUP";
}
else
{
  "_OS_QSPI3ERR_ISR_CODE_START" = 0;
  "_OS_QSPI3ERR_ISR_CODE_END" = 0;
  "_OS_QSPI3ERR_ISR_CODE_LIMIT" = 0;
}
if (exists(".text.OS_QSPI3PT_ISR_CODE"))
{
  group OS_QSPI3PT_ISR_CODE_GROUP(align=8)
  {
    select "[.]text.OS_QSPI3PT_ISR_CODE";
  }
  "_OS_QSPI3PT_ISR_CODE_START" = "_lc_gb_OS_QSPI3PT_ISR_CODE_GROUP";
  "_OS_QSPI3PT_ISR_CODE_END" = "_lc_ge_OS_QSPI3PT_ISR_CODE_GROUP" - 1;
  "_OS_QSPI3PT_ISR_CODE_LIMIT" = "_lc_ge_OS_QSPI3PT_ISR_CODE_GROUP";
}
else
{
  "_OS_QSPI3PT_ISR_CODE_START" = 0;
  "_OS_QSPI3PT_ISR_CODE_END" = 0;
  "_OS_QSPI3PT_ISR_CODE_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_INTVEC_CODE
# undef OS_LINK_INTVEC_CODE
#endif

#ifdef OS_LINK_EXCVEC_CODE
# undef OS_LINK_EXCVEC_CODE
#endif

#ifdef OS_LINK_CALLOUT_CODE
# undef OS_LINK_CALLOUT_CODE
#endif


/**********************************************************************************************************************
 *  CONST SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_KERNEL ) || defined ( OS_LINK_CONST_KERNEL_FAR )
if (exists(".rodata.OS_CORE0_CONST"))
{
  group OS_CORE0_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_CORE0_CONST";
  }
  "_OS_CORE0_CONST_START" = "_lc_gb_OS_CORE0_CONST_GROUP";
  "_OS_CORE0_CONST_END" = "_lc_ge_OS_CORE0_CONST_GROUP" - 1;
  "_OS_CORE0_CONST_LIMIT" = "_lc_ge_OS_CORE0_CONST_GROUP";
}
else
{
  "_OS_CORE0_CONST_START" = 0;
  "_OS_CORE0_CONST_END" = 0;
  "_OS_CORE0_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_KERNEL ) || defined ( OS_LINK_CONST_KERNEL_NEAR )
if (exists(".zrodata.OS_CORE0_CONST_FAST"))
{
  group OS_CORE0_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_CORE0_CONST_FAST";
  }
  "_OS_CORE0_CONST_FAST_START" = "_lc_gb_OS_CORE0_CONST_FAST_GROUP";
  "_OS_CORE0_CONST_FAST_END" = "_lc_ge_OS_CORE0_CONST_FAST_GROUP" - 1;
  "_OS_CORE0_CONST_FAST_LIMIT" = "_lc_ge_OS_CORE0_CONST_FAST_GROUP";
}
else
{
  "_OS_CORE0_CONST_FAST_START" = 0;
  "_OS_CORE0_CONST_FAST_END" = 0;
  "_OS_CORE0_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_INTVEC_CONST )
if (exists(".rodata.OS_INTVEC_CORE0_CONST"))
{
  group OS_INTVEC_CORE0_CONST_GROUP(align=8192)
  {
    select "[.]rodata.OS_INTVEC_CORE0_CONST";
  }
  "_OS_INTVEC_CORE0_CONST_START" = "_lc_gb_OS_INTVEC_CORE0_CONST_GROUP";
  "_OS_INTVEC_CORE0_CONST_END" = "_lc_ge_OS_INTVEC_CORE0_CONST_GROUP" - 1;
  "_OS_INTVEC_CORE0_CONST_LIMIT" = "_lc_ge_OS_INTVEC_CORE0_CONST_GROUP";
}
else
{
  "_OS_INTVEC_CORE0_CONST_START" = 0;
  "_OS_INTVEC_CORE0_CONST_END" = 0;
  "_OS_INTVEC_CORE0_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_EXCVEC_CONST )
if (exists(".rodata.OS_EXCVEC_CORE0_CONST"))
{
  group OS_EXCVEC_CORE0_CONST_GROUP(align=256)
  {
    select "[.]rodata.OS_EXCVEC_CORE0_CONST";
  }
  "_OS_EXCVEC_CORE0_CONST_START" = "_lc_gb_OS_EXCVEC_CORE0_CONST_GROUP";
  "_OS_EXCVEC_CORE0_CONST_END" = "_lc_ge_OS_EXCVEC_CORE0_CONST_GROUP" - 1;
  "_OS_EXCVEC_CORE0_CONST_LIMIT" = "_lc_ge_OS_EXCVEC_CORE0_CONST_GROUP";
}
else
{
  "_OS_EXCVEC_CORE0_CONST_START" = 0;
  "_OS_EXCVEC_CORE0_CONST_END" = 0;
  "_OS_EXCVEC_CORE0_CONST_LIMIT" = 0;
}
#endif


#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_FAR )
if (exists(".rodata.OS_SystemApplication_OsCore0_CONST"))
{
  group OS_SystemApplication_OsCore0_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_SystemApplication_OsCore0_CONST";
  }
  "_OS_SystemApplication_OsCore0_CONST_START" = "_lc_gb_OS_SystemApplication_OsCore0_CONST_GROUP";
  "_OS_SystemApplication_OsCore0_CONST_END" = "_lc_ge_OS_SystemApplication_OsCore0_CONST_GROUP" - 1;
  "_OS_SystemApplication_OsCore0_CONST_LIMIT" = "_lc_ge_OS_SystemApplication_OsCore0_CONST_GROUP";
}
else
{
  "_OS_SystemApplication_OsCore0_CONST_START" = 0;
  "_OS_SystemApplication_OsCore0_CONST_END" = 0;
  "_OS_SystemApplication_OsCore0_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_NEAR )
if (exists(".zrodata.OS_SystemApplication_OsCore0_CONST_FAST"))
{
  group OS_SystemApplication_OsCore0_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_SystemApplication_OsCore0_CONST_FAST";
  }
  "_OS_SystemApplication_OsCore0_CONST_FAST_START" = "_lc_gb_OS_SystemApplication_OsCore0_CONST_FAST_GROUP";
  "_OS_SystemApplication_OsCore0_CONST_FAST_END" = "_lc_ge_OS_SystemApplication_OsCore0_CONST_FAST_GROUP" - 1;
  "_OS_SystemApplication_OsCore0_CONST_FAST_LIMIT" = "_lc_ge_OS_SystemApplication_OsCore0_CONST_FAST_GROUP";
}
else
{
  "_OS_SystemApplication_OsCore0_CONST_FAST_START" = 0;
  "_OS_SystemApplication_OsCore0_CONST_FAST_END" = 0;
  "_OS_SystemApplication_OsCore0_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_INIT )
















#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_FAR
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_FAR
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_NEAR
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_NEAR
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_INIT
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWINIT_FAR )
if (exists(".rodata.OS_Core0_AswInit_CONST"))
{
  group OS_Core0_AswInit_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_Core0_AswInit_CONST";
  }
  "_OS_Core0_AswInit_CONST_START" = "_lc_gb_OS_Core0_AswInit_CONST_GROUP";
  "_OS_Core0_AswInit_CONST_END" = "_lc_ge_OS_Core0_AswInit_CONST_GROUP" - 1;
  "_OS_Core0_AswInit_CONST_LIMIT" = "_lc_ge_OS_Core0_AswInit_CONST_GROUP";
}
else
{
  "_OS_Core0_AswInit_CONST_START" = 0;
  "_OS_Core0_AswInit_CONST_END" = 0;
  "_OS_Core0_AswInit_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWINIT_NEAR )
if (exists(".zrodata.OS_Core0_AswInit_CONST_FAST"))
{
  group OS_Core0_AswInit_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_Core0_AswInit_CONST_FAST";
  }
  "_OS_Core0_AswInit_CONST_FAST_START" = "_lc_gb_OS_Core0_AswInit_CONST_FAST_GROUP";
  "_OS_Core0_AswInit_CONST_FAST_END" = "_lc_ge_OS_Core0_AswInit_CONST_FAST_GROUP" - 1;
  "_OS_Core0_AswInit_CONST_FAST_LIMIT" = "_lc_ge_OS_Core0_AswInit_CONST_FAST_GROUP";
}
else
{
  "_OS_Core0_AswInit_CONST_FAST_START" = 0;
  "_OS_Core0_AswInit_CONST_FAST_END" = 0;
  "_OS_Core0_AswInit_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWINIT_INIT )













#endif

#ifdef OS_LINK_CONST_TASK_CORE0_ASWINIT
# undef OS_LINK_CONST_TASK_CORE0_ASWINIT
#endif

#ifdef OS_LINK_CONST_TASK_CORE0_ASWINIT_FAR
# undef OS_LINK_CONST_TASK_CORE0_ASWINIT_FAR
#endif

#ifdef OS_LINK_CONST_TASK_CORE0_ASWINIT_NEAR
# undef OS_LINK_CONST_TASK_CORE0_ASWINIT_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_CORE0_ASWINIT_INIT
# undef OS_LINK_CONST_TASK_CORE0_ASWINIT_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWTASK_FAR )
if (exists(".rodata.OS_Core0_AswTask_CONST"))
{
  group OS_Core0_AswTask_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_Core0_AswTask_CONST";
  }
  "_OS_Core0_AswTask_CONST_START" = "_lc_gb_OS_Core0_AswTask_CONST_GROUP";
  "_OS_Core0_AswTask_CONST_END" = "_lc_ge_OS_Core0_AswTask_CONST_GROUP" - 1;
  "_OS_Core0_AswTask_CONST_LIMIT" = "_lc_ge_OS_Core0_AswTask_CONST_GROUP";
}
else
{
  "_OS_Core0_AswTask_CONST_START" = 0;
  "_OS_Core0_AswTask_CONST_END" = 0;
  "_OS_Core0_AswTask_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWTASK_NEAR )
if (exists(".zrodata.OS_Core0_AswTask_CONST_FAST"))
{
  group OS_Core0_AswTask_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_Core0_AswTask_CONST_FAST";
  }
  "_OS_Core0_AswTask_CONST_FAST_START" = "_lc_gb_OS_Core0_AswTask_CONST_FAST_GROUP";
  "_OS_Core0_AswTask_CONST_FAST_END" = "_lc_ge_OS_Core0_AswTask_CONST_FAST_GROUP" - 1;
  "_OS_Core0_AswTask_CONST_FAST_LIMIT" = "_lc_ge_OS_Core0_AswTask_CONST_FAST_GROUP";
}
else
{
  "_OS_Core0_AswTask_CONST_FAST_START" = 0;
  "_OS_Core0_AswTask_CONST_FAST_END" = 0;
  "_OS_Core0_AswTask_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_CONST_TASK_CORE0_ASWTASK_INIT )













#endif

#ifdef OS_LINK_CONST_TASK_CORE0_ASWTASK
# undef OS_LINK_CONST_TASK_CORE0_ASWTASK
#endif

#ifdef OS_LINK_CONST_TASK_CORE0_ASWTASK_FAR
# undef OS_LINK_CONST_TASK_CORE0_ASWTASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_CORE0_ASWTASK_NEAR
# undef OS_LINK_CONST_TASK_CORE0_ASWTASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_CORE0_ASWTASK_INIT
# undef OS_LINK_CONST_TASK_CORE0_ASWTASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_CONST_TASK_CORE0_BSWTASK_FAR )
if (exists(".rodata.OS_Core0_BswTask_CONST"))
{
  group OS_Core0_BswTask_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_Core0_BswTask_CONST";
  }
  "_OS_Core0_BswTask_CONST_START" = "_lc_gb_OS_Core0_BswTask_CONST_GROUP";
  "_OS_Core0_BswTask_CONST_END" = "_lc_ge_OS_Core0_BswTask_CONST_GROUP" - 1;
  "_OS_Core0_BswTask_CONST_LIMIT" = "_lc_ge_OS_Core0_BswTask_CONST_GROUP";
}
else
{
  "_OS_Core0_BswTask_CONST_START" = 0;
  "_OS_Core0_BswTask_CONST_END" = 0;
  "_OS_Core0_BswTask_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_CONST_TASK_CORE0_BSWTASK_NEAR )
if (exists(".zrodata.OS_Core0_BswTask_CONST_FAST"))
{
  group OS_Core0_BswTask_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_Core0_BswTask_CONST_FAST";
  }
  "_OS_Core0_BswTask_CONST_FAST_START" = "_lc_gb_OS_Core0_BswTask_CONST_FAST_GROUP";
  "_OS_Core0_BswTask_CONST_FAST_END" = "_lc_ge_OS_Core0_BswTask_CONST_FAST_GROUP" - 1;
  "_OS_Core0_BswTask_CONST_FAST_LIMIT" = "_lc_ge_OS_Core0_BswTask_CONST_FAST_GROUP";
}
else
{
  "_OS_Core0_BswTask_CONST_FAST_START" = 0;
  "_OS_Core0_BswTask_CONST_FAST_END" = 0;
  "_OS_Core0_BswTask_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_CONST_TASK_CORE0_BSWTASK_INIT )













#endif

#ifdef OS_LINK_CONST_TASK_CORE0_BSWTASK
# undef OS_LINK_CONST_TASK_CORE0_BSWTASK
#endif

#ifdef OS_LINK_CONST_TASK_CORE0_BSWTASK_FAR
# undef OS_LINK_CONST_TASK_CORE0_BSWTASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_CORE0_BSWTASK_NEAR
# undef OS_LINK_CONST_TASK_CORE0_BSWTASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_CORE0_BSWTASK_INIT
# undef OS_LINK_CONST_TASK_CORE0_BSWTASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_FAR )
if (exists(".rodata.OS_Default_Init_Task_CONST"))
{
  group OS_Default_Init_Task_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_Default_Init_Task_CONST";
  }
  "_OS_Default_Init_Task_CONST_START" = "_lc_gb_OS_Default_Init_Task_CONST_GROUP";
  "_OS_Default_Init_Task_CONST_END" = "_lc_ge_OS_Default_Init_Task_CONST_GROUP" - 1;
  "_OS_Default_Init_Task_CONST_LIMIT" = "_lc_ge_OS_Default_Init_Task_CONST_GROUP";
}
else
{
  "_OS_Default_Init_Task_CONST_START" = 0;
  "_OS_Default_Init_Task_CONST_END" = 0;
  "_OS_Default_Init_Task_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_NEAR )
if (exists(".zrodata.OS_Default_Init_Task_CONST_FAST"))
{
  group OS_Default_Init_Task_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_Default_Init_Task_CONST_FAST";
  }
  "_OS_Default_Init_Task_CONST_FAST_START" = "_lc_gb_OS_Default_Init_Task_CONST_FAST_GROUP";
  "_OS_Default_Init_Task_CONST_FAST_END" = "_lc_ge_OS_Default_Init_Task_CONST_FAST_GROUP" - 1;
  "_OS_Default_Init_Task_CONST_FAST_LIMIT" = "_lc_ge_OS_Default_Init_Task_CONST_FAST_GROUP";
}
else
{
  "_OS_Default_Init_Task_CONST_FAST_START" = 0;
  "_OS_Default_Init_Task_CONST_FAST_END" = 0;
  "_OS_Default_Init_Task_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_INIT )













#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR )
if (exists(".rodata.OS_Default_Init_Task_Trusted_CONST"))
{
  group OS_Default_Init_Task_Trusted_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_Default_Init_Task_Trusted_CONST";
  }
  "_OS_Default_Init_Task_Trusted_CONST_START" = "_lc_gb_OS_Default_Init_Task_Trusted_CONST_GROUP";
  "_OS_Default_Init_Task_Trusted_CONST_END" = "_lc_ge_OS_Default_Init_Task_Trusted_CONST_GROUP" - 1;
  "_OS_Default_Init_Task_Trusted_CONST_LIMIT" = "_lc_ge_OS_Default_Init_Task_Trusted_CONST_GROUP";
}
else
{
  "_OS_Default_Init_Task_Trusted_CONST_START" = 0;
  "_OS_Default_Init_Task_Trusted_CONST_END" = 0;
  "_OS_Default_Init_Task_Trusted_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR )
if (exists(".zrodata.OS_Default_Init_Task_Trusted_CONST_FAST"))
{
  group OS_Default_Init_Task_Trusted_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_Default_Init_Task_Trusted_CONST_FAST";
  }
  "_OS_Default_Init_Task_Trusted_CONST_FAST_START" = "_lc_gb_OS_Default_Init_Task_Trusted_CONST_FAST_GROUP";
  "_OS_Default_Init_Task_Trusted_CONST_FAST_END" = "_lc_ge_OS_Default_Init_Task_Trusted_CONST_FAST_GROUP" - 1;
  "_OS_Default_Init_Task_Trusted_CONST_FAST_LIMIT" = "_lc_ge_OS_Default_Init_Task_Trusted_CONST_FAST_GROUP";
}
else
{
  "_OS_Default_Init_Task_Trusted_CONST_FAST_START" = 0;
  "_OS_Default_Init_Task_Trusted_CONST_FAST_END" = 0;
  "_OS_Default_Init_Task_Trusted_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED_INIT )













#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED_INIT
# undef OS_LINK_CONST_TASK_DEFAULT_INIT_TASK_TRUSTED_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE0_FAR )
if (exists(".rodata.OS_IdleTask_OsCore0_CONST"))
{
  group OS_IdleTask_OsCore0_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_IdleTask_OsCore0_CONST";
  }
  "_OS_IdleTask_OsCore0_CONST_START" = "_lc_gb_OS_IdleTask_OsCore0_CONST_GROUP";
  "_OS_IdleTask_OsCore0_CONST_END" = "_lc_ge_OS_IdleTask_OsCore0_CONST_GROUP" - 1;
  "_OS_IdleTask_OsCore0_CONST_LIMIT" = "_lc_ge_OS_IdleTask_OsCore0_CONST_GROUP";
}
else
{
  "_OS_IdleTask_OsCore0_CONST_START" = 0;
  "_OS_IdleTask_OsCore0_CONST_END" = 0;
  "_OS_IdleTask_OsCore0_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE0_NEAR )
if (exists(".zrodata.OS_IdleTask_OsCore0_CONST_FAST"))
{
  group OS_IdleTask_OsCore0_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_IdleTask_OsCore0_CONST_FAST";
  }
  "_OS_IdleTask_OsCore0_CONST_FAST_START" = "_lc_gb_OS_IdleTask_OsCore0_CONST_FAST_GROUP";
  "_OS_IdleTask_OsCore0_CONST_FAST_END" = "_lc_ge_OS_IdleTask_OsCore0_CONST_FAST_GROUP" - 1;
  "_OS_IdleTask_OsCore0_CONST_FAST_LIMIT" = "_lc_ge_OS_IdleTask_OsCore0_CONST_FAST_GROUP";
}
else
{
  "_OS_IdleTask_OsCore0_CONST_FAST_START" = 0;
  "_OS_IdleTask_OsCore0_CONST_FAST_END" = 0;
  "_OS_IdleTask_OsCore0_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_CONST_TASK_IDLETASK_OSCORE0_INIT )













#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE0
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE0
#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE0_FAR
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE0_FAR
#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE0_NEAR
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE0_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_IDLETASK_OSCORE0_INIT
# undef OS_LINK_CONST_TASK_IDLETASK_OSCORE0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC0SR0_ISR_FAR )
if (exists(".rodata.OS_ADC0SR0_ISR_CONST"))
{
  group OS_ADC0SR0_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ADC0SR0_ISR_CONST";
  }
  "_OS_ADC0SR0_ISR_CONST_START" = "_lc_gb_OS_ADC0SR0_ISR_CONST_GROUP";
  "_OS_ADC0SR0_ISR_CONST_END" = "_lc_ge_OS_ADC0SR0_ISR_CONST_GROUP" - 1;
  "_OS_ADC0SR0_ISR_CONST_LIMIT" = "_lc_ge_OS_ADC0SR0_ISR_CONST_GROUP";
}
else
{
  "_OS_ADC0SR0_ISR_CONST_START" = 0;
  "_OS_ADC0SR0_ISR_CONST_END" = 0;
  "_OS_ADC0SR0_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC0SR0_ISR_NEAR )
if (exists(".zrodata.OS_ADC0SR0_ISR_CONST_FAST"))
{
  group OS_ADC0SR0_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ADC0SR0_ISR_CONST_FAST";
  }
  "_OS_ADC0SR0_ISR_CONST_FAST_START" = "_lc_gb_OS_ADC0SR0_ISR_CONST_FAST_GROUP";
  "_OS_ADC0SR0_ISR_CONST_FAST_END" = "_lc_ge_OS_ADC0SR0_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ADC0SR0_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ADC0SR0_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ADC0SR0_ISR_CONST_FAST_START" = 0;
  "_OS_ADC0SR0_ISR_CONST_FAST_END" = 0;
  "_OS_ADC0SR0_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC0SR0_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ADC0SR0_ISR
# undef OS_LINK_CONST_ISR_ADC0SR0_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ADC0SR0_ISR_FAR
# undef OS_LINK_CONST_ISR_ADC0SR0_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC0SR0_ISR_NEAR
# undef OS_LINK_CONST_ISR_ADC0SR0_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC0SR0_ISR_INIT
# undef OS_LINK_CONST_ISR_ADC0SR0_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC11SR0_ISR_FAR )
if (exists(".rodata.OS_ADC11SR0_ISR_CONST"))
{
  group OS_ADC11SR0_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ADC11SR0_ISR_CONST";
  }
  "_OS_ADC11SR0_ISR_CONST_START" = "_lc_gb_OS_ADC11SR0_ISR_CONST_GROUP";
  "_OS_ADC11SR0_ISR_CONST_END" = "_lc_ge_OS_ADC11SR0_ISR_CONST_GROUP" - 1;
  "_OS_ADC11SR0_ISR_CONST_LIMIT" = "_lc_ge_OS_ADC11SR0_ISR_CONST_GROUP";
}
else
{
  "_OS_ADC11SR0_ISR_CONST_START" = 0;
  "_OS_ADC11SR0_ISR_CONST_END" = 0;
  "_OS_ADC11SR0_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC11SR0_ISR_NEAR )
if (exists(".zrodata.OS_ADC11SR0_ISR_CONST_FAST"))
{
  group OS_ADC11SR0_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ADC11SR0_ISR_CONST_FAST";
  }
  "_OS_ADC11SR0_ISR_CONST_FAST_START" = "_lc_gb_OS_ADC11SR0_ISR_CONST_FAST_GROUP";
  "_OS_ADC11SR0_ISR_CONST_FAST_END" = "_lc_ge_OS_ADC11SR0_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ADC11SR0_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ADC11SR0_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ADC11SR0_ISR_CONST_FAST_START" = 0;
  "_OS_ADC11SR0_ISR_CONST_FAST_END" = 0;
  "_OS_ADC11SR0_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC11SR0_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ADC11SR0_ISR
# undef OS_LINK_CONST_ISR_ADC11SR0_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ADC11SR0_ISR_FAR
# undef OS_LINK_CONST_ISR_ADC11SR0_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC11SR0_ISR_NEAR
# undef OS_LINK_CONST_ISR_ADC11SR0_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC11SR0_ISR_INIT
# undef OS_LINK_CONST_ISR_ADC11SR0_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC1SR0_ISR_FAR )
if (exists(".rodata.OS_ADC1SR0_ISR_CONST"))
{
  group OS_ADC1SR0_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ADC1SR0_ISR_CONST";
  }
  "_OS_ADC1SR0_ISR_CONST_START" = "_lc_gb_OS_ADC1SR0_ISR_CONST_GROUP";
  "_OS_ADC1SR0_ISR_CONST_END" = "_lc_ge_OS_ADC1SR0_ISR_CONST_GROUP" - 1;
  "_OS_ADC1SR0_ISR_CONST_LIMIT" = "_lc_ge_OS_ADC1SR0_ISR_CONST_GROUP";
}
else
{
  "_OS_ADC1SR0_ISR_CONST_START" = 0;
  "_OS_ADC1SR0_ISR_CONST_END" = 0;
  "_OS_ADC1SR0_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC1SR0_ISR_NEAR )
if (exists(".zrodata.OS_ADC1SR0_ISR_CONST_FAST"))
{
  group OS_ADC1SR0_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ADC1SR0_ISR_CONST_FAST";
  }
  "_OS_ADC1SR0_ISR_CONST_FAST_START" = "_lc_gb_OS_ADC1SR0_ISR_CONST_FAST_GROUP";
  "_OS_ADC1SR0_ISR_CONST_FAST_END" = "_lc_ge_OS_ADC1SR0_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ADC1SR0_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ADC1SR0_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ADC1SR0_ISR_CONST_FAST_START" = 0;
  "_OS_ADC1SR0_ISR_CONST_FAST_END" = 0;
  "_OS_ADC1SR0_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC1SR0_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ADC1SR0_ISR
# undef OS_LINK_CONST_ISR_ADC1SR0_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ADC1SR0_ISR_FAR
# undef OS_LINK_CONST_ISR_ADC1SR0_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC1SR0_ISR_NEAR
# undef OS_LINK_CONST_ISR_ADC1SR0_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC1SR0_ISR_INIT
# undef OS_LINK_CONST_ISR_ADC1SR0_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC2SR0_ISR_FAR )
if (exists(".rodata.OS_ADC2SR0_ISR_CONST"))
{
  group OS_ADC2SR0_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ADC2SR0_ISR_CONST";
  }
  "_OS_ADC2SR0_ISR_CONST_START" = "_lc_gb_OS_ADC2SR0_ISR_CONST_GROUP";
  "_OS_ADC2SR0_ISR_CONST_END" = "_lc_ge_OS_ADC2SR0_ISR_CONST_GROUP" - 1;
  "_OS_ADC2SR0_ISR_CONST_LIMIT" = "_lc_ge_OS_ADC2SR0_ISR_CONST_GROUP";
}
else
{
  "_OS_ADC2SR0_ISR_CONST_START" = 0;
  "_OS_ADC2SR0_ISR_CONST_END" = 0;
  "_OS_ADC2SR0_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC2SR0_ISR_NEAR )
if (exists(".zrodata.OS_ADC2SR0_ISR_CONST_FAST"))
{
  group OS_ADC2SR0_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ADC2SR0_ISR_CONST_FAST";
  }
  "_OS_ADC2SR0_ISR_CONST_FAST_START" = "_lc_gb_OS_ADC2SR0_ISR_CONST_FAST_GROUP";
  "_OS_ADC2SR0_ISR_CONST_FAST_END" = "_lc_ge_OS_ADC2SR0_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ADC2SR0_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ADC2SR0_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ADC2SR0_ISR_CONST_FAST_START" = 0;
  "_OS_ADC2SR0_ISR_CONST_FAST_END" = 0;
  "_OS_ADC2SR0_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC2SR0_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ADC2SR0_ISR
# undef OS_LINK_CONST_ISR_ADC2SR0_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ADC2SR0_ISR_FAR
# undef OS_LINK_CONST_ISR_ADC2SR0_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC2SR0_ISR_NEAR
# undef OS_LINK_CONST_ISR_ADC2SR0_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC2SR0_ISR_INIT
# undef OS_LINK_CONST_ISR_ADC2SR0_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC3SR0_ISR_FAR )
if (exists(".rodata.OS_ADC3SR0_ISR_CONST"))
{
  group OS_ADC3SR0_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ADC3SR0_ISR_CONST";
  }
  "_OS_ADC3SR0_ISR_CONST_START" = "_lc_gb_OS_ADC3SR0_ISR_CONST_GROUP";
  "_OS_ADC3SR0_ISR_CONST_END" = "_lc_ge_OS_ADC3SR0_ISR_CONST_GROUP" - 1;
  "_OS_ADC3SR0_ISR_CONST_LIMIT" = "_lc_ge_OS_ADC3SR0_ISR_CONST_GROUP";
}
else
{
  "_OS_ADC3SR0_ISR_CONST_START" = 0;
  "_OS_ADC3SR0_ISR_CONST_END" = 0;
  "_OS_ADC3SR0_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC3SR0_ISR_NEAR )
if (exists(".zrodata.OS_ADC3SR0_ISR_CONST_FAST"))
{
  group OS_ADC3SR0_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ADC3SR0_ISR_CONST_FAST";
  }
  "_OS_ADC3SR0_ISR_CONST_FAST_START" = "_lc_gb_OS_ADC3SR0_ISR_CONST_FAST_GROUP";
  "_OS_ADC3SR0_ISR_CONST_FAST_END" = "_lc_ge_OS_ADC3SR0_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ADC3SR0_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ADC3SR0_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ADC3SR0_ISR_CONST_FAST_START" = 0;
  "_OS_ADC3SR0_ISR_CONST_FAST_END" = 0;
  "_OS_ADC3SR0_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC3SR0_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ADC3SR0_ISR
# undef OS_LINK_CONST_ISR_ADC3SR0_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ADC3SR0_ISR_FAR
# undef OS_LINK_CONST_ISR_ADC3SR0_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC3SR0_ISR_NEAR
# undef OS_LINK_CONST_ISR_ADC3SR0_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC3SR0_ISR_INIT
# undef OS_LINK_CONST_ISR_ADC3SR0_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC8SR0_ISR_FAR )
if (exists(".rodata.OS_ADC8SR0_ISR_CONST"))
{
  group OS_ADC8SR0_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ADC8SR0_ISR_CONST";
  }
  "_OS_ADC8SR0_ISR_CONST_START" = "_lc_gb_OS_ADC8SR0_ISR_CONST_GROUP";
  "_OS_ADC8SR0_ISR_CONST_END" = "_lc_ge_OS_ADC8SR0_ISR_CONST_GROUP" - 1;
  "_OS_ADC8SR0_ISR_CONST_LIMIT" = "_lc_ge_OS_ADC8SR0_ISR_CONST_GROUP";
}
else
{
  "_OS_ADC8SR0_ISR_CONST_START" = 0;
  "_OS_ADC8SR0_ISR_CONST_END" = 0;
  "_OS_ADC8SR0_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC8SR0_ISR_NEAR )
if (exists(".zrodata.OS_ADC8SR0_ISR_CONST_FAST"))
{
  group OS_ADC8SR0_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ADC8SR0_ISR_CONST_FAST";
  }
  "_OS_ADC8SR0_ISR_CONST_FAST_START" = "_lc_gb_OS_ADC8SR0_ISR_CONST_FAST_GROUP";
  "_OS_ADC8SR0_ISR_CONST_FAST_END" = "_lc_ge_OS_ADC8SR0_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ADC8SR0_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ADC8SR0_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ADC8SR0_ISR_CONST_FAST_START" = 0;
  "_OS_ADC8SR0_ISR_CONST_FAST_END" = 0;
  "_OS_ADC8SR0_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_CONST_ISR_ADC8SR0_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ADC8SR0_ISR
# undef OS_LINK_CONST_ISR_ADC8SR0_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ADC8SR0_ISR_FAR
# undef OS_LINK_CONST_ISR_ADC8SR0_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC8SR0_ISR_NEAR
# undef OS_LINK_CONST_ISR_ADC8SR0_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ADC8SR0_ISR_INIT
# undef OS_LINK_CONST_ISR_ADC8SR0_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1ERR_ISR_FAR )
if (exists(".rodata.OS_ASCLIN1ERR_ISR_CONST"))
{
  group OS_ASCLIN1ERR_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ASCLIN1ERR_ISR_CONST";
  }
  "_OS_ASCLIN1ERR_ISR_CONST_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_CONST_GROUP";
  "_OS_ASCLIN1ERR_ISR_CONST_END" = "_lc_ge_OS_ASCLIN1ERR_ISR_CONST_GROUP" - 1;
  "_OS_ASCLIN1ERR_ISR_CONST_LIMIT" = "_lc_ge_OS_ASCLIN1ERR_ISR_CONST_GROUP";
}
else
{
  "_OS_ASCLIN1ERR_ISR_CONST_START" = 0;
  "_OS_ASCLIN1ERR_ISR_CONST_END" = 0;
  "_OS_ASCLIN1ERR_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1ERR_ISR_NEAR )
if (exists(".zrodata.OS_ASCLIN1ERR_ISR_CONST_FAST"))
{
  group OS_ASCLIN1ERR_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ASCLIN1ERR_ISR_CONST_FAST";
  }
  "_OS_ASCLIN1ERR_ISR_CONST_FAST_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_CONST_FAST_GROUP";
  "_OS_ASCLIN1ERR_ISR_CONST_FAST_END" = "_lc_ge_OS_ASCLIN1ERR_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ASCLIN1ERR_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ASCLIN1ERR_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ASCLIN1ERR_ISR_CONST_FAST_START" = 0;
  "_OS_ASCLIN1ERR_ISR_CONST_FAST_END" = 0;
  "_OS_ASCLIN1ERR_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1ERR_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1ERR_ISR
# undef OS_LINK_CONST_ISR_ASCLIN1ERR_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1ERR_ISR_FAR
# undef OS_LINK_CONST_ISR_ASCLIN1ERR_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1ERR_ISR_NEAR
# undef OS_LINK_CONST_ISR_ASCLIN1ERR_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1ERR_ISR_INIT
# undef OS_LINK_CONST_ISR_ASCLIN1ERR_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1RX_ISR_FAR )
if (exists(".rodata.OS_ASCLIN1RX_ISR_CONST"))
{
  group OS_ASCLIN1RX_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ASCLIN1RX_ISR_CONST";
  }
  "_OS_ASCLIN1RX_ISR_CONST_START" = "_lc_gb_OS_ASCLIN1RX_ISR_CONST_GROUP";
  "_OS_ASCLIN1RX_ISR_CONST_END" = "_lc_ge_OS_ASCLIN1RX_ISR_CONST_GROUP" - 1;
  "_OS_ASCLIN1RX_ISR_CONST_LIMIT" = "_lc_ge_OS_ASCLIN1RX_ISR_CONST_GROUP";
}
else
{
  "_OS_ASCLIN1RX_ISR_CONST_START" = 0;
  "_OS_ASCLIN1RX_ISR_CONST_END" = 0;
  "_OS_ASCLIN1RX_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1RX_ISR_NEAR )
if (exists(".zrodata.OS_ASCLIN1RX_ISR_CONST_FAST"))
{
  group OS_ASCLIN1RX_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ASCLIN1RX_ISR_CONST_FAST";
  }
  "_OS_ASCLIN1RX_ISR_CONST_FAST_START" = "_lc_gb_OS_ASCLIN1RX_ISR_CONST_FAST_GROUP";
  "_OS_ASCLIN1RX_ISR_CONST_FAST_END" = "_lc_ge_OS_ASCLIN1RX_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ASCLIN1RX_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ASCLIN1RX_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ASCLIN1RX_ISR_CONST_FAST_START" = 0;
  "_OS_ASCLIN1RX_ISR_CONST_FAST_END" = 0;
  "_OS_ASCLIN1RX_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1RX_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1RX_ISR
# undef OS_LINK_CONST_ISR_ASCLIN1RX_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1RX_ISR_FAR
# undef OS_LINK_CONST_ISR_ASCLIN1RX_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1RX_ISR_NEAR
# undef OS_LINK_CONST_ISR_ASCLIN1RX_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1RX_ISR_INIT
# undef OS_LINK_CONST_ISR_ASCLIN1RX_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1TX_ISR_FAR )
if (exists(".rodata.OS_ASCLIN1TX_ISR_CONST"))
{
  group OS_ASCLIN1TX_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ASCLIN1TX_ISR_CONST";
  }
  "_OS_ASCLIN1TX_ISR_CONST_START" = "_lc_gb_OS_ASCLIN1TX_ISR_CONST_GROUP";
  "_OS_ASCLIN1TX_ISR_CONST_END" = "_lc_ge_OS_ASCLIN1TX_ISR_CONST_GROUP" - 1;
  "_OS_ASCLIN1TX_ISR_CONST_LIMIT" = "_lc_ge_OS_ASCLIN1TX_ISR_CONST_GROUP";
}
else
{
  "_OS_ASCLIN1TX_ISR_CONST_START" = 0;
  "_OS_ASCLIN1TX_ISR_CONST_END" = 0;
  "_OS_ASCLIN1TX_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1TX_ISR_NEAR )
if (exists(".zrodata.OS_ASCLIN1TX_ISR_CONST_FAST"))
{
  group OS_ASCLIN1TX_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ASCLIN1TX_ISR_CONST_FAST";
  }
  "_OS_ASCLIN1TX_ISR_CONST_FAST_START" = "_lc_gb_OS_ASCLIN1TX_ISR_CONST_FAST_GROUP";
  "_OS_ASCLIN1TX_ISR_CONST_FAST_END" = "_lc_ge_OS_ASCLIN1TX_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ASCLIN1TX_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ASCLIN1TX_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ASCLIN1TX_ISR_CONST_FAST_START" = 0;
  "_OS_ASCLIN1TX_ISR_CONST_FAST_END" = 0;
  "_OS_ASCLIN1TX_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN1TX_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1TX_ISR
# undef OS_LINK_CONST_ISR_ASCLIN1TX_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1TX_ISR_FAR
# undef OS_LINK_CONST_ISR_ASCLIN1TX_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1TX_ISR_NEAR
# undef OS_LINK_CONST_ISR_ASCLIN1TX_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN1TX_ISR_INIT
# undef OS_LINK_CONST_ISR_ASCLIN1TX_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2ERR_ISR_FAR )
if (exists(".rodata.OS_ASCLIN2ERR_ISR_CONST"))
{
  group OS_ASCLIN2ERR_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ASCLIN2ERR_ISR_CONST";
  }
  "_OS_ASCLIN2ERR_ISR_CONST_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_CONST_GROUP";
  "_OS_ASCLIN2ERR_ISR_CONST_END" = "_lc_ge_OS_ASCLIN2ERR_ISR_CONST_GROUP" - 1;
  "_OS_ASCLIN2ERR_ISR_CONST_LIMIT" = "_lc_ge_OS_ASCLIN2ERR_ISR_CONST_GROUP";
}
else
{
  "_OS_ASCLIN2ERR_ISR_CONST_START" = 0;
  "_OS_ASCLIN2ERR_ISR_CONST_END" = 0;
  "_OS_ASCLIN2ERR_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2ERR_ISR_NEAR )
if (exists(".zrodata.OS_ASCLIN2ERR_ISR_CONST_FAST"))
{
  group OS_ASCLIN2ERR_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ASCLIN2ERR_ISR_CONST_FAST";
  }
  "_OS_ASCLIN2ERR_ISR_CONST_FAST_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_CONST_FAST_GROUP";
  "_OS_ASCLIN2ERR_ISR_CONST_FAST_END" = "_lc_ge_OS_ASCLIN2ERR_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ASCLIN2ERR_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ASCLIN2ERR_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ASCLIN2ERR_ISR_CONST_FAST_START" = 0;
  "_OS_ASCLIN2ERR_ISR_CONST_FAST_END" = 0;
  "_OS_ASCLIN2ERR_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2ERR_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2ERR_ISR
# undef OS_LINK_CONST_ISR_ASCLIN2ERR_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2ERR_ISR_FAR
# undef OS_LINK_CONST_ISR_ASCLIN2ERR_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2ERR_ISR_NEAR
# undef OS_LINK_CONST_ISR_ASCLIN2ERR_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2ERR_ISR_INIT
# undef OS_LINK_CONST_ISR_ASCLIN2ERR_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2RX_ISR_FAR )
if (exists(".rodata.OS_ASCLIN2RX_ISR_CONST"))
{
  group OS_ASCLIN2RX_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ASCLIN2RX_ISR_CONST";
  }
  "_OS_ASCLIN2RX_ISR_CONST_START" = "_lc_gb_OS_ASCLIN2RX_ISR_CONST_GROUP";
  "_OS_ASCLIN2RX_ISR_CONST_END" = "_lc_ge_OS_ASCLIN2RX_ISR_CONST_GROUP" - 1;
  "_OS_ASCLIN2RX_ISR_CONST_LIMIT" = "_lc_ge_OS_ASCLIN2RX_ISR_CONST_GROUP";
}
else
{
  "_OS_ASCLIN2RX_ISR_CONST_START" = 0;
  "_OS_ASCLIN2RX_ISR_CONST_END" = 0;
  "_OS_ASCLIN2RX_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2RX_ISR_NEAR )
if (exists(".zrodata.OS_ASCLIN2RX_ISR_CONST_FAST"))
{
  group OS_ASCLIN2RX_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ASCLIN2RX_ISR_CONST_FAST";
  }
  "_OS_ASCLIN2RX_ISR_CONST_FAST_START" = "_lc_gb_OS_ASCLIN2RX_ISR_CONST_FAST_GROUP";
  "_OS_ASCLIN2RX_ISR_CONST_FAST_END" = "_lc_ge_OS_ASCLIN2RX_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ASCLIN2RX_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ASCLIN2RX_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ASCLIN2RX_ISR_CONST_FAST_START" = 0;
  "_OS_ASCLIN2RX_ISR_CONST_FAST_END" = 0;
  "_OS_ASCLIN2RX_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2RX_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2RX_ISR
# undef OS_LINK_CONST_ISR_ASCLIN2RX_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2RX_ISR_FAR
# undef OS_LINK_CONST_ISR_ASCLIN2RX_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2RX_ISR_NEAR
# undef OS_LINK_CONST_ISR_ASCLIN2RX_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2RX_ISR_INIT
# undef OS_LINK_CONST_ISR_ASCLIN2RX_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2TX_ISR_FAR )
if (exists(".rodata.OS_ASCLIN2TX_ISR_CONST"))
{
  group OS_ASCLIN2TX_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_ASCLIN2TX_ISR_CONST";
  }
  "_OS_ASCLIN2TX_ISR_CONST_START" = "_lc_gb_OS_ASCLIN2TX_ISR_CONST_GROUP";
  "_OS_ASCLIN2TX_ISR_CONST_END" = "_lc_ge_OS_ASCLIN2TX_ISR_CONST_GROUP" - 1;
  "_OS_ASCLIN2TX_ISR_CONST_LIMIT" = "_lc_ge_OS_ASCLIN2TX_ISR_CONST_GROUP";
}
else
{
  "_OS_ASCLIN2TX_ISR_CONST_START" = 0;
  "_OS_ASCLIN2TX_ISR_CONST_END" = 0;
  "_OS_ASCLIN2TX_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2TX_ISR_NEAR )
if (exists(".zrodata.OS_ASCLIN2TX_ISR_CONST_FAST"))
{
  group OS_ASCLIN2TX_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_ASCLIN2TX_ISR_CONST_FAST";
  }
  "_OS_ASCLIN2TX_ISR_CONST_FAST_START" = "_lc_gb_OS_ASCLIN2TX_ISR_CONST_FAST_GROUP";
  "_OS_ASCLIN2TX_ISR_CONST_FAST_END" = "_lc_ge_OS_ASCLIN2TX_ISR_CONST_FAST_GROUP" - 1;
  "_OS_ASCLIN2TX_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_ASCLIN2TX_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_ASCLIN2TX_ISR_CONST_FAST_START" = 0;
  "_OS_ASCLIN2TX_ISR_CONST_FAST_END" = 0;
  "_OS_ASCLIN2TX_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_CONST_ISR_ASCLIN2TX_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2TX_ISR
# undef OS_LINK_CONST_ISR_ASCLIN2TX_ISR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2TX_ISR_FAR
# undef OS_LINK_CONST_ISR_ASCLIN2TX_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2TX_ISR_NEAR
# undef OS_LINK_CONST_ISR_ASCLIN2TX_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_ASCLIN2TX_ISR_INIT
# undef OS_LINK_CONST_ISR_ASCLIN2TX_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_0 ) || defined ( OS_LINK_CONST_ISR_CANISR_0_FAR )
if (exists(".rodata.OS_CanIsr_0_CONST"))
{
  group OS_CanIsr_0_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_CanIsr_0_CONST";
  }
  "_OS_CanIsr_0_CONST_START" = "_lc_gb_OS_CanIsr_0_CONST_GROUP";
  "_OS_CanIsr_0_CONST_END" = "_lc_ge_OS_CanIsr_0_CONST_GROUP" - 1;
  "_OS_CanIsr_0_CONST_LIMIT" = "_lc_ge_OS_CanIsr_0_CONST_GROUP";
}
else
{
  "_OS_CanIsr_0_CONST_START" = 0;
  "_OS_CanIsr_0_CONST_END" = 0;
  "_OS_CanIsr_0_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_0 ) || defined ( OS_LINK_CONST_ISR_CANISR_0_NEAR )
if (exists(".zrodata.OS_CanIsr_0_CONST_FAST"))
{
  group OS_CanIsr_0_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_CanIsr_0_CONST_FAST";
  }
  "_OS_CanIsr_0_CONST_FAST_START" = "_lc_gb_OS_CanIsr_0_CONST_FAST_GROUP";
  "_OS_CanIsr_0_CONST_FAST_END" = "_lc_ge_OS_CanIsr_0_CONST_FAST_GROUP" - 1;
  "_OS_CanIsr_0_CONST_FAST_LIMIT" = "_lc_ge_OS_CanIsr_0_CONST_FAST_GROUP";
}
else
{
  "_OS_CanIsr_0_CONST_FAST_START" = 0;
  "_OS_CanIsr_0_CONST_FAST_END" = 0;
  "_OS_CanIsr_0_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_0 ) || defined ( OS_LINK_CONST_ISR_CANISR_0_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_CANISR_0
# undef OS_LINK_CONST_ISR_CANISR_0
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_0_FAR
# undef OS_LINK_CONST_ISR_CANISR_0_FAR
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_0_NEAR
# undef OS_LINK_CONST_ISR_CANISR_0_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_0_INIT
# undef OS_LINK_CONST_ISR_CANISR_0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_1 ) || defined ( OS_LINK_CONST_ISR_CANISR_1_FAR )
if (exists(".rodata.OS_CanIsr_1_CONST"))
{
  group OS_CanIsr_1_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_CanIsr_1_CONST";
  }
  "_OS_CanIsr_1_CONST_START" = "_lc_gb_OS_CanIsr_1_CONST_GROUP";
  "_OS_CanIsr_1_CONST_END" = "_lc_ge_OS_CanIsr_1_CONST_GROUP" - 1;
  "_OS_CanIsr_1_CONST_LIMIT" = "_lc_ge_OS_CanIsr_1_CONST_GROUP";
}
else
{
  "_OS_CanIsr_1_CONST_START" = 0;
  "_OS_CanIsr_1_CONST_END" = 0;
  "_OS_CanIsr_1_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_1 ) || defined ( OS_LINK_CONST_ISR_CANISR_1_NEAR )
if (exists(".zrodata.OS_CanIsr_1_CONST_FAST"))
{
  group OS_CanIsr_1_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_CanIsr_1_CONST_FAST";
  }
  "_OS_CanIsr_1_CONST_FAST_START" = "_lc_gb_OS_CanIsr_1_CONST_FAST_GROUP";
  "_OS_CanIsr_1_CONST_FAST_END" = "_lc_ge_OS_CanIsr_1_CONST_FAST_GROUP" - 1;
  "_OS_CanIsr_1_CONST_FAST_LIMIT" = "_lc_ge_OS_CanIsr_1_CONST_FAST_GROUP";
}
else
{
  "_OS_CanIsr_1_CONST_FAST_START" = 0;
  "_OS_CanIsr_1_CONST_FAST_END" = 0;
  "_OS_CanIsr_1_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_1 ) || defined ( OS_LINK_CONST_ISR_CANISR_1_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_CANISR_1
# undef OS_LINK_CONST_ISR_CANISR_1
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_1_FAR
# undef OS_LINK_CONST_ISR_CANISR_1_FAR
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_1_NEAR
# undef OS_LINK_CONST_ISR_CANISR_1_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_1_INIT
# undef OS_LINK_CONST_ISR_CANISR_1_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_3 ) || defined ( OS_LINK_CONST_ISR_CANISR_3_FAR )
if (exists(".rodata.OS_CanIsr_3_CONST"))
{
  group OS_CanIsr_3_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_CanIsr_3_CONST";
  }
  "_OS_CanIsr_3_CONST_START" = "_lc_gb_OS_CanIsr_3_CONST_GROUP";
  "_OS_CanIsr_3_CONST_END" = "_lc_ge_OS_CanIsr_3_CONST_GROUP" - 1;
  "_OS_CanIsr_3_CONST_LIMIT" = "_lc_ge_OS_CanIsr_3_CONST_GROUP";
}
else
{
  "_OS_CanIsr_3_CONST_START" = 0;
  "_OS_CanIsr_3_CONST_END" = 0;
  "_OS_CanIsr_3_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_3 ) || defined ( OS_LINK_CONST_ISR_CANISR_3_NEAR )
if (exists(".zrodata.OS_CanIsr_3_CONST_FAST"))
{
  group OS_CanIsr_3_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_CanIsr_3_CONST_FAST";
  }
  "_OS_CanIsr_3_CONST_FAST_START" = "_lc_gb_OS_CanIsr_3_CONST_FAST_GROUP";
  "_OS_CanIsr_3_CONST_FAST_END" = "_lc_ge_OS_CanIsr_3_CONST_FAST_GROUP" - 1;
  "_OS_CanIsr_3_CONST_FAST_LIMIT" = "_lc_ge_OS_CanIsr_3_CONST_FAST_GROUP";
}
else
{
  "_OS_CanIsr_3_CONST_FAST_START" = 0;
  "_OS_CanIsr_3_CONST_FAST_END" = 0;
  "_OS_CanIsr_3_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_3 ) || defined ( OS_LINK_CONST_ISR_CANISR_3_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_CANISR_3
# undef OS_LINK_CONST_ISR_CANISR_3
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_3_FAR
# undef OS_LINK_CONST_ISR_CANISR_3_FAR
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_3_NEAR
# undef OS_LINK_CONST_ISR_CANISR_3_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_3_INIT
# undef OS_LINK_CONST_ISR_CANISR_3_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_4 ) || defined ( OS_LINK_CONST_ISR_CANISR_4_FAR )
if (exists(".rodata.OS_CanIsr_4_CONST"))
{
  group OS_CanIsr_4_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_CanIsr_4_CONST";
  }
  "_OS_CanIsr_4_CONST_START" = "_lc_gb_OS_CanIsr_4_CONST_GROUP";
  "_OS_CanIsr_4_CONST_END" = "_lc_ge_OS_CanIsr_4_CONST_GROUP" - 1;
  "_OS_CanIsr_4_CONST_LIMIT" = "_lc_ge_OS_CanIsr_4_CONST_GROUP";
}
else
{
  "_OS_CanIsr_4_CONST_START" = 0;
  "_OS_CanIsr_4_CONST_END" = 0;
  "_OS_CanIsr_4_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_4 ) || defined ( OS_LINK_CONST_ISR_CANISR_4_NEAR )
if (exists(".zrodata.OS_CanIsr_4_CONST_FAST"))
{
  group OS_CanIsr_4_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_CanIsr_4_CONST_FAST";
  }
  "_OS_CanIsr_4_CONST_FAST_START" = "_lc_gb_OS_CanIsr_4_CONST_FAST_GROUP";
  "_OS_CanIsr_4_CONST_FAST_END" = "_lc_ge_OS_CanIsr_4_CONST_FAST_GROUP" - 1;
  "_OS_CanIsr_4_CONST_FAST_LIMIT" = "_lc_ge_OS_CanIsr_4_CONST_FAST_GROUP";
}
else
{
  "_OS_CanIsr_4_CONST_FAST_START" = 0;
  "_OS_CanIsr_4_CONST_FAST_END" = 0;
  "_OS_CanIsr_4_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_CANISR_4 ) || defined ( OS_LINK_CONST_ISR_CANISR_4_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_CANISR_4
# undef OS_LINK_CONST_ISR_CANISR_4
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_4_FAR
# undef OS_LINK_CONST_ISR_CANISR_4_FAR
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_4_NEAR
# undef OS_LINK_CONST_ISR_CANISR_4_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_CANISR_4_INIT
# undef OS_LINK_CONST_ISR_CANISR_4_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0_FAR )
if (exists(".rodata.OS_CounterIsr_SystemTimer0_CONST"))
{
  group OS_CounterIsr_SystemTimer0_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_CounterIsr_SystemTimer0_CONST";
  }
  "_OS_CounterIsr_SystemTimer0_CONST_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_CONST_GROUP";
  "_OS_CounterIsr_SystemTimer0_CONST_END" = "_lc_ge_OS_CounterIsr_SystemTimer0_CONST_GROUP" - 1;
  "_OS_CounterIsr_SystemTimer0_CONST_LIMIT" = "_lc_ge_OS_CounterIsr_SystemTimer0_CONST_GROUP";
}
else
{
  "_OS_CounterIsr_SystemTimer0_CONST_START" = 0;
  "_OS_CounterIsr_SystemTimer0_CONST_END" = 0;
  "_OS_CounterIsr_SystemTimer0_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0_NEAR )
if (exists(".zrodata.OS_CounterIsr_SystemTimer0_CONST_FAST"))
{
  group OS_CounterIsr_SystemTimer0_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_CounterIsr_SystemTimer0_CONST_FAST";
  }
  "_OS_CounterIsr_SystemTimer0_CONST_FAST_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_CONST_FAST_GROUP";
  "_OS_CounterIsr_SystemTimer0_CONST_FAST_END" = "_lc_ge_OS_CounterIsr_SystemTimer0_CONST_FAST_GROUP" - 1;
  "_OS_CounterIsr_SystemTimer0_CONST_FAST_LIMIT" = "_lc_ge_OS_CounterIsr_SystemTimer0_CONST_FAST_GROUP";
}
else
{
  "_OS_CounterIsr_SystemTimer0_CONST_FAST_START" = 0;
  "_OS_CounterIsr_SystemTimer0_CONST_FAST_END" = 0;
  "_OS_CounterIsr_SystemTimer0_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0
# undef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0
#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0_FAR
# undef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0_FAR
#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0_NEAR
# undef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0_INIT
# undef OS_LINK_CONST_ISR_COUNTERISR_SYSTEMTIMER0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH10SR_ISR_FAR )
if (exists(".rodata.OS_DMACH10SR_ISR_CONST"))
{
  group OS_DMACH10SR_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_DMACH10SR_ISR_CONST";
  }
  "_OS_DMACH10SR_ISR_CONST_START" = "_lc_gb_OS_DMACH10SR_ISR_CONST_GROUP";
  "_OS_DMACH10SR_ISR_CONST_END" = "_lc_ge_OS_DMACH10SR_ISR_CONST_GROUP" - 1;
  "_OS_DMACH10SR_ISR_CONST_LIMIT" = "_lc_ge_OS_DMACH10SR_ISR_CONST_GROUP";
}
else
{
  "_OS_DMACH10SR_ISR_CONST_START" = 0;
  "_OS_DMACH10SR_ISR_CONST_END" = 0;
  "_OS_DMACH10SR_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH10SR_ISR_NEAR )
if (exists(".zrodata.OS_DMACH10SR_ISR_CONST_FAST"))
{
  group OS_DMACH10SR_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_DMACH10SR_ISR_CONST_FAST";
  }
  "_OS_DMACH10SR_ISR_CONST_FAST_START" = "_lc_gb_OS_DMACH10SR_ISR_CONST_FAST_GROUP";
  "_OS_DMACH10SR_ISR_CONST_FAST_END" = "_lc_ge_OS_DMACH10SR_ISR_CONST_FAST_GROUP" - 1;
  "_OS_DMACH10SR_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_DMACH10SR_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_DMACH10SR_ISR_CONST_FAST_START" = 0;
  "_OS_DMACH10SR_ISR_CONST_FAST_END" = 0;
  "_OS_DMACH10SR_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH10SR_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_DMACH10SR_ISR
# undef OS_LINK_CONST_ISR_DMACH10SR_ISR
#endif

#ifdef OS_LINK_CONST_ISR_DMACH10SR_ISR_FAR
# undef OS_LINK_CONST_ISR_DMACH10SR_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_DMACH10SR_ISR_NEAR
# undef OS_LINK_CONST_ISR_DMACH10SR_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_DMACH10SR_ISR_INIT
# undef OS_LINK_CONST_ISR_DMACH10SR_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH11SR_ISR_FAR )
if (exists(".rodata.OS_DMACH11SR_ISR_CONST"))
{
  group OS_DMACH11SR_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_DMACH11SR_ISR_CONST";
  }
  "_OS_DMACH11SR_ISR_CONST_START" = "_lc_gb_OS_DMACH11SR_ISR_CONST_GROUP";
  "_OS_DMACH11SR_ISR_CONST_END" = "_lc_ge_OS_DMACH11SR_ISR_CONST_GROUP" - 1;
  "_OS_DMACH11SR_ISR_CONST_LIMIT" = "_lc_ge_OS_DMACH11SR_ISR_CONST_GROUP";
}
else
{
  "_OS_DMACH11SR_ISR_CONST_START" = 0;
  "_OS_DMACH11SR_ISR_CONST_END" = 0;
  "_OS_DMACH11SR_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH11SR_ISR_NEAR )
if (exists(".zrodata.OS_DMACH11SR_ISR_CONST_FAST"))
{
  group OS_DMACH11SR_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_DMACH11SR_ISR_CONST_FAST";
  }
  "_OS_DMACH11SR_ISR_CONST_FAST_START" = "_lc_gb_OS_DMACH11SR_ISR_CONST_FAST_GROUP";
  "_OS_DMACH11SR_ISR_CONST_FAST_END" = "_lc_ge_OS_DMACH11SR_ISR_CONST_FAST_GROUP" - 1;
  "_OS_DMACH11SR_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_DMACH11SR_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_DMACH11SR_ISR_CONST_FAST_START" = 0;
  "_OS_DMACH11SR_ISR_CONST_FAST_END" = 0;
  "_OS_DMACH11SR_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_CONST_ISR_DMACH11SR_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_DMACH11SR_ISR
# undef OS_LINK_CONST_ISR_DMACH11SR_ISR
#endif

#ifdef OS_LINK_CONST_ISR_DMACH11SR_ISR_FAR
# undef OS_LINK_CONST_ISR_DMACH11SR_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_DMACH11SR_ISR_NEAR
# undef OS_LINK_CONST_ISR_DMACH11SR_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_DMACH11SR_ISR_INIT
# undef OS_LINK_CONST_ISR_DMACH11SR_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR3_ISR_FAR )
if (exists(".rodata.OS_GTMTOM1SR3_ISR_CONST"))
{
  group OS_GTMTOM1SR3_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_GTMTOM1SR3_ISR_CONST";
  }
  "_OS_GTMTOM1SR3_ISR_CONST_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_CONST_GROUP";
  "_OS_GTMTOM1SR3_ISR_CONST_END" = "_lc_ge_OS_GTMTOM1SR3_ISR_CONST_GROUP" - 1;
  "_OS_GTMTOM1SR3_ISR_CONST_LIMIT" = "_lc_ge_OS_GTMTOM1SR3_ISR_CONST_GROUP";
}
else
{
  "_OS_GTMTOM1SR3_ISR_CONST_START" = 0;
  "_OS_GTMTOM1SR3_ISR_CONST_END" = 0;
  "_OS_GTMTOM1SR3_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR3_ISR_NEAR )
if (exists(".zrodata.OS_GTMTOM1SR3_ISR_CONST_FAST"))
{
  group OS_GTMTOM1SR3_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_GTMTOM1SR3_ISR_CONST_FAST";
  }
  "_OS_GTMTOM1SR3_ISR_CONST_FAST_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_CONST_FAST_GROUP";
  "_OS_GTMTOM1SR3_ISR_CONST_FAST_END" = "_lc_ge_OS_GTMTOM1SR3_ISR_CONST_FAST_GROUP" - 1;
  "_OS_GTMTOM1SR3_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_GTMTOM1SR3_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_GTMTOM1SR3_ISR_CONST_FAST_START" = 0;
  "_OS_GTMTOM1SR3_ISR_CONST_FAST_END" = 0;
  "_OS_GTMTOM1SR3_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR3_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_GTMTOM1SR3_ISR
# undef OS_LINK_CONST_ISR_GTMTOM1SR3_ISR
#endif

#ifdef OS_LINK_CONST_ISR_GTMTOM1SR3_ISR_FAR
# undef OS_LINK_CONST_ISR_GTMTOM1SR3_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_GTMTOM1SR3_ISR_NEAR
# undef OS_LINK_CONST_ISR_GTMTOM1SR3_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_GTMTOM1SR3_ISR_INIT
# undef OS_LINK_CONST_ISR_GTMTOM1SR3_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR4_ISR_FAR )
if (exists(".rodata.OS_GTMTOM1SR4_ISR_CONST"))
{
  group OS_GTMTOM1SR4_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_GTMTOM1SR4_ISR_CONST";
  }
  "_OS_GTMTOM1SR4_ISR_CONST_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_CONST_GROUP";
  "_OS_GTMTOM1SR4_ISR_CONST_END" = "_lc_ge_OS_GTMTOM1SR4_ISR_CONST_GROUP" - 1;
  "_OS_GTMTOM1SR4_ISR_CONST_LIMIT" = "_lc_ge_OS_GTMTOM1SR4_ISR_CONST_GROUP";
}
else
{
  "_OS_GTMTOM1SR4_ISR_CONST_START" = 0;
  "_OS_GTMTOM1SR4_ISR_CONST_END" = 0;
  "_OS_GTMTOM1SR4_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR4_ISR_NEAR )
if (exists(".zrodata.OS_GTMTOM1SR4_ISR_CONST_FAST"))
{
  group OS_GTMTOM1SR4_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_GTMTOM1SR4_ISR_CONST_FAST";
  }
  "_OS_GTMTOM1SR4_ISR_CONST_FAST_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_CONST_FAST_GROUP";
  "_OS_GTMTOM1SR4_ISR_CONST_FAST_END" = "_lc_ge_OS_GTMTOM1SR4_ISR_CONST_FAST_GROUP" - 1;
  "_OS_GTMTOM1SR4_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_GTMTOM1SR4_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_GTMTOM1SR4_ISR_CONST_FAST_START" = 0;
  "_OS_GTMTOM1SR4_ISR_CONST_FAST_END" = 0;
  "_OS_GTMTOM1SR4_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_CONST_ISR_GTMTOM1SR4_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_GTMTOM1SR4_ISR
# undef OS_LINK_CONST_ISR_GTMTOM1SR4_ISR
#endif

#ifdef OS_LINK_CONST_ISR_GTMTOM1SR4_ISR_FAR
# undef OS_LINK_CONST_ISR_GTMTOM1SR4_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_GTMTOM1SR4_ISR_NEAR
# undef OS_LINK_CONST_ISR_GTMTOM1SR4_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_GTMTOM1SR4_ISR_INIT
# undef OS_LINK_CONST_ISR_GTMTOM1SR4_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3ERR_ISR_FAR )
if (exists(".rodata.OS_QSPI3ERR_ISR_CONST"))
{
  group OS_QSPI3ERR_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_QSPI3ERR_ISR_CONST";
  }
  "_OS_QSPI3ERR_ISR_CONST_START" = "_lc_gb_OS_QSPI3ERR_ISR_CONST_GROUP";
  "_OS_QSPI3ERR_ISR_CONST_END" = "_lc_ge_OS_QSPI3ERR_ISR_CONST_GROUP" - 1;
  "_OS_QSPI3ERR_ISR_CONST_LIMIT" = "_lc_ge_OS_QSPI3ERR_ISR_CONST_GROUP";
}
else
{
  "_OS_QSPI3ERR_ISR_CONST_START" = 0;
  "_OS_QSPI3ERR_ISR_CONST_END" = 0;
  "_OS_QSPI3ERR_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3ERR_ISR_NEAR )
if (exists(".zrodata.OS_QSPI3ERR_ISR_CONST_FAST"))
{
  group OS_QSPI3ERR_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_QSPI3ERR_ISR_CONST_FAST";
  }
  "_OS_QSPI3ERR_ISR_CONST_FAST_START" = "_lc_gb_OS_QSPI3ERR_ISR_CONST_FAST_GROUP";
  "_OS_QSPI3ERR_ISR_CONST_FAST_END" = "_lc_ge_OS_QSPI3ERR_ISR_CONST_FAST_GROUP" - 1;
  "_OS_QSPI3ERR_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_QSPI3ERR_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_QSPI3ERR_ISR_CONST_FAST_START" = 0;
  "_OS_QSPI3ERR_ISR_CONST_FAST_END" = 0;
  "_OS_QSPI3ERR_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3ERR_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_QSPI3ERR_ISR
# undef OS_LINK_CONST_ISR_QSPI3ERR_ISR
#endif

#ifdef OS_LINK_CONST_ISR_QSPI3ERR_ISR_FAR
# undef OS_LINK_CONST_ISR_QSPI3ERR_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_QSPI3ERR_ISR_NEAR
# undef OS_LINK_CONST_ISR_QSPI3ERR_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_QSPI3ERR_ISR_INIT
# undef OS_LINK_CONST_ISR_QSPI3ERR_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3PT_ISR_FAR )
if (exists(".rodata.OS_QSPI3PT_ISR_CONST"))
{
  group OS_QSPI3PT_ISR_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_QSPI3PT_ISR_CONST";
  }
  "_OS_QSPI3PT_ISR_CONST_START" = "_lc_gb_OS_QSPI3PT_ISR_CONST_GROUP";
  "_OS_QSPI3PT_ISR_CONST_END" = "_lc_ge_OS_QSPI3PT_ISR_CONST_GROUP" - 1;
  "_OS_QSPI3PT_ISR_CONST_LIMIT" = "_lc_ge_OS_QSPI3PT_ISR_CONST_GROUP";
}
else
{
  "_OS_QSPI3PT_ISR_CONST_START" = 0;
  "_OS_QSPI3PT_ISR_CONST_END" = 0;
  "_OS_QSPI3PT_ISR_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3PT_ISR_NEAR )
if (exists(".zrodata.OS_QSPI3PT_ISR_CONST_FAST"))
{
  group OS_QSPI3PT_ISR_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_QSPI3PT_ISR_CONST_FAST";
  }
  "_OS_QSPI3PT_ISR_CONST_FAST_START" = "_lc_gb_OS_QSPI3PT_ISR_CONST_FAST_GROUP";
  "_OS_QSPI3PT_ISR_CONST_FAST_END" = "_lc_ge_OS_QSPI3PT_ISR_CONST_FAST_GROUP" - 1;
  "_OS_QSPI3PT_ISR_CONST_FAST_LIMIT" = "_lc_ge_OS_QSPI3PT_ISR_CONST_FAST_GROUP";
}
else
{
  "_OS_QSPI3PT_ISR_CONST_FAST_START" = 0;
  "_OS_QSPI3PT_ISR_CONST_FAST_END" = 0;
  "_OS_QSPI3PT_ISR_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_CONST_ISR_QSPI3PT_ISR_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_QSPI3PT_ISR
# undef OS_LINK_CONST_ISR_QSPI3PT_ISR
#endif

#ifdef OS_LINK_CONST_ISR_QSPI3PT_ISR_FAR
# undef OS_LINK_CONST_ISR_QSPI3PT_ISR_FAR
#endif

#ifdef OS_LINK_CONST_ISR_QSPI3PT_ISR_NEAR
# undef OS_LINK_CONST_ISR_QSPI3PT_ISR_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_QSPI3PT_ISR_INIT
# undef OS_LINK_CONST_ISR_QSPI3PT_ISR_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0_FAR )
if (exists(".rodata.OS_XSignalIsr_OsCore0_CONST"))
{
  group OS_XSignalIsr_OsCore0_CONST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]rodata.OS_XSignalIsr_OsCore0_CONST";
  }
  "_OS_XSignalIsr_OsCore0_CONST_START" = "_lc_gb_OS_XSignalIsr_OsCore0_CONST_GROUP";
  "_OS_XSignalIsr_OsCore0_CONST_END" = "_lc_ge_OS_XSignalIsr_OsCore0_CONST_GROUP" - 1;
  "_OS_XSignalIsr_OsCore0_CONST_LIMIT" = "_lc_ge_OS_XSignalIsr_OsCore0_CONST_GROUP";
}
else
{
  "_OS_XSignalIsr_OsCore0_CONST_START" = 0;
  "_OS_XSignalIsr_OsCore0_CONST_END" = 0;
  "_OS_XSignalIsr_OsCore0_CONST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0_NEAR )
if (exists(".zrodata.OS_XSignalIsr_OsCore0_CONST_FAST"))
{
  group OS_XSignalIsr_OsCore0_CONST_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    select "[.]zrodata.OS_XSignalIsr_OsCore0_CONST_FAST";
  }
  "_OS_XSignalIsr_OsCore0_CONST_FAST_START" = "_lc_gb_OS_XSignalIsr_OsCore0_CONST_FAST_GROUP";
  "_OS_XSignalIsr_OsCore0_CONST_FAST_END" = "_lc_ge_OS_XSignalIsr_OsCore0_CONST_FAST_GROUP" - 1;
  "_OS_XSignalIsr_OsCore0_CONST_FAST_LIMIT" = "_lc_ge_OS_XSignalIsr_OsCore0_CONST_FAST_GROUP";
}
else
{
  "_OS_XSignalIsr_OsCore0_CONST_FAST_START" = 0;
  "_OS_XSignalIsr_OsCore0_CONST_FAST_END" = 0;
  "_OS_XSignalIsr_OsCore0_CONST_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_ISR ) || defined ( OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0_INIT )













#endif

#ifdef OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0
# undef OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0
#endif

#ifdef OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0_FAR
# undef OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0_FAR
#endif

#ifdef OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0_NEAR
# undef OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0_NEAR
#endif

#ifdef OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0_INIT
# undef OS_LINK_CONST_ISR_XSIGNALISR_OSCORE0_INIT
#endif



#ifdef OS_LINK_CONST
# undef OS_LINK_CONST
#endif

#ifdef OS_LINK_CONST_APP
# undef OS_LINK_CONST_APP
#endif

#ifdef OS_LINK_CONST_TASK
# undef OS_LINK_CONST_TASK
#endif

#ifdef OS_LINK_CONST_ISR
# undef OS_LINK_CONST_ISR
#endif

#ifdef OS_LINK_CONST_KERNEL
# undef OS_LINK_CONST_KERNEL
#endif

#ifdef OS_LINK_CONST_KERNEL_FAR
# undef OS_LINK_CONST_KERNEL_FAR
#endif

#ifdef OS_LINK_CONST_KERNEL_NEAR
# undef OS_LINK_CONST_KERNEL_NEAR
#endif

#ifdef OS_LINK_INTVEC_CONST
# undef OS_LINK_INTVEC_CONST
#endif

#ifdef OS_LINK_EXCVEC_CONST
# undef OS_LINK_EXCVEC_CONST
#endif


/**********************************************************************************************************************
 *  VAR SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE_INIT )
if (exists(".data.OS_CORE0_VAR"))
{
  group OS_CORE0_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORE0_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CORE0_VAR";
    }
    reserved ".pad.OS_CORE0_VAR" (size=16);
  }
  "_OS_CORE0_VAR_START" = "_lc_gb_OS_CORE0_VAR_GROUP";
  "_OS_CORE0_VAR_END" = "_lc_ub__pad_OS_CORE0_VAR" - 1;
  "_OS_CORE0_VAR_LIMIT" = "_lc_ub__pad_OS_CORE0_VAR";
}
else
{
  "_OS_CORE0_VAR_START" = 0;
  "_OS_CORE0_VAR_END" = 0;
  "_OS_CORE0_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT )
if (exists(".bss.OS_CORE0_VAR_NOINIT"))
{
  group OS_CORE0_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORE0_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CORE0_VAR_NOINIT";
    }
    reserved ".pad.OS_CORE0_VAR_NOINIT" (size=16);
  }
  "_OS_CORE0_VAR_NOINIT_START" = "_lc_gb_OS_CORE0_VAR_NOINIT_GROUP";
  "_OS_CORE0_VAR_NOINIT_END" = "_lc_ub__pad_OS_CORE0_VAR_NOINIT" - 1;
  "_OS_CORE0_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_CORE0_VAR_NOINIT";
}
else
{
  "_OS_CORE0_VAR_NOINIT_START" = 0;
  "_OS_CORE0_VAR_NOINIT_END" = 0;
  "_OS_CORE0_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT )
if (exists(".zdata.OS_CORE0_VAR_FAST"))
{
  group OS_CORE0_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORE0_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CORE0_VAR_FAST";
    }
    reserved ".pad.OS_CORE0_VAR_FAST" (size=16);
  }
  "_OS_CORE0_VAR_FAST_START" = "_lc_gb_OS_CORE0_VAR_FAST_GROUP";
  "_OS_CORE0_VAR_FAST_END" = "_lc_ub__pad_OS_CORE0_VAR_FAST" - 1;
  "_OS_CORE0_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_CORE0_VAR_FAST";
}
else
{
  "_OS_CORE0_VAR_FAST_START" = 0;
  "_OS_CORE0_VAR_FAST_END" = 0;
  "_OS_CORE0_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_CORE0_VAR_FAST_NOINIT"))
{
  group OS_CORE0_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORE0_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CORE0_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_CORE0_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_CORE0_VAR_FAST_NOINIT_START" = "_lc_gb_OS_CORE0_VAR_FAST_NOINIT_GROUP";
  "_OS_CORE0_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_CORE0_VAR_FAST_NOINIT" - 1;
  "_OS_CORE0_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_CORE0_VAR_FAST_NOINIT";
}
else
{
  "_OS_CORE0_VAR_FAST_NOINIT_START" = 0;
  "_OS_CORE0_VAR_FAST_NOINIT_END" = 0;
  "_OS_CORE0_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT )
if (exists(".data.OS_CORE0_VAR_NOCACHE"))
{
  group OS_CORE0_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORE0_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CORE0_VAR_NOCACHE";
    }
    reserved ".pad.OS_CORE0_VAR_NOCACHE" (size=16);
  }
  "_OS_CORE0_VAR_NOCACHE_START" = "_lc_gb_OS_CORE0_VAR_NOCACHE_GROUP";
  "_OS_CORE0_VAR_NOCACHE_END" = "_lc_ub__pad_OS_CORE0_VAR_NOCACHE" - 1;
  "_OS_CORE0_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CORE0_VAR_NOCACHE";
}
else
{
  "_OS_CORE0_VAR_NOCACHE_START" = 0;
  "_OS_CORE0_VAR_NOCACHE_END" = 0;
  "_OS_CORE0_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_CORE0_VAR_NOCACHE_NOINIT"))
{
  group OS_CORE0_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORE0_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CORE0_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CORE0_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CORE0_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_CORE0_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_CORE0_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CORE0_VAR_NOCACHE_NOINIT" - 1;
  "_OS_CORE0_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CORE0_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_CORE0_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_CORE0_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_CORE0_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_CORE0_VAR_FAST_NOCACHE"))
{
  group OS_CORE0_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORE0_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CORE0_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_CORE0_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_CORE0_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_CORE0_VAR_FAST_NOCACHE_GROUP";
  "_OS_CORE0_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_CORE0_VAR_FAST_NOCACHE" - 1;
  "_OS_CORE0_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CORE0_VAR_FAST_NOCACHE";
}
else
{
  "_OS_CORE0_VAR_FAST_NOCACHE_START" = 0;
  "_OS_CORE0_VAR_FAST_NOCACHE_END" = 0;
  "_OS_CORE0_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_CORE0_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_CORE0_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORE0_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CORE0_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CORE0_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CORE0_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CORE0_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_KERNEL_TRACE ) || defined ( OS_LINK_KERNEL_TRACE_FAR )
if (exists(".bss.OS_PUBLIC_CORE0_VAR_NOINIT"))
{
  group OS_PUBLIC_CORE0_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_PUBLIC_CORE0_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_PUBLIC_CORE0_VAR_NOINIT";
    }
    reserved ".pad.OS_PUBLIC_CORE0_VAR_NOINIT" (size=16);
  }
  "_OS_PUBLIC_CORE0_VAR_NOINIT_START" = "_lc_gb_OS_PUBLIC_CORE0_VAR_NOINIT_GROUP";
  "_OS_PUBLIC_CORE0_VAR_NOINIT_END" = "_lc_ub__pad_OS_PUBLIC_CORE0_VAR_NOINIT" - 1;
  "_OS_PUBLIC_CORE0_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_PUBLIC_CORE0_VAR_NOINIT";
}
else
{
  "_OS_PUBLIC_CORE0_VAR_NOINIT_START" = 0;
  "_OS_PUBLIC_CORE0_VAR_NOINIT_END" = 0;
  "_OS_PUBLIC_CORE0_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_KERNEL_TRACE ) || defined ( OS_LINK_KERNEL_TRACE_NEAR )
if (exists(".bss.OS_PUBLIC_CORE0_VAR_FAST_NOINIT"))
{
  group OS_PUBLIC_CORE0_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_PUBLIC_CORE0_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_PUBLIC_CORE0_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_PUBLIC_CORE0_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_START" = "_lc_gb_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_GROUP";
  "_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_PUBLIC_CORE0_VAR_FAST_NOINIT" - 1;
  "_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_PUBLIC_CORE0_VAR_FAST_NOINIT";
}
else
{
  "_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_START" = 0;
  "_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_END" = 0;
  "_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_KERNEL_BARRIERS ) || defined ( OS_LINK_KERNEL_BARRIERS_FAR )
if (exists(".bss.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT"))
{
  group OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT" - 1;
  "_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_KERNEL_BARRIERS ) || defined ( OS_LINK_KERNEL_BARRIERS_NEAR )
if (exists(".bss.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_KERNEL_CORESTATUS ) || defined ( OS_LINK_KERNEL_CORESTATUS_FAR )
if (exists(".bss.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT"))
{
  group OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT" - 1;
  "_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_KERNEL_CORESTATUS ) || defined ( OS_LINK_KERNEL_CORESTATUS_NEAR )
if (exists(".bss.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif


#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0
group OS_SystemApplication_OsCore0_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_INIT )
if (exists(".data.OS_SystemApplication_OsCore0_VAR"))
{
  group OS_SystemApplication_OsCore0_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_SystemApplication_OsCore0_VAR";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR" - 1;
  "_OS_SystemApplication_OsCore0_VAR_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_NOINIT )
if (exists(".bss.OS_SystemApplication_OsCore0_VAR_NOINIT"))
{
  group OS_SystemApplication_OsCore0_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_SystemApplication_OsCore0_VAR_NOINIT";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_NOINIT" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_NOINIT_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_NOINIT_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_NOINIT_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_NOINIT" - 1;
  "_OS_SystemApplication_OsCore0_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_NOINIT";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_NOINIT_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_NOINIT_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss") || exists(".data.OS_SystemApplication_OsCore0_VAR_ZERO_INIT"))
{
  group OS_SystemApplication_OsCore0_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss";
      select "[.]data.OS_SystemApplication_OsCore0_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_ZERO_INIT" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_ZERO_INIT_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_ZERO_INIT_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_ZERO_INIT" - 1;
  "_OS_SystemApplication_OsCore0_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_ZERO_INIT";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_ZERO_INIT_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_ZERO_INIT_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_INIT )
if (exists(".zdata.OS_SystemApplication_OsCore0_VAR_FAST"))
{
  group OS_SystemApplication_OsCore0_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_SystemApplication_OsCore0_VAR_FAST";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_FAST" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_FAST_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_FAST_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_FAST_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST" - 1;
  "_OS_SystemApplication_OsCore0_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_FAST_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_SystemApplication_OsCore0_VAR_FAST_NOINIT"))
{
  group OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_SystemApplication_OsCore0_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT" - 1;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT"))
{
  group OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT" - 1;
  "_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_INIT )
if (exists(".data.OS_SystemApplication_OsCore0_VAR_NOCACHE"))
{
  group OS_SystemApplication_OsCore0_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_SystemApplication_OsCore0_VAR_NOCACHE";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_NOCACHE" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_NOCACHE_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_NOCACHE" - 1;
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_NOCACHE";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT"))
{
  group OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT" - 1;
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE"))
{
  group OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE" - 1;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0
} /* OS_SystemApplication_OsCore0_VAR_ALL_GROUP */
"_OS_SystemApplication_OsCore0_VAR_ALL_START" = "_lc_gb_OS_SystemApplication_OsCore0_VAR_ALL_GROUP";
"_OS_SystemApplication_OsCore0_VAR_ALL_END" = "_lc_ge_OS_SystemApplication_OsCore0_VAR_ALL_GROUP" - 1;
"_OS_SystemApplication_OsCore0_VAR_ALL_LIMIT" = "_lc_ge_OS_SystemApplication_OsCore0_VAR_ALL_GROUP";

# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT
group OS_Core0_AswInit_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE_INIT )
if (exists(".data.OS_Core0_AswInit_VAR"))
{
  group OS_Core0_AswInit_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Core0_AswInit_VAR";
    }
    reserved ".pad.OS_Core0_AswInit_VAR" (size=16);
  }
  "_OS_Core0_AswInit_VAR_START" = "_lc_gb_OS_Core0_AswInit_VAR_GROUP";
  "_OS_Core0_AswInit_VAR_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR" - 1;
  "_OS_Core0_AswInit_VAR_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR";
}
else
{
  "_OS_Core0_AswInit_VAR_START" = 0;
  "_OS_Core0_AswInit_VAR_END" = 0;
  "_OS_Core0_AswInit_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE_NOINIT )
if (exists(".bss.OS_Core0_AswInit_VAR_NOINIT"))
{
  group OS_Core0_AswInit_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_AswInit_VAR_NOINIT";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_NOINIT" (size=16);
  }
  "_OS_Core0_AswInit_VAR_NOINIT_START" = "_lc_gb_OS_Core0_AswInit_VAR_NOINIT_GROUP";
  "_OS_Core0_AswInit_VAR_NOINIT_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_NOINIT" - 1;
  "_OS_Core0_AswInit_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_NOINIT";
}
else
{
  "_OS_Core0_AswInit_VAR_NOINIT_START" = 0;
  "_OS_Core0_AswInit_VAR_NOINIT_END" = 0;
  "_OS_Core0_AswInit_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_Core0_AswInit_VAR_ZERO_INIT_bss") || exists(".data.OS_Core0_AswInit_VAR_ZERO_INIT"))
{
  group OS_Core0_AswInit_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_AswInit_VAR_ZERO_INIT_bss";
      select "[.]data.OS_Core0_AswInit_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_ZERO_INIT" (size=16);
  }
  "_OS_Core0_AswInit_VAR_ZERO_INIT_START" = "_lc_gb_OS_Core0_AswInit_VAR_ZERO_INIT_GROUP";
  "_OS_Core0_AswInit_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_ZERO_INIT" - 1;
  "_OS_Core0_AswInit_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_ZERO_INIT";
}
else
{
  "_OS_Core0_AswInit_VAR_ZERO_INIT_START" = 0;
  "_OS_Core0_AswInit_VAR_ZERO_INIT_END" = 0;
  "_OS_Core0_AswInit_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE_INIT )
if (exists(".zdata.OS_Core0_AswInit_VAR_FAST"))
{
  group OS_Core0_AswInit_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Core0_AswInit_VAR_FAST";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_FAST" (size=16);
  }
  "_OS_Core0_AswInit_VAR_FAST_START" = "_lc_gb_OS_Core0_AswInit_VAR_FAST_GROUP";
  "_OS_Core0_AswInit_VAR_FAST_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST" - 1;
  "_OS_Core0_AswInit_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST";
}
else
{
  "_OS_Core0_AswInit_VAR_FAST_START" = 0;
  "_OS_Core0_AswInit_VAR_FAST_END" = 0;
  "_OS_Core0_AswInit_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_Core0_AswInit_VAR_FAST_NOINIT"))
{
  group OS_Core0_AswInit_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_AswInit_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_Core0_AswInit_VAR_FAST_NOINIT_START" = "_lc_gb_OS_Core0_AswInit_VAR_FAST_NOINIT_GROUP";
  "_OS_Core0_AswInit_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_NOINIT" - 1;
  "_OS_Core0_AswInit_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_NOINIT";
}
else
{
  "_OS_Core0_AswInit_VAR_FAST_NOINIT_START" = 0;
  "_OS_Core0_AswInit_VAR_FAST_NOINIT_END" = 0;
  "_OS_Core0_AswInit_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_Core0_AswInit_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_Core0_AswInit_VAR_FAST_ZERO_INIT"))
{
  group OS_Core0_AswInit_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_AswInit_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_Core0_AswInit_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_Core0_AswInit_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_Core0_AswInit_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_Core0_AswInit_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_ZERO_INIT" - 1;
  "_OS_Core0_AswInit_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_Core0_AswInit_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_Core0_AswInit_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_Core0_AswInit_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE_INIT )
if (exists(".data.OS_Core0_AswInit_VAR_NOCACHE"))
{
  group OS_Core0_AswInit_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Core0_AswInit_VAR_NOCACHE";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_NOCACHE" (size=16);
  }
  "_OS_Core0_AswInit_VAR_NOCACHE_START" = "_lc_gb_OS_Core0_AswInit_VAR_NOCACHE_GROUP";
  "_OS_Core0_AswInit_VAR_NOCACHE_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_NOCACHE" - 1;
  "_OS_Core0_AswInit_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_NOCACHE";
}
else
{
  "_OS_Core0_AswInit_VAR_NOCACHE_START" = 0;
  "_OS_Core0_AswInit_VAR_NOCACHE_END" = 0;
  "_OS_Core0_AswInit_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_Core0_AswInit_VAR_NOCACHE_NOINIT"))
{
  group OS_Core0_AswInit_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_AswInit_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Core0_AswInit_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_Core0_AswInit_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_Core0_AswInit_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_NOCACHE_NOINIT" - 1;
  "_OS_Core0_AswInit_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_Core0_AswInit_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_Core0_AswInit_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_Core0_AswInit_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Core0_AswInit_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_Core0_AswInit_VAR_FAST_NOCACHE"))
{
  group OS_Core0_AswInit_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Core0_AswInit_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_Core0_AswInit_VAR_FAST_NOCACHE_GROUP";
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_NOCACHE" - 1;
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_NOCACHE";
}
else
{
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_START" = 0;
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_END" = 0;
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Core0_AswInit_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT
} /* OS_Core0_AswInit_VAR_ALL_GROUP */
"_OS_Core0_AswInit_VAR_ALL_START" = "_lc_gb_OS_Core0_AswInit_VAR_ALL_GROUP";
"_OS_Core0_AswInit_VAR_ALL_END" = "_lc_ge_OS_Core0_AswInit_VAR_ALL_GROUP" - 1;
"_OS_Core0_AswInit_VAR_ALL_LIMIT" = "_lc_ge_OS_Core0_AswInit_VAR_ALL_GROUP";

# undef OS_LINK_VAR_TASK_CORE0_ASWINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWINIT_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK
group OS_Core0_AswTask_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE_INIT )
if (exists(".data.OS_Core0_AswTask_VAR"))
{
  group OS_Core0_AswTask_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Core0_AswTask_VAR";
    }
    reserved ".pad.OS_Core0_AswTask_VAR" (size=16);
  }
  "_OS_Core0_AswTask_VAR_START" = "_lc_gb_OS_Core0_AswTask_VAR_GROUP";
  "_OS_Core0_AswTask_VAR_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR" - 1;
  "_OS_Core0_AswTask_VAR_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR";
}
else
{
  "_OS_Core0_AswTask_VAR_START" = 0;
  "_OS_Core0_AswTask_VAR_END" = 0;
  "_OS_Core0_AswTask_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE_NOINIT )
if (exists(".bss.OS_Core0_AswTask_VAR_NOINIT"))
{
  group OS_Core0_AswTask_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_AswTask_VAR_NOINIT";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_NOINIT" (size=16);
  }
  "_OS_Core0_AswTask_VAR_NOINIT_START" = "_lc_gb_OS_Core0_AswTask_VAR_NOINIT_GROUP";
  "_OS_Core0_AswTask_VAR_NOINIT_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_NOINIT" - 1;
  "_OS_Core0_AswTask_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_NOINIT";
}
else
{
  "_OS_Core0_AswTask_VAR_NOINIT_START" = 0;
  "_OS_Core0_AswTask_VAR_NOINIT_END" = 0;
  "_OS_Core0_AswTask_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_Core0_AswTask_VAR_ZERO_INIT_bss") || exists(".data.OS_Core0_AswTask_VAR_ZERO_INIT"))
{
  group OS_Core0_AswTask_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_AswTask_VAR_ZERO_INIT_bss";
      select "[.]data.OS_Core0_AswTask_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_ZERO_INIT" (size=16);
  }
  "_OS_Core0_AswTask_VAR_ZERO_INIT_START" = "_lc_gb_OS_Core0_AswTask_VAR_ZERO_INIT_GROUP";
  "_OS_Core0_AswTask_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_ZERO_INIT" - 1;
  "_OS_Core0_AswTask_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_ZERO_INIT";
}
else
{
  "_OS_Core0_AswTask_VAR_ZERO_INIT_START" = 0;
  "_OS_Core0_AswTask_VAR_ZERO_INIT_END" = 0;
  "_OS_Core0_AswTask_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE_INIT )
if (exists(".zdata.OS_Core0_AswTask_VAR_FAST"))
{
  group OS_Core0_AswTask_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Core0_AswTask_VAR_FAST";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_FAST" (size=16);
  }
  "_OS_Core0_AswTask_VAR_FAST_START" = "_lc_gb_OS_Core0_AswTask_VAR_FAST_GROUP";
  "_OS_Core0_AswTask_VAR_FAST_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST" - 1;
  "_OS_Core0_AswTask_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST";
}
else
{
  "_OS_Core0_AswTask_VAR_FAST_START" = 0;
  "_OS_Core0_AswTask_VAR_FAST_END" = 0;
  "_OS_Core0_AswTask_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_Core0_AswTask_VAR_FAST_NOINIT"))
{
  group OS_Core0_AswTask_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_AswTask_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_Core0_AswTask_VAR_FAST_NOINIT_START" = "_lc_gb_OS_Core0_AswTask_VAR_FAST_NOINIT_GROUP";
  "_OS_Core0_AswTask_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_NOINIT" - 1;
  "_OS_Core0_AswTask_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_NOINIT";
}
else
{
  "_OS_Core0_AswTask_VAR_FAST_NOINIT_START" = 0;
  "_OS_Core0_AswTask_VAR_FAST_NOINIT_END" = 0;
  "_OS_Core0_AswTask_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_Core0_AswTask_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_Core0_AswTask_VAR_FAST_ZERO_INIT"))
{
  group OS_Core0_AswTask_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_AswTask_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_Core0_AswTask_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_Core0_AswTask_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_Core0_AswTask_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_Core0_AswTask_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_ZERO_INIT" - 1;
  "_OS_Core0_AswTask_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_Core0_AswTask_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_Core0_AswTask_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_Core0_AswTask_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE_INIT )
if (exists(".data.OS_Core0_AswTask_VAR_NOCACHE"))
{
  group OS_Core0_AswTask_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Core0_AswTask_VAR_NOCACHE";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_NOCACHE" (size=16);
  }
  "_OS_Core0_AswTask_VAR_NOCACHE_START" = "_lc_gb_OS_Core0_AswTask_VAR_NOCACHE_GROUP";
  "_OS_Core0_AswTask_VAR_NOCACHE_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_NOCACHE" - 1;
  "_OS_Core0_AswTask_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_NOCACHE";
}
else
{
  "_OS_Core0_AswTask_VAR_NOCACHE_START" = 0;
  "_OS_Core0_AswTask_VAR_NOCACHE_END" = 0;
  "_OS_Core0_AswTask_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_Core0_AswTask_VAR_NOCACHE_NOINIT"))
{
  group OS_Core0_AswTask_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_AswTask_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Core0_AswTask_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_Core0_AswTask_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_Core0_AswTask_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_NOCACHE_NOINIT" - 1;
  "_OS_Core0_AswTask_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_Core0_AswTask_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_Core0_AswTask_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_Core0_AswTask_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Core0_AswTask_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_Core0_AswTask_VAR_FAST_NOCACHE"))
{
  group OS_Core0_AswTask_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Core0_AswTask_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_Core0_AswTask_VAR_FAST_NOCACHE_GROUP";
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_NOCACHE" - 1;
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_NOCACHE";
}
else
{
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_START" = 0;
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_END" = 0;
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Core0_AswTask_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK
} /* OS_Core0_AswTask_VAR_ALL_GROUP */
"_OS_Core0_AswTask_VAR_ALL_START" = "_lc_gb_OS_Core0_AswTask_VAR_ALL_GROUP";
"_OS_Core0_AswTask_VAR_ALL_END" = "_lc_ge_OS_Core0_AswTask_VAR_ALL_GROUP" - 1;
"_OS_Core0_AswTask_VAR_ALL_LIMIT" = "_lc_ge_OS_Core0_AswTask_VAR_ALL_GROUP";

# undef OS_LINK_VAR_TASK_CORE0_ASWTASK
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_ASWTASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK
group OS_Core0_BswTask_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE_INIT )
if (exists(".data.OS_Core0_BswTask_VAR"))
{
  group OS_Core0_BswTask_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Core0_BswTask_VAR";
    }
    reserved ".pad.OS_Core0_BswTask_VAR" (size=16);
  }
  "_OS_Core0_BswTask_VAR_START" = "_lc_gb_OS_Core0_BswTask_VAR_GROUP";
  "_OS_Core0_BswTask_VAR_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR" - 1;
  "_OS_Core0_BswTask_VAR_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR";
}
else
{
  "_OS_Core0_BswTask_VAR_START" = 0;
  "_OS_Core0_BswTask_VAR_END" = 0;
  "_OS_Core0_BswTask_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE_NOINIT )
if (exists(".bss.OS_Core0_BswTask_VAR_NOINIT"))
{
  group OS_Core0_BswTask_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_BswTask_VAR_NOINIT";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_NOINIT" (size=16);
  }
  "_OS_Core0_BswTask_VAR_NOINIT_START" = "_lc_gb_OS_Core0_BswTask_VAR_NOINIT_GROUP";
  "_OS_Core0_BswTask_VAR_NOINIT_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_NOINIT" - 1;
  "_OS_Core0_BswTask_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_NOINIT";
}
else
{
  "_OS_Core0_BswTask_VAR_NOINIT_START" = 0;
  "_OS_Core0_BswTask_VAR_NOINIT_END" = 0;
  "_OS_Core0_BswTask_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_Core0_BswTask_VAR_ZERO_INIT_bss") || exists(".data.OS_Core0_BswTask_VAR_ZERO_INIT"))
{
  group OS_Core0_BswTask_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_BswTask_VAR_ZERO_INIT_bss";
      select "[.]data.OS_Core0_BswTask_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_ZERO_INIT" (size=16);
  }
  "_OS_Core0_BswTask_VAR_ZERO_INIT_START" = "_lc_gb_OS_Core0_BswTask_VAR_ZERO_INIT_GROUP";
  "_OS_Core0_BswTask_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_ZERO_INIT" - 1;
  "_OS_Core0_BswTask_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_ZERO_INIT";
}
else
{
  "_OS_Core0_BswTask_VAR_ZERO_INIT_START" = 0;
  "_OS_Core0_BswTask_VAR_ZERO_INIT_END" = 0;
  "_OS_Core0_BswTask_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE_INIT )
if (exists(".zdata.OS_Core0_BswTask_VAR_FAST"))
{
  group OS_Core0_BswTask_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Core0_BswTask_VAR_FAST";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_FAST" (size=16);
  }
  "_OS_Core0_BswTask_VAR_FAST_START" = "_lc_gb_OS_Core0_BswTask_VAR_FAST_GROUP";
  "_OS_Core0_BswTask_VAR_FAST_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST" - 1;
  "_OS_Core0_BswTask_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST";
}
else
{
  "_OS_Core0_BswTask_VAR_FAST_START" = 0;
  "_OS_Core0_BswTask_VAR_FAST_END" = 0;
  "_OS_Core0_BswTask_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_Core0_BswTask_VAR_FAST_NOINIT"))
{
  group OS_Core0_BswTask_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_BswTask_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_Core0_BswTask_VAR_FAST_NOINIT_START" = "_lc_gb_OS_Core0_BswTask_VAR_FAST_NOINIT_GROUP";
  "_OS_Core0_BswTask_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_NOINIT" - 1;
  "_OS_Core0_BswTask_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_NOINIT";
}
else
{
  "_OS_Core0_BswTask_VAR_FAST_NOINIT_START" = 0;
  "_OS_Core0_BswTask_VAR_FAST_NOINIT_END" = 0;
  "_OS_Core0_BswTask_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_Core0_BswTask_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_Core0_BswTask_VAR_FAST_ZERO_INIT"))
{
  group OS_Core0_BswTask_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_BswTask_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_Core0_BswTask_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_Core0_BswTask_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_Core0_BswTask_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_Core0_BswTask_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_ZERO_INIT" - 1;
  "_OS_Core0_BswTask_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_Core0_BswTask_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_Core0_BswTask_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_Core0_BswTask_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE_INIT )
if (exists(".data.OS_Core0_BswTask_VAR_NOCACHE"))
{
  group OS_Core0_BswTask_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Core0_BswTask_VAR_NOCACHE";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_NOCACHE" (size=16);
  }
  "_OS_Core0_BswTask_VAR_NOCACHE_START" = "_lc_gb_OS_Core0_BswTask_VAR_NOCACHE_GROUP";
  "_OS_Core0_BswTask_VAR_NOCACHE_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_NOCACHE" - 1;
  "_OS_Core0_BswTask_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_NOCACHE";
}
else
{
  "_OS_Core0_BswTask_VAR_NOCACHE_START" = 0;
  "_OS_Core0_BswTask_VAR_NOCACHE_END" = 0;
  "_OS_Core0_BswTask_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_Core0_BswTask_VAR_NOCACHE_NOINIT"))
{
  group OS_Core0_BswTask_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_BswTask_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Core0_BswTask_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_Core0_BswTask_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_Core0_BswTask_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_NOCACHE_NOINIT" - 1;
  "_OS_Core0_BswTask_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_Core0_BswTask_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_Core0_BswTask_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_Core0_BswTask_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Core0_BswTask_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_Core0_BswTask_VAR_FAST_NOCACHE"))
{
  group OS_Core0_BswTask_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Core0_BswTask_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_Core0_BswTask_VAR_FAST_NOCACHE_GROUP";
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_NOCACHE" - 1;
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_NOCACHE";
}
else
{
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_START" = 0;
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_END" = 0;
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Core0_BswTask_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK
} /* OS_Core0_BswTask_VAR_ALL_GROUP */
"_OS_Core0_BswTask_VAR_ALL_START" = "_lc_gb_OS_Core0_BswTask_VAR_ALL_GROUP";
"_OS_Core0_BswTask_VAR_ALL_END" = "_lc_ge_OS_Core0_BswTask_VAR_ALL_GROUP" - 1;
"_OS_Core0_BswTask_VAR_ALL_LIMIT" = "_lc_ge_OS_Core0_BswTask_VAR_ALL_GROUP";

# undef OS_LINK_VAR_TASK_CORE0_BSWTASK
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_CORE0_BSWTASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK
group OS_Default_Init_Task_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_INIT )
if (exists(".data.OS_Default_Init_Task_VAR"))
{
  group OS_Default_Init_Task_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Default_Init_Task_VAR";
    }
    reserved ".pad.OS_Default_Init_Task_VAR" (size=16);
  }
  "_OS_Default_Init_Task_VAR_START" = "_lc_gb_OS_Default_Init_Task_VAR_GROUP";
  "_OS_Default_Init_Task_VAR_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR" - 1;
  "_OS_Default_Init_Task_VAR_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR";
}
else
{
  "_OS_Default_Init_Task_VAR_START" = 0;
  "_OS_Default_Init_Task_VAR_END" = 0;
  "_OS_Default_Init_Task_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_NOINIT )
if (exists(".bss.OS_Default_Init_Task_VAR_NOINIT"))
{
  group OS_Default_Init_Task_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Default_Init_Task_VAR_NOINIT";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_NOINIT" (size=16);
  }
  "_OS_Default_Init_Task_VAR_NOINIT_START" = "_lc_gb_OS_Default_Init_Task_VAR_NOINIT_GROUP";
  "_OS_Default_Init_Task_VAR_NOINIT_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_NOINIT" - 1;
  "_OS_Default_Init_Task_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_NOINIT";
}
else
{
  "_OS_Default_Init_Task_VAR_NOINIT_START" = 0;
  "_OS_Default_Init_Task_VAR_NOINIT_END" = 0;
  "_OS_Default_Init_Task_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_Default_Init_Task_VAR_ZERO_INIT_bss") || exists(".data.OS_Default_Init_Task_VAR_ZERO_INIT"))
{
  group OS_Default_Init_Task_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Default_Init_Task_VAR_ZERO_INIT_bss";
      select "[.]data.OS_Default_Init_Task_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_ZERO_INIT" (size=16);
  }
  "_OS_Default_Init_Task_VAR_ZERO_INIT_START" = "_lc_gb_OS_Default_Init_Task_VAR_ZERO_INIT_GROUP";
  "_OS_Default_Init_Task_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_ZERO_INIT" - 1;
  "_OS_Default_Init_Task_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_ZERO_INIT";
}
else
{
  "_OS_Default_Init_Task_VAR_ZERO_INIT_START" = 0;
  "_OS_Default_Init_Task_VAR_ZERO_INIT_END" = 0;
  "_OS_Default_Init_Task_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_INIT )
if (exists(".zdata.OS_Default_Init_Task_VAR_FAST"))
{
  group OS_Default_Init_Task_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Default_Init_Task_VAR_FAST";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_FAST" (size=16);
  }
  "_OS_Default_Init_Task_VAR_FAST_START" = "_lc_gb_OS_Default_Init_Task_VAR_FAST_GROUP";
  "_OS_Default_Init_Task_VAR_FAST_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST" - 1;
  "_OS_Default_Init_Task_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST";
}
else
{
  "_OS_Default_Init_Task_VAR_FAST_START" = 0;
  "_OS_Default_Init_Task_VAR_FAST_END" = 0;
  "_OS_Default_Init_Task_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_Default_Init_Task_VAR_FAST_NOINIT"))
{
  group OS_Default_Init_Task_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Default_Init_Task_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_Default_Init_Task_VAR_FAST_NOINIT_START" = "_lc_gb_OS_Default_Init_Task_VAR_FAST_NOINIT_GROUP";
  "_OS_Default_Init_Task_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_NOINIT" - 1;
  "_OS_Default_Init_Task_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_NOINIT";
}
else
{
  "_OS_Default_Init_Task_VAR_FAST_NOINIT_START" = 0;
  "_OS_Default_Init_Task_VAR_FAST_NOINIT_END" = 0;
  "_OS_Default_Init_Task_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_Default_Init_Task_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_Default_Init_Task_VAR_FAST_ZERO_INIT"))
{
  group OS_Default_Init_Task_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Default_Init_Task_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_Default_Init_Task_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_ZERO_INIT" - 1;
  "_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_Default_Init_Task_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_INIT )
if (exists(".data.OS_Default_Init_Task_VAR_NOCACHE"))
{
  group OS_Default_Init_Task_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Default_Init_Task_VAR_NOCACHE";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_NOCACHE" (size=16);
  }
  "_OS_Default_Init_Task_VAR_NOCACHE_START" = "_lc_gb_OS_Default_Init_Task_VAR_NOCACHE_GROUP";
  "_OS_Default_Init_Task_VAR_NOCACHE_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_NOCACHE" - 1;
  "_OS_Default_Init_Task_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_NOCACHE";
}
else
{
  "_OS_Default_Init_Task_VAR_NOCACHE_START" = 0;
  "_OS_Default_Init_Task_VAR_NOCACHE_END" = 0;
  "_OS_Default_Init_Task_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_Default_Init_Task_VAR_NOCACHE_NOINIT"))
{
  group OS_Default_Init_Task_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Default_Init_Task_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Default_Init_Task_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_Default_Init_Task_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_Default_Init_Task_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_NOCACHE_NOINIT" - 1;
  "_OS_Default_Init_Task_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_Default_Init_Task_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_Default_Init_Task_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_Default_Init_Task_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Default_Init_Task_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_Default_Init_Task_VAR_FAST_NOCACHE"))
{
  group OS_Default_Init_Task_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Default_Init_Task_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_Default_Init_Task_VAR_FAST_NOCACHE_GROUP";
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_NOCACHE" - 1;
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_NOCACHE";
}
else
{
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_START" = 0;
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_END" = 0;
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Default_Init_Task_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK
} /* OS_Default_Init_Task_VAR_ALL_GROUP */
"_OS_Default_Init_Task_VAR_ALL_START" = "_lc_gb_OS_Default_Init_Task_VAR_ALL_GROUP";
"_OS_Default_Init_Task_VAR_ALL_END" = "_lc_ge_OS_Default_Init_Task_VAR_ALL_GROUP" - 1;
"_OS_Default_Init_Task_VAR_ALL_LIMIT" = "_lc_ge_OS_Default_Init_Task_VAR_ALL_GROUP";

# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED
group OS_Default_Init_Task_Trusted_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE_INIT )
if (exists(".data.OS_Default_Init_Task_Trusted_VAR"))
{
  group OS_Default_Init_Task_Trusted_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Default_Init_Task_Trusted_VAR";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE_NOINIT )
if (exists(".bss.OS_Default_Init_Task_Trusted_VAR_NOINIT"))
{
  group OS_Default_Init_Task_Trusted_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Default_Init_Task_Trusted_VAR_NOINIT";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_NOINIT" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_NOINIT_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_NOINIT_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_NOINIT_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_NOINIT" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_NOINIT";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_NOINIT_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_NOINIT_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_bss") || exists(".data.OS_Default_Init_Task_Trusted_VAR_ZERO_INIT"))
{
  group OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_bss";
      select "[.]data.OS_Default_Init_Task_Trusted_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_ZERO_INIT" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_ZERO_INIT" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_ZERO_INIT";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE_INIT )
if (exists(".zdata.OS_Default_Init_Task_Trusted_VAR_FAST"))
{
  group OS_Default_Init_Task_Trusted_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Default_Init_Task_Trusted_VAR_FAST";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_FAST" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_FAST_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_FAST_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_FAST_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_FAST_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT"))
{
  group OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT"))
{
  group OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE_INIT )
if (exists(".data.OS_Default_Init_Task_Trusted_VAR_NOCACHE"))
{
  group OS_Default_Init_Task_Trusted_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_Default_Init_Task_Trusted_VAR_NOCACHE";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_NOCACHE" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_NOCACHE_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_NOCACHE" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_NOCACHE";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT"))
{
  group OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE"))
{
  group OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_Default_Init_Task_Trusted_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED
} /* OS_Default_Init_Task_Trusted_VAR_ALL_GROUP */
"_OS_Default_Init_Task_Trusted_VAR_ALL_START" = "_lc_gb_OS_Default_Init_Task_Trusted_VAR_ALL_GROUP";
"_OS_Default_Init_Task_Trusted_VAR_ALL_END" = "_lc_ge_OS_Default_Init_Task_Trusted_VAR_ALL_GROUP" - 1;
"_OS_Default_Init_Task_Trusted_VAR_ALL_LIMIT" = "_lc_ge_OS_Default_Init_Task_Trusted_VAR_ALL_GROUP";

# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_DEFAULT_INIT_TASK_TRUSTED_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0
group OS_IdleTask_OsCore0_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE_INIT )
if (exists(".data.OS_IdleTask_OsCore0_VAR"))
{
  group OS_IdleTask_OsCore0_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_IdleTask_OsCore0_VAR";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_GROUP";
  "_OS_IdleTask_OsCore0_VAR_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR" - 1;
  "_OS_IdleTask_OsCore0_VAR_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE_NOINIT )
if (exists(".bss.OS_IdleTask_OsCore0_VAR_NOINIT"))
{
  group OS_IdleTask_OsCore0_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_IdleTask_OsCore0_VAR_NOINIT";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_NOINIT" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_NOINIT_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_NOINIT_GROUP";
  "_OS_IdleTask_OsCore0_VAR_NOINIT_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_NOINIT" - 1;
  "_OS_IdleTask_OsCore0_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_NOINIT";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_NOINIT_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_NOINIT_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_IdleTask_OsCore0_VAR_ZERO_INIT_bss") || exists(".data.OS_IdleTask_OsCore0_VAR_ZERO_INIT"))
{
  group OS_IdleTask_OsCore0_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_IdleTask_OsCore0_VAR_ZERO_INIT_bss";
      select "[.]data.OS_IdleTask_OsCore0_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_ZERO_INIT" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_ZERO_INIT_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_ZERO_INIT_GROUP";
  "_OS_IdleTask_OsCore0_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_ZERO_INIT" - 1;
  "_OS_IdleTask_OsCore0_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_ZERO_INIT";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_ZERO_INIT_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_ZERO_INIT_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE_INIT )
if (exists(".zdata.OS_IdleTask_OsCore0_VAR_FAST"))
{
  group OS_IdleTask_OsCore0_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_IdleTask_OsCore0_VAR_FAST";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_FAST" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_FAST_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_FAST_GROUP";
  "_OS_IdleTask_OsCore0_VAR_FAST_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST" - 1;
  "_OS_IdleTask_OsCore0_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_FAST_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_IdleTask_OsCore0_VAR_FAST_NOINIT"))
{
  group OS_IdleTask_OsCore0_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_IdleTask_OsCore0_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_FAST_NOINIT_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_FAST_NOINIT_GROUP";
  "_OS_IdleTask_OsCore0_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_NOINIT" - 1;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_NOINIT";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_FAST_NOINIT_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOINIT_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT"))
{
  group OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT" - 1;
  "_OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE_INIT )
if (exists(".data.OS_IdleTask_OsCore0_VAR_NOCACHE"))
{
  group OS_IdleTask_OsCore0_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_IdleTask_OsCore0_VAR_NOCACHE";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_NOCACHE" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_NOCACHE_GROUP";
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_NOCACHE" - 1;
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_NOCACHE";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT"))
{
  group OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT" - 1;
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE"))
{
  group OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_GROUP";
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE" - 1;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0 ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_IdleTask_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0
} /* OS_IdleTask_OsCore0_VAR_ALL_GROUP */
"_OS_IdleTask_OsCore0_VAR_ALL_START" = "_lc_gb_OS_IdleTask_OsCore0_VAR_ALL_GROUP";
"_OS_IdleTask_OsCore0_VAR_ALL_END" = "_lc_ge_OS_IdleTask_OsCore0_VAR_ALL_GROUP" - 1;
"_OS_IdleTask_OsCore0_VAR_ALL_LIMIT" = "_lc_ge_OS_IdleTask_OsCore0_VAR_ALL_GROUP";

# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_IDLETASK_OSCORE0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR
group OS_ADC0SR0_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ADC0SR0_ISR_VAR"))
{
  group OS_ADC0SR0_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC0SR0_ISR_VAR";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_GROUP";
  "_OS_ADC0SR0_ISR_VAR_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR" - 1;
  "_OS_ADC0SR0_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ADC0SR0_ISR_VAR_NOINIT"))
{
  group OS_ADC0SR0_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC0SR0_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_NOINIT_GROUP";
  "_OS_ADC0SR0_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_NOINIT" - 1;
  "_OS_ADC0SR0_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_NOINIT";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_NOINIT_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_NOINIT_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ADC0SR0_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ADC0SR0_ISR_VAR_ZERO_INIT"))
{
  group OS_ADC0SR0_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC0SR0_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ADC0SR0_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ADC0SR0_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ADC0SR0_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ADC0SR0_ISR_VAR_FAST"))
{
  group OS_ADC0SR0_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC0SR0_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_FAST" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_FAST_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_FAST_GROUP";
  "_OS_ADC0SR0_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST" - 1;
  "_OS_ADC0SR0_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_FAST_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ADC0SR0_ISR_VAR_FAST_NOINIT"))
{
  group OS_ADC0SR0_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC0SR0_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ADC0SR0_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ADC0SR0_ISR_VAR_NOCACHE"))
{
  group OS_ADC0SR0_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC0SR0_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_NOCACHE_GROUP";
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_NOCACHE" - 1;
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC0SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR
} /* OS_ADC0SR0_ISR_VAR_ALL_GROUP */
"_OS_ADC0SR0_ISR_VAR_ALL_START" = "_lc_gb_OS_ADC0SR0_ISR_VAR_ALL_GROUP";
"_OS_ADC0SR0_ISR_VAR_ALL_END" = "_lc_ge_OS_ADC0SR0_ISR_VAR_ALL_GROUP" - 1;
"_OS_ADC0SR0_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ADC0SR0_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ADC0SR0_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC0SR0_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR
group OS_ADC11SR0_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ADC11SR0_ISR_VAR"))
{
  group OS_ADC11SR0_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC11SR0_ISR_VAR";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_GROUP";
  "_OS_ADC11SR0_ISR_VAR_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR" - 1;
  "_OS_ADC11SR0_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ADC11SR0_ISR_VAR_NOINIT"))
{
  group OS_ADC11SR0_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC11SR0_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_NOINIT_GROUP";
  "_OS_ADC11SR0_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_NOINIT" - 1;
  "_OS_ADC11SR0_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_NOINIT";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_NOINIT_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_NOINIT_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ADC11SR0_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ADC11SR0_ISR_VAR_ZERO_INIT"))
{
  group OS_ADC11SR0_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC11SR0_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ADC11SR0_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ADC11SR0_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ADC11SR0_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ADC11SR0_ISR_VAR_FAST"))
{
  group OS_ADC11SR0_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC11SR0_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_FAST" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_FAST_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_FAST_GROUP";
  "_OS_ADC11SR0_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST" - 1;
  "_OS_ADC11SR0_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_FAST_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ADC11SR0_ISR_VAR_FAST_NOINIT"))
{
  group OS_ADC11SR0_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC11SR0_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ADC11SR0_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ADC11SR0_ISR_VAR_NOCACHE"))
{
  group OS_ADC11SR0_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC11SR0_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_NOCACHE_GROUP";
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_NOCACHE" - 1;
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC11SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR
} /* OS_ADC11SR0_ISR_VAR_ALL_GROUP */
"_OS_ADC11SR0_ISR_VAR_ALL_START" = "_lc_gb_OS_ADC11SR0_ISR_VAR_ALL_GROUP";
"_OS_ADC11SR0_ISR_VAR_ALL_END" = "_lc_ge_OS_ADC11SR0_ISR_VAR_ALL_GROUP" - 1;
"_OS_ADC11SR0_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ADC11SR0_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ADC11SR0_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC11SR0_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR
group OS_ADC1SR0_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ADC1SR0_ISR_VAR"))
{
  group OS_ADC1SR0_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC1SR0_ISR_VAR";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_GROUP";
  "_OS_ADC1SR0_ISR_VAR_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR" - 1;
  "_OS_ADC1SR0_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ADC1SR0_ISR_VAR_NOINIT"))
{
  group OS_ADC1SR0_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC1SR0_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_NOINIT_GROUP";
  "_OS_ADC1SR0_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_NOINIT" - 1;
  "_OS_ADC1SR0_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_NOINIT";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_NOINIT_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_NOINIT_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ADC1SR0_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ADC1SR0_ISR_VAR_ZERO_INIT"))
{
  group OS_ADC1SR0_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC1SR0_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ADC1SR0_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ADC1SR0_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ADC1SR0_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ADC1SR0_ISR_VAR_FAST"))
{
  group OS_ADC1SR0_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC1SR0_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_FAST" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_FAST_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_FAST_GROUP";
  "_OS_ADC1SR0_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST" - 1;
  "_OS_ADC1SR0_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_FAST_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ADC1SR0_ISR_VAR_FAST_NOINIT"))
{
  group OS_ADC1SR0_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC1SR0_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ADC1SR0_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ADC1SR0_ISR_VAR_NOCACHE"))
{
  group OS_ADC1SR0_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC1SR0_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_NOCACHE_GROUP";
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_NOCACHE" - 1;
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC1SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR
} /* OS_ADC1SR0_ISR_VAR_ALL_GROUP */
"_OS_ADC1SR0_ISR_VAR_ALL_START" = "_lc_gb_OS_ADC1SR0_ISR_VAR_ALL_GROUP";
"_OS_ADC1SR0_ISR_VAR_ALL_END" = "_lc_ge_OS_ADC1SR0_ISR_VAR_ALL_GROUP" - 1;
"_OS_ADC1SR0_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ADC1SR0_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ADC1SR0_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC1SR0_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR
group OS_ADC2SR0_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ADC2SR0_ISR_VAR"))
{
  group OS_ADC2SR0_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC2SR0_ISR_VAR";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_GROUP";
  "_OS_ADC2SR0_ISR_VAR_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR" - 1;
  "_OS_ADC2SR0_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ADC2SR0_ISR_VAR_NOINIT"))
{
  group OS_ADC2SR0_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC2SR0_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_NOINIT_GROUP";
  "_OS_ADC2SR0_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_NOINIT" - 1;
  "_OS_ADC2SR0_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_NOINIT";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_NOINIT_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_NOINIT_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ADC2SR0_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ADC2SR0_ISR_VAR_ZERO_INIT"))
{
  group OS_ADC2SR0_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC2SR0_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ADC2SR0_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ADC2SR0_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ADC2SR0_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ADC2SR0_ISR_VAR_FAST"))
{
  group OS_ADC2SR0_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC2SR0_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_FAST" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_FAST_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_FAST_GROUP";
  "_OS_ADC2SR0_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST" - 1;
  "_OS_ADC2SR0_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_FAST_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ADC2SR0_ISR_VAR_FAST_NOINIT"))
{
  group OS_ADC2SR0_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC2SR0_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ADC2SR0_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ADC2SR0_ISR_VAR_NOCACHE"))
{
  group OS_ADC2SR0_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC2SR0_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_NOCACHE_GROUP";
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_NOCACHE" - 1;
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC2SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR
} /* OS_ADC2SR0_ISR_VAR_ALL_GROUP */
"_OS_ADC2SR0_ISR_VAR_ALL_START" = "_lc_gb_OS_ADC2SR0_ISR_VAR_ALL_GROUP";
"_OS_ADC2SR0_ISR_VAR_ALL_END" = "_lc_ge_OS_ADC2SR0_ISR_VAR_ALL_GROUP" - 1;
"_OS_ADC2SR0_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ADC2SR0_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ADC2SR0_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC2SR0_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR
group OS_ADC3SR0_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ADC3SR0_ISR_VAR"))
{
  group OS_ADC3SR0_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC3SR0_ISR_VAR";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_GROUP";
  "_OS_ADC3SR0_ISR_VAR_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR" - 1;
  "_OS_ADC3SR0_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ADC3SR0_ISR_VAR_NOINIT"))
{
  group OS_ADC3SR0_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC3SR0_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_NOINIT_GROUP";
  "_OS_ADC3SR0_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_NOINIT" - 1;
  "_OS_ADC3SR0_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_NOINIT";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_NOINIT_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_NOINIT_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ADC3SR0_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ADC3SR0_ISR_VAR_ZERO_INIT"))
{
  group OS_ADC3SR0_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC3SR0_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ADC3SR0_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ADC3SR0_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ADC3SR0_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ADC3SR0_ISR_VAR_FAST"))
{
  group OS_ADC3SR0_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC3SR0_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_FAST" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_FAST_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_FAST_GROUP";
  "_OS_ADC3SR0_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST" - 1;
  "_OS_ADC3SR0_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_FAST_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ADC3SR0_ISR_VAR_FAST_NOINIT"))
{
  group OS_ADC3SR0_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC3SR0_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ADC3SR0_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ADC3SR0_ISR_VAR_NOCACHE"))
{
  group OS_ADC3SR0_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC3SR0_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_NOCACHE_GROUP";
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_NOCACHE" - 1;
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC3SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR
} /* OS_ADC3SR0_ISR_VAR_ALL_GROUP */
"_OS_ADC3SR0_ISR_VAR_ALL_START" = "_lc_gb_OS_ADC3SR0_ISR_VAR_ALL_GROUP";
"_OS_ADC3SR0_ISR_VAR_ALL_END" = "_lc_ge_OS_ADC3SR0_ISR_VAR_ALL_GROUP" - 1;
"_OS_ADC3SR0_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ADC3SR0_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ADC3SR0_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC3SR0_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR
group OS_ADC8SR0_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ADC8SR0_ISR_VAR"))
{
  group OS_ADC8SR0_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC8SR0_ISR_VAR";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_GROUP";
  "_OS_ADC8SR0_ISR_VAR_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR" - 1;
  "_OS_ADC8SR0_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ADC8SR0_ISR_VAR_NOINIT"))
{
  group OS_ADC8SR0_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC8SR0_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_NOINIT_GROUP";
  "_OS_ADC8SR0_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_NOINIT" - 1;
  "_OS_ADC8SR0_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_NOINIT";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_NOINIT_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_NOINIT_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ADC8SR0_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ADC8SR0_ISR_VAR_ZERO_INIT"))
{
  group OS_ADC8SR0_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC8SR0_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ADC8SR0_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ADC8SR0_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ADC8SR0_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ADC8SR0_ISR_VAR_FAST"))
{
  group OS_ADC8SR0_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC8SR0_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_FAST" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_FAST_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_FAST_GROUP";
  "_OS_ADC8SR0_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST" - 1;
  "_OS_ADC8SR0_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_FAST_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ADC8SR0_ISR_VAR_FAST_NOINIT"))
{
  group OS_ADC8SR0_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC8SR0_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ADC8SR0_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ADC8SR0_ISR_VAR_NOCACHE"))
{
  group OS_ADC8SR0_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ADC8SR0_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_NOCACHE_GROUP";
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_NOCACHE" - 1;
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ADC8SR0_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR
} /* OS_ADC8SR0_ISR_VAR_ALL_GROUP */
"_OS_ADC8SR0_ISR_VAR_ALL_START" = "_lc_gb_OS_ADC8SR0_ISR_VAR_ALL_GROUP";
"_OS_ADC8SR0_ISR_VAR_ALL_END" = "_lc_ge_OS_ADC8SR0_ISR_VAR_ALL_GROUP" - 1;
"_OS_ADC8SR0_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ADC8SR0_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ADC8SR0_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ADC8SR0_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR
group OS_ASCLIN1ERR_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ASCLIN1ERR_ISR_VAR"))
{
  group OS_ASCLIN1ERR_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN1ERR_ISR_VAR";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ASCLIN1ERR_ISR_VAR_NOINIT"))
{
  group OS_ASCLIN1ERR_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1ERR_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_NOINIT_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_NOINIT" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_NOINIT";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_NOINIT_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_NOINIT_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT"))
{
  group OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ASCLIN1ERR_ISR_VAR_FAST"))
{
  group OS_ASCLIN1ERR_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN1ERR_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_FAST" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_FAST_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT"))
{
  group OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ASCLIN1ERR_ISR_VAR_NOCACHE"))
{
  group OS_ASCLIN1ERR_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN1ERR_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_NOCACHE" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR
} /* OS_ASCLIN1ERR_ISR_VAR_ALL_GROUP */
"_OS_ASCLIN1ERR_ISR_VAR_ALL_START" = "_lc_gb_OS_ASCLIN1ERR_ISR_VAR_ALL_GROUP";
"_OS_ASCLIN1ERR_ISR_VAR_ALL_END" = "_lc_ge_OS_ASCLIN1ERR_ISR_VAR_ALL_GROUP" - 1;
"_OS_ASCLIN1ERR_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ASCLIN1ERR_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1ERR_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR
group OS_ASCLIN1RX_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ASCLIN1RX_ISR_VAR"))
{
  group OS_ASCLIN1RX_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN1RX_ISR_VAR";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ASCLIN1RX_ISR_VAR_NOINIT"))
{
  group OS_ASCLIN1RX_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1RX_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_NOINIT_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_NOINIT" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_NOINIT";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_NOINIT_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_NOINIT_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ASCLIN1RX_ISR_VAR_ZERO_INIT"))
{
  group OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN1RX_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ASCLIN1RX_ISR_VAR_FAST"))
{
  group OS_ASCLIN1RX_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN1RX_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_FAST" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_FAST_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_FAST_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_FAST_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT"))
{
  group OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ASCLIN1RX_ISR_VAR_NOCACHE"))
{
  group OS_ASCLIN1RX_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN1RX_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_NOCACHE_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_NOCACHE" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR
} /* OS_ASCLIN1RX_ISR_VAR_ALL_GROUP */
"_OS_ASCLIN1RX_ISR_VAR_ALL_START" = "_lc_gb_OS_ASCLIN1RX_ISR_VAR_ALL_GROUP";
"_OS_ASCLIN1RX_ISR_VAR_ALL_END" = "_lc_ge_OS_ASCLIN1RX_ISR_VAR_ALL_GROUP" - 1;
"_OS_ASCLIN1RX_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ASCLIN1RX_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1RX_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR
group OS_ASCLIN1TX_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ASCLIN1TX_ISR_VAR"))
{
  group OS_ASCLIN1TX_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN1TX_ISR_VAR";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ASCLIN1TX_ISR_VAR_NOINIT"))
{
  group OS_ASCLIN1TX_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1TX_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_NOINIT_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_NOINIT" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_NOINIT";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_NOINIT_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_NOINIT_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ASCLIN1TX_ISR_VAR_ZERO_INIT"))
{
  group OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN1TX_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ASCLIN1TX_ISR_VAR_FAST"))
{
  group OS_ASCLIN1TX_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN1TX_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_FAST" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_FAST_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_FAST_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_FAST_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT"))
{
  group OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ASCLIN1TX_ISR_VAR_NOCACHE"))
{
  group OS_ASCLIN1TX_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN1TX_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_NOCACHE_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_NOCACHE" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN1TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR
} /* OS_ASCLIN1TX_ISR_VAR_ALL_GROUP */
"_OS_ASCLIN1TX_ISR_VAR_ALL_START" = "_lc_gb_OS_ASCLIN1TX_ISR_VAR_ALL_GROUP";
"_OS_ASCLIN1TX_ISR_VAR_ALL_END" = "_lc_ge_OS_ASCLIN1TX_ISR_VAR_ALL_GROUP" - 1;
"_OS_ASCLIN1TX_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ASCLIN1TX_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN1TX_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR
group OS_ASCLIN2ERR_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ASCLIN2ERR_ISR_VAR"))
{
  group OS_ASCLIN2ERR_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN2ERR_ISR_VAR";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ASCLIN2ERR_ISR_VAR_NOINIT"))
{
  group OS_ASCLIN2ERR_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2ERR_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_NOINIT_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_NOINIT" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_NOINIT";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_NOINIT_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_NOINIT_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT"))
{
  group OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ASCLIN2ERR_ISR_VAR_FAST"))
{
  group OS_ASCLIN2ERR_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN2ERR_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_FAST" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_FAST_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT"))
{
  group OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ASCLIN2ERR_ISR_VAR_NOCACHE"))
{
  group OS_ASCLIN2ERR_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN2ERR_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_NOCACHE" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR
} /* OS_ASCLIN2ERR_ISR_VAR_ALL_GROUP */
"_OS_ASCLIN2ERR_ISR_VAR_ALL_START" = "_lc_gb_OS_ASCLIN2ERR_ISR_VAR_ALL_GROUP";
"_OS_ASCLIN2ERR_ISR_VAR_ALL_END" = "_lc_ge_OS_ASCLIN2ERR_ISR_VAR_ALL_GROUP" - 1;
"_OS_ASCLIN2ERR_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ASCLIN2ERR_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2ERR_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR
group OS_ASCLIN2RX_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ASCLIN2RX_ISR_VAR"))
{
  group OS_ASCLIN2RX_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN2RX_ISR_VAR";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ASCLIN2RX_ISR_VAR_NOINIT"))
{
  group OS_ASCLIN2RX_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2RX_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_NOINIT_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_NOINIT" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_NOINIT";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_NOINIT_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_NOINIT_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ASCLIN2RX_ISR_VAR_ZERO_INIT"))
{
  group OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN2RX_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ASCLIN2RX_ISR_VAR_FAST"))
{
  group OS_ASCLIN2RX_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN2RX_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_FAST" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_FAST_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_FAST_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_FAST_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT"))
{
  group OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ASCLIN2RX_ISR_VAR_NOCACHE"))
{
  group OS_ASCLIN2RX_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN2RX_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_NOCACHE_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_NOCACHE" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2RX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR
} /* OS_ASCLIN2RX_ISR_VAR_ALL_GROUP */
"_OS_ASCLIN2RX_ISR_VAR_ALL_START" = "_lc_gb_OS_ASCLIN2RX_ISR_VAR_ALL_GROUP";
"_OS_ASCLIN2RX_ISR_VAR_ALL_END" = "_lc_ge_OS_ASCLIN2RX_ISR_VAR_ALL_GROUP" - 1;
"_OS_ASCLIN2RX_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ASCLIN2RX_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2RX_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR
group OS_ASCLIN2TX_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_ASCLIN2TX_ISR_VAR"))
{
  group OS_ASCLIN2TX_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN2TX_ISR_VAR";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_ASCLIN2TX_ISR_VAR_NOINIT"))
{
  group OS_ASCLIN2TX_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2TX_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_NOINIT_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_NOINIT_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_NOINIT" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_NOINIT";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_NOINIT_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_NOINIT_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_ASCLIN2TX_ISR_VAR_ZERO_INIT"))
{
  group OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN2TX_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_ZERO_INIT" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_ASCLIN2TX_ISR_VAR_FAST"))
{
  group OS_ASCLIN2TX_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN2TX_ISR_VAR_FAST";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_FAST" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_FAST_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_FAST_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_FAST_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT"))
{
  group OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_ASCLIN2TX_ISR_VAR_NOCACHE"))
{
  group OS_ASCLIN2TX_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_ASCLIN2TX_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_NOCACHE_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_NOCACHE" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_NOCACHE";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE"))
{
  group OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_ASCLIN2TX_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR
} /* OS_ASCLIN2TX_ISR_VAR_ALL_GROUP */
"_OS_ASCLIN2TX_ISR_VAR_ALL_START" = "_lc_gb_OS_ASCLIN2TX_ISR_VAR_ALL_GROUP";
"_OS_ASCLIN2TX_ISR_VAR_ALL_END" = "_lc_ge_OS_ASCLIN2TX_ISR_VAR_ALL_GROUP" - 1;
"_OS_ASCLIN2TX_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_ASCLIN2TX_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_ASCLIN2TX_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_CANISR_0
group OS_CanIsr_0_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE_INIT )
if (exists(".data.OS_CanIsr_0_VAR"))
{
  group OS_CanIsr_0_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CanIsr_0_VAR";
    }
    reserved ".pad.OS_CanIsr_0_VAR" (size=16);
  }
  "_OS_CanIsr_0_VAR_START" = "_lc_gb_OS_CanIsr_0_VAR_GROUP";
  "_OS_CanIsr_0_VAR_END" = "_lc_ub__pad_OS_CanIsr_0_VAR" - 1;
  "_OS_CanIsr_0_VAR_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR";
}
else
{
  "_OS_CanIsr_0_VAR_START" = 0;
  "_OS_CanIsr_0_VAR_END" = 0;
  "_OS_CanIsr_0_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE_NOINIT )
if (exists(".bss.OS_CanIsr_0_VAR_NOINIT"))
{
  group OS_CanIsr_0_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_0_VAR_NOINIT";
    }
    reserved ".pad.OS_CanIsr_0_VAR_NOINIT" (size=16);
  }
  "_OS_CanIsr_0_VAR_NOINIT_START" = "_lc_gb_OS_CanIsr_0_VAR_NOINIT_GROUP";
  "_OS_CanIsr_0_VAR_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_NOINIT" - 1;
  "_OS_CanIsr_0_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_NOINIT";
}
else
{
  "_OS_CanIsr_0_VAR_NOINIT_START" = 0;
  "_OS_CanIsr_0_VAR_NOINIT_END" = 0;
  "_OS_CanIsr_0_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_CanIsr_0_VAR_ZERO_INIT_bss") || exists(".data.OS_CanIsr_0_VAR_ZERO_INIT"))
{
  group OS_CanIsr_0_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_0_VAR_ZERO_INIT_bss";
      select "[.]data.OS_CanIsr_0_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_0_VAR_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_0_VAR_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_0_VAR_ZERO_INIT_GROUP";
  "_OS_CanIsr_0_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_ZERO_INIT" - 1;
  "_OS_CanIsr_0_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_ZERO_INIT";
}
else
{
  "_OS_CanIsr_0_VAR_ZERO_INIT_START" = 0;
  "_OS_CanIsr_0_VAR_ZERO_INIT_END" = 0;
  "_OS_CanIsr_0_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE_INIT )
if (exists(".zdata.OS_CanIsr_0_VAR_FAST"))
{
  group OS_CanIsr_0_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CanIsr_0_VAR_FAST";
    }
    reserved ".pad.OS_CanIsr_0_VAR_FAST" (size=16);
  }
  "_OS_CanIsr_0_VAR_FAST_START" = "_lc_gb_OS_CanIsr_0_VAR_FAST_GROUP";
  "_OS_CanIsr_0_VAR_FAST_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST" - 1;
  "_OS_CanIsr_0_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST";
}
else
{
  "_OS_CanIsr_0_VAR_FAST_START" = 0;
  "_OS_CanIsr_0_VAR_FAST_END" = 0;
  "_OS_CanIsr_0_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_CanIsr_0_VAR_FAST_NOINIT"))
{
  group OS_CanIsr_0_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_0_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_CanIsr_0_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_CanIsr_0_VAR_FAST_NOINIT_START" = "_lc_gb_OS_CanIsr_0_VAR_FAST_NOINIT_GROUP";
  "_OS_CanIsr_0_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_NOINIT" - 1;
  "_OS_CanIsr_0_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_NOINIT";
}
else
{
  "_OS_CanIsr_0_VAR_FAST_NOINIT_START" = 0;
  "_OS_CanIsr_0_VAR_FAST_NOINIT_END" = 0;
  "_OS_CanIsr_0_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_CanIsr_0_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_CanIsr_0_VAR_FAST_ZERO_INIT"))
{
  group OS_CanIsr_0_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_0_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_CanIsr_0_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_0_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_0_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_0_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_CanIsr_0_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_ZERO_INIT" - 1;
  "_OS_CanIsr_0_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_CanIsr_0_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_CanIsr_0_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_CanIsr_0_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE_INIT )
if (exists(".data.OS_CanIsr_0_VAR_NOCACHE"))
{
  group OS_CanIsr_0_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CanIsr_0_VAR_NOCACHE";
    }
    reserved ".pad.OS_CanIsr_0_VAR_NOCACHE" (size=16);
  }
  "_OS_CanIsr_0_VAR_NOCACHE_START" = "_lc_gb_OS_CanIsr_0_VAR_NOCACHE_GROUP";
  "_OS_CanIsr_0_VAR_NOCACHE_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_NOCACHE" - 1;
  "_OS_CanIsr_0_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_NOCACHE";
}
else
{
  "_OS_CanIsr_0_VAR_NOCACHE_START" = 0;
  "_OS_CanIsr_0_VAR_NOCACHE_END" = 0;
  "_OS_CanIsr_0_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_CanIsr_0_VAR_NOCACHE_NOINIT"))
{
  group OS_CanIsr_0_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_0_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CanIsr_0_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CanIsr_0_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_CanIsr_0_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_CanIsr_0_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_NOCACHE_NOINIT" - 1;
  "_OS_CanIsr_0_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_CanIsr_0_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_CanIsr_0_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_CanIsr_0_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CanIsr_0_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_CanIsr_0_VAR_FAST_NOCACHE"))
{
  group OS_CanIsr_0_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CanIsr_0_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_CanIsr_0_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_CanIsr_0_VAR_FAST_NOCACHE_GROUP";
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_NOCACHE" - 1;
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_NOCACHE";
}
else
{
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_START" = 0;
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_END" = 0;
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_0 ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CanIsr_0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0
} /* OS_CanIsr_0_VAR_ALL_GROUP */
"_OS_CanIsr_0_VAR_ALL_START" = "_lc_gb_OS_CanIsr_0_VAR_ALL_GROUP";
"_OS_CanIsr_0_VAR_ALL_END" = "_lc_ge_OS_CanIsr_0_VAR_ALL_GROUP" - 1;
"_OS_CanIsr_0_VAR_ALL_LIMIT" = "_lc_ge_OS_CanIsr_0_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_CANISR_0
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_FAR
# undef OS_LINK_VAR_ISR_CANISR_0_FAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE
# undef OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_NEAR
# undef OS_LINK_VAR_ISR_CANISR_0_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE
# undef OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_CANISR_1
group OS_CanIsr_1_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE_INIT )
if (exists(".data.OS_CanIsr_1_VAR"))
{
  group OS_CanIsr_1_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CanIsr_1_VAR";
    }
    reserved ".pad.OS_CanIsr_1_VAR" (size=16);
  }
  "_OS_CanIsr_1_VAR_START" = "_lc_gb_OS_CanIsr_1_VAR_GROUP";
  "_OS_CanIsr_1_VAR_END" = "_lc_ub__pad_OS_CanIsr_1_VAR" - 1;
  "_OS_CanIsr_1_VAR_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR";
}
else
{
  "_OS_CanIsr_1_VAR_START" = 0;
  "_OS_CanIsr_1_VAR_END" = 0;
  "_OS_CanIsr_1_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE_NOINIT )
if (exists(".bss.OS_CanIsr_1_VAR_NOINIT"))
{
  group OS_CanIsr_1_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_1_VAR_NOINIT";
    }
    reserved ".pad.OS_CanIsr_1_VAR_NOINIT" (size=16);
  }
  "_OS_CanIsr_1_VAR_NOINIT_START" = "_lc_gb_OS_CanIsr_1_VAR_NOINIT_GROUP";
  "_OS_CanIsr_1_VAR_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_NOINIT" - 1;
  "_OS_CanIsr_1_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_NOINIT";
}
else
{
  "_OS_CanIsr_1_VAR_NOINIT_START" = 0;
  "_OS_CanIsr_1_VAR_NOINIT_END" = 0;
  "_OS_CanIsr_1_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_CanIsr_1_VAR_ZERO_INIT_bss") || exists(".data.OS_CanIsr_1_VAR_ZERO_INIT"))
{
  group OS_CanIsr_1_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_1_VAR_ZERO_INIT_bss";
      select "[.]data.OS_CanIsr_1_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_1_VAR_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_1_VAR_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_1_VAR_ZERO_INIT_GROUP";
  "_OS_CanIsr_1_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_ZERO_INIT" - 1;
  "_OS_CanIsr_1_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_ZERO_INIT";
}
else
{
  "_OS_CanIsr_1_VAR_ZERO_INIT_START" = 0;
  "_OS_CanIsr_1_VAR_ZERO_INIT_END" = 0;
  "_OS_CanIsr_1_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE_INIT )
if (exists(".zdata.OS_CanIsr_1_VAR_FAST"))
{
  group OS_CanIsr_1_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CanIsr_1_VAR_FAST";
    }
    reserved ".pad.OS_CanIsr_1_VAR_FAST" (size=16);
  }
  "_OS_CanIsr_1_VAR_FAST_START" = "_lc_gb_OS_CanIsr_1_VAR_FAST_GROUP";
  "_OS_CanIsr_1_VAR_FAST_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST" - 1;
  "_OS_CanIsr_1_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST";
}
else
{
  "_OS_CanIsr_1_VAR_FAST_START" = 0;
  "_OS_CanIsr_1_VAR_FAST_END" = 0;
  "_OS_CanIsr_1_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_CanIsr_1_VAR_FAST_NOINIT"))
{
  group OS_CanIsr_1_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_1_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_CanIsr_1_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_CanIsr_1_VAR_FAST_NOINIT_START" = "_lc_gb_OS_CanIsr_1_VAR_FAST_NOINIT_GROUP";
  "_OS_CanIsr_1_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_NOINIT" - 1;
  "_OS_CanIsr_1_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_NOINIT";
}
else
{
  "_OS_CanIsr_1_VAR_FAST_NOINIT_START" = 0;
  "_OS_CanIsr_1_VAR_FAST_NOINIT_END" = 0;
  "_OS_CanIsr_1_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_CanIsr_1_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_CanIsr_1_VAR_FAST_ZERO_INIT"))
{
  group OS_CanIsr_1_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_1_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_CanIsr_1_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_1_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_1_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_1_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_CanIsr_1_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_ZERO_INIT" - 1;
  "_OS_CanIsr_1_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_CanIsr_1_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_CanIsr_1_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_CanIsr_1_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE_INIT )
if (exists(".data.OS_CanIsr_1_VAR_NOCACHE"))
{
  group OS_CanIsr_1_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CanIsr_1_VAR_NOCACHE";
    }
    reserved ".pad.OS_CanIsr_1_VAR_NOCACHE" (size=16);
  }
  "_OS_CanIsr_1_VAR_NOCACHE_START" = "_lc_gb_OS_CanIsr_1_VAR_NOCACHE_GROUP";
  "_OS_CanIsr_1_VAR_NOCACHE_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_NOCACHE" - 1;
  "_OS_CanIsr_1_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_NOCACHE";
}
else
{
  "_OS_CanIsr_1_VAR_NOCACHE_START" = 0;
  "_OS_CanIsr_1_VAR_NOCACHE_END" = 0;
  "_OS_CanIsr_1_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_CanIsr_1_VAR_NOCACHE_NOINIT"))
{
  group OS_CanIsr_1_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_1_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CanIsr_1_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CanIsr_1_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_CanIsr_1_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_CanIsr_1_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_NOCACHE_NOINIT" - 1;
  "_OS_CanIsr_1_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_CanIsr_1_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_CanIsr_1_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_CanIsr_1_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CanIsr_1_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_CanIsr_1_VAR_FAST_NOCACHE"))
{
  group OS_CanIsr_1_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CanIsr_1_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_CanIsr_1_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_CanIsr_1_VAR_FAST_NOCACHE_GROUP";
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_NOCACHE" - 1;
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_NOCACHE";
}
else
{
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_START" = 0;
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_END" = 0;
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_1 ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CanIsr_1_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1
} /* OS_CanIsr_1_VAR_ALL_GROUP */
"_OS_CanIsr_1_VAR_ALL_START" = "_lc_gb_OS_CanIsr_1_VAR_ALL_GROUP";
"_OS_CanIsr_1_VAR_ALL_END" = "_lc_ge_OS_CanIsr_1_VAR_ALL_GROUP" - 1;
"_OS_CanIsr_1_VAR_ALL_LIMIT" = "_lc_ge_OS_CanIsr_1_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_CANISR_1
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR
# undef OS_LINK_VAR_ISR_CANISR_1_FAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_1_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_CANISR_3
group OS_CanIsr_3_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE_INIT )
if (exists(".data.OS_CanIsr_3_VAR"))
{
  group OS_CanIsr_3_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CanIsr_3_VAR";
    }
    reserved ".pad.OS_CanIsr_3_VAR" (size=16);
  }
  "_OS_CanIsr_3_VAR_START" = "_lc_gb_OS_CanIsr_3_VAR_GROUP";
  "_OS_CanIsr_3_VAR_END" = "_lc_ub__pad_OS_CanIsr_3_VAR" - 1;
  "_OS_CanIsr_3_VAR_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR";
}
else
{
  "_OS_CanIsr_3_VAR_START" = 0;
  "_OS_CanIsr_3_VAR_END" = 0;
  "_OS_CanIsr_3_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE_NOINIT )
if (exists(".bss.OS_CanIsr_3_VAR_NOINIT"))
{
  group OS_CanIsr_3_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_3_VAR_NOINIT";
    }
    reserved ".pad.OS_CanIsr_3_VAR_NOINIT" (size=16);
  }
  "_OS_CanIsr_3_VAR_NOINIT_START" = "_lc_gb_OS_CanIsr_3_VAR_NOINIT_GROUP";
  "_OS_CanIsr_3_VAR_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_NOINIT" - 1;
  "_OS_CanIsr_3_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_NOINIT";
}
else
{
  "_OS_CanIsr_3_VAR_NOINIT_START" = 0;
  "_OS_CanIsr_3_VAR_NOINIT_END" = 0;
  "_OS_CanIsr_3_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_CanIsr_3_VAR_ZERO_INIT_bss") || exists(".data.OS_CanIsr_3_VAR_ZERO_INIT"))
{
  group OS_CanIsr_3_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_3_VAR_ZERO_INIT_bss";
      select "[.]data.OS_CanIsr_3_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_3_VAR_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_3_VAR_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_3_VAR_ZERO_INIT_GROUP";
  "_OS_CanIsr_3_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_ZERO_INIT" - 1;
  "_OS_CanIsr_3_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_ZERO_INIT";
}
else
{
  "_OS_CanIsr_3_VAR_ZERO_INIT_START" = 0;
  "_OS_CanIsr_3_VAR_ZERO_INIT_END" = 0;
  "_OS_CanIsr_3_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE_INIT )
if (exists(".zdata.OS_CanIsr_3_VAR_FAST"))
{
  group OS_CanIsr_3_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CanIsr_3_VAR_FAST";
    }
    reserved ".pad.OS_CanIsr_3_VAR_FAST" (size=16);
  }
  "_OS_CanIsr_3_VAR_FAST_START" = "_lc_gb_OS_CanIsr_3_VAR_FAST_GROUP";
  "_OS_CanIsr_3_VAR_FAST_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST" - 1;
  "_OS_CanIsr_3_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST";
}
else
{
  "_OS_CanIsr_3_VAR_FAST_START" = 0;
  "_OS_CanIsr_3_VAR_FAST_END" = 0;
  "_OS_CanIsr_3_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_CanIsr_3_VAR_FAST_NOINIT"))
{
  group OS_CanIsr_3_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_3_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_CanIsr_3_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_CanIsr_3_VAR_FAST_NOINIT_START" = "_lc_gb_OS_CanIsr_3_VAR_FAST_NOINIT_GROUP";
  "_OS_CanIsr_3_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_NOINIT" - 1;
  "_OS_CanIsr_3_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_NOINIT";
}
else
{
  "_OS_CanIsr_3_VAR_FAST_NOINIT_START" = 0;
  "_OS_CanIsr_3_VAR_FAST_NOINIT_END" = 0;
  "_OS_CanIsr_3_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_CanIsr_3_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_CanIsr_3_VAR_FAST_ZERO_INIT"))
{
  group OS_CanIsr_3_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_3_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_CanIsr_3_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_3_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_3_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_3_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_CanIsr_3_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_ZERO_INIT" - 1;
  "_OS_CanIsr_3_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_CanIsr_3_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_CanIsr_3_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_CanIsr_3_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE_INIT )
if (exists(".data.OS_CanIsr_3_VAR_NOCACHE"))
{
  group OS_CanIsr_3_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CanIsr_3_VAR_NOCACHE";
    }
    reserved ".pad.OS_CanIsr_3_VAR_NOCACHE" (size=16);
  }
  "_OS_CanIsr_3_VAR_NOCACHE_START" = "_lc_gb_OS_CanIsr_3_VAR_NOCACHE_GROUP";
  "_OS_CanIsr_3_VAR_NOCACHE_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_NOCACHE" - 1;
  "_OS_CanIsr_3_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_NOCACHE";
}
else
{
  "_OS_CanIsr_3_VAR_NOCACHE_START" = 0;
  "_OS_CanIsr_3_VAR_NOCACHE_END" = 0;
  "_OS_CanIsr_3_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_CanIsr_3_VAR_NOCACHE_NOINIT"))
{
  group OS_CanIsr_3_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_3_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CanIsr_3_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CanIsr_3_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_CanIsr_3_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_CanIsr_3_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_NOCACHE_NOINIT" - 1;
  "_OS_CanIsr_3_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_CanIsr_3_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_CanIsr_3_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_CanIsr_3_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CanIsr_3_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_CanIsr_3_VAR_FAST_NOCACHE"))
{
  group OS_CanIsr_3_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CanIsr_3_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_CanIsr_3_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_CanIsr_3_VAR_FAST_NOCACHE_GROUP";
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_NOCACHE" - 1;
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_NOCACHE";
}
else
{
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_START" = 0;
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_END" = 0;
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_3 ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CanIsr_3_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3
} /* OS_CanIsr_3_VAR_ALL_GROUP */
"_OS_CanIsr_3_VAR_ALL_START" = "_lc_gb_OS_CanIsr_3_VAR_ALL_GROUP";
"_OS_CanIsr_3_VAR_ALL_END" = "_lc_ge_OS_CanIsr_3_VAR_ALL_GROUP" - 1;
"_OS_CanIsr_3_VAR_ALL_LIMIT" = "_lc_ge_OS_CanIsr_3_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_CANISR_3
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_FAR
# undef OS_LINK_VAR_ISR_CANISR_3_FAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE
# undef OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_3_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_3_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_NEAR
# undef OS_LINK_VAR_ISR_CANISR_3_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE
# undef OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_3_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_3_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_CANISR_4
group OS_CanIsr_4_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE_INIT )
if (exists(".data.OS_CanIsr_4_VAR"))
{
  group OS_CanIsr_4_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CanIsr_4_VAR";
    }
    reserved ".pad.OS_CanIsr_4_VAR" (size=16);
  }
  "_OS_CanIsr_4_VAR_START" = "_lc_gb_OS_CanIsr_4_VAR_GROUP";
  "_OS_CanIsr_4_VAR_END" = "_lc_ub__pad_OS_CanIsr_4_VAR" - 1;
  "_OS_CanIsr_4_VAR_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR";
}
else
{
  "_OS_CanIsr_4_VAR_START" = 0;
  "_OS_CanIsr_4_VAR_END" = 0;
  "_OS_CanIsr_4_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE_NOINIT )
if (exists(".bss.OS_CanIsr_4_VAR_NOINIT"))
{
  group OS_CanIsr_4_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_4_VAR_NOINIT";
    }
    reserved ".pad.OS_CanIsr_4_VAR_NOINIT" (size=16);
  }
  "_OS_CanIsr_4_VAR_NOINIT_START" = "_lc_gb_OS_CanIsr_4_VAR_NOINIT_GROUP";
  "_OS_CanIsr_4_VAR_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_NOINIT" - 1;
  "_OS_CanIsr_4_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_NOINIT";
}
else
{
  "_OS_CanIsr_4_VAR_NOINIT_START" = 0;
  "_OS_CanIsr_4_VAR_NOINIT_END" = 0;
  "_OS_CanIsr_4_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_CanIsr_4_VAR_ZERO_INIT_bss") || exists(".data.OS_CanIsr_4_VAR_ZERO_INIT"))
{
  group OS_CanIsr_4_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_4_VAR_ZERO_INIT_bss";
      select "[.]data.OS_CanIsr_4_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_4_VAR_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_4_VAR_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_4_VAR_ZERO_INIT_GROUP";
  "_OS_CanIsr_4_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_ZERO_INIT" - 1;
  "_OS_CanIsr_4_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_ZERO_INIT";
}
else
{
  "_OS_CanIsr_4_VAR_ZERO_INIT_START" = 0;
  "_OS_CanIsr_4_VAR_ZERO_INIT_END" = 0;
  "_OS_CanIsr_4_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE_INIT )
if (exists(".zdata.OS_CanIsr_4_VAR_FAST"))
{
  group OS_CanIsr_4_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CanIsr_4_VAR_FAST";
    }
    reserved ".pad.OS_CanIsr_4_VAR_FAST" (size=16);
  }
  "_OS_CanIsr_4_VAR_FAST_START" = "_lc_gb_OS_CanIsr_4_VAR_FAST_GROUP";
  "_OS_CanIsr_4_VAR_FAST_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST" - 1;
  "_OS_CanIsr_4_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST";
}
else
{
  "_OS_CanIsr_4_VAR_FAST_START" = 0;
  "_OS_CanIsr_4_VAR_FAST_END" = 0;
  "_OS_CanIsr_4_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_CanIsr_4_VAR_FAST_NOINIT"))
{
  group OS_CanIsr_4_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_4_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_CanIsr_4_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_CanIsr_4_VAR_FAST_NOINIT_START" = "_lc_gb_OS_CanIsr_4_VAR_FAST_NOINIT_GROUP";
  "_OS_CanIsr_4_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_NOINIT" - 1;
  "_OS_CanIsr_4_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_NOINIT";
}
else
{
  "_OS_CanIsr_4_VAR_FAST_NOINIT_START" = 0;
  "_OS_CanIsr_4_VAR_FAST_NOINIT_END" = 0;
  "_OS_CanIsr_4_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_CanIsr_4_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_CanIsr_4_VAR_FAST_ZERO_INIT"))
{
  group OS_CanIsr_4_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_4_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_CanIsr_4_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_4_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_4_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_4_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_CanIsr_4_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_ZERO_INIT" - 1;
  "_OS_CanIsr_4_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_CanIsr_4_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_CanIsr_4_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_CanIsr_4_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE_INIT )
if (exists(".data.OS_CanIsr_4_VAR_NOCACHE"))
{
  group OS_CanIsr_4_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CanIsr_4_VAR_NOCACHE";
    }
    reserved ".pad.OS_CanIsr_4_VAR_NOCACHE" (size=16);
  }
  "_OS_CanIsr_4_VAR_NOCACHE_START" = "_lc_gb_OS_CanIsr_4_VAR_NOCACHE_GROUP";
  "_OS_CanIsr_4_VAR_NOCACHE_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_NOCACHE" - 1;
  "_OS_CanIsr_4_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_NOCACHE";
}
else
{
  "_OS_CanIsr_4_VAR_NOCACHE_START" = 0;
  "_OS_CanIsr_4_VAR_NOCACHE_END" = 0;
  "_OS_CanIsr_4_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_CanIsr_4_VAR_NOCACHE_NOINIT"))
{
  group OS_CanIsr_4_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_4_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CanIsr_4_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CanIsr_4_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_CanIsr_4_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_CanIsr_4_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_NOCACHE_NOINIT" - 1;
  "_OS_CanIsr_4_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_CanIsr_4_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_CanIsr_4_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_CanIsr_4_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CanIsr_4_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_CanIsr_4_VAR_FAST_NOCACHE"))
{
  group OS_CanIsr_4_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CanIsr_4_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_CanIsr_4_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_CanIsr_4_VAR_FAST_NOCACHE_GROUP";
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_NOCACHE" - 1;
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_NOCACHE";
}
else
{
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_START" = 0;
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_END" = 0;
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_CANISR_4 ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CanIsr_4_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4
} /* OS_CanIsr_4_VAR_ALL_GROUP */
"_OS_CanIsr_4_VAR_ALL_START" = "_lc_gb_OS_CanIsr_4_VAR_ALL_GROUP";
"_OS_CanIsr_4_VAR_ALL_END" = "_lc_ge_OS_CanIsr_4_VAR_ALL_GROUP" - 1;
"_OS_CanIsr_4_VAR_ALL_LIMIT" = "_lc_ge_OS_CanIsr_4_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_CANISR_4
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_FAR
# undef OS_LINK_VAR_ISR_CANISR_4_FAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE
# undef OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_4_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_4_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_NEAR
# undef OS_LINK_VAR_ISR_CANISR_4_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE
# undef OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_4_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_CANISR_4_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0
group OS_CounterIsr_SystemTimer0_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE_INIT )
if (exists(".data.OS_CounterIsr_SystemTimer0_VAR"))
{
  group OS_CounterIsr_SystemTimer0_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CounterIsr_SystemTimer0_VAR";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE_NOINIT )
if (exists(".bss.OS_CounterIsr_SystemTimer0_VAR_NOINIT"))
{
  group OS_CounterIsr_SystemTimer0_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CounterIsr_SystemTimer0_VAR_NOINIT";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_NOINIT" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_NOINIT_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_NOINIT_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_NOINIT_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_NOINIT" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_NOINIT";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_NOINIT_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_NOINIT_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_bss") || exists(".data.OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT"))
{
  group OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_bss";
      select "[.]data.OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE_INIT )
if (exists(".zdata.OS_CounterIsr_SystemTimer0_VAR_FAST"))
{
  group OS_CounterIsr_SystemTimer0_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CounterIsr_SystemTimer0_VAR_FAST";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_FAST" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_FAST_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT"))
{
  group OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT"))
{
  group OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE_INIT )
if (exists(".data.OS_CounterIsr_SystemTimer0_VAR_NOCACHE"))
{
  group OS_CounterIsr_SystemTimer0_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_CounterIsr_SystemTimer0_VAR_NOCACHE";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_NOCACHE" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_NOCACHE" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_NOCACHE";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT"))
{
  group OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE"))
{
  group OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0 ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_CounterIsr_SystemTimer0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0
} /* OS_CounterIsr_SystemTimer0_VAR_ALL_GROUP */
"_OS_CounterIsr_SystemTimer0_VAR_ALL_START" = "_lc_gb_OS_CounterIsr_SystemTimer0_VAR_ALL_GROUP";
"_OS_CounterIsr_SystemTimer0_VAR_ALL_END" = "_lc_ge_OS_CounterIsr_SystemTimer0_VAR_ALL_GROUP" - 1;
"_OS_CounterIsr_SystemTimer0_VAR_ALL_LIMIT" = "_lc_ge_OS_CounterIsr_SystemTimer0_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_COUNTERISR_SYSTEMTIMER0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR
group OS_DMACH10SR_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_DMACH10SR_ISR_VAR"))
{
  group OS_DMACH10SR_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_DMACH10SR_ISR_VAR";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_GROUP";
  "_OS_DMACH10SR_ISR_VAR_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR" - 1;
  "_OS_DMACH10SR_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_DMACH10SR_ISR_VAR_NOINIT"))
{
  group OS_DMACH10SR_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_DMACH10SR_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_NOINIT_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_NOINIT_GROUP";
  "_OS_DMACH10SR_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_NOINIT" - 1;
  "_OS_DMACH10SR_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_NOINIT";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_NOINIT_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_NOINIT_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_DMACH10SR_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_DMACH10SR_ISR_VAR_ZERO_INIT"))
{
  group OS_DMACH10SR_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_DMACH10SR_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_DMACH10SR_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_DMACH10SR_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_ZERO_INIT" - 1;
  "_OS_DMACH10SR_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_DMACH10SR_ISR_VAR_FAST"))
{
  group OS_DMACH10SR_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_DMACH10SR_ISR_VAR_FAST";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_FAST" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_FAST_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_FAST_GROUP";
  "_OS_DMACH10SR_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST" - 1;
  "_OS_DMACH10SR_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_FAST_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_DMACH10SR_ISR_VAR_FAST_NOINIT"))
{
  group OS_DMACH10SR_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_DMACH10SR_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_DMACH10SR_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_DMACH10SR_ISR_VAR_NOCACHE"))
{
  group OS_DMACH10SR_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_DMACH10SR_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_NOCACHE_GROUP";
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_NOCACHE" - 1;
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_NOCACHE";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE"))
{
  group OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_DMACH10SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR
} /* OS_DMACH10SR_ISR_VAR_ALL_GROUP */
"_OS_DMACH10SR_ISR_VAR_ALL_START" = "_lc_gb_OS_DMACH10SR_ISR_VAR_ALL_GROUP";
"_OS_DMACH10SR_ISR_VAR_ALL_END" = "_lc_ge_OS_DMACH10SR_ISR_VAR_ALL_GROUP" - 1;
"_OS_DMACH10SR_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_DMACH10SR_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_DMACH10SR_ISR
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_DMACH10SR_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR
group OS_DMACH11SR_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_DMACH11SR_ISR_VAR"))
{
  group OS_DMACH11SR_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_DMACH11SR_ISR_VAR";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_GROUP";
  "_OS_DMACH11SR_ISR_VAR_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR" - 1;
  "_OS_DMACH11SR_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_DMACH11SR_ISR_VAR_NOINIT"))
{
  group OS_DMACH11SR_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_DMACH11SR_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_NOINIT_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_NOINIT_GROUP";
  "_OS_DMACH11SR_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_NOINIT" - 1;
  "_OS_DMACH11SR_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_NOINIT";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_NOINIT_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_NOINIT_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_DMACH11SR_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_DMACH11SR_ISR_VAR_ZERO_INIT"))
{
  group OS_DMACH11SR_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_DMACH11SR_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_DMACH11SR_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_DMACH11SR_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_ZERO_INIT" - 1;
  "_OS_DMACH11SR_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_DMACH11SR_ISR_VAR_FAST"))
{
  group OS_DMACH11SR_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_DMACH11SR_ISR_VAR_FAST";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_FAST" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_FAST_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_FAST_GROUP";
  "_OS_DMACH11SR_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST" - 1;
  "_OS_DMACH11SR_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_FAST_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_DMACH11SR_ISR_VAR_FAST_NOINIT"))
{
  group OS_DMACH11SR_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_DMACH11SR_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_DMACH11SR_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_DMACH11SR_ISR_VAR_NOCACHE"))
{
  group OS_DMACH11SR_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_DMACH11SR_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_NOCACHE_GROUP";
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_NOCACHE" - 1;
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_NOCACHE";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE"))
{
  group OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_DMACH11SR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR
} /* OS_DMACH11SR_ISR_VAR_ALL_GROUP */
"_OS_DMACH11SR_ISR_VAR_ALL_START" = "_lc_gb_OS_DMACH11SR_ISR_VAR_ALL_GROUP";
"_OS_DMACH11SR_ISR_VAR_ALL_END" = "_lc_ge_OS_DMACH11SR_ISR_VAR_ALL_GROUP" - 1;
"_OS_DMACH11SR_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_DMACH11SR_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_DMACH11SR_ISR
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_DMACH11SR_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR
group OS_GTMTOM1SR3_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_GTMTOM1SR3_ISR_VAR"))
{
  group OS_GTMTOM1SR3_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_GTMTOM1SR3_ISR_VAR";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_GTMTOM1SR3_ISR_VAR_NOINIT"))
{
  group OS_GTMTOM1SR3_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_GTMTOM1SR3_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_NOINIT_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_NOINIT_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_NOINIT" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_NOINIT";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_NOINIT_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_NOINIT_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT"))
{
  group OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_GTMTOM1SR3_ISR_VAR_FAST"))
{
  group OS_GTMTOM1SR3_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_GTMTOM1SR3_ISR_VAR_FAST";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_FAST" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_FAST_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT"))
{
  group OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_GTMTOM1SR3_ISR_VAR_NOCACHE"))
{
  group OS_GTMTOM1SR3_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_GTMTOM1SR3_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_NOCACHE" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_NOCACHE";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE"))
{
  group OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_GTMTOM1SR3_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR
} /* OS_GTMTOM1SR3_ISR_VAR_ALL_GROUP */
"_OS_GTMTOM1SR3_ISR_VAR_ALL_START" = "_lc_gb_OS_GTMTOM1SR3_ISR_VAR_ALL_GROUP";
"_OS_GTMTOM1SR3_ISR_VAR_ALL_END" = "_lc_ge_OS_GTMTOM1SR3_ISR_VAR_ALL_GROUP" - 1;
"_OS_GTMTOM1SR3_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_GTMTOM1SR3_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR3_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR
group OS_GTMTOM1SR4_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_GTMTOM1SR4_ISR_VAR"))
{
  group OS_GTMTOM1SR4_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_GTMTOM1SR4_ISR_VAR";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_GTMTOM1SR4_ISR_VAR_NOINIT"))
{
  group OS_GTMTOM1SR4_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_GTMTOM1SR4_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_NOINIT_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_NOINIT_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_NOINIT" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_NOINIT";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_NOINIT_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_NOINIT_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT"))
{
  group OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_GTMTOM1SR4_ISR_VAR_FAST"))
{
  group OS_GTMTOM1SR4_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_GTMTOM1SR4_ISR_VAR_FAST";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_FAST" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_FAST_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT"))
{
  group OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_GTMTOM1SR4_ISR_VAR_NOCACHE"))
{
  group OS_GTMTOM1SR4_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_GTMTOM1SR4_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_NOCACHE" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_NOCACHE";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE"))
{
  group OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_GTMTOM1SR4_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR
} /* OS_GTMTOM1SR4_ISR_VAR_ALL_GROUP */
"_OS_GTMTOM1SR4_ISR_VAR_ALL_START" = "_lc_gb_OS_GTMTOM1SR4_ISR_VAR_ALL_GROUP";
"_OS_GTMTOM1SR4_ISR_VAR_ALL_END" = "_lc_ge_OS_GTMTOM1SR4_ISR_VAR_ALL_GROUP" - 1;
"_OS_GTMTOM1SR4_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_GTMTOM1SR4_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_GTMTOM1SR4_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR
group OS_QSPI3ERR_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_QSPI3ERR_ISR_VAR"))
{
  group OS_QSPI3ERR_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_QSPI3ERR_ISR_VAR";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR" - 1;
  "_OS_QSPI3ERR_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_QSPI3ERR_ISR_VAR_NOINIT"))
{
  group OS_QSPI3ERR_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_QSPI3ERR_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_NOINIT_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_NOINIT_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_NOINIT" - 1;
  "_OS_QSPI3ERR_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_NOINIT";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_NOINIT_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_NOINIT_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_QSPI3ERR_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_QSPI3ERR_ISR_VAR_ZERO_INIT"))
{
  group OS_QSPI3ERR_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_QSPI3ERR_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_QSPI3ERR_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_ZERO_INIT" - 1;
  "_OS_QSPI3ERR_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_QSPI3ERR_ISR_VAR_FAST"))
{
  group OS_QSPI3ERR_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_QSPI3ERR_ISR_VAR_FAST";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_FAST" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_FAST_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_FAST_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST" - 1;
  "_OS_QSPI3ERR_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_FAST_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_QSPI3ERR_ISR_VAR_FAST_NOINIT"))
{
  group OS_QSPI3ERR_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_QSPI3ERR_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_QSPI3ERR_ISR_VAR_NOCACHE"))
{
  group OS_QSPI3ERR_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_QSPI3ERR_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_NOCACHE_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_NOCACHE" - 1;
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_NOCACHE";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE"))
{
  group OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_QSPI3ERR_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR
} /* OS_QSPI3ERR_ISR_VAR_ALL_GROUP */
"_OS_QSPI3ERR_ISR_VAR_ALL_START" = "_lc_gb_OS_QSPI3ERR_ISR_VAR_ALL_GROUP";
"_OS_QSPI3ERR_ISR_VAR_ALL_END" = "_lc_ge_OS_QSPI3ERR_ISR_VAR_ALL_GROUP" - 1;
"_OS_QSPI3ERR_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_QSPI3ERR_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_QSPI3ERR_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR
group OS_QSPI3PT_ISR_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE_INIT )
if (exists(".data.OS_QSPI3PT_ISR_VAR"))
{
  group OS_QSPI3PT_ISR_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_QSPI3PT_ISR_VAR";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_GROUP";
  "_OS_QSPI3PT_ISR_VAR_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR" - 1;
  "_OS_QSPI3PT_ISR_VAR_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE_NOINIT )
if (exists(".bss.OS_QSPI3PT_ISR_VAR_NOINIT"))
{
  group OS_QSPI3PT_ISR_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_QSPI3PT_ISR_VAR_NOINIT";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_NOINIT" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_NOINIT_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_NOINIT_GROUP";
  "_OS_QSPI3PT_ISR_VAR_NOINIT_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_NOINIT" - 1;
  "_OS_QSPI3PT_ISR_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_NOINIT";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_NOINIT_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_NOINIT_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_QSPI3PT_ISR_VAR_ZERO_INIT_bss") || exists(".data.OS_QSPI3PT_ISR_VAR_ZERO_INIT"))
{
  group OS_QSPI3PT_ISR_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_QSPI3PT_ISR_VAR_ZERO_INIT_bss";
      select "[.]data.OS_QSPI3PT_ISR_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_ZERO_INIT" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_ZERO_INIT_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_ZERO_INIT_GROUP";
  "_OS_QSPI3PT_ISR_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_ZERO_INIT" - 1;
  "_OS_QSPI3PT_ISR_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_ZERO_INIT";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_ZERO_INIT_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_ZERO_INIT_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE_INIT )
if (exists(".zdata.OS_QSPI3PT_ISR_VAR_FAST"))
{
  group OS_QSPI3PT_ISR_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_QSPI3PT_ISR_VAR_FAST";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_FAST" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_FAST_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_FAST_GROUP";
  "_OS_QSPI3PT_ISR_VAR_FAST_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST" - 1;
  "_OS_QSPI3PT_ISR_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_FAST_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_QSPI3PT_ISR_VAR_FAST_NOINIT"))
{
  group OS_QSPI3PT_ISR_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_QSPI3PT_ISR_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_FAST_NOINIT_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_FAST_NOINIT_GROUP";
  "_OS_QSPI3PT_ISR_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_NOINIT" - 1;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_NOINIT";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_FAST_NOINIT_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOINIT_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT"))
{
  group OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT" - 1;
  "_OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE_INIT )
if (exists(".data.OS_QSPI3PT_ISR_VAR_NOCACHE"))
{
  group OS_QSPI3PT_ISR_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_QSPI3PT_ISR_VAR_NOCACHE";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_NOCACHE" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_NOCACHE_GROUP";
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_NOCACHE" - 1;
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_NOCACHE";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT"))
{
  group OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT" - 1;
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE"))
{
  group OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_GROUP";
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE" - 1;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_QSPI3PT_ISR_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR
} /* OS_QSPI3PT_ISR_VAR_ALL_GROUP */
"_OS_QSPI3PT_ISR_VAR_ALL_START" = "_lc_gb_OS_QSPI3PT_ISR_VAR_ALL_GROUP";
"_OS_QSPI3PT_ISR_VAR_ALL_END" = "_lc_ge_OS_QSPI3PT_ISR_VAR_ALL_GROUP" - 1;
"_OS_QSPI3PT_ISR_VAR_ALL_LIMIT" = "_lc_ge_OS_QSPI3PT_ISR_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_QSPI3PT_ISR
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_QSPI3PT_ISR_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0
group OS_XSignalIsr_OsCore0_VAR_ALL_GROUP(ordered, contiguous, fill, align=8)
{
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE_INIT )
if (exists(".data.OS_XSignalIsr_OsCore0_VAR"))
{
  group OS_XSignalIsr_OsCore0_VAR_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_XSignalIsr_OsCore0_VAR";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE_NOINIT )
if (exists(".bss.OS_XSignalIsr_OsCore0_VAR_NOINIT"))
{
  group OS_XSignalIsr_OsCore0_VAR_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_XSignalIsr_OsCore0_VAR_NOINIT";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_NOINIT" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_NOINIT_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_NOINIT_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_NOINIT_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_NOINIT" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_NOINIT_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_NOINIT";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_NOINIT_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_NOINIT_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE_ZERO_INIT )
if (exists(".bss.OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_bss") || exists(".data.OS_XSignalIsr_OsCore0_VAR_ZERO_INIT"))
{
  group OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_bss";
      select "[.]data.OS_XSignalIsr_OsCore0_VAR_ZERO_INIT";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_ZERO_INIT" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_ZERO_INIT" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_ZERO_INIT";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE_INIT )
if (exists(".zdata.OS_XSignalIsr_OsCore0_VAR_FAST"))
{
  group OS_XSignalIsr_OsCore0_VAR_FAST_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_FAST_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_XSignalIsr_OsCore0_VAR_FAST";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_FAST" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_FAST_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_FAST_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_FAST_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_FAST_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE_NOINIT )
if (exists(".zbss.OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT"))
{
  group OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE_ZERO_INIT )
if (exists(".zbss.OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_bss") || exists(".zdata.OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT"))
{
  group OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_bss";
      select "[.]zdata.OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE_INIT )
if (exists(".data.OS_XSignalIsr_OsCore0_VAR_NOCACHE"))
{
  group OS_XSignalIsr_OsCore0_VAR_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]data.OS_XSignalIsr_OsCore0_VAR_NOCACHE";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_NOCACHE" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_NOCACHE_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_NOCACHE" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_NOCACHE";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE_NOINIT )
if (exists(".bss.OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT"))
{
  group OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE_ZERO_INIT )
if (exists(".bss.OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_bss") || exists(".data.OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT"))
{
  group OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]bss.OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_bss";
      select "[.]data.OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE_INIT )
if (exists(".zdata.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE"))
{
  group OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zdata.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE_NOINIT )
if (exists(".zbss.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT"))
{
  group OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_NOINIT_LIMIT" = 0;
}
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_ISR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0 ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE_ZERO_INIT )
if (exists(".zbss.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_bss") || exists(".zdata.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT"))
{
  group OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP(ordered, contiguous, fill, align=8)
  {
    section "OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_SECTION" (blocksize=2, attributes=rw)
    {
      select "[.]zbss.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_bss";
      select "[.]zdata.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT";
    }
    reserved ".pad.OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT" (size=16);
  }
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_GROUP";
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_END" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT" - 1;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = "_lc_ub__pad_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT";
}
else
{
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_START" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_END" = 0;
  "_OS_XSignalIsr_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_LIMIT" = 0;
}
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0
} /* OS_XSignalIsr_OsCore0_VAR_ALL_GROUP */
"_OS_XSignalIsr_OsCore0_VAR_ALL_START" = "_lc_gb_OS_XSignalIsr_OsCore0_VAR_ALL_GROUP";
"_OS_XSignalIsr_OsCore0_VAR_ALL_END" = "_lc_ge_OS_XSignalIsr_OsCore0_VAR_ALL_GROUP" - 1;
"_OS_XSignalIsr_OsCore0_VAR_ALL_LIMIT" = "_lc_ge_OS_XSignalIsr_OsCore0_VAR_ALL_GROUP";

# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_ISR_XSIGNALISR_OSCORE0_NEAR_NOCACHE_ZERO_INIT
#endif


#ifdef OS_LINK_VAR
# undef OS_LINK_VAR
#endif

#ifdef OS_LINK_VAR_APP
# undef OS_LINK_VAR_APP
#endif

#ifdef OS_LINK_VAR_TASK
# undef OS_LINK_VAR_TASK
#endif

#ifdef OS_LINK_VAR_ISR
# undef OS_LINK_VAR_ISR
#endif

#ifdef OS_LINK_KERNEL_TRACE
# undef OS_LINK_KERNEL_TRACE
#endif

#ifdef OS_LINK_KERNEL_TRACE_FAR
# undef OS_LINK_KERNEL_TRACE_FAR
#endif

#ifdef OS_LINK_KERNEL_TRACE_NEAR
# undef OS_LINK_KERNEL_TRACE_NEAR
#endif

#ifdef OS_LINK_KERNEL_BARRIERS
# undef OS_LINK_KERNEL_BARRIERS
#endif

#ifdef OS_LINK_KERNEL_BARRIERS_FAR
# undef OS_LINK_KERNEL_BARRIERS_FAR
#endif

#ifdef OS_LINK_KERNEL_BARRIERS_NEAR
# undef OS_LINK_KERNEL_BARRIERS_NEAR
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS
# undef OS_LINK_KERNEL_CORESTATUS
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS_FAR
# undef OS_LINK_KERNEL_CORESTATUS_FAR
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS_NEAR
# undef OS_LINK_KERNEL_CORESTATUS_NEAR
#endif

#ifdef OS_LINK_VAR_KERNEL
# undef OS_LINK_VAR_KERNEL
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR
# undef OS_LINK_VAR_KERNEL_FAR
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE
# undef OS_LINK_VAR_KERNEL_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR
# undef OS_LINK_VAR_KERNEL_NEAR
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif


