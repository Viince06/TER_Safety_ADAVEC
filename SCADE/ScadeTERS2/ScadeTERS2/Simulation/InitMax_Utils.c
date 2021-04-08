/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-04-08T12:53:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitMax_Utils.h"

/* Utils::InitMax/ */
void InitMax_Utils(inC_InitMax_Utils *inC, outC_InitMax_Utils *outC)
{
  outC->_L1 = inC->vin;
  outC->_L9 = inC->init;
  /* _L4= */
  if (outC->init) {
    outC->_L4 = kcg_lit_int32(0);
  }
  else {
    outC->_L4 = outC->_L5;
  }
  outC->_L8 = kcg_lit_int32(1);
  outC->_L7 = outC->_L8 + outC->_L4;
  /* _L5= */
  if (outC->_L1) {
    outC->_L5 = outC->_L7;
  }
  else {
    outC->_L5 = outC->_L4;
  }
  outC->_L12 = outC->_L5 >= outC->_L9;
  outC->_L10 = inC->max;
  outC->_L13 = outC->_L5 <= outC->_L10;
  /* _L11=(Utils::And3#1)/ */
  And3_Utils(outC->_L1, outC->_L12, outC->_L13, &outC->Context_And3_1);
  outC->_L11 = outC->Context_And3_1.z;
  outC->vout = outC->_L11;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void InitMax_init_Utils(outC_InitMax_Utils *outC)
{
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->vout = kcg_true;
  /* _L11=(Utils::And3#1)/ */ And3_init_Utils(&outC->Context_And3_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InitMax_reset_Utils(outC_InitMax_Utils *outC)
{
  outC->init = kcg_true;
  /* _L11=(Utils::And3#1)/ */ And3_reset_Utils(&outC->Context_And3_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** InitMax_Utils.c
** Generation date: 2021-04-08T12:53:31
*************************************************************$ */

