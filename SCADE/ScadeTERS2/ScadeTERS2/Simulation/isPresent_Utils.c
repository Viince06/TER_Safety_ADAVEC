/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-04-10T12:26:36
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



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** isPresent_Utils.c
** Generation date: 2021-04-10T12:26:36
*************************************************************$ */

