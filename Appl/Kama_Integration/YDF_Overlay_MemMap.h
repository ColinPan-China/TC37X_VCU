/*This is the template of the APP YDF_OVERLAY memory mapping*/
/*Step1: Change YDF_OVERLAY to the App name*/
/*Step2: Change OsApplication_Platform_QM_C0 to the Os Application name*/

#define MEMMAP_ERROR

#if defined(YDF_OVERLAY_START_SEC_VAR_CONST_8)
# undef YDF_OVERLAY_START_SEC_VAR_CONST_8                       /* PRQA S 0841 */ /* MD_MSR_Undef */
# define CAL_START_SEC_CALIBRATION_CONST_8BIT                              /* mapped to const 8 bit section */
#endif

#if defined(YDF_OVERLAY_STOP_SEC_VAR_CONST_8)
# undef YDF_OVERLAY_STOP_SEC_VAR_CONST_8                        /* PRQA S 0841 */ /* MD_MSR_Undef */
# define CAL_STOP_SEC_CALIBRATION_CONST_8BIT                                    /* default const stop section */
#endif


#ifdef MEMMAP_ERROR
# include "MemMap_Calibration.h"
#endif