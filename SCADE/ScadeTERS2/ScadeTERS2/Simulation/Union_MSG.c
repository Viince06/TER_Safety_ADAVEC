/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Union_MSG.h"

/* MSG::Union/ */
void Union_MSG(
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_Union_MSG *outC)
{
  outC->_L20 = b;
  /* _L7=(Utils::DecodeClockStatus#2)/ */
  DecodeClockStatus_Utils(outC->_L20, &outC->Context_DecodeClockStatus_2);
  outC->_L7 = outC->Context_DecodeClockStatus_2.presence;
  outC->_L8 = outC->Context_DecodeClockStatus_2.alive;
  outC->_L1 = a;
  /* _L3=(Utils::DecodeClockStatus#1)/ */
  DecodeClockStatus_Utils(outC->_L1, &outC->Context_DecodeClockStatus_1);
  outC->_L3 = outC->Context_DecodeClockStatus_1.presence;
  outC->_L4 = outC->Context_DecodeClockStatus_1.alive;
  outC->_L5 = outC->_L3 | outC->_L7;
  outC->_L6 = outC->_L4 | outC->_L8;
  /* _L10=(Utils::EncodeClockStatus#1)/ */
  EncodeClockStatus_Utils(
    outC->_L5,
    outC->_L6,
    &outC->Context_EncodeClockStatus_1);
  outC->_L10 = outC->Context_EncodeClockStatus_1.c;
  outC->o = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void Union_init_MSG(outC_Union_MSG *outC)
{
  outC->_L20 = PRESENT;
  outC->_L10 = PRESENT;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L1 = PRESENT;
  outC->o = PRESENT;
  /* _L10=(Utils::EncodeClockStatus#1)/ */
  EncodeClockStatus_init_Utils(&outC->Context_EncodeClockStatus_1);
  /* _L3=(Utils::DecodeClockStatus#1)/ */
  DecodeClockStatus_init_Utils(&outC->Context_DecodeClockStatus_1);
  /* _L7=(Utils::DecodeClockStatus#2)/ */
  DecodeClockStatus_init_Utils(&outC->Context_DecodeClockStatus_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Union_reset_MSG(outC_Union_MSG *outC)
{
  /* _L10=(Utils::EncodeClockStatus#1)/ */
  EncodeClockStatus_reset_Utils(&outC->Context_EncodeClockStatus_1);
  /* _L3=(Utils::DecodeClockStatus#1)/ */
  DecodeClockStatus_reset_Utils(&outC->Context_DecodeClockStatus_1);
  /* _L7=(Utils::DecodeClockStatus#2)/ */
  DecodeClockStatus_reset_Utils(&outC->Context_DecodeClockStatus_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Union_MSG.c
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

