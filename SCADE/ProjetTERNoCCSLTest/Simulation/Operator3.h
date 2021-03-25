/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ProjetTERNoCCSLTest/Simulation/config.txt
** Generation date: 2021-03-25T16:32:28
*************************************************************$ */
#ifndef _Operator3_H_
#define _Operator3_H_

#include "kcg_types.h"
#include "NewSubClockTEXT.h"

/* ========================  input structure  ====================== */
typedef struct {
  ClockStatus /* a/ */ a;
  ClockStatus /* b/ */ b;
} inC_Operator3;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* v/ */ v;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NewSubClockTEXT /* _L2=(NewSubClockTEXT#2)/ */ Context_NewSubClockTEXT_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  ClockStatus /* _L3/ */ _L3;
  ClockStatus /* _L4/ */ _L4;
} outC_Operator3;

/* ===========  node initialization and cycle functions  =========== */
/* Operator3/ */
extern void Operator3(inC_Operator3 *inC, outC_Operator3 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Operator3_reset(outC_Operator3 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Operator3_init(outC_Operator3 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Operator3_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Operator3.h
** Generation date: 2021-03-25T16:32:28
*************************************************************$ */

