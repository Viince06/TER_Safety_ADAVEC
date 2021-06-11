/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-11T16:15:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Intersection_Graphic_Scade.h"

/* Graphic_Scade::Intersection/ */
void Intersection_Graphic_Scade(
  inC_Intersection_Graphic_Scade *inC,
  outC_Intersection_Graphic_Scade *outC)
{
  outC->_L6 = inC->b;
  /* _L3=(Utils::DecodeClockStatus#2)/ */
  DecodeClockStatus_Utils(outC->_L6, &outC->Context_DecodeClockStatus_2);
  outC->_L3 = outC->Context_DecodeClockStatus_2.presence;
  outC->_L4 = outC->Context_DecodeClockStatus_2.alive;
  outC->_L9 = inC->a;
  /* _L7=(Utils::DecodeClockStatus#1)/ */
  DecodeClockStatus_Utils(outC->_L9, &outC->Context_DecodeClockStatus_1);
  outC->_L7 = outC->Context_DecodeClockStatus_1.presence;
  outC->_L8 = outC->Context_DecodeClockStatus_1.alive;
  outC->_L2 = outC->_L8 & outC->_L4;
  outC->_L11 = !outC->_L2;
  outC->_L1 = outC->_L7 & outC->_L3;
  /* _L10=(Utils::EncodeClockStatus#1)/ */
  EncodeClockStatus_Utils(
    outC->_L1,
    outC->_L11,
    &outC->Context_EncodeClockStatus_1);
  outC->_L10 = outC->Context_EncodeClockStatus_1.c;
  outC->o = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void Intersection_init_Graphic_Scade(outC_Intersection_Graphic_Scade *outC)
{
  outC->_L11 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L6 = PRESENT;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L9 = PRESENT;
  outC->_L10 = PRESENT;
  outC->o = PRESENT;
  /* _L10=(Utils::EncodeClockStatus#1)/ */
  EncodeClockStatus_init_Utils(&outC->Context_EncodeClockStatus_1);
  /* _L7=(Utils::DecodeClockStatus#1)/ */
  DecodeClockStatus_init_Utils(&outC->Context_DecodeClockStatus_1);
  /* _L3=(Utils::DecodeClockStatus#2)/ */
  DecodeClockStatus_init_Utils(&outC->Context_DecodeClockStatus_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Intersection_reset_Graphic_Scade(outC_Intersection_Graphic_Scade *outC)
{
  /* _L10=(Utils::EncodeClockStatus#1)/ */
  EncodeClockStatus_reset_Utils(&outC->Context_EncodeClockStatus_1);
  /* _L7=(Utils::DecodeClockStatus#1)/ */
  DecodeClockStatus_reset_Utils(&outC->Context_DecodeClockStatus_1);
  /* _L3=(Utils::DecodeClockStatus#2)/ */
  DecodeClockStatus_reset_Utils(&outC->Context_DecodeClockStatus_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Intersection_Graphic_Scade.c
** Generation date: 2021-06-11T16:15:20
*************************************************************$ */

