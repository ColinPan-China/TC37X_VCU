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
 *            Module: EthTrcv
 *           Program: MSR_Vector_SLP4
 *          Customer: Zeekr Automobile (Ningbo Hangzhou Bay New Zoon) Co., Ltd
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC397_StepB
 *    License Scope : The usage is restricted to CBD2101138_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: EthTrcv_30_Generic.h
 *   Generation Time: 2025-09-04 10:40:14
 *           Project: TC37X_VCU - Version 1.0
 *          Delivery: CBD2101138_D00
 *      Tool Version: DaVinci Configurator  5.24.40 SP2
 *
 *
 *********************************************************************************************************************/


#ifndef ETHTRCV_30_GENERIC_H
# define ETHTRCV_30_GENERIC_H 
/*lint -e451 */ /* Suppress ID451 because MemMap.h cannot use a include guard */
/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
# include "EthTrcv_GeneralTypes.h"
# include "EthTrcv_30_Generic_Types.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ETHTRCV_30_GENERIC_INCLUDES>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  SYMBOLIC NAME VALUE DEFINES: CTRL
 *********************************************************************************************************************/
#define EthTrcvConf_EthTrcvConfig_EthTrcvConfig (0uL)


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* AUTOSAR 4.x Software Specification Version Information */
# define ETHTRCV_30_GEN_AR_RELEASE_MAJOR_VERSION                (0x04U)
# define ETHTRCV_30_GEN_AR_RELEASE_MINOR_VERSION                (0x01U)
# define ETHTRCV_30_GEN_AR_RELEASE_REVISION_VERSION             (0x01U)

/* Vector ID */
# define ETHTRCV_30_GEN_VENDOR_ID                                 (30U)

/* ETHTRCV ModuleId */
# define ETHTRCV_30_GEN_MODULE_ID                                 (73U)

/* ----- API service IDs ----- */
# define ETHTRCV_30_GEN_SID_INIT                                (0x01U) /*!< Service ID: EthTrcv_30_Gen_Init() */
# define ETHTRCV_30_GEN_SID_TRANSCEIVER_INIT                    (0x02U) /*!< Service ID: EthTrcv_30_Gen_TransceiverInit() */
# define ETHTRCV_30_GEN_SID_SET_TRANSCEIVER_MODE                (0x03U) /*!< Service ID: EthTrcv_30_Gen_SetTransceiverMode() */
# define ETHTRCV_30_GEN_SID_GET_TRANSCEIVER_MODE                (0x04U) /*!< Service ID: EthTrcv_30_Gen_GetTransceiverMode() */
# define ETHTRCV_30_GEN_SID_START_AUTO_NEG                      (0x05U) /*!< Service ID: EthTrcv_30_Gen_StartAutoNegotiation() */
# define ETHTRCV_30_GEN_SID_GET_LINK_STATE                      (0x06U) /*!< Service ID: EthTrcv_30_Gen_GetLinkState() */
# define ETHTRCV_30_GEN_SID_GET_BAUD_RATE                       (0x07U) /*!< Service ID: EthTrcv_30_Gen_GetBaudRate() */
# define ETHTRCV_30_GEN_SID_GET_DUPLEX_MODE                     (0x08U) /*!< Service ID: EthTrcv_30_Gen_GetDuplexMode() */
# define ETHTRCV_30_GEN_SID_GET_VERSION_INFO                    (0x09U) /*!< Service ID: EthTrcv_30_Gen_GetVersionInfo() */
# define ETHTRCV_30_GEN_SID_MAIN_FUNCTION                       (0x0CU) /*!< Service ID: EthTrcv_30_Gen_MainFunction() */
# define ETHTRCV_30_GEN_SID_SET_TRANSCEIVER_WAKEUP_MODE         (0x0DU) /*!< Service ID: EthTrcv_30_Gen_SetTransceiverWakeupMode() */
# define ETHTRCV_30_GEN_SID_GET_TRANSCEIVER_WAKEUP_MODE         (0x0EU) /*!< Service ID: EthTrcv_30_Gen_GetTransceiverWakeupMode() */
# define ETHTRCV_30_GEN_SID_CHECK_WAKEUP                        (0x0FU) /*!< Service ID: EthTrcv_30_Gen_CheckWakeup() */
# define ETHTRCV_30_GEN_SID_SET_PHY_TEST_MODE                   (0x10U) /*!< Service ID: EthTrcv_30_Gen_SetPhyTestMode() */
# define ETHTRCV_30_GEN_SID_SET_PHY_LOOPBACK_MODE               (0x11U) /*!< Service ID: EthTrcv_30_Gen_SetPhyLoopbackMode() */
# define ETHTRCV_30_GEN_SID_GET_PHY_SIGNAL_QUALITY              (0x12U) /*!< Service ID: EthTrcv_30_Gen_GetPhySignalQuality() */
# define ETHTRCV_30_GEN_SID_SET_PHY_TX_MODE                     (0x13U) /*!< Service ID: EthTrcv_30_Gen_SetPhyTxMode() */
# define ETHTRCV_30_GEN_SID_GET_CABLE_DIAGNOSTICS_RESULT        (0x14U) /*!< Service ID: EthTrcv_30_Gen_GetCableDiagnosticsResult() */
# define ETHTRCV_30_GEN_SID_GET_PHY_IDENTIFIER                  (0x15U) /*!< Service ID: EthTrcv_30_Gen_GetPhyIdentifier() */

/* ETHTRCV DET errors */
# define ETHTRCV_30_GEN_E_NO_ERROR                              (0x00U) /*!< No Error occurred */
# define ETHTRCV_30_GEN_E_INV_TRCV_IDX                          (0x01U) /*!< Error code: API service has been called with invalid transceiver index */
# define ETHTRCV_30_GEN_E_NOT_INITIALIZED                       (0x02U) /*!< Error code: API service used without module initialization */
# define ETHTRCV_30_GEN_E_INV_POINTER                           (0x03U) /*!< Error code: API service used with invalid pointer parameter */
# define ETHTRCV_30_GEN_E_INV_PARAM                             (0x04U) /*!< Error code: API service used with invalid value for parameter */
# define ETHTRCV_30_GEN_E_NOT_SUPPORTED                         (0x05U) /*!< Error code: API service not supported by the hardware */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ETHTRCV_30_GENERIC_GLOBAL_CONSTANT_MACROS>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ETHTRCV_30_GENERIC_GLOBAL_FUNCTION_MACROS>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ETHTRCV_30_GENERIC_GLOBALG_DATA_TYPES_AND_STRUCTURES>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK ETHTRCV_30_GENERIC_GLOBAL_DATA_PROTOTYPES>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  ETHTRCV_30_GEN DEFINES 
 *********************************************************************************************************************/

# define ETHTRCV_30_GEN_ENABLE_SET_TRCV_MODE         STD_ON
# define ETHTRCV_30_GEN_ENABLE_GET_TRCV_MODE         STD_ON
# define ETHTRCV_30_GEN_ENABLE_GET_LINK_STATE        STD_ON
# define ETHTRCV_30_GEN_ENABLE_GET_BAUD_RATE         STD_ON
# define ETHTRCV_30_GEN_ENABLE_START_AUTO_NEG        STD_ON
# define ETHTRCV_30_GEN_ENABLE_GET_DUPLEX_MODE       STD_ON
# define ETHTRCV_30_GEN_VERSION_INFO_API             STD_ON
# define ETHTRCV_30_GEN_WAKEUP_TYPE                  ETHTRCV_WAKEUP_NOT_SUPPORTED

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/    
# define ETHTRCV_30_GENERIC_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
      
/***********************************************************************************************************************
 *  EthTrcv_30_Generic_InitMemory
 *********************************************************************************************************************/
/*! \brief      Initializes global variables
 *  \param      void
 *  \return     void
 *  \context    Initialization
 *  \warning    Has to be called before usage of the module
 *  \note       NOT Re-entrant, synchronous
 *********************************************************************************************************************/
FUNC(void, ETHTRCV_30_GENERIC_CODE) EthTrcv_30_Generic_InitMemory( void );

/***********************************************************************************************************************
 *  EthTrcv_30_Generic_Init
 **********************************************************************************************************************/
/*! \brief      This API call stores the start address of the post build time configuration
 *              of the Ethernet Controller driver, resets all transceivers controlled by the
 *              driver and may be used to initialize the data structures.
 *  \param[in]  CfgPtr                  Pointer to post-build configuration or null pointer
 *  \return     void
 *  \warning    Has to be called before usage of the module
 *  \context    Initialization
 *  \note       Re-entrant, synchronous
 **********************************************************************************************************************/
 FUNC(void, ETHTRCV_30_GENERIC_CODE) EthTrcv_30_Generic_Init(
  P2CONST(EthTrcv_30_Generic_ConfigType, AUTOMATIC, ETHTRCV_30_GENERIC_CONST)  CfgPtr);
  
/***********************************************************************************************************************
 *  EthTrcv_30_Generic_MainFunction
 *********************************************************************************************************************/
/*! \brief      Handles the cyclic processes of the transceiver driver.
 *  \return     void
 *  \context    Task level
 *  \pre        Init must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(void, ETHTRCV_30_GENERIC_CODE) EthTrcv_30_Generic_MainFunction( void );

# define ETHTRCV_30_GENERIC_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 1 */ /* MD_MSR_19.1 */   

          
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES - ETHTRCV_30_GEN START
 *********************************************************************************************************************/
# define ETHTRCV_30_GEN_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  EthTrcv_30_Gen_InitMemory
 **********************************************************************************************************************/
/*! \brief      This function initializes global variables. It has to be called
 *              before any other calls to the Eth API
 *  \param      void
 *  \return     void
 *  \context    Initialization
 *  \warning    Has to be called before usage of the module
 *  \note       NOT Re-entrant, synchronous
 **********************************************************************************************************************/
FUNC(void, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_InitMemory(void);

/***********************************************************************************************************************
 *  EthTrcv_30_Gen_Init
 **********************************************************************************************************************/
/*! \brief      This API call stores the start address of the post build time configuration
 *              of the Ethernet Controller driver, resets all transceivers controlled by the
 *              driver and may be used to initialize the data structures.
 *  \param[in]  CfgPtr                  Pointer to post-build configuration or null pointer
 *  \return     void
 *  \warning    Has to be called before usage of the module
 *  \context    Initialization
 *  \note       Re-entrant, synchronous
 **********************************************************************************************************************/
FUNC(void, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_Init(
  P2CONST(EthTrcv_30_Generic_ConfigType, AUTOMATIC, ETHTRCV_30_GENERIC_CONST)  CfgPtr);

/***********************************************************************************************************************
 *  EthTrcv_30_Gen_TransceiverInit
 *********************************************************************************************************************/
/*! \brief      Initializes an Ethernet transceiver (register configuration)
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \param[in]  CfgIdx                Configuration index
 *  \return     E_OK                  : Transceiver configured\n
 *              E_NOT_OK              : Transceiver configuration failed
 *  \warning    Has to be called before usage of the module
 *  \context    Initialization
 *  \note       - Re-entrant, synchronous\n
 *              - If API optimization is enabled, parameter TrcvIdx is void
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_TransceiverInit(
  uint8 TrcvIdx,
  uint8 CfgIdx);
  
# if ( ETHTRCV_30_GEN_ENABLE_SET_TRCV_MODE == STD_ON )
/***********************************************************************************************************************
 *  EthTrcv_30_Gen_SetTransceiverMode
 *********************************************************************************************************************/
/*! \brief      Set transceiver mode
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \param[in]  TrcvMode              Transceiver mode
 *  \return     E_OK                  : Transceiver mode changed\n
 *              E_NOT_OK              : Transceiver mode change failed
 *  \context    Interrupt or task level
 *  \note       - Re-entrant, synchronous\n
 *              - If API optimization is enabled, parameter TrcvIdx is void
 *  \pre        Init and TransceiverInit must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_SetTransceiverMode(
  uint8            TrcvIdx,
  EthTrcv_ModeType TrcvMode);
# endif /* ETHTRCV_30_GEN_ENABLE_SET_TRCV_MODE */

# if ( ETHTRCV_30_GEN_ENABLE_GET_TRCV_MODE == STD_ON )
/***********************************************************************************************************************
 *  EthTrcv_30_Gen_GetTransceiverMode
 *********************************************************************************************************************/
/*! \brief      Get transceiver mode
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \param[in]  TrcvModePtr           Pointer for transceiver mode
 *  \return     E_OK                  : Transceiver mode evaluated\n
 *              E_NOT_OK              : Transceiver mode evaluation failed
 *  \context    Interrupt or task level
 *  \note       - Re-entrant, synchronous\n
 *              - If API optimization is enabled, parameter TrcvIdx is void
 *  \pre        Init and TransceiverInit must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_GetTransceiverMode(
        uint8                                                     TrcvIdx,
  P2VAR(EthTrcv_ModeType, AUTOMATIC, ETHTRCV_30_GEN_APPL_DATA)  TrcvModePtr);
# endif /* ETHTRCV_30_GEN_ENABLE_GET_TRCV_MODE */

# if ( ETHTRCV_30_GEN_ENABLE_START_AUTO_NEG == STD_ON )
/***********************************************************************************************************************
 *  EthTrcv_30_Gen_StartAutoNegotiation
 *********************************************************************************************************************/
/*! \brief      Start automatic mode negotiation (10/100MBit, Full/Half-Duplex)
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \return     E_OK                  : Auto negotiation started\n
 *              E_NOT_OK              : Auto negotiation start failed
 *  \context    Interrupt or task level
 *  \note       - Re-entrant, synchronous\n
 *              - If API optimization is enabled, parameter TrcvIdx is void
 *  \pre        Init and TransceiverInit must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_StartAutoNegotiation(
  uint8  TrcvIdx);
# endif /* ETHTRCV_30_GEN_ENABLE_START_AUTO_NEG */

# if ( ETHTRCV_30_GEN_ENABLE_GET_LINK_STATE == STD_ON )
/**********************************************************************************************************************
 *  EthTrcv_30_Gen_GetLinkState
 *********************************************************************************************************************/
/*! \brief      Get transceiver link state
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \param[out] LinkStatePtr          Pointer for link state value
 *  \return     E_OK                  : Link state read\n
 *              E_NOT_OK              : Link state read failed
 *  \context    Interrupt or task level
 *  \note       - Re-entrant, synchronous\n
 *              - If API optimization is enabled, parameter TrcvIdx is void
 *  \pre        Init and TransceiverInit must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_GetLinkState(
        uint8                                                          TrcvIdx,
  P2VAR(EthTrcv_LinkStateType, AUTOMATIC, ETHTRCV_30_GEN_APPL_DATA)  LinkStatePtr);
# endif /* ETHTRCV_30_GEN_ENABLE_GET_LINK_STATE */

# if ( ETHTRCV_30_GEN_ENABLE_GET_BAUD_RATE == STD_ON )
/**********************************************************************************************************************
 *  EthTrcv_30_Gen_GetBaudRate
 *********************************************************************************************************************/
/*! \brief      Get transceiver baud rate
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \param[out] BaudRatePtr           pointer for baud rate value
 *  \return     E_OK                  : Baud rate read\n
 *              E_NOT_OK              : Baud rate read failed
 *  \context    Interrupt or task level
 *  \note       - Re-entrant, synchronous\n
 *              - If API optimization is enabled, parameter TrcvIdx is void
 *  \pre        Init and TransceiverInit must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_GetBaudRate(
        uint8                                                         TrcvIdx,
  P2VAR(EthTrcv_BaudRateType, AUTOMATIC, ETHTRCV_30_GEN_APPL_DATA)  BaudRatePtr);
# endif /* ETHTRCV_30_GEN_ENABLE_GET_BAUD_RATE */

# if ( ETHTRCV_30_GEN_ENABLE_GET_DUPLEX_MODE == STD_ON )
/***********************************************************************************************************************
 *  EthTrcv_30_Gen_GetDuplexMode
 *********************************************************************************************************************/
/*! \brief      Get transceiver duplex mode
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \param[out] DuplexModePtr         Pointer for duplex mode value
 *  \return     E_OK                  : Duplex mode read\n
 *              E_NOT_OK              : Duplex mode read failed
 *  \context    Interrupt or task level
 *  \note       - Re-entrant, synchronous\n
 *              - If API optimization is enabled, parameter TrcvIdx is void
 *  \pre        Init and TransceiverInit must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_GetDuplexMode(
        uint8                                                                             TrcvIdx,
  P2VAR(EthTrcv_DuplexModeType, ETHTRCV_30_GEN_APPL_DATA, ETHTRCV_30_GEN_APPL_DATA) DuplexModePtr);
# endif /* ETHTRCV_30_GEN_ENABLE_GET_DUPLEX_MODE */

/**********************************************************************************************************************
 *  EthTrcv_30_Gen_SetPhyTestMode()
 *********************************************************************************************************************/
/*! \brief       Sets the phy test mode
 *  \details     This function activates the given phy test mode
 *  \param[in]   TrcvIdx               Zero based index of the transceiver
 *               TestMode              Test mode to be activated
 *  \return      E_OK     - success
 *  \return      E_NOT_OK - Function has been called with invalid parameter or at least one of the hardware operations
 *                          (read/write) has failed.
 *  \pre         Module is initialized.
 *  \pre         EthTrcv_30_Gen_TransceiverInit() has been called for the transceiver with index TrcvIdx
 *  \context     ANY
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_SetPhyTestMode(
    uint8 TrcvIdx,
    EthTrcv_PhyTestModeType TestMode);

/**********************************************************************************************************************
 *  EthTrcv_30_Gen_SetPhyLoopbackMode()
 *********************************************************************************************************************/
/*! \brief       Sets the phy loopback mode
 *  \details     This function activates the given phy loopback mode
 *  \param[in]   TrcvIdx               Zero based index of the transceiver
 *               LoopbackMode          Loopback mode to be activated
 *  \return      E_OK     - success
 *  \return      E_NOT_OK - Function has been called with invalid parameter or at least one of the hardware operations
 *                          (read/write) has failed.
 *  \pre         Module is initialized.
 *  \pre         EthTrcv_30_Gen_TransceiverInit() has been called for the transceiver with index TrcvIdx
 *  \context     ANY
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_SetPhyLoopbackMode(
    uint8 TrcvIdx,
    EthTrcv_PhyLoopbackModeType LoopbackMode);

/**********************************************************************************************************************
 *  EthTrcv_30_Gen_GetPhySignalQuality()
 *********************************************************************************************************************/
/*! \brief       Gets the signal quality
 *  \details     This function obtains the current signal quality of the link of the indexed transceiver
 *  \param[in]   TrcvIdx               Zero based index of the transceiver
 *  \param[out]  SignalQualityPtr      Pointer to the memory where the signal quality in percent shall be stored
 *  \return      E_OK     - success
 *  \return      E_NOT_OK - Function has been called with invalid parameter or at least one of the hardware operations
 *                          (read/write) has failed.
 *  \pre         Module is initialized.
 *  \pre         EthTrcv_30_Gen_TransceiverInit() has been called for the transceiver with index TrcvIdx
 *  \context     ANY
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_GetPhySignalQuality(
    uint8 TrcvIdx,
    P2VAR(uint8, AUTOMATIC, AUTOMATIC) SignalQualityPtr);

/**********************************************************************************************************************
 *  EthTrcv_30_Gen_SetPhyTxMode()
 *********************************************************************************************************************/
/*! \brief       Activates a given Tx Mode
 *  \details     This function activates the given transmission mode
 *  \param[in]   TrcvIdx               Zero based index of the transceiver
 *  \param[in]   TxMode                Transmission mode to be activated
 *  \return      E_OK     - success
 *  \return      E_NOT_OK - Function has been called with invalid parameter or at least one of the hardware operations
 *                          (read/write) has failed.
 *  \pre         Module is initialized.
 *  \pre         EthTrcv_30_Gen_TransceiverInit() has been called for the transceiver with index TrcvIdx
 *  \pre         The transmission mode to be activated is supported by the hardware
 *  \context     ANY
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_SetPhyTxMode(
    uint8 TrcvIdx,
    EthTrcv_PhyTxModeType TxMode);

/**********************************************************************************************************************
 *  EthTrcv_30_Gen_GetCableDiagnosticsResult()
 *********************************************************************************************************************/
/*! \brief       Retrieves cable diagnostics result
 *  \details     This function retrieves the cable diagnostics result of a given transceiver
 *  \param[in]   TrcvIdx               Zero based index of the transceiver
 *  \param[out]  CableDiagResultPtr      Pointer to the memory where the signal quality in percent shall be stored
 *  \return      E_OK     - success
 *  \return      E_NOT_OK - Function has been called with invalid parameter or at least one of the hardware operations
 *                          (read/write) has failed.
 *  \pre         Module is initialized.
 *  \pre         EthTrcv_30_Gen_TransceiverInit() has been called for the transceiver with index TrcvIdx
 *  \context     ANY
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_GetCableDiagnosticsResult(
    uint8 TrcvIdx,
    P2VAR(EthTrcv_CableDiagResultType, AUTOMATIC, AUTOMATIC) CableDiagResultPtr);

/**********************************************************************************************************************
 *  EthTrcv_30_Gen_GetPhyIdentifier
 *********************************************************************************************************************/
/*! \brief       Obtains PHY identifier
 *  \details     This function obtains the PHY identifier of the Ethernet Transceiver according to IEEE 802.3-2015 chapter
 *               22.2.4.3.1 PHY Identifier.
 *  \param[in]   TrcvIdx             Zero based index of the transceiver
 *  \param[out]  OrgUniqueIdPtr      Pointer to the memory where the Organizational Unique Identifier shall be stored
 *  \param[out]  ModelNrPtr          Pointer to the memory where the Manufacturer's Model Number shall be stored
 *  \param[out]  RevisionNrPtr       Pointer to the memory where the Revision Number shall be stored
 *  \return      E_OK     - success
 *  \return      E_NOT_OK - Function has been called with invalid parameter or at least one of the hardware operations
 *                          (read/write) has failed.
 *  \pre         Module is initialized.
 *  \pre         EthTrcv_30_Gen_TransceiverInit() has been called for the transceiver with index TrcvIdx
 *  \context     ANY
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_GetPhyIdentifier(
    uint8 TrcvIdx,
    P2VAR(uint32, AUTOMATIC, AUTOMATIC) OrgUniqueIdPtr,
    P2VAR(uint8, AUTOMATIC, AUTOMATIC) ModelNrPtr,
    P2VAR(uint8, AUTOMATIC, AUTOMATIC) RevisionNrPtr);

#if ( ETHTRCV_WAKEUP_NOT_SUPPORTED != ETHTRCV_30_GEN_WAKEUP_TYPE )
/***********************************************************************************************************************
 *  EthTrcv_30_Gen_SetTransceiverWakeupMode
 *********************************************************************************************************************/
/*! \brief      Allows to enable/disable the transceiver wakeup or clear any occurred wakeup reason.
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \param[in]  TrcvWakeupMode        Operation that shall be performed:
 *                                    - ETHTRCV_WUM_DISABLE  Disable the transceiver wakeup
 *                                    - ETHTRCV_WUM_ENABLE   Enable the transceiver wakeup
 *                                    - ETHTRCV_WUM_CLEAR    Clear wakeup reason
 *  \return     E_OK                  : Operation successfully performed.\n
 *              E_NOT_OK              : Operation could not be performed successfully due to e.g. invalid input data.
 *  \context    Interrupt or task level
 *  \note       - Re-entrant, synchronous\n
 *  \pre        Init must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_SetTransceiverWakeupMode(
        uint8                  TrcvIdx,
        EthTrcv_WakeupModeType TrcvWakeupMode);

/***********************************************************************************************************************
 *  EthTrcv_30_Gen_GetTransceiverWakeupMode
 *********************************************************************************************************************/
/*! \brief      Allows to retrieve if the transceiver wakeup is enable/disable.
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \param[out] TrcvWakeupMode        Wakeup mode the transceiver is currently set to:
 *                                    - ETHTRCV_WUM_DISABLE  Transceiver wakeup disabled
 *                                    - ETHTRCV_WUM_ENABLE   Transceiver wakeup enabled
 *  \return     E_OK                  : Wakeup mode successfully retrieved.\n
 *              E_NOT_OK              : Wakeup mode could not be retrieved successfully due to e.g. invalid input data.
 *  \context    Interrupt or task level
 *  \note       - Re-entrant, synchronous\n
 *  \pre        Init must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_GetTransceiverWakeupMode(
              uint8                                                       TrcvIdx,
  P2VAR(EthTrcv_WakeupModeType, AUTOMATIC, ETHTRCV_30_GEN_APPL_DATA)  TrcvWakeupMode);

/***********************************************************************************************************************
 *  EthTrcv_30_Gen_CheckWakeup
 *********************************************************************************************************************/
/*! \brief      Performs a wakeup check.
 *  \param[in]  TrcvIdx               Zero based index of the transceiver
 *  \return     E_OK                  : Wakeup check successfully performed.\n
 *              E_NOT_OK              : Wakeup check could not be performed successfully due to e.g. invalid input data.
 *  \context    Interrupt or task level
 *  \note       - Re-entrant, synchronous\n
 *  \pre        Init must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(Std_ReturnType, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_CheckWakeup(
         uint8  TrcvIdx);

# if ( ETHTRCV_WAKEUP_BY_POLLING == ETHTRCV_30_GEN_WAKEUP_TYPE )
/***********************************************************************************************************************
 *  EthTrcv_30_Gen_MainFunction
 *********************************************************************************************************************/
/*! \brief      Handles the cyclic processes of the transceiver driver.
 *  \return     void
 *  \context    Task level
 *  \pre        Init must be called before, otherwise a DET is thrown (if enabled)
 *********************************************************************************************************************/
FUNC(void, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_MainFunction( void );
# endif /* ETHTRCV_WAKEUP_BY_POLLING == ETHTRCV_30_GEN_WAKEUP_TYPE */

# endif /* ETHTRCV_WAKEUP_NOT_SUPPORTED != ETHTRCV_30_GEN_WAKEUP_TYPE */

# if ( ETHTRCV_30_GEN_VERSION_INFO_API == STD_ON )
/***********************************************************************************************************************
 *  EthTrcv_30_Gen_GetVersionInfo
 *********************************************************************************************************************/
/*! \brief      Get driver version
 *  \param[out] VersionInfoPtr        Returns the following version information:\n
 *                                     - Vendor ID\n
 *                                     - Module ID\n
 *                                     - Software major version\n
 *                                     - Software minor version\n
 *                                     - Software patch version
 *  \return     void
 *  \context    Interrupt or task level
 *  \note       Re-entrant, synchronous
 *********************************************************************************************************************/
FUNC(void, ETHTRCV_30_GEN_CODE) EthTrcv_30_Gen_GetVersionInfo(
  P2CONST(Std_VersionInfoType, AUTOMATIC, ETHTRCV_30_GEN_CONST)  VersionInfoPtr);
# endif /* ETHTRCV_30_GEN_VERSION_INFO_API == STD_ON */

# define ETHTRCV_30_GEN_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 1 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES - ETHTRCV_30_GEN END
 *********************************************************************************************************************/

 
#if 0
#endif


/* PRQA L:TOTAL_MACROS_EXCEEDED */
#endif /* ETHTRCV_30_GENERIC_H */	

/**********************************************************************************************************************
 *  END OF FILE: EthTrcv_30_Generic.h
 *********************************************************************************************************************/

