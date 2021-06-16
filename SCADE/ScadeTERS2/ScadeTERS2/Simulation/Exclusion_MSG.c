/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exclusion_MSG.h"

/* MSG::Exclusion/ */
void Exclusion_MSG(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_Exclusion_MSG *outC)
{
  outC->_L2 = b;
  /* _L5=(Utils::isPresent#2)/ */
  isPresent_Utils(outC->_L2, &outC->Context_isPresent_2);
  outC->_L5 = outC->Context_isPresent_2.presence;
  outC->_L1 = a;
  /* _L4=(Utils::isPresent#1)/ */
  isPresent_Utils(outC->_L1, &outC->Context_isPresent_1);
  outC->_L4 = outC->Context_isPresent_1.presence;
  outC->_L3 = outC->_L4 & outC->_L5;
  outC->_L6 = !outC->_L3;
  outC->o = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void Exclusion_init_MSG(outC_Exclusion_MSG *outC)
{
  outC->_L6 = kcg_true;
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
void Exclusion_reset_MSG(outC_Exclusion_MSG *outC)
{
  /* _L4=(Utils::isPresent#1)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_1);
  /* _L5=(Utils::isPresent#2)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Exclusion_MSG.c
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */

