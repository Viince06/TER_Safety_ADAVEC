/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */
#ifndef _And3_Utils_H_
#define _And3_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* z/ */ z;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
} outC_And3_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* Utils::And3/ */
extern void And3_Utils(
  /* a/ */
  kcg_bool a,
  /* b/ */
  kcg_bool b,
  /* c/ */
  kcg_bool c,
  outC_And3_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void And3_reset_Utils(outC_And3_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void And3_init_Utils(outC_And3_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _And3_Utils_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** And3_Utils.h
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

