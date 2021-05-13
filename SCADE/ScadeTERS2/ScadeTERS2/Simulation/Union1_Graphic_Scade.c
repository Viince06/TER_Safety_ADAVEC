/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Union1_Graphic_Scade.h"

/* Graphic_Scade::Union1/ */
void Union1_Graphic_Scade(
  inC_Union1_Graphic_Scade *inC,
  outC_Union1_Graphic_Scade *outC)
{
  outC->_L22 = inC->a;
  kcg_copy_ArrayClock4(&outC->_L23, &inC->bArray);
  outC->_L24 = outC->_L23[0];
  outC->_L37 = outC->_L23[1];
  /* _L32=(Graphic_Scade::Union#2)/ */
  Union_Graphic_Scade(outC->_L24, outC->_L37, &outC->Context_Union_2);
  outC->_L32 = outC->Context_Union_2.o;
  outC->_L36 = outC->_L23[2];
  outC->_L35 = outC->_L23[3];
  /* _L33=(Graphic_Scade::Union#3)/ */
  Union_Graphic_Scade(outC->_L36, outC->_L35, &outC->Context_Union_3);
  outC->_L33 = outC->Context_Union_3.o;
  /* _L34=(Graphic_Scade::Union#4)/ */
  Union_Graphic_Scade(outC->_L32, outC->_L33, &outC->Context_Union_4);
  outC->_L34 = outC->Context_Union_4.o;
  /* _L21=(Graphic_Scade::Union#1)/ */
  Union_Graphic_Scade(outC->_L22, outC->_L34, &outC->Context_Union_1);
  outC->_L21 = outC->Context_Union_1.o;
  outC->o = outC->_L21;
}

#ifndef KCG_USER_DEFINED_INIT
void Union1_init_Graphic_Scade(outC_Union1_Graphic_Scade *outC)
{
  kcg_size idx;

  outC->_L35 = PRESENT;
  outC->_L36 = PRESENT;
  outC->_L37 = PRESENT;
  outC->_L21 = PRESENT;
  outC->_L22 = PRESENT;
  for (idx = 0; idx < 4; idx++) {
    outC->_L23[idx] = PRESENT;
  }
  outC->_L24 = PRESENT;
  outC->_L32 = PRESENT;
  outC->_L33 = PRESENT;
  outC->_L34 = PRESENT;
  outC->o = PRESENT;
  /* _L21=(Graphic_Scade::Union#1)/ */
  Union_init_Graphic_Scade(&outC->Context_Union_1);
  /* _L34=(Graphic_Scade::Union#4)/ */
  Union_init_Graphic_Scade(&outC->Context_Union_4);
  /* _L33=(Graphic_Scade::Union#3)/ */
  Union_init_Graphic_Scade(&outC->Context_Union_3);
  /* _L32=(Graphic_Scade::Union#2)/ */
  Union_init_Graphic_Scade(&outC->Context_Union_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Union1_reset_Graphic_Scade(outC_Union1_Graphic_Scade *outC)
{
  /* _L21=(Graphic_Scade::Union#1)/ */
  Union_reset_Graphic_Scade(&outC->Context_Union_1);
  /* _L34=(Graphic_Scade::Union#4)/ */
  Union_reset_Graphic_Scade(&outC->Context_Union_4);
  /* _L33=(Graphic_Scade::Union#3)/ */
  Union_reset_Graphic_Scade(&outC->Context_Union_3);
  /* _L32=(Graphic_Scade::Union#2)/ */
  Union_reset_Graphic_Scade(&outC->Context_Union_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Union1_Graphic_Scade.c
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */

