/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */
#ifndef _ExclusionCondition_Generated_H_
#define _ExclusionCondition_Generated_H_

#include "kcg_types.h"
#include "Exclusion_MSG.h"

/* ========================  input structure  ====================== */
typedef struct {
  ClockStatus /* Autonome/ */ Autonome;
  ClockStatus /* MRM/ */ MRM;
  ClockStatus /* Manual/ */ Manual;
} inC_ExclusionCondition_Generated;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* O1/ */ O1;
  kcg_bool /* O2/ */ O2;
  kcg_bool /* O3/ */ O3;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Exclusion_MSG /* L3=(MSG::Exclusion#1)/ */ Context_Exclusion_1;
  outC_Exclusion_MSG /* L6=(MSG::Exclusion#2)/ */ Context_Exclusion_2;
  outC_Exclusion_MSG /* L9=(MSG::Exclusion#3)/ */ Context_Exclusion_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* L1/ */ L1;
  ClockStatus /* L2/ */ L2;
  kcg_bool /* L3/ */ L3;
  ClockStatus /* L4/ */ L4;
  ClockStatus /* L5/ */ L5;
  kcg_bool /* L6/ */ L6;
  ClockStatus /* L7/ */ L7;
  ClockStatus /* L8/ */ L8;
  kcg_bool /* L9/ */ L9;
} outC_ExclusionCondition_Generated;

/* ===========  node initialization and cycle functions  =========== */
/* Generated::ExclusionCondition/ */
extern void ExclusionCondition_Generated(
  inC_ExclusionCondition_Generated *inC,
  outC_ExclusionCondition_Generated *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ExclusionCondition_reset_Generated(
  outC_ExclusionCondition_Generated *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ExclusionCondition_init_Generated(
  outC_ExclusionCondition_Generated *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ExclusionCondition_Generated_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** ExclusionCondition_Generated.h
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */

