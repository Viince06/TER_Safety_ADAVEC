#include "ScadeTERS2_interface.h"
#include "ScadeTERS2_type.h"
#include "ScadeTERS2_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_Verifier_Utils inputs_ctx;
static inC_Verifier_Utils inputs_ctx_execute;
outC_Verifier_Utils outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_ClockStatus(&inputs_ctx.a);
    init_ClockStatus(&inputs_ctx_execute.a);
    init_ClockStatus(&inputs_ctx.b);
    init_ClockStatus(&inputs_ctx_execute.b);
    init_Strictness(&inputs_ctx.kind);
    init_Strictness(&inputs_ctx_execute.kind);
    init_XStrictness(&inputs_ctx.xkind);
    init_XStrictness(&inputs_ctx_execute.xkind);
    init_kcg_int32(&inputs_ctx.init);
    init_kcg_int32(&inputs_ctx_execute.init);
    init_kcg_int32(&inputs_ctx.max);
    init_kcg_int32(&inputs_ctx_execute.max);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.a = inputs_ctx.a;
    inputs_ctx_execute.b = inputs_ctx.b;
    inputs_ctx_execute.kind = inputs_ctx.kind;
    inputs_ctx_execute.xkind = inputs_ctx.xkind;
    inputs_ctx_execute.init = inputs_ctx.init;
    inputs_ctx_execute.max = inputs_ctx.max;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "11a34129a26b37f2c37b0a143a44880b";
const char* _SCSIM_SmuTypesCheckSum = "612a6f2dec6abe526bcaa0632c507adf";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    Verifier_init_Utils(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    Verifier_reset_Utils(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_Verifier_UtilsCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_Verifier_UtilsCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_Verifier_UtilsCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_Verifier_UtilsCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_Verifier_UtilsCIVTable != NULL && 
        pSimoutC_Verifier_UtilsCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_Verifier_UtilsCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    Verifier_Utils(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_Verifier_Utils);
    nSize += sizeof(outC_Verifier_Utils);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_Verifier_Utils));
    pCurrent += sizeof(inC_Verifier_Utils);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_Verifier_Utils));
    pCurrent += sizeof(outC_Verifier_Utils);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_Verifier_Utils));
    pCurrent += sizeof(inC_Verifier_Utils);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_Verifier_Utils));
    pCurrent += sizeof(outC_Verifier_Utils);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

