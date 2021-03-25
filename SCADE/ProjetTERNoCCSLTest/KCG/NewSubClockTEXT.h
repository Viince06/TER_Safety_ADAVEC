/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ProjetTERNoCCSLTest/KCG/config.txt
** Generation date: 2021-03-25T11:52:53
*************************************************************$ */
#ifndef _NewSubClockTEXT_H_
#define _NewSubClockTEXT_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  ClockStatus /* L1/, a/ */ a;
  ClockStatus /* L2/, b/ */ b;
} inC_NewSubClockTEXT;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* L10/, v/ */ v;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_NewSubClockTEXT;

/* ===========  node initialization and cycle functions  =========== */
/* NewSubClockTEXT/ */
extern void NewSubClockTEXT(
  inC_NewSubClockTEXT *inC,
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
** Generation date: 2021-03-25T11:52:53
*************************************************************$ */

