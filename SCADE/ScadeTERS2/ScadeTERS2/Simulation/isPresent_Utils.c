/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-05-20T17:29:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isPresent_Utils.h"

/* Utils::isPresent/ */
void isPresent_Utils(/* a/ */ ClockStatus a, outC_isPresent_Utils *outC)
{
  outC->_L4 = kcg_false;
  outC->_L3 = kcg_true;
  outC->_L1 = a;
  /* _L2= */
  switch (outC->_L1) {
    case PRESENT :
      outC->_L2 = outC->_L3;
      break;
    default :
      outC->_L2 = outC->_L4;
      break;
  }
  outC->presence = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void isPresent_init_Utils(outC_isPresent_Utils *outC)
{
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = PRESENT;
  outC->presence = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void isPresent_reset_Utils(outC_isPresent_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** isPresent_Utils.c
** Generation date: 2021-05-20T17:29:55
*************************************************************$ */

