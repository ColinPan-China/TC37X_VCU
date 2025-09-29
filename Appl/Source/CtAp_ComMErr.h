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
 *  Filename:           CtAp_ComMErr.h
 *  File Creation Date: 21-May-2025
 *  Model Name:         CtAp_ComMErr
 *  Model Version:      3.0.0
 *  Model Author:       Mike Ni - Fri Aug 16 09:50:02 2024
 *  Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 *  C/C++ source code generated on : Wed May 21 17:16:52 2025
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run

 *  MODIFICATION HISTORY:
 *  Last Saved Modification:  JackyWang - Wed May 21 17:16:38 2025
 *
 *
 ********************************************************************************/
#ifndef RTW_HEADER_CtAp_ComMErr_h_
#define RTW_HEADER_CtAp_ComMErr_h_
#ifndef CtAp_ComMErr_COMMON_INCLUDES_
#define CtAp_ComMErr_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_CtAp_ComMErr.h"
#endif                                 /* CtAp_ComMErr_COMMON_INCLUDES_ */

#include "CtAp_ComMErr_types.h"
#include "Rte_Type.h"
#include <string.h>

/* Includes for objects with custom storage classes */
#include "CtAp_ComMErr_Glb.h"
#include "CtAp_ComMErr_Cal.h"

/* Exported data define */

/* Definition for custom storage class: Define_AtomAutoSar */
#define ComMErr_Cycle                  10U                       /* Referenced by: '<S4>/Constant12' */

/* PublicStructure Variables for Internal Data, for system '<S4>/ATOM_TimeCnt' */
typedef struct {
  uint16_T Delay_DSTATE;               /* '<S7>/Delay' */
} ARID_DEF_ATOM_TimeCnt_CtAp_Co_T;

/* PublicStructure Variables for Internal Data, for system '<Root>' */
typedef struct {
  ARID_DEF_ATOM_TimeCnt_CtAp_Co_T ARID_DEF_ATOM_TimeCnt;/* '<S4>/ATOM_TimeCnt' */
  dt_ComM_CHCANBusOffDTCInfo RTE_P_ComM_CANBusOffInfo_Bus_te;
     /* '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffDTCInfo_Bus' */
  dt_ComM_CHCANBusOffInfo RTE_P_ComM_CANBusOffInfo_B_j3yp;
        /* '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_CHCANBusOffInfo_Bus' */
  dt_ComM_DCCANBusOffDTCInfo RTE_P_ComM_CANBusOffInfo_B_dmwg;
     /* '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffDTCInfo_Bus' */
  dt_ComM_DCCANBusOffInfo RTE_P_ComM_CANBusOffInfo_B_mak1;
        /* '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_DCCANBusOffInfo_Bus' */
  dt_ComM_EPTCANBusOffDTCInfo RTE_P_ComM_CANBusOffInfo_B_p4x0;
    /* '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffDTCInfo_Bus' */
  dt_ComM_EPTCANBusOffInfo RTE_P_ComM_CANBusOffInfo_B_fuxn;
       /* '<Root>/RTE_P_ComM_CANBusOffInfo_Bus_tec_ComM_EPTCANBusOffInfo_Bus' */
  uint8_T Switch1;                     /* '<S19>/Switch1' */
  uint8_T Switch3;                     /* '<S19>/Switch3' */
  uint8_T Switch1_mlrk;                /* '<S18>/Switch1' */
  uint8_T Switch3_mqb0;                /* '<S18>/Switch3' */
  uint8_T Switch1_ixdl;                /* '<S17>/Switch1' */
  uint8_T Switch3_hnp2;                /* '<S17>/Switch3' */
  boolean_T Switch6;                   /* '<S19>/Switch6' */
  boolean_T Switch6_o0ha;              /* '<S18>/Switch6' */
  boolean_T Switch6_fhr2;              /* '<S17>/Switch6' */
} ARID_DEF_CtAp_ComMErr_T;

/* PublicStructure Variables for Internal Data */
#define CtAp_ComMErr_START_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"

extern ARID_DEF_CtAp_ComMErr_T CtAp_ComMErr_ARID_DEF;

#define CtAp_ComMErr_STOP_SEC_VAR_NOINIT_8
#include "CtAp_ComMErr_MemMap.h"

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CtAp_ComMErr'
 * '<S1>'   : 'CtAp_ComMErr/DocBlock'
 * '<S2>'   : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys'
 * '<S3>'   : 'CtAp_ComMErr/R_ComMErr_Init'
 * '<S4>'   : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys'
 * '<S5>'   : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_COMDTCSys'
 * '<S6>'   : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_COMLostSys'
 * '<S7>'   : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/ATOM_TimeCnt'
 * '<S8>'   : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoEnTimMonR1'
 * '<S9>'   : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoEnTimMonR2'
 * '<S10>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoEnTimMonR3'
 * '<S11>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoTiAndMonR1'
 * '<S12>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoTiAndMonR2'
 * '<S13>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoTiAndMonR3'
 * '<S14>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoEnTimMonR1/ErrorHandleSysU16'
 * '<S15>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoEnTimMonR2/ErrorHandleSysU16'
 * '<S16>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoEnTimMonR3/ErrorHandleSysU16'
 * '<S17>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoTiAndMonR1/ErrorHandleSysU16'
 * '<S18>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoTiAndMonR2/ErrorHandleSysU16'
 * '<S19>'  : 'CtAp_ComMErr/R_ComMErr_Cyclic_10ms_sys/ComM_BusOffSys/NoTiAndMonR3/ErrorHandleSysU16'
 */

/*-
 * Requirements for '<Root>': CtAp_ComMErr

 *
 * Inherited requirements for '<S2>/ComM_BusOffSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:4039
 *  2. VCU_SW_Requirements_Specification.slreqx:4040
 *  3. VCU_SW_Requirements_Specification.slreqx:4041
 *  4. VCU_SW_Requirements_Specification.slreqx:4052
 *  5. VCU_SW_Requirements_Specification.slreqx:4053
 *  6. VCU_SW_Requirements_Specification.slreqx:4054
 *  7. VCU_SW_Requirements_Specification.slreqx:4065
 *  8. VCU_SW_Requirements_Specification.slreqx:4066
 *  9. VCU_SW_Requirements_Specification.slreqx:4073
 *  10. VCU_SW_Requirements_Specification.slreqx:4078
 *  11. VCU_SW_Requirements_Specification.slreqx:4079
 *  12. VCU_SW_Requirements_Specification.slreqx:74185
 *  13. VCU_SW_Requirements_Specification.slreqx:74186
 *  14. VCU_SW_Requirements_Specification.slreqx:74187
 *  15. VCU_SW_Requirements_Specification.slreqx:74193
 *  16. VCU_SW_Requirements_Specification.slreqx:74224
 *  17. VCU_SW_Requirements_Specification.slreqx:74225
 *  18. VCU_SW_Requirements_Specification.slreqx:74232
 *
 * Inherited requirements for '<S2>/ComM_COMLostSys':
 *  1. VCU_SW_Requirements_Specification.slreqx:4017
 *  2. VCU_SW_Requirements_Specification.slreqx:4018
 *  3. VCU_SW_Requirements_Specification.slreqx:4019
 *  4. VCU_SW_Requirements_Specification.slreqx:4020
 *  5. VCU_SW_Requirements_Specification.slreqx:4021
 *  6. VCU_SW_Requirements_Specification.slreqx:4022
 *  7. VCU_SW_Requirements_Specification.slreqx:4023
 *  8. VCU_SW_Requirements_Specification.slreqx:15285
 *  9. VCU_SW_Requirements_Specification.slreqx:15286
 *  10. VCU_SW_Requirements_Specification.slreqx:15287
 *  11. VCU_SW_Requirements_Specification.slreqx:4024
 *  12. VCU_SW_Requirements_Specification.slreqx:4025
 *  13. VCU_SW_Requirements_Specification.slreqx:4026
 *  14. VCU_SW_Requirements_Specification.slreqx:4027
 *  15. VCU_SW_Requirements_Specification.slreqx:4028
 *  16. VCU_SW_Requirements_Specification.slreqx:4029
 *  17. VCU_SW_Requirements_Specification.slreqx:4030
 *  18. VCU_SW_Requirements_Specification.slreqx:4031
 *  19. VCU_SW_Requirements_Specification.slreqx:4032
 *  20. VCU_SW_Requirements_Specification.slreqx:4033
 *  21. VCU_SW_Requirements_Specification.slreqx:4034
 *  22. VCU_SW_Requirements_Specification.slreqx:74152

 */
#endif                                 /* RTW_HEADER_CtAp_ComMErr_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
