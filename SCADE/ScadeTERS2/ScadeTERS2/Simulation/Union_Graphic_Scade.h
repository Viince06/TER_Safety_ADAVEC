/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */
#ifndef _Union_Graphic_Scade_H_
#define _Union_Graphic_Scade_H_

#include "kcg_types.h"
#include "EncodeClockStatus_Utils.h"
#include "DecodeClockStatus_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ClockStatus /* o/ */ o;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EncodeClockStatus_Utils /* _L10=(Utils::EncodeClockStatus#1)/ */ Context_EncodeClockStatus_1;
  outC_DecodeClockStatus_Utils /* _L3=(Utils::DecodeClockStatus#1)/ */ Context_DecodeClockStatus_1;
  outC_DecodeClockStatus_Utils /* _L7=(Utils::DecodeClockStatus#2)/ */ Context_DecodeClockStatus_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L9/ */ _L9;
  ClockStatus /* _L10/ */ _L10;
  ClockStatus /* _L20/ */ _L20;
} outC_Union_Graphic_Scade;

/* ===========  node initialization and cycle functions  =========== */
/* Graphic_Scade::Union/ */
extern void Union_Graphic_Scade(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_Union_Graphic_Scade *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Union_reset_Graphic_Scade(outC_Union_Graphic_Scade *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Union_init_Graphic_Scade(outC_Union_Graphic_Scade *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Union_Graphic_Scade_H_ */
/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Union_Graphic_Scade.h
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */

