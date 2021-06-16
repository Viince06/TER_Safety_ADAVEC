/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */
#ifndef _ChangeMode_Generated_H_
#define _ChangeMode_Generated_H_

#include "kcg_types.h"
#include "Precedence_MSG.h"
#include "Exclusion_MSG.h"
#include "Union_MSG.h"

/* ========================  input structure  ====================== */
typedef struct {
  ClockStatus /* Manual/ */ Manual;
  ClockStatus /* Autonome/ */ Autonome;
  ClockStatus /* Drunk/ */ Drunk;
  ClockStatus /* RTime/ */ RTime;
} inC_ChangeMode_Generated;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ClockStatus /* Mode/ */ Mode;
  kcg_bool /* O1/ */ O1;
  kcg_bool /* O2/ */ O2;
  kcg_bool /* O3/ */ O3;
  kcg_bool /* O4/ */ O4;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Union_MSG /* L3=(MSG::Union#1)/ */ Context_Union_1;
  outC_Exclusion_MSG /* L6=(MSG::Exclusion#1)/ */ Context_Exclusion_1;
  outC_Precedence_MSG /* L9=(MSG::Precedence#1)/ */ Context_Precedence_1;
  outC_Precedence_MSG /* L12=(MSG::Precedence#2)/ */ Context_Precedence_2;
  outC_Precedence_MSG /* L15=(MSG::Precedence#3)/ */ Context_Precedence_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* L1/ */ L1;
  ClockStatus /* L2/ */ L2;
  ClockStatus /* L3/ */ L3;
  ClockStatus /* L4/ */ L4;
  ClockStatus /* L5/ */ L5;
  kcg_bool /* L6/ */ L6;
  ClockStatus /* L7/ */ L7;
  ClockStatus /* L8/ */ L8;
  kcg_bool /* L9/ */ L9;
  ClockStatus /* L10/ */ L10;
  ClockStatus /* L11/ */ L11;
  kcg_bool /* L12/ */ L12;
  ClockStatus /* L13/ */ L13;
  ClockStatus /* L14/ */ L14;
  kcg_bool /* L15/ */ L15;
} outC_ChangeMode_Generated;

/* ===========  node initialization and cycle functions  =========== */
/* Generated::ChangeMode/ */
extern void ChangeMode_Generated(
  inC_ChangeMode_Generated *inC,
  outC_ChangeMode_Generated *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ChangeMode_reset_Generated(outC_ChangeMode_Generated *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ChangeMode_init_Generated(outC_ChangeMode_Generated *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ChangeMode_Generated_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** ChangeMode_Generated.h
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

