#include "__cf_Tanque.h"
#include <math.h>
#include "Tanque_acc.h"
#include "Tanque_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
void j0l3wmvcmm ( SimStruct * const S ) { if ( ssGetTaskTime ( S , 0 ) !=
ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } void jktcmhvnce (
SimStruct * const S ) { ssSetSolverNeedsReset ( S ) ; } void kyrlxi2a4d (
SimStruct * const S , real_T fkn0pqa2kk , real_T * lbajhfrl15 , jhnk3jbfny *
localB , kjemkwgaia * localP ) { if ( ssIsSampleHit ( S , 1 , 0 ) ) { localB
-> nvqqzp5ajo = localP -> P_0 ; localB -> kbqx5xkajc = localP -> P_1 ; } *
lbajhfrl15 = ( fkn0pqa2kk - localB -> nvqqzp5ajo ) / ( localB -> kbqx5xkajc -
localB -> nvqqzp5ajo ) ; } void mxyjqqkds1 ( SimStruct * const S ) { } void
jghqix4p0b ( SimStruct * const S ) { if ( ssGetTaskTime ( S , 0 ) !=
ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } void af4uj3dkhr (
SimStruct * const S ) { ssSetSolverNeedsReset ( S ) ; } void l5mc1dr5vk (
SimStruct * const S , real_T arw3zpk4rh , real_T * azt4a0dq3u , f5fmdet0xu *
localB , mh2vzugcbh * localP ) { if ( ssIsSampleHit ( S , 1 , 0 ) ) { localB
-> dvii2gmcrp = localP -> P_0 ; localB -> kq4khurfzi = localP -> P_1 ; } *
azt4a0dq3u = 1.0 / ( localB -> kq4khurfzi - localB -> dvii2gmcrp ) * ( localB
-> kq4khurfzi - arw3zpk4rh ) ; } void awdouhz5qh ( SimStruct * const S ) { }
void abpfm5ekvt ( SimStruct * const S ) { if ( ssGetTaskTime ( S , 0 ) !=
ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } void fgnbjcyegu (
SimStruct * const S ) { ssSetSolverNeedsReset ( S ) ; } void p3cikaft51 (
real_T nobfpq2ne5 , real_T * dawicfqfys ) { * dawicfqfys = nobfpq2ne5 ; }
void naiyij3k0s ( SimStruct * const S ) { } void ff4mg3w2td ( SimStruct *
const S ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } void onwlwa5111 ( SimStruct * const S ) {
ssSetSolverNeedsReset ( S ) ; } void neertw3nda ( SimStruct * const S ,
real_T cp1o4cyxbo , real_T * mkmktfz33e , dtk1zvxxrh * localB , mycazueykl *
localP ) { if ( ssIsSampleHit ( S , 1 , 0 ) ) { localB -> ppoar1lyaa = localP
-> P_0 ; localB -> llonq3pyjm = localP -> P_1 ; } * mkmktfz33e = 1.0 / (
localB -> llonq3pyjm - localB -> ppoar1lyaa ) * ( localB -> llonq3pyjm -
cp1o4cyxbo ) ; } void kdwxlzqe1c ( SimStruct * const S ) { } void hy0v3imjx5
( SimStruct * const S ) { if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) )
{ ssSetSolverNeedsReset ( S ) ; } } void jy0uy14p5l ( SimStruct * const S ) {
ssSetSolverNeedsReset ( S ) ; } void p154evmj22 ( real_T ibarcdtyeh , real_T
* bqat1rxqgp , kz0uakdpfi * localP ) { * bqat1rxqgp = ( ibarcdtyeh - localP
-> P_0 ) / ( localP -> P_1 - localP -> P_0 ) ; } void osdcizvj51 ( SimStruct
* const S ) { } void fz2vugll5z ( SimStruct * const S ) { if ( ssGetTaskTime
( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } void
h0eyfrsjjo ( SimStruct * const S ) { ssSetSolverNeedsReset ( S ) ; } void
jrfnq5hupl ( real_T bmokei4zzl , real_T * a0y5wgmtkl , ppxqrfzmfe * localP )
{ * a0y5wgmtkl = 1.0 / ( localP -> P_1 - localP -> P_0 ) * ( localP -> P_1 -
bmokei4zzl ) ; } void lktubhjoom ( SimStruct * const S ) { } static void
mdlOutputs ( SimStruct * S , int_T tid ) { real_T nroq5voj4x ; real_T
aiaidmeyur ; real_T lr40kmpjqr ; real_T lvxdhuuadp ; real_T h34ghyhcsd ;
real_T dqy0jiw2ha ; real_T dvpzefv5zm ; real_T kyngde5x3q ; real_T k2kaiha0x0
; real_T * lastU ; int8_T rtPrevAction ; int8_T rtAction ; real_T eynav1duv0
; real_T a35pr2w3n4 ; real_T cvxuyjimsc ; real_T iip5sbyhxe ; real_T
idcr5lu13i ; real_T cjnjyaw0fw ; real_T bhjla2l1q5 ; real_T i2azhv14hd ;
real_T iqgkepzwsz ; real_T pn4gwjuk4d ; real_T epfauqnqwi ; real_T ctsdho52by
; real_T khnrjbd3xi ; real_T h2ikbmhpvk ; real_T afrthth5lx ; real_T
o325w0il2l ; real_T e5aco1shsa ; real_T pmq13qbznr ; real_T inijxk5uxk ;
real_T p1mvd3x4in ; real_T fxr2rgutvm ; real_T an2ix4ey2w ; real_T hpb4iz3z5j
; real_T bzvkd1zzwh ; real_T jbbkppgsc0 ; real_T absy54gisj ; real_T
l0rur2d0kb ; real_T bn3dpvpqd3 ; real_T jbbfsyebdk ; real_T tmpForInput [ 15
] ; int32_T i ; n3qi1whofz * _rtB ; loikxjbxjg * _rtP ; f1xhd02yjc * _rtX ;
ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * ) ssGetRootDWork ( S ) ) ; _rtX
= ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ; _rtP = ( ( loikxjbxjg * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ;
_rtB -> bgizi1dr4j = 0.0 ; _rtB -> bgizi1dr4j += _rtP -> P_140 * _rtX ->
jb3bh2mwoo [ 1 ] ; ssCallAccelRunBlock ( S , 138 , 1 , SS_CALL_MDL_OUTPUTS )
; if ( ssIsSampleHit ( S , 1 , 0 ) ) { if ( ssIsMajorTimeStep ( S ) ) { _rtDW
-> p40sjv01ef = ( ssGetTaskTime ( S , 1 ) >= _rtP -> P_142 ) ; } if ( _rtDW
-> p40sjv01ef == 1 ) { _rtB -> oebyflqvsq = _rtP -> P_144 ; } else { _rtB ->
oebyflqvsq = _rtP -> P_143 ; } } _rtB -> iazsx12iod = _rtB -> oebyflqvsq -
_rtB -> bgizi1dr4j ; if ( ( _rtDW -> e1trn0sqth >= ssGetT ( S ) ) && ( _rtDW
-> ejhedoamiu >= ssGetT ( S ) ) ) { _rtB -> bgizi1dr4j = 0.0 ; } else {
a35pr2w3n4 = _rtDW -> e1trn0sqth ; lastU = & _rtDW -> a4ougupum1 ; if ( _rtDW
-> e1trn0sqth < _rtDW -> ejhedoamiu ) { if ( _rtDW -> ejhedoamiu < ssGetT ( S
) ) { a35pr2w3n4 = _rtDW -> ejhedoamiu ; lastU = & _rtDW -> iuvmp3z0cj ; } }
else { if ( _rtDW -> e1trn0sqth >= ssGetT ( S ) ) { a35pr2w3n4 = _rtDW ->
ejhedoamiu ; lastU = & _rtDW -> iuvmp3z0cj ; } } _rtB -> bgizi1dr4j = ( _rtB
-> iazsx12iod - * lastU ) / ( ssGetT ( S ) - a35pr2w3n4 ) ; }
ssCallAccelRunBlock ( S , 138 , 5 , SS_CALL_MDL_OUTPUTS ) ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> nl3j4afekz = _rtP -> P_145 ; }
nroq5voj4x = _rtB -> bgizi1dr4j ; rtPrevAction = _rtDW -> bnt3sc5luu ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( nroq5voj4x < - 20.0 ) || ( nroq5voj4x >
0.0 ) ) { rtAction = 0 ; } else if ( nroq5voj4x == - 10.0 ) { rtAction = 1 ;
} else if ( nroq5voj4x < - 10.0 ) { rtAction = 2 ; } else { rtAction = 3 ; }
_rtDW -> bnt3sc5luu = rtAction ; } else { rtAction = _rtDW -> bnt3sc5luu ; }
if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mhjuhn0iee = _rtP -> P_1 ;
} if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> bsdm5bqt2x ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mhjuhn0iee = _rtP -> P_3 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> fuxnvyfv03 ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , nroq5voj4x , & _rtB -> mhjuhn0iee , & _rtB -> kyrlxi2a4d1 , ( kjemkwgaia
* ) & _rtP -> kyrlxi2a4d1 ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> kyrlxi2a4d1 . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , nroq5voj4x , & _rtB ->
mhjuhn0iee , & _rtB -> l5mc1dr5vk5 , ( mh2vzugcbh * ) & _rtP -> l5mc1dr5vk5 )
; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> l5mc1dr5vk5 .
h4lk3uyrah ) ; } break ; } aiaidmeyur = _rtB -> iazsx12iod ; rtPrevAction =
_rtDW -> fr1pwdvp3y ; if ( ssIsMajorTimeStep ( S ) ) { if ( ( aiaidmeyur < -
45.0 ) || ( aiaidmeyur > - 10.0 ) ) { rtAction = 0 ; } else if ( ( aiaidmeyur
>= - 30.0 ) && ( aiaidmeyur <= - 20.0 ) ) { rtAction = 1 ; } else if (
aiaidmeyur < - 30.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW ->
fr1pwdvp3y = rtAction ; } else { rtAction = _rtDW -> fr1pwdvp3y ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : onwlwa5111 ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> bz3eddioeu = _rtP -> P_19
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> jlxosnz1e0 ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> bz3eddioeu = _rtP -> P_21 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> jdqpcnjo0s ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , aiaidmeyur , & _rtB -> bz3eddioeu , & _rtB -> mz4szwyqwt , ( kjemkwgaia *
) & _rtP -> mz4szwyqwt ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> mz4szwyqwt . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { ff4mg3w2td ( S ) ; } neertw3nda ( S , aiaidmeyur , & _rtB ->
bz3eddioeu , & _rtB -> kq3d35ps3n , ( mycazueykl * ) & _rtP -> kq3d35ps3n ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> kq3d35ps3n .
al4f1wargm ) ; } break ; } eynav1duv0 = _rtB -> bz3eddioeu * _rtB ->
mhjuhn0iee * _rtB -> nl3j4afekz ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> dw4an11502 = _rtP -> P_146 ; } a35pr2w3n4 = eynav1duv0 * _rtB ->
dw4an11502 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> hw1odkjh5z = _rtP
-> P_147 ; } rtPrevAction = _rtDW -> l0g1ghaucx ; if ( ssIsMajorTimeStep ( S
) ) { if ( ( nroq5voj4x < - 2.0 ) || ( nroq5voj4x > 2.0 ) ) { rtAction = 0 ;
} else if ( nroq5voj4x == 0.0 ) { rtAction = 1 ; } else if ( nroq5voj4x < 0.0
) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> l0g1ghaucx = rtAction ;
} else { rtAction = _rtDW -> l0g1ghaucx ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case
1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ;
case 3 : af4uj3dkhr ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> f44fxfdo43 = _rtP -> P_9 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> mk4xwva1q5 ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> f44fxfdo43 = _rtP -> P_11 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> gw0b5nhcij ) ; } break ; case 2 : if ( rtAction != rtPrevAction )
{ j0l3wmvcmm ( S ) ; } kyrlxi2a4d ( S , nroq5voj4x , & _rtB -> f44fxfdo43 , &
_rtB -> iau5yl1kgf , ( kjemkwgaia * ) & _rtP -> iau5yl1kgf ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> iau5yl1kgf . it3yavgf3n ) ;
} break ; case 3 : if ( rtAction != rtPrevAction ) { jghqix4p0b ( S ) ; }
l5mc1dr5vk ( S , nroq5voj4x , & _rtB -> f44fxfdo43 , & _rtB -> kc2m1obtd2 , (
mh2vzugcbh * ) & _rtP -> kc2m1obtd2 ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> kc2m1obtd2 . h4lk3uyrah ) ; } break ; } cvxuyjimsc =
_rtB -> bz3eddioeu * _rtB -> f44fxfdo43 * _rtB -> hw1odkjh5z ; iip5sbyhxe =
cvxuyjimsc * _rtB -> dw4an11502 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> g3jcenqil0 = _rtP -> P_148 ; } rtPrevAction = _rtDW -> fgczq2oga0 ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( nroq5voj4x < 0.0 ) || ( nroq5voj4x > 20.0
) ) { rtAction = 0 ; } else if ( nroq5voj4x == 10.0 ) { rtAction = 1 ; } else
if ( nroq5voj4x < 10.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW ->
fgczq2oga0 = rtAction ; } else { rtAction = _rtDW -> fgczq2oga0 ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> lzvwtwvkx3 = _rtP -> P_5 ;
} if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> i5jdl2wg1l ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> lzvwtwvkx3 = _rtP -> P_7 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> clslysxttw ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , nroq5voj4x , & _rtB -> lzvwtwvkx3 , & _rtB -> a4u5cj5gg3 , ( kjemkwgaia *
) & _rtP -> a4u5cj5gg3 ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> a4u5cj5gg3 . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , nroq5voj4x , & _rtB ->
lzvwtwvkx3 , & _rtB -> c0kd5ngnae , ( mh2vzugcbh * ) & _rtP -> c0kd5ngnae ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> c0kd5ngnae .
h4lk3uyrah ) ; } break ; } idcr5lu13i = _rtB -> bz3eddioeu * _rtB ->
lzvwtwvkx3 * _rtB -> g3jcenqil0 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> m40oim02go = _rtP -> P_149 ; } cjnjyaw0fw = idcr5lu13i * _rtB ->
m40oim02go ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> h0ls2ot0fv = _rtP
-> P_150 ; } rtPrevAction = _rtDW -> i4zfmeid1q ; if ( ssIsMajorTimeStep ( S
) ) { if ( ( aiaidmeyur < 10.0 ) || ( aiaidmeyur > 45.0 ) ) { rtAction = 0 ;
} else if ( ( aiaidmeyur >= 20.0 ) && ( aiaidmeyur <= 30.0 ) ) { rtAction = 1
; } else if ( aiaidmeyur < 20.0 ) { rtAction = 2 ; } else { rtAction = 3 ; }
_rtDW -> i4zfmeid1q = rtAction ; } else { rtAction = _rtDW -> i4zfmeid1q ; }
if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : onwlwa5111 ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> kyzepqs4w3 = _rtP -> P_15
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> jga4c2zb1c ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> kyzepqs4w3 = _rtP -> P_17 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> br1c52trcu ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , aiaidmeyur , & _rtB -> kyzepqs4w3 , & _rtB -> ni3ml0wl0l , ( kjemkwgaia *
) & _rtP -> ni3ml0wl0l ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> ni3ml0wl0l . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { ff4mg3w2td ( S ) ; } neertw3nda ( S , aiaidmeyur , & _rtB ->
kyzepqs4w3 , & _rtB -> neertw3nda0 , ( mycazueykl * ) & _rtP -> neertw3nda0 )
; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> neertw3nda0 .
al4f1wargm ) ; } break ; } bhjla2l1q5 = _rtB -> kyzepqs4w3 * _rtB ->
mhjuhn0iee * _rtB -> h0ls2ot0fv ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> eykjbrknuj = _rtP -> P_151 ; } i2azhv14hd = bhjla2l1q5 * _rtB ->
eykjbrknuj ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> cdttu5htf1 = _rtP
-> P_152 ; } iqgkepzwsz = _rtB -> kyzepqs4w3 * _rtB -> f44fxfdo43 * _rtB ->
cdttu5htf1 ; pn4gwjuk4d = iqgkepzwsz * _rtB -> eykjbrknuj ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> a1cbpb3xdz = _rtP -> P_153 ; }
epfauqnqwi = _rtB -> kyzepqs4w3 * _rtB -> lzvwtwvkx3 * _rtB -> a1cbpb3xdz ;
ctsdho52by = epfauqnqwi * _rtB -> eykjbrknuj ; if ( ssIsSampleHit ( S , 1 , 0
) ) { _rtB -> ns4qyl2uqs = _rtP -> P_154 ; } rtPrevAction = _rtDW ->
d3aub3iozy ; if ( ssIsMajorTimeStep ( S ) ) { if ( ( aiaidmeyur < - 15.0 ) ||
( aiaidmeyur > 0.0 ) ) { rtAction = 0 ; } else if ( aiaidmeyur == - 7.5 ) {
rtAction = 1 ; } else if ( aiaidmeyur < - 7.5 ) { rtAction = 2 ; } else {
rtAction = 3 ; } _rtDW -> d3aub3iozy = rtAction ; } else { rtAction = _rtDW
-> d3aub3iozy ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset
( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S )
; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset
( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> okaf3e0ues = _rtP ->
P_27 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> bf5swil12r )
; } break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S
, 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> okaf3e0ues = _rtP -> P_29 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> c1uxhnumt1 ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , aiaidmeyur , & _rtB -> okaf3e0ues , & _rtB -> aqydusfsby , ( kjemkwgaia *
) & _rtP -> aqydusfsby ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> aqydusfsby . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , aiaidmeyur , & _rtB ->
okaf3e0ues , & _rtB -> l30bk5ncwi , ( mh2vzugcbh * ) & _rtP -> l30bk5ncwi ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> l30bk5ncwi .
h4lk3uyrah ) ; } break ; } khnrjbd3xi = _rtB -> okaf3e0ues * _rtB ->
mhjuhn0iee * _rtB -> ns4qyl2uqs ; h2ikbmhpvk = khnrjbd3xi * _rtB ->
m40oim02go ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> ppe3pnx3s1 = _rtP
-> P_155 ; } afrthth5lx = _rtB -> okaf3e0ues * _rtB -> f44fxfdo43 * _rtB ->
ppe3pnx3s1 ; o325w0il2l = afrthth5lx * _rtB -> dw4an11502 ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> cpcszjznqm = _rtP -> P_156 ; }
e5aco1shsa = _rtB -> okaf3e0ues * _rtB -> lzvwtwvkx3 * _rtB -> cpcszjznqm ;
pmq13qbznr = e5aco1shsa * _rtB -> dw4an11502 ; if ( ssIsSampleHit ( S , 1 , 0
) ) { _rtB -> dndcpge0iq = _rtP -> P_157 ; } rtPrevAction = _rtDW ->
fc3141obrh ; if ( ssIsMajorTimeStep ( S ) ) { if ( ( aiaidmeyur < 0.0 ) || (
aiaidmeyur > 15.0 ) ) { rtAction = 0 ; } else if ( aiaidmeyur == 7.5 ) {
rtAction = 1 ; } else if ( aiaidmeyur < 7.5 ) { rtAction = 2 ; } else {
rtAction = 3 ; } _rtDW -> fc3141obrh = rtAction ; } else { rtAction = _rtDW
-> fc3141obrh ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset
( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S )
; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset
( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mgr3hywwby = _rtP ->
P_23 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> cqaqzujx2e )
; } break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S
, 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mgr3hywwby = _rtP -> P_25 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> b2etmwlc2c ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , aiaidmeyur , & _rtB -> mgr3hywwby , & _rtB -> orpdyqaw5q , ( kjemkwgaia *
) & _rtP -> orpdyqaw5q ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> orpdyqaw5q . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , aiaidmeyur , & _rtB ->
mgr3hywwby , & _rtB -> lg50upxrem , ( mh2vzugcbh * ) & _rtP -> lg50upxrem ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> lg50upxrem .
h4lk3uyrah ) ; } break ; } inijxk5uxk = _rtB -> mgr3hywwby * _rtB ->
mhjuhn0iee * _rtB -> dndcpge0iq ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> l4nz3pvjwf = _rtP -> P_158 ; } p1mvd3x4in = inijxk5uxk * _rtB ->
l4nz3pvjwf ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> a3yxaewemf = _rtP
-> P_159 ; } fxr2rgutvm = _rtB -> mgr3hywwby * _rtB -> f44fxfdo43 * _rtB ->
a3yxaewemf ; an2ix4ey2w = fxr2rgutvm * _rtB -> l4nz3pvjwf ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> meb1vzk11t = _rtP -> P_160 ; }
hpb4iz3z5j = _rtB -> mgr3hywwby * _rtB -> lzvwtwvkx3 * _rtB -> meb1vzk11t ;
bzvkd1zzwh = hpb4iz3z5j * _rtB -> eykjbrknuj ; if ( ssIsSampleHit ( S , 1 , 0
) ) { _rtB -> fv2ywpahxs = _rtP -> P_161 ; } rtPrevAction = _rtDW ->
nnxae0plxf ; if ( ssIsMajorTimeStep ( S ) ) { if ( ( aiaidmeyur < - 2.0 ) ||
( aiaidmeyur > 2.0 ) ) { rtAction = 0 ; } else if ( aiaidmeyur == 0.0 ) {
rtAction = 1 ; } else if ( aiaidmeyur < 0.0 ) { rtAction = 2 ; } else {
rtAction = 3 ; } _rtDW -> nnxae0plxf = rtAction ; } else { rtAction = _rtDW
-> nnxae0plxf ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset
( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S )
; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset
( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> elkwykh4ar = _rtP ->
P_31 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> ljiq2cwhro )
; } break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S
, 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> elkwykh4ar = _rtP -> P_33 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> l2xfmkysj1 ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , aiaidmeyur , & _rtB -> elkwykh4ar , & _rtB -> dsg4ndprdc , ( kjemkwgaia *
) & _rtP -> dsg4ndprdc ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> dsg4ndprdc . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , aiaidmeyur , & _rtB ->
elkwykh4ar , & _rtB -> c5virjyzhf , ( mh2vzugcbh * ) & _rtP -> c5virjyzhf ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> c5virjyzhf .
h4lk3uyrah ) ; } break ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { dvpzefv5zm =
_rtB -> oebyflqvsq ; rtPrevAction = _rtDW -> fspzyz5hrx ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( dvpzefv5zm < - 15.0 ) || ( dvpzefv5zm >
15.0 ) ) { rtAction = 0 ; } else if ( dvpzefv5zm == - 2.22E-16 ) { rtAction =
1 ; } else if ( dvpzefv5zm < - 2.22E-16 ) { rtAction = 2 ; } else { rtAction
= 3 ; } _rtDW -> fspzyz5hrx = rtAction ; } else { rtAction = _rtDW ->
fspzyz5hrx ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset
( S ) ; break ; case 2 : jy0uy14p5l ( S ) ; break ; case 3 : h0eyfrsjjo ( S )
; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset
( S ) ; } } _rtB -> fdyx0elmgh = _rtP -> P_39 ; if ( ssIsMajorTimeStep ( S )
) { srUpdateBC ( _rtDW -> bnnlqjklvj ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } _rtB -> fdyx0elmgh = _rtP -> P_41 ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> kvlkbcoqe3 ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { hy0v3imjx5 ( S ) ; } p154evmj22 (
dvpzefv5zm , & _rtB -> fdyx0elmgh , ( kz0uakdpfi * ) & _rtP -> ehub2sb4qn ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> ehub2sb4qn .
lsltt2ukqh ) ; } break ; case 3 : if ( rtAction != rtPrevAction ) {
fz2vugll5z ( S ) ; } jrfnq5hupl ( dvpzefv5zm , & _rtB -> fdyx0elmgh , (
ppxqrfzmfe * ) & _rtP -> gfq41wt0zt ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> gfq41wt0zt . cn4o5dnezz ) ; } break ; } } jbbkppgsc0 =
_rtB -> elkwykh4ar * _rtB -> fdyx0elmgh * _rtB -> fv2ywpahxs ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> hutuk4giu5 = _rtP -> P_162 ; }
absy54gisj = jbbkppgsc0 * _rtB -> hutuk4giu5 ; if ( ssIsSampleHit ( S , 1 , 0
) ) { _rtB -> hjzo40pygz = _rtP -> P_163 ; rtPrevAction = _rtDW -> kmg3dybap1
; if ( ssIsMajorTimeStep ( S ) ) { if ( ( dvpzefv5zm < 15.0 ) || ( dvpzefv5zm
> 45.0 ) ) { rtAction = 0 ; } else if ( dvpzefv5zm == 30.0 ) { rtAction = 1 ;
} else if ( dvpzefv5zm < 30.0 ) { rtAction = 2 ; } else { rtAction = 3 ; }
_rtDW -> kmg3dybap1 = rtAction ; } else { rtAction = _rtDW -> kmg3dybap1 ; }
if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jy0uy14p5l ( S ) ; break ; case 3 : h0eyfrsjjo ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } _rtB -> dn0hexvjqu = _rtP -> P_35 ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> hkbkf3euea ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } _rtB -> dn0hexvjqu = _rtP -> P_37 ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> be14fpacri ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { hy0v3imjx5 ( S ) ; } p154evmj22 (
dvpzefv5zm , & _rtB -> dn0hexvjqu , ( kz0uakdpfi * ) & _rtP -> p154evmj22e )
; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> p154evmj22e .
lsltt2ukqh ) ; } break ; case 3 : if ( rtAction != rtPrevAction ) {
fz2vugll5z ( S ) ; } jrfnq5hupl ( dvpzefv5zm , & _rtB -> dn0hexvjqu , (
ppxqrfzmfe * ) & _rtP -> jrfnq5hupl3 ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> jrfnq5hupl3 . cn4o5dnezz ) ; } break ; } } l0rur2d0kb =
_rtB -> elkwykh4ar * _rtB -> dn0hexvjqu * _rtB -> hjzo40pygz ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> e2wzexiuoy = _rtP -> P_164 ; }
bn3dpvpqd3 = l0rur2d0kb * _rtB -> e2wzexiuoy ; if ( ssIsSampleHit ( S , 1 , 0
) ) { _rtB -> eem1j4n3tl = _rtP -> P_165 ; rtPrevAction = _rtDW -> ezom0av2rz
; if ( ssIsMajorTimeStep ( S ) ) { if ( ( dvpzefv5zm < 5.0 ) || ( dvpzefv5zm
> 25.0 ) ) { rtAction = 0 ; } else if ( dvpzefv5zm == 15.0 ) { rtAction = 1 ;
} else if ( dvpzefv5zm < 15.0 ) { rtAction = 2 ; } else { rtAction = 3 ; }
_rtDW -> ezom0av2rz = rtAction ; } else { rtAction = _rtDW -> ezom0av2rz ; }
if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jy0uy14p5l ( S ) ; break ; case 3 : h0eyfrsjjo ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } _rtB -> n3zjmfuclr = _rtP -> P_43 ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> cfclbvcftd ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } _rtB -> n3zjmfuclr = _rtP -> P_45 ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> ghpmzyzh3s ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { hy0v3imjx5 ( S ) ; } p154evmj22 (
dvpzefv5zm , & _rtB -> n3zjmfuclr , ( kz0uakdpfi * ) & _rtP -> lm5kgn3aay ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> lm5kgn3aay .
lsltt2ukqh ) ; } break ; case 3 : if ( rtAction != rtPrevAction ) {
fz2vugll5z ( S ) ; } jrfnq5hupl ( dvpzefv5zm , & _rtB -> n3zjmfuclr , (
ppxqrfzmfe * ) & _rtP -> o5rgoqs34d ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> o5rgoqs34d . cn4o5dnezz ) ; } break ; } } jbbfsyebdk =
_rtB -> elkwykh4ar * _rtB -> n3zjmfuclr * _rtB -> eem1j4n3tl ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> l4y4bdmhjo = _rtP -> P_166 ; }
tmpForInput [ 0 ] = a35pr2w3n4 ; tmpForInput [ 1 ] = iip5sbyhxe ; tmpForInput
[ 2 ] = cjnjyaw0fw ; tmpForInput [ 3 ] = i2azhv14hd ; tmpForInput [ 4 ] =
pn4gwjuk4d ; tmpForInput [ 5 ] = ctsdho52by ; tmpForInput [ 6 ] = h2ikbmhpvk
; tmpForInput [ 7 ] = o325w0il2l ; tmpForInput [ 8 ] = pmq13qbznr ;
tmpForInput [ 9 ] = p1mvd3x4in ; tmpForInput [ 10 ] = an2ix4ey2w ;
tmpForInput [ 11 ] = bzvkd1zzwh ; tmpForInput [ 12 ] = absy54gisj ;
tmpForInput [ 13 ] = bn3dpvpqd3 ; tmpForInput [ 14 ] = jbbfsyebdk * _rtB ->
l4y4bdmhjo ; for ( i = 0 ; i < 14 ; i ++ ) { a35pr2w3n4 += tmpForInput [ i +
1 ] ; } _rtB -> lqhfkou3ai = ( ( ( ( ( ( ( ( ( ( ( ( ( eynav1duv0 +
cvxuyjimsc ) + idcr5lu13i ) + bhjla2l1q5 ) + iqgkepzwsz ) + epfauqnqwi ) +
khnrjbd3xi ) + afrthth5lx ) + e5aco1shsa ) + inijxk5uxk ) + fxr2rgutvm ) +
hpb4iz3z5j ) + jbbkppgsc0 ) + l0rur2d0kb ) + jbbfsyebdk ; rtPrevAction =
_rtDW -> g2jqxzwbu2 ; if ( ssIsMajorTimeStep ( S ) ) { if ( _rtB ->
lqhfkou3ai < 0.0 ) { rtAction = 0 ; } else { rtAction = 1 ; } _rtDW ->
g2jqxzwbu2 = rtAction ; } else { rtAction = _rtDW -> g2jqxzwbu2 ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : fgnbjcyegu ( S ) ; break ; } }
switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> d345amphff = _rtP -> P_13
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> nimmoejv0e ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { abpfm5ekvt ( S ) ; }
p3cikaft51 ( _rtB -> lqhfkou3ai , & _rtB -> d345amphff ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> p3cikaft51g . jqdevi4nvn )
; } break ; } a35pr2w3n4 /= _rtB -> d345amphff ; if ( ssIsSampleHit ( S , 1 ,
0 ) ) { _rtB -> miho14rb1e = _rtP -> P_167 ; if ( ssIsMajorTimeStep ( S ) ) {
_rtDW -> mibtrylycq = ( _rtB -> lqhfkou3ai > _rtB -> miho14rb1e ) ; } _rtB ->
oeoz4wu0ph = _rtDW -> mibtrylycq ; _rtB -> l311mspa4l = _rtP -> P_168 ; } if
( _rtB -> oeoz4wu0ph >= _rtP -> P_169 ) { _rtB -> ivk0es3l42 = a35pr2w3n4 ; }
else { _rtB -> ivk0es3l42 = _rtB -> l311mspa4l ; } ssCallAccelRunBlock ( S ,
138 , 153 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> bgizi1dr4j = 0.0 ; _rtB ->
bgizi1dr4j += _rtP -> P_172 * _rtX -> hndp1hsy3v [ 1 ] ; ssCallAccelRunBlock
( S , 138 , 155 , SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 1 , 0 ) )
{ if ( ssIsMajorTimeStep ( S ) ) { _rtDW -> jmdqczpblu = ( ssGetTaskTime ( S
, 1 ) >= _rtP -> P_174 ) ; } if ( _rtDW -> jmdqczpblu == 1 ) { _rtB ->
hc4ormhcem = _rtP -> P_176 ; } else { _rtB -> hc4ormhcem = _rtP -> P_175 ; }
} _rtB -> ltceapx1ix = _rtB -> hc4ormhcem - _rtB -> bgizi1dr4j ;
ssCallAccelRunBlock ( S , 138 , 158 , SS_CALL_MDL_OUTPUTS ) ; if ( ( _rtDW ->
b1n1ddw0d3 >= ssGetT ( S ) ) && ( _rtDW -> pzkk4advrl >= ssGetT ( S ) ) ) {
a35pr2w3n4 = 0.0 ; } else { a35pr2w3n4 = _rtDW -> b1n1ddw0d3 ; lastU = &
_rtDW -> jzrtmifafq ; if ( _rtDW -> b1n1ddw0d3 < _rtDW -> pzkk4advrl ) { if (
_rtDW -> pzkk4advrl < ssGetT ( S ) ) { a35pr2w3n4 = _rtDW -> pzkk4advrl ;
lastU = & _rtDW -> n0unysu3bi ; } } else { if ( _rtDW -> b1n1ddw0d3 >= ssGetT
( S ) ) { a35pr2w3n4 = _rtDW -> pzkk4advrl ; lastU = & _rtDW -> n0unysu3bi ;
} } a35pr2w3n4 = ( _rtB -> ltceapx1ix - * lastU ) / ( ssGetT ( S ) -
a35pr2w3n4 ) ; } lr40kmpjqr = a35pr2w3n4 ; rtPrevAction = _rtDW -> acl41zgiso
; if ( ssIsMajorTimeStep ( S ) ) { if ( ( lr40kmpjqr < - 20.0 ) || (
lr40kmpjqr > 0.0 ) ) { rtAction = 0 ; } else if ( lr40kmpjqr == - 10.0 ) {
rtAction = 1 ; } else if ( lr40kmpjqr < - 10.0 ) { rtAction = 2 ; } else {
rtAction = 3 ; } _rtDW -> acl41zgiso = rtAction ; } else { rtAction = _rtDW
-> acl41zgiso ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset
( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S )
; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset
( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> cxb5sb3wni = _rtP ->
P_47 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> fzflxeqq3f )
; } break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S
, 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> cxb5sb3wni = _rtP -> P_49 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> e3xhkxz344 ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , lr40kmpjqr , & _rtB -> cxb5sb3wni , & _rtB -> kv0ofqft2w , ( kjemkwgaia *
) & _rtP -> kv0ofqft2w ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> kv0ofqft2w . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , lr40kmpjqr , & _rtB ->
cxb5sb3wni , & _rtB -> hpphl3ze23 , ( mh2vzugcbh * ) & _rtP -> hpphl3ze23 ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> hpphl3ze23 .
h4lk3uyrah ) ; } break ; } rtPrevAction = _rtDW -> konntfbcli ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( lr40kmpjqr < 0.0 ) || ( lr40kmpjqr > 20.0
) ) { rtAction = 0 ; } else if ( lr40kmpjqr == 10.0 ) { rtAction = 1 ; } else
if ( lr40kmpjqr < 10.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW ->
konntfbcli = rtAction ; } else { rtAction = _rtDW -> konntfbcli ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> imdnba2lbm = _rtP -> P_51
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> lzy1knska0 ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> imdnba2lbm = _rtP -> P_53 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> n3re3e2y55 ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , lr40kmpjqr , & _rtB -> imdnba2lbm , & _rtB -> b3w0k3u3d4 , ( kjemkwgaia *
) & _rtP -> b3w0k3u3d4 ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> b3w0k3u3d4 . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , lr40kmpjqr , & _rtB ->
imdnba2lbm , & _rtB -> f3cxx2oiqf , ( mh2vzugcbh * ) & _rtP -> f3cxx2oiqf ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> f3cxx2oiqf .
h4lk3uyrah ) ; } break ; } rtPrevAction = _rtDW -> drnxz1tps2 ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( lr40kmpjqr < - 2.0 ) || ( lr40kmpjqr > 2.0
) ) { rtAction = 0 ; } else if ( lr40kmpjqr == 0.0 ) { rtAction = 1 ; } else
if ( lr40kmpjqr < 0.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW ->
drnxz1tps2 = rtAction ; } else { rtAction = _rtDW -> drnxz1tps2 ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> b1ghvpwzzx = _rtP -> P_55
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> bkaffi5htq ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> b1ghvpwzzx = _rtP -> P_57 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> cawmbyzbfr ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , lr40kmpjqr , & _rtB -> b1ghvpwzzx , & _rtB -> a5xslsblgd , ( kjemkwgaia *
) & _rtP -> a5xslsblgd ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> a5xslsblgd . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , lr40kmpjqr , & _rtB ->
b1ghvpwzzx , & _rtB -> fbmwlumpcq , ( mh2vzugcbh * ) & _rtP -> fbmwlumpcq ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> fbmwlumpcq .
h4lk3uyrah ) ; } break ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB ->
i2tr03yrwv = _rtP -> P_177 ; } lvxdhuuadp = _rtB -> ltceapx1ix ; rtPrevAction
= _rtDW -> eel4jnqsgv ; if ( ssIsMajorTimeStep ( S ) ) { if ( ( lvxdhuuadp <
- 45.0 ) || ( lvxdhuuadp > - 10.0 ) ) { rtAction = 0 ; } else if ( (
lvxdhuuadp >= - 30.0 ) && ( lvxdhuuadp <= - 20.0 ) ) { rtAction = 1 ; } else
if ( lvxdhuuadp < - 30.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW
-> eel4jnqsgv = rtAction ; } else { rtAction = _rtDW -> eel4jnqsgv ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : onwlwa5111 ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> a0k45cj11x = _rtP -> P_65
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> dddyh22mq3 ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> a0k45cj11x = _rtP -> P_67 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> dquo1bgb4r ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , lvxdhuuadp , & _rtB -> a0k45cj11x , & _rtB -> b4h5jodebu , ( kjemkwgaia *
) & _rtP -> b4h5jodebu ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> b4h5jodebu . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { ff4mg3w2td ( S ) ; } neertw3nda ( S , lvxdhuuadp , & _rtB ->
a0k45cj11x , & _rtB -> j3ap322haw , ( mycazueykl * ) & _rtP -> j3ap322haw ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> j3ap322haw .
al4f1wargm ) ; } break ; } a35pr2w3n4 = _rtB -> a0k45cj11x * _rtB ->
cxb5sb3wni * _rtB -> i2tr03yrwv ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> mzatizinyg = _rtP -> P_178 ; } jbbfsyebdk = _rtB -> a0k45cj11x * _rtB ->
b1ghvpwzzx * _rtB -> mzatizinyg ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> fnloaw1g2y = _rtP -> P_179 ; } bn3dpvpqd3 = _rtB -> a0k45cj11x * _rtB ->
imdnba2lbm * _rtB -> fnloaw1g2y ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> eiaz5ag2t0 = _rtP -> P_180 ; } rtPrevAction = _rtDW -> ghbwwknjnx ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( lvxdhuuadp < 10.0 ) || ( lvxdhuuadp > 45.0
) ) { rtAction = 0 ; } else if ( ( lvxdhuuadp >= 20.0 ) && ( lvxdhuuadp <=
30.0 ) ) { rtAction = 1 ; } else if ( lvxdhuuadp < 20.0 ) { rtAction = 2 ; }
else { rtAction = 3 ; } _rtDW -> ghbwwknjnx = rtAction ; } else { rtAction =
_rtDW -> ghbwwknjnx ; } if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case 1 :
ssSetSolverNeedsReset ( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ;
case 3 : onwlwa5111 ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> f5i0zc2oxl = _rtP -> P_61 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> cul4btuec3 ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> f5i0zc2oxl = _rtP -> P_63 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> c2rtsatepr ) ; } break ; case 2 : if ( rtAction != rtPrevAction )
{ j0l3wmvcmm ( S ) ; } kyrlxi2a4d ( S , lvxdhuuadp , & _rtB -> f5i0zc2oxl , &
_rtB -> aevdrssuwy , ( kjemkwgaia * ) & _rtP -> aevdrssuwy ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> aevdrssuwy . it3yavgf3n ) ;
} break ; case 3 : if ( rtAction != rtPrevAction ) { ff4mg3w2td ( S ) ; }
neertw3nda ( S , lvxdhuuadp , & _rtB -> f5i0zc2oxl , & _rtB -> nkl3ucvyfe , (
mycazueykl * ) & _rtP -> nkl3ucvyfe ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> nkl3ucvyfe . al4f1wargm ) ; } break ; } l0rur2d0kb =
_rtB -> f5i0zc2oxl * _rtB -> cxb5sb3wni * _rtB -> eiaz5ag2t0 ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> p5ybf4qjeq = _rtP -> P_181 ; }
absy54gisj = _rtB -> f5i0zc2oxl * _rtB -> b1ghvpwzzx * _rtB -> p5ybf4qjeq ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> lz4d5noj0c = _rtP -> P_182 ; }
jbbkppgsc0 = _rtB -> f5i0zc2oxl * _rtB -> imdnba2lbm * _rtB -> lz4d5noj0c ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> lrwe3cpu3o = _rtP -> P_183 ; }
rtPrevAction = _rtDW -> jbwwf02lwc ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
lvxdhuuadp < - 15.0 ) || ( lvxdhuuadp > 0.0 ) ) { rtAction = 0 ; } else if (
lvxdhuuadp == - 7.5 ) { rtAction = 1 ; } else if ( lvxdhuuadp < - 7.5 ) {
rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> jbwwf02lwc = rtAction ; }
else { rtAction = _rtDW -> jbwwf02lwc ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case
1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ;
case 3 : af4uj3dkhr ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> bfwvq5beah = _rtP -> P_73 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> ikwmmgtptz ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> bfwvq5beah = _rtP -> P_75 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> pkvkie0a2d ) ; } break ; case 2 : if ( rtAction != rtPrevAction )
{ j0l3wmvcmm ( S ) ; } kyrlxi2a4d ( S , lvxdhuuadp , & _rtB -> bfwvq5beah , &
_rtB -> mk2oe2lyos , ( kjemkwgaia * ) & _rtP -> mk2oe2lyos ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> mk2oe2lyos . it3yavgf3n ) ;
} break ; case 3 : if ( rtAction != rtPrevAction ) { jghqix4p0b ( S ) ; }
l5mc1dr5vk ( S , lvxdhuuadp , & _rtB -> bfwvq5beah , & _rtB -> di2cmioivt , (
mh2vzugcbh * ) & _rtP -> di2cmioivt ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> di2cmioivt . h4lk3uyrah ) ; } break ; } bzvkd1zzwh =
_rtB -> bfwvq5beah * _rtB -> cxb5sb3wni * _rtB -> lrwe3cpu3o ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> covnpjixf2 = _rtP -> P_184 ; }
hpb4iz3z5j = _rtB -> bfwvq5beah * _rtB -> b1ghvpwzzx * _rtB -> covnpjixf2 ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> hswr2e52rx = _rtP -> P_185 ; }
an2ix4ey2w = _rtB -> bfwvq5beah * _rtB -> imdnba2lbm * _rtB -> hswr2e52rx ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> cfvez2jvav = _rtP -> P_186 ; }
rtPrevAction = _rtDW -> fk2tplcmbk ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
lvxdhuuadp < 0.0 ) || ( lvxdhuuadp > 15.0 ) ) { rtAction = 0 ; } else if (
lvxdhuuadp == 7.5 ) { rtAction = 1 ; } else if ( lvxdhuuadp < 7.5 ) {
rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> fk2tplcmbk = rtAction ; }
else { rtAction = _rtDW -> fk2tplcmbk ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case
1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ;
case 3 : af4uj3dkhr ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> gyanvo1zlq = _rtP -> P_69 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> mhe5ftid25 ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> gyanvo1zlq = _rtP -> P_71 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> lxltkcdrdl ) ; } break ; case 2 : if ( rtAction != rtPrevAction )
{ j0l3wmvcmm ( S ) ; } kyrlxi2a4d ( S , lvxdhuuadp , & _rtB -> gyanvo1zlq , &
_rtB -> lil2rce1qm , ( kjemkwgaia * ) & _rtP -> lil2rce1qm ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> lil2rce1qm . it3yavgf3n ) ;
} break ; case 3 : if ( rtAction != rtPrevAction ) { jghqix4p0b ( S ) ; }
l5mc1dr5vk ( S , lvxdhuuadp , & _rtB -> gyanvo1zlq , & _rtB -> eeos2tz1yw , (
mh2vzugcbh * ) & _rtP -> eeos2tz1yw ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> eeos2tz1yw . h4lk3uyrah ) ; } break ; } fxr2rgutvm =
_rtB -> gyanvo1zlq * _rtB -> cxb5sb3wni * _rtB -> cfvez2jvav ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> oweo0oel2o = _rtP -> P_187 ; }
p1mvd3x4in = _rtB -> gyanvo1zlq * _rtB -> b1ghvpwzzx * _rtB -> oweo0oel2o ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> k1nboblzpa = _rtP -> P_188 ; }
inijxk5uxk = _rtB -> gyanvo1zlq * _rtB -> imdnba2lbm * _rtB -> k1nboblzpa ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> gx13bfqf3o = _rtP -> P_189 ; }
rtPrevAction = _rtDW -> nuf2lmqcjx ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
lvxdhuuadp < - 2.0 ) || ( lvxdhuuadp > 2.0 ) ) { rtAction = 0 ; } else if (
lvxdhuuadp == 0.0 ) { rtAction = 1 ; } else if ( lvxdhuuadp < 0.0 ) {
rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> nuf2lmqcjx = rtAction ; }
else { rtAction = _rtDW -> nuf2lmqcjx ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case
1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ;
case 3 : af4uj3dkhr ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> ezvorxk41u = _rtP -> P_77 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> avezp3q4dx ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> ezvorxk41u = _rtP -> P_79 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> ot4vpumaix ) ; } break ; case 2 : if ( rtAction != rtPrevAction )
{ j0l3wmvcmm ( S ) ; } kyrlxi2a4d ( S , lvxdhuuadp , & _rtB -> ezvorxk41u , &
_rtB -> ns2drhzxae , ( kjemkwgaia * ) & _rtP -> ns2drhzxae ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> ns2drhzxae . it3yavgf3n ) ;
} break ; case 3 : if ( rtAction != rtPrevAction ) { jghqix4p0b ( S ) ; }
l5mc1dr5vk ( S , lvxdhuuadp , & _rtB -> ezvorxk41u , & _rtB -> pye5ofotb2 , (
mh2vzugcbh * ) & _rtP -> pye5ofotb2 ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> pye5ofotb2 . h4lk3uyrah ) ; } break ; } if (
ssIsSampleHit ( S , 1 , 0 ) ) { kyngde5x3q = _rtB -> hc4ormhcem ;
rtPrevAction = _rtDW -> kbwbq0vffp ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
kyngde5x3q < - 15.0 ) || ( kyngde5x3q > 15.0 ) ) { rtAction = 0 ; } else if (
kyngde5x3q == - 2.22E-16 ) { rtAction = 1 ; } else if ( kyngde5x3q < -
2.22E-16 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> kbwbq0vffp =
rtAction ; } else { rtAction = _rtDW -> kbwbq0vffp ; } if ( rtPrevAction !=
rtAction ) { switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ;
break ; case 1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jy0uy14p5l (
S ) ; break ; case 3 : h0eyfrsjjo ( S ) ; break ; } } switch ( rtAction ) {
case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) !=
ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } _rtB -> dfn05feyy3 =
_rtP -> P_85 ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW ->
cs0xtpsmqk ) ; } break ; case 1 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } _rtB -> dfn05feyy3 = _rtP -> P_87 ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> iqpiciltpj ) ; } break ; case 2 : if ( rtAction !=
rtPrevAction ) { hy0v3imjx5 ( S ) ; } p154evmj22 ( kyngde5x3q , & _rtB ->
dfn05feyy3 , ( kz0uakdpfi * ) & _rtP -> aahh0wk5uo ) ; if ( ssIsMajorTimeStep
( S ) ) { srUpdateBC ( _rtDW -> aahh0wk5uo . lsltt2ukqh ) ; } break ; case 3
: if ( rtAction != rtPrevAction ) { fz2vugll5z ( S ) ; } jrfnq5hupl (
kyngde5x3q , & _rtB -> dfn05feyy3 , ( ppxqrfzmfe * ) & _rtP -> ckbbmc44ym ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> ckbbmc44ym .
cn4o5dnezz ) ; } break ; } } pmq13qbznr = _rtB -> ezvorxk41u * _rtB ->
dfn05feyy3 * _rtB -> gx13bfqf3o ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> bvwyhwenjr = _rtP -> P_190 ; rtPrevAction = _rtDW -> kmdj5h4ge2 ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( kyngde5x3q < 15.0 ) || ( kyngde5x3q > 45.0
) ) { rtAction = 0 ; } else if ( kyngde5x3q == 30.0 ) { rtAction = 1 ; } else
if ( kyngde5x3q < 30.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW ->
kmdj5h4ge2 = rtAction ; } else { rtAction = _rtDW -> kmdj5h4ge2 ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jy0uy14p5l ( S ) ; break ; case 3 : h0eyfrsjjo ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } _rtB -> plk224tvh1 = _rtP -> P_81 ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> mkbagyi0wn ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } _rtB -> plk224tvh1 = _rtP -> P_83 ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> nlmwadjh5p ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { hy0v3imjx5 ( S ) ; } p154evmj22 (
kyngde5x3q , & _rtB -> plk224tvh1 , ( kz0uakdpfi * ) & _rtP -> jygckd3jj2 ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> jygckd3jj2 .
lsltt2ukqh ) ; } break ; case 3 : if ( rtAction != rtPrevAction ) {
fz2vugll5z ( S ) ; } jrfnq5hupl ( kyngde5x3q , & _rtB -> plk224tvh1 , (
ppxqrfzmfe * ) & _rtP -> jqfzk5d3po ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> jqfzk5d3po . cn4o5dnezz ) ; } break ; } } e5aco1shsa =
_rtB -> ezvorxk41u * _rtB -> plk224tvh1 * _rtB -> bvwyhwenjr ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> fakgvv3uiw = _rtP -> P_191 ;
rtPrevAction = _rtDW -> abrljemhzt ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
kyngde5x3q < 5.0 ) || ( kyngde5x3q > 25.0 ) ) { rtAction = 0 ; } else if (
kyngde5x3q == 15.0 ) { rtAction = 1 ; } else if ( kyngde5x3q < 15.0 ) {
rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> abrljemhzt = rtAction ; }
else { rtAction = _rtDW -> abrljemhzt ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case
1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jy0uy14p5l ( S ) ; break ;
case 3 : h0eyfrsjjo ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } _rtB -> hoghxftdif = _rtP -> P_89 ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> klkrxzsuce ) ; } break
; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) !=
ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } _rtB -> hoghxftdif =
_rtP -> P_91 ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW ->
khibw2wjdl ) ; } break ; case 2 : if ( rtAction != rtPrevAction ) {
hy0v3imjx5 ( S ) ; } p154evmj22 ( kyngde5x3q , & _rtB -> hoghxftdif , (
kz0uakdpfi * ) & _rtP -> hypuund2yn ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> hypuund2yn . lsltt2ukqh ) ; } break ; case 3 : if (
rtAction != rtPrevAction ) { fz2vugll5z ( S ) ; } jrfnq5hupl ( kyngde5x3q , &
_rtB -> hoghxftdif , ( ppxqrfzmfe * ) & _rtP -> fm21dwzc1d ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> fm21dwzc1d . cn4o5dnezz ) ;
} break ; } } o325w0il2l = _rtB -> ezvorxk41u * _rtB -> hoghxftdif * _rtB ->
fakgvv3uiw ; _rtB -> idfl1nnpsq = ( ( ( ( ( ( ( ( ( ( ( ( ( a35pr2w3n4 +
jbbfsyebdk ) + bn3dpvpqd3 ) + l0rur2d0kb ) + absy54gisj ) + jbbkppgsc0 ) +
bzvkd1zzwh ) + hpb4iz3z5j ) + an2ix4ey2w ) + fxr2rgutvm ) + p1mvd3x4in ) +
inijxk5uxk ) + pmq13qbznr ) + e5aco1shsa ) + o325w0il2l ; rtPrevAction =
_rtDW -> iyjuora5z4 ; if ( ssIsMajorTimeStep ( S ) ) { if ( _rtB ->
idfl1nnpsq < 0.0 ) { rtAction = 0 ; } else { rtAction = 1 ; } _rtDW ->
iyjuora5z4 = rtAction ; } else { rtAction = _rtDW -> iyjuora5z4 ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : fgnbjcyegu ( S ) ; break ; } }
switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> dtofezqj24 = _rtP -> P_59
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> frhhegcquo ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { abpfm5ekvt ( S ) ; }
p3cikaft51 ( _rtB -> idfl1nnpsq , & _rtB -> dtofezqj24 ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> kbrtvpwxa3 . jqdevi4nvn ) ;
} break ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> dwrje4e4qy = _rtP ->
P_192 ; } a35pr2w3n4 *= _rtB -> dwrje4e4qy ; jbbfsyebdk *= _rtB -> dwrje4e4qy
; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> fpg2jgmz33 = _rtP -> P_193 ; }
bn3dpvpqd3 *= _rtB -> fpg2jgmz33 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> fmjiqfjl3v = _rtP -> P_194 ; } l0rur2d0kb *= _rtB -> fmjiqfjl3v ;
absy54gisj *= _rtB -> fmjiqfjl3v ; jbbkppgsc0 *= _rtB -> fmjiqfjl3v ;
bzvkd1zzwh *= _rtB -> fpg2jgmz33 ; hpb4iz3z5j *= _rtB -> dwrje4e4qy ;
an2ix4ey2w *= _rtB -> dwrje4e4qy ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> axefayik1w = _rtP -> P_195 ; } fxr2rgutvm *= _rtB -> axefayik1w ;
p1mvd3x4in *= _rtB -> axefayik1w ; inijxk5uxk *= _rtB -> fmjiqfjl3v ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> pgwa5htkc2 = _rtP -> P_196 ; }
pmq13qbznr *= _rtB -> pgwa5htkc2 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> kdldoxhbci = _rtP -> P_197 ; } e5aco1shsa *= _rtB -> kdldoxhbci ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> ga5zylpnoz = _rtP -> P_198 ; }
o325w0il2l *= _rtB -> ga5zylpnoz ; tmpForInput [ 0 ] = a35pr2w3n4 ;
tmpForInput [ 1 ] = jbbfsyebdk ; tmpForInput [ 2 ] = bn3dpvpqd3 ; tmpForInput
[ 3 ] = l0rur2d0kb ; tmpForInput [ 4 ] = absy54gisj ; tmpForInput [ 5 ] =
jbbkppgsc0 ; tmpForInput [ 6 ] = bzvkd1zzwh ; tmpForInput [ 7 ] = hpb4iz3z5j
; tmpForInput [ 8 ] = an2ix4ey2w ; tmpForInput [ 9 ] = fxr2rgutvm ;
tmpForInput [ 10 ] = p1mvd3x4in ; tmpForInput [ 11 ] = inijxk5uxk ;
tmpForInput [ 12 ] = pmq13qbznr ; tmpForInput [ 13 ] = e5aco1shsa ;
tmpForInput [ 14 ] = o325w0il2l ; for ( i = 0 ; i < 14 ; i ++ ) { a35pr2w3n4
+= tmpForInput [ i + 1 ] ; } a35pr2w3n4 /= _rtB -> dtofezqj24 ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> b1wp3zvzyt = _rtP -> P_199 ; _rtB ->
nxmsu0a5vf = _rtP -> P_200 ; if ( ssIsMajorTimeStep ( S ) ) { _rtDW ->
gqvpacsbch = ( _rtB -> idfl1nnpsq > _rtB -> nxmsu0a5vf ) ; } _rtB ->
ljsspl3m4c = _rtDW -> gqvpacsbch ; } if ( _rtB -> ljsspl3m4c >= _rtP -> P_201
) { _rtB -> olf3gynpp0 = a35pr2w3n4 ; } else { _rtB -> olf3gynpp0 = _rtB ->
b1wp3zvzyt ; } _rtB -> bgizi1dr4j = 0.0 ; _rtB -> bgizi1dr4j += _rtP -> P_204
* _rtX -> funksumrzv [ 1 ] ; ssCallAccelRunBlock ( S , 138 , 308 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { if (
ssIsMajorTimeStep ( S ) ) { _rtDW -> gdu3w0oq2j = ( ssGetTaskTime ( S , 1 )
>= _rtP -> P_206 ) ; } if ( _rtDW -> gdu3w0oq2j == 1 ) { _rtB -> nvmx0xlqrg =
_rtP -> P_208 ; } else { _rtB -> nvmx0xlqrg = _rtP -> P_207 ; } } _rtB ->
c1djzk5hr2 = _rtB -> nvmx0xlqrg - _rtB -> bgizi1dr4j ; ssCallAccelRunBlock (
S , 138 , 311 , SS_CALL_MDL_OUTPUTS ) ; if ( ( _rtDW -> czdtwwfkij >= ssGetT
( S ) ) && ( _rtDW -> bshjidyaun >= ssGetT ( S ) ) ) { a35pr2w3n4 = 0.0 ; }
else { a35pr2w3n4 = _rtDW -> czdtwwfkij ; lastU = & _rtDW -> ejvh1knuqb ; if
( _rtDW -> czdtwwfkij < _rtDW -> bshjidyaun ) { if ( _rtDW -> bshjidyaun <
ssGetT ( S ) ) { a35pr2w3n4 = _rtDW -> bshjidyaun ; lastU = & _rtDW ->
palg1rudy4 ; } } else { if ( _rtDW -> czdtwwfkij >= ssGetT ( S ) ) {
a35pr2w3n4 = _rtDW -> bshjidyaun ; lastU = & _rtDW -> palg1rudy4 ; } }
a35pr2w3n4 = ( _rtB -> c1djzk5hr2 - * lastU ) / ( ssGetT ( S ) - a35pr2w3n4 )
; } h34ghyhcsd = a35pr2w3n4 ; rtPrevAction = _rtDW -> pvklsn2g35 ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( h34ghyhcsd < - 20.0 ) || ( h34ghyhcsd >
0.0 ) ) { rtAction = 0 ; } else if ( h34ghyhcsd == - 10.0 ) { rtAction = 1 ;
} else if ( h34ghyhcsd < - 10.0 ) { rtAction = 2 ; } else { rtAction = 3 ; }
_rtDW -> pvklsn2g35 = rtAction ; } else { rtAction = _rtDW -> pvklsn2g35 ; }
if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> bu5st3n5dd = _rtP -> P_93
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> hwdv04wwyv ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> bu5st3n5dd = _rtP -> P_95 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> a0as0clnb5 ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , h34ghyhcsd , & _rtB -> bu5st3n5dd , & _rtB -> b30rhpjx2x , ( kjemkwgaia *
) & _rtP -> b30rhpjx2x ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> b30rhpjx2x . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , h34ghyhcsd , & _rtB ->
bu5st3n5dd , & _rtB -> jtvxktbr3u , ( mh2vzugcbh * ) & _rtP -> jtvxktbr3u ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> jtvxktbr3u .
h4lk3uyrah ) ; } break ; } rtPrevAction = _rtDW -> pzmhp2naqr ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( h34ghyhcsd < 0.0 ) || ( h34ghyhcsd > 20.0
) ) { rtAction = 0 ; } else if ( h34ghyhcsd == 10.0 ) { rtAction = 1 ; } else
if ( h34ghyhcsd < 10.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW ->
pzmhp2naqr = rtAction ; } else { rtAction = _rtDW -> pzmhp2naqr ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> byxfxg05ni = _rtP -> P_97
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> oify1znmci ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> byxfxg05ni = _rtP -> P_99 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> pi15jkrvge ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , h34ghyhcsd , & _rtB -> byxfxg05ni , & _rtB -> i4tbiyy0f1 , ( kjemkwgaia *
) & _rtP -> i4tbiyy0f1 ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> i4tbiyy0f1 . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , h34ghyhcsd , & _rtB ->
byxfxg05ni , & _rtB -> clgrauaawc , ( mh2vzugcbh * ) & _rtP -> clgrauaawc ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> clgrauaawc .
h4lk3uyrah ) ; } break ; } rtPrevAction = _rtDW -> ey51v2eac4 ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( h34ghyhcsd < - 2.0 ) || ( h34ghyhcsd > 2.0
) ) { rtAction = 0 ; } else if ( h34ghyhcsd == 0.0 ) { rtAction = 1 ; } else
if ( h34ghyhcsd < 0.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW ->
ey51v2eac4 = rtAction ; } else { rtAction = _rtDW -> ey51v2eac4 ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : af4uj3dkhr ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mmbjk1c4t2 = _rtP -> P_101
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> jgibp2udzs ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mmbjk1c4t2 = _rtP -> P_103 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> owtco2vcsr ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , h34ghyhcsd , & _rtB -> mmbjk1c4t2 , & _rtB -> kacuuzc0wt , ( kjemkwgaia *
) & _rtP -> kacuuzc0wt ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> kacuuzc0wt . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { jghqix4p0b ( S ) ; } l5mc1dr5vk ( S , h34ghyhcsd , & _rtB ->
mmbjk1c4t2 , & _rtB -> ezpmiamq2t , ( mh2vzugcbh * ) & _rtP -> ezpmiamq2t ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> ezpmiamq2t .
h4lk3uyrah ) ; } break ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB ->
mejafl03b0 = _rtP -> P_209 ; } dqy0jiw2ha = _rtB -> c1djzk5hr2 ; rtPrevAction
= _rtDW -> hryyihawct ; if ( ssIsMajorTimeStep ( S ) ) { if ( ( dqy0jiw2ha <
- 45.0 ) || ( dqy0jiw2ha > - 10.0 ) ) { rtAction = 0 ; } else if ( (
dqy0jiw2ha >= - 30.0 ) && ( dqy0jiw2ha <= - 20.0 ) ) { rtAction = 1 ; } else
if ( dqy0jiw2ha < - 30.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW
-> hryyihawct = rtAction ; } else { rtAction = _rtDW -> hryyihawct ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jktcmhvnce ( S ) ; break ; case 3 : onwlwa5111 ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> oioooa1qbt = _rtP -> P_111
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> oapjc5tvqj ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0
) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> oioooa1qbt = _rtP -> P_113 ; } if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> hgrlze2etu ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { j0l3wmvcmm ( S ) ; } kyrlxi2a4d (
S , dqy0jiw2ha , & _rtB -> oioooa1qbt , & _rtB -> er00z1czr1 , ( kjemkwgaia *
) & _rtP -> er00z1czr1 ) ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC (
_rtDW -> er00z1czr1 . it3yavgf3n ) ; } break ; case 3 : if ( rtAction !=
rtPrevAction ) { ff4mg3w2td ( S ) ; } neertw3nda ( S , dqy0jiw2ha , & _rtB ->
oioooa1qbt , & _rtB -> pkojj4q4ws , ( mycazueykl * ) & _rtP -> pkojj4q4ws ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> pkojj4q4ws .
al4f1wargm ) ; } break ; } a35pr2w3n4 = _rtB -> oioooa1qbt * _rtB ->
bu5st3n5dd * _rtB -> mejafl03b0 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> ldjyssoncb = _rtP -> P_210 ; } jbbfsyebdk = _rtB -> oioooa1qbt * _rtB ->
mmbjk1c4t2 * _rtB -> ldjyssoncb ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> h1agfdlz1d = _rtP -> P_211 ; } bn3dpvpqd3 = _rtB -> oioooa1qbt * _rtB ->
byxfxg05ni * _rtB -> h1agfdlz1d ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> pzhjppzkcf = _rtP -> P_212 ; } rtPrevAction = _rtDW -> pucscmb0td ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( dqy0jiw2ha < 10.0 ) || ( dqy0jiw2ha > 45.0
) ) { rtAction = 0 ; } else if ( ( dqy0jiw2ha >= 20.0 ) && ( dqy0jiw2ha <=
30.0 ) ) { rtAction = 1 ; } else if ( dqy0jiw2ha < 20.0 ) { rtAction = 2 ; }
else { rtAction = 3 ; } _rtDW -> pucscmb0td = rtAction ; } else { rtAction =
_rtDW -> pucscmb0td ; } if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case 1 :
ssSetSolverNeedsReset ( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ;
case 3 : onwlwa5111 ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> hflky405as = _rtP -> P_107 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> kdub2neakl ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> hflky405as = _rtP -> P_109 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> prl4t0t52n ) ; } break ; case 2 : if ( rtAction != rtPrevAction )
{ j0l3wmvcmm ( S ) ; } kyrlxi2a4d ( S , dqy0jiw2ha , & _rtB -> hflky405as , &
_rtB -> kqwoepq5fl , ( kjemkwgaia * ) & _rtP -> kqwoepq5fl ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> kqwoepq5fl . it3yavgf3n ) ;
} break ; case 3 : if ( rtAction != rtPrevAction ) { ff4mg3w2td ( S ) ; }
neertw3nda ( S , dqy0jiw2ha , & _rtB -> hflky405as , & _rtB -> foh4diw0yt , (
mycazueykl * ) & _rtP -> foh4diw0yt ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> foh4diw0yt . al4f1wargm ) ; } break ; } l0rur2d0kb =
_rtB -> hflky405as * _rtB -> bu5st3n5dd * _rtB -> pzhjppzkcf ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> hok2rn3chj = _rtP -> P_213 ; }
absy54gisj = _rtB -> hflky405as * _rtB -> mmbjk1c4t2 * _rtB -> hok2rn3chj ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> osgwu2zztw = _rtP -> P_214 ; }
jbbkppgsc0 = _rtB -> hflky405as * _rtB -> byxfxg05ni * _rtB -> osgwu2zztw ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> liwukblpqz = _rtP -> P_215 ; }
rtPrevAction = _rtDW -> cyu0uswhfl ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
dqy0jiw2ha < - 15.0 ) || ( dqy0jiw2ha > 0.0 ) ) { rtAction = 0 ; } else if (
dqy0jiw2ha == - 7.5 ) { rtAction = 1 ; } else if ( dqy0jiw2ha < - 7.5 ) {
rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> cyu0uswhfl = rtAction ; }
else { rtAction = _rtDW -> cyu0uswhfl ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case
1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ;
case 3 : af4uj3dkhr ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> mqwr3ptvz3 = _rtP -> P_119 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> l2tk5b2kx5 ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> mqwr3ptvz3 = _rtP -> P_121 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> ntdm2qih3x ) ; } break ; case 2 : if ( rtAction != rtPrevAction )
{ j0l3wmvcmm ( S ) ; } kyrlxi2a4d ( S , dqy0jiw2ha , & _rtB -> mqwr3ptvz3 , &
_rtB -> p4ql3olop0 , ( kjemkwgaia * ) & _rtP -> p4ql3olop0 ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> p4ql3olop0 . it3yavgf3n ) ;
} break ; case 3 : if ( rtAction != rtPrevAction ) { jghqix4p0b ( S ) ; }
l5mc1dr5vk ( S , dqy0jiw2ha , & _rtB -> mqwr3ptvz3 , & _rtB -> gddyd2s4c4 , (
mh2vzugcbh * ) & _rtP -> gddyd2s4c4 ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> gddyd2s4c4 . h4lk3uyrah ) ; } break ; } bzvkd1zzwh =
_rtB -> mqwr3ptvz3 * _rtB -> bu5st3n5dd * _rtB -> liwukblpqz ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> d0nka0ftij = _rtP -> P_216 ; }
hpb4iz3z5j = _rtB -> mqwr3ptvz3 * _rtB -> mmbjk1c4t2 * _rtB -> d0nka0ftij ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> jkt4djeifq = _rtP -> P_217 ; }
an2ix4ey2w = _rtB -> mqwr3ptvz3 * _rtB -> byxfxg05ni * _rtB -> jkt4djeifq ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> eq0yq3421r = _rtP -> P_218 ; }
rtPrevAction = _rtDW -> g5qgrlnm5h ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
dqy0jiw2ha < 0.0 ) || ( dqy0jiw2ha > 15.0 ) ) { rtAction = 0 ; } else if (
dqy0jiw2ha == 7.5 ) { rtAction = 1 ; } else if ( dqy0jiw2ha < 7.5 ) {
rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> g5qgrlnm5h = rtAction ; }
else { rtAction = _rtDW -> g5qgrlnm5h ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case
1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ;
case 3 : af4uj3dkhr ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> aym2c0kpyy = _rtP -> P_115 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> d5zhk2genj ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> aym2c0kpyy = _rtP -> P_117 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> buz0njgmhg ) ; } break ; case 2 : if ( rtAction != rtPrevAction )
{ j0l3wmvcmm ( S ) ; } kyrlxi2a4d ( S , dqy0jiw2ha , & _rtB -> aym2c0kpyy , &
_rtB -> aymkoeq0tr , ( kjemkwgaia * ) & _rtP -> aymkoeq0tr ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> aymkoeq0tr . it3yavgf3n ) ;
} break ; case 3 : if ( rtAction != rtPrevAction ) { jghqix4p0b ( S ) ; }
l5mc1dr5vk ( S , dqy0jiw2ha , & _rtB -> aym2c0kpyy , & _rtB -> pfeymqktfw , (
mh2vzugcbh * ) & _rtP -> pfeymqktfw ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> pfeymqktfw . h4lk3uyrah ) ; } break ; } fxr2rgutvm =
_rtB -> aym2c0kpyy * _rtB -> bu5st3n5dd * _rtB -> eq0yq3421r ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> hzoxwtleoe = _rtP -> P_219 ; }
p1mvd3x4in = _rtB -> aym2c0kpyy * _rtB -> mmbjk1c4t2 * _rtB -> hzoxwtleoe ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> dm0ks5ao1v = _rtP -> P_220 ; }
inijxk5uxk = _rtB -> aym2c0kpyy * _rtB -> byxfxg05ni * _rtB -> dm0ks5ao1v ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> hz0mn043z0 = _rtP -> P_221 ; }
rtPrevAction = _rtDW -> dlayjtrcfo ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
dqy0jiw2ha < - 2.0 ) || ( dqy0jiw2ha > 2.0 ) ) { rtAction = 0 ; } else if (
dqy0jiw2ha == 0.0 ) { rtAction = 1 ; } else if ( dqy0jiw2ha < 0.0 ) {
rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> dlayjtrcfo = rtAction ; }
else { rtAction = _rtDW -> dlayjtrcfo ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case
1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jktcmhvnce ( S ) ; break ;
case 3 : af4uj3dkhr ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> g5k14iuwjo = _rtP -> P_123 ; } if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> n3uazghp3f ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> g5k14iuwjo = _rtP -> P_125 ; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC
( _rtDW -> mryueotakq ) ; } break ; case 2 : if ( rtAction != rtPrevAction )
{ j0l3wmvcmm ( S ) ; } kyrlxi2a4d ( S , dqy0jiw2ha , & _rtB -> g5k14iuwjo , &
_rtB -> j4xo3yl0ss , ( kjemkwgaia * ) & _rtP -> j4xo3yl0ss ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> j4xo3yl0ss . it3yavgf3n ) ;
} break ; case 3 : if ( rtAction != rtPrevAction ) { jghqix4p0b ( S ) ; }
l5mc1dr5vk ( S , dqy0jiw2ha , & _rtB -> g5k14iuwjo , & _rtB -> i1u3k032qa , (
mh2vzugcbh * ) & _rtP -> i1u3k032qa ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> i1u3k032qa . h4lk3uyrah ) ; } break ; } if (
ssIsSampleHit ( S , 1 , 0 ) ) { k2kaiha0x0 = _rtB -> nvmx0xlqrg ;
rtPrevAction = _rtDW -> olizx3ynqv ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
k2kaiha0x0 < - 15.0 ) || ( k2kaiha0x0 > 15.0 ) ) { rtAction = 0 ; } else if (
k2kaiha0x0 == - 2.22E-16 ) { rtAction = 1 ; } else if ( k2kaiha0x0 < -
2.22E-16 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> olizx3ynqv =
rtAction ; } else { rtAction = _rtDW -> olizx3ynqv ; } if ( rtPrevAction !=
rtAction ) { switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ;
break ; case 1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jy0uy14p5l (
S ) ; break ; case 3 : h0eyfrsjjo ( S ) ; break ; } } switch ( rtAction ) {
case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) !=
ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } _rtB -> bpo0nw41x5 =
_rtP -> P_131 ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW ->
j4q1tzmr5g ) ; } break ; case 1 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } _rtB -> bpo0nw41x5 = _rtP -> P_133 ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> bw2kj2b0n5 ) ; } break ; case 2 : if ( rtAction !=
rtPrevAction ) { hy0v3imjx5 ( S ) ; } p154evmj22 ( k2kaiha0x0 , & _rtB ->
bpo0nw41x5 , ( kz0uakdpfi * ) & _rtP -> arb5m4f5jx ) ; if ( ssIsMajorTimeStep
( S ) ) { srUpdateBC ( _rtDW -> arb5m4f5jx . lsltt2ukqh ) ; } break ; case 3
: if ( rtAction != rtPrevAction ) { fz2vugll5z ( S ) ; } jrfnq5hupl (
k2kaiha0x0 , & _rtB -> bpo0nw41x5 , ( ppxqrfzmfe * ) & _rtP -> bli2z3hyb0 ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> bli2z3hyb0 .
cn4o5dnezz ) ; } break ; } } pmq13qbznr = _rtB -> g5k14iuwjo * _rtB ->
bpo0nw41x5 * _rtB -> hz0mn043z0 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> ogmyircimi = _rtP -> P_222 ; rtPrevAction = _rtDW -> a2b11yx5ko ; if (
ssIsMajorTimeStep ( S ) ) { if ( ( k2kaiha0x0 < 15.0 ) || ( k2kaiha0x0 > 45.0
) ) { rtAction = 0 ; } else if ( k2kaiha0x0 == 30.0 ) { rtAction = 1 ; } else
if ( k2kaiha0x0 < 30.0 ) { rtAction = 2 ; } else { rtAction = 3 ; } _rtDW ->
a2b11yx5ko = rtAction ; } else { rtAction = _rtDW -> a2b11yx5ko ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : ssSetSolverNeedsReset ( S ) ;
break ; case 2 : jy0uy14p5l ( S ) ; break ; case 3 : h0eyfrsjjo ( S ) ; break
; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } _rtB -> dbbkgaqvfr = _rtP -> P_127 ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> mdijj2mwjk ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S ) ) {
ssSetSolverNeedsReset ( S ) ; } } _rtB -> dbbkgaqvfr = _rtP -> P_129 ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> chibfmujdm ) ; } break ;
case 2 : if ( rtAction != rtPrevAction ) { hy0v3imjx5 ( S ) ; } p154evmj22 (
k2kaiha0x0 , & _rtB -> dbbkgaqvfr , ( kz0uakdpfi * ) & _rtP -> hbtzmrknqz ) ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> hbtzmrknqz .
lsltt2ukqh ) ; } break ; case 3 : if ( rtAction != rtPrevAction ) {
fz2vugll5z ( S ) ; } jrfnq5hupl ( k2kaiha0x0 , & _rtB -> dbbkgaqvfr , (
ppxqrfzmfe * ) & _rtP -> atzsou0ouc ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> atzsou0ouc . cn4o5dnezz ) ; } break ; } } e5aco1shsa =
_rtB -> g5k14iuwjo * _rtB -> dbbkgaqvfr * _rtB -> ogmyircimi ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> fowoli4hb4 = _rtP -> P_223 ;
rtPrevAction = _rtDW -> e5xrbf2y2w ; if ( ssIsMajorTimeStep ( S ) ) { if ( (
k2kaiha0x0 < 5.0 ) || ( k2kaiha0x0 > 25.0 ) ) { rtAction = 0 ; } else if (
k2kaiha0x0 == 15.0 ) { rtAction = 1 ; } else if ( k2kaiha0x0 < 15.0 ) {
rtAction = 2 ; } else { rtAction = 3 ; } _rtDW -> e5xrbf2y2w = rtAction ; }
else { rtAction = _rtDW -> e5xrbf2y2w ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetSolverNeedsReset ( S ) ; break ; case
1 : ssSetSolverNeedsReset ( S ) ; break ; case 2 : jy0uy14p5l ( S ) ; break ;
case 3 : h0eyfrsjjo ( S ) ; break ; } } switch ( rtAction ) { case 0 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) != ssGetTStart ( S
) ) { ssSetSolverNeedsReset ( S ) ; } } _rtB -> dsgh4oytu1 = _rtP -> P_135 ;
if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> eqokpjqgot ) ; } break
; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( S , 1 ) !=
ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S ) ; } } _rtB -> dsgh4oytu1 =
_rtP -> P_137 ; if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW ->
hinck1a24u ) ; } break ; case 2 : if ( rtAction != rtPrevAction ) {
hy0v3imjx5 ( S ) ; } p154evmj22 ( k2kaiha0x0 , & _rtB -> dsgh4oytu1 , (
kz0uakdpfi * ) & _rtP -> g3bjjuwhkn ) ; if ( ssIsMajorTimeStep ( S ) ) {
srUpdateBC ( _rtDW -> g3bjjuwhkn . lsltt2ukqh ) ; } break ; case 3 : if (
rtAction != rtPrevAction ) { fz2vugll5z ( S ) ; } jrfnq5hupl ( k2kaiha0x0 , &
_rtB -> dsgh4oytu1 , ( ppxqrfzmfe * ) & _rtP -> b4zxmxkvil ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> b4zxmxkvil . cn4o5dnezz ) ;
} break ; } } o325w0il2l = _rtB -> g5k14iuwjo * _rtB -> dsgh4oytu1 * _rtB ->
fowoli4hb4 ; _rtB -> blh3iodyip = ( ( ( ( ( ( ( ( ( ( ( ( ( a35pr2w3n4 +
jbbfsyebdk ) + bn3dpvpqd3 ) + l0rur2d0kb ) + absy54gisj ) + jbbkppgsc0 ) +
bzvkd1zzwh ) + hpb4iz3z5j ) + an2ix4ey2w ) + fxr2rgutvm ) + p1mvd3x4in ) +
inijxk5uxk ) + pmq13qbznr ) + e5aco1shsa ) + o325w0il2l ; rtPrevAction =
_rtDW -> pcnlaq50gl ; if ( ssIsMajorTimeStep ( S ) ) { if ( _rtB ->
blh3iodyip < 0.0 ) { rtAction = 0 ; } else { rtAction = 1 ; } _rtDW ->
pcnlaq50gl = rtAction ; } else { rtAction = _rtDW -> pcnlaq50gl ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetSolverNeedsReset ( S ) ; break ; case 1 : fgnbjcyegu ( S ) ; break ; } }
switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( S , 0 ) != ssGetTStart ( S ) ) { ssSetSolverNeedsReset ( S )
; } } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> nbme11gwvc = _rtP -> P_105
; } if ( ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> ljuuaw55ws ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { abpfm5ekvt ( S ) ; }
p3cikaft51 ( _rtB -> blh3iodyip , & _rtB -> nbme11gwvc ) ; if (
ssIsMajorTimeStep ( S ) ) { srUpdateBC ( _rtDW -> bilvgdtjuo . jqdevi4nvn ) ;
} break ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> byxfzm5gr4 = _rtP ->
P_224 ; } a35pr2w3n4 *= _rtB -> byxfzm5gr4 ; jbbfsyebdk *= _rtB -> byxfzm5gr4
; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> mvpxvno3gd = _rtP -> P_225 ; }
bn3dpvpqd3 *= _rtB -> mvpxvno3gd ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> pr2k2mvyvt = _rtP -> P_226 ; } l0rur2d0kb *= _rtB -> pr2k2mvyvt ;
absy54gisj *= _rtB -> pr2k2mvyvt ; jbbkppgsc0 *= _rtB -> pr2k2mvyvt ;
bzvkd1zzwh *= _rtB -> mvpxvno3gd ; hpb4iz3z5j *= _rtB -> byxfzm5gr4 ;
an2ix4ey2w *= _rtB -> byxfzm5gr4 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> lbsey4c1tq = _rtP -> P_227 ; } fxr2rgutvm *= _rtB -> lbsey4c1tq ;
p1mvd3x4in *= _rtB -> lbsey4c1tq ; inijxk5uxk *= _rtB -> pr2k2mvyvt ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> ir22z4bkup = _rtP -> P_228 ; }
pmq13qbznr *= _rtB -> ir22z4bkup ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB
-> by2vj541rx = _rtP -> P_229 ; } e5aco1shsa *= _rtB -> by2vj541rx ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> n3qy0b21dw = _rtP -> P_230 ; }
o325w0il2l *= _rtB -> n3qy0b21dw ; tmpForInput [ 0 ] = a35pr2w3n4 ;
tmpForInput [ 1 ] = jbbfsyebdk ; tmpForInput [ 2 ] = bn3dpvpqd3 ; tmpForInput
[ 3 ] = l0rur2d0kb ; tmpForInput [ 4 ] = absy54gisj ; tmpForInput [ 5 ] =
jbbkppgsc0 ; tmpForInput [ 6 ] = bzvkd1zzwh ; tmpForInput [ 7 ] = hpb4iz3z5j
; tmpForInput [ 8 ] = an2ix4ey2w ; tmpForInput [ 9 ] = fxr2rgutvm ;
tmpForInput [ 10 ] = p1mvd3x4in ; tmpForInput [ 11 ] = inijxk5uxk ;
tmpForInput [ 12 ] = pmq13qbznr ; tmpForInput [ 13 ] = e5aco1shsa ;
tmpForInput [ 14 ] = o325w0il2l ; for ( i = 0 ; i < 14 ; i ++ ) { a35pr2w3n4
+= tmpForInput [ i + 1 ] ; } a35pr2w3n4 /= _rtB -> nbme11gwvc ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> c5u5rvgzoo = _rtP -> P_231 ; _rtB ->
mhp2xzx1bs = _rtP -> P_232 ; if ( ssIsMajorTimeStep ( S ) ) { _rtDW ->
hgozaa3nvp = ( _rtB -> blh3iodyip > _rtB -> mhp2xzx1bs ) ; } _rtB ->
gaekvfzfi5 = _rtDW -> hgozaa3nvp ; } if ( _rtB -> gaekvfzfi5 >= _rtP -> P_233
) { _rtB -> h1sm1lfntt = a35pr2w3n4 ; } else { _rtB -> h1sm1lfntt = _rtB ->
c5u5rvgzoo ; } _rtB -> bgizi1dr4j = 0.0 ; _rtB -> bgizi1dr4j += _rtP -> P_236
* _rtX -> b5e2oek4mx [ 1 ] ; ssCallAccelRunBlock ( S , 138 , 461 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { if (
ssIsMajorTimeStep ( S ) ) { _rtDW -> mkaplbntaq = ( ssGetTaskTime ( S , 1 )
>= _rtP -> P_238 ) ; } if ( _rtDW -> mkaplbntaq == 1 ) { _rtB -> jwzi0cfydu =
_rtP -> P_240 ; } else { _rtB -> jwzi0cfydu = _rtP -> P_239 ; } }
UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { real_T * lastU ;
n3qi1whofz * _rtB ; ew10rzwqr2 * _rtDW ; _rtDW = ( ( ew10rzwqr2 * )
ssGetRootDWork ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ; if
( _rtDW -> e1trn0sqth == ( rtInf ) ) { _rtDW -> e1trn0sqth = ssGetT ( S ) ;
lastU = & _rtDW -> a4ougupum1 ; } else if ( _rtDW -> ejhedoamiu == ( rtInf )
) { _rtDW -> ejhedoamiu = ssGetT ( S ) ; lastU = & _rtDW -> iuvmp3z0cj ; }
else if ( _rtDW -> e1trn0sqth < _rtDW -> ejhedoamiu ) { _rtDW -> e1trn0sqth =
ssGetT ( S ) ; lastU = & _rtDW -> a4ougupum1 ; } else { _rtDW -> ejhedoamiu =
ssGetT ( S ) ; lastU = & _rtDW -> iuvmp3z0cj ; } * lastU = _rtB -> iazsx12iod
; if ( _rtDW -> b1n1ddw0d3 == ( rtInf ) ) { _rtDW -> b1n1ddw0d3 = ssGetT ( S
) ; lastU = & _rtDW -> jzrtmifafq ; } else if ( _rtDW -> pzkk4advrl == (
rtInf ) ) { _rtDW -> pzkk4advrl = ssGetT ( S ) ; lastU = & _rtDW ->
n0unysu3bi ; } else if ( _rtDW -> b1n1ddw0d3 < _rtDW -> pzkk4advrl ) { _rtDW
-> b1n1ddw0d3 = ssGetT ( S ) ; lastU = & _rtDW -> jzrtmifafq ; } else { _rtDW
-> pzkk4advrl = ssGetT ( S ) ; lastU = & _rtDW -> n0unysu3bi ; } * lastU =
_rtB -> ltceapx1ix ; if ( _rtDW -> czdtwwfkij == ( rtInf ) ) { _rtDW ->
czdtwwfkij = ssGetT ( S ) ; lastU = & _rtDW -> ejvh1knuqb ; } else if ( _rtDW
-> bshjidyaun == ( rtInf ) ) { _rtDW -> bshjidyaun = ssGetT ( S ) ; lastU = &
_rtDW -> palg1rudy4 ; } else if ( _rtDW -> czdtwwfkij < _rtDW -> bshjidyaun )
{ _rtDW -> czdtwwfkij = ssGetT ( S ) ; lastU = & _rtDW -> ejvh1knuqb ; } else
{ _rtDW -> bshjidyaun = ssGetT ( S ) ; lastU = & _rtDW -> palg1rudy4 ; } *
lastU = _rtB -> c1djzk5hr2 ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { n3qi1whofz * _rtB ; loikxjbxjg
* _rtP ; f1xhd02yjc * _rtX ; pqmvzr1kvu * _rtXdot ; _rtXdot = ( ( pqmvzr1kvu
* ) ssGetdX ( S ) ) ; _rtX = ( ( f1xhd02yjc * ) ssGetContStates ( S ) ) ;
_rtP = ( ( loikxjbxjg * ) ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz *
) _ssGetBlockIO ( S ) ) ; _rtXdot -> jb3bh2mwoo [ 0 ] = 0.0 ; _rtXdot ->
jb3bh2mwoo [ 1 ] = 0.0 ; _rtXdot -> jb3bh2mwoo [ 0U ] += _rtP -> P_138 [ 0 ]
* _rtX -> jb3bh2mwoo [ 0 ] ; _rtXdot -> jb3bh2mwoo [ 1U ] += _rtP -> P_138 [
1 ] * _rtX -> jb3bh2mwoo [ 0 ] ; _rtXdot -> jb3bh2mwoo [ 1U ] += _rtP ->
P_138 [ 2 ] * _rtX -> jb3bh2mwoo [ 1 ] ; _rtXdot -> jb3bh2mwoo [ 0U ] += _rtP
-> P_139 * _rtB -> ivk0es3l42 ; _rtXdot -> hndp1hsy3v [ 0 ] = 0.0 ; _rtXdot
-> hndp1hsy3v [ 1 ] = 0.0 ; _rtXdot -> hndp1hsy3v [ 0U ] += _rtP -> P_170 [ 0
] * _rtX -> hndp1hsy3v [ 0 ] ; _rtXdot -> hndp1hsy3v [ 1U ] += _rtP -> P_170
[ 1 ] * _rtX -> hndp1hsy3v [ 0 ] ; _rtXdot -> hndp1hsy3v [ 1U ] += _rtP ->
P_170 [ 2 ] * _rtX -> hndp1hsy3v [ 1 ] ; _rtXdot -> hndp1hsy3v [ 0U ] += _rtP
-> P_171 * _rtB -> olf3gynpp0 ; _rtXdot -> funksumrzv [ 0 ] = 0.0 ; _rtXdot
-> funksumrzv [ 1 ] = 0.0 ; _rtXdot -> funksumrzv [ 0U ] += _rtP -> P_202 [ 0
] * _rtX -> funksumrzv [ 0 ] ; _rtXdot -> funksumrzv [ 1U ] += _rtP -> P_202
[ 1 ] * _rtX -> funksumrzv [ 0 ] ; _rtXdot -> funksumrzv [ 1U ] += _rtP ->
P_202 [ 2 ] * _rtX -> funksumrzv [ 1 ] ; _rtXdot -> funksumrzv [ 0U ] += _rtP
-> P_203 * _rtB -> h1sm1lfntt ; _rtXdot -> b5e2oek4mx [ 0 ] = 0.0 ; _rtXdot
-> b5e2oek4mx [ 1 ] = 0.0 ; _rtXdot -> b5e2oek4mx [ 0U ] += _rtP -> P_234 [ 0
] * _rtX -> b5e2oek4mx [ 0 ] ; _rtXdot -> b5e2oek4mx [ 1U ] += _rtP -> P_234
[ 1 ] * _rtX -> b5e2oek4mx [ 0 ] ; _rtXdot -> b5e2oek4mx [ 1U ] += _rtP ->
P_234 [ 2 ] * _rtX -> b5e2oek4mx [ 1 ] ; _rtXdot -> b5e2oek4mx [ 0U ] += _rtP
-> P_235 * _rtB -> jwzi0cfydu ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { n3qi1whofz * _rtB ;
loikxjbxjg * _rtP ; d15n1ti4kq * _rtZCSV ; _rtZCSV = ( ( d15n1ti4kq * )
ssGetSolverZcSignalVector ( S ) ) ; _rtP = ( ( loikxjbxjg * )
ssGetDefaultParam ( S ) ) ; _rtB = ( ( n3qi1whofz * ) _ssGetBlockIO ( S ) ) ;
_rtZCSV -> kbgtizp22d = ssGetT ( S ) - _rtP -> P_142 ; _rtZCSV -> fo1cafcrcz
= 0.0 ; if ( _rtB -> lqhfkou3ai < 0.0 ) { _rtZCSV -> fo1cafcrcz = 1.0 ; }
_rtZCSV -> bq0upnwuql = _rtB -> lqhfkou3ai - _rtB -> miho14rb1e ; _rtZCSV ->
asd5xrljuh = ssGetT ( S ) - _rtP -> P_174 ; _rtZCSV -> lxuoujxjrv = 0.0 ; if
( _rtB -> idfl1nnpsq < 0.0 ) { _rtZCSV -> lxuoujxjrv = 1.0 ; } _rtZCSV ->
o25psb0wqw = _rtB -> idfl1nnpsq - _rtB -> nxmsu0a5vf ; _rtZCSV -> jdgcxvvlxp
= ssGetT ( S ) - _rtP -> P_206 ; _rtZCSV -> dq0klm43az = 0.0 ; if ( _rtB ->
blh3iodyip < 0.0 ) { _rtZCSV -> dq0klm43az = 1.0 ; } _rtZCSV -> dzpxmd5xva =
_rtB -> blh3iodyip - _rtB -> mhp2xzx1bs ; _rtZCSV -> edtlgscpwr = ssGetT ( S
) - _rtP -> P_238 ; } static void mdlInitializeSizes ( SimStruct * S ) {
ssSetChecksumVal ( S , 0 , 726871478U ) ; ssSetChecksumVal ( S , 1 ,
504215026U ) ; ssSetChecksumVal ( S , 2 , 2896686939U ) ; ssSetChecksumVal (
S , 3 , 572542443U ) ; { mxArray * slVerStructMat = NULL ; mxArray * slStrMat
= mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status =
mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if ( status
== 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 , "Version" ) ;
if ( slVerMat == NULL ) { status = 1 ; } else { status = mxGetString (
slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "8.3" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
ew10rzwqr2 ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( n3qi1whofz ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
loikxjbxjg ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & o2iu0a2jke ) ; rt_InitInfAndNaN ( sizeof ( real_T ) ) ; } static
void mdlInitializeSampleTimes ( SimStruct * S ) { } static void mdlTerminate
( SimStruct * S ) { }
#include "simulink.c"
