/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-04-10T12:26:36
*************************************************************$ */
#ifndef _CausalityA_check_Graphic_Scade_H_
#define _CausalityA_check_Graphic_Scade_H_

#include "kcg_types.h"
#include "isPresent_Utils.h"

/* ========================  input structure  ====================== */
typedef struct {
  ClockStatus /* a/ */ a;
  ClockStatus /* b/ */ b;
} inC_CausalityA_check_Graphic_Scade;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* v/ */ v;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isPresent_Utils /* _L3=(Utils::isPresent#1)/ */ Context_isPresent_1;
  outC_isPresent_Utils /* _L11=(Utils::isPresent#4)/ */ Context_isPresent_4;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  ClockStatus /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
} outC_CausalityA_check_Graphic_Scade;

/* ===========  node initialization and cycle functions  =========== */
/* Graphic_Scade::CausalityA_check/ */
extern void CausalityA_check_Graphic_Scade(
  inC_CausalityA_check_Graphic_Scade *inC,
  outC_CausalityA_check_Graphic_Scade *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CausalityA_check_reset_Graphic_Scade(
  outC_CausalityA_check_Graphic_Scade *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CausalityA_check_init_Graphic_Scade(
  outC_CausalityA_check_Graphic_Scade *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CausalityA_check_Graphic_Scade_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** CausalityA_check_Graphic_Scade.h
** Generation date: 2021-04-10T12:26:36
*************************************************************$ */

