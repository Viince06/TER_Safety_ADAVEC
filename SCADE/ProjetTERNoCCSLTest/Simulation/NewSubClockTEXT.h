/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ProjetTERNoCCSLTest/Simulation/config.txt
** Generation date: 2021-03-25T16:32:28
*************************************************************$ */
#ifndef _NewSubClockTEXT_H_
#define _NewSubClockTEXT_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* v/ */ v;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* L1/ */ L1;
  ClockStatus /* L2/ */ L2;
  kcg_bool /* L3/ */ L3;
  kcg_bool /* L4/ */ L4;
  kcg_bool /* L5/ */ L5;
  kcg_bool /* L6/ */ L6;
  kcg_bool /* L7/ */ L7;
  kcg_bool /* L8/ */ L8;
  kcg_bool /* L9/ */ L9;
  kcg_bool /* L10/ */ L10;
} outC_NewSubClockTEXT;

/* ===========  node initialization and cycle functions  =========== */
/* NewSubClockTEXT/ */
extern void NewSubClockTEXT(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_NewSubClockTEXT *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NewSubClockTEXT_reset(outC_NewSubClockTEXT *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NewSubClockTEXT_init(outC_NewSubClockTEXT *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NewSubClockTEXT_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** NewSubClockTEXT.h
** Generation date: 2021-03-25T16:32:28
*************************************************************$ */

