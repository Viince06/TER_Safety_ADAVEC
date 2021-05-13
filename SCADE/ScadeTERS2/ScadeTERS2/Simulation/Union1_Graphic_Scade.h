/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */
#ifndef _Union1_Graphic_Scade_H_
#define _Union1_Graphic_Scade_H_

#include "kcg_types.h"
#include "Union_Graphic_Scade.h"

/* ========================  input structure  ====================== */
typedef struct {
  ClockStatus /* a/ */ a;
  ArrayClock4 /* bArray/ */ bArray;
} inC_Union1_Graphic_Scade;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ClockStatus /* o/ */ o;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Union_Graphic_Scade /* _L21=(Graphic_Scade::Union#1)/ */ Context_Union_1;
  outC_Union_Graphic_Scade /* _L34=(Graphic_Scade::Union#4)/ */ Context_Union_4;
  outC_Union_Graphic_Scade /* _L33=(Graphic_Scade::Union#3)/ */ Context_Union_3;
  outC_Union_Graphic_Scade /* _L32=(Graphic_Scade::Union#2)/ */ Context_Union_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* _L34/ */ _L34;
  ClockStatus /* _L33/ */ _L33;
  ClockStatus /* _L32/ */ _L32;
  ClockStatus /* _L24/ */ _L24;
  ArrayClock4 /* _L23/ */ _L23;
  ClockStatus /* _L22/ */ _L22;
  ClockStatus /* _L21/ */ _L21;
  ClockStatus /* _L37/ */ _L37;
  ClockStatus /* _L36/ */ _L36;
  ClockStatus /* _L35/ */ _L35;
} outC_Union1_Graphic_Scade;

/* ===========  node initialization and cycle functions  =========== */
/* Graphic_Scade::Union1/ */
extern void Union1_Graphic_Scade(
  inC_Union1_Graphic_Scade *inC,
  outC_Union1_Graphic_Scade *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Union1_reset_Graphic_Scade(outC_Union1_Graphic_Scade *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Union1_init_Graphic_Scade(outC_Union1_Graphic_Scade *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Union1_Graphic_Scade_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Union1_Graphic_Scade.h
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */

