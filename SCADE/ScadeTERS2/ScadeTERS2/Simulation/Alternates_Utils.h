/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */
#ifndef _Alternates_Utils_H_
#define _Alternates_Utils_H_

#include "kcg_types.h"
#include "isPresent_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* v/ */ v;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isPresent_Utils /* _L3=(Utils::isPresent#1)/ */ Context_isPresent_1;
  outC_isPresent_Utils /* _L6=(Utils::isPresent#2)/ */ Context_isPresent_2;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:S0:_L6/ */ _L6_S0_SM1;
  kcg_bool /* SM1:S0:_L5/ */ _L5_S0_SM1;
  kcg_bool /* SM1:S0:_L4/ */ _L4_S0_SM1;
  kcg_bool /* SM1:S0:_L3/ */ _L3_S0_SM1;
  kcg_bool /* SM1:S0:_L2/ */ _L2_S0_SM1;
  XStrictness /* SM1:S0:_L1/ */ _L1_S0_SM1;
  kcg_bool /* SM1:S1:_L8/ */ _L8_S1_SM1;
  kcg_bool /* SM1:S1:_L7/ */ _L7_S1_SM1;
  kcg_bool /* SM1:S1:_L6/ */ _L6_S1_SM1;
  kcg_bool /* SM1:S1:_L5/ */ _L5_S1_SM1;
  kcg_bool /* SM1:S1:_L4/ */ _L4_S1_SM1;
  XStrictness /* SM1:S1:_L1/ */ _L1_S1_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* pa/ */ pa;
  kcg_bool /* pb/ */ pb;
  ClockStatus /* _L1/ */ _L1;
  ClockStatus /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L6/ */ _L6;
} outC_Alternates_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* Utils::Alternates/ */
extern void Alternates_Utils(
  /* kind/ */
  XStrictness kind,
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_Alternates_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Alternates_reset_Utils(outC_Alternates_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Alternates_init_Utils(outC_Alternates_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Alternates_Utils_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Alternates_Utils.h
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

