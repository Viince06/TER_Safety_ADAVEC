/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-04-08T12:53:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "And3_Utils.h"

/* Utils::And3/ */
void And3_Utils(
  /* a/ */
  kcg_bool a,
  /* b/ */
  kcg_bool b,
  /* c/ */
  kcg_bool c,
  outC_And3_Utils *outC)
{
  outC->_L13 = c;
  outC->_L12 = b;
  outC->_L11 = a;
  outC->_L14 = outC->_L11 & outC->_L12;
  outC->_L15 = outC->_L14 & outC->_L13;
  outC->z = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void And3_init_Utils(outC_And3_Utils *outC)
{
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->z = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void And3_reset_Utils(outC_And3_Utils *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** And3_Utils.c
** Generation date: 2021-04-08T12:53:31
*************************************************************$ */

