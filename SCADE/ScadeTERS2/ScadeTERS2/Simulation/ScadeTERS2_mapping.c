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

DECL_SCOPE(scope_2, 6);
DECL_SCOPE(scope_1, 15);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_2_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "z", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, z), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_And3_Utils, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_2 = {
    "Utils::And3/ And3_Utils",
    scope_2_entries, 6
};

const MappingEntry scope_1_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "vout", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.vout, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "init", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.init, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "max", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.max, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "vin", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.vin, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L5, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L7, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L8, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L9, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L10, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L11, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "Utils::And3 1", NULL, sizeof(outC_And3_Utils), (size_t)&outputs_ctx.Context_And3_1, NULL, NULL, NULL, &scope_2, 1, 14 }
};
const MappingScope scope_1 = {
    "Utils::InitMax/ InitMax_Utils",
    scope_1_entries, 15
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Utils::InitMax", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
