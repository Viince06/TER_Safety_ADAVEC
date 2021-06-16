/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Mg_delta_Utils.h"

/* Utils::Mg_delta/ */
void Mg_delta_Utils(
  /* a/ */
  kcg_bool a,
  /* b/ */
  kcg_bool b,
  outC_Mg_delta_Utils *outC)
{
  outC->_L10 = kcg_lit_int32(1);
  outC->_L9 = kcg_lit_int32(1);
  /* _L4= */
  if (outC->init) {
    outC->_L4 = kcg_lit_int32(0);
  }
  else {
    outC->_L4 = outC->_L3;
  }
  outC->_L8 = outC->_L4 - outC->_L10;
  outC->_L7 = outC->_L4 + outC->_L9;
  outC->delta = outC->_L4;
  outC->_L2 = b;
  /* _L6= */
  if (outC->_L2) {
    outC->_L6 = outC->_L8;
  }
  else {
    outC->_L6 = outC->_L4;
  }
  /* _L5= */
  if (outC->_L2) {
    outC->_L5 = outC->_L4;
  }
  else {
    outC->_L5 = outC->_L7;
  }
  outC->_L1 = a;
  /* _L3= */
  if (outC->_L1) {
    outC->_L3 = outC->_L5;
  }
  else {
    outC->_L3 = outC->_L6;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Mg_delta_init_Utils(outC_Mg_delta_Utils *outC)
{
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->delta = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Mg_delta_reset_Utils(outC_Mg_delta_Utils *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Mg_delta_Utils.c
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

