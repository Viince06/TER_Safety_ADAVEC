/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-11T16:15:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DecodeClockStatus_Utils.h"

/* Utils::DecodeClockStatus/ */
void DecodeClockStatus_Utils(
  /* c/ */
  ClockStatus c,
  outC_DecodeClockStatus_Utils *outC)
{
  outC->_L6 = kcg_false;
  outC->_L7 = kcg_true;
  outC->_L1 = c;
  /* _L3= */
  switch (outC->_L1) {
    case DEAD :
      outC->_L3 = outC->_L6;
      break;
    default :
      outC->_L3 = outC->_L7;
      break;
  }
  outC->alive = outC->_L3;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_false;
  /* _L2= */
  switch (outC->_L1) {
    case PRESENT :
      outC->_L2 = outC->_L4;
      break;
    default :
      outC->_L2 = outC->_L5;
      break;
  }
  outC->presence = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void DecodeClockStatus_init_Utils(outC_DecodeClockStatus_Utils *outC)
{
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = PRESENT;
  outC->alive = kcg_true;
  outC->presence = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DecodeClockStatus_reset_Utils(outC_DecodeClockStatus_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** DecodeClockStatus_Utils.c
** Generation date: 2021-06-11T16:15:20
*************************************************************$ */

