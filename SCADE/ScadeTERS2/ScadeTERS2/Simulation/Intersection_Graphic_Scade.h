/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-11T16:15:20
*************************************************************$ */
#ifndef _Intersection_Graphic_Scade_H_
#define _Intersection_Graphic_Scade_H_

#include "kcg_types.h"
#include "EncodeClockStatus_Utils.h"
#include "DecodeClockStatus_Utils.h"

/* ========================  input structure  ====================== */
typedef struct {
  ClockStatus /* b/ */ b;
  ClockStatus /* a/ */ a;
} inC_Intersection_Graphic_Scade;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ClockStatus /* o/ */ o;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EncodeClockStatus_Utils /* _L10=(Utils::EncodeClockStatus#1)/ */ Context_EncodeClockStatus_1;
  outC_DecodeClockStatus_Utils /* _L7=(Utils::DecodeClockStatus#1)/ */ Context_DecodeClockStatus_1;
  outC_DecodeClockStatus_Utils /* _L3=(Utils::DecodeClockStatus#2)/ */ Context_DecodeClockStatus_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ClockStatus /* _L10/ */ _L10;
  ClockStatus /* _L9/ */ _L9;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  ClockStatus /* _L6/ */ _L6;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L11/ */ _L11;
} outC_Intersection_Graphic_Scade;

/* ===========  node initialization and cycle functions  =========== */
/* Graphic_Scade::Intersection/ */
extern void Intersection_Graphic_Scade(
  inC_Intersection_Graphic_Scade *inC,
  outC_Intersection_Graphic_Scade *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Intersection_reset_Graphic_Scade(
  outC_Intersection_Graphic_Scade *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Intersection_init_Graphic_Scade(
  outC_Intersection_Graphic_Scade *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Intersection_Graphic_Scade_H_ */
/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Intersection_Graphic_Scade.h
** Generation date: 2021-06-11T16:15:20
*************************************************************$ */

