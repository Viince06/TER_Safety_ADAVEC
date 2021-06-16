/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */
#ifndef _isPresent_Utils_H_
#define _isPresent_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* presence/ */ presence;
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
} outC_isPresent_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* Utils::isPresent/ */
extern void isPresent_Utils(/* a/ */ ClockStatus a, outC_isPresent_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void isPresent_reset_Utils(outC_isPresent_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void isPresent_init_Utils(outC_isPresent_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _isPresent_Utils_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** isPresent_Utils.h
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */

