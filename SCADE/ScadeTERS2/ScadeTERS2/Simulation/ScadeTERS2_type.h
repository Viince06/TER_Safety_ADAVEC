#ifndef SCADETERS2_TYPES_CONVERSION
#define SCADETERS2_TYPES_CONVERSION

#include "SmuTypes.h"

/****************************************************************
 ** ClockStatus 
 ****************************************************************/
extern int ClockStatus_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_ClockStatus_string(const char *str, char **endptr);
extern int string_to_ClockStatus(const char *str, void *pValue, char **endptr);
extern int is_ClockStatus_double_conversion_allowed();
extern int ClockStatus_to_double(const void *pValue, double *nValue);
extern int is_ClockStatus_long_conversion_allowed();
extern int ClockStatus_to_long(const void *pValue, long *nValue);
extern void compare_ClockStatus(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_ClockStatus_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_ClockStatus(void *pValue);
extern int release_ClockStatus(void *pValue);
extern int copy_ClockStatus(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_ClockStatus_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_double_conversion_allowed();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int is_kcg_bool_long_conversion_allowed();
extern int kcg_bool_to_long(const void *pValue, long *nValue);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_bool(void *pValue);
extern int release_kcg_bool(void *pValue);
extern int copy_kcg_bool(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_double_conversion_allowed();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int is_kcg_char_long_conversion_allowed();
extern int kcg_char_to_long(const void *pValue, long *nValue);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_char(void *pValue);
extern int release_kcg_char(void *pValue);
extern int copy_kcg_char(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_float32 
 ****************************************************************/
extern int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float32_string(const char *str, char **endptr);
extern int string_to_kcg_float32(const char *str, void *pValue, char **endptr);
extern int is_kcg_float32_double_conversion_allowed();
extern int kcg_float32_to_double(const void *pValue, double *nValue);
extern int is_kcg_float32_long_conversion_allowed();
extern int kcg_float32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_float32(void *pValue);
extern int release_kcg_float32(void *pValue);
extern int copy_kcg_float32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float32_Utils;

/****************************************************************
 ** kcg_float64 
 ****************************************************************/
extern int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float64_string(const char *str, char **endptr);
extern int string_to_kcg_float64(const char *str, void *pValue, char **endptr);
extern int is_kcg_float64_double_conversion_allowed();
extern int kcg_float64_to_double(const void *pValue, double *nValue);
extern int is_kcg_float64_long_conversion_allowed();
extern int kcg_float64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_float64(void *pValue);
extern int release_kcg_float64(void *pValue);
extern int copy_kcg_float64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_float64_Utils;

/****************************************************************
 ** kcg_int16 
 ****************************************************************/
extern int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int16_string(const char *str, char **endptr);
extern int string_to_kcg_int16(const char *str, void *pValue, char **endptr);
extern int is_kcg_int16_double_conversion_allowed();
extern int kcg_int16_to_double(const void *pValue, double *nValue);
extern int is_kcg_int16_long_conversion_allowed();
extern int kcg_int16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int16(void *pValue);
extern int release_kcg_int16(void *pValue);
extern int copy_kcg_int16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int16_Utils;

/****************************************************************
 ** kcg_int32 
 ****************************************************************/
extern int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int32_string(const char *str, char **endptr);
extern int string_to_kcg_int32(const char *str, void *pValue, char **endptr);
extern int is_kcg_int32_double_conversion_allowed();
extern int kcg_int32_to_double(const void *pValue, double *nValue);
extern int is_kcg_int32_long_conversion_allowed();
extern int kcg_int32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int32(void *pValue);
extern int release_kcg_int32(void *pValue);
extern int copy_kcg_int32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int32_Utils;

/****************************************************************
 ** kcg_int64 
 ****************************************************************/
extern int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int64_string(const char *str, char **endptr);
extern int string_to_kcg_int64(const char *str, void *pValue, char **endptr);
extern int is_kcg_int64_double_conversion_allowed();
extern int kcg_int64_to_double(const void *pValue, double *nValue);
extern int is_kcg_int64_long_conversion_allowed();
extern int kcg_int64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int64(void *pValue);
extern int release_kcg_int64(void *pValue);
extern int copy_kcg_int64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int64_Utils;

/****************************************************************
 ** kcg_int8 
 ****************************************************************/
extern int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int8_string(const char *str, char **endptr);
extern int string_to_kcg_int8(const char *str, void *pValue, char **endptr);
extern int is_kcg_int8_double_conversion_allowed();
extern int kcg_int8_to_double(const void *pValue, double *nValue);
extern int is_kcg_int8_long_conversion_allowed();
extern int kcg_int8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_int8(void *pValue);
extern int release_kcg_int8(void *pValue);
extern int copy_kcg_int8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_int8_Utils;

/****************************************************************
 ** kcg_size 
 ****************************************************************/
extern int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_size_string(const char *str, char **endptr);
extern int string_to_kcg_size(const char *str, void *pValue, char **endptr);
extern int is_kcg_size_double_conversion_allowed();
extern int kcg_size_to_double(const void *pValue, double *nValue);
extern int is_kcg_size_long_conversion_allowed();
extern int kcg_size_to_long(const void *pValue, long *nValue);
extern void compare_kcg_size(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_size(void *pValue);
extern int release_kcg_size(void *pValue);
extern int copy_kcg_size(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_size_Utils;

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/
extern int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint16_string(const char *str, char **endptr);
extern int string_to_kcg_uint16(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint16_double_conversion_allowed();
extern int kcg_uint16_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint16_long_conversion_allowed();
extern int kcg_uint16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint16(void *pValue);
extern int release_kcg_uint16(void *pValue);
extern int copy_kcg_uint16(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint16_Utils;

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/
extern int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint32_string(const char *str, char **endptr);
extern int string_to_kcg_uint32(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint32_double_conversion_allowed();
extern int kcg_uint32_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint32_long_conversion_allowed();
extern int kcg_uint32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint32(void *pValue);
extern int release_kcg_uint32(void *pValue);
extern int copy_kcg_uint32(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint32_Utils;

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/
extern int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint64_string(const char *str, char **endptr);
extern int string_to_kcg_uint64(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint64_double_conversion_allowed();
extern int kcg_uint64_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint64_long_conversion_allowed();
extern int kcg_uint64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint64(void *pValue);
extern int release_kcg_uint64(void *pValue);
extern int copy_kcg_uint64(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint64_Utils;

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/
extern int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint8_string(const char *str, char **endptr);
extern int string_to_kcg_uint8(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint8_double_conversion_allowed();
extern int kcg_uint8_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint8_long_conversion_allowed();
extern int kcg_uint8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_kcg_uint8(void *pValue);
extern int release_kcg_uint8(void *pValue);
extern int copy_kcg_uint8(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_kcg_uint8_Utils;

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/
extern int SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_ST_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM1_double_conversion_allowed();
extern int SSM_ST_SM1_to_double(const void *pValue, double *nValue);
extern int is_SSM_ST_SM1_long_conversion_allowed();
extern int SSM_ST_SM1_to_long(const void *pValue, long *nValue);
extern void compare_SSM_ST_SM1(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_SSM_ST_SM1(void *pValue);
extern int release_SSM_ST_SM1(void *pValue);
extern int copy_SSM_ST_SM1(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_SSM_ST_SM1_Utils;

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/
extern int SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_TR_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM1_double_conversion_allowed();
extern int SSM_TR_SM1_to_double(const void *pValue, double *nValue);
extern int is_SSM_TR_SM1_long_conversion_allowed();
extern int SSM_TR_SM1_to_long(const void *pValue, long *nValue);
extern void compare_SSM_TR_SM1(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_SSM_TR_SM1(void *pValue);
extern int release_SSM_TR_SM1(void *pValue);
extern int copy_SSM_TR_SM1(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_SSM_TR_SM1_Utils;

/****************************************************************
 ** Strictness 
 ****************************************************************/
extern int Strictness_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_Strictness_string(const char *str, char **endptr);
extern int string_to_Strictness(const char *str, void *pValue, char **endptr);
extern int is_Strictness_double_conversion_allowed();
extern int Strictness_to_double(const void *pValue, double *nValue);
extern int is_Strictness_long_conversion_allowed();
extern int Strictness_to_long(const void *pValue, long *nValue);
extern void compare_Strictness(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_Strictness_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_Strictness(void *pValue);
extern int release_Strictness(void *pValue);
extern int copy_Strictness(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_Strictness_Utils;

/****************************************************************
 ** XStrictness 
 ****************************************************************/
extern int XStrictness_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_XStrictness_string(const char *str, char **endptr);
extern int string_to_XStrictness(const char *str, void *pValue, char **endptr);
extern int is_XStrictness_double_conversion_allowed();
extern int XStrictness_to_double(const void *pValue, double *nValue);
extern int is_XStrictness_long_conversion_allowed();
extern int XStrictness_to_long(const void *pValue, long *nValue);
extern void compare_XStrictness(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_XStrictness_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int init_XStrictness(void *pValue);
extern int release_XStrictness(void *pValue);
extern int copy_XStrictness(void *pToValue, const void *pFromValue);
extern SimTypeUtils _Type_XStrictness_Utils;


#endif /*SCADETERS2_TYPES_CONVERSION */
