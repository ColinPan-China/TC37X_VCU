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
 *            Module: Eth_30_Tc3xx
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Eth_30_Tc3xx_Irq.c
 *   Generation Time: 2025-09-04 16:09:33
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


/* PRQA S 0810 EOF */ /* MD_MSR_1.1_810 */
/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */
/* PRQA S 0777 EOF */ /* MD_MSR_5.1_777 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */

#define ETH_30_TC3XX_IRQ_SOURCE

/**********************************************************************************************************************
 *  INCLUDE
 *********************************************************************************************************************/
#include "Eth_30_Tc3xx_IrqHandler_Int.h"
#include "Os.h"

/**********************************************************************************************************************
 *  LOCAL MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  RAM VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  ROM VARIABLES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION DEFINITIONS
 *********************************************************************************************************************/
#define ETH_30_TC3XX_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  EthIsr_EthCtrlConfig_ETHSR2_ISR
 **********************************************************************************************************************/
/*! \brief       Handles a interrupt related to the EthCtrlConfig Ethernet controller
 *  \details     Function processes the interrupt event handlers and - if configured - pre- and post-ISR-User-Functions.
 *               Following interrupt events of the controller are processed:
 *               - Pre-ISR-User-Function: not configured
 *               - Ethernet Tx interrupt queue 0: Eth_30_Tc3xx_IrqHdlrQ0Tx()
 *               - Post-ISR-User-Function: not configured
 *  \context     ISR2
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \pre         -
 **********************************************************************************************************************/
ISR( EthIsr_EthCtrlConfig_ETHSR2_ISR ) /* PRQA S 3408 */ /* MD_Eth_30_Tc3xx_3408 */
{
  uint8 localCtrlIdx = Eth_30_Tc3xx_TransformToLocalCtrlIdx(EthConf_EthCtrlConfig_EthCtrlConfig);
  uint8 isrIdx       = 0u;
  Eth_30_Tc3xx_ProcessIsr(localCtrlIdx, isrIdx);
} /* EthIsr_EthCtrlConfig_ETHSR2_ISR() */

/***********************************************************************************************************************
 *  EthIsr_EthCtrlConfig_ETHSR6_ISR
 **********************************************************************************************************************/
/*! \brief       Handles a interrupt related to the EthCtrlConfig Ethernet controller
 *  \details     Function processes the interrupt event handlers and - if configured - pre- and post-ISR-User-Functions.
 *               Following interrupt events of the controller are processed:
 *               - Pre-ISR-User-Function: not configured
 *               - Ethernet Rx interrupt queue 0: Eth_30_Tc3xx_IrqHdlrQ0Rx()
 *               - Post-ISR-User-Function: not configured
 *  \context     ISR2
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \pre         -
 **********************************************************************************************************************/
ISR( EthIsr_EthCtrlConfig_ETHSR6_ISR ) /* PRQA S 3408 */ /* MD_Eth_30_Tc3xx_3408 */
{
  uint8 localCtrlIdx = Eth_30_Tc3xx_TransformToLocalCtrlIdx(EthConf_EthCtrlConfig_EthCtrlConfig);
  uint8 isrIdx       = 1u;
  Eth_30_Tc3xx_ProcessIsr(localCtrlIdx, isrIdx);
} /* EthIsr_EthCtrlConfig_ETHSR6_ISR() */


#define ETH_30_TC3XX_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* sub-module specific MISRA deviations:
 MD_Eth_30_Tc3xx_3408
      Reason:     Interrupt service routines must not have external linkage. Os will declare them as soon as they
                  are configured in Os.
      Risk:       Compiler/linker warnings/errors could occur.
      Prevention: Check if compiler/linker warnings/errors occur and derive actions dependent on these.
 */
/**********************************************************************************************************************
 *  END OF FILE: Eth_30_Tc3xx_Irq.c
 *********************************************************************************************************************/


