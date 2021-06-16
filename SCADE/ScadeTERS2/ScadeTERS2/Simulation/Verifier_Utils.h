/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */
#ifndef _Verifier_Utils_H_
#define _Verifier_Utils_H_

#include "kcg_types.h"
#include "Causality2_MSG.h"
#include "Alternates_Utils.h"

/* ========================  input structure  ====================== */
typedef struct {
  ClockStatus /* a/ */ a;
  ClockStatus /* b/ */ b;
  Strictness /* kind/ */ kind;
  XStrictness /* xkind/ */ xkind;
  kcg_int32 /* init/ */ init;
  kcg_int32 /* max/ */ max;
} inC_Verifier_Utils;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* v/ */ v;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Causality2_MSG /* _L3=(MSG::Causality2#1)/ */ Context_Causality2_1;
  outC_Alternates_Utils /* _L1=(Utils::Alternates#1)/ */ Context_Alternates_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  ClockStatus /* _L4/ */ _L4;
  ClockStatus /* _L5/ */ _L5;
  Strictness /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  XStrictness /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
} outC_Verifier_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* Utils::Verifier/ */
extern void Verifier_Utils(inC_Verifier_Utils *inC, outC_Verifier_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Verifier_reset_Utils(outC_Verifier_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Verifier_init_Utils(outC_Verifier_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Verifier_Utils_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Verifier_Utils.h
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

