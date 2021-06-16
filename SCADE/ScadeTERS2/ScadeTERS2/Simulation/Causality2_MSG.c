/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Causality2_MSG.h"

/* MSG::Causality2/ */
void Causality2_MSG(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  /* init/ */
  kcg_int32 init,
  /* max/ */
  kcg_int32 max,
  /* kind/ */
  Strictness kind,
  outC_Causality2_MSG *outC)
{
  outC->_L19 = b;
  outC->_L18 = a;
  /* _L17=(MSG::Causality#1)/ */
  Causality_MSG(outC->_L18, outC->_L19, &outC->Context_Causality_1);
  outC->_L17 = outC->Context_Causality_1.o;
  outC->_L16 = max;
  outC->_L15 = init;
  /* _L14=(Utils::InitMax#1)/ */
  InitMax_Utils(outC->_L17, outC->_L15, outC->_L16, &outC->Context_InitMax_1);
  outC->_L14 = outC->Context_InitMax_1.vout;
  outC->o = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void Causality2_init_MSG(outC_Causality2_MSG *outC)
{
  outC->_L19 = PRESENT;
  outC->_L18 = PRESENT;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->o = kcg_true;
  /* _L14=(Utils::InitMax#1)/ */ InitMax_init_Utils(&outC->Context_InitMax_1);
  /* _L17=(MSG::Causality#1)/ */ Causality_init_MSG(&outC->Context_Causality_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Causality2_reset_MSG(outC_Causality2_MSG *outC)
{
  /* _L14=(Utils::InitMax#1)/ */ InitMax_reset_Utils(&outC->Context_InitMax_1);
  /* _L17=(MSG::Causality#1)/ */ Causality_reset_MSG(&outC->Context_Causality_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Causality2_MSG.c
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

