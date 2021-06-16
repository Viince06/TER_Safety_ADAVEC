/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */
#ifndef _Mg_delta_Utils_H_
#define _Mg_delta_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* delta/ */ delta;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L3/ */ _L3;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
} outC_Mg_delta_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* Utils::Mg_delta/ */
extern void Mg_delta_Utils(
  /* a/ */
  kcg_bool a,
  /* b/ */
  kcg_bool b,
  outC_Mg_delta_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Mg_delta_reset_Utils(outC_Mg_delta_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Mg_delta_init_Utils(outC_Mg_delta_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Mg_delta_Utils_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Mg_delta_Utils.h
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

