/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-04-08T12:53:31
*************************************************************$ */
#ifndef _InitMax_Utils_H_
#define _InitMax_Utils_H_

#include "kcg_types.h"
#include "And3_Utils.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int32 /* init/ */ init;
  kcg_int32 /* max/ */ max;
  kcg_bool /* vin/ */ vin;
} inC_InitMax_Utils;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* vout/ */ vout;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L5/ */ _L5;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_And3_Utils /* _L11=(Utils::And3#1)/ */ Context_And3_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
} outC_InitMax_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* Utils::InitMax/ */
extern void InitMax_Utils(inC_InitMax_Utils *inC, outC_InitMax_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InitMax_reset_Utils(outC_InitMax_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InitMax_init_Utils(outC_InitMax_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InitMax_Utils_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** InitMax_Utils.h
** Generation date: 2021-04-08T12:53:31
*************************************************************$ */

