#ifndef H_PCSX_H
#define H_PCSX_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

extern uint8_t (*PCSX_Read8)(uint32_t address);
extern uint16_t (*PCSX_Read16)(uint32_t address);
extern uint32_t (*PCSX_Read32)(uint32_t address);

extern void (*PCSX_Write8)(uint32_t address,uint8_t value);
extern void (*PCSX_Write16)(uint32_t address,uint16_t value);
extern void (*PCSX_Write32)(uint32_t address,uint32_t value);

extern uint32_t (*PCSX_ReadCOPData)(int copid,int reg);
extern void (*PCSX_WriteCOPData)(int copid,int reg,uint32_t value);

extern uint32_t (*PCSX_ReadCOPControl)(int copid,int reg);
extern void (*PCSX_WriteCOPControl)(int copid,int reg,uint32_t value);

extern void (*PCSX_ExecuteCOP)(int copid,uint32_t copargs);

extern void (*PCSX_Syscall)(uint32_t pc);

extern void (*PCSX_Cycle)(int cycles);
extern uint32_t (*PCSX_RunInterrupts)(uint32_t pc);
extern uint32_t (*PCSX_ExecuteOnce)(uint32_t pc);
extern uint32_t (*PCSX_ExecuteOnceNoCycle)(uint32_t pc);
extern uint32_t (*PCSX_ExecuteBlock)(uint32_t address);
extern void (*PCSX_InvalidateICache)(void);

extern void PCSX_Init(void);

#ifdef __cplusplus
}
#endif

#endif