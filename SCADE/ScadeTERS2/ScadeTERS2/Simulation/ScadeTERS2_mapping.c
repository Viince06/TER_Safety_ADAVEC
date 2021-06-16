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

DECL_SCOPE(scope_3, 5);
DECL_SCOPE(scope_2, 9);
DECL_SCOPE(scope_1, 18);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_3_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "presence", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, presence), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_isPresent_Utils, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_3 = {
    "Utils::isPresent/ isPresent_Utils",
    scope_3_entries, 5
};

const MappingEntry scope_2_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "o", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, o), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_Exclusion_MSG, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(ClockStatus), offsetof(outC_Exclusion_MSG, _L2), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Exclusion_MSG, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "Utils::isPresent 1", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Exclusion_MSG, Context_isPresent_1), NULL, NULL, NULL, &scope_3, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "Utils::isPresent 2", NULL, sizeof(outC_isPresent_Utils), offsetof(outC_Exclusion_MSG, Context_isPresent_2), NULL, NULL, NULL, &scope_3, 1, 8 }
};
const MappingScope scope_2 = {
    "MSG::Exclusion/ Exclusion_MSG",
    scope_2_entries, 9
};

const MappingEntry scope_1_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "O1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.O1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "O2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.O2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "O3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.O3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "Autonome", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.Autonome, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "MRM", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.MRM, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INPUT, "Manual", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.Manual, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "L1", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L1, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "L2", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L2, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "L4", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L4, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "L5", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L5, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "L7", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L7, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "L8", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.L8, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "MSG::Exclusion 1", NULL, sizeof(outC_Exclusion_MSG), (size_t)&outputs_ctx.Context_Exclusion_1, NULL, NULL, NULL, &scope_2, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "MSG::Exclusion 2", NULL, sizeof(outC_Exclusion_MSG), (size_t)&outputs_ctx.Context_Exclusion_2, NULL, NULL, NULL, &scope_2, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "MSG::Exclusion 3", NULL, sizeof(outC_Exclusion_MSG), (size_t)&outputs_ctx.Context_Exclusion_3, NULL, NULL, NULL, &scope_2, 1, 17 }
};
const MappingScope scope_1 = {
    "Generated::ExclusionCondition/ ExclusionCondition_Generated",
    scope_1_entries, 18
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Generated::ExclusionCondition", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
