/* ScadeTERS2_mapping.c */

#include "ScadeTERS2_type.h"
#include "ScadeTERS2_interface.h"
#include "ScadeTERS2_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_4);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_5, 8);
DECL_SCOPE(scope_4, 9);
DECL_SCOPE(scope_3, 14);
DECL_SCOPE(scope_2, 1);
DECL_SCOPE(scope_1, 17);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */

const MappingIterator iter_array_4 = { "array", 4, 4, NULL };

const MappingEntry scope_5_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "c", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, c), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_EncodeClockStatus_Utils, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_EncodeClockStatus_Utils, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L3), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L4), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L5), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L6), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(ClockStatus), offsetof(outC_EncodeClockStatus_Utils, _L7), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 7 }
};
const MappingScope scope_5 = {
    "Utils::EncodeClockStatus/ EncodeClockStatus_Utils",
    scope_5_entries, 8
};

const MappingEntry scope_4_entries[9] = {
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
const MappingScope scope_4 = {
    "Utils::DecodeClockStatus/ DecodeClockStatus_Utils",
    scope_4_entries, 9
};

const MappingEntry scope_3_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "o", NULL, sizeof(ClockStatus), offsetof(outC_Union_Graphic_Scade, o), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(ClockStatus), offsetof(outC_Union_Graphic_Scade, _L1), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Union_Graphic_Scade, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Union_Graphic_Scade, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Union_Graphic_Scade, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Union_Graphic_Scade, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Union_Graphic_Scade, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_Union_Graphic_Scade, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_Union_Graphic_Scade, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(ClockStatus), offsetof(outC_Union_Graphic_Scade, _L10), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(ClockStatus), offsetof(outC_Union_Graphic_Scade, _L20), &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Utils::DecodeClockStatus 1", NULL, sizeof(outC_DecodeClockStatus_Utils), offsetof(outC_Union_Graphic_Scade, Context_DecodeClockStatus_1), NULL, NULL, NULL, &scope_4, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "Utils::DecodeClockStatus 2", NULL, sizeof(outC_DecodeClockStatus_Utils), offsetof(outC_Union_Graphic_Scade, Context_DecodeClockStatus_2), NULL, NULL, NULL, &scope_4, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "Utils::EncodeClockStatus 1", NULL, sizeof(outC_EncodeClockStatus_Utils), offsetof(outC_Union_Graphic_Scade, Context_EncodeClockStatus_1), NULL, NULL, NULL, &scope_5, 1, 13 }
};
const MappingScope scope_3 = {
    "Graphic_Scade::Union/ Union_Graphic_Scade",
    scope_3_entries, 14
};

const MappingEntry scope_2_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(ClockStatus), 0, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_2 = {
    "ArrayClock4",
    scope_2_entries, 1
};

const MappingEntry scope_1_entries[17] = {
    /* 0 */ { MAP_OUTPUT, "o", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx.o, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "a", NULL, sizeof(ClockStatus), (size_t)&inputs_ctx.a, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "bArray", NULL, sizeof(ArrayClock4), (size_t)&inputs_ctx.bArray, &_Type_ArrayClock4_Utils, NULL, NULL, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L34", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L34, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L33", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L33, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L32", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L32, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L24, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(ArrayClock4), (size_t)&outputs_ctx._L23, &_Type_ArrayClock4_Utils, NULL, NULL, &scope_2, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L22, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L21, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L37", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L37, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L36", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L36, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L35", NULL, sizeof(ClockStatus), (size_t)&outputs_ctx._L35, &_Type_ClockStatus_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "Graphic_Scade::Union 4", NULL, sizeof(outC_Union_Graphic_Scade), (size_t)&outputs_ctx.Context_Union_4, NULL, NULL, NULL, &scope_3, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "Graphic_Scade::Union 3", NULL, sizeof(outC_Union_Graphic_Scade), (size_t)&outputs_ctx.Context_Union_3, NULL, NULL, NULL, &scope_3, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "Graphic_Scade::Union 2", NULL, sizeof(outC_Union_Graphic_Scade), (size_t)&outputs_ctx.Context_Union_2, NULL, NULL, NULL, &scope_3, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "Graphic_Scade::Union 1", NULL, sizeof(outC_Union_Graphic_Scade), (size_t)&outputs_ctx.Context_Union_1, NULL, NULL, NULL, &scope_3, 1, 16 }
};
const MappingScope scope_1 = {
    "Graphic_Scade::Union1/ Union1_Graphic_Scade",
    scope_1_entries, 17
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Graphic_Scade::Union1", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
