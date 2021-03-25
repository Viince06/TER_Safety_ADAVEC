/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ProjetTERNoCCSLTest/KCG/config.txt
** Generation date: 2021-03-25T11:52:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NewSubClockTEXT.h"

/* NewSubClockTEXT/ */
void NewSubClockTEXT(inC_NewSubClockTEXT *inC, outC_NewSubClockTEXT *outC)
{
  kcg_bool tmp;
  kcg_bool tmp1;

  /* L7= */
  switch (inC->a) {
    case PRESENT :
      tmp = kcg_true;
      break;
    default :
      tmp = kcg_false;
      break;
  }
  /* L8= */
  switch (inC->b) {
    case PRESENT :
      tmp1 = kcg_false;
      break;
    default :
      tmp1 = kcg_true;
      break;
  }
  outC->v = tmp & tmp1;
}

#ifndef KCG_USER_DEFINED_INIT
void NewSubClockTEXT_init(outC_NewSubClockTEXT *outC)
{
  outC->v = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NewSubClockTEXT_reset(outC_NewSubClockTEXT *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** NewSubClockTEXT.c
** Generation date: 2021-03-25T11:52:53
*************************************************************$ */

