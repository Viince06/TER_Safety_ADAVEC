/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */
#ifndef _Precedence_MSG_H_
#define _Precedence_MSG_H_

#include "kcg_types.h"
#include "Mg_delta_Utils.h"
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
  outC_Mg_delta_Utils /* _L12=(Utils::Mg_delta#1)/ */ Context_Mg_delta_1;
  outC_isPresent_Utils /* _L5=(Utils::isPresent#2)/ */ Context_isPresent_2;
  outC_isPresent_Utils /* _L4=(Utils::isPresent#1)/ */ Context_isPresent_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* _L1/ */ _L1;
  ClockStatus /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  Strictness /* _L14/ */ _L14;
} outC_Precedence_MSG;

/* ===========  node initialization and cycle functions  =========== */
/* MSG::Precedence/ */
extern void Precedence_MSG(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_Precedence_MSG *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Precedence_reset_MSG(outC_Precedence_MSG *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Precedence_init_MSG(outC_Precedence_MSG *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Precedence_MSG_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Precedence_MSG.h
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

