/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */
#ifndef _Exclusion_MSG_H_
#define _Exclusion_MSG_H_

#include "kcg_types.h"
#include "isPresent_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* o/ */ o;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isPresent_Utils /* _L4=(Utils::isPresent#1)/ */ Context_isPresent_1;
  outC_isPresent_Utils /* _L5=(Utils::isPresent#2)/ */ Context_isPresent_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* _L1/ */ _L1;
  ClockStatus /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
} outC_Exclusion_MSG;

/* ===========  node initialization and cycle functions  =========== */
/* MSG::Exclusion/ */
extern void Exclusion_MSG(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_Exclusion_MSG *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Exclusion_reset_MSG(outC_Exclusion_MSG *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Exclusion_init_MSG(outC_Exclusion_MSG *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Exclusion_MSG_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Exclusion_MSG.h
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */

