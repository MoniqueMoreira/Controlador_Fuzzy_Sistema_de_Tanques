/*
 * Planta_data.c
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
#include "Planta.h"
#include "Planta_private.h"

/* Block parameters (auto storage) */
P_Planta_T Planta_P = {
  -20.0,                               /* Mask Parameter: N_a
                                        * Referenced by: '<S24>/If Action Subsystem3'
                                        */
  -45.0,                               /* Mask Parameter: GP_a
                                        * Referenced by: '<S42>/If Action Subsystem1'
                                        */
  -2.0,                                /* Mask Parameter: Z_a
                                        * Referenced by: '<S26>/If Action Subsystem3'
                                        */
  0.0,                                 /* Mask Parameter: P_a
                                        * Referenced by: '<S25>/If Action Subsystem3'
                                        */
  10.0,                                /* Mask Parameter: GN_a
                                        * Referenced by: '<S41>/If Action Subsystem1'
                                        */
  -15.0,                               /* Mask Parameter: PP_a
                                        * Referenced by: '<S44>/If Action Subsystem3'
                                        */
  0.0,                                 /* Mask Parameter: PN_a
                                        * Referenced by: '<S43>/If Action Subsystem3'
                                        */
  -2.0,                                /* Mask Parameter: Z_a_o
                                        * Referenced by: '<S45>/If Action Subsystem3'
                                        */
  -15.0,                               /* Mask Parameter: B_a
                                        * Referenced by: '<S67>/If Action Subsystem3'
                                        */
  15.0,                                /* Mask Parameter: A_a
                                        * Referenced by: '<S66>/If Action Subsystem3'
                                        */
  5.0,                                 /* Mask Parameter: M_a
                                        * Referenced by: '<S68>/If Action Subsystem3'
                                        */
  10.0,                                /* Mask Parameter: HILInitialize_analog_input_maxi
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  -10.0,                               /* Mask Parameter: HILInitialize_analog_input_mini
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  10.0,                                /* Mask Parameter: HILInitialize_analog_output_max
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  -10.0,                               /* Mask Parameter: HILInitialize_analog_output_min
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  -10.0,                               /* Mask Parameter: N_b
                                        * Referenced by:
                                        *   '<S24>/If Action Subsystem2'
                                        *   '<S24>/If Action Subsystem3'
                                        */
  -30.0,                               /* Mask Parameter: GP_b
                                        * Referenced by: '<S42>/If Action Subsystem1'
                                        */
  0.0,                                 /* Mask Parameter: Z_b
                                        * Referenced by:
                                        *   '<S26>/If Action Subsystem2'
                                        *   '<S26>/If Action Subsystem3'
                                        */
  10.0,                                /* Mask Parameter: P_b
                                        * Referenced by:
                                        *   '<S25>/If Action Subsystem2'
                                        *   '<S25>/If Action Subsystem3'
                                        */
  20.0,                                /* Mask Parameter: GN_b
                                        * Referenced by: '<S41>/If Action Subsystem1'
                                        */
  -7.5,                                /* Mask Parameter: PP_b
                                        * Referenced by:
                                        *   '<S44>/If Action Subsystem2'
                                        *   '<S44>/If Action Subsystem3'
                                        */
  7.5,                                 /* Mask Parameter: PN_b
                                        * Referenced by:
                                        *   '<S43>/If Action Subsystem2'
                                        *   '<S43>/If Action Subsystem3'
                                        */
  0.0,                                 /* Mask Parameter: Z_b_g
                                        * Referenced by:
                                        *   '<S45>/If Action Subsystem2'
                                        *   '<S45>/If Action Subsystem3'
                                        */
  -2.22E-16,                           /* Mask Parameter: B_b
                                        * Referenced by:
                                        *   '<S67>/If Action Subsystem2'
                                        *   '<S67>/If Action Subsystem3'
                                        */
  30.0,                                /* Mask Parameter: A_b
                                        * Referenced by:
                                        *   '<S66>/If Action Subsystem2'
                                        *   '<S66>/If Action Subsystem3'
                                        */
  15.0,                                /* Mask Parameter: M_b
                                        * Referenced by:
                                        *   '<S68>/If Action Subsystem2'
                                        *   '<S68>/If Action Subsystem3'
                                        */
  0.0,                                 /* Mask Parameter: N_c
                                        * Referenced by: '<S24>/If Action Subsystem2'
                                        */
  -20.0,                               /* Mask Parameter: GP_c
                                        * Referenced by: '<S42>/If Action Subsystem3'
                                        */
  2.0,                                 /* Mask Parameter: Z_c
                                        * Referenced by: '<S26>/If Action Subsystem2'
                                        */
  20.0,                                /* Mask Parameter: P_c
                                        * Referenced by: '<S25>/If Action Subsystem2'
                                        */
  30.0,                                /* Mask Parameter: GN_c
                                        * Referenced by: '<S41>/If Action Subsystem3'
                                        */
  0.0,                                 /* Mask Parameter: PP_c
                                        * Referenced by: '<S44>/If Action Subsystem2'
                                        */
  15.0,                                /* Mask Parameter: PN_c
                                        * Referenced by: '<S43>/If Action Subsystem2'
                                        */
  2.0,                                 /* Mask Parameter: Z_c_g
                                        * Referenced by: '<S45>/If Action Subsystem2'
                                        */
  15.0,                                /* Mask Parameter: B_c
                                        * Referenced by: '<S67>/If Action Subsystem2'
                                        */
  45.0,                                /* Mask Parameter: A_c
                                        * Referenced by: '<S66>/If Action Subsystem2'
                                        */
  25.0,                                /* Mask Parameter: M_c
                                        * Referenced by: '<S68>/If Action Subsystem2'
                                        */
  -10.0,                               /* Mask Parameter: GP_d
                                        * Referenced by: '<S42>/If Action Subsystem3'
                                        */
  45.0,                                /* Mask Parameter: GN_d
                                        * Referenced by: '<S41>/If Action Subsystem3'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_final_analog_outp
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_final_pwm_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_initial_analog_ou
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_initial_pwm_outpu
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  50.0,                                /* Mask Parameter: HILInitialize_pwm_frequency
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outputs
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outpu_d
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outpu_p
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_set_other_outpu_f
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_watchdog_analog_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0.0,                                 /* Mask Parameter: HILInitialize_watchdog_pwm_outp
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_hardware_clocks
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_initial_encoder_c
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_pwm_modes
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_watchdog_digital_
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */

  /*  Mask Parameter: HILInitialize_analog_input_chan
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U },

  /*  Mask Parameter: HILInitialize_analog_output_cha
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U },
  0U,                                  /* Mask Parameter: HILWriteAnalog_channels
                                        * Referenced by: '<Root>/HIL Write Analog'
                                        */

  /*  Mask Parameter: HILReadAnalog_channels
   * Referenced by: '<Root>/HIL Read Analog'
   */
  { 0U, 1U },

  /*  Mask Parameter: HILInitialize_encoder_channels
   * Referenced by: '<Root>/HIL Initialize'
   */
  { 0U, 1U },
  4U,                                  /* Mask Parameter: HILInitialize_quadrature
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_active
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_final_digital_out
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_initial_digital_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_analog_input_
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_inpu_h
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_analog_output
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_outp_c
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_analog_outp_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_outp_e
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_outp_b
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_analog_outp_h
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_analog_out_bm
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_clock_frequen
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_clock_frequ_i
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_clock_params_
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_clock_param_n
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_outpu
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_out_l
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_digital_out_k
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_out_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_out_j
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_digital_ou_ol
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_digital_out_i
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_encoder_count
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_encoder_cou_e
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_encoder_param
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_encoder_par_a
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_other_outpu_a
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_a
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_i
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_j
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_b
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_pwm_outputs_o
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1,                                   /* Mask Parameter: HILInitialize_set_pwm_params_at
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  0,                                   /* Mask Parameter: HILInitialize_set_pwm_params__e
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S3>/Switch'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S27>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S27>/0'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S28>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/0'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S32>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S35>/0'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S36>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S36>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S39>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S39>/One'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S46>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S46>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S48>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S50>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S50>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S52>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S52>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S54>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S54>/0'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S55>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S55>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S58>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S58>/0'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S59>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S59>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S62>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S62>/0'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S63>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S63>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S69>/0'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S70>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S70>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S73>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S73>/0'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S74>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S74>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S77>/Out1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S77>/0'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/Out1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S78>/0'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  -6.2814070351758788,                 /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<Root>/Transfer Fcn'
                                        */
  6.2814070351758788,                  /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<Root>/Transfer Fcn'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S8>/Weight'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<Root>/Operating Level'
                                        */
  -6.2814070351758788,                 /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  6.2814070351758788,                  /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  3.0,                                 /* Expression: fis.output(1).mf(2).params(1)
                                        * Referenced by: '<S23>/PN(Constant)'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S15>/Weight'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S16>/Weight'
                                        */
  1.0,                                 /* Expression: fis.output(1).mf(1).params(1)
                                        * Referenced by: '<S23>/GN(--)(Constant)'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S17>/Weight'
                                        */
  12.0,                                /* Expression: fis.output(1).mf(5).params(1)
                                        * Referenced by: '<S23>/GP(++)(Constant)'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S18>/Weight'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S19>/Weight'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S20>/Weight'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S21>/Weight'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S22>/Weight'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S9>/Weight'
                                        */
  10.0,                                /* Expression: fis.output(1).mf(4).params(1)
                                        * Referenced by: '<S23>/PP(Constant)'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S10>/Weight'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S11>/Weight'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S12>/Weight'
                                        */
  4.0,                                 /* Expression: fis.output(1).mf(6).params(1)
                                        * Referenced by: '<S23>/Z1(Constant)'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S13>/Weight'
                                        */
  8.0,                                 /* Expression: fis.output(1).mf(7).params(1)
                                        * Referenced by: '<S23>/Z2(Constant)'
                                        */
  1.0,                                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S14>/Weight'
                                        */
  6.0,                                 /* Expression: fis.output(1).mf(3).params(1)
                                        * Referenced by: '<S23>/Z(Constant)'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S3>/Zero'
                                        */
  6.0,                                 /* Expression: mean(cat(1,fis.output.range),2)
                                        * Referenced by: '<S3>/MidRange'
                                        */
  29.0,                                /* Expression: 29
                                        * Referenced by: '<S1>/Switch'
                                        */
  12.0,                                /* Expression: 12
                                        * Referenced by: '<Root>/Saturation'
                                        */
  -12.0,                               /* Expression: -12
                                        * Referenced by: '<Root>/Saturation'
                                        */
  0.33333333333333331,                 /* Expression: 1/3
                                        * Referenced by: '<Root>/Amplifier Gain'
                                        */
  6.25,                                /* Expression: 30/4.8
                                        * Referenced by: '<Root>/Volts to cm Tank 1 '
                                        */
  6.25,                                /* Expression: 30/4.8
                                        * Referenced by: '<Root>/Volts to cm Tank 2'
                                        */
  0,                                   /* Computed Parameter: HILWriteAnalog_Active
                                        * Referenced by: '<Root>/HIL Write Analog'
                                        */
  1                                    /* Computed Parameter: HILReadAnalog_Active
                                        * Referenced by: '<Root>/HIL Read Analog'
                                        */
};
