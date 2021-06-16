/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Precedence_MSG.h"

/* MSG::Precedence/ */
void Precedence_MSG(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_Precedence_MSG *outC)
{
  outC->_L14 = STRICT;
  outC->_L13 = kcg_lit_int32(0);
  outC->_L1 = a;
  /* _L4=(Utils::isPresent#1)/ */
  isPresent_Utils(outC->_L1, &outC->Context_isPresent_1);
  outC->_L4 = outC->Context_isPresent_1.presence;
  outC->_L2 = b;
  /* _L5=(Utils::isPresent#2)/ */
  isPresent_Utils(outC->_L2, &outC->Context_isPresent_2);
  outC->_L5 = outC->Context_isPresent_2.presence;
  /* _L12=(Utils::Mg_delta#1)/ */
  Mg_delta_Utils(outC->_L4, outC->_L5, &outC->Context_Mg_delta_1);
  outC->_L12 = outC->Context_Mg_delta_1.delta;
  outC->_L11 = outC->_L12 == outC->_L13;
  outC->_L10 = outC->_L11 & outC->_L5;
  outC->_L9 = kcg_true;
  outC->_L6 = !outC->_L4;
  /* _L7= */
  switch (outC->_L14) {
    case STRICT :
      outC->_L7 = outC->_L9;
      break;
    case NONSTRICT :
      outC->_L7 = outC->_L6;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L8 = outC->_L10 & outC->_L7;
  outC->o = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void Precedence_init_MSG(outC_Precedence_MSG *outC)
{
  outC->_L14 = STRICT;
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L2 = PRESENT;
  outC->_L1 = PRESENT;
  outC->o = kcg_true;
  /* _L12=(Utils::Mg_delta#1)/ */ Mg_delta_init_Utils(&outC->Context_Mg_delta_1);
  /* _L5=(Utils::isPresent#2)/ */
  isPresent_init_Utils(&outC->Context_isPresent_2);
  /* _L4=(Utils::isPresent#1)/ */
  isPresent_init_Utils(&outC->Context_isPresent_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Precedence_reset_MSG(outC_Precedence_MSG *outC)
{
  /* _L12=(Utils::Mg_delta#1)/ */ Mg_delta_reset_Utils(&outC->Context_Mg_delta_1);
  /* _L5=(Utils::isPresent#2)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_2);
  /* _L4=(Utils::isPresent#1)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Precedence_MSG.c
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

