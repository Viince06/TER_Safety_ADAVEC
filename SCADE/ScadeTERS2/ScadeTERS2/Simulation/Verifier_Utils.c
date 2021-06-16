/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Verifier_Utils.h"

/* Utils::Verifier/ */
void Verifier_Utils(inC_Verifier_Utils *inC, outC_Verifier_Utils *outC)
{
  outC->_L10 = inC->xkind;
  outC->_L4 = inC->a;
  outC->_L5 = inC->b;
  /* _L1=(Utils::Alternates#1)/ */
  Alternates_Utils(
    outC->_L10,
    outC->_L4,
    outC->_L5,
    &outC->Context_Alternates_1);
  outC->_L1 = outC->Context_Alternates_1.v;
  outC->_L7 = inC->init;
  outC->_L8 = inC->max;
  outC->_L6 = inC->kind;
  /* _L3=(MSG::Causality2#1)/ */
  Causality2_MSG(
    outC->_L4,
    outC->_L5,
    outC->_L7,
    outC->_L8,
    outC->_L6,
    &outC->Context_Causality2_1);
  outC->_L3 = outC->Context_Causality2_1.o;
  outC->_L11 = outC->_L3 & outC->_L1;
  outC->v = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void Verifier_init_Utils(outC_Verifier_Utils *outC)
{
  outC->_L11 = kcg_true;
  outC->_L10 = RNS;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = STRICT;
  outC->_L5 = PRESENT;
  outC->_L4 = PRESENT;
  outC->_L3 = kcg_true;
  outC->_L1 = kcg_true;
  outC->v = kcg_true;
  /* _L3=(MSG::Causality2#1)/ */ Causality2_init_MSG(&outC->Context_Causality2_1);
  /* _L1=(Utils::Alternates#1)/ */
  Alternates_init_Utils(&outC->Context_Alternates_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Verifier_reset_Utils(outC_Verifier_Utils *outC)
{
  /* _L3=(MSG::Causality2#1)/ */
  Causality2_reset_MSG(&outC->Context_Causality2_1);
  /* _L1=(Utils::Alternates#1)/ */
  Alternates_reset_Utils(&outC->Context_Alternates_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Verifier_Utils.c
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

