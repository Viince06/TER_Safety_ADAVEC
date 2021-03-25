/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ProjetTERNoCCSLTest/Simulation/config.txt
** Generation date: 2021-03-25T16:32:28
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Operator3.h"

/* Operator3/ */
void Operator3(inC_Operator3 *inC, outC_Operator3 *outC)
{
  outC->_L3 = inC->a;
  outC->_L4 = inC->b;
  /* _L2=(NewSubClockTEXT#2)/ */
  NewSubClockTEXT(outC->_L3, outC->_L4, &outC->Context_NewSubClockTEXT_2);
  outC->_L2 = outC->Context_NewSubClockTEXT_2.v;
  outC->v = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void Operator3_init(outC_Operator3 *outC)
{
  outC->_L4 = PRESENT;
  outC->_L3 = PRESENT;
  outC->_L2 = kcg_true;
  outC->v = kcg_true;
  /* _L2=(NewSubClockTEXT#2)/ */
  NewSubClockTEXT_init(&outC->Context_NewSubClockTEXT_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Operator3_reset(outC_Operator3 *outC)
{
  /* _L2=(NewSubClockTEXT#2)/ */
  NewSubClockTEXT_reset(&outC->Context_NewSubClockTEXT_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Operator3.c
** Generation date: 2021-03-25T16:32:28
*************************************************************$ */

