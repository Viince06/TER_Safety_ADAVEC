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

DECL_SCOPE(scope_2, 5);
DECL_SCOPE(scope_1, 11);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_2_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "presence", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, presence), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_isPresent_Utils, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_isPresent_Utils, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_2 = {
    "Utils::isPresent/ isPresent_Utils",
    scope_2_entries, 5
};

const MappingEntry scope_1_entries[11] = {
    /* 0 */ { MAP_OUTPUT, "v", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.v, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "a", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.a, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "b", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.b, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L1, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L9, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "Utils::isPresent 1", NULL, sizeof(outC_isPresent_Utils), (size_t)&outputs_ctx.Context_isPresent_1, NULL, NULL, NULL, &scope_2, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "Utils::isPresent 4", NULL, sizeof(outC_isPresent_Utils), (size_t)&outputs_ctx.Context_isPresent_4, NULL, NULL, NULL, &scope_2, 1, 10 }
};
const MappingScope scope_1 = {
    "Graphic_Scade::CausalityA_check/ CausalityA_check_Graphic_Scade",
    scope_1_entries, 11
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Graphic_Scade::CausalityA_check", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
