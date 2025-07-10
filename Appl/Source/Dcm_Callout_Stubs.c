#include "Dcm.h"

FUNC(Dcm_ReturnReadMemoryType, DCM_CALLOUT_CODE) Dcm_ReadMemory(
  Dcm_OpStatusType OpStatus,
  uint8 MemoryIdentifier,
  uint32 MemoryAddress,
  uint32 MemorySize,
  Dcm_MsgType MemoryData,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
  {
	  return 0;
  }
  
  FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SetProgConditions(
  Dcm_ProgConditionsPtrType progConditions
  )
  {
    uint32 *pBootRefshFlg = (uint32*)(0XB0025000);
    *pBootRefshFlg = 0x5AA5A55A;
    Mcu_PerformReset();
	  return 0;
  }
  
  FUNC(Dcm_ReturnWriteMemoryType, DCM_CALLOUT_CODE) Dcm_WriteMemory(
  Dcm_OpStatusType OpStatus,
  uint8 MemoryIdentifier,
  uint32 MemoryAddress,
  uint32 MemorySize,
  Dcm_MsgType MemoryData,
  Dcm_NegativeResponseCodePtrType ErrorCode
  )
  {
	  return 0;
  }
  
  FUNC(Dcm_EcuStartModeType, DCM_CALLOUT_CODE) Dcm_GetProgConditions(
  Dcm_ProgConditionsPtrType progConditions
  )
  {
	  return 0;
  }
  
  FUNC(void, DCM_CALLOUT_CODE) Dcm_Confirmation(
  Dcm_IdContextType idContext,
  PduIdType dcmRxPduId,
  Dcm_ConfirmationStatusType status
  )
  {
	  return;
  }
