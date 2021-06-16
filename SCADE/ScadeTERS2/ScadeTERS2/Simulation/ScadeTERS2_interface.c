#include "ScadeTERS2_interface.h"
#include "ScadeTERS2_type.h"
#include "ScadeTERS2_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_ChangeMode_Generated inputs_ctx;
static inC_ChangeMode_Generated inputs_ctx_execute;
outC_ChangeMode_Generated outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_ClockStatus(&inputs_ctx.Manual);
    init_ClockStatus(&inputs_ctx_execute.Manual);
    init_ClockStatus(&inputs_ctx.Autonome);
    init_ClockStatus(&inputs_ctx_execute.Autonome);
    init_ClockStatus(&inputs_ctx.Drunk);
    init_ClockStatus(&inputs_ctx_execute.Drunk);
    init_ClockStatus(&inputs_ctx.RTime);
    init_ClockStatus(&inputs_ctx_execute.RTime);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.Manual = inputs_ctx.Manual;
    inputs_ctx_execute.Autonome = inputs_ctx.Autonome;
    inputs_ctx_execute.Drunk = inputs_ctx.Drunk;
    inputs_ctx_execute.RTime = inputs_ctx.RTime;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "25af43c1499fc9c4ea0d8ffd4d95e66d";
const char* _SCSIM_SmuTypesCheckSum = "612a6f2dec6abe526bcaa0632c507adf";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    ChangeMode_init_Generated(&outputs_ctx);
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
    ChangeMode_reset_Generated(&outputs_ctx);
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
    #ifdef pSimoutC_ChangeMode_GeneratedCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_ChangeMode_GeneratedCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_ChangeMode_GeneratedCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_ChangeMode_GeneratedCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_ChangeMode_GeneratedCIVTable != NULL && 
        pSimoutC_ChangeMode_GeneratedCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_ChangeMode_GeneratedCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
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
    ChangeMode_Generated(&inputs_ctx_execute, &outputs_ctx);
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
    nSize += sizeof(inC_ChangeMode_Generated);
    nSize += sizeof(outC_ChangeMode_Generated);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_ChangeMode_Generated));
    pCurrent += sizeof(inC_ChangeMode_Generated);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_ChangeMode_Generated));
    pCurrent += sizeof(outC_ChangeMode_Generated);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_ChangeMode_Generated));
    pCurrent += sizeof(inC_ChangeMode_Generated);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_ChangeMode_Generated));
    pCurrent += sizeof(outC_ChangeMode_Generated);
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

