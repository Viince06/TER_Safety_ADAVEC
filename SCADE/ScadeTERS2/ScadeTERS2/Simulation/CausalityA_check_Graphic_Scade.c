/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-04-10T12:26:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CausalityA_check_Graphic_Scade.h"

/* Graphic_Scade::CausalityA_check/ */
void CausalityA_check_Graphic_Scade(
  inC_CausalityA_check_Graphic_Scade *inC,
  outC_CausalityA_check_Graphic_Scade *outC)
{
  outC->_L9 = inC->b;
  /* _L11=(Utils::isPresent#4)/ */
  isPresent_Utils(outC->_L9, &outC->Context_isPresent_4);
  outC->_L11 = outC->Context_isPresent_4.presence;
  outC->_L8 = kcg_false;
  outC->_L1 = inC->a;
  /* _L3=(Utils::isPresent#1)/ */
  isPresent_Utils(outC->_L1, &outC->Context_isPresent_1);
  outC->_L3 = outC->Context_isPresent_1.presence;
  /* _L7= */
  if (outC->_L3) {
    outC->_L7 = outC->_L11;
  }
  else {
    outC->_L7 = outC->_L8;
  }
  outC->v = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CausalityA_check_init_Graphic_Scade(
  outC_CausalityA_check_Graphic_Scade *outC)
{
  outC->_L11 = kcg_true;
  outC->_L9 = PRESENT;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1 = PRESENT;
  outC->v = kcg_true;
  /* _L3=(Utils::isPresent#1)/ */
  isPresent_init_Utils(&outC->Context_isPresent_1);
  /* _L11=(Utils::isPresent#4)/ */
  isPresent_init_Utils(&outC->Context_isPresent_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CausalityA_check_reset_Graphic_Scade(
  outC_CausalityA_check_Graphic_Scade *outC)
{
  /* _L3=(Utils::isPresent#1)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_1);
  /* _L11=(Utils::isPresent#4)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** CausalityA_check_Graphic_Scade.c
** Generation date: 2021-04-10T12:26:36
*************************************************************$ */

