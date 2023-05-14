/*
 * Planta.c
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
#include "Planta_dt.h"

/* Block signals (auto storage) */
B_Planta_T Planta_B;

/* Continuous states */
X_Planta_T Planta_X;

/* Block states (auto storage) */
DW_Planta_T Planta_DW;

/* Real-time model */
RT_MODEL_Planta_T Planta_M_;
RT_MODEL_Planta_T *const Planta_M = &Planta_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 2;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  Planta_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; i++) {
    *x += h * f0[i];
    x++;
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * Output and update for action system:
 *    '<S24>/If Action Subsystem3'
 *    '<S25>/If Action Subsystem3'
 *    '<S26>/If Action Subsystem3'
 *    '<S41>/If Action Subsystem1'
 *    '<S42>/If Action Subsystem1'
 *    '<S43>/If Action Subsystem3'
 *    '<S44>/If Action Subsystem3'
 *    '<S45>/If Action Subsystem3'
 */
void Planta_IfActionSubsystem3(real_T rtu_x, real_T *rty_Out1, real_T rtp_a,
  real_T rtp_b)
{
  /* Product: '<S30>/Product ab (trimf)' incorporates:
   *  Constant: '<S30>/a'
   *  Constant: '<S30>/b'
   *  Sum: '<S30>/Sum'
   *  Sum: '<S30>/Sum1'
   */
  *rty_Out1 = (rtu_x - rtp_a) / (rtp_b - rtp_a);
}

/*
 * Output and update for action system:
 *    '<S24>/If Action Subsystem2'
 *    '<S25>/If Action Subsystem2'
 *    '<S26>/If Action Subsystem2'
 *    '<S43>/If Action Subsystem2'
 *    '<S44>/If Action Subsystem2'
 *    '<S45>/If Action Subsystem2'
 */
void Planta_IfActionSubsystem2(real_T rtu_x, real_T *rty_Out1, real_T rtp_b,
  real_T rtp_c)
{
  /* Product: '<S29>/Product cd (trimf)' incorporates:
   *  Constant: '<S29>/b'
   *  Constant: '<S29>/c'
   *  Sum: '<S29>/Sum2'
   *  Sum: '<S29>/Sum3'
   */
  *rty_Out1 = 1.0 / (rtp_c - rtp_b) * (rtp_c - rtu_x);
}

/*
 * Output and update for action system:
 *    '<S41>/If Action Subsystem3'
 *    '<S42>/If Action Subsystem3'
 */
void Planta_IfActionSubsystem3_c(real_T rtu_x, real_T *rty_Out1, real_T rtp_c,
  real_T rtp_d)
{
  /* Product: '<S49>/Product cd (trimf)' incorporates:
   *  Constant: '<S49>/c'
   *  Constant: '<S49>/d'
   *  Sum: '<S49>/Sum2'
   *  Sum: '<S49>/Sum3'
   */
  *rty_Out1 = 1.0 / (rtp_d - rtp_c) * (rtp_d - rtu_x);
}

/*
 * Output and update for action system:
 *    '<S66>/If Action Subsystem3'
 *    '<S67>/If Action Subsystem3'
 *    '<S68>/If Action Subsystem3'
 */
void Planta_IfActionSubsystem3_f(real_T rtu_x, real_T *rty_Out1, real_T rtp_a,
  real_T rtp_b)
{
  /* Product: '<S72>/Product ab (trimf)' incorporates:
   *  Constant: '<S72>/a'
   *  Constant: '<S72>/b'
   *  Sum: '<S72>/Sum'
   *  Sum: '<S72>/Sum1'
   */
  *rty_Out1 = (rtu_x - rtp_a) / (rtp_b - rtp_a);
}

/*
 * Output and update for action system:
 *    '<S66>/If Action Subsystem2'
 *    '<S67>/If Action Subsystem2'
 *    '<S68>/If Action Subsystem2'
 */
void Planta_IfActionSubsystem2_m(real_T rtu_x, real_T *rty_Out1, real_T rtp_b,
  real_T rtp_c)
{
  /* Product: '<S71>/Product cd (trimf)' incorporates:
   *  Constant: '<S71>/b'
   *  Constant: '<S71>/c'
   *  Sum: '<S71>/Sum2'
   *  Sum: '<S71>/Sum3'
   */
  *rty_Out1 = 1.0 / (rtp_c - rtp_b) * (rtp_c - rtu_x);
}

/* Model output function */
void Planta_output(void)
{
  /* local block i/o variables */
  real_T rtb_TotalFiringStrength;
  real_T rtb_HILReadAnalog_o1;
  real_T rtb_HILReadAnalog_o2;
  real_T *lastU;
  int8_T rtAction;
  real_T rtb_Weighting;
  real_T rtb_Weighting_k;
  real_T rtb_Weighting_kk;
  real_T rtb_Weighting_g;
  real_T rtb_Weighting_e2;
  real_T rtb_Weighting_l2;
  real_T rtb_Weighting_b;
  real_T rtb_Weighting_gw;
  real_T rtb_Weighting_o;
  real_T rtb_Weighting_c;
  real_T rtb_Weighting_h5;
  real_T rtb_Weighting_os;
  real_T rtb_Weighting_f0;
  real_T rtb_Weighting_gk;
  real_T rtb_Weighting_d2;
  real_T tmpForInput[15];
  int32_T i;
  if (rtmIsMajorTimeStep(Planta_M)) {
    /* set solver stop time */
    if (!(Planta_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Planta_M->solverInfo,
                            ((Planta_M->Timing.clockTickH0 + 1) *
        Planta_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Planta_M->solverInfo, ((Planta_M->Timing.clockTick0
        + 1) * Planta_M->Timing.stepSize0 + Planta_M->Timing.clockTickH0 *
        Planta_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Planta_M)) {
    Planta_M->Timing.t[0] = rtsiGetT(&Planta_M->solverInfo);
  }

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem2.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanBC_h);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem1_SubsysRanB_o);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanBC_n);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem1_SubsysRanB_h);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.ActionOne_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.Actionu1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanBC_f);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem2_SubsysRanB_g);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanBC_o);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanB_aa);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem1_SubsysRanB_f);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanBC_a);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem1_SubsysRanB_k);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanBC_m);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem1_SubsysRanB_m);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanB_nr);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem1_SubsysRan_hc);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem3_f.IfActionSubsystem3_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanBC_l);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem1_SubsysRanB_g);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem_SubsysRanBC_j);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Planta_DW.IfActionSubsystem1_SubsysRanB_b);
  if (rtmIsMajorTimeStep(Planta_M)) {
  }

  /* TransferFcn: '<Root>/Transfer Fcn' */
  Planta_B.TransferFcn = 0.0;
  Planta_B.TransferFcn += Planta_P.TransferFcn_C * Planta_X.TransferFcn_CSTATE;
  if (rtmIsMajorTimeStep(Planta_M)) {
    /* Constant: '<Root>/Operating Level' */
    Planta_B.OperatingLevel = Planta_P.OperatingLevel_Value;
  }

  /* TransferFcn: '<Root>/Transfer Fcn1' */
  Planta_B.TransferFcn1 = 0.0;
  Planta_B.TransferFcn1 += Planta_P.TransferFcn1_C *
    Planta_X.TransferFcn1_CSTATE;

  /* Sum: '<S1>/Sum' */
  Planta_B.Sum = Planta_B.OperatingLevel - Planta_B.TransferFcn1;

  /* Derivative: '<S1>/Derivative' */
  if ((Planta_DW.TimeStampA >= Planta_M->Timing.t[0]) && (Planta_DW.TimeStampB >=
       Planta_M->Timing.t[0])) {
    Planta_B.Derivative = 0.0;
  } else {
    rtb_Weighting = Planta_DW.TimeStampA;
    lastU = &Planta_DW.LastUAtTimeA;
    if (Planta_DW.TimeStampA < Planta_DW.TimeStampB) {
      if (Planta_DW.TimeStampB < Planta_M->Timing.t[0]) {
        rtb_Weighting = Planta_DW.TimeStampB;
        lastU = &Planta_DW.LastUAtTimeB;
      }
    } else {
      if (Planta_DW.TimeStampA >= Planta_M->Timing.t[0]) {
        rtb_Weighting = Planta_DW.TimeStampB;
        lastU = &Planta_DW.LastUAtTimeB;
      }
    }

    Planta_B.Derivative = (Planta_B.Sum - *lastU) / (Planta_M->Timing.t[0] -
      rtb_Weighting);
  }

  /* End of Derivative: '<S1>/Derivative' */

  /* If: '<S24>/If' incorporates:
   *  Constant: '<S27>/0'
   *  Constant: '<S28>/0'
   */
  if (rtmIsMajorTimeStep(Planta_M)) {
    if ((Planta_B.Derivative < -20.0) || (Planta_B.Derivative > 0.0)) {
      rtAction = 0;
    } else if (Planta_B.Derivative == -10.0) {
      rtAction = 1;
    } else if (Planta_B.Derivative < -10.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    Planta_DW.If_ActiveSubsystem = rtAction;
  } else {
    rtAction = Planta_DW.If_ActiveSubsystem;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge = Planta_P._Value;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge = Planta_P._Value_j;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    Planta_IfActionSubsystem3(Planta_B.Derivative, &Planta_B.Merge, Planta_P.N_a,
      Planta_P.N_b);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S24>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    Planta_IfActionSubsystem2(Planta_B.Derivative, &Planta_B.Merge, Planta_P.N_b,
      Planta_P.N_c);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem2.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S24>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S24>/If' */

  /* If: '<S42>/If' incorporates:
   *  Constant: '<S50>/0'
   *  Constant: '<S52>/0'
   */
  if (rtmIsMajorTimeStep(Planta_M)) {
    if ((Planta_B.Sum < -45.0) || (Planta_B.Sum > -10.0)) {
      rtAction = 0;
    } else if ((Planta_B.Sum >= -30.0) && (Planta_B.Sum <= -20.0)) {
      rtAction = 1;
    } else if (Planta_B.Sum < -30.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    Planta_DW.If_ActiveSubsystem_l = rtAction;
  } else {
    rtAction = Planta_DW.If_ActiveSubsystem_l;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S42>/If Action Subsystem' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_h = Planta_P._Value_ov;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanBC_o);
    }

    /* End of Outputs for SubSystem: '<S42>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S42>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S52>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_h = Planta_P._Value_b;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S42>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S42>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S51>/Action Port'
     */
    Planta_IfActionSubsystem3(Planta_B.Sum, &Planta_B.Merge_h, Planta_P.GP_a,
      Planta_P.GP_b);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem1_a.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S42>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S42>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S53>/Action Port'
     */
    Planta_IfActionSubsystem3_c(Planta_B.Sum, &Planta_B.Merge_h, Planta_P.GP_c,
      Planta_P.GP_d);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S42>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S42>/If' */

  /* Product: '<S8>/Weighting' incorporates:
   *  Constant: '<S8>/Weight'
   *  Product: '<S8>/andorMethod'
   */
  rtb_Weighting = Planta_B.Merge_h * Planta_B.Merge * Planta_P.Weight_Value;

  /* If: '<S26>/If' incorporates:
   *  Constant: '<S35>/0'
   *  Constant: '<S36>/0'
   */
  if (rtmIsMajorTimeStep(Planta_M)) {
    if ((Planta_B.Derivative < -2.0) || (Planta_B.Derivative > 2.0)) {
      rtAction = 0;
    } else if (Planta_B.Derivative == 0.0) {
      rtAction = 1;
    } else if (Planta_B.Derivative < 0.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    Planta_DW.If_ActiveSubsystem_f = rtAction;
  } else {
    rtAction = Planta_DW.If_ActiveSubsystem_f;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_o = Planta_P._Value_d;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanBC_n);
    }

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_o = Planta_P._Value_l;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem1_SubsysRanB_h);
    }

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    Planta_IfActionSubsystem3(Planta_B.Derivative, &Planta_B.Merge_o,
      Planta_P.Z_a, Planta_P.Z_b);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem3_m.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S26>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    Planta_IfActionSubsystem2(Planta_B.Derivative, &Planta_B.Merge_o,
      Planta_P.Z_b, Planta_P.Z_c);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem2_e.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S26>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S26>/If' */

  /* Product: '<S15>/Weighting' incorporates:
   *  Constant: '<S15>/Weight'
   *  Product: '<S15>/andorMethod'
   */
  rtb_Weighting_k = Planta_B.Merge_h * Planta_B.Merge_o *
    Planta_P.Weight_Value_o;

  /* If: '<S25>/If' incorporates:
   *  Constant: '<S31>/0'
   *  Constant: '<S32>/0'
   */
  if (rtmIsMajorTimeStep(Planta_M)) {
    if ((Planta_B.Derivative < 0.0) || (Planta_B.Derivative > 20.0)) {
      rtAction = 0;
    } else if (Planta_B.Derivative == 10.0) {
      rtAction = 1;
    } else if (Planta_B.Derivative < 10.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    Planta_DW.If_ActiveSubsystem_e = rtAction;
  } else {
    rtAction = Planta_DW.If_ActiveSubsystem_e;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem' incorporates:
     *  ActionPort: '<S31>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_b = Planta_P._Value_k;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanBC_h);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S32>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_b = Planta_P._Value_g;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem1_SubsysRanB_o);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    Planta_IfActionSubsystem3(Planta_B.Derivative, &Planta_B.Merge_b,
      Planta_P.P_a, Planta_P.P_b);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem3_e.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    Planta_IfActionSubsystem2(Planta_B.Derivative, &Planta_B.Merge_b,
      Planta_P.P_b, Planta_P.P_c);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem2_g.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S25>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S25>/If' */

  /* Product: '<S16>/Weighting' incorporates:
   *  Constant: '<S16>/Weight'
   *  Product: '<S16>/andorMethod'
   */
  rtb_Weighting_kk = Planta_B.Merge_h * Planta_B.Merge_b *
    Planta_P.Weight_Value_a;

  /* If: '<S41>/If' incorporates:
   *  Constant: '<S46>/0'
   *  Constant: '<S48>/0'
   */
  if (rtmIsMajorTimeStep(Planta_M)) {
    if ((Planta_B.Sum < 10.0) || (Planta_B.Sum > 45.0)) {
      rtAction = 0;
    } else if ((Planta_B.Sum >= 20.0) && (Planta_B.Sum <= 30.0)) {
      rtAction = 1;
    } else if (Planta_B.Sum < 20.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    Planta_DW.If_ActiveSubsystem_j = rtAction;
  } else {
    rtAction = Planta_DW.If_ActiveSubsystem_j;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S41>/If Action Subsystem' incorporates:
     *  ActionPort: '<S46>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_e = Planta_P._Value_o;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanBC_f);
    }

    /* End of Outputs for SubSystem: '<S41>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S41>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S48>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_e = Planta_P._Value_c;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem2_SubsysRanB_g);
    }

    /* End of Outputs for SubSystem: '<S41>/If Action Subsystem2' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S41>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S47>/Action Port'
     */
    Planta_IfActionSubsystem3(Planta_B.Sum, &Planta_B.Merge_e, Planta_P.GN_a,
      Planta_P.GN_b);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem1_i.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S41>/If Action Subsystem1' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S41>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S49>/Action Port'
     */
    Planta_IfActionSubsystem3_c(Planta_B.Sum, &Planta_B.Merge_e, Planta_P.GN_c,
      Planta_P.GN_d);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S41>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<S41>/If' */

  /* Product: '<S17>/Weighting' incorporates:
   *  Constant: '<S17>/Weight'
   *  Product: '<S17>/andorMethod'
   */
  rtb_Weighting_g = Planta_B.Merge_e * Planta_B.Merge * Planta_P.Weight_Value_l;

  /* Product: '<S18>/Weighting' incorporates:
   *  Constant: '<S18>/Weight'
   *  Product: '<S18>/andorMethod'
   */
  rtb_Weighting_e2 = Planta_B.Merge_e * Planta_B.Merge_o *
    Planta_P.Weight_Value_j;

  /* Product: '<S19>/Weighting' incorporates:
   *  Constant: '<S19>/Weight'
   *  Product: '<S19>/andorMethod'
   */
  rtb_Weighting_l2 = Planta_B.Merge_e * Planta_B.Merge_b *
    Planta_P.Weight_Value_le;

  /* If: '<S44>/If' incorporates:
   *  Constant: '<S58>/0'
   *  Constant: '<S59>/0'
   */
  if (rtmIsMajorTimeStep(Planta_M)) {
    if ((Planta_B.Sum < -15.0) || (Planta_B.Sum > 0.0)) {
      rtAction = 0;
    } else if (Planta_B.Sum == -7.5) {
      rtAction = 1;
    } else if (Planta_B.Sum < -7.5) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    Planta_DW.If_ActiveSubsystem_a = rtAction;
  } else {
    rtAction = Planta_DW.If_ActiveSubsystem_a;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S44>/If Action Subsystem' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_oi = Planta_P._Value_h;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanBC_a);
    }

    /* End of Outputs for SubSystem: '<S44>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S44>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S59>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_oi = Planta_P._Value_a;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem1_SubsysRanB_k);
    }

    /* End of Outputs for SubSystem: '<S44>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S44>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S61>/Action Port'
     */
    Planta_IfActionSubsystem3(Planta_B.Sum, &Planta_B.Merge_oi, Planta_P.PP_a,
      Planta_P.PP_b);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem3_a.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S44>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S44>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S60>/Action Port'
     */
    Planta_IfActionSubsystem2(Planta_B.Sum, &Planta_B.Merge_oi, Planta_P.PP_b,
      Planta_P.PP_c);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S44>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S44>/If' */

  /* Product: '<S20>/Weighting' incorporates:
   *  Constant: '<S20>/Weight'
   *  Product: '<S20>/andorMethod'
   */
  rtb_Weighting_b = Planta_B.Merge_oi * Planta_B.Merge * Planta_P.Weight_Value_g;

  /* Product: '<S21>/Weighting' incorporates:
   *  Constant: '<S21>/Weight'
   *  Product: '<S21>/andorMethod'
   */
  rtb_Weighting_gw = Planta_B.Merge_oi * Planta_B.Merge_o *
    Planta_P.Weight_Value_jk;

  /* Product: '<S22>/Weighting' incorporates:
   *  Constant: '<S22>/Weight'
   *  Product: '<S22>/andorMethod'
   */
  rtb_Weighting_o = Planta_B.Merge_oi * Planta_B.Merge_b *
    Planta_P.Weight_Value_h;

  /* If: '<S43>/If' incorporates:
   *  Constant: '<S54>/0'
   *  Constant: '<S55>/0'
   */
  if (rtmIsMajorTimeStep(Planta_M)) {
    if ((Planta_B.Sum < 0.0) || (Planta_B.Sum > 15.0)) {
      rtAction = 0;
    } else if (Planta_B.Sum == 7.5) {
      rtAction = 1;
    } else if (Planta_B.Sum < 7.5) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    Planta_DW.If_ActiveSubsystem_i = rtAction;
  } else {
    rtAction = Planta_DW.If_ActiveSubsystem_i;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S43>/If Action Subsystem' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_f = Planta_P._Value_n;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanB_aa);
    }

    /* End of Outputs for SubSystem: '<S43>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S43>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_f = Planta_P._Value_i;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem1_SubsysRanB_f);
    }

    /* End of Outputs for SubSystem: '<S43>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S43>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    Planta_IfActionSubsystem3(Planta_B.Sum, &Planta_B.Merge_f, Planta_P.PN_a,
      Planta_P.PN_b);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S43>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S43>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */
    Planta_IfActionSubsystem2(Planta_B.Sum, &Planta_B.Merge_f, Planta_P.PN_b,
      Planta_P.PN_c);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem2_j.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S43>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S43>/If' */

  /* Product: '<S9>/Weighting' incorporates:
   *  Constant: '<S9>/Weight'
   *  Product: '<S9>/andorMethod'
   */
  rtb_Weighting_c = Planta_B.Merge_f * Planta_B.Merge * Planta_P.Weight_Value_i;

  /* Product: '<S10>/Weighting' incorporates:
   *  Constant: '<S10>/Weight'
   *  Product: '<S10>/andorMethod'
   */
  rtb_Weighting_h5 = Planta_B.Merge_f * Planta_B.Merge_o *
    Planta_P.Weight_Value_k;

  /* Product: '<S11>/Weighting' incorporates:
   *  Constant: '<S11>/Weight'
   *  Product: '<S11>/andorMethod'
   */
  rtb_Weighting_os = Planta_B.Merge_f * Planta_B.Merge_b *
    Planta_P.Weight_Value_m;

  /* If: '<S45>/If' incorporates:
   *  Constant: '<S62>/0'
   *  Constant: '<S63>/0'
   */
  if (rtmIsMajorTimeStep(Planta_M)) {
    if ((Planta_B.Sum < -2.0) || (Planta_B.Sum > 2.0)) {
      rtAction = 0;
    } else if (Planta_B.Sum == 0.0) {
      rtAction = 1;
    } else if (Planta_B.Sum < 0.0) {
      rtAction = 2;
    } else {
      rtAction = 3;
    }

    Planta_DW.If_ActiveSubsystem_b = rtAction;
  } else {
    rtAction = Planta_DW.If_ActiveSubsystem_b;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S45>/If Action Subsystem' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_p = Planta_P._Value_dk;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanBC_m);
    }

    /* End of Outputs for SubSystem: '<S45>/If Action Subsystem' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S45>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_p = Planta_P._Value_lc;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem1_SubsysRanB_m);
    }

    /* End of Outputs for SubSystem: '<S45>/If Action Subsystem1' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S45>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S65>/Action Port'
     */
    Planta_IfActionSubsystem3(Planta_B.Sum, &Planta_B.Merge_p, Planta_P.Z_a_o,
      Planta_P.Z_b_g);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem3_o.IfActionSubsystem3_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S45>/If Action Subsystem3' */
    break;

   case 3:
    /* Outputs for IfAction SubSystem: '<S45>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    Planta_IfActionSubsystem2(Planta_B.Sum, &Planta_B.Merge_p, Planta_P.Z_b_g,
      Planta_P.Z_c_g);
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.IfActionSubsystem2_n.IfActionSubsystem2_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S45>/If Action Subsystem2' */
    break;
  }

  /* End of If: '<S45>/If' */
  if (rtmIsMajorTimeStep(Planta_M)) {
    /* If: '<S67>/If' incorporates:
     *  Constant: '<S73>/0'
     *  Constant: '<S74>/0'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      if ((Planta_B.OperatingLevel < -15.0) || (Planta_B.OperatingLevel > 15.0))
      {
        rtAction = 0;
      } else if (Planta_B.OperatingLevel == -2.22E-16) {
        rtAction = 1;
      } else if (Planta_B.OperatingLevel < -2.22E-16) {
        rtAction = 2;
      } else {
        rtAction = 3;
      }

      Planta_DW.If_ActiveSubsystem_k = rtAction;
    } else {
      rtAction = Planta_DW.If_ActiveSubsystem_k;
    }

    switch (rtAction) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem' incorporates:
       *  ActionPort: '<S73>/Action Port'
       */
      Planta_B.Merge_l = Planta_P._Value_p;
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanBC_l);
      }

      /* End of Outputs for SubSystem: '<S67>/If Action Subsystem' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S74>/Action Port'
       */
      Planta_B.Merge_l = Planta_P._Value_m;
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem1_SubsysRanB_g);
      }

      /* End of Outputs for SubSystem: '<S67>/If Action Subsystem1' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S76>/Action Port'
       */
      Planta_IfActionSubsystem3_f(Planta_B.OperatingLevel, &Planta_B.Merge_l,
        Planta_P.B_a, Planta_P.B_b);
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem3_b.IfActionSubsystem3_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<S67>/If Action Subsystem3' */
      break;

     case 3:
      /* Outputs for IfAction SubSystem: '<S67>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S75>/Action Port'
       */
      Planta_IfActionSubsystem2_m(Planta_B.OperatingLevel, &Planta_B.Merge_l,
        Planta_P.B_b, Planta_P.B_c);
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem2_h.IfActionSubsystem2_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<S67>/If Action Subsystem2' */
      break;
    }

    /* End of If: '<S67>/If' */
  }

  /* Product: '<S12>/Weighting' incorporates:
   *  Constant: '<S12>/Weight'
   *  Product: '<S12>/andorMethod'
   */
  rtb_Weighting_f0 = Planta_B.Merge_p * Planta_B.Merge_l *
    Planta_P.Weight_Value_c;
  if (rtmIsMajorTimeStep(Planta_M)) {
    /* If: '<S66>/If' incorporates:
     *  Constant: '<S69>/0'
     *  Constant: '<S70>/0'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      if ((Planta_B.OperatingLevel < 15.0) || (Planta_B.OperatingLevel > 45.0))
      {
        rtAction = 0;
      } else if (Planta_B.OperatingLevel == 30.0) {
        rtAction = 1;
      } else if (Planta_B.OperatingLevel < 30.0) {
        rtAction = 2;
      } else {
        rtAction = 3;
      }

      Planta_DW.If_ActiveSubsystem_m = rtAction;
    } else {
      rtAction = Planta_DW.If_ActiveSubsystem_m;
    }

    switch (rtAction) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem' incorporates:
       *  ActionPort: '<S69>/Action Port'
       */
      Planta_B.Merge_ox = Planta_P._Value_ck;
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanB_nr);
      }

      /* End of Outputs for SubSystem: '<S66>/If Action Subsystem' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S70>/Action Port'
       */
      Planta_B.Merge_ox = Planta_P._Value_cks;
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem1_SubsysRan_hc);
      }

      /* End of Outputs for SubSystem: '<S66>/If Action Subsystem1' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S72>/Action Port'
       */
      Planta_IfActionSubsystem3_f(Planta_B.OperatingLevel, &Planta_B.Merge_ox,
        Planta_P.A_a, Planta_P.A_b);
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem3_f.IfActionSubsystem3_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<S66>/If Action Subsystem3' */
      break;

     case 3:
      /* Outputs for IfAction SubSystem: '<S66>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S71>/Action Port'
       */
      Planta_IfActionSubsystem2_m(Planta_B.OperatingLevel, &Planta_B.Merge_ox,
        Planta_P.A_b, Planta_P.A_c);
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<S66>/If Action Subsystem2' */
      break;
    }

    /* End of If: '<S66>/If' */
  }

  /* Product: '<S13>/Weighting' incorporates:
   *  Constant: '<S13>/Weight'
   *  Product: '<S13>/andorMethod'
   */
  rtb_Weighting_gk = Planta_B.Merge_p * Planta_B.Merge_ox *
    Planta_P.Weight_Value_n;
  if (rtmIsMajorTimeStep(Planta_M)) {
    /* If: '<S68>/If' incorporates:
     *  Constant: '<S77>/0'
     *  Constant: '<S78>/0'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      if ((Planta_B.OperatingLevel < 5.0) || (Planta_B.OperatingLevel > 25.0)) {
        rtAction = 0;
      } else if (Planta_B.OperatingLevel == 15.0) {
        rtAction = 1;
      } else if (Planta_B.OperatingLevel < 15.0) {
        rtAction = 2;
      } else {
        rtAction = 3;
      }

      Planta_DW.If_ActiveSubsystem_g = rtAction;
    } else {
      rtAction = Planta_DW.If_ActiveSubsystem_g;
    }

    switch (rtAction) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S68>/If Action Subsystem' incorporates:
       *  ActionPort: '<S77>/Action Port'
       */
      Planta_B.Merge_oxl = Planta_P._Value_p5;
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem_SubsysRanBC_j);
      }

      /* End of Outputs for SubSystem: '<S68>/If Action Subsystem' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S68>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S78>/Action Port'
       */
      Planta_B.Merge_oxl = Planta_P._Value_ko;
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC(Planta_DW.IfActionSubsystem1_SubsysRanB_b);
      }

      /* End of Outputs for SubSystem: '<S68>/If Action Subsystem1' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S68>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S80>/Action Port'
       */
      Planta_IfActionSubsystem3_f(Planta_B.OperatingLevel, &Planta_B.Merge_oxl,
        Planta_P.M_a, Planta_P.M_b);
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC
          (Planta_DW.IfActionSubsystem3_ol.IfActionSubsystem3_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<S68>/If Action Subsystem3' */
      break;

     case 3:
      /* Outputs for IfAction SubSystem: '<S68>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S79>/Action Port'
       */
      Planta_IfActionSubsystem2_m(Planta_B.OperatingLevel, &Planta_B.Merge_oxl,
        Planta_P.M_b, Planta_P.M_c);
      if (rtmIsMajorTimeStep(Planta_M)) {
        srUpdateBC
          (Planta_DW.IfActionSubsystem2_dw.IfActionSubsystem2_SubsysRanBC);
      }

      /* End of Outputs for SubSystem: '<S68>/If Action Subsystem2' */
      break;
    }

    /* End of If: '<S68>/If' */
  }

  /* Product: '<S14>/Weighting' incorporates:
   *  Constant: '<S14>/Weight'
   *  Product: '<S14>/andorMethod'
   */
  rtb_Weighting_d2 = Planta_B.Merge_p * Planta_B.Merge_oxl *
    Planta_P.Weight_Value_ix;

  /* Sum: '<S3>/Total Firing Strength' */
  rtb_TotalFiringStrength = (((((((((((((rtb_Weighting + rtb_Weighting_k) +
    rtb_Weighting_kk) + rtb_Weighting_g) + rtb_Weighting_e2) + rtb_Weighting_l2)
    + rtb_Weighting_b) + rtb_Weighting_gw) + rtb_Weighting_o) + rtb_Weighting_c)
    + rtb_Weighting_h5) + rtb_Weighting_os) + rtb_Weighting_f0) +
    rtb_Weighting_gk) + rtb_Weighting_d2;

  /* If: '<S5>/If' incorporates:
   *  Constant: '<S39>/One'
   *  Inport: '<S40>/u1'
   */
  if (rtmIsMajorTimeStep(Planta_M)) {
    if (rtb_TotalFiringStrength < 0.0) {
      rtAction = 0;
    } else {
      rtAction = 1;
    }

    Planta_DW.If_ActiveSubsystem_k2 = rtAction;
  } else {
    rtAction = Planta_DW.If_ActiveSubsystem_k2;
  }

  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S5>/Action: One' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    if (rtmIsMajorTimeStep(Planta_M)) {
      Planta_B.Merge_c = Planta_P.One_Value;
    }

    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.ActionOne_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S5>/Action: One' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S5>/Action: u1' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    Planta_B.Merge_c = rtb_TotalFiringStrength;
    if (rtmIsMajorTimeStep(Planta_M)) {
      srUpdateBC(Planta_DW.Actionu1_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S5>/Action: u1' */
    break;
  }

  /* End of If: '<S5>/If' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S3>/Zero'
   *  RelationalOperator: '<S3>/Zero Firing Strength?'
   *  Switch: '<S3>/Switch'
   */
  if (Planta_B.TransferFcn > Planta_P.Switch_Threshold_c) {
    rtb_Weighting_d2 = Planta_P.Constant_Value;
  } else if ((rtb_TotalFiringStrength > Planta_P.Zero_Value) >=
             Planta_P.Switch_Threshold) {
    /* Product: '<S8>/impMethod' incorporates:
     *  Constant: '<S23>/PN(Constant)'
     *  Switch: '<S3>/Switch'
     */
    rtb_Weighting *= Planta_P.PNConstant_Value;

    /* Sum: '<S5>/Sum1' incorporates:
     *  Constant: '<S23>/GN(--)(Constant)'
     *  Constant: '<S23>/GP(++)(Constant)'
     *  Constant: '<S23>/PN(Constant)'
     *  Constant: '<S23>/PP(Constant)'
     *  Constant: '<S23>/Z(Constant)'
     *  Constant: '<S23>/Z1(Constant)'
     *  Constant: '<S23>/Z2(Constant)'
     *  Product: '<S10>/impMethod'
     *  Product: '<S11>/impMethod'
     *  Product: '<S12>/impMethod'
     *  Product: '<S13>/impMethod'
     *  Product: '<S14>/impMethod'
     *  Product: '<S15>/impMethod'
     *  Product: '<S16>/impMethod'
     *  Product: '<S17>/impMethod'
     *  Product: '<S18>/impMethod'
     *  Product: '<S19>/impMethod'
     *  Product: '<S20>/impMethod'
     *  Product: '<S21>/impMethod'
     *  Product: '<S22>/impMethod'
     *  Product: '<S9>/impMethod'
     *  Switch: '<S3>/Switch'
     */
    tmpForInput[0] = rtb_Weighting;
    tmpForInput[1] = rtb_Weighting_k * Planta_P.PNConstant_Value;
    tmpForInput[2] = rtb_Weighting_kk * Planta_P.GNConstant_Value;
    tmpForInput[3] = rtb_Weighting_g * Planta_P.GPConstant_Value;
    tmpForInput[4] = rtb_Weighting_e2 * Planta_P.GPConstant_Value;
    tmpForInput[5] = rtb_Weighting_l2 * Planta_P.GPConstant_Value;
    tmpForInput[6] = rtb_Weighting_b * Planta_P.GNConstant_Value;
    tmpForInput[7] = rtb_Weighting_gw * Planta_P.PNConstant_Value;
    tmpForInput[8] = rtb_Weighting_o * Planta_P.PNConstant_Value;
    tmpForInput[9] = rtb_Weighting_c * Planta_P.PPConstant_Value;
    tmpForInput[10] = rtb_Weighting_h5 * Planta_P.PPConstant_Value;
    tmpForInput[11] = rtb_Weighting_os * Planta_P.GPConstant_Value;
    tmpForInput[12] = rtb_Weighting_f0 * Planta_P.Z1Constant_Value;
    tmpForInput[13] = rtb_Weighting_gk * Planta_P.Z2Constant_Value;
    tmpForInput[14] = rtb_Weighting_d2 * Planta_P.ZConstant_Value;
    for (i = 0; i < 14; i++) {
      rtb_Weighting += tmpForInput[i + 1];
    }

    /* End of Sum: '<S5>/Sum1' */

    /* Switch: '<S3>/Switch' incorporates:
     *  Product: '<S5>/Product'
     */
    rtb_Weighting_d2 = rtb_Weighting / Planta_B.Merge_c;
  } else {
    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S3>/MidRange'
     */
    rtb_Weighting_d2 = Planta_P.MidRange_Value;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Saturate: '<Root>/Saturation' */
  if (rtb_Weighting_d2 > Planta_P.Saturation_UpperSat) {
    Planta_B.Saturation = Planta_P.Saturation_UpperSat;
  } else if (rtb_Weighting_d2 < Planta_P.Saturation_LowerSat) {
    Planta_B.Saturation = Planta_P.Saturation_LowerSat;
  } else {
    Planta_B.Saturation = rtb_Weighting_d2;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Gain: '<Root>/Amplifier Gain' */
  Planta_B.AmplifierGain = Planta_P.AmplifierGain_Gain * Planta_B.Saturation;
  if (rtmIsMajorTimeStep(Planta_M)) {
    /* S-Function (hil_write_analog_block): '<Root>/HIL Write Analog' */

    /* S-Function Block: Planta/HIL Write Analog (hil_write_analog_block) */
    {
      t_error result;
      result = hil_write_analog(Planta_DW.HILInitialize_Card,
        &Planta_P.HILWriteAnalog_channels, 1, &Planta_B.AmplifierGain);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planta_M, _rt_error_message);
      }
    }

    /* S-Function (hil_read_analog_block): '<Root>/HIL Read Analog' */

    /* S-Function Block: Planta/HIL Read Analog (hil_read_analog_block) */
    {
      t_error result = hil_read_analog(Planta_DW.HILInitialize_Card,
        Planta_P.HILReadAnalog_channels, 2, &Planta_DW.HILReadAnalog_Buffer[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planta_M, _rt_error_message);
      }

      rtb_HILReadAnalog_o1 = Planta_DW.HILReadAnalog_Buffer[0];
      rtb_HILReadAnalog_o2 = Planta_DW.HILReadAnalog_Buffer[1];
    }

    /* Gain: '<Root>/Volts to cm Tank 1 ' */
    Planta_B.VoltstocmTank1 = Planta_P.VoltstocmTank1_Gain *
      rtb_HILReadAnalog_o1;

    /* Gain: '<Root>/Volts to cm Tank 2' */
    Planta_B.VoltstocmTank2 = Planta_P.VoltstocmTank2_Gain *
      rtb_HILReadAnalog_o2;
  }
}

/* Model update function */
void Planta_update(void)
{
  real_T *lastU;

  /* Update for Derivative: '<S1>/Derivative' */
  if (Planta_DW.TimeStampA == (rtInf)) {
    Planta_DW.TimeStampA = Planta_M->Timing.t[0];
    lastU = &Planta_DW.LastUAtTimeA;
  } else if (Planta_DW.TimeStampB == (rtInf)) {
    Planta_DW.TimeStampB = Planta_M->Timing.t[0];
    lastU = &Planta_DW.LastUAtTimeB;
  } else if (Planta_DW.TimeStampA < Planta_DW.TimeStampB) {
    Planta_DW.TimeStampA = Planta_M->Timing.t[0];
    lastU = &Planta_DW.LastUAtTimeA;
  } else {
    Planta_DW.TimeStampB = Planta_M->Timing.t[0];
    lastU = &Planta_DW.LastUAtTimeB;
  }

  *lastU = Planta_B.Sum;

  /* End of Update for Derivative: '<S1>/Derivative' */
  if (rtmIsMajorTimeStep(Planta_M)) {
    rt_ertODEUpdateContinuousStates(&Planta_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Planta_M->Timing.clockTick0)) {
    ++Planta_M->Timing.clockTickH0;
  }

  Planta_M->Timing.t[0] = rtsiGetSolverStopTime(&Planta_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.05s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Planta_M->Timing.clockTick1)) {
      ++Planta_M->Timing.clockTickH1;
    }

    Planta_M->Timing.t[1] = Planta_M->Timing.clockTick1 *
      Planta_M->Timing.stepSize1 + Planta_M->Timing.clockTickH1 *
      Planta_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Derivatives for root system: '<Root>' */
void Planta_derivatives(void)
{
  XDot_Planta_T *_rtXdot;
  _rtXdot = ((XDot_Planta_T *) Planta_M->ModelData.derivs);

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += Planta_P.TransferFcn_A *
    Planta_X.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += Planta_B.VoltstocmTank1;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = 0.0;
  _rtXdot->TransferFcn1_CSTATE += Planta_P.TransferFcn1_A *
    Planta_X.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += Planta_B.VoltstocmTank2;
}

/* Model initialize function */
void Planta_initialize(void)
{
  /* Start for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Planta/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("q2_usb", "0", &Planta_DW.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Planta_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(Planta_DW.HILInitialize_Card,
      "d0=digital;d1=digital;led=auto;update_rate=normal;decimation=1", 63);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Planta_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(Planta_DW.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Planta_M, _rt_error_message);
      return;
    }

    if ((Planta_P.HILInitialize_set_analog_input_ && !is_switching) ||
        (Planta_P.HILInitialize_set_analog_inpu_h && is_switching)) {
      Planta_DW.HILInitialize_AIMinimums[0] =
        Planta_P.HILInitialize_analog_input_mini;
      Planta_DW.HILInitialize_AIMinimums[1] =
        Planta_P.HILInitialize_analog_input_mini;
      Planta_DW.HILInitialize_AIMaximums[0] =
        Planta_P.HILInitialize_analog_input_maxi;
      Planta_DW.HILInitialize_AIMaximums[1] =
        Planta_P.HILInitialize_analog_input_maxi;
      result = hil_set_analog_input_ranges(Planta_DW.HILInitialize_Card,
        Planta_P.HILInitialize_analog_input_chan, 2U,
        &Planta_DW.HILInitialize_AIMinimums[0],
        &Planta_DW.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planta_M, _rt_error_message);
        return;
      }
    }

    if ((Planta_P.HILInitialize_set_analog_output && !is_switching) ||
        (Planta_P.HILInitialize_set_analog_outp_c && is_switching)) {
      Planta_DW.HILInitialize_AOMinimums[0] =
        Planta_P.HILInitialize_analog_output_min;
      Planta_DW.HILInitialize_AOMinimums[1] =
        Planta_P.HILInitialize_analog_output_min;
      Planta_DW.HILInitialize_AOMaximums[0] =
        Planta_P.HILInitialize_analog_output_max;
      Planta_DW.HILInitialize_AOMaximums[1] =
        Planta_P.HILInitialize_analog_output_max;
      result = hil_set_analog_output_ranges(Planta_DW.HILInitialize_Card,
        Planta_P.HILInitialize_analog_output_cha, 2U,
        &Planta_DW.HILInitialize_AOMinimums[0],
        &Planta_DW.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planta_M, _rt_error_message);
        return;
      }
    }

    if ((Planta_P.HILInitialize_set_analog_outp_o && !is_switching) ||
        (Planta_P.HILInitialize_set_analog_outp_e && is_switching)) {
      Planta_DW.HILInitialize_AOVoltages[0] =
        Planta_P.HILInitialize_initial_analog_ou;
      Planta_DW.HILInitialize_AOVoltages[1] =
        Planta_P.HILInitialize_initial_analog_ou;
      result = hil_write_analog(Planta_DW.HILInitialize_Card,
        Planta_P.HILInitialize_analog_output_cha, 2U,
        &Planta_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planta_M, _rt_error_message);
        return;
      }
    }

    if (Planta_P.HILInitialize_set_analog_out_bm) {
      Planta_DW.HILInitialize_AOVoltages[0] =
        Planta_P.HILInitialize_watchdog_analog_o;
      Planta_DW.HILInitialize_AOVoltages[1] =
        Planta_P.HILInitialize_watchdog_analog_o;
      result = hil_watchdog_set_analog_expiration_state
        (Planta_DW.HILInitialize_Card, Planta_P.HILInitialize_analog_output_cha,
         2U, &Planta_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planta_M, _rt_error_message);
        return;
      }
    }

    if ((Planta_P.HILInitialize_set_encoder_param && !is_switching) ||
        (Planta_P.HILInitialize_set_encoder_par_a && is_switching)) {
      Planta_DW.HILInitialize_QuadratureModes[0] =
        Planta_P.HILInitialize_quadrature;
      Planta_DW.HILInitialize_QuadratureModes[1] =
        Planta_P.HILInitialize_quadrature;
      result = hil_set_encoder_quadrature_mode(Planta_DW.HILInitialize_Card,
        Planta_P.HILInitialize_encoder_channels, 2U, (t_encoder_quadrature_mode *)
        &Planta_DW.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planta_M, _rt_error_message);
        return;
      }
    }

    if ((Planta_P.HILInitialize_set_encoder_count && !is_switching) ||
        (Planta_P.HILInitialize_set_encoder_cou_e && is_switching)) {
      Planta_DW.HILInitialize_InitialEICounts[0] =
        Planta_P.HILInitialize_initial_encoder_c;
      Planta_DW.HILInitialize_InitialEICounts[1] =
        Planta_P.HILInitialize_initial_encoder_c;
      result = hil_set_encoder_counts(Planta_DW.HILInitialize_Card,
        Planta_P.HILInitialize_encoder_channels, 2U,
        &Planta_DW.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planta_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for If: '<S24>/If' */
  Planta_DW.If_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<S24>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S28>/Out1' */
  Planta_B.Merge = Planta_P.Out1_Y0_p;

  /* End of Start for SubSystem: '<S24>/If Action Subsystem1' */

  /* Start for If: '<S42>/If' */
  Planta_DW.If_ActiveSubsystem_l = -1;

  /* Start for IfAction SubSystem: '<S42>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S52>/Out1' */
  Planta_B.Merge_h = Planta_P.Out1_Y0_o;

  /* End of Start for SubSystem: '<S42>/If Action Subsystem2' */

  /* Start for If: '<S26>/If' */
  Planta_DW.If_ActiveSubsystem_f = -1;

  /* Start for IfAction SubSystem: '<S26>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S36>/Out1' */
  Planta_B.Merge_o = Planta_P.Out1_Y0_j;

  /* End of Start for SubSystem: '<S26>/If Action Subsystem1' */

  /* Start for If: '<S25>/If' */
  Planta_DW.If_ActiveSubsystem_e = -1;

  /* Start for IfAction SubSystem: '<S25>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S32>/Out1' */
  Planta_B.Merge_b = Planta_P.Out1_Y0_n;

  /* End of Start for SubSystem: '<S25>/If Action Subsystem1' */

  /* Start for If: '<S41>/If' */
  Planta_DW.If_ActiveSubsystem_j = -1;

  /* Start for IfAction SubSystem: '<S41>/If Action Subsystem2' */
  /* VirtualOutportStart for Outport: '<S48>/Out1' */
  Planta_B.Merge_e = Planta_P.Out1_Y0_ks;

  /* End of Start for SubSystem: '<S41>/If Action Subsystem2' */

  /* Start for If: '<S44>/If' */
  Planta_DW.If_ActiveSubsystem_a = -1;

  /* Start for IfAction SubSystem: '<S44>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S59>/Out1' */
  Planta_B.Merge_oi = Planta_P.Out1_Y0_gq;

  /* End of Start for SubSystem: '<S44>/If Action Subsystem1' */

  /* Start for If: '<S43>/If' */
  Planta_DW.If_ActiveSubsystem_i = -1;

  /* Start for IfAction SubSystem: '<S43>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S55>/Out1' */
  Planta_B.Merge_f = Planta_P.Out1_Y0_ok;

  /* End of Start for SubSystem: '<S43>/If Action Subsystem1' */

  /* Start for If: '<S45>/If' */
  Planta_DW.If_ActiveSubsystem_b = -1;

  /* Start for IfAction SubSystem: '<S45>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S63>/Out1' */
  Planta_B.Merge_p = Planta_P.Out1_Y0_d;

  /* End of Start for SubSystem: '<S45>/If Action Subsystem1' */

  /* Start for If: '<S67>/If' */
  Planta_DW.If_ActiveSubsystem_k = -1;

  /* Start for IfAction SubSystem: '<S67>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S74>/Out1' */
  Planta_B.Merge_l = Planta_P.Out1_Y0_ms;

  /* End of Start for SubSystem: '<S67>/If Action Subsystem1' */

  /* Start for If: '<S66>/If' */
  Planta_DW.If_ActiveSubsystem_m = -1;

  /* Start for IfAction SubSystem: '<S66>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S70>/Out1' */
  Planta_B.Merge_ox = Planta_P.Out1_Y0_ju;

  /* End of Start for SubSystem: '<S66>/If Action Subsystem1' */

  /* Start for If: '<S68>/If' */
  Planta_DW.If_ActiveSubsystem_g = -1;

  /* Start for IfAction SubSystem: '<S68>/If Action Subsystem1' */
  /* VirtualOutportStart for Outport: '<S78>/Out1' */
  Planta_B.Merge_oxl = Planta_P.Out1_Y0_oq;

  /* End of Start for SubSystem: '<S68>/If Action Subsystem1' */

  /* Start for If: '<S5>/If' */
  Planta_DW.If_ActiveSubsystem_k2 = -1;

  /* Start for IfAction SubSystem: '<S5>/Action: One' */
  /* VirtualOutportStart for Outport: '<S39>/Out1' */
  Planta_B.Merge_c = Planta_P.Out1_Y0_l;

  /* End of Start for SubSystem: '<S5>/Action: One' */

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn' */
  Planta_X.TransferFcn_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn1' */
  Planta_X.TransferFcn1_CSTATE = 0.0;

  /* InitializeConditions for Derivative: '<S1>/Derivative' */
  Planta_DW.TimeStampA = (rtInf);
  Planta_DW.TimeStampB = (rtInf);
}

/* Model terminate function */
void Planta_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<Root>/HIL Initialize' */

  /* S-Function Block: Planta/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    hil_task_stop_all(Planta_DW.HILInitialize_Card);
    hil_monitor_stop_all(Planta_DW.HILInitialize_Card);
    is_switching = false;
    if ((Planta_P.HILInitialize_set_analog_outp_h && !is_switching) ||
        (Planta_P.HILInitialize_set_analog_outp_b && is_switching)) {
      Planta_DW.HILInitialize_AOVoltages[0] =
        Planta_P.HILInitialize_final_analog_outp;
      Planta_DW.HILInitialize_AOVoltages[1] =
        Planta_P.HILInitialize_final_analog_outp;
      num_final_analog_outputs = 2U;
    }

    if (num_final_analog_outputs > 0) {
      result = hil_write_analog(Planta_DW.HILInitialize_Card,
        Planta_P.HILInitialize_analog_output_cha, num_final_analog_outputs,
        &Planta_DW.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planta_M, _rt_error_message);
      }
    }

    hil_task_delete_all(Planta_DW.HILInitialize_Card);
    hil_monitor_delete_all(Planta_DW.HILInitialize_Card);
    hil_close(Planta_DW.HILInitialize_Card);
    Planta_DW.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/

/* Solver interface called by GRT_Main */
#ifndef USE_GENERATED_SOLVER

void rt_ODECreateIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEDestroyIntegrationData(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

void rt_ODEUpdateContinuousStates(RTWSolverInfo *si)
{
  UNUSED_PARAMETER(si);
  return;
}                                      /* do nothing */

#endif

void MdlOutputs(int_T tid)
{
  Planta_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  Planta_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  Planta_initialize();
}

void MdlTerminate(void)
{
  Planta_terminate();
}

/* Registration function */
RT_MODEL_Planta_T *Planta(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Planta_M, 0,
                sizeof(RT_MODEL_Planta_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Planta_M->solverInfo, &Planta_M->Timing.simTimeStep);
    rtsiSetTPtr(&Planta_M->solverInfo, &rtmGetTPtr(Planta_M));
    rtsiSetStepSizePtr(&Planta_M->solverInfo, &Planta_M->Timing.stepSize0);
    rtsiSetdXPtr(&Planta_M->solverInfo, &Planta_M->ModelData.derivs);
    rtsiSetContStatesPtr(&Planta_M->solverInfo, (real_T **)
                         &Planta_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&Planta_M->solverInfo,
      &Planta_M->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&Planta_M->solverInfo, (&rtmGetErrorStatus(Planta_M)));
    rtsiSetRTModelPtr(&Planta_M->solverInfo, Planta_M);
  }

  rtsiSetSimTimeStep(&Planta_M->solverInfo, MAJOR_TIME_STEP);
  Planta_M->ModelData.intgData.f[0] = Planta_M->ModelData.odeF[0];
  Planta_M->ModelData.contStates = ((real_T *) &Planta_X);
  rtsiSetSolverData(&Planta_M->solverInfo, (void *)&Planta_M->ModelData.intgData);
  rtsiSetSolverName(&Planta_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Planta_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Planta_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Planta_M->Timing.sampleTimes = (&Planta_M->Timing.sampleTimesArray[0]);
    Planta_M->Timing.offsetTimes = (&Planta_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Planta_M->Timing.sampleTimes[0] = (0.0);
    Planta_M->Timing.sampleTimes[1] = (0.05);

    /* task offsets */
    Planta_M->Timing.offsetTimes[0] = (0.0);
    Planta_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Planta_M, &Planta_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Planta_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Planta_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Planta_M, 100.0);
  Planta_M->Timing.stepSize0 = 0.05;
  Planta_M->Timing.stepSize1 = 0.05;

  /* External mode info */
  Planta_M->Sizes.checksums[0] = (3966864910U);
  Planta_M->Sizes.checksums[1] = (698207570U);
  Planta_M->Sizes.checksums[2] = (3538001449U);
  Planta_M->Sizes.checksums[3] = (1720607687U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[49];
    Planta_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[4] = (sysRanDType *)&Planta_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem2.IfActionSubsystem2_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC;
    systemRan[7] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanBC_h;
    systemRan[8] = (sysRanDType *)&Planta_DW.IfActionSubsystem1_SubsysRanB_o;
    systemRan[9] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem2_g.IfActionSubsystem2_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_e.IfActionSubsystem3_SubsysRanBC;
    systemRan[11] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanBC_n;
    systemRan[12] = (sysRanDType *)&Planta_DW.IfActionSubsystem1_SubsysRanB_h;
    systemRan[13] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem2_e.IfActionSubsystem2_SubsysRanBC;
    systemRan[14] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_m.IfActionSubsystem3_SubsysRanBC;
    systemRan[15] = (sysRanDType *)&Planta_DW.ActionOne_SubsysRanBC;
    systemRan[16] = (sysRanDType *)&Planta_DW.Actionu1_SubsysRanBC;
    systemRan[17] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanBC_f;
    systemRan[18] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem1_i.IfActionSubsystem3_SubsysRanBC;
    systemRan[19] = (sysRanDType *)&Planta_DW.IfActionSubsystem2_SubsysRanB_g;
    systemRan[20] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC;
    systemRan[21] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanBC_o;
    systemRan[22] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem1_a.IfActionSubsystem3_SubsysRanBC;
    systemRan[23] = (sysRanDType *)&Planta_DW.IfActionSubsystem2_SubsysRanBC;
    systemRan[24] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC;
    systemRan[25] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanB_aa;
    systemRan[26] = (sysRanDType *)&Planta_DW.IfActionSubsystem1_SubsysRanB_f;
    systemRan[27] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem2_j.IfActionSubsystem2_SubsysRanBC;
    systemRan[28] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC;
    systemRan[29] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanBC_a;
    systemRan[30] = (sysRanDType *)&Planta_DW.IfActionSubsystem1_SubsysRanB_k;
    systemRan[31] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC;
    systemRan[32] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_a.IfActionSubsystem3_SubsysRanBC;
    systemRan[33] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanBC_m;
    systemRan[34] = (sysRanDType *)&Planta_DW.IfActionSubsystem1_SubsysRanB_m;
    systemRan[35] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem2_n.IfActionSubsystem2_SubsysRanBC;
    systemRan[36] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_o.IfActionSubsystem3_SubsysRanBC;
    systemRan[37] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanB_nr;
    systemRan[38] = (sysRanDType *)&Planta_DW.IfActionSubsystem1_SubsysRan_hc;
    systemRan[39] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC;
    systemRan[40] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_f.IfActionSubsystem3_SubsysRanBC;
    systemRan[41] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanBC_l;
    systemRan[42] = (sysRanDType *)&Planta_DW.IfActionSubsystem1_SubsysRanB_g;
    systemRan[43] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem2_h.IfActionSubsystem2_SubsysRanBC;
    systemRan[44] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_b.IfActionSubsystem3_SubsysRanBC;
    systemRan[45] = (sysRanDType *)&Planta_DW.IfActionSubsystem_SubsysRanBC_j;
    systemRan[46] = (sysRanDType *)&Planta_DW.IfActionSubsystem1_SubsysRanB_b;
    systemRan[47] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem2_dw.IfActionSubsystem2_SubsysRanBC;
    systemRan[48] = (sysRanDType *)
      &Planta_DW.IfActionSubsystem3_ol.IfActionSubsystem3_SubsysRanBC;
    rteiSetModelMappingInfoPtr(Planta_M->extModeInfo,
      &Planta_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Planta_M->extModeInfo, Planta_M->Sizes.checksums);
    rteiSetTPtr(Planta_M->extModeInfo, rtmGetTPtr(Planta_M));
  }

  Planta_M->solverInfoPtr = (&Planta_M->solverInfo);
  Planta_M->Timing.stepSize = (0.05);
  rtsiSetFixedStepSize(&Planta_M->solverInfo, 0.05);
  rtsiSetSolverMode(&Planta_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  Planta_M->ModelData.blockIO = ((void *) &Planta_B);

  {
    Planta_B.TransferFcn = 0.0;
    Planta_B.OperatingLevel = 0.0;
    Planta_B.TransferFcn1 = 0.0;
    Planta_B.Sum = 0.0;
    Planta_B.Derivative = 0.0;
    Planta_B.Merge = 0.0;
    Planta_B.Merge_h = 0.0;
    Planta_B.Merge_o = 0.0;
    Planta_B.Merge_b = 0.0;
    Planta_B.Merge_e = 0.0;
    Planta_B.Merge_oi = 0.0;
    Planta_B.Merge_f = 0.0;
    Planta_B.Merge_p = 0.0;
    Planta_B.Merge_l = 0.0;
    Planta_B.Merge_ox = 0.0;
    Planta_B.Merge_oxl = 0.0;
    Planta_B.Merge_c = 0.0;
    Planta_B.Saturation = 0.0;
    Planta_B.AmplifierGain = 0.0;
    Planta_B.VoltstocmTank1 = 0.0;
    Planta_B.VoltstocmTank2 = 0.0;
  }

  /* parameters */
  Planta_M->ModelData.defaultParam = ((real_T *)&Planta_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &Planta_X;
    Planta_M->ModelData.contStates = (x);
    (void) memset((void *)&Planta_X, 0,
                  sizeof(X_Planta_T));
  }

  /* states (dwork) */
  Planta_M->ModelData.dwork = ((void *) &Planta_DW);
  (void) memset((void *)&Planta_DW, 0,
                sizeof(DW_Planta_T));
  Planta_DW.HILInitialize_AIMinimums[0] = 0.0;
  Planta_DW.HILInitialize_AIMinimums[1] = 0.0;
  Planta_DW.HILInitialize_AIMaximums[0] = 0.0;
  Planta_DW.HILInitialize_AIMaximums[1] = 0.0;
  Planta_DW.HILInitialize_AOMinimums[0] = 0.0;
  Planta_DW.HILInitialize_AOMinimums[1] = 0.0;
  Planta_DW.HILInitialize_AOMaximums[0] = 0.0;
  Planta_DW.HILInitialize_AOMaximums[1] = 0.0;
  Planta_DW.HILInitialize_AOVoltages[0] = 0.0;
  Planta_DW.HILInitialize_AOVoltages[1] = 0.0;
  Planta_DW.HILInitialize_FilterFrequency[0] = 0.0;
  Planta_DW.HILInitialize_FilterFrequency[1] = 0.0;
  Planta_DW.TimeStampA = 0.0;
  Planta_DW.LastUAtTimeA = 0.0;
  Planta_DW.TimeStampB = 0.0;
  Planta_DW.LastUAtTimeB = 0.0;
  Planta_DW.HILReadAnalog_Buffer[0] = 0.0;
  Planta_DW.HILReadAnalog_Buffer[1] = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Planta_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Initialize Sizes */
  Planta_M->Sizes.numContStates = (2); /* Number of continuous states */
  Planta_M->Sizes.numY = (0);          /* Number of model outputs */
  Planta_M->Sizes.numU = (0);          /* Number of model inputs */
  Planta_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Planta_M->Sizes.numSampTimes = (2);  /* Number of sample times */
  Planta_M->Sizes.numBlocks = (213);   /* Number of blocks */
  Planta_M->Sizes.numBlockIO = (21);   /* Number of block outputs */
  Planta_M->Sizes.numBlockPrms = (184);/* Sum of parameter "widths" */
  return Planta_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
