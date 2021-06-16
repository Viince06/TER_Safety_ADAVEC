/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */
#ifndef _DecodeClockStatus_Utils_H_
#define _DecodeClockStatus_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* presence/ */ presence;
  kcg_bool /* alive/ */ alive;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_DecodeClockStatus_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* Utils::DecodeClockStatus/ */
extern void DecodeClockStatus_Utils(
  /* c/ */
  ClockStatus c,
  outC_DecodeClockStatus_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DecodeClockStatus_reset_Utils(outC_DecodeClockStatus_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DecodeClockStatus_init_Utils(outC_DecodeClockStatus_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DecodeClockStatus_Utils_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** DecodeClockStatus_Utils.h
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

