#include "__cf_Tanque.h"
#ifndef RTW_HEADER_Tanque_acc_private_h_
#define RTW_HEADER_Tanque_acc_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#if !defined(ss_VALIDATE_MEMORY)
#define ss_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
#ifndef __RTWTYPES_H__
#error This file requires rtwtypes.h to be included
#endif
void j0l3wmvcmm ( SimStruct * const S ) ; void jktcmhvnce ( SimStruct * const
S ) ; void kyrlxi2a4d ( SimStruct * const S , real_T fkn0pqa2kk , real_T *
lbajhfrl15 , jhnk3jbfny * localB , kjemkwgaia * localP ) ; void jghqix4p0b (
SimStruct * const S ) ; void af4uj3dkhr ( SimStruct * const S ) ; void
l5mc1dr5vk ( SimStruct * const S , real_T arw3zpk4rh , real_T * azt4a0dq3u ,
f5fmdet0xu * localB , mh2vzugcbh * localP ) ; void abpfm5ekvt ( SimStruct *
const S ) ; void fgnbjcyegu ( SimStruct * const S ) ; void p3cikaft51 (
real_T nobfpq2ne5 , real_T * dawicfqfys ) ; void ff4mg3w2td ( SimStruct *
const S ) ; void onwlwa5111 ( SimStruct * const S ) ; void neertw3nda (
SimStruct * const S , real_T cp1o4cyxbo , real_T * mkmktfz33e , dtk1zvxxrh *
localB , mycazueykl * localP ) ; void hy0v3imjx5 ( SimStruct * const S ) ;
void jy0uy14p5l ( SimStruct * const S ) ; void p154evmj22 ( real_T ibarcdtyeh
, real_T * bqat1rxqgp , kz0uakdpfi * localP ) ; void fz2vugll5z ( SimStruct *
const S ) ; void h0eyfrsjjo ( SimStruct * const S ) ; void jrfnq5hupl (
real_T bmokei4zzl , real_T * a0y5wgmtkl , ppxqrfzmfe * localP ) ;
#endif
