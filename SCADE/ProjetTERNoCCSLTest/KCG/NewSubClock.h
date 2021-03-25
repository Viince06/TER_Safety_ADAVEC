/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ProjetTERNoCCSLTest/KCG/config.txt
** Generation date: 2021-03-25T11:56:18
*************************************************************$ */
#ifndef _NewSubClock_H_
#define _NewSubClock_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  ClockStatus /* _L1/, a/ */ a;
  ClockStatus /* _L2/, b/ */ b;
} inC_NewSubClock;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* _L11/, v/ */ v;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_NewSubClock;

/* ===========  node initialization and cycle functions  =========== */
/* NewSubClock/ */
extern void NewSubClock(inC_NewSubClock *inC, outC_NewSubClock *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NewSubClock_reset(outC_NewSubClock *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NewSubClock_init(outC_NewSubClock *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NewSubClock_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** NewSubClock.h
** Generation date: 2021-03-25T11:56:18
*************************************************************$ */

