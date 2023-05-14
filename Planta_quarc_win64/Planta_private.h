/*
 * Planta_private.h
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
#ifndef RTW_HEADER_Planta_private_h_
#define RTW_HEADER_Planta_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#endif                                 /* __RTWTYPES_H__ */

/* A global buffer for storing error messages (defined in quanser_common library) */
EXTERN char _rt_error_message[512];
extern void Planta_IfActionSubsystem3(real_T rtu_x, real_T *rty_Out1, real_T
  rtp_a, real_T rtp_b);
extern void Planta_IfActionSubsystem2(real_T rtu_x, real_T *rty_Out1, real_T
  rtp_b, real_T rtp_c);
extern void Planta_IfActionSubsystem3_c(real_T rtu_x, real_T *rty_Out1, real_T
  rtp_c, real_T rtp_d);
extern void Planta_IfActionSubsystem3_f(real_T rtu_x, real_T *rty_Out1, real_T
  rtp_a, real_T rtp_b);
extern void Planta_IfActionSubsystem2_m(real_T rtu_x, real_T *rty_Out1, real_T
  rtp_b, real_T rtp_c);

/* private model entry point functions */
extern void Planta_derivatives(void);

#endif                                 /* RTW_HEADER_Planta_private_h_ */
