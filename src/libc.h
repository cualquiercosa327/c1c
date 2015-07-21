#ifndef LIBC_H
#define LIBC_H

#include "common.h"
#include "emu.h"

#ifdef __cplusplus
extern "C" {
#endif

extern uint32_t LIBC_Malloc(uint32_t size);
extern uint32_t LIBC_Realloc(uint32_t ptr, uint32_t size);
extern uint32_t LIBC_Calloc(uint32_t num, uint32_t size);
extern void LIBC_Free(uint32_t ptr);

#ifdef __cplusplus
}
#endif

#endif