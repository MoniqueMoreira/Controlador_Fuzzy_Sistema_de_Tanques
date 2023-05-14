/*
 * Planta_dt.h
 *
 * Code generation for model "Planta".
 *
 * Model version              : 1.266
 * Simulink Coder version : 8.6 (R2014a) 27-Dec-2013
 * C source code generated on : Fri May 12 17:49:51 2023
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_card)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_card"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Planta_B.TransferFcn), 0, 0, 21 }
  ,

  { (char_T *)(&Planta_DW.HILInitialize_AIMinimums[0]), 0, 0, 18 },

  { (char_T *)(&Planta_DW.HILInitialize_Card), 14, 0, 1 },

  { (char_T *)(&Planta_DW.HILWriteAnalog_PWORK), 11, 0, 6 },

  { (char_T *)(&Planta_DW.HILInitialize_ClockModes), 6, 0, 5 },

  { (char_T *)(&Planta_DW.If_ActiveSubsystem), 2, 0, 36 },

  { (char_T *)(&Planta_DW.IfActionSubsystem2_dw.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_ol.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem2_h.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_b.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_f.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem2_n.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_o.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_a.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem2_j.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem1_a.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem1_i.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem2_e.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_m.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem2_g.IfActionSubsystem2_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3_e.IfActionSubsystem3_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem2.IfActionSubsystem2_SubsysRanBC), 2,
    0, 1 },

  { (char_T *)(&Planta_DW.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC), 2,
    0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  28U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Planta_P.N_a), 0, 0, 50 },

  { (char_T *)(&Planta_P.HILInitialize_hardware_clocks), 6, 0, 4 },

  { (char_T *)(&Planta_P.HILInitialize_analog_input_chan[0]), 7, 0, 10 },

  { (char_T *)(&Planta_P.HILInitialize_active), 8, 0, 35 },

  { (char_T *)(&Planta_P.Switch_Threshold), 0, 0, 83 },

  { (char_T *)(&Planta_P.HILWriteAnalog_Active), 8, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  6U,
  rtPTransitions
};

/* [EOF] Planta_dt.h */
