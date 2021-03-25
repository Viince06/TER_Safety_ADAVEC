/* ProjetTERNoCCSLTest_mapping.c */

#include "ProjetTERNoCCSLTest_type.h"
#include "ProjetTERNoCCSLTest_interface.h"
#include "ProjetTERNoCCSLTest_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_2, 11);
DECL_SCOPE(scope_1, 7);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_2_entries[11] = {
    /* 0 */ { MAP_OUTPUT, "v", NULL, sizeof(kcg_bool), offsetof(outC_NewSubClockTEXT, v), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "L1", NULL, sizeof(ClockStatus), offsetof(outC_NewSubClockTEXT, L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "L2", NULL, sizeof(ClockStatus), offsetof(outC_NewSubClockTEXT, L2), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "L3", NULL, sizeof(kcg_bool), offsetof(outC_NewSubClockTEXT, L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "L4", NULL, sizeof(kcg_bool), offsetof(outC_NewSubClockTEXT, L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "L5", NULL, sizeof(kcg_bool), offsetof(outC_NewSubClockTEXT, L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "L6", NULL, sizeof(kcg_bool), offsetof(outC_NewSubClockTEXT, L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "L7", NULL, sizeof(kcg_bool), offsetof(outC_NewSubClockTEXT, L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "L8", NULL, sizeof(kcg_bool), offsetof(outC_NewSubClockTEXT, L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "L9", NULL, sizeof(kcg_bool), offsetof(outC_NewSubClockTEXT, L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "L10", NULL, sizeof(kcg_bool), offsetof(outC_NewSubClockTEXT, L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 }
};
const MappingScope scope_2 = {
    "NewSubClockTEXT/ NewSubClockTEXT",
    scope_2_entries, 11
};

const MappingEntry scope_1_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "v", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.v, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "a", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.a, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "b", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.b, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L3, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L4, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_INSTANCE, "NewSubClockTEXT 2", NULL, sizeof(outC_NewSubClockTEXT), (size_t)&outputs_ctx.Context_NewSubClockTEXT_2, NULL, NULL, NULL, &scope_2, 1, 6 }
};
const MappingScope scope_1 = {
    "Operator3/ Operator3",
    scope_1_entries, 7
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Operator3", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
