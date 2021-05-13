/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */
#ifndef _EncodeClockStatus_Utils_H_
#define _EncodeClockStatus_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ClockStatus /* c/ */ c;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  ClockStatus /* _L3/ */ _L3;
  ClockStatus /* _L4/ */ _L4;
  ClockStatus /* _L5/ */ _L5;
  ClockStatus /* _L6/ */ _L6;
  ClockStatus /* _L7/ */ _L7;
} outC_EncodeClockStatus_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* Utils::EncodeClockStatus/ */
extern void EncodeClockStatus_Utils(
  /* presence/ */
  kcg_bool presence,
  /* alive/ */
  kcg_bool alive,
  outC_EncodeClockStatus_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EncodeClockStatus_reset_Utils(outC_EncodeClockStatus_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EncodeClockStatus_init_Utils(outC_EncodeClockStatus_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EncodeClockStatus_Utils_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** EncodeClockStatus_Utils.h
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */

