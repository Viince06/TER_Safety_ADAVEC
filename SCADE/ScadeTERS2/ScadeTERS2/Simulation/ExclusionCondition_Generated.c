/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ExclusionCondition_Generated.h"

/* Generated::ExclusionCondition/ */
void ExclusionCondition_Generated(
  inC_ExclusionCondition_Generated *inC,
  outC_ExclusionCondition_Generated *outC)
{
  outC->L7 = inC->MRM;
  outC->L8 = inC->Manual;
  /* L9=(MSG::Exclusion#3)/ */
  Exclusion_MSG(outC->L7, outC->L8, &outC->Context_Exclusion_3);
  outC->L9 = outC->Context_Exclusion_3.o;
  outC->O3 = outC->L9;
  outC->L4 = inC->Autonome;
  outC->L5 = inC->Manual;
  /* L6=(MSG::Exclusion#2)/ */
  Exclusion_MSG(outC->L4, outC->L5, &outC->Context_Exclusion_2);
  outC->L6 = outC->Context_Exclusion_2.o;
  outC->O2 = outC->L6;
  outC->L1 = inC->Autonome;
  outC->L2 = inC->MRM;
  /* L3=(MSG::Exclusion#1)/ */
  Exclusion_MSG(outC->L1, outC->L2, &outC->Context_Exclusion_1);
  outC->L3 = outC->Context_Exclusion_1.o;
  outC->O1 = outC->L3;
}

#ifndef KCG_USER_DEFINED_INIT
void ExclusionCondition_init_Generated(outC_ExclusionCondition_Generated *outC)
{
  outC->L9 = kcg_true;
  outC->L8 = PRESENT;
  outC->L7 = PRESENT;
  outC->L6 = kcg_true;
  outC->L5 = PRESENT;
  outC->L4 = PRESENT;
  outC->L3 = kcg_true;
  outC->L2 = PRESENT;
  outC->L1 = PRESENT;
  outC->O3 = kcg_true;
  outC->O2 = kcg_true;
  outC->O1 = kcg_true;
  /* L3=(MSG::Exclusion#1)/ */ Exclusion_init_MSG(&outC->Context_Exclusion_1);
  /* L6=(MSG::Exclusion#2)/ */ Exclusion_init_MSG(&outC->Context_Exclusion_2);
  /* L9=(MSG::Exclusion#3)/ */ Exclusion_init_MSG(&outC->Context_Exclusion_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ExclusionCondition_reset_Generated(outC_ExclusionCondition_Generated *outC)
{
  /* L3=(MSG::Exclusion#1)/ */ Exclusion_reset_MSG(&outC->Context_Exclusion_1);
  /* L6=(MSG::Exclusion#2)/ */ Exclusion_reset_MSG(&outC->Context_Exclusion_2);
  /* L9=(MSG::Exclusion#3)/ */ Exclusion_reset_MSG(&outC->Context_Exclusion_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** ExclusionCondition_Generated.c
** Generation date: 2021-06-16T10:21:05
*************************************************************$ */

