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
 *            Module: J1939Tp
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: J1939Tp_PBcfg.h
 *   Generation Time: 2025-09-17 15:11:04
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#if !defined (J1939TP_PBCFG_H)
# define J1939TP_PBCFG_H

/**********************************************************************************************************************
  MISRA JUSTIFICATION
**********************************************************************************************************************/

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

# include "J1939Tp_Cfg.h"
# include "J1939Tp_Types.h"


/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPBDataSwitches  J1939Tp Data Switches  (POST_BUILD)
  \brief  These defines are used to deactivate data and their processing.
  \{
*/ 
#define J1939TP_PBCONFIG                                                                            STD_OFF  /**< Deactivateable: 'J1939Tp_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define J1939TP_LTCONFIGIDXOFPBCONFIG                                                               STD_OFF  /**< Deactivateable: 'J1939Tp_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define J1939TP_PCCONFIGIDXOFPBCONFIG                                                               STD_OFF  /**< Deactivateable: 'J1939Tp_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPBIsReducedToDefineDefines  J1939Tp Is Reduced To Define Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define is STD_ON else STD_OFF.
  \{
*/ 
#define J1939TP_ISDEF_LTCONFIGIDXOFPBCONFIG                                                         STD_OFF
#define J1939TP_ISDEF_PCCONFIGIDXOFPBCONFIG                                                         STD_OFF
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPBEqualsAlwaysToDefines  J1939Tp Equals Always To Defines (POST_BUILD)
  \brief  If all values in a CONST array or an element in a CONST array of structs are equal, the define contains the always equals value.
  \{
*/ 
#define J1939TP_EQ2_LTCONFIGIDXOFPBCONFIG                                                           
#define J1939TP_EQ2_PCCONFIGIDXOFPBCONFIG                                                           
/** 
  \}
*/ 



/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 Macros_3453 */  /* MD_MSR_FctLikeMacro */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  J1939TpPBGetRootDataMacros  J1939Tp Get Root Data Macros (POST_BUILD)
  \brief  These macros are used to get data pointers of root data.
  \{
*/ 
#define J1939Tp_GetLTConfigIdxOfPBConfig()                                                            /**< Deactivateable: 'J1939Tp_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define J1939Tp_GetPCConfigIdxOfPBConfig()                                                            /**< Deactivateable: 'J1939Tp_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 

/** 
  \defgroup  J1939TpPBHasMacros  J1939Tp Has Macros (POST_BUILD)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define J1939Tp_HasPBConfig()                                                                         /**< Deactivateable: 'J1939Tp_PBConfig' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define J1939Tp_HasLTConfigIdxOfPBConfig()                                                            /**< Deactivateable: 'J1939Tp_PBConfig.LTConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
#define J1939Tp_HasPCConfigIdxOfPBConfig()                                                            /**< Deactivateable: 'J1939Tp_PBConfig.PCConfigIdx' Reason: 'the module configuration is VARIANT_PRE_COMPILE.' */
/** 
  \}
*/ 

  /* PRQA L:Macros_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


#endif  /* J1939TP_PBCFG_H */

/**********************************************************************************************************************
  END OF FILE: J1939Tp_PBcfg.h
**********************************************************************************************************************/

