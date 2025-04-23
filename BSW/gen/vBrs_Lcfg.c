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
 *            Module: vBRS
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: .\vBrs_Lcfg.c
 *   Generation Time: 2025-04-23 11:05:19
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Please note:
 *    The demo and example programs only show special aspects of the software. With regard to the fact
 *    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
 *    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
 *********************************************************************************************************************/

#define VBRS_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "vBrs_Lcfg.h"

#if (BRSHW_SOURCECODE_TEMPLATE_VERSION >= 0x0103u)
/*******************************************************************************
 Logical to phyiscal core assingment
*******************************************************************************/
extern Brs_AddressOfConstType BRSHW_DEFINE_STARTUP_STACK(0);
extern Brs_AddressOfConstType BRSHW_DEFINE_EXCVEC(0);
extern Brs_AddressOfConstType BRSHW_DEFINE_INTVEC(0);
extern Brs_AddressOfConstType BRSHW_DEFINE_STARTUP_STACK(1);
extern Brs_AddressOfConstType BRSHW_DEFINE_EXCVEC(1);
extern Brs_AddressOfConstType BRSHW_DEFINE_INTVEC(1);
extern Brs_AddressOfConstType BRSHW_DEFINE_STARTUP_STACK(2);
extern Brs_AddressOfConstType BRSHW_DEFINE_EXCVEC(2);
extern Brs_AddressOfConstType BRSHW_DEFINE_INTVEC(2);

const uint32 BrsMain_CoreConfig_Size = 3;

const brsMain_CoreType BrsMain_CoreConfig[3u] =
{
  {
    /* .LogicalCoreId     =  */ 0u,
    /* .PhysicalCoreId    =  */ 0u,
    /* .StartupStackLabel = */ (Brs_AddressOfConstType)(&BRSHW_DEFINE_STARTUP_STACK(0)),
    /* .CoreIsAsr         = */ ASR,
    /* .ExcVecLabel       = */ (Brs_AddressOfConstType)(&BRSHW_DEFINE_EXCVEC(0)),
    /* .IntVecLabel       = */ (Brs_AddressOfConstType)(&BRSHW_DEFINE_INTVEC(0))
  },
  {
    /* .LogicalCoreId     =  */ 1u,
    /* .PhysicalCoreId    =  */ 1u,
    /* .StartupStackLabel = */ (Brs_AddressOfConstType)(&BRSHW_DEFINE_STARTUP_STACK(1)),
    /* .CoreIsAsr         = */ ASR,
    /* .ExcVecLabel       = */ (Brs_AddressOfConstType)(&BRSHW_DEFINE_EXCVEC(1)),
    /* .IntVecLabel       = */ (Brs_AddressOfConstType)(&BRSHW_DEFINE_INTVEC(1))
  },
  {
    /* .LogicalCoreId     =  */ 2u,
    /* .PhysicalCoreId    =  */ 2u,
    /* .StartupStackLabel = */ (Brs_AddressOfConstType)(&BRSHW_DEFINE_STARTUP_STACK(2)),
    /* .CoreIsAsr         = */ ASR,
    /* .ExcVecLabel       = */ (Brs_AddressOfConstType)(&BRSHW_DEFINE_EXCVEC(2)),
    /* .IntVecLabel       = */ (Brs_AddressOfConstType)(&BRSHW_DEFINE_INTVEC(2))
  }
};
#endif /*BRSHW_SOURCECODE_TEMPLATE_VERSION>=0x0103u*/
