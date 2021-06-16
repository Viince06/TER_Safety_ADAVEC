/* ScadeTERS2_mapping.c */

#include "ScadeTERS2_type.h"
#include "ScadeTERS2_interface.h"
#include "ScadeTERS2_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_13, 11);
DECL_SCOPE(scope_12, 17);
DECL_SCOPE(scope_11, 6);
DECL_SCOPE(scope_10, 12);
DECL_SCOPE(scope_9, 9);
DECL_SCOPE(scope_8, 5);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 7);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 7);
DECL_SCOPE(scope_3, 9);
DECL_SCOPE(scope_2, 10);
DECL_SCOPE(scope_1, 18);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_S0_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_S0_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_S1_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_S1_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_S0_S1_1_S0_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_S0_S1_1_S0_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_S1_S0_1_S1_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_S1_S0_1_S1_SM1; }

/* mapping definition */


const MappingEntry scope_13_entries[11] = {
    /* 0 */ { MAP_OUTPUT, "delta", NULL, sizeof(kcg_int32), offsetof(outC_Mg_delta_Utils, delta), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Mg_delta_Utils, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Mg_delta_Utils, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_Mg_delta_Utils, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_Mg_delta_Utils, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_Mg_delta_Utils, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_Mg_delta_Utils, _L6), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_Mg_delta_Utils, _L7), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), offsetof(outC_Mg_delta_Utils, _L8), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), offsetof(outC_Mg_delta_Utils, _L9), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_Mg_delta_Utils, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 }
};
const MappingScope scope_13 = {
    "Utils::Mg_delta/ Mg_delta_Utils",
    scope_13_entries, 11
};

const MappingEntry scope_12_entries[17] = {
    /* 0 */ { MAP_OUTPUT, "o", NULL, sizeof(kcg_bool), offsetof(outC_Causality_MSG, o), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_Causality_MSG, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(ClockStatus), offsetof(outC_Causality_MSG, _L2), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Causality_MSG, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Causality_MSG, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Causality_MSG, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Causality_MSG, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Causality_MSG, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_Causality_MSG, _L12), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), offsetof(outC_Causality_MSG, _L13), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_Causality_MSG, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Causality_MSG, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Causality_MSG, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L22", NULL, sizeof(Strictness), offsetof(outC_Causality_MSG, _L22), &_Type_Strictness_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "Utils::isPresent 1", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Causality_MSG, Context_isPresent_1), NULL, NULL, NULL, &scope_8, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "Utils::isPresent 2", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Causality_MSG, Context_isPresent_2), NULL, NULL, NULL, &scope_8, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "Utils::Mg_delta 1", NULL, sizeof(outC_Mg_delta_Utils), offsetof(outC_Causality_MSG, Context_Mg_delta_1), NULL, NULL, NULL, &scope_13, 1, 16 }
};
const MappingScope scope_12 = {
    "MSG::Causality/ Causality_MSG",
    scope_12_entries, 17
};

const MappingEntry scope_11_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "z", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, z), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_11 = {
    "Utils::And3/ And3_Utils",
    scope_11_entries, 6
};

const MappingEntry scope_10_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "vout", NULL, sizeof(kcg_bool), offsetof(outC_InitMax_Utils, vout), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_InitMax_Utils, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_InitMax_Utils, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_InitMax_Utils, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_InitMax_Utils, _L7), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), offsetof(outC_InitMax_Utils, _L8), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_InitMax_Utils, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_InitMax_Utils, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_InitMax_Utils, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_InitMax_Utils, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), offsetof(outC_InitMax_Utils, _L9), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Utils::And3 1", NULL, sizeof(outC_And3_Utils), offsetof(outC_InitMax_Utils, Context_And3_1), NULL, NULL, NULL, &scope_11, 1, 11 }
};
const MappingScope scope_10 = {
    "Utils::InitMax/ InitMax_Utils",
    scope_10_entries, 12
};

const MappingEntry scope_9_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "o", NULL, sizeof(kcg_bool), offsetof(outC_Causality2_MSG, o), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Causality2_MSG, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int32), offsetof(outC_Causality2_MSG, _L15), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), offsetof(outC_Causality2_MSG, _L16), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_Causality2_MSG, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(ClockStatus), offsetof(outC_Causality2_MSG, _L18), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(ClockStatus), offsetof(outC_Causality2_MSG, _L19), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "Utils::InitMax 1", NULL, sizeof(outC_InitMax_Utils), offsetof(outC_Causality2_MSG, Context_InitMax_1), NULL, NULL, NULL, &scope_10, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "MSG::Causality 1", NULL, sizeof(outC_Causality_MSG), offsetof(outC_Causality2_MSG, Context_Causality_1), NULL, NULL, NULL, &scope_12, 1, 8 }
};
const MappingScope scope_9 = {
    "MSG::Causality2/ Causality2_MSG",
    scope_9_entries, 9
};

const MappingEntry scope_8_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "presence", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, presence), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_isPresent_Utils, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_8 = {
    "Utils::isPresent/ isPresent_Utils",
    scope_8_entries, 5
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_S1_S0_1_S1_SM1, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "Utils::Alternates/ Alternates_UtilsSM1:S1:<1",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_S1_S0_1_S1_SM1, &scope_7, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(XStrictness), offsetof(outC_Alternates_Utils, _L1_S1_SM1), &_Type_XStrictness_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S1_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L4_S1_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S1_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L5_S1_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S1_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L6_S1_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S1_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L7_S1_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S1_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L8_S1_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S1_SM1, NULL, 1, 6 }
};
const MappingScope scope_6 = {
    "Utils::Alternates/ Alternates_UtilsSM1:S1:",
    scope_6_entries, 7
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_S0_S1_1_S0_SM1, NULL, 1, 0 }
};
const MappingScope scope_5 = {
    "Utils::Alternates/ Alternates_UtilsSM1:S0:<1",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive_SSM_TR_SM1_SSM_TR_S0_S1_1_S0_SM1, &scope_5, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(XStrictness), offsetof(outC_Alternates_Utils, _L1_S0_SM1), &_Type_XStrictness_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S0_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L2_S0_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S0_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L3_S0_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S0_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L4_S0_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S0_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L5_S0_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S0_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L6_S0_SM1), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S0_SM1, NULL, 1, 6 }
};
const MappingScope scope_4 = {
    "Utils::Alternates/ Alternates_UtilsSM1:S0:",
    scope_4_entries, 7
};

const MappingEntry scope_3_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_Alternates_Utils, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_Alternates_Utils, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_Alternates_Utils, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_Alternates_Utils, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_Alternates_Utils, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "S0:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S0_SM1, &scope_4, 1, 7 },
    /* 8 */ { MAP_STATE, "S1:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive_SSM_ST_SM1_SSM_st_S1_SM1, &scope_6, 1, 8 }
};
const MappingScope scope_3 = {
    "Utils::Alternates/ Alternates_UtilsSM1:",
    scope_3_entries, 9
};

const MappingEntry scope_2_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "v", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, v), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "pa", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, pa), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "pb", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, pb), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_Alternates_Utils, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(ClockStatus), offsetof(outC_Alternates_Utils, _L2), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Alternates_Utils, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "Utils::isPresent 1", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Alternates_Utils, Context_isPresent_1), NULL, NULL, NULL, &scope_8, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "Utils::isPresent 2", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Alternates_Utils, Context_isPresent_2), NULL, NULL, NULL, &scope_8, 1, 9 }
};
const MappingScope scope_2 = {
    "Utils::Alternates/ Alternates_Utils",
    scope_2_entries, 10
};

const MappingEntry scope_1_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "v", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.v, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "a", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.a, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "b", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.b, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "kind", NULL, sizeof(Strictness), (size_t)&inputs_ctx.kind, &_Type_Strictness_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "xkind", NULL, sizeof(XStrictness), (size_t)&inputs_ctx.xkind, &_Type_XStrictness_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INPUT, "init", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.init, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_INPUT, "max", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.max, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L4, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L5, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(Strictness), (size_t)&outputs_ctx._L6, &_Type_Strictness_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L7, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L8, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L10", NULL, sizeof(XStrictness), (size_t)&outputs_ctx._L10, &_Type_XStrictness_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "Utils::Alternates 1", NULL, sizeof(outC_Alternates_Utils), (size_t)&outputs_ctx.Context_Alternates_1, NULL, NULL, NULL, &scope_2, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "MSG::Causality2 1", NULL, sizeof(outC_Causality2_MSG), (size_t)&outputs_ctx.Context_Causality2_1, NULL, NULL, NULL, &scope_9, 1, 17 }
};
const MappingScope scope_1 = {
    "Utils::Verifier/ Verifier_Utils",
    scope_1_entries, 18
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Utils::Verifier", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
