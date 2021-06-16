/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Command: kcg661.exe -config D:/Projets/S2/TERS2/TER_SafetyCriticalSystem/SCADE/ScadeTERS2/ScadeTERS2/Simulation/config.txt
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Alternates_Utils.h"

/* Utils::Alternates/ */
void Alternates_Utils(
  /* kind/ */
  XStrictness kind,
  /* a/ */
  ClockStatus a,
  /* b/ */
  ClockStatus b,
  outC_Alternates_Utils *outC)
{
  /* v/ */
  kcg_bool v_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* v/ */
  kcg_bool _1_v_partial;
  /* SM1: */
  SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _4_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:S0:<1> */
  kcg_bool tr_1_guard_S0_SM1;
  /* SM1: */
  SSM_ST_SM1 _5_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _7_SM1_fired_strong_partial;
  /* SM1:S1:<1> */
  kcg_bool tr_1_guard_S1_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->_L2 = b;
  /* _L6=(Utils::isPresent#2)/ */
  isPresent_Utils(outC->_L2, &outC->Context_isPresent_2);
  outC->_L6 = outC->Context_isPresent_2.presence;
  outC->pb = outC->_L6;
  outC->_L1 = a;
  /* _L3=(Utils::isPresent#1)/ */
  isPresent_Utils(outC->_L1, &outC->Context_isPresent_1);
  outC->_L3 = outC->Context_isPresent_1.presence;
  outC->pa = outC->_L3;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_S1_SM1 :
      tr_1_guard_S1_SM1 = outC->pb & (!outC->pa);
      if (tr_1_guard_S1_SM1) {
        _5_SM1_state_act_partial = SSM_st_S0_SM1;
      }
      else {
        _5_SM1_state_act_partial = SSM_st_S1_SM1;
      }
      outC->SM1_state_act = _5_SM1_state_act_partial;
      if (tr_1_guard_S1_SM1) {
        _7_SM1_fired_strong_partial = SSM_TR_S1_S0_1_S1_SM1;
      }
      else {
        _7_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _7_SM1_fired_strong_partial;
      break;
    case SSM_st_S0_SM1 :
      tr_1_guard_S0_SM1 = outC->pa & (!outC->pb);
      if (tr_1_guard_S0_SM1) {
        SM1_state_act_partial = SSM_st_S1_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_S0_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_S0_SM1) {
        SM1_fired_strong_partial = SSM_TR_S0_S1_1_S0_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_S1_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_S1_SM1;
      outC->_L8_S1_SM1 = outC->pa;
      outC->_L7_S1_SM1 = outC->pb;
      outC->_L4_S1_SM1 = !outC->_L7_S1_SM1;
      outC->_L5_S1_SM1 = outC->_L4_S1_SM1 & outC->_L8_S1_SM1;
      outC->_L1_S1_SM1 = kind;
      /* SM1:S1:_L6= */
      switch (outC->_L1_S1_SM1) {
        case S :
          outC->_L6_S1_SM1 = outC->_L8_S1_SM1;
          break;
        case NS :
          outC->_L6_S1_SM1 = outC->_L5_S1_SM1;
          break;
        case RNS :
          outC->_L6_S1_SM1 = outC->_L5_S1_SM1;
          break;
        case LNS :
          outC->_L6_S1_SM1 = outC->_L8_S1_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      _1_v_partial = outC->_L6_S1_SM1;
      outC->v = _1_v_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_S0_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_S0_SM1;
      outC->_L3_S0_SM1 = outC->pb;
      outC->_L2_S0_SM1 = outC->pa;
      outC->_L4_S0_SM1 = !outC->_L2_S0_SM1;
      outC->_L5_S0_SM1 = outC->_L4_S0_SM1 & outC->_L3_S0_SM1;
      outC->_L1_S0_SM1 = kind;
      /* SM1:S0:_L6= */
      switch (outC->_L1_S0_SM1) {
        case S :
          outC->_L6_S0_SM1 = outC->_L3_S0_SM1;
          break;
        case NS :
          outC->_L6_S0_SM1 = outC->_L5_S0_SM1;
          break;
        case RNS :
          outC->_L6_S0_SM1 = outC->_L5_S0_SM1;
          break;
        case LNS :
          outC->_L6_S0_SM1 = outC->_L3_S0_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      v_partial = outC->_L6_S0_SM1;
      outC->v = v_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_S1_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_S0_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_S1_SM1 :
      _6_SM1_reset_act_partial = tr_1_guard_S1_SM1;
      break;
    case SSM_st_S0_SM1 :
      SM1_reset_act_partial = tr_1_guard_S0_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_S1_SM1 :
      outC->SM1_reset_act = _6_SM1_reset_act_partial;
      break;
    case SSM_st_S0_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Alternates_init_Utils(outC_Alternates_Utils *outC)
{
  outC->_L6 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = PRESENT;
  outC->_L1 = PRESENT;
  outC->pb = kcg_true;
  outC->pa = kcg_true;
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_S0_SM1;
  outC->SM1_state_sel = SSM_st_S0_SM1;
  outC->_L1_S1_SM1 = RNS;
  outC->_L4_S1_SM1 = kcg_true;
  outC->_L5_S1_SM1 = kcg_true;
  outC->_L6_S1_SM1 = kcg_true;
  outC->_L7_S1_SM1 = kcg_true;
  outC->_L8_S1_SM1 = kcg_true;
  outC->_L1_S0_SM1 = RNS;
  outC->_L2_S0_SM1 = kcg_true;
  outC->_L3_S0_SM1 = kcg_true;
  outC->_L4_S0_SM1 = kcg_true;
  outC->_L5_S0_SM1 = kcg_true;
  outC->_L6_S0_SM1 = kcg_true;
  outC->v = kcg_true;
  /* _L3=(Utils::isPresent#1)/ */
  isPresent_init_Utils(&outC->Context_isPresent_1);
  /* _L6=(Utils::isPresent#2)/ */
  isPresent_init_Utils(&outC->Context_isPresent_2);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_S0_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Alternates_reset_Utils(outC_Alternates_Utils *outC)
{
  /* _L3=(Utils::isPresent#1)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_1);
  /* _L6=(Utils::isPresent#2)/ */
  isPresent_reset_Utils(&outC->Context_isPresent_2);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_S0_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $******* SCADE Suite KCG 32-bit 6.6.1 beta (build i1) ********
** Alternates_Utils.c
** Generation date: 2021-06-16T20:26:03
*************************************************************$ */

