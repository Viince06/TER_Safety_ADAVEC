/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EncodeClockStatus_Utils.h"

/* Utils::EncodeClockStatus/ */
void EncodeClockStatus_Utils(
  /* presence/ */
  kcg_bool presence,
  /* alive/ */
  kcg_bool alive,
  outC_EncodeClockStatus_Utils *outC)
{
  outC->_L7 = DEAD;
  outC->_L6 = ABSENT;
  outC->_L5 = PRESENT;
  outC->_L1 = presence;
  /* _L3= */
  if (outC->_L1) {
    outC->_L3 = outC->_L5;
  }
  else {
    outC->_L3 = outC->_L6;
  }
  outC->_L2 = alive;
  /* _L4= */
  if (outC->_L2) {
    outC->_L4 = outC->_L3;
  }
  else {
    outC->_L4 = outC->_L7;
  }
  outC->c = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void EncodeClockStatus_init_Utils(outC_EncodeClockStatus_Utils *outC)
{
  outC->_L7 = PRESENT;
  outC->_L6 = PRESENT;
  outC->_L5 = PRESENT;
  outC->_L4 = PRESENT;
  outC->_L3 = PRESENT;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->c = PRESENT;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EncodeClockStatus_reset_Utils(outC_EncodeClockStatus_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** EncodeClockStatus_Utils.c
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

