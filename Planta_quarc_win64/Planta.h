/*
 * Planta.h
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
#ifndef RTW_HEADER_Planta_h_
#define RTW_HEADER_Planta_h_
#include <string.h>
#ifndef Planta_COMMON_INCLUDES_
# define Planta_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#endif                                 /* Planta_COMMON_INCLUDES_ */

#include "Planta_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define Planta_rtModel                 RT_MODEL_Planta_T

/* Block states (auto storage) for system '<S24>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S24>/If Action Subsystem3' */
} DW_IfActionSubsystem3_Planta_T;

/* Block states (auto storage) for system '<S24>/If Action Subsystem2' */
typedef struct {
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S24>/If Action Subsystem2' */
} DW_IfActionSubsystem2_Planta_T;

/* Block states (auto storage) for system '<S41>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S41>/If Action Subsystem3' */
} DW_IfActionSubsystem3_Plant_p_T;

/* Block states (auto storage) for system '<S66>/If Action Subsystem3' */
typedef struct {
  int8_T IfActionSubsystem3_SubsysRanBC;/* '<S66>/If Action Subsystem3' */
} DW_IfActionSubsystem3_Plant_o_T;

/* Block states (auto storage) for system '<S66>/If Action Subsystem2' */
typedef struct {
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S66>/If Action Subsystem2' */
} DW_IfActionSubsystem2_Plant_l_T;

/* Block signals (auto storage) */
typedef struct {
  real_T TransferFcn;                  /* '<Root>/Transfer Fcn' */
  real_T OperatingLevel;               /* '<Root>/Operating Level' */
  real_T TransferFcn1;                 /* '<Root>/Transfer Fcn1' */
  real_T Sum;                          /* '<S1>/Sum' */
  real_T Derivative;                   /* '<S1>/Derivative' */
  real_T Merge;                        /* '<S24>/Merge' */
  real_T Merge_h;                      /* '<S42>/Merge' */
  real_T Merge_o;                      /* '<S26>/Merge' */
  real_T Merge_b;                      /* '<S25>/Merge' */
  real_T Merge_e;                      /* '<S41>/Merge' */
  real_T Merge_oi;                     /* '<S44>/Merge' */
  real_T Merge_f;                      /* '<S43>/Merge' */
  real_T Merge_p;                      /* '<S45>/Merge' */
  real_T Merge_l;                      /* '<S67>/Merge' */
  real_T Merge_ox;                     /* '<S66>/Merge' */
  real_T Merge_oxl;                    /* '<S68>/Merge' */
  real_T Merge_c;                      /* '<S5>/Merge' */
  real_T Saturation;                   /* '<Root>/Saturation' */
  real_T AmplifierGain;                /* '<Root>/Amplifier Gain' */
  real_T VoltstocmTank1;               /* '<Root>/Volts to cm Tank 1 ' */
  real_T VoltstocmTank2;               /* '<Root>/Volts to cm Tank 2' */
} B_Planta_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_AIMinimums[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[2];  /* '<Root>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[2];/* '<Root>/HIL Initialize' */
  real_T TimeStampA;                   /* '<S1>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S1>/Derivative' */
  real_T TimeStampB;                   /* '<S1>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S1>/Derivative' */
  real_T HILReadAnalog_Buffer[2];      /* '<Root>/HIL Read Analog' */
  t_card HILInitialize_Card;           /* '<Root>/HIL Initialize' */
  void *HILWriteAnalog_PWORK;          /* '<Root>/HIL Write Analog' */
  struct {
    void *LoggedData;
  } MotorVoltageV_PWORK;               /* '<Root>/Motor Voltage (V)' */

  struct {
    void *LoggedData;
  } Tank1Levelcm_PWORK;                /* '<Root>/Tank 1 Level  (cm)' */

  struct {
    void *LoggedData;
  } Tank2Levelcm_PWORK;                /* '<Root>/Tank 2 Level (cm)' */

  void *HILReadAnalog_PWORK;           /* '<Root>/HIL Read Analog' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S1>/Scope' */

  int32_T HILInitialize_ClockModes;    /* '<Root>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[2];/* '<Root>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[2];/* '<Root>/HIL Initialize' */
  int8_T If_ActiveSubsystem;           /* '<S24>/If' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S24>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S24>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_l;         /* '<S42>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_o;/* '<S42>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanBC;/* '<S42>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_f;         /* '<S26>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_n;/* '<S26>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_h;/* '<S26>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_e;         /* '<S25>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_h;/* '<S25>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_o;/* '<S25>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_j;         /* '<S41>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_f;/* '<S41>/If Action Subsystem' */
  int8_T IfActionSubsystem2_SubsysRanB_g;/* '<S41>/If Action Subsystem2' */
  int8_T If_ActiveSubsystem_a;         /* '<S44>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_a;/* '<S44>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_k;/* '<S44>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_i;         /* '<S43>/If' */
  int8_T IfActionSubsystem_SubsysRanB_aa;/* '<S43>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_f;/* '<S43>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_b;         /* '<S45>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_m;/* '<S45>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_m;/* '<S45>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_k;         /* '<S67>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_l;/* '<S67>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_g;/* '<S67>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_m;         /* '<S66>/If' */
  int8_T IfActionSubsystem_SubsysRanB_nr;/* '<S66>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRan_hc;/* '<S66>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_g;         /* '<S68>/If' */
  int8_T IfActionSubsystem_SubsysRanBC_j;/* '<S68>/If Action Subsystem' */
  int8_T IfActionSubsystem1_SubsysRanB_b;/* '<S68>/If Action Subsystem1' */
  int8_T If_ActiveSubsystem_k2;        /* '<S5>/If' */
  int8_T ActionOne_SubsysRanBC;        /* '<S5>/Action: One' */
  int8_T Actionu1_SubsysRanBC;         /* '<S5>/Action: u1' */
  DW_IfActionSubsystem2_Plant_l_T IfActionSubsystem2_dw;/* '<S68>/If Action Subsystem2' */
  DW_IfActionSubsystem3_Plant_o_T IfActionSubsystem3_ol;/* '<S68>/If Action Subsystem3' */
  DW_IfActionSubsystem2_Plant_l_T IfActionSubsystem2_h;/* '<S67>/If Action Subsystem2' */
  DW_IfActionSubsystem3_Plant_o_T IfActionSubsystem3_b;/* '<S67>/If Action Subsystem3' */
  DW_IfActionSubsystem2_Plant_l_T IfActionSubsystem2_m;/* '<S66>/If Action Subsystem2' */
  DW_IfActionSubsystem3_Plant_o_T IfActionSubsystem3_f;/* '<S66>/If Action Subsystem3' */
  DW_IfActionSubsystem2_Planta_T IfActionSubsystem2_n;/* '<S45>/If Action Subsystem2' */
  DW_IfActionSubsystem3_Planta_T IfActionSubsystem3_o;/* '<S45>/If Action Subsystem3' */
  DW_IfActionSubsystem2_Planta_T IfActionSubsystem2_k;/* '<S44>/If Action Subsystem2' */
  DW_IfActionSubsystem3_Planta_T IfActionSubsystem3_a;/* '<S44>/If Action Subsystem3' */
  DW_IfActionSubsystem2_Planta_T IfActionSubsystem2_j;/* '<S43>/If Action Subsystem2' */
  DW_IfActionSubsystem3_Planta_T IfActionSubsystem3_i;/* '<S43>/If Action Subsystem3' */
  DW_IfActionSubsystem3_Plant_p_T IfActionSubsystem3_p;/* '<S42>/If Action Subsystem3' */
  DW_IfActionSubsystem3_Planta_T IfActionSubsystem1_a;/* '<S42>/If Action Subsystem1' */
  DW_IfActionSubsystem3_Plant_p_T IfActionSubsystem3_c;/* '<S41>/If Action Subsystem3' */
  DW_IfActionSubsystem3_Planta_T IfActionSubsystem1_i;/* '<S41>/If Action Subsystem1' */
  DW_IfActionSubsystem2_Planta_T IfActionSubsystem2_e;/* '<S26>/If Action Subsystem2' */
  DW_IfActionSubsystem3_Planta_T IfActionSubsystem3_m;/* '<S26>/If Action Subsystem3' */
  DW_IfActionSubsystem2_Planta_T IfActionSubsystem2_g;/* '<S25>/If Action Subsystem2' */
  DW_IfActionSubsystem3_Planta_T IfActionSubsystem3_e;/* '<S25>/If Action Subsystem3' */
  DW_IfActionSubsystem2_Planta_T IfActionSubsystem2;/* '<S24>/If Action Subsystem2' */
  DW_IfActionSubsystem3_Planta_T IfActionSubsystem3;/* '<S24>/If Action Subsystem3' */
} DW_Planta_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<Root>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
} X_Planta_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T TransferFcn_CSTATE;           /* '<Root>/Transfer Fcn' */
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
} XDot_Planta_T;

/* State disabled  */
typedef struct {
  boolean_T TransferFcn_CSTATE;        /* '<Root>/Transfer Fcn' */
  boolean_T TransferFcn1_CSTATE;       /* '<Root>/Transfer Fcn1' */
} XDis_Planta_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            Planta_B
#define BlockIO                        B_Planta_T
#define rtX                            Planta_X
#define ContinuousStates               X_Planta_T
#define rtXdot                         Planta_XDot
#define StateDerivatives               XDot_Planta_T
#define tXdis                          Planta_XDis
#define StateDisabled                  XDis_Planta_T
#define rtP                            Planta_P
#define Parameters                     P_Planta_T
#define rtDWork                        Planta_DW
#define D_Work                         DW_Planta_T

/* Parameters (auto storage) */
struct P_Planta_T_ {
  real_T N_a;                          /* Mask Parameter: N_a
                                        * Referenced by: '<S24>/If Action Subsystem3'
                                        */
  real_T GP_a;                         /* Mask Parameter: GP_a
                                        * Referenced by: '<S42>/If Action Subsystem1'
                                        */
  real_T Z_a;                          /* Mask Parameter: Z_a
                                        * Referenced by: '<S26>/If Action Subsystem3'
                                        */
  real_T P_a;                          /* Mask Parameter: P_a
                                        * Referenced by: '<S25>/If Action Subsystem3'
                                        */
  real_T GN_a;                         /* Mask Parameter: GN_a
                                        * Referenced by: '<S41>/If Action Subsystem1'
                                        */
  real_T PP_a;                         /* Mask Parameter: PP_a
                                        * Referenced by: '<S44>/If Action Subsystem3'
                                        */
  real_T PN_a;                         /* Mask Parameter: PN_a
                                        * Referenced by: '<S43>/If Action Subsystem3'
                                        */
  real_T Z_a_o;                        /* Mask Parameter: Z_a_o
                                        * Referenced by: '<S45>/If Action Subsystem3'
                                        */
  real_T B_a;                          /* Mask Parameter: B_a
                                        * Referenced by: '<S67>/If Action Subsystem3'
                                        */
  real_T A_a;                          /* Mask Parameter: A_a
                                        * Referenced by: '<S66>/If Action Subsystem3'
                                        */
  real_T M_a;                          /* Mask Parameter: M_a
                                        * Referenced by: '<S68>/If Action Subsystem3'
                                        */
  real_T HILInitialize_analog_input_maxi;/* Mask Parameter: HILInitialize_analog_input_maxi
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_analog_input_mini;/* Mask Parameter: HILInitialize_analog_input_mini
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_analog_output_max;/* Mask Parameter: HILInitialize_analog_output_max
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_analog_output_min;/* Mask Parameter: HILInitialize_analog_output_min
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T N_b;                          /* Mask Parameter: N_b
                                        * Referenced by:
                                        *   '<S24>/If Action Subsystem2'
                                        *   '<S24>/If Action Subsystem3'
                                        */
  real_T GP_b;                         /* Mask Parameter: GP_b
                                        * Referenced by: '<S42>/If Action Subsystem1'
                                        */
  real_T Z_b;                          /* Mask Parameter: Z_b
                                        * Referenced by:
                                        *   '<S26>/If Action Subsystem2'
                                        *   '<S26>/If Action Subsystem3'
                                        */
  real_T P_b;                          /* Mask Parameter: P_b
                                        * Referenced by:
                                        *   '<S25>/If Action Subsystem2'
                                        *   '<S25>/If Action Subsystem3'
                                        */
  real_T GN_b;                         /* Mask Parameter: GN_b
                                        * Referenced by: '<S41>/If Action Subsystem1'
                                        */
  real_T PP_b;                         /* Mask Parameter: PP_b
                                        * Referenced by:
                                        *   '<S44>/If Action Subsystem2'
                                        *   '<S44>/If Action Subsystem3'
                                        */
  real_T PN_b;                         /* Mask Parameter: PN_b
                                        * Referenced by:
                                        *   '<S43>/If Action Subsystem2'
                                        *   '<S43>/If Action Subsystem3'
                                        */
  real_T Z_b_g;                        /* Mask Parameter: Z_b_g
                                        * Referenced by:
                                        *   '<S45>/If Action Subsystem2'
                                        *   '<S45>/If Action Subsystem3'
                                        */
  real_T B_b;                          /* Mask Parameter: B_b
                                        * Referenced by:
                                        *   '<S67>/If Action Subsystem2'
                                        *   '<S67>/If Action Subsystem3'
                                        */
  real_T A_b;                          /* Mask Parameter: A_b
                                        * Referenced by:
                                        *   '<S66>/If Action Subsystem2'
                                        *   '<S66>/If Action Subsystem3'
                                        */
  real_T M_b;                          /* Mask Parameter: M_b
                                        * Referenced by:
                                        *   '<S68>/If Action Subsystem2'
                                        *   '<S68>/If Action Subsystem3'
                                        */
  real_T N_c;                          /* Mask Parameter: N_c
                                        * Referenced by: '<S24>/If Action Subsystem2'
                                        */
  real_T GP_c;                         /* Mask Parameter: GP_c
                                        * Referenced by: '<S42>/If Action Subsystem3'
                                        */
  real_T Z_c;                          /* Mask Parameter: Z_c
                                        * Referenced by: '<S26>/If Action Subsystem2'
                                        */
  real_T P_c;                          /* Mask Parameter: P_c
                                        * Referenced by: '<S25>/If Action Subsystem2'
                                        */
  real_T GN_c;                         /* Mask Parameter: GN_c
                                        * Referenced by: '<S41>/If Action Subsystem3'
                                        */
  real_T PP_c;                         /* Mask Parameter: PP_c
                                        * Referenced by: '<S44>/If Action Subsystem2'
                                        */
  real_T PN_c;                         /* Mask Parameter: PN_c
                                        * Referenced by: '<S43>/If Action Subsystem2'
                                        */
  real_T Z_c_g;                        /* Mask Parameter: Z_c_g
                                        * Referenced by: '<S45>/If Action Subsystem2'
                                        */
  real_T B_c;                          /* Mask Parameter: B_c
                                        * Referenced by: '<S67>/If Action Subsystem2'
                                        */
  real_T A_c;                          /* Mask Parameter: A_c
                                        * Referenced by: '<S66>/If Action Subsystem2'
                                        */
  real_T M_c;                          /* Mask Parameter: M_c
                                        * Referenced by: '<S68>/If Action Subsystem2'
                                        */
  real_T GP_d;                         /* Mask Parameter: GP_d
                                        * Referenced by: '<S42>/If Action Subsystem3'
                                        */
  real_T GN_d;                         /* Mask Parameter: GN_d
                                        * Referenced by: '<S41>/If Action Subsystem3'
                                        */
  real_T HILInitialize_final_analog_outp;/* Mask Parameter: HILInitialize_final_analog_outp
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_final_pwm_outputs;/* Mask Parameter: HILInitialize_final_pwm_outputs
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_initial_analog_ou;/* Mask Parameter: HILInitialize_initial_analog_ou
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_initial_pwm_outpu;/* Mask Parameter: HILInitialize_initial_pwm_outpu
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_pwm_frequency;  /* Mask Parameter: HILInitialize_pwm_frequency
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  real_T HILInitialize_set_other_outputs;/* Mask Parameter: HILInitialize_set_other_outputs
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_d;/* Mask Parameter: HILInitialize_set_other_outpu_d
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_p;/* Mask Parameter: HILInitialize_set_other_outpu_p
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_set_other_outpu_f;/* Mask Parameter: HILInitialize_set_other_outpu_f
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_watchdog_analog_o;/* Mask Parameter: HILInitialize_watchdog_analog_o
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  real_T HILInitialize_watchdog_pwm_outp;/* Mask Parameter: HILInitialize_watchdog_pwm_outp
                                          * Referenced by: '<Root>/HIL Initialize'
                                          */
  int32_T HILInitialize_hardware_clocks;/* Mask Parameter: HILInitialize_hardware_clocks
                                         * Referenced by: '<Root>/HIL Initialize'
                                         */
  int32_T HILInitialize_initial_encoder_c;/* Mask Parameter: HILInitialize_initial_encoder_c
                                           * Referenced by: '<Root>/HIL Initialize'
                                           */
  int32_T HILInitialize_pwm_modes;     /* Mask Parameter: HILInitialize_pwm_modes
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  int32_T HILInitialize_watchdog_digital_;/* Mask Parameter: HILInitialize_watchdog_digital_
                                           * Referenced by: '<Root>/HIL Initialize'
                                           */
  uint32_T HILInitialize_analog_input_chan[2];/* Mask Parameter: HILInitialize_analog_input_chan
                                               * Referenced by: '<Root>/HIL Initialize'
                                               */
  uint32_T HILInitialize_analog_output_cha[2];/* Mask Parameter: HILInitialize_analog_output_cha
                                               * Referenced by: '<Root>/HIL Initialize'
                                               */
  uint32_T HILWriteAnalog_channels;    /* Mask Parameter: HILWriteAnalog_channels
                                        * Referenced by: '<Root>/HIL Write Analog'
                                        */
  uint32_T HILReadAnalog_channels[2];  /* Mask Parameter: HILReadAnalog_channels
                                        * Referenced by: '<Root>/HIL Read Analog'
                                        */
  uint32_T HILInitialize_encoder_channels[2];/* Mask Parameter: HILInitialize_encoder_channels
                                              * Referenced by: '<Root>/HIL Initialize'
                                              */
  uint32_T HILInitialize_quadrature;   /* Mask Parameter: HILInitialize_quadrature
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  boolean_T HILInitialize_active;      /* Mask Parameter: HILInitialize_active
                                        * Referenced by: '<Root>/HIL Initialize'
                                        */
  boolean_T HILInitialize_final_digital_out;/* Mask Parameter: HILInitialize_final_digital_out
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_initial_digital_o;/* Mask Parameter: HILInitialize_initial_digital_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_input_;/* Mask Parameter: HILInitialize_set_analog_input_
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_inpu_h;/* Mask Parameter: HILInitialize_set_analog_inpu_h
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_output;/* Mask Parameter: HILInitialize_set_analog_output
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_c;/* Mask Parameter: HILInitialize_set_analog_outp_c
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_o;/* Mask Parameter: HILInitialize_set_analog_outp_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_e;/* Mask Parameter: HILInitialize_set_analog_outp_e
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_b;/* Mask Parameter: HILInitialize_set_analog_outp_b
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_outp_h;/* Mask Parameter: HILInitialize_set_analog_outp_h
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_analog_out_bm;/* Mask Parameter: HILInitialize_set_analog_out_bm
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_frequen;/* Mask Parameter: HILInitialize_set_clock_frequen
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_frequ_i;/* Mask Parameter: HILInitialize_set_clock_frequ_i
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_params_;/* Mask Parameter: HILInitialize_set_clock_params_
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_clock_param_n;/* Mask Parameter: HILInitialize_set_clock_param_n
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_outpu;/* Mask Parameter: HILInitialize_set_digital_outpu
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_l;/* Mask Parameter: HILInitialize_set_digital_out_l
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_k;/* Mask Parameter: HILInitialize_set_digital_out_k
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_o;/* Mask Parameter: HILInitialize_set_digital_out_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_j;/* Mask Parameter: HILInitialize_set_digital_out_j
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_ou_ol;/* Mask Parameter: HILInitialize_set_digital_ou_ol
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_digital_out_i;/* Mask Parameter: HILInitialize_set_digital_out_i
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_count;/* Mask Parameter: HILInitialize_set_encoder_count
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_cou_e;/* Mask Parameter: HILInitialize_set_encoder_cou_e
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_param;/* Mask Parameter: HILInitialize_set_encoder_param
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_encoder_par_a;/* Mask Parameter: HILInitialize_set_encoder_par_a
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_other_outpu_a;/* Mask Parameter: HILInitialize_set_other_outpu_a
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_a;/* Mask Parameter: HILInitialize_set_pwm_outputs_a
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_i;/* Mask Parameter: HILInitialize_set_pwm_outputs_i
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_j;/* Mask Parameter: HILInitialize_set_pwm_outputs_j
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_b;/* Mask Parameter: HILInitialize_set_pwm_outputs_b
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_outputs_o;/* Mask Parameter: HILInitialize_set_pwm_outputs_o
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_params_at;/* Mask Parameter: HILInitialize_set_pwm_params_at
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  boolean_T HILInitialize_set_pwm_params__e;/* Mask Parameter: HILInitialize_set_pwm_params__e
                                             * Referenced by: '<Root>/HIL Initialize'
                                             */
  real_T Switch_Threshold;             /* Expression: 1
                                        * Referenced by: '<S3>/Switch'
                                        */
  real_T Out1_Y0;                      /* Expression: 0
                                        * Referenced by: '<S27>/Out1'
                                        */
  real_T _Value;                       /* Expression: 0
                                        * Referenced by: '<S27>/0'
                                        */
  real_T Out1_Y0_p;                    /* Expression: 1
                                        * Referenced by: '<S28>/Out1'
                                        */
  real_T _Value_j;                     /* Expression: 1
                                        * Referenced by: '<S28>/0'
                                        */
  real_T Out1_Y0_f;                    /* Expression: 0
                                        * Referenced by: '<S31>/Out1'
                                        */
  real_T _Value_k;                     /* Expression: 0
                                        * Referenced by: '<S31>/0'
                                        */
  real_T Out1_Y0_n;                    /* Expression: 1
                                        * Referenced by: '<S32>/Out1'
                                        */
  real_T _Value_g;                     /* Expression: 1
                                        * Referenced by: '<S32>/0'
                                        */
  real_T Out1_Y0_k;                    /* Expression: 0
                                        * Referenced by: '<S35>/Out1'
                                        */
  real_T _Value_d;                     /* Expression: 0
                                        * Referenced by: '<S35>/0'
                                        */
  real_T Out1_Y0_j;                    /* Expression: 1
                                        * Referenced by: '<S36>/Out1'
                                        */
  real_T _Value_l;                     /* Expression: 1
                                        * Referenced by: '<S36>/0'
                                        */
  real_T Out1_Y0_l;                    /* Expression: 0
                                        * Referenced by: '<S39>/Out1'
                                        */
  real_T One_Value;                    /* Expression: 1
                                        * Referenced by: '<S39>/One'
                                        */
  real_T Out1_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S46>/Out1'
                                        */
  real_T _Value_o;                     /* Expression: 0
                                        * Referenced by: '<S46>/0'
                                        */
  real_T Out1_Y0_ks;                   /* Expression: 0
                                        * Referenced by: '<S48>/Out1'
                                        */
  real_T _Value_c;                     /* Expression: 1
                                        * Referenced by: '<S48>/0'
                                        */
  real_T Out1_Y0_m;                    /* Expression: 0
                                        * Referenced by: '<S50>/Out1'
                                        */
  real_T _Value_ov;                    /* Expression: 0
                                        * Referenced by: '<S50>/0'
                                        */
  real_T Out1_Y0_o;                    /* Expression: 0
                                        * Referenced by: '<S52>/Out1'
                                        */
  real_T _Value_b;                     /* Expression: 1
                                        * Referenced by: '<S52>/0'
                                        */
  real_T Out1_Y0_k4;                   /* Expression: 0
                                        * Referenced by: '<S54>/Out1'
                                        */
  real_T _Value_n;                     /* Expression: 0
                                        * Referenced by: '<S54>/0'
                                        */
  real_T Out1_Y0_ok;                   /* Expression: 1
                                        * Referenced by: '<S55>/Out1'
                                        */
  real_T _Value_i;                     /* Expression: 1
                                        * Referenced by: '<S55>/0'
                                        */
  real_T Out1_Y0_pp;                   /* Expression: 0
                                        * Referenced by: '<S58>/Out1'
                                        */
  real_T _Value_h;                     /* Expression: 0
                                        * Referenced by: '<S58>/0'
                                        */
  real_T Out1_Y0_gq;                   /* Expression: 1
                                        * Referenced by: '<S59>/Out1'
                                        */
  real_T _Value_a;                     /* Expression: 1
                                        * Referenced by: '<S59>/0'
                                        */
  real_T Out1_Y0_fa;                   /* Expression: 0
                                        * Referenced by: '<S62>/Out1'
                                        */
  real_T _Value_dk;                    /* Expression: 0
                                        * Referenced by: '<S62>/0'
                                        */
  real_T Out1_Y0_d;                    /* Expression: 1
                                        * Referenced by: '<S63>/Out1'
                                        */
  real_T _Value_lc;                    /* Expression: 1
                                        * Referenced by: '<S63>/0'
                                        */
  real_T Out1_Y0_fz;                   /* Expression: 0
                                        * Referenced by: '<S69>/Out1'
                                        */
  real_T _Value_ck;                    /* Expression: 0
                                        * Referenced by: '<S69>/0'
                                        */
  real_T Out1_Y0_ju;                   /* Expression: 1
                                        * Referenced by: '<S70>/Out1'
                                        */
  real_T _Value_cks;                   /* Expression: 1
                                        * Referenced by: '<S70>/0'
                                        */
  real_T Out1_Y0_b;                    /* Expression: 0
                                        * Referenced by: '<S73>/Out1'
                                        */
  real_T _Value_p;                     /* Expression: 0
                                        * Referenced by: '<S73>/0'
                                        */
  real_T Out1_Y0_ms;                   /* Expression: 1
                                        * Referenced by: '<S74>/Out1'
                                        */
  real_T _Value_m;                     /* Expression: 1
                                        * Referenced by: '<S74>/0'
                                        */
  real_T Out1_Y0_c;                    /* Expression: 0
                                        * Referenced by: '<S77>/Out1'
                                        */
  real_T _Value_p5;                    /* Expression: 0
                                        * Referenced by: '<S77>/0'
                                        */
  real_T Out1_Y0_oq;                   /* Expression: 1
                                        * Referenced by: '<S78>/Out1'
                                        */
  real_T _Value_ko;                    /* Expression: 1
                                        * Referenced by: '<S78>/0'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T TransferFcn_A;                /* Computed Parameter: TransferFcn_A
                                        * Referenced by: '<Root>/Transfer Fcn'
                                        */
  real_T TransferFcn_C;                /* Computed Parameter: TransferFcn_C
                                        * Referenced by: '<Root>/Transfer Fcn'
                                        */
  real_T Weight_Value;                 /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S8>/Weight'
                                        */
  real_T OperatingLevel_Value;         /* Expression: 5
                                        * Referenced by: '<Root>/Operating Level'
                                        */
  real_T TransferFcn1_A;               /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C;               /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  real_T PNConstant_Value;             /* Expression: fis.output(1).mf(2).params(1)
                                        * Referenced by: '<S23>/PN(Constant)'
                                        */
  real_T Weight_Value_o;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S15>/Weight'
                                        */
  real_T Weight_Value_a;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S16>/Weight'
                                        */
  real_T GNConstant_Value;             /* Expression: fis.output(1).mf(1).params(1)
                                        * Referenced by: '<S23>/GN(--)(Constant)'
                                        */
  real_T Weight_Value_l;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S17>/Weight'
                                        */
  real_T GPConstant_Value;             /* Expression: fis.output(1).mf(5).params(1)
                                        * Referenced by: '<S23>/GP(++)(Constant)'
                                        */
  real_T Weight_Value_j;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S18>/Weight'
                                        */
  real_T Weight_Value_le;              /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S19>/Weight'
                                        */
  real_T Weight_Value_g;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S20>/Weight'
                                        */
  real_T Weight_Value_jk;              /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S21>/Weight'
                                        */
  real_T Weight_Value_h;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S22>/Weight'
                                        */
  real_T Weight_Value_i;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S9>/Weight'
                                        */
  real_T PPConstant_Value;             /* Expression: fis.output(1).mf(4).params(1)
                                        * Referenced by: '<S23>/PP(Constant)'
                                        */
  real_T Weight_Value_k;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S10>/Weight'
                                        */
  real_T Weight_Value_m;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S11>/Weight'
                                        */
  real_T Weight_Value_c;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S12>/Weight'
                                        */
  real_T Z1Constant_Value;             /* Expression: fis.output(1).mf(6).params(1)
                                        * Referenced by: '<S23>/Z1(Constant)'
                                        */
  real_T Weight_Value_n;               /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S13>/Weight'
                                        */
  real_T Z2Constant_Value;             /* Expression: fis.output(1).mf(7).params(1)
                                        * Referenced by: '<S23>/Z2(Constant)'
                                        */
  real_T Weight_Value_ix;              /* Expression: fis.rule(j_rule).weight
                                        * Referenced by: '<S14>/Weight'
                                        */
  real_T ZConstant_Value;              /* Expression: fis.output(1).mf(3).params(1)
                                        * Referenced by: '<S23>/Z(Constant)'
                                        */
  real_T Zero_Value;                   /* Expression: 0
                                        * Referenced by: '<S3>/Zero'
                                        */
  real_T MidRange_Value;               /* Expression: mean(cat(1,fis.output.range),2)
                                        * Referenced by: '<S3>/MidRange'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 29
                                        * Referenced by: '<S1>/Switch'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 12
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -12
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T AmplifierGain_Gain;           /* Expression: 1/3
                                        * Referenced by: '<Root>/Amplifier Gain'
                                        */
  real_T VoltstocmTank1_Gain;          /* Expression: 30/4.8
                                        * Referenced by: '<Root>/Volts to cm Tank 1 '
                                        */
  real_T VoltstocmTank2_Gain;          /* Expression: 30/4.8
                                        * Referenced by: '<Root>/Volts to cm Tank 2'
                                        */
  boolean_T HILWriteAnalog_Active;     /* Computed Parameter: HILWriteAnalog_Active
                                        * Referenced by: '<Root>/HIL Write Analog'
                                        */
  boolean_T HILReadAnalog_Active;      /* Computed Parameter: HILReadAnalog_Active
                                        * Referenced by: '<Root>/HIL Read Analog'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Planta_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeF[1][2];
    ODE1_IntgData intgData;
    void *dwork;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Planta_T Planta_P;

/* Block signals (auto storage) */
extern B_Planta_T Planta_B;

/* Continuous states (auto storage) */
extern X_Planta_T Planta_X;

/* Block states (auto storage) */
extern DW_Planta_T Planta_DW;

/* Model entry point functions */
extern void Planta_initialize(void);
extern void Planta_output(void);
extern void Planta_update(void);
extern void Planta_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Planta_T *const Planta_M;

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
 * '<Root>' : 'Planta'
 * '<S1>'   : 'Planta/Subsystem'
 * '<S2>'   : 'Planta/Subsystem/Fuzzy Logic  Controller'
 * '<S3>'   : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard'
 * '<S4>'   : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO'
 * '<S5>'   : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1'
 * '<S6>'   : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO'
 * '<S7>'   : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF'
 * '<S8>'   : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule1'
 * '<S9>'   : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule10'
 * '<S10>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule11'
 * '<S11>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule12'
 * '<S12>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule13'
 * '<S13>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule14'
 * '<S14>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule15'
 * '<S15>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule2'
 * '<S16>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule3'
 * '<S17>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule4'
 * '<S18>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule5'
 * '<S19>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule6'
 * '<S20>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule7'
 * '<S21>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule8'
 * '<S22>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Rule9'
 * '<S23>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/TENSÃO'
 * '<S24>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/N'
 * '<S25>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/P'
 * '<S26>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/Z'
 * '<S27>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/N/If Action Subsystem'
 * '<S28>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/N/If Action Subsystem1'
 * '<S29>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/N/If Action Subsystem2'
 * '<S30>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/N/If Action Subsystem3'
 * '<S31>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/P/If Action Subsystem'
 * '<S32>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/P/If Action Subsystem1'
 * '<S33>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/P/If Action Subsystem2'
 * '<S34>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/P/If Action Subsystem3'
 * '<S35>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/Z/If Action Subsystem'
 * '<S36>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/Z/If Action Subsystem1'
 * '<S37>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/Z/If Action Subsystem2'
 * '<S38>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/DERRO/Z/If Action Subsystem3'
 * '<S39>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: One'
 * '<S40>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/Defuzzification1/Action: u1'
 * '<S41>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GN(++)'
 * '<S42>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GP(--)'
 * '<S43>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PN(+)'
 * '<S44>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PP(-)'
 * '<S45>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/Z'
 * '<S46>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GN(++)/If Action Subsystem'
 * '<S47>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GN(++)/If Action Subsystem1'
 * '<S48>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GN(++)/If Action Subsystem2'
 * '<S49>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GN(++)/If Action Subsystem3'
 * '<S50>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GP(--)/If Action Subsystem'
 * '<S51>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GP(--)/If Action Subsystem1'
 * '<S52>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GP(--)/If Action Subsystem2'
 * '<S53>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/GP(--)/If Action Subsystem3'
 * '<S54>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PN(+)/If Action Subsystem'
 * '<S55>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PN(+)/If Action Subsystem1'
 * '<S56>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PN(+)/If Action Subsystem2'
 * '<S57>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PN(+)/If Action Subsystem3'
 * '<S58>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PP(-)/If Action Subsystem'
 * '<S59>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PP(-)/If Action Subsystem1'
 * '<S60>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PP(-)/If Action Subsystem2'
 * '<S61>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/PP(-)/If Action Subsystem3'
 * '<S62>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/Z/If Action Subsystem'
 * '<S63>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/Z/If Action Subsystem1'
 * '<S64>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/Z/If Action Subsystem2'
 * '<S65>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/ERRO/Z/If Action Subsystem3'
 * '<S66>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/A'
 * '<S67>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/B'
 * '<S68>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/M'
 * '<S69>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/A/If Action Subsystem'
 * '<S70>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/A/If Action Subsystem1'
 * '<S71>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/A/If Action Subsystem2'
 * '<S72>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/A/If Action Subsystem3'
 * '<S73>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/B/If Action Subsystem'
 * '<S74>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/B/If Action Subsystem1'
 * '<S75>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/B/If Action Subsystem2'
 * '<S76>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/B/If Action Subsystem3'
 * '<S77>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/M/If Action Subsystem'
 * '<S78>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/M/If Action Subsystem1'
 * '<S79>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/M/If Action Subsystem2'
 * '<S80>'  : 'Planta/Subsystem/Fuzzy Logic  Controller/FIS Wizard/REF/M/If Action Subsystem3'
 */
#endif                                 /* RTW_HEADER_Planta_h_ */
