#ifndef ERROR_H
#define ERROR_H

#include "emu.h"

// Error Code Macros
#define ERROR_ISERRORCODE(x) ((uint32_t)x >= ERROR_CODE_ALLOCFAILED)
#define ERROR_ISSUCCESSCODE(x) ((uint32_t)x < ERROR_CODE_ALLOCFAILED)
#define ERROR_RETURNCODE(x) \
(ERROR_ISERRORCODE(x) ? ERROR_CODE_INVALID : ERROR_CODE_SUCCESS)

// Common Error Codes
#define ERROR_CODE_SUCCESS 0xFFFFFF01
#define ERROR_CODE_ALLOCFAILED 0xFFFFFF02
#define ERROR_CODE_INVALIDSTATE 0xFFFFFFE5
#define ERROR_CODE_INVALIDSTATERETURN 0xFFFFFFE6
#define ERROR_CODE_INVALIDRETURN 0xFFFFFFE7
#define ERROR_CODE_OBJECTPOOLFULL 0xFFFFFFEA
#define ERROR_CODE_INVALID 0xFFFFFFF2

#endif