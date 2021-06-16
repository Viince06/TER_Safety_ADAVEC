/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ChangeMode_Generated.h"

/* Generated::ChangeMode/ */
void ChangeMode_Generated(
  inC_ChangeMode_Generated *inC,
  outC_ChangeMode_Generated *outC)
{
  outC->L13 = inC->RTime;
  outC->L14 = inC->Autonome;
  /* L15=(MSG::Precedence#3)/ */
  Precedence_MSG(outC->L13, outC->L14, &outC->Context_Precedence_3);
  outC->L15 = outC->Context_Precedence_3.o;
  outC->O4 = outC->L15;
  outC->L10 = inC->Drunk;
  outC->L11 = inC->RTime;
  /* L12=(MSG::Precedence#2)/ */
  Precedence_MSG(outC->L10, outC->L11, &outC->Context_Precedence_2);
  outC->L12 = outC->Context_Precedence_2.o;
  outC->O3 = outC->L12;
  outC->L7 = inC->Manual;
  outC->L8 = inC->Drunk;
  /* L9=(MSG::Precedence#1)/ */
  Precedence_MSG(outC->L7, outC->L8, &outC->Context_Precedence_1);
  outC->L9 = outC->Context_Precedence_1.o;
  outC->O2 = outC->L9;
  outC->L4 = inC->Manual;
  outC->L5 = inC->Autonome;
  /* L6=(MSG::Exclusion#1)/ */
  Exclusion_MSG(outC->L4, outC->L5, &outC->Context_Exclusion_1);
  outC->L6 = outC->Context_Exclusion_1.o;
  outC->O1 = outC->L6;
  outC->L1 = inC->Manual;
  outC->L2 = inC->Autonome;
  /* L3=(MSG::Union#1)/ */ Union_MSG(outC->L1, outC->L2, &outC->Context_Union_1);
  outC->L3 = outC->Context_Union_1.o;
  outC->Mode = outC->L3;
}

#ifndef KCG_USER_DEFINED_INIT
void ChangeMode_init_Generated(outC_ChangeMode_Generated *outC)
{
  outC->L15 = kcg_true;
  outC->L14 = PRESENT;
  outC->L13 = PRESENT;
  outC->L12 = kcg_true;
  outC->L11 = PRESENT;
  outC->L10 = PRESENT;
  outC->L9 = kcg_true;
  outC->L8 = PRESENT;
  outC->L7 = PRESENT;
  outC->L6 = kcg_true;
  outC->L5 = PRESENT;
  outC->L4 = PRESENT;
  outC->L3 = PRESENT;
  outC->L2 = PRESENT;
  outC->L1 = PRESENT;
  outC->O4 = kcg_true;
  outC->O3 = kcg_true;
  outC->O2 = kcg_true;
  outC->O1 = kcg_true;
  outC->Mode = PRESENT;
  /* L3=(MSG::Union#1)/ */ Union_init_MSG(&outC->Context_Union_1);
  /* L6=(MSG::Exclusion#1)/ */ Exclusion_init_MSG(&outC->Context_Exclusion_1);
  /* L9=(MSG::Precedence#1)/ */ Precedence_init_MSG(&outC->Context_Precedence_1);
  /* L12=(MSG::Precedence#2)/ */ Precedence_init_MSG(&outC->Context_Precedence_2);
  /* L15=(MSG::Precedence#3)/ */ Precedence_init_MSG(&outC->Context_Precedence_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ChangeMode_reset_Generated(outC_ChangeMode_Generated *outC)
{
  /* L3=(MSG::Union#1)/ */ Union_reset_MSG(&outC->Context_Union_1);
  /* L6=(MSG::Exclusion#1)/ */ Exclusion_reset_MSG(&outC->Context_Exclusion_1);
  /* L9=(MSG::Precedence#1)/ */ Precedence_reset_MSG(&outC->Context_Precedence_1);
  /* L12=(MSG::Precedence#2)/ */
  Precedence_reset_MSG(&outC->Context_Precedence_2);
  /* L15=(MSG::Precedence#3)/ */
  Precedence_reset_MSG(&outC->Context_Precedence_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** ChangeMode_Generated.c
** Generation date: 2021-06-16T11:27:42
*************************************************************$ */

