/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-05-20T17:29:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exclusion_Graphic_Scade.h"

/* Graphic_Scade::Exclusion/ */
void Exclusion_Graphic_Scade(
  inC_Exclusion_Graphic_Scade *inC,
  outC_Exclusion_Graphic_Scade *outC)
{
  outC->_L2 = inC->b;
  /* _L5=(Utils::isPresent#2)/ */
  isPresent_Utils(outC->_L2, &outC->Context_isPresent_2);
  outC->_L5 = outC->Context_isPresent_2.presence;
  outC->_L1 = inC->a;
  /* _L4=(Utils::isPresent#1)/ */
  isPresent_Utils(outC->_L1, &outC->Context_isPresent_1);
  outC->_L4 = outC->Context_isPresent_1.presence;
  outC->_L3 = outC->_L4 ^ outC->_L5;
  outC->o = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void Exclusion_init_Graphic_Scade(outC_Exclusion_Graphic_Scade *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = PRESENT;
  outC->_L1 = PRESENT;
  outC->o = kcg_true;
  /* _L4=(Utils::isPresent#1)/ */
  isPresent_init_Utils(&outC->Context_isPresent_1);
  /* _L5=(Utils::isPresent#2)/ */
  isPresent_init_Utils(&outC->Context_isPresent_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exclusion_reset_Graphic_Scade(outC_Exclusion_Graphic_Scade *outC)
{
  /* _L4=(Utils::isPresent#1)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_1);
  /* _L5=(Utils::isPresent#2)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Exclusion_Graphic_Scade.c
** Generation date: 2021-05-20T17:29:55
*************************************************************$ */

