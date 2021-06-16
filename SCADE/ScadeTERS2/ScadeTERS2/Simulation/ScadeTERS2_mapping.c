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

DECL_SCOPE(scope_8, 11);
DECL_SCOPE(scope_7, 17);
DECL_SCOPE(scope_6, 5);
DECL_SCOPE(scope_5, 9);
DECL_SCOPE(scope_4, 8);
DECL_SCOPE(scope_3, 9);
DECL_SCOPE(scope_2, 13);
DECL_SCOPE(scope_1, 29);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_8_entries[11] = {
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
const MappingScope scope_8 = {
    "Utils::Mg_delta/ Mg_delta_Utils",
    scope_8_entries, 11
};

const MappingEntry scope_7_entries[17] = {
    /* 0 */ { MAP_OUTPUT, "o", NULL, sizeof(kcg_bool), offsetof(outC_Precedence_MSG, o), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_Precedence_MSG, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(ClockStatus), offsetof(outC_Precedence_MSG, _L2), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Precedence_MSG, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Precedence_MSG, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Precedence_MSG, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Precedence_MSG, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Precedence_MSG, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_Precedence_MSG, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Precedence_MSG, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_Precedence_MSG, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_Precedence_MSG, _L12), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), offsetof(outC_Precedence_MSG, _L13), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L14", NULL, sizeof(Strictness), offsetof(outC_Precedence_MSG, _L14), &_Type_Strictness_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "Utils::isPresent 1", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Precedence_MSG, Context_isPresent_1), NULL, NULL, NULL, &scope_6, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "Utils::isPresent 2", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Precedence_MSG, Context_isPresent_2), NULL, NULL, NULL, &scope_6, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "Utils::Mg_delta 1", NULL, sizeof(outC_Mg_delta_Utils), offsetof(outC_Precedence_MSG, Context_Mg_delta_1), NULL, NULL, NULL, &scope_8, 1, 16 }
};
const MappingScope scope_7 = {
    "MSG::Precedence/ Precedence_MSG",
    scope_7_entries, 17
};

const MappingEntry scope_6_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "presence", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, presence), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_isPresent_Utils, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_6 = {
    "Utils::isPresent/ isPresent_Utils",
    scope_6_entries, 5
};

const MappingEntry scope_5_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "o", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, o), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_Exclusion_MSG, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(ClockStatus), offsetof(outC_Exclusion_MSG, _L2), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "Utils::isPresent 1", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Exclusion_MSG, Context_isPresent_1), NULL, NULL, NULL, &scope_6, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "Utils::isPresent 2", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Exclusion_MSG, Context_isPresent_2), NULL, NULL, NULL, &scope_6, 1, 8 }
};
const MappingScope scope_5 = {
    "MSG::Exclusion/ Exclusion_MSG",
    scope_5_entries, 9
};

const MappingEntry scope_4_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "c", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, c), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_EncodeClockStatus_Utils, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_EncodeClockStatus_Utils, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L3), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L4), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L5), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L6), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L7), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 7 }
};
const MappingScope scope_4 = {
    "Utils::EncodeClockStatus/ EncodeClockStatus_Utils",
    scope_4_entries, 8
};

const MappingEntry scope_3_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "presence", NULL, sizeof(kcg_bool), offsetof(outC_DecodeClockStatus_Utils, presence), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "alive", NULL, sizeof(kcg_bool), offsetof(outC_DecodeClockStatus_Utils, alive), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_DecodeClockStatus_Utils, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_DecodeClockStatus_Utils, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_DecodeClockStatus_Utils, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_DecodeClockStatus_Utils, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_DecodeClockStatus_Utils, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_DecodeClockStatus_Utils, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_DecodeClockStatus_Utils, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_3 = {
    "Utils::DecodeClockStatus/ DecodeClockStatus_Utils",
    scope_3_entries, 9
};

const MappingEntry scope_2_entries[13] = {
    /* 0 */ { MAP_OUTPUT, "o", NULL, sizeof(ClockStatus), offsetof(outC_Union_MSG, o), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_Union_MSG, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Union_MSG, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Union_MSG, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Union_MSG, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Union_MSG, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Union_MSG, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Union_MSG, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(ClockStatus), offsetof(outC_Union_MSG, _L10), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(ClockStatus), offsetof(outC_Union_MSG, _L20), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "Utils::DecodeClockStatus 1", NULL, sizeof(outC_DecodeClockStatus_Utils), offsetof(outC_Union_MSG, Context_DecodeClockStatus_1), NULL, NULL, NULL, &scope_3, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Utils::DecodeClockStatus 2", NULL, sizeof(outC_DecodeClockStatus_Utils), offsetof(outC_Union_MSG, Context_DecodeClockStatus_2), NULL, NULL, NULL, &scope_3, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "Utils::EncodeClockStatus 1", NULL, sizeof(outC_EncodeClockStatus_Utils), offsetof(outC_Union_MSG, Context_EncodeClockStatus_1), NULL, NULL, NULL, &scope_4, 1, 12 }
};
const MappingScope scope_2 = {
    "MSG::Union/ Union_MSG",
    scope_2_entries, 13
};

const MappingEntry scope_1_entries[29] = {
    /* 0 */ { MAP_OUTPUT, "Mode", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.Mode, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "O1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.O1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "O2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.O2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "O3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.O3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "O4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.O4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INPUT, "Manual", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.Manual, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_INPUT, "Autonome", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.Autonome, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INPUT, "Drunk", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.Drunk, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_INPUT, "RTime", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.RTime, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "L1", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L1, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "L2", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L2, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "L3", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L3, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "L4", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L4, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "L5", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L5, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "L7", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L7, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "L8", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L8, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "L10", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L10, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "L11", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L11, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "L13", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L13, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "L14", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L14, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L15, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_INSTANCE, "MSG::Union 1", NULL, sizeof(outC_Union_MSG), (size_t)&outputs_ctx.Context_Union_1, NULL, NULL, NULL, &scope_2, 1, 24 },
    /* 25 */ { MAP_INSTANCE, "MSG::Exclusion 1", NULL, sizeof(outC_Exclusion_MSG), (size_t)&outputs_ctx.Context_Exclusion_1, NULL, NULL, NULL, &scope_5, 1, 25 },
    /* 26 */ { MAP_INSTANCE, "MSG::Precedence 1", NULL, sizeof(outC_Precedence_MSG), (size_t)&outputs_ctx.Context_Precedence_1, NULL, NULL, NULL, &scope_7, 1, 26 },
    /* 27 */ { MAP_INSTANCE, "MSG::Precedence 2", NULL, sizeof(outC_Precedence_MSG), (size_t)&outputs_ctx.Context_Precedence_2, NULL, NULL, NULL, &scope_7, 1, 27 },
    /* 28 */ { MAP_INSTANCE, "MSG::Precedence 3", NULL, sizeof(outC_Precedence_MSG), (size_t)&outputs_ctx.Context_Precedence_3, NULL, NULL, NULL, &scope_7, 1, 28 }
};
const MappingScope scope_1 = {
    "Generated::ChangeMode/ ChangeMode_Generated",
    scope_1_entries, 29
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Generated::ChangeMode", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
