/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ProjetTERNoCCSLTest/Simulation/config.txt
** Generation date: 2021-03-25T16:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NewSubClockTEXT.h"

/* NewSubClockTEXT/ */
void NewSubClockTEXT(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_NewSubClockTEXT *outC)
{
  outC->L5 = kcg_true;
  outC->L6 = kcg_false;
  outC->L2 = b;
  /* L8= */
  switch (outC->L2) {
    case PRESENT :
      outC->L8 = outC->L5;
      break;
    default :
      outC->L8 = outC->L6;
      break;
  }
  outC->L9 = !outC->L8;
  outC->L3 = kcg_true;
  outC->L4 = kcg_false;
  outC->L1 = a;
  /* L7= */
  switch (outC->L1) {
    case PRESENT :
      outC->L7 = outC->L3;
      break;
    default :
      outC->L7 = outC->L4;
      break;
  }
  outC->L10 = outC->L7 & outC->L9;
  outC->v = outC->L10;
}

#ifndef KCG_USER_DEFINED_INIT
void NewSubClockTEXT_init(outC_NewSubClockTEXT *outC)
{
  outC->L10 = kcg_true;
  outC->L9 = kcg_true;
  outC->L8 = kcg_true;
  outC->L7 = kcg_true;
  outC->L6 = kcg_true;
  outC->L5 = kcg_true;
  outC->L4 = kcg_true;
  outC->L3 = kcg_true;
  outC->L2 = PRESENT;
  outC->L1 = PRESENT;
  outC->v = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NewSubClockTEXT_reset(outC_NewSubClockTEXT *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** NewSubClockTEXT.c
** Generation date: 2021-03-25T16:32:28
*************************************************************$ */

