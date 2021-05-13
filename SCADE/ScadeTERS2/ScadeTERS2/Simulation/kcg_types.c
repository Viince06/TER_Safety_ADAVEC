/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** Command: scadecg.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_ArrayClock4
kcg_bool kcg_comp_ArrayClock4(ArrayClock4 *kcg_c1, ArrayClock4 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ArrayClock4 */

/* $ ANSYS SCADE Suite (R) Code Generator version Student 2021 R1 (build 20201118) 
** kcg_types.c
** Generation date: 2021-05-06T15:16:31
*************************************************************$ */

