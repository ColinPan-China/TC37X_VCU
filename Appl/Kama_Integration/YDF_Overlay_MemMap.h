/*This is the template of the APP YDF_OVERLAY memory mapping*/
/*Step1: Change YDF_OVERLAY to the App name*/
/*Step2: Change OsApplication_Platform_QM_C0 to the Os Application name*/

#ifndef MEMMAP_WRAPPER
    #define MEMMAP_ERROR
#endif

/**********************************************************************************************************************
*   code sections
**********************************************************************************************************************/
#ifdef YDF_OVERLAY_START_SEC_CODE
  #pragma section all "OS_OsApplication_Platform_QM_C0_PFI_Code"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_CODE_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_CODE_SECTION_OPEN */
  #define OS_CODE_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_CODE
#elif defined YDF_OVERLAY_STOP_SEC_CODE
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_CODE_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_CODE_SECTION_OPEN */
  #undef OS_CODE_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_CODE
#endif
/**********************************************************************************************************************
*   data sections
**********************************************************************************************************************/

#ifdef YDF_OVERLAY_START_SEC_VAR_CONST_BOOLEAN
  #pragma section all "OS_OsApplication_Platform_QM_C0_CalPFI_Const"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CONST_BOOLEAN
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CONST_BOOLEAN
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CONST_BOOLEAN
/*---------------------------------------------------------------------------------------------VAR_CONST  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CONST_8
  #pragma section all "OS_OsApplication_Platform_QM_C0_CalPFI_Const"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CONST_8
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CONST_8
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CONST_8
/*---------------------------------------------------------------------------------------------VAR_CONST  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CONST_16
  #pragma section all "OS_OsApplication_Platform_QM_C0_CalPFI_Const"
  #pragma section_name_with_symbol on
  #pragma align 2
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CONST_16
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CONST_16
  #pragma section all restore
  #pragma section_name_with_symbol off
  #pragma align restore
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CONST_16
/*---------------------------------------------------------------------------------------------VAR_CONST  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CONST_32
  #pragma section all "OS_OsApplication_Platform_QM_C0_CalPFI_Const"
  #pragma section_name_with_symbol on
  #pragma align 4
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CONST_32
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CONST_32
  #pragma section all restore
  #pragma section_name_with_symbol off
  #pragma align restore
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CONST_32
/*---------------------------------------------------------------------------------------------VAR_CONST  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CONST_64
  #pragma section all "OS_OsApplication_Platform_QM_C0_CalPFI_Const"
  #pragma section_name_with_symbol on
  #pragma align 8
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CONST_64
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CONST_64
  #pragma section all restore
  #pragma section_name_with_symbol off
  #pragma align restore
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CONST_64
/*---------------------------------------------------------------------------------------------VAR_CONST  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CONST_UNSPECIFIED
  #pragma section all "OS_OsApplication_Platform_QM_C0_CalPFI_Const"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CONST_UNSPECIFIED
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CONST_UNSPECIFIED
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CONST_UNSPECIFIED
  /*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CLEARED_BOOLEAN
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarCleared"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CLEARED_BOOLEAN
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CLEARED_BOOLEAN
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CLEARED_BOOLEAN
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CLEARED_8
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarCleared"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CLEARED_8
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CLEARED_8
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CLEARED_8
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CLEARED_16
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarCleared"
  #pragma section_name_with_symbol on
  #pragma align 2
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CLEARED_16
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CLEARED_16
  #pragma section all restore
  #pragma section_name_with_symbol off
  #pragma align restore
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CLEARED_16
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CLEARED_32
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarCleared"
  #pragma section_name_with_symbol on
  #pragma align 4
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CLEARED_32
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CLEARED_32
  #pragma section all restore
  #pragma section_name_with_symbol off
  #pragma align restore
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CLEARED_32
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CLEARED_64
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarCleared"
  #pragma section_name_with_symbol on
  #pragma align 8
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CLEARED_64
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CLEARED_64
  #pragma section all restore
  #pragma section_name_with_symbol off
  #pragma align restore
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CLEARED_64
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_CLEARED_UNSPECIFIED
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarCleared"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_CLEARED_UNSPECIFIED
#elif defined YDF_OVERLAY_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_CLEARED_UNSPECIFIED
  /*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_INIT_BOOLEAN
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarInit"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_INIT_BOOLEAN
#elif defined YDF_OVERLAY_STOP_SEC_VAR_INIT_BOOLEAN
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_INIT_BOOLEAN
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_INIT_8
  #pragma section all "osSectOsApplication_Platform_QM_C0_DSPR_VarFastInit"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_INIT_8
#elif defined YDF_OVERLAY_STOP_SEC_VAR_INIT_8
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_INIT_8
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_INIT_16
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarInit"
  #pragma section_name_with_symbol on
  #pragma align 2
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_INIT_16
#elif defined YDF_OVERLAY_STOP_SEC_VAR_INIT_16
  #pragma section all restore
  #pragma section_name_with_symbol off
  #pragma align restore
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_INIT_16
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_INIT_32
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarInit"
  #pragma section_name_with_symbol on
  #pragma align 4
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_INIT_32
#elif defined YDF_OVERLAY_STOP_SEC_VAR_INIT_32
  #pragma section all restore
  #pragma section_name_with_symbol off
  #pragma align restore
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_INIT_32
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_INIT_64
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarInit"
  #pragma section_name_with_symbol on
  #pragma align 8
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_INIT_64
#elif defined YDF_OVERLAY_STOP_SEC_VAR_INIT_64
  #pragma section all restore
  #pragma section_name_with_symbol off
  #pragma align restore
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_INIT_64
/*---------------------------------------------------------------------------------------------VAR  */
#elif defined YDF_OVERLAY_START_SEC_VAR_INIT_UNSPECIFIED
  #pragma section all "osSectOsApplication_Platform_QM_C0_DLMU_VarInit"
  #pragma section_name_with_symbol on
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifdef OS_VAR_SECTION_OPEN
    #error "MEMMAP sections may not be nested: close former section before opening a new one"
  #endif /* ifdef OS_VAR_SECTION_OPEN */
  #define OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_START_SEC_VAR_INIT_UNSPECIFIED
#elif defined YDF_OVERLAY_STOP_SEC_VAR_INIT_UNSPECIFIED
  #pragma section all restore
  #pragma section_name_with_symbol off
  #ifndef MEMMAP_ERROR
    #error "multiple MEMMAP sections are defined: the YDF_OVERLAY_MemMap.h file must be included after each section definition"
  #endif
  #undef MEMMAP_ERROR
  #ifndef OS_VAR_SECTION_OPEN
    #error "trying to close MEMMAP section which was not opened"
  #endif /* ifndef OS_VAR_SECTION_OPEN */
  #undef OS_VAR_SECTION_OPEN
  #undef YDF_OVERLAY_STOP_SEC_VAR_INIT_UNSPECIFIED
#endif

#ifndef MEMMAP_WRAPPER
  #ifdef MEMMAP_ERROR
    #error "MEMMAP_ERROR: No matching memory mapping definition found!"
  #endif
#endif
