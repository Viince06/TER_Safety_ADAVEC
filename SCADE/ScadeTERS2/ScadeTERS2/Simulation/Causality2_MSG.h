/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */
#ifndef _Causality2_MSG_H_
#define _Causality2_MSG_H_

#include "kcg_types.h"
#include "Causality_MSG.h"
#include "InitMax_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* o/ */ o;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InitMax_Utils /* _L14=(Utils::InitMax#1)/ */ Context_InitMax_1;
  outC_Causality_MSG /* _L17=(MSG::Causality#1)/ */ Context_Causality_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  ClockStatus /* _L18/ */ _L18;
  ClockStatus /* _L19/ */ _L19;
} outC_Causality2_MSG;

/* ===========  node initialization and cycle functions  =========== */
/* MSG::Causality2/ */
extern void Causality2_MSG(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  /* init/ */
  kcg_int32 init,
  /* max/ */
  kcg_int32 max,
  /* kind/ */
  Strictness kind,
  outC_Causality2_MSG *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Causality2_reset_MSG(outC_Causality2_MSG *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Causality2_init_MSG(outC_Causality2_MSG *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Causality2_MSG_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Causality2_MSG.h
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

